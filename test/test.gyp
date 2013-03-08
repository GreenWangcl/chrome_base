{
  'targets' : [
    {
      'target_name': 'test',
      'type': 'executable',
      'mac_bundle': 1,
      'dependencies':[
        '<(DEPTH)/base/base.gyp:base',
      ],
      'sources': [
        'test.cpp',
      ],
      
      'conditions': [
        ['OS == "ios"', {
          'xcode_settings': {
            'INFOPLIST_FILE': 'test-Info.plist',
            'IPHONEOS_DEPLOYMENT_TARGET': '6.0',

            # Enable Pre-defined Compiled Headers.
            'GCC_PRECOMPILE_PREFIX_HEADER': 'YES',

            # Require Code-signing.
            'CODE_SIGN_IDENTITY[sdk=iphoneos*]': 'iPhone Developer',

            'SKIP_INSTALL': 'NO',
            'WRAPPER_EXTENSION': 'app',
          },#end xcode_settings
        }], #end OS == "ios"
      ],#end conditions
      
    },
  ],

}