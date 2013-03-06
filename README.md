chrome_base
===========

Porting base library from chrome. Chrome revision 185341.

Getting the code:
1.Use git
git clone https://github.com/GreenWangcl/chrome_base.git
2.Use gclient
gclient config https://github.com/GreenWangcl/chrome_base.git
gclient sync

Configuring
1.For ios
run build_base_ios.sh

2.For Linux
run build_base_linux.sh


Build base
1.For ios
cd src/
xcodebuild -project base/base.xcodeproj -target "base" -configuration Release -sdk iphoneos build

2.For Linux
cd src/
make base