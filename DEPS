vars = {
  'chromium_svn': 'http://src.chromium.org/svn/trunk/src',
  'chromium_rev': '185341',
  'chromium_trunk': 'http://src.chromium.org/svn/trunk',
  'chromium_rev': '185341',
  "googlecode_url": "http://%s.googlecode.com/svn",
  
  "nacl_trunk": "http://src.chromium.org/native_client/trunk",
  "nacl_revision": "10912",
}

use_relative_paths = "./chrome_base"

deps = {
  # build tools
  'src/build':
    Var('chromium_svn')+'/build@'+Var('chromium_rev'),
  'src/google_apis':
    Var('chromium_svn')+'/google_apis@'+Var('chromium_rev'),
  "src/tools/gyp":
    (Var("googlecode_url") % "gyp") + "/trunk@1589",
  'src/tools/clang':
    Var('chromium_svn')+'/tools/clang@'+Var('chromium_rev'),

  # Basic tools
  'src/base':
    Var('chromium_svn')+'/base@'+Var('chromium_rev'),

  "src/testing":
    (Var("chromium_svn")+"/testing@")+Var('chromium_rev'),
  "src/testing/gtest":
    (Var("googlecode_url") % "googletest") + "/trunk@629",
  "src/testing/gmock":
    (Var("googlecode_url") % "googlemock") + "/trunk@410",
    
  "src/third_party/icu":
    Var('chromium_trunk')+"/deps/third_party/icu46@182486",
  'src/third_party/libevent':
    Var('chromium_svn')+'/third_party/libevent@'+Var('chromium_rev'),
  #'src/third_party/llvm-build':
  #  Var('chromium_svn')+'/third_party/llvm-build@'+Var('chromium_rev'),
  'src/third_party/modp_b64':
    Var('chromium_svn')+'/third_party/modp_b64@'+Var('chromium_rev'),
    
  # For ios
  # class-dump utility to generate header files for undocumented SDKs
  "src/testing/iossim/third_party/class-dump":
    Var('chromium_trunk')+"/deps/third_party/class-dump@147231",
    
  # For Unix
  # class-dump utility to generate header files for undocumented SDKs
  "src/net/third_party/nss":
    Var('chromium_svn')+'/net/third_party/nss@'+Var('chromium_rev'),
}

deps_os = {
  "ios": {
    # class-dump utility to generate header files for undocumented SDKs
    "src/testing/iossim/third_party/class-dump":
      Var('chromium_trunk')+"/deps/third_party/class-dump@147231",
  },
}

include_rules = [
  # Everybody can use some things.
  '+base',
  
  "+testing",
]


# checkdeps.py shouldn't check include paths for files in these dirs:
skip_child_includes = [
  "testing",
  "third_party",
]