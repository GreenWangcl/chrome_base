//===-- BuildVariables.inc.in - llvm-config build variables -*- C++ -*-----===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is configured by the build system to define the variables
// llvm-config wants to report to the user, but which can only be determined at
// build time.
//
// The non .in variant of this file has been autogenerated by the LLVM build. Do
// not edit!
//
//===----------------------------------------------------------------------===//

#define LLVM_SRC_ROOT "/Users/greenwang/chrome_ios/src/third_party/llvm"
#define LLVM_OBJ_ROOT "/Users/greenwang/chrome_ios/src/third_party/llvm-build"
#define LLVM_CPPFLAGS " -D_DEBUG -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"
#define LLVM_CFLAGS " -D_DEBUG -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -O3  -fno-common"
#define LLVM_LDFLAGS ""
#define LLVM_CXXFLAGS " -D_DEBUG -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -O3  -fvisibility-inlines-hidden -fno-exceptions -fno-rtti -fno-common -Woverloaded-virtual -Wcast-qual"
#define LLVM_BUILDMODE "Release+Asserts"
#define LLVM_TARGETS_BUILT "X86 Sparc PowerPC AArch64 ARM Mips XCore MSP430 CppBackend MBlaze NVPTX Hexagon"
#define LLVM_SYSTEM_LIBS "-lm "
