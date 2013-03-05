# Copyright (c) 2012 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

import glob
import logging
import os

from pylib import android_commands
from pylib import constants
from pylib import perf_tests_helper
from pylib.android_commands import errors
from pylib.base import new_base_test_runner as base_test_runner
from pylib.base import test_result
from pylib.utils import run_tests_helper

import test_package_apk
import test_package_executable


def _GetDataFilesForTestSuite(test_suite_basename):
  """Returns a list of data files/dirs needed by the test suite.

  Args:
    test_suite_basename: The test suite basename for which to return file paths.

  Returns:
    A list of test file and directory paths.
  """
  # Ideally, we'd just push all test data. However, it has >100MB, and a lot
  # of the files are not relevant (some are used for browser_tests, others for
  # features not supported, etc..).
  if test_suite_basename in ['base_unittests', 'sql_unittests', 'unit_tests']:
    test_files = [
        'base/data/file_util_unittest',
        'base/data/json/bom_feff.json',
        'base/prefs/test/data/pref_service',
        'chrome/test/data/download-test1.lib',
        'chrome/test/data/extensions/bad_magic.crx',
        'chrome/test/data/extensions/good.crx',
        'chrome/test/data/extensions/icon1.png',
        'chrome/test/data/extensions/icon2.png',
        'chrome/test/data/extensions/icon3.png',
        'chrome/test/data/extensions/allow_silent_upgrade/',
        'chrome/test/data/extensions/app/',
        'chrome/test/data/extensions/bad/',
        'chrome/test/data/extensions/effective_host_permissions/',
        'chrome/test/data/extensions/empty_manifest/',
        'chrome/test/data/extensions/good/Extensions/',
        'chrome/test/data/extensions/manifest_tests/',
        'chrome/test/data/extensions/page_action/',
        'chrome/test/data/extensions/permissions/',
        'chrome/test/data/extensions/script_and_capture/',
        'chrome/test/data/extensions/unpacker/',
        'chrome/test/data/bookmarks/',
        'chrome/test/data/components/',
        'chrome/test/data/extensions/json_schema_test.js',
        'chrome/test/data/History/',
        'chrome/test/data/json_schema_validator/',
        'chrome/test/data/pref_service/',
        'chrome/test/data/serializer_nested_test.js',
        'chrome/test/data/serializer_test.js',
        'chrome/test/data/serializer_test_nowhitespace.js',
        'chrome/test/data/top_sites/',
        'chrome/test/data/web_app_info/',
        'chrome/test/data/web_database',
        'chrome/test/data/webui/',
        'chrome/test/data/zip',
        'chrome/third_party/mock4js/',
        'content/browser/gpu/software_rendering_list.json',
        'net/data/cache_tests/insert_load1',
        'net/data/cache_tests/dirty_entry5',
        'net/data/ssl/certificates/',
        'third_party/accessibility-developer-tools/gen/axs_testing.js',
        'ui/base/test/data/data_pack_unittest',
    ]
    if test_suite_basename == 'unit_tests':
      test_files += ['chrome/test/data/simple_open_search.xml']
      # The following are spell check data. Now only list the data under
      # third_party/hunspell_dictionaries which are used by unit tests.
      old_cwd = os.getcwd()
      os.chdir(constants.CHROME_DIR)
      test_files += glob.glob('third_party/hunspell_dictionaries/*.bdic')
      os.chdir(old_cwd)
    return test_files
  elif test_suite_basename == 'media_unittests':
    return [
        'media/test/data',
    ]
  elif test_suite_basename == 'net_unittests':
    return [
        'chrome/test/data/animate1.gif',
        'chrome/test/data/simple.html',
        'net/data/cache_tests',
        'net/data/filter_unittests',
        'net/data/ftp',
        'net/data/proxy_resolver_v8_tracing_unittest',
        'net/data/proxy_resolver_v8_unittest',
        'net/data/ssl/certificates',
        'net/data/url_request_unittest/',
        'net/data/proxy_script_fetcher_unittest'
        ]
  elif test_suite_basename == 'ui_tests':
    return [
        'chrome/test/data/dromaeo',
        'chrome/test/data/json2.js',
        'chrome/test/data/sunspider',
        ]
  elif test_suite_basename == 'content_unittests':
    return [
        'content/test/data/gpu/webgl_conformance_test_expectations.txt',
        'net/data/ssl/certificates/',
        'webkit/data/dom_storage/webcore_test_database.localstorage',
        'third_party/hyphen/hyph_en_US.dic',
        ]
  elif test_suite_basename == 'media_unittests':
    return [
        'media/test/data',
        ]
  elif test_suite_basename == 'cc_perftests':
    return [
      'cc/test/data',
    ]
  elif test_suite_basename == 'content_browsertests':
    return [
      'content/test/data',
    ]
  return []


def _TestSuiteRequiresMockTestServer(test_suite_basename):
  """Returns True if the test suite requires mock test server."""
  tests_require_net_test_server = ['unit_tests', 'net_unittests',
                                   'content_unittests',
                                   'content_browsertests']
  return (test_suite_basename in
          tests_require_net_test_server)


class TestRunner(base_test_runner.BaseTestRunner):
  """Single test suite attached to a single device.

  Args:
    device: Device to run the tests.
    test_suite: A specific test suite to run, empty to run all.
    test_arguments: Additional arguments to pass to the test binary.
    timeout: Timeout for each test.
    cleanup_test_files: Whether or not to cleanup test files on device.
    tool_name: Name of the Valgrind tool.
    build_type: 'Release' or 'Debug'.
    in_webkit_checkout: Whether the suite is being run from a WebKit checkout.
    test_apk_package_name: Apk package name for tests running in APKs.
    test_activity_name: Test activity to invoke for APK tests.
    command_line_file: Filename to use to pass arguments to tests.
  """

  def __init__(self, device, test_suite, test_arguments, timeout,
               cleanup_test_files, tool_name, build_type,
               in_webkit_checkout, test_apk_package_name=None,
               test_activity_name=None, command_line_file=None):
    super(TestRunner, self).__init__(device, tool_name, build_type)
    self._running_on_emulator = self.device.startswith('emulator')
    self._test_arguments = test_arguments
    self.in_webkit_checkout = in_webkit_checkout
    self._cleanup_test_files = cleanup_test_files

    logging.warning('Test suite: ' + test_suite)
    if os.path.splitext(test_suite)[1] == '.apk':
      self.test_package = test_package_apk.TestPackageApk(
          self.adb,
          device,
          test_suite,
          timeout,
          self._cleanup_test_files,
          self.tool,
          test_apk_package_name,
          test_activity_name,
          command_line_file)
    else:
      # Put a copy into the android out/target directory, to allow stack trace
      # generation.
      symbols_dir = os.path.join(constants.CHROME_DIR, 'out', build_type,
                                 'lib.target')
      self.test_package = test_package_executable.TestPackageExecutable(
          self.adb,
          device,
          test_suite,
          timeout,
          self._cleanup_test_files,
          self.tool,
          symbols_dir)


  def StripAndCopyFiles(self):
    """Strips and copies the required data files for the test suite."""
    self.test_package.StripAndCopyExecutable()
    self.test_package.PushDataAndPakFiles()
    self.tool.CopyFiles()
    test_data = _GetDataFilesForTestSuite(self.test_package.test_suite_basename)
    if test_data:
      # Make sure SD card is ready.
      self.adb.WaitForSdCardReady(20)
      for data in test_data:
        self.CopyTestData([data], self.adb.GetExternalStorage())
    if self.test_package.test_suite_basename == 'webkit_unit_tests':
      self.PushWebKitUnitTestsData()

  def PushWebKitUnitTestsData(self):
    """Pushes the webkit_unit_tests data files to the device.

    The path of this directory is different when the suite is being run as
    part of a WebKit check-out.
    """
    webkit_src = os.path.join(constants.CHROME_DIR, 'third_party', 'WebKit')
    if self.in_webkit_checkout:
      webkit_src = os.path.join(constants.CHROME_DIR, '..', '..', '..')

    self.adb.PushIfNeeded(
        os.path.join(webkit_src, 'Source/WebKit/chromium/tests/data'),
        os.path.join(
            self.adb.GetExternalStorage(),
            'third_party/WebKit/Source/WebKit/chromium/tests/data'))

  # TODO(craigdh): There is no reason for this to be part of TestRunner.
  def GetDisabledTests(self):
    """Returns a list of disabled tests.

    Returns:
      A list of disabled tests obtained from 'filter' subdirectory.
    """
    gtest_filter_base_path = os.path.join(
        os.path.abspath(os.path.dirname(__file__)),
        'filter',
        self.test_package.test_suite_basename)
    disabled_tests = run_tests_helper.GetExpectations(
       gtest_filter_base_path + '_disabled')
    if self._running_on_emulator:
      # Append emulator's filter file.
      disabled_tests.extend(run_tests_helper.GetExpectations(
          gtest_filter_base_path + '_emulator_additional_disabled'))
    return disabled_tests

  #override
  def RunTest(self, test):
    """Runs a test on a single device.

    Args:
      test: a gtest filter string to run.

    Returns:
      Tuple: (TestResults, test to retry or None)
    """
    test_results = test_result.TestResults()
    if not test:
      return test_results, None

    try:
      self.test_package.ClearApplicationState()
      self.test_package.CreateTestRunnerScript(test, self._test_arguments)
      test_results = self.test_package.RunTestsAndListResults()
    except errors.DeviceUnresponsiveError as e:
      # Make sure this device is not attached
      logging.warning(e)
      if android_commands.IsDeviceAttached(self.device):
        raise
    # Calculate unknown test results.
    # TODO(frankf): Do not break TestResults encapsulation.
    all_tests = set(test.split(':'))
    all_tests_ran = set([t.name for t in test_results.GetAll()])
    unknown_tests = all_tests - all_tests_ran
    test_results.unknown = [test_result.BaseTestResult(t, '') for t in
                            unknown_tests]
    retry = ':'.join([t.name for t in test_results.GetAllBroken()])
    return test_results, retry

  #override
  def SetUp(self):
    """Sets up necessary test enviroment for the test suite."""
    super(TestRunner, self).SetUp()
    self.StripAndCopyFiles()
    if _TestSuiteRequiresMockTestServer(self.test_package.test_suite_basename):
      self.LaunchChromeTestServerSpawner()
    self.tool.SetupEnvironment()

  #override
  def TearDown(self):
    """Cleans up the test enviroment for the test suite."""
    self.tool.CleanUpEnvironment()
    if self._cleanup_test_files:
      self.adb.RemovePushedFiles()
    super(TestRunner, self).TearDown()
