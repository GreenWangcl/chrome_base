/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * AArch64 Disassembler                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTableA6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 3,  // Inst{28-26} ...
/* 3 */       MCD::OPC_FilterValue, 2, 152, 11, // Skip to: 2975
/* 7 */       MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 209
/* 14 */      MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 17 */      MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 52
/* 21 */      MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 24 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 38
/* 28 */      MCD::OPC_CheckField, 21, 1, 0, 161, 36, // Skip to: 9411
/* 34 */      MCD::OPC_Decode, 222, 5, 0, // Opcode: STXR_byte
/* 38 */      MCD::OPC_FilterValue, 1, 153, 36, // Skip to: 9411
/* 42 */      MCD::OPC_CheckField, 21, 1, 0, 147, 36, // Skip to: 9411
/* 48 */      MCD::OPC_Decode, 216, 5, 0, // Opcode: STLXR_byte
/* 52 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 241, 4, 1, // Opcode: LSPair32_NonTemp_STR
/* 60 */      MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 95
/* 64 */      MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 67 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 81
/* 71 */      MCD::OPC_CheckField, 21, 1, 0, 118, 36, // Skip to: 9411
/* 77 */      MCD::OPC_Decode, 224, 5, 0, // Opcode: STXR_hword
/* 81 */      MCD::OPC_FilterValue, 1, 110, 36, // Skip to: 9411
/* 85 */      MCD::OPC_CheckField, 21, 1, 0, 104, 36, // Skip to: 9411
/* 91 */      MCD::OPC_Decode, 218, 5, 0, // Opcode: STLXR_hword
/* 95 */      MCD::OPC_FilterValue, 4, 49, 0, // Skip to: 148
/* 99 */      MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 102 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 125
/* 106 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 109 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 117
/* 113 */     MCD::OPC_Decode, 225, 5, 0, // Opcode: STXR_word
/* 117 */     MCD::OPC_FilterValue, 1, 74, 36, // Skip to: 9411
/* 121 */     MCD::OPC_Decode, 221, 5, 2, // Opcode: STXP_word
/* 125 */     MCD::OPC_FilterValue, 1, 66, 36, // Skip to: 9411
/* 129 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 132 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 140
/* 136 */     MCD::OPC_Decode, 219, 5, 0, // Opcode: STLXR_word
/* 140 */     MCD::OPC_FilterValue, 1, 51, 36, // Skip to: 9411
/* 144 */     MCD::OPC_Decode, 215, 5, 2, // Opcode: STLXP_word
/* 148 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 249, 4, 1, // Opcode: LSPair64_NonTemp_STR
/* 156 */     MCD::OPC_FilterValue, 6, 35, 36, // Skip to: 9411
/* 160 */     MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 163 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 186
/* 167 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 170 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 178
/* 174 */     MCD::OPC_Decode, 223, 5, 3, // Opcode: STXR_dword
/* 178 */     MCD::OPC_FilterValue, 1, 13, 36, // Skip to: 9411
/* 182 */     MCD::OPC_Decode, 220, 5, 4, // Opcode: STXP_dword
/* 186 */     MCD::OPC_FilterValue, 1, 5, 36, // Skip to: 9411
/* 190 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 193 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 201
/* 197 */     MCD::OPC_Decode, 217, 5, 3, // Opcode: STLXR_dword
/* 201 */     MCD::OPC_FilterValue, 1, 246, 35, // Skip to: 9411
/* 205 */     MCD::OPC_Decode, 214, 5, 4, // Opcode: STLXP_dword
/* 209 */     MCD::OPC_FilterValue, 1, 195, 0, // Skip to: 408
/* 213 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 216 */     MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 251
/* 220 */     MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 223 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 237
/* 227 */     MCD::OPC_CheckField, 21, 1, 0, 218, 35, // Skip to: 9411
/* 233 */     MCD::OPC_Decode, 219, 3, 5, // Opcode: LDXR_byte
/* 237 */     MCD::OPC_FilterValue, 1, 210, 35, // Skip to: 9411
/* 241 */     MCD::OPC_CheckField, 21, 1, 0, 204, 35, // Skip to: 9411
/* 247 */     MCD::OPC_Decode, 169, 3, 5, // Opcode: LDAXR_byte
/* 251 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 259
/* 255 */     MCD::OPC_Decode, 240, 4, 1, // Opcode: LSPair32_NonTemp_LDR
/* 259 */     MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 294
/* 263 */     MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 266 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 280
/* 270 */     MCD::OPC_CheckField, 21, 1, 0, 175, 35, // Skip to: 9411
/* 276 */     MCD::OPC_Decode, 221, 3, 5, // Opcode: LDXR_hword
/* 280 */     MCD::OPC_FilterValue, 1, 167, 35, // Skip to: 9411
/* 284 */     MCD::OPC_CheckField, 21, 1, 0, 161, 35, // Skip to: 9411
/* 290 */     MCD::OPC_Decode, 171, 3, 5, // Opcode: LDAXR_hword
/* 294 */     MCD::OPC_FilterValue, 4, 49, 0, // Skip to: 347
/* 298 */     MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 301 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 324
/* 305 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 308 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 316
/* 312 */     MCD::OPC_Decode, 222, 3, 5, // Opcode: LDXR_word
/* 316 */     MCD::OPC_FilterValue, 1, 131, 35, // Skip to: 9411
/* 320 */     MCD::OPC_Decode, 218, 3, 6, // Opcode: LDXP_word
/* 324 */     MCD::OPC_FilterValue, 1, 123, 35, // Skip to: 9411
/* 328 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 331 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 339
/* 335 */     MCD::OPC_Decode, 172, 3, 5, // Opcode: LDAXR_word
/* 339 */     MCD::OPC_FilterValue, 1, 108, 35, // Skip to: 9411
/* 343 */     MCD::OPC_Decode, 168, 3, 6, // Opcode: LDAXP_word
/* 347 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 248, 4, 1, // Opcode: LSPair64_NonTemp_LDR
/* 355 */     MCD::OPC_FilterValue, 6, 92, 35, // Skip to: 9411
/* 359 */     MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 362 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 385
/* 366 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 369 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 377
/* 373 */     MCD::OPC_Decode, 220, 3, 7, // Opcode: LDXR_dword
/* 377 */     MCD::OPC_FilterValue, 1, 70, 35, // Skip to: 9411
/* 381 */     MCD::OPC_Decode, 217, 3, 6, // Opcode: LDXP_dword
/* 385 */     MCD::OPC_FilterValue, 1, 62, 35, // Skip to: 9411
/* 389 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 392 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 400
/* 396 */     MCD::OPC_Decode, 170, 3, 7, // Opcode: LDAXR_dword
/* 400 */     MCD::OPC_FilterValue, 1, 47, 35, // Skip to: 9411
/* 404 */     MCD::OPC_Decode, 167, 3, 6, // Opcode: LDAXP_dword
/* 408 */     MCD::OPC_FilterValue, 2, 99, 0, // Skip to: 511
/* 412 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 415 */     MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 435
/* 419 */     MCD::OPC_CheckField, 21, 1, 0, 26, 35, // Skip to: 9411
/* 425 */     MCD::OPC_CheckField, 15, 1, 1, 20, 35, // Skip to: 9411
/* 431 */     MCD::OPC_Decode, 210, 5, 5, // Opcode: STLR_byte
/* 435 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 243, 4, 1, // Opcode: LSPair32_PostInd_STR
/* 443 */     MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 463
/* 447 */     MCD::OPC_CheckField, 21, 1, 0, 254, 34, // Skip to: 9411
/* 453 */     MCD::OPC_CheckField, 15, 1, 1, 248, 34, // Skip to: 9411
/* 459 */     MCD::OPC_Decode, 212, 5, 5, // Opcode: STLR_hword
/* 463 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 483
/* 467 */     MCD::OPC_CheckField, 21, 1, 0, 234, 34, // Skip to: 9411
/* 473 */     MCD::OPC_CheckField, 15, 1, 1, 228, 34, // Skip to: 9411
/* 479 */     MCD::OPC_Decode, 213, 5, 5, // Opcode: STLR_word
/* 483 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 491
/* 487 */     MCD::OPC_Decode, 251, 4, 1, // Opcode: LSPair64_PostInd_STR
/* 491 */     MCD::OPC_FilterValue, 6, 212, 34, // Skip to: 9411
/* 495 */     MCD::OPC_CheckField, 21, 1, 0, 206, 34, // Skip to: 9411
/* 501 */     MCD::OPC_CheckField, 15, 1, 1, 200, 34, // Skip to: 9411
/* 507 */     MCD::OPC_Decode, 211, 5, 7, // Opcode: STLR_dword
/* 511 */     MCD::OPC_FilterValue, 3, 107, 0, // Skip to: 622
/* 515 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 518 */     MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 538
/* 522 */     MCD::OPC_CheckField, 21, 1, 0, 179, 34, // Skip to: 9411
/* 528 */     MCD::OPC_CheckField, 15, 1, 1, 173, 34, // Skip to: 9411
/* 534 */     MCD::OPC_Decode, 163, 3, 5, // Opcode: LDAR_byte
/* 538 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 546
/* 542 */     MCD::OPC_Decode, 242, 4, 1, // Opcode: LSPair32_PostInd_LDR
/* 546 */     MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 566
/* 550 */     MCD::OPC_CheckField, 21, 1, 0, 151, 34, // Skip to: 9411
/* 556 */     MCD::OPC_CheckField, 15, 1, 1, 145, 34, // Skip to: 9411
/* 562 */     MCD::OPC_Decode, 165, 3, 5, // Opcode: LDAR_hword
/* 566 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 574
/* 570 */     MCD::OPC_Decode, 174, 3, 1, // Opcode: LDPSWx_PostInd
/* 574 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 594
/* 578 */     MCD::OPC_CheckField, 21, 1, 0, 123, 34, // Skip to: 9411
/* 584 */     MCD::OPC_CheckField, 15, 1, 1, 117, 34, // Skip to: 9411
/* 590 */     MCD::OPC_Decode, 166, 3, 5, // Opcode: LDAR_word
/* 594 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 250, 4, 1, // Opcode: LSPair64_PostInd_LDR
/* 602 */     MCD::OPC_FilterValue, 6, 101, 34, // Skip to: 9411
/* 606 */     MCD::OPC_CheckField, 21, 1, 0, 95, 34, // Skip to: 9411
/* 612 */     MCD::OPC_CheckField, 15, 1, 1, 89, 34, // Skip to: 9411
/* 618 */     MCD::OPC_Decode, 164, 3, 7, // Opcode: LDAR_dword
/* 622 */     MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 645
/* 626 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 629 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 246, 4, 1, // Opcode: LSPair32_STR
/* 637 */     MCD::OPC_FilterValue, 5, 66, 34, // Skip to: 9411
/* 641 */     MCD::OPC_Decode, 254, 4, 1, // Opcode: LSPair64_STR
/* 645 */     MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 676
/* 649 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 652 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 660
/* 656 */     MCD::OPC_Decode, 239, 4, 1, // Opcode: LSPair32_LDR
/* 660 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 668
/* 664 */     MCD::OPC_Decode, 173, 3, 1, // Opcode: LDPSWx
/* 668 */     MCD::OPC_FilterValue, 5, 35, 34, // Skip to: 9411
/* 672 */     MCD::OPC_Decode, 247, 4, 1, // Opcode: LSPair64_LDR
/* 676 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 699
/* 680 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 683 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 691
/* 687 */     MCD::OPC_Decode, 245, 4, 1, // Opcode: LSPair32_PreInd_STR
/* 691 */     MCD::OPC_FilterValue, 5, 12, 34, // Skip to: 9411
/* 695 */     MCD::OPC_Decode, 253, 4, 1, // Opcode: LSPair64_PreInd_STR
/* 699 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 730
/* 703 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 706 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 714
/* 710 */     MCD::OPC_Decode, 244, 4, 1, // Opcode: LSPair32_PreInd_LDR
/* 714 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 722
/* 718 */     MCD::OPC_Decode, 175, 3, 1, // Opcode: LDPSWx_PreInd
/* 722 */     MCD::OPC_FilterValue, 5, 237, 33, // Skip to: 9411
/* 726 */     MCD::OPC_Decode, 252, 4, 1, // Opcode: LSPair64_PreInd_LDR
/* 730 */     MCD::OPC_FilterValue, 8, 223, 0, // Skip to: 957
/* 734 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 737 */     MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 759
/* 741 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 744 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 751
/* 748 */     MCD::OPC_Decode, 93, 8, // Opcode: ANDwww_lsl
/* 751 */     MCD::OPC_FilterValue, 1, 208, 33, // Skip to: 9411
/* 755 */     MCD::OPC_Decode, 169, 1, 8, // Opcode: BICwww_lsl
/* 759 */     MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 792
/* 763 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 766 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 774
/* 770 */     MCD::OPC_Decode, 162, 5, 8, // Opcode: ORRwww_lsl
/* 774 */     MCD::OPC_FilterValue, 1, 185, 33, // Skip to: 9411
/* 778 */     MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 788
/* 784 */     MCD::OPC_Decode, 145, 5, 9, // Opcode: MVNww_lsl
/* 788 */     MCD::OPC_Decode, 153, 5, 8, // Opcode: ORNwww_lsl
/* 792 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 815
/* 796 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 799 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 807
/* 803 */     MCD::OPC_Decode, 149, 2, 8, // Opcode: EORwww_lsl
/* 807 */     MCD::OPC_FilterValue, 1, 152, 33, // Skip to: 9411
/* 811 */     MCD::OPC_Decode, 140, 2, 8, // Opcode: EONwww_lsl
/* 815 */     MCD::OPC_FilterValue, 3, 28, 0, // Skip to: 847
/* 819 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 822 */     MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 839
/* 826 */     MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 836
/* 832 */     MCD::OPC_Decode, 175, 6, 10, // Opcode: TSTww_lsl
/* 836 */     MCD::OPC_Decode, 83, 8, // Opcode: ANDSwww_lsl
/* 839 */     MCD::OPC_FilterValue, 1, 120, 33, // Skip to: 9411
/* 843 */     MCD::OPC_Decode, 161, 1, 8, // Opcode: BICSwww_lsl
/* 847 */     MCD::OPC_FilterValue, 4, 18, 0, // Skip to: 869
/* 851 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 854 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 861
/* 858 */     MCD::OPC_Decode, 98, 11, // Opcode: ANDxxx_lsl
/* 861 */     MCD::OPC_FilterValue, 1, 98, 33, // Skip to: 9411
/* 865 */     MCD::OPC_Decode, 173, 1, 11, // Opcode: BICxxx_lsl
/* 869 */     MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 902
/* 873 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 876 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 884
/* 880 */     MCD::OPC_Decode, 167, 5, 11, // Opcode: ORRxxx_lsl
/* 884 */     MCD::OPC_FilterValue, 1, 75, 33, // Skip to: 9411
/* 888 */     MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 898
/* 894 */     MCD::OPC_Decode, 149, 5, 12, // Opcode: MVNxx_lsl
/* 898 */     MCD::OPC_Decode, 157, 5, 11, // Opcode: ORNxxx_lsl
/* 902 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 925
/* 906 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 909 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 917
/* 913 */     MCD::OPC_Decode, 154, 2, 11, // Opcode: EORxxx_lsl
/* 917 */     MCD::OPC_FilterValue, 1, 42, 33, // Skip to: 9411
/* 921 */     MCD::OPC_Decode, 144, 2, 11, // Opcode: EONxxx_lsl
/* 925 */     MCD::OPC_FilterValue, 7, 34, 33, // Skip to: 9411
/* 929 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 932 */     MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 949
/* 936 */     MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 946
/* 942 */     MCD::OPC_Decode, 179, 6, 13, // Opcode: TSTxx_lsl
/* 946 */     MCD::OPC_Decode, 88, 11, // Opcode: ANDSxxx_lsl
/* 949 */     MCD::OPC_FilterValue, 1, 10, 33, // Skip to: 9411
/* 953 */     MCD::OPC_Decode, 165, 1, 11, // Opcode: BICSxxx_lsl
/* 957 */     MCD::OPC_FilterValue, 9, 223, 0, // Skip to: 1184
/* 961 */     MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 964 */     MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 986
/* 968 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 971 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 978
/* 975 */     MCD::OPC_Decode, 94, 8, // Opcode: ANDwww_lsr
/* 978 */     MCD::OPC_FilterValue, 1, 237, 32, // Skip to: 9411
/* 982 */     MCD::OPC_Decode, 170, 1, 8, // Opcode: BICwww_lsr
/* 986 */     MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 1019
/* 990 */     MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 993 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1001
/* 997 */     MCD::OPC_Decode, 163, 5, 8, // Opcode: ORRwww_lsr
/* 1001 */    MCD::OPC_FilterValue, 1, 214, 32, // Skip to: 9411
/* 1005 */    MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 1015
/* 1011 */    MCD::OPC_Decode, 146, 5, 9, // Opcode: MVNww_lsr
/* 1015 */    MCD::OPC_Decode, 154, 5, 8, // Opcode: ORNwww_lsr
/* 1019 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 1042
/* 1023 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1026 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1034
/* 1030 */    MCD::OPC_Decode, 150, 2, 8, // Opcode: EORwww_lsr
/* 1034 */    MCD::OPC_FilterValue, 1, 181, 32, // Skip to: 9411
/* 1038 */    MCD::OPC_Decode, 141, 2, 8, // Opcode: EONwww_lsr
/* 1042 */    MCD::OPC_FilterValue, 3, 28, 0, // Skip to: 1074
/* 1046 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1049 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1066
/* 1053 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1063
/* 1059 */    MCD::OPC_Decode, 176, 6, 10, // Opcode: TSTww_lsr
/* 1063 */    MCD::OPC_Decode, 84, 8, // Opcode: ANDSwww_lsr
/* 1066 */    MCD::OPC_FilterValue, 1, 149, 32, // Skip to: 9411
/* 1070 */    MCD::OPC_Decode, 162, 1, 8, // Opcode: BICSwww_lsr
/* 1074 */    MCD::OPC_FilterValue, 4, 18, 0, // Skip to: 1096
/* 1078 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1081 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1088
/* 1085 */    MCD::OPC_Decode, 99, 11, // Opcode: ANDxxx_lsr
/* 1088 */    MCD::OPC_FilterValue, 1, 127, 32, // Skip to: 9411
/* 1092 */    MCD::OPC_Decode, 174, 1, 11, // Opcode: BICxxx_lsr
/* 1096 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 1129
/* 1100 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1103 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1111
/* 1107 */    MCD::OPC_Decode, 168, 5, 11, // Opcode: ORRxxx_lsr
/* 1111 */    MCD::OPC_FilterValue, 1, 104, 32, // Skip to: 9411
/* 1115 */    MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 1125
/* 1121 */    MCD::OPC_Decode, 150, 5, 12, // Opcode: MVNxx_lsr
/* 1125 */    MCD::OPC_Decode, 158, 5, 11, // Opcode: ORNxxx_lsr
/* 1129 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 1152
/* 1133 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1136 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1144
/* 1140 */    MCD::OPC_Decode, 155, 2, 11, // Opcode: EORxxx_lsr
/* 1144 */    MCD::OPC_FilterValue, 1, 71, 32, // Skip to: 9411
/* 1148 */    MCD::OPC_Decode, 145, 2, 11, // Opcode: EONxxx_lsr
/* 1152 */    MCD::OPC_FilterValue, 7, 63, 32, // Skip to: 9411
/* 1156 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1159 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1176
/* 1163 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1173
/* 1169 */    MCD::OPC_Decode, 180, 6, 13, // Opcode: TSTxx_lsr
/* 1173 */    MCD::OPC_Decode, 89, 11, // Opcode: ANDSxxx_lsr
/* 1176 */    MCD::OPC_FilterValue, 1, 39, 32, // Skip to: 9411
/* 1180 */    MCD::OPC_Decode, 166, 1, 11, // Opcode: BICSxxx_lsr
/* 1184 */    MCD::OPC_FilterValue, 10, 223, 0, // Skip to: 1411
/* 1188 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 1191 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 1213
/* 1195 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1198 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1205
/* 1202 */    MCD::OPC_Decode, 92, 8, // Opcode: ANDwww_asr
/* 1205 */    MCD::OPC_FilterValue, 1, 10, 32, // Skip to: 9411
/* 1209 */    MCD::OPC_Decode, 168, 1, 8, // Opcode: BICwww_asr
/* 1213 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 1246
/* 1217 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1220 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1228
/* 1224 */    MCD::OPC_Decode, 161, 5, 8, // Opcode: ORRwww_asr
/* 1228 */    MCD::OPC_FilterValue, 1, 243, 31, // Skip to: 9411
/* 1232 */    MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 1242
/* 1238 */    MCD::OPC_Decode, 144, 5, 9, // Opcode: MVNww_asr
/* 1242 */    MCD::OPC_Decode, 152, 5, 8, // Opcode: ORNwww_asr
/* 1246 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 1269
/* 1250 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1253 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1261
/* 1257 */    MCD::OPC_Decode, 148, 2, 8, // Opcode: EORwww_asr
/* 1261 */    MCD::OPC_FilterValue, 1, 210, 31, // Skip to: 9411
/* 1265 */    MCD::OPC_Decode, 139, 2, 8, // Opcode: EONwww_asr
/* 1269 */    MCD::OPC_FilterValue, 3, 28, 0, // Skip to: 1301
/* 1273 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1276 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1293
/* 1280 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1290
/* 1286 */    MCD::OPC_Decode, 174, 6, 10, // Opcode: TSTww_asr
/* 1290 */    MCD::OPC_Decode, 82, 8, // Opcode: ANDSwww_asr
/* 1293 */    MCD::OPC_FilterValue, 1, 178, 31, // Skip to: 9411
/* 1297 */    MCD::OPC_Decode, 160, 1, 8, // Opcode: BICSwww_asr
/* 1301 */    MCD::OPC_FilterValue, 4, 18, 0, // Skip to: 1323
/* 1305 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1308 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1315
/* 1312 */    MCD::OPC_Decode, 97, 11, // Opcode: ANDxxx_asr
/* 1315 */    MCD::OPC_FilterValue, 1, 156, 31, // Skip to: 9411
/* 1319 */    MCD::OPC_Decode, 172, 1, 11, // Opcode: BICxxx_asr
/* 1323 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 1356
/* 1327 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1330 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1338
/* 1334 */    MCD::OPC_Decode, 166, 5, 11, // Opcode: ORRxxx_asr
/* 1338 */    MCD::OPC_FilterValue, 1, 133, 31, // Skip to: 9411
/* 1342 */    MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 1352
/* 1348 */    MCD::OPC_Decode, 148, 5, 12, // Opcode: MVNxx_asr
/* 1352 */    MCD::OPC_Decode, 156, 5, 11, // Opcode: ORNxxx_asr
/* 1356 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 1379
/* 1360 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1363 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1371
/* 1367 */    MCD::OPC_Decode, 153, 2, 11, // Opcode: EORxxx_asr
/* 1371 */    MCD::OPC_FilterValue, 1, 100, 31, // Skip to: 9411
/* 1375 */    MCD::OPC_Decode, 143, 2, 11, // Opcode: EONxxx_asr
/* 1379 */    MCD::OPC_FilterValue, 7, 92, 31, // Skip to: 9411
/* 1383 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1386 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1403
/* 1390 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1400
/* 1396 */    MCD::OPC_Decode, 178, 6, 13, // Opcode: TSTxx_asr
/* 1400 */    MCD::OPC_Decode, 87, 11, // Opcode: ANDSxxx_asr
/* 1403 */    MCD::OPC_FilterValue, 1, 68, 31, // Skip to: 9411
/* 1407 */    MCD::OPC_Decode, 164, 1, 11, // Opcode: BICSxxx_asr
/* 1411 */    MCD::OPC_FilterValue, 11, 223, 0, // Skip to: 1638
/* 1415 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 1418 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 1440
/* 1422 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1425 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1432
/* 1429 */    MCD::OPC_Decode, 95, 8, // Opcode: ANDwww_ror
/* 1432 */    MCD::OPC_FilterValue, 1, 39, 31, // Skip to: 9411
/* 1436 */    MCD::OPC_Decode, 171, 1, 8, // Opcode: BICwww_ror
/* 1440 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 1473
/* 1444 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1447 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1455
/* 1451 */    MCD::OPC_Decode, 164, 5, 8, // Opcode: ORRwww_ror
/* 1455 */    MCD::OPC_FilterValue, 1, 16, 31, // Skip to: 9411
/* 1459 */    MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 1469
/* 1465 */    MCD::OPC_Decode, 147, 5, 9, // Opcode: MVNww_ror
/* 1469 */    MCD::OPC_Decode, 155, 5, 8, // Opcode: ORNwww_ror
/* 1473 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 1496
/* 1477 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1480 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1488
/* 1484 */    MCD::OPC_Decode, 151, 2, 8, // Opcode: EORwww_ror
/* 1488 */    MCD::OPC_FilterValue, 1, 239, 30, // Skip to: 9411
/* 1492 */    MCD::OPC_Decode, 142, 2, 8, // Opcode: EONwww_ror
/* 1496 */    MCD::OPC_FilterValue, 3, 28, 0, // Skip to: 1528
/* 1500 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1503 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1520
/* 1507 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1517
/* 1513 */    MCD::OPC_Decode, 177, 6, 10, // Opcode: TSTww_ror
/* 1517 */    MCD::OPC_Decode, 85, 8, // Opcode: ANDSwww_ror
/* 1520 */    MCD::OPC_FilterValue, 1, 207, 30, // Skip to: 9411
/* 1524 */    MCD::OPC_Decode, 163, 1, 8, // Opcode: BICSwww_ror
/* 1528 */    MCD::OPC_FilterValue, 4, 18, 0, // Skip to: 1550
/* 1532 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1535 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1542
/* 1539 */    MCD::OPC_Decode, 100, 11, // Opcode: ANDxxx_ror
/* 1542 */    MCD::OPC_FilterValue, 1, 185, 30, // Skip to: 9411
/* 1546 */    MCD::OPC_Decode, 175, 1, 11, // Opcode: BICxxx_ror
/* 1550 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 1583
/* 1554 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1557 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1565
/* 1561 */    MCD::OPC_Decode, 169, 5, 11, // Opcode: ORRxxx_ror
/* 1565 */    MCD::OPC_FilterValue, 1, 162, 30, // Skip to: 9411
/* 1569 */    MCD::OPC_CheckField, 5, 5, 31, 4, 0, // Skip to: 1579
/* 1575 */    MCD::OPC_Decode, 151, 5, 12, // Opcode: MVNxx_ror
/* 1579 */    MCD::OPC_Decode, 159, 5, 11, // Opcode: ORNxxx_ror
/* 1583 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 1606
/* 1587 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1590 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1598
/* 1594 */    MCD::OPC_Decode, 156, 2, 11, // Opcode: EORxxx_ror
/* 1598 */    MCD::OPC_FilterValue, 1, 129, 30, // Skip to: 9411
/* 1602 */    MCD::OPC_Decode, 146, 2, 11, // Opcode: EONxxx_ror
/* 1606 */    MCD::OPC_FilterValue, 7, 121, 30, // Skip to: 9411
/* 1610 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1613 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1630
/* 1617 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1627
/* 1623 */    MCD::OPC_Decode, 181, 6, 13, // Opcode: TSTxx_ror
/* 1627 */    MCD::OPC_Decode, 90, 11, // Opcode: ANDSxxx_ror
/* 1630 */    MCD::OPC_FilterValue, 1, 97, 30, // Skip to: 9411
/* 1634 */    MCD::OPC_Decode, 167, 1, 11, // Opcode: BICSxxx_ror
/* 1638 */    MCD::OPC_FilterValue, 12, 247, 3, // Skip to: 2657
/* 1642 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 1645 */    MCD::OPC_FilterValue, 0, 73, 0, // Skip to: 1722
/* 1649 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1652 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1659
/* 1656 */    MCD::OPC_Decode, 50, 8, // Opcode: ADDwww_lsl
/* 1659 */    MCD::OPC_FilterValue, 1, 68, 30, // Skip to: 9411
/* 1663 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 1666 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1673
/* 1670 */    MCD::OPC_Decode, 56, 14, // Opcode: ADDwww_uxtb
/* 1673 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1680
/* 1677 */    MCD::OPC_Decode, 57, 14, // Opcode: ADDwww_uxth
/* 1680 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 1687
/* 1684 */    MCD::OPC_Decode, 58, 14, // Opcode: ADDwww_uxtw
/* 1687 */    MCD::OPC_FilterValue, 3, 3, 0, // Skip to: 1694
/* 1691 */    MCD::OPC_Decode, 59, 14, // Opcode: ADDwww_uxtx
/* 1694 */    MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 1701
/* 1698 */    MCD::OPC_Decode, 52, 14, // Opcode: ADDwww_sxtb
/* 1701 */    MCD::OPC_FilterValue, 5, 3, 0, // Skip to: 1708
/* 1705 */    MCD::OPC_Decode, 53, 14, // Opcode: ADDwww_sxth
/* 1708 */    MCD::OPC_FilterValue, 6, 3, 0, // Skip to: 1715
/* 1712 */    MCD::OPC_Decode, 54, 14, // Opcode: ADDwww_sxtw
/* 1715 */    MCD::OPC_FilterValue, 7, 12, 30, // Skip to: 9411
/* 1719 */    MCD::OPC_Decode, 55, 14, // Opcode: ADDwww_sxtx
/* 1722 */    MCD::OPC_FilterValue, 1, 163, 0, // Skip to: 1889
/* 1726 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1729 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1746
/* 1733 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1743
/* 1739 */    MCD::OPC_Decode, 200, 1, 10, // Opcode: CMNww_lsl
/* 1743 */    MCD::OPC_Decode, 22, 8, // Opcode: ADDSwww_lsl
/* 1746 */    MCD::OPC_FilterValue, 1, 237, 29, // Skip to: 9411
/* 1750 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 1753 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 1770
/* 1757 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1767
/* 1763 */    MCD::OPC_Decode, 206, 1, 15, // Opcode: CMNww_uxtb
/* 1767 */    MCD::OPC_Decode, 28, 16, // Opcode: ADDSwww_uxtb
/* 1770 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 1787
/* 1774 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1784
/* 1780 */    MCD::OPC_Decode, 207, 1, 15, // Opcode: CMNww_uxth
/* 1784 */    MCD::OPC_Decode, 29, 16, // Opcode: ADDSwww_uxth
/* 1787 */    MCD::OPC_FilterValue, 2, 13, 0, // Skip to: 1804
/* 1791 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1801
/* 1797 */    MCD::OPC_Decode, 208, 1, 15, // Opcode: CMNww_uxtw
/* 1801 */    MCD::OPC_Decode, 30, 16, // Opcode: ADDSwww_uxtw
/* 1804 */    MCD::OPC_FilterValue, 3, 13, 0, // Skip to: 1821
/* 1808 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1818
/* 1814 */    MCD::OPC_Decode, 209, 1, 15, // Opcode: CMNww_uxtx
/* 1818 */    MCD::OPC_Decode, 31, 16, // Opcode: ADDSwww_uxtx
/* 1821 */    MCD::OPC_FilterValue, 4, 13, 0, // Skip to: 1838
/* 1825 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1835
/* 1831 */    MCD::OPC_Decode, 202, 1, 15, // Opcode: CMNww_sxtb
/* 1835 */    MCD::OPC_Decode, 24, 16, // Opcode: ADDSwww_sxtb
/* 1838 */    MCD::OPC_FilterValue, 5, 13, 0, // Skip to: 1855
/* 1842 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1852
/* 1848 */    MCD::OPC_Decode, 203, 1, 15, // Opcode: CMNww_sxth
/* 1852 */    MCD::OPC_Decode, 25, 16, // Opcode: ADDSwww_sxth
/* 1855 */    MCD::OPC_FilterValue, 6, 13, 0, // Skip to: 1872
/* 1859 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1869
/* 1865 */    MCD::OPC_Decode, 204, 1, 15, // Opcode: CMNww_sxtw
/* 1869 */    MCD::OPC_Decode, 26, 16, // Opcode: ADDSwww_sxtw
/* 1872 */    MCD::OPC_FilterValue, 7, 111, 29, // Skip to: 9411
/* 1876 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1886
/* 1882 */    MCD::OPC_Decode, 205, 1, 15, // Opcode: CMNww_sxtx
/* 1886 */    MCD::OPC_Decode, 27, 16, // Opcode: ADDSwww_sxtx
/* 1889 */    MCD::OPC_FilterValue, 2, 82, 0, // Skip to: 1975
/* 1893 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1896 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1904
/* 1900 */    MCD::OPC_Decode, 255, 5, 8, // Opcode: SUBwww_lsl
/* 1904 */    MCD::OPC_FilterValue, 1, 79, 29, // Skip to: 9411
/* 1908 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 1911 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1919
/* 1915 */    MCD::OPC_Decode, 133, 6, 14, // Opcode: SUBwww_uxtb
/* 1919 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1927
/* 1923 */    MCD::OPC_Decode, 134, 6, 14, // Opcode: SUBwww_uxth
/* 1927 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1935
/* 1931 */    MCD::OPC_Decode, 135, 6, 14, // Opcode: SUBwww_uxtw
/* 1935 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1943
/* 1939 */    MCD::OPC_Decode, 136, 6, 14, // Opcode: SUBwww_uxtx
/* 1943 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1951
/* 1947 */    MCD::OPC_Decode, 129, 6, 14, // Opcode: SUBwww_sxtb
/* 1951 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1959
/* 1955 */    MCD::OPC_Decode, 130, 6, 14, // Opcode: SUBwww_sxth
/* 1959 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1967
/* 1963 */    MCD::OPC_Decode, 131, 6, 14, // Opcode: SUBwww_sxtw
/* 1967 */    MCD::OPC_FilterValue, 7, 16, 29, // Skip to: 9411
/* 1971 */    MCD::OPC_Decode, 132, 6, 14, // Opcode: SUBwww_sxtx
/* 1975 */    MCD::OPC_FilterValue, 3, 172, 0, // Skip to: 2151
/* 1979 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 1982 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2000
/* 1986 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 1996
/* 1992 */    MCD::OPC_Decode, 222, 1, 10, // Opcode: CMPww_lsl
/* 1996 */    MCD::OPC_Decode, 227, 5, 8, // Opcode: SUBSwww_lsl
/* 2000 */    MCD::OPC_FilterValue, 1, 239, 28, // Skip to: 9411
/* 2004 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2007 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2025
/* 2011 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2021
/* 2017 */    MCD::OPC_Decode, 228, 1, 15, // Opcode: CMPww_uxtb
/* 2021 */    MCD::OPC_Decode, 233, 5, 16, // Opcode: SUBSwww_uxtb
/* 2025 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2043
/* 2029 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2039
/* 2035 */    MCD::OPC_Decode, 229, 1, 15, // Opcode: CMPww_uxth
/* 2039 */    MCD::OPC_Decode, 234, 5, 16, // Opcode: SUBSwww_uxth
/* 2043 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2061
/* 2047 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2057
/* 2053 */    MCD::OPC_Decode, 230, 1, 15, // Opcode: CMPww_uxtw
/* 2057 */    MCD::OPC_Decode, 235, 5, 16, // Opcode: SUBSwww_uxtw
/* 2061 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2079
/* 2065 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2075
/* 2071 */    MCD::OPC_Decode, 231, 1, 15, // Opcode: CMPww_uxtx
/* 2075 */    MCD::OPC_Decode, 236, 5, 16, // Opcode: SUBSwww_uxtx
/* 2079 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2097
/* 2083 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2093
/* 2089 */    MCD::OPC_Decode, 224, 1, 15, // Opcode: CMPww_sxtb
/* 2093 */    MCD::OPC_Decode, 229, 5, 16, // Opcode: SUBSwww_sxtb
/* 2097 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2115
/* 2101 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2111
/* 2107 */    MCD::OPC_Decode, 225, 1, 15, // Opcode: CMPww_sxth
/* 2111 */    MCD::OPC_Decode, 230, 5, 16, // Opcode: SUBSwww_sxth
/* 2115 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2133
/* 2119 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2129
/* 2125 */    MCD::OPC_Decode, 226, 1, 15, // Opcode: CMPww_sxtw
/* 2129 */    MCD::OPC_Decode, 231, 5, 16, // Opcode: SUBSwww_sxtw
/* 2133 */    MCD::OPC_FilterValue, 7, 106, 28, // Skip to: 9411
/* 2137 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2147
/* 2143 */    MCD::OPC_Decode, 227, 1, 15, // Opcode: CMPww_sxtx
/* 2147 */    MCD::OPC_Decode, 232, 5, 16, // Opcode: SUBSwww_sxtx
/* 2151 */    MCD::OPC_FilterValue, 4, 73, 0, // Skip to: 2228
/* 2155 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2158 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 2165
/* 2162 */    MCD::OPC_Decode, 73, 11, // Opcode: ADDxxx_lsl
/* 2165 */    MCD::OPC_FilterValue, 1, 74, 28, // Skip to: 9411
/* 2169 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2172 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 2179
/* 2176 */    MCD::OPC_Decode, 69, 17, // Opcode: ADDxxw_uxtb
/* 2179 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 2186
/* 2183 */    MCD::OPC_Decode, 70, 17, // Opcode: ADDxxw_uxth
/* 2186 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 2193
/* 2190 */    MCD::OPC_Decode, 71, 17, // Opcode: ADDxxw_uxtw
/* 2193 */    MCD::OPC_FilterValue, 3, 3, 0, // Skip to: 2200
/* 2197 */    MCD::OPC_Decode, 76, 18, // Opcode: ADDxxx_uxtx
/* 2200 */    MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 2207
/* 2204 */    MCD::OPC_Decode, 66, 17, // Opcode: ADDxxw_sxtb
/* 2207 */    MCD::OPC_FilterValue, 5, 3, 0, // Skip to: 2214
/* 2211 */    MCD::OPC_Decode, 67, 17, // Opcode: ADDxxw_sxth
/* 2214 */    MCD::OPC_FilterValue, 6, 3, 0, // Skip to: 2221
/* 2218 */    MCD::OPC_Decode, 68, 17, // Opcode: ADDxxw_sxtw
/* 2221 */    MCD::OPC_FilterValue, 7, 18, 28, // Skip to: 9411
/* 2225 */    MCD::OPC_Decode, 75, 18, // Opcode: ADDxxx_sxtx
/* 2228 */    MCD::OPC_FilterValue, 5, 163, 0, // Skip to: 2395
/* 2232 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2235 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 2252
/* 2239 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2249
/* 2245 */    MCD::OPC_Decode, 217, 1, 13, // Opcode: CMNxx_lsl
/* 2249 */    MCD::OPC_Decode, 39, 11, // Opcode: ADDSxxx_lsl
/* 2252 */    MCD::OPC_FilterValue, 1, 243, 27, // Skip to: 9411
/* 2256 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2259 */    MCD::OPC_FilterValue, 0, 13, 0, // Skip to: 2276
/* 2263 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2273
/* 2269 */    MCD::OPC_Decode, 213, 1, 19, // Opcode: CMNxw_uxtb
/* 2273 */    MCD::OPC_Decode, 35, 20, // Opcode: ADDSxxw_uxtb
/* 2276 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 2293
/* 2280 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2290
/* 2286 */    MCD::OPC_Decode, 214, 1, 19, // Opcode: CMNxw_uxth
/* 2290 */    MCD::OPC_Decode, 36, 20, // Opcode: ADDSxxw_uxth
/* 2293 */    MCD::OPC_FilterValue, 2, 13, 0, // Skip to: 2310
/* 2297 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2307
/* 2303 */    MCD::OPC_Decode, 215, 1, 19, // Opcode: CMNxw_uxtw
/* 2307 */    MCD::OPC_Decode, 37, 20, // Opcode: ADDSxxw_uxtw
/* 2310 */    MCD::OPC_FilterValue, 3, 13, 0, // Skip to: 2327
/* 2314 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2324
/* 2320 */    MCD::OPC_Decode, 220, 1, 21, // Opcode: CMNxx_uxtx
/* 2324 */    MCD::OPC_Decode, 42, 22, // Opcode: ADDSxxx_uxtx
/* 2327 */    MCD::OPC_FilterValue, 4, 13, 0, // Skip to: 2344
/* 2331 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2341
/* 2337 */    MCD::OPC_Decode, 210, 1, 19, // Opcode: CMNxw_sxtb
/* 2341 */    MCD::OPC_Decode, 32, 20, // Opcode: ADDSxxw_sxtb
/* 2344 */    MCD::OPC_FilterValue, 5, 13, 0, // Skip to: 2361
/* 2348 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2358
/* 2354 */    MCD::OPC_Decode, 211, 1, 19, // Opcode: CMNxw_sxth
/* 2358 */    MCD::OPC_Decode, 33, 20, // Opcode: ADDSxxw_sxth
/* 2361 */    MCD::OPC_FilterValue, 6, 13, 0, // Skip to: 2378
/* 2365 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2375
/* 2371 */    MCD::OPC_Decode, 212, 1, 19, // Opcode: CMNxw_sxtw
/* 2375 */    MCD::OPC_Decode, 34, 20, // Opcode: ADDSxxw_sxtw
/* 2378 */    MCD::OPC_FilterValue, 7, 117, 27, // Skip to: 9411
/* 2382 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2392
/* 2388 */    MCD::OPC_Decode, 219, 1, 21, // Opcode: CMNxx_sxtx
/* 2392 */    MCD::OPC_Decode, 41, 22, // Opcode: ADDSxxx_sxtx
/* 2395 */    MCD::OPC_FilterValue, 6, 82, 0, // Skip to: 2481
/* 2399 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2402 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2410
/* 2406 */    MCD::OPC_Decode, 150, 6, 11, // Opcode: SUBxxx_lsl
/* 2410 */    MCD::OPC_FilterValue, 1, 85, 27, // Skip to: 9411
/* 2414 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2417 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2425
/* 2421 */    MCD::OPC_Decode, 146, 6, 17, // Opcode: SUBxxw_uxtb
/* 2425 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2433
/* 2429 */    MCD::OPC_Decode, 147, 6, 17, // Opcode: SUBxxw_uxth
/* 2433 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2441
/* 2437 */    MCD::OPC_Decode, 148, 6, 17, // Opcode: SUBxxw_uxtw
/* 2441 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 2449
/* 2445 */    MCD::OPC_Decode, 153, 6, 18, // Opcode: SUBxxx_uxtx
/* 2449 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2457
/* 2453 */    MCD::OPC_Decode, 143, 6, 17, // Opcode: SUBxxw_sxtb
/* 2457 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 2465
/* 2461 */    MCD::OPC_Decode, 144, 6, 17, // Opcode: SUBxxw_sxth
/* 2465 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2473
/* 2469 */    MCD::OPC_Decode, 145, 6, 17, // Opcode: SUBxxw_sxtw
/* 2473 */    MCD::OPC_FilterValue, 7, 22, 27, // Skip to: 9411
/* 2477 */    MCD::OPC_Decode, 152, 6, 18, // Opcode: SUBxxx_sxtx
/* 2481 */    MCD::OPC_FilterValue, 7, 14, 27, // Skip to: 9411
/* 2485 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2488 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2506
/* 2492 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2502
/* 2498 */    MCD::OPC_Decode, 239, 1, 13, // Opcode: CMPxx_lsl
/* 2502 */    MCD::OPC_Decode, 244, 5, 11, // Opcode: SUBSxxx_lsl
/* 2506 */    MCD::OPC_FilterValue, 1, 245, 26, // Skip to: 9411
/* 2510 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2513 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2531
/* 2517 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2527
/* 2523 */    MCD::OPC_Decode, 235, 1, 19, // Opcode: CMPxw_uxtb
/* 2527 */    MCD::OPC_Decode, 240, 5, 20, // Opcode: SUBSxxw_uxtb
/* 2531 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2549
/* 2535 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2545
/* 2541 */    MCD::OPC_Decode, 236, 1, 19, // Opcode: CMPxw_uxth
/* 2545 */    MCD::OPC_Decode, 241, 5, 20, // Opcode: SUBSxxw_uxth
/* 2549 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2567
/* 2553 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2563
/* 2559 */    MCD::OPC_Decode, 237, 1, 19, // Opcode: CMPxw_uxtw
/* 2563 */    MCD::OPC_Decode, 242, 5, 20, // Opcode: SUBSxxw_uxtw
/* 2567 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2585
/* 2571 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2581
/* 2577 */    MCD::OPC_Decode, 242, 1, 21, // Opcode: CMPxx_uxtx
/* 2581 */    MCD::OPC_Decode, 247, 5, 22, // Opcode: SUBSxxx_uxtx
/* 2585 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2603
/* 2589 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2599
/* 2595 */    MCD::OPC_Decode, 232, 1, 19, // Opcode: CMPxw_sxtb
/* 2599 */    MCD::OPC_Decode, 237, 5, 20, // Opcode: SUBSxxw_sxtb
/* 2603 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2621
/* 2607 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2617
/* 2613 */    MCD::OPC_Decode, 233, 1, 19, // Opcode: CMPxw_sxth
/* 2617 */    MCD::OPC_Decode, 238, 5, 20, // Opcode: SUBSxxw_sxth
/* 2621 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2639
/* 2625 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2635
/* 2631 */    MCD::OPC_Decode, 234, 1, 19, // Opcode: CMPxw_sxtw
/* 2635 */    MCD::OPC_Decode, 239, 5, 20, // Opcode: SUBSxxw_sxtw
/* 2639 */    MCD::OPC_FilterValue, 7, 112, 26, // Skip to: 9411
/* 2643 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2653
/* 2649 */    MCD::OPC_Decode, 241, 1, 21, // Opcode: CMPxx_sxtx
/* 2653 */    MCD::OPC_Decode, 246, 5, 22, // Opcode: SUBSxxx_sxtx
/* 2657 */    MCD::OPC_FilterValue, 13, 155, 0, // Skip to: 2816
/* 2661 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 2664 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2677
/* 2668 */    MCD::OPC_CheckField, 21, 1, 0, 81, 26, // Skip to: 9411
/* 2674 */    MCD::OPC_Decode, 51, 8, // Opcode: ADDwww_lsr
/* 2677 */    MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 2701
/* 2681 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2684 */    MCD::OPC_FilterValue, 0, 67, 26, // Skip to: 9411
/* 2688 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2698
/* 2694 */    MCD::OPC_Decode, 201, 1, 10, // Opcode: CMNww_lsr
/* 2698 */    MCD::OPC_Decode, 23, 8, // Opcode: ADDSwww_lsr
/* 2701 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2715
/* 2705 */    MCD::OPC_CheckField, 21, 1, 0, 44, 26, // Skip to: 9411
/* 2711 */    MCD::OPC_Decode, 128, 6, 8, // Opcode: SUBwww_lsr
/* 2715 */    MCD::OPC_FilterValue, 3, 21, 0, // Skip to: 2740
/* 2719 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2722 */    MCD::OPC_FilterValue, 0, 29, 26, // Skip to: 9411
/* 2726 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2736
/* 2732 */    MCD::OPC_Decode, 223, 1, 10, // Opcode: CMPww_lsr
/* 2736 */    MCD::OPC_Decode, 228, 5, 8, // Opcode: SUBSwww_lsr
/* 2740 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2753
/* 2744 */    MCD::OPC_CheckField, 21, 1, 0, 5, 26, // Skip to: 9411
/* 2750 */    MCD::OPC_Decode, 74, 11, // Opcode: ADDxxx_lsr
/* 2753 */    MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 2777
/* 2757 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2760 */    MCD::OPC_FilterValue, 0, 247, 25, // Skip to: 9411
/* 2764 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2774
/* 2770 */    MCD::OPC_Decode, 218, 1, 13, // Opcode: CMNxx_lsr
/* 2774 */    MCD::OPC_Decode, 40, 11, // Opcode: ADDSxxx_lsr
/* 2777 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2791
/* 2781 */    MCD::OPC_CheckField, 21, 1, 0, 224, 25, // Skip to: 9411
/* 2787 */    MCD::OPC_Decode, 151, 6, 11, // Opcode: SUBxxx_lsr
/* 2791 */    MCD::OPC_FilterValue, 7, 216, 25, // Skip to: 9411
/* 2795 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2798 */    MCD::OPC_FilterValue, 0, 209, 25, // Skip to: 9411
/* 2802 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2812
/* 2808 */    MCD::OPC_Decode, 240, 1, 13, // Opcode: CMPxx_lsr
/* 2812 */    MCD::OPC_Decode, 245, 5, 11, // Opcode: SUBSxxx_lsr
/* 2816 */    MCD::OPC_FilterValue, 14, 191, 25, // Skip to: 9411
/* 2820 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 2823 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2836
/* 2827 */    MCD::OPC_CheckField, 21, 1, 0, 178, 25, // Skip to: 9411
/* 2833 */    MCD::OPC_Decode, 49, 8, // Opcode: ADDwww_asr
/* 2836 */    MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 2860
/* 2840 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2843 */    MCD::OPC_FilterValue, 0, 164, 25, // Skip to: 9411
/* 2847 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2857
/* 2853 */    MCD::OPC_Decode, 199, 1, 10, // Opcode: CMNww_asr
/* 2857 */    MCD::OPC_Decode, 21, 8, // Opcode: ADDSwww_asr
/* 2860 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2874
/* 2864 */    MCD::OPC_CheckField, 21, 1, 0, 141, 25, // Skip to: 9411
/* 2870 */    MCD::OPC_Decode, 254, 5, 8, // Opcode: SUBwww_asr
/* 2874 */    MCD::OPC_FilterValue, 3, 21, 0, // Skip to: 2899
/* 2878 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2881 */    MCD::OPC_FilterValue, 0, 126, 25, // Skip to: 9411
/* 2885 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2895
/* 2891 */    MCD::OPC_Decode, 221, 1, 10, // Opcode: CMPww_asr
/* 2895 */    MCD::OPC_Decode, 226, 5, 8, // Opcode: SUBSwww_asr
/* 2899 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2912
/* 2903 */    MCD::OPC_CheckField, 21, 1, 0, 102, 25, // Skip to: 9411
/* 2909 */    MCD::OPC_Decode, 72, 11, // Opcode: ADDxxx_asr
/* 2912 */    MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 2936
/* 2916 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2919 */    MCD::OPC_FilterValue, 0, 88, 25, // Skip to: 9411
/* 2923 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2933
/* 2929 */    MCD::OPC_Decode, 216, 1, 13, // Opcode: CMNxx_asr
/* 2933 */    MCD::OPC_Decode, 38, 11, // Opcode: ADDSxxx_asr
/* 2936 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2950
/* 2940 */    MCD::OPC_CheckField, 21, 1, 0, 65, 25, // Skip to: 9411
/* 2946 */    MCD::OPC_Decode, 149, 6, 11, // Opcode: SUBxxx_asr
/* 2950 */    MCD::OPC_FilterValue, 7, 57, 25, // Skip to: 9411
/* 2954 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 2957 */    MCD::OPC_FilterValue, 0, 50, 25, // Skip to: 9411
/* 2961 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 2971
/* 2967 */    MCD::OPC_Decode, 238, 1, 13, // Opcode: CMPxx_asr
/* 2971 */    MCD::OPC_Decode, 243, 5, 11, // Opcode: SUBSxxx_asr
/* 2975 */    MCD::OPC_FilterValue, 3, 251, 0, // Skip to: 3230
/* 2979 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 2982 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 3013
/* 2986 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 2989 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2997
/* 2993 */    MCD::OPC_Decode, 221, 4, 1, // Opcode: LSFPPair32_NonTemp_STR
/* 2997 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3005
/* 3001 */    MCD::OPC_Decode, 229, 4, 1, // Opcode: LSFPPair64_NonTemp_STR
/* 3005 */    MCD::OPC_FilterValue, 5, 2, 25, // Skip to: 9411
/* 3009 */    MCD::OPC_Decode, 213, 4, 1, // Opcode: LSFPPair128_NonTemp_STR
/* 3013 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 3044
/* 3017 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3020 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3028
/* 3024 */    MCD::OPC_Decode, 220, 4, 1, // Opcode: LSFPPair32_NonTemp_LDR
/* 3028 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3036
/* 3032 */    MCD::OPC_Decode, 228, 4, 1, // Opcode: LSFPPair64_NonTemp_LDR
/* 3036 */    MCD::OPC_FilterValue, 5, 227, 24, // Skip to: 9411
/* 3040 */    MCD::OPC_Decode, 212, 4, 1, // Opcode: LSFPPair128_NonTemp_LDR
/* 3044 */    MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 3075
/* 3048 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3051 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3059
/* 3055 */    MCD::OPC_Decode, 223, 4, 1, // Opcode: LSFPPair32_PostInd_STR
/* 3059 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3067
/* 3063 */    MCD::OPC_Decode, 231, 4, 1, // Opcode: LSFPPair64_PostInd_STR
/* 3067 */    MCD::OPC_FilterValue, 5, 196, 24, // Skip to: 9411
/* 3071 */    MCD::OPC_Decode, 215, 4, 1, // Opcode: LSFPPair128_PostInd_STR
/* 3075 */    MCD::OPC_FilterValue, 3, 27, 0, // Skip to: 3106
/* 3079 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3082 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3090
/* 3086 */    MCD::OPC_Decode, 222, 4, 1, // Opcode: LSFPPair32_PostInd_LDR
/* 3090 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3098
/* 3094 */    MCD::OPC_Decode, 230, 4, 1, // Opcode: LSFPPair64_PostInd_LDR
/* 3098 */    MCD::OPC_FilterValue, 5, 165, 24, // Skip to: 9411
/* 3102 */    MCD::OPC_Decode, 214, 4, 1, // Opcode: LSFPPair128_PostInd_LDR
/* 3106 */    MCD::OPC_FilterValue, 4, 27, 0, // Skip to: 3137
/* 3110 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3113 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3121
/* 3117 */    MCD::OPC_Decode, 226, 4, 1, // Opcode: LSFPPair32_STR
/* 3121 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3129
/* 3125 */    MCD::OPC_Decode, 234, 4, 1, // Opcode: LSFPPair64_STR
/* 3129 */    MCD::OPC_FilterValue, 5, 134, 24, // Skip to: 9411
/* 3133 */    MCD::OPC_Decode, 218, 4, 1, // Opcode: LSFPPair128_STR
/* 3137 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3168
/* 3141 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3144 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3152
/* 3148 */    MCD::OPC_Decode, 219, 4, 1, // Opcode: LSFPPair32_LDR
/* 3152 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3160
/* 3156 */    MCD::OPC_Decode, 227, 4, 1, // Opcode: LSFPPair64_LDR
/* 3160 */    MCD::OPC_FilterValue, 5, 103, 24, // Skip to: 9411
/* 3164 */    MCD::OPC_Decode, 211, 4, 1, // Opcode: LSFPPair128_LDR
/* 3168 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3199
/* 3172 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3175 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3183
/* 3179 */    MCD::OPC_Decode, 225, 4, 1, // Opcode: LSFPPair32_PreInd_STR
/* 3183 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3191
/* 3187 */    MCD::OPC_Decode, 233, 4, 1, // Opcode: LSFPPair64_PreInd_STR
/* 3191 */    MCD::OPC_FilterValue, 5, 72, 24, // Skip to: 9411
/* 3195 */    MCD::OPC_Decode, 217, 4, 1, // Opcode: LSFPPair128_PreInd_STR
/* 3199 */    MCD::OPC_FilterValue, 7, 64, 24, // Skip to: 9411
/* 3203 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3206 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 3214
/* 3210 */    MCD::OPC_Decode, 224, 4, 1, // Opcode: LSFPPair32_PreInd_LDR
/* 3214 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 3222
/* 3218 */    MCD::OPC_Decode, 232, 4, 1, // Opcode: LSFPPair64_PreInd_LDR
/* 3222 */    MCD::OPC_FilterValue, 5, 41, 24, // Skip to: 9411
/* 3226 */    MCD::OPC_Decode, 216, 4, 1, // Opcode: LSFPPair128_PreInd_LDR
/* 3230 */    MCD::OPC_FilterValue, 4, 166, 2, // Skip to: 3912
/* 3234 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3237 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 3258
/* 3241 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 3244 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3251
/* 3248 */    MCD::OPC_Decode, 80, 23, // Opcode: ADRxi
/* 3251 */    MCD::OPC_FilterValue, 1, 12, 24, // Skip to: 9411
/* 3255 */    MCD::OPC_Decode, 79, 23, // Opcode: ADRPxi
/* 3258 */    MCD::OPC_FilterValue, 1, 255, 0, // Skip to: 3517
/* 3262 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3265 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 3286
/* 3269 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3272 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3279
/* 3276 */    MCD::OPC_Decode, 45, 24, // Opcode: ADDwwi_lsl0_s
/* 3279 */    MCD::OPC_FilterValue, 1, 240, 23, // Skip to: 9411
/* 3283 */    MCD::OPC_Decode, 48, 24, // Opcode: ADDwwi_lsl12_s
/* 3286 */    MCD::OPC_FilterValue, 1, 35, 0, // Skip to: 3325
/* 3290 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3293 */    MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 3309
/* 3297 */    MCD::OPC_CheckField, 0, 5, 31, 3, 0, // Skip to: 3306
/* 3303 */    MCD::OPC_Decode, 44, 25, // Opcode: ADDwwi_lsl0_cmp
/* 3306 */    MCD::OPC_Decode, 43, 26, // Opcode: ADDwwi_lsl0_S
/* 3309 */    MCD::OPC_FilterValue, 1, 210, 23, // Skip to: 9411
/* 3313 */    MCD::OPC_CheckField, 0, 5, 31, 3, 0, // Skip to: 3322
/* 3319 */    MCD::OPC_Decode, 47, 25, // Opcode: ADDwwi_lsl12_cmp
/* 3322 */    MCD::OPC_Decode, 46, 26, // Opcode: ADDwwi_lsl12_S
/* 3325 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3348
/* 3329 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3332 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3340
/* 3336 */    MCD::OPC_Decode, 250, 5, 24, // Opcode: SUBwwi_lsl0_s
/* 3340 */    MCD::OPC_FilterValue, 1, 179, 23, // Skip to: 9411
/* 3344 */    MCD::OPC_Decode, 253, 5, 24, // Opcode: SUBwwi_lsl12_s
/* 3348 */    MCD::OPC_FilterValue, 3, 39, 0, // Skip to: 3391
/* 3352 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3355 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3373
/* 3359 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 3369
/* 3365 */    MCD::OPC_Decode, 249, 5, 25, // Opcode: SUBwwi_lsl0_cmp
/* 3369 */    MCD::OPC_Decode, 248, 5, 26, // Opcode: SUBwwi_lsl0_S
/* 3373 */    MCD::OPC_FilterValue, 1, 146, 23, // Skip to: 9411
/* 3377 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 3387
/* 3383 */    MCD::OPC_Decode, 252, 5, 25, // Opcode: SUBwwi_lsl12_cmp
/* 3387 */    MCD::OPC_Decode, 251, 5, 26, // Opcode: SUBwwi_lsl12_S
/* 3391 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 3412
/* 3395 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3398 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3405
/* 3402 */    MCD::OPC_Decode, 62, 27, // Opcode: ADDxxi_lsl0_s
/* 3405 */    MCD::OPC_FilterValue, 1, 114, 23, // Skip to: 9411
/* 3409 */    MCD::OPC_Decode, 65, 27, // Opcode: ADDxxi_lsl12_s
/* 3412 */    MCD::OPC_FilterValue, 5, 35, 0, // Skip to: 3451
/* 3416 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3419 */    MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 3435
/* 3423 */    MCD::OPC_CheckField, 0, 5, 31, 3, 0, // Skip to: 3432
/* 3429 */    MCD::OPC_Decode, 61, 28, // Opcode: ADDxxi_lsl0_cmp
/* 3432 */    MCD::OPC_Decode, 60, 29, // Opcode: ADDxxi_lsl0_S
/* 3435 */    MCD::OPC_FilterValue, 1, 84, 23, // Skip to: 9411
/* 3439 */    MCD::OPC_CheckField, 0, 5, 31, 3, 0, // Skip to: 3448
/* 3445 */    MCD::OPC_Decode, 64, 28, // Opcode: ADDxxi_lsl12_cmp
/* 3448 */    MCD::OPC_Decode, 63, 29, // Opcode: ADDxxi_lsl12_S
/* 3451 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 3474
/* 3455 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3458 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3466
/* 3462 */    MCD::OPC_Decode, 139, 6, 27, // Opcode: SUBxxi_lsl0_s
/* 3466 */    MCD::OPC_FilterValue, 1, 53, 23, // Skip to: 9411
/* 3470 */    MCD::OPC_Decode, 142, 6, 27, // Opcode: SUBxxi_lsl12_s
/* 3474 */    MCD::OPC_FilterValue, 7, 45, 23, // Skip to: 9411
/* 3478 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3481 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3499
/* 3485 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 3495
/* 3491 */    MCD::OPC_Decode, 138, 6, 28, // Opcode: SUBxxi_lsl0_cmp
/* 3495 */    MCD::OPC_Decode, 137, 6, 29, // Opcode: SUBxxi_lsl0_S
/* 3499 */    MCD::OPC_FilterValue, 1, 20, 23, // Skip to: 9411
/* 3503 */    MCD::OPC_CheckField, 0, 5, 31, 4, 0, // Skip to: 3513
/* 3509 */    MCD::OPC_Decode, 141, 6, 28, // Opcode: SUBxxi_lsl12_cmp
/* 3513 */    MCD::OPC_Decode, 140, 6, 29, // Opcode: SUBxxi_lsl12_S
/* 3517 */    MCD::OPC_FilterValue, 2, 165, 0, // Skip to: 3686
/* 3521 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3524 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 3546
/* 3528 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 3531 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3538
/* 3535 */    MCD::OPC_Decode, 91, 30, // Opcode: ANDwwi
/* 3538 */    MCD::OPC_FilterValue, 1, 237, 22, // Skip to: 9411
/* 3542 */    MCD::OPC_Decode, 135, 5, 31, // Opcode: MOVNwii
/* 3546 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3560
/* 3550 */    MCD::OPC_CheckField, 23, 1, 0, 223, 22, // Skip to: 9411
/* 3556 */    MCD::OPC_Decode, 160, 5, 30, // Opcode: ORRwwi
/* 3560 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3583
/* 3564 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 3567 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3575
/* 3571 */    MCD::OPC_Decode, 147, 2, 30, // Opcode: EORwwi
/* 3575 */    MCD::OPC_FilterValue, 1, 200, 22, // Skip to: 9411
/* 3579 */    MCD::OPC_Decode, 137, 5, 31, // Opcode: MOVZwii
/* 3583 */    MCD::OPC_FilterValue, 3, 18, 0, // Skip to: 3605
/* 3587 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 3590 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3597
/* 3594 */    MCD::OPC_Decode, 81, 32, // Opcode: ANDSwwi
/* 3597 */    MCD::OPC_FilterValue, 1, 178, 22, // Skip to: 9411
/* 3601 */    MCD::OPC_Decode, 133, 5, 33, // Opcode: MOVKwii
/* 3605 */    MCD::OPC_FilterValue, 4, 18, 0, // Skip to: 3627
/* 3609 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 3612 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3619
/* 3616 */    MCD::OPC_Decode, 96, 34, // Opcode: ANDxxi
/* 3619 */    MCD::OPC_FilterValue, 1, 156, 22, // Skip to: 9411
/* 3623 */    MCD::OPC_Decode, 136, 5, 35, // Opcode: MOVNxii
/* 3627 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3641
/* 3631 */    MCD::OPC_CheckField, 23, 1, 0, 142, 22, // Skip to: 9411
/* 3637 */    MCD::OPC_Decode, 165, 5, 34, // Opcode: ORRxxi
/* 3641 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 3664
/* 3645 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 3648 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3656
/* 3652 */    MCD::OPC_Decode, 152, 2, 34, // Opcode: EORxxi
/* 3656 */    MCD::OPC_FilterValue, 1, 119, 22, // Skip to: 9411
/* 3660 */    MCD::OPC_Decode, 138, 5, 35, // Opcode: MOVZxii
/* 3664 */    MCD::OPC_FilterValue, 7, 111, 22, // Skip to: 9411
/* 3668 */    MCD::OPC_ExtractField, 23, 1,  // Inst{23} ...
/* 3671 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3678
/* 3675 */    MCD::OPC_Decode, 86, 36, // Opcode: ANDSxxi
/* 3678 */    MCD::OPC_FilterValue, 1, 97, 22, // Skip to: 9411
/* 3682 */    MCD::OPC_Decode, 134, 5, 37, // Opcode: MOVKxii
/* 3686 */    MCD::OPC_FilterValue, 3, 89, 22, // Skip to: 9411
/* 3690 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 3693 */    MCD::OPC_FilterValue, 0, 53, 0, // Skip to: 3750
/* 3697 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3700 */    MCD::OPC_FilterValue, 0, 32, 0, // Skip to: 3736
/* 3704 */    MCD::OPC_ExtractField, 10, 12,  // Inst{21-10} ...
/* 3707 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 3715
/* 3711 */    MCD::OPC_Decode, 155, 6, 38, // Opcode: SXTBww
/* 3715 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 3723
/* 3719 */    MCD::OPC_Decode, 157, 6, 38, // Opcode: SXTHww
/* 3723 */    MCD::OPC_CheckField, 10, 6, 31, 3, 0, // Skip to: 3732
/* 3729 */    MCD::OPC_Decode, 103, 39, // Opcode: ASRwwi
/* 3732 */    MCD::OPC_Decode, 192, 5, 40, // Opcode: SBFMwwii
/* 3736 */    MCD::OPC_FilterValue, 2, 39, 22, // Skip to: 9411
/* 3740 */    MCD::OPC_CheckField, 21, 1, 0, 33, 22, // Skip to: 9411
/* 3746 */    MCD::OPC_Decode, 158, 2, 41, // Opcode: EXTRwwwi
/* 3750 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3764
/* 3754 */    MCD::OPC_CheckField, 22, 2, 0, 19, 22, // Skip to: 9411
/* 3760 */    MCD::OPC_Decode, 156, 1, 40, // Opcode: BFMwwii
/* 3764 */    MCD::OPC_FilterValue, 2, 40, 0, // Skip to: 3808
/* 3768 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3771 */    MCD::OPC_FilterValue, 0, 4, 22, // Skip to: 9411
/* 3775 */    MCD::OPC_ExtractField, 10, 12,  // Inst{21-10} ...
/* 3778 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 3786
/* 3782 */    MCD::OPC_Decode, 201, 6, 38, // Opcode: UXTBww
/* 3786 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 3794
/* 3790 */    MCD::OPC_Decode, 203, 6, 38, // Opcode: UXTHww
/* 3794 */    MCD::OPC_CheckField, 10, 6, 31, 4, 0, // Skip to: 3804
/* 3800 */    MCD::OPC_Decode, 129, 5, 39, // Opcode: LSRwwi
/* 3804 */    MCD::OPC_Decode, 184, 6, 40, // Opcode: UBFMwwii
/* 3808 */    MCD::OPC_FilterValue, 4, 61, 0, // Skip to: 3873
/* 3812 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3815 */    MCD::OPC_FilterValue, 1, 40, 0, // Skip to: 3859
/* 3819 */    MCD::OPC_ExtractField, 10, 12,  // Inst{21-10} ...
/* 3822 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 3830
/* 3826 */    MCD::OPC_Decode, 156, 6, 42, // Opcode: SXTBxw
/* 3830 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 3838
/* 3834 */    MCD::OPC_Decode, 158, 6, 42, // Opcode: SXTHxw
/* 3838 */    MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 3846
/* 3842 */    MCD::OPC_Decode, 159, 6, 42, // Opcode: SXTWxw
/* 3846 */    MCD::OPC_CheckField, 10, 6, 63, 3, 0, // Skip to: 3855
/* 3852 */    MCD::OPC_Decode, 104, 43, // Opcode: ASRxxi
/* 3855 */    MCD::OPC_Decode, 193, 5, 40, // Opcode: SBFMxxii
/* 3859 */    MCD::OPC_FilterValue, 3, 172, 21, // Skip to: 9411
/* 3863 */    MCD::OPC_CheckField, 21, 1, 0, 166, 21, // Skip to: 9411
/* 3869 */    MCD::OPC_Decode, 159, 2, 11, // Opcode: EXTRxxxi
/* 3873 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3887
/* 3877 */    MCD::OPC_CheckField, 22, 2, 1, 152, 21, // Skip to: 9411
/* 3883 */    MCD::OPC_Decode, 157, 1, 40, // Opcode: BFMxxii
/* 3887 */    MCD::OPC_FilterValue, 6, 144, 21, // Skip to: 9411
/* 3891 */    MCD::OPC_ExtractField, 22, 2,  // Inst{23-22} ...
/* 3894 */    MCD::OPC_FilterValue, 1, 137, 21, // Skip to: 9411
/* 3898 */    MCD::OPC_CheckField, 10, 6, 63, 4, 0, // Skip to: 3908
/* 3904 */    MCD::OPC_Decode, 130, 5, 43, // Opcode: LSRxxi
/* 3908 */    MCD::OPC_Decode, 185, 6, 40, // Opcode: UBFMxxii
/* 3912 */    MCD::OPC_FilterValue, 5, 1, 2, // Skip to: 4429
/* 3916 */    MCD::OPC_ExtractField, 29, 2,  // Inst{30-29} ...
/* 3919 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3942
/* 3923 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 3926 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3934
/* 3930 */    MCD::OPC_Decode, 181, 1, 44, // Opcode: Bimm
/* 3934 */    MCD::OPC_FilterValue, 1, 97, 21, // Skip to: 9411
/* 3938 */    MCD::OPC_Decode, 177, 1, 44, // Opcode: BLimm
/* 3942 */    MCD::OPC_FilterValue, 1, 85, 0, // Skip to: 4031
/* 3946 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 3949 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3972
/* 3953 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 3956 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3964
/* 3960 */    MCD::OPC_Decode, 184, 1, 45, // Opcode: CBZw
/* 3964 */    MCD::OPC_FilterValue, 1, 67, 21, // Skip to: 9411
/* 3968 */    MCD::OPC_Decode, 185, 1, 46, // Opcode: CBZx
/* 3972 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 3995
/* 3976 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 3979 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3987
/* 3983 */    MCD::OPC_Decode, 182, 1, 45, // Opcode: CBNZw
/* 3987 */    MCD::OPC_FilterValue, 1, 44, 21, // Skip to: 9411
/* 3991 */    MCD::OPC_Decode, 183, 1, 46, // Opcode: CBNZx
/* 3995 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4013
/* 3999 */    MCD::OPC_CheckField, 31, 1, 0, 4, 0, // Skip to: 4009
/* 4005 */    MCD::OPC_Decode, 166, 6, 47, // Opcode: TBZwii
/* 4009 */    MCD::OPC_Decode, 167, 6, 48, // Opcode: TBZxii
/* 4013 */    MCD::OPC_FilterValue, 3, 18, 21, // Skip to: 9411
/* 4017 */    MCD::OPC_CheckField, 31, 1, 0, 4, 0, // Skip to: 4027
/* 4023 */    MCD::OPC_Decode, 164, 6, 47, // Opcode: TBNZwii
/* 4027 */    MCD::OPC_Decode, 165, 6, 48, // Opcode: TBNZxii
/* 4031 */    MCD::OPC_FilterValue, 2, 0, 21, // Skip to: 9411
/* 4035 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4038 */    MCD::OPC_FilterValue, 0, 116, 0, // Skip to: 4158
/* 4042 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 4045 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4059
/* 4049 */    MCD::OPC_CheckField, 4, 1, 0, 236, 20, // Skip to: 9411
/* 4055 */    MCD::OPC_Decode, 180, 1, 49, // Opcode: Bcc
/* 4059 */    MCD::OPC_FilterValue, 1, 228, 20, // Skip to: 9411
/* 4063 */    MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 4066 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4089
/* 4070 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4073 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4081
/* 4077 */    MCD::OPC_Decode, 178, 1, 50, // Opcode: BRKi
/* 4081 */    MCD::OPC_FilterValue, 2, 206, 20, // Skip to: 9411
/* 4085 */    MCD::OPC_Decode, 158, 3, 50, // Opcode: HLTi
/* 4089 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 4112
/* 4093 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4096 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4104
/* 4100 */    MCD::OPC_Decode, 154, 6, 50, // Opcode: SVCi
/* 4104 */    MCD::OPC_FilterValue, 5, 183, 20, // Skip to: 9411
/* 4108 */    MCD::OPC_Decode, 132, 2, 50, // Opcode: DCPS1i
/* 4112 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 4135
/* 4116 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4119 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4127
/* 4123 */    MCD::OPC_Decode, 159, 3, 50, // Opcode: HVCi
/* 4127 */    MCD::OPC_FilterValue, 5, 160, 20, // Skip to: 9411
/* 4131 */    MCD::OPC_Decode, 133, 2, 50, // Opcode: DCPS2i
/* 4135 */    MCD::OPC_FilterValue, 3, 152, 20, // Skip to: 9411
/* 4139 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4142 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4150
/* 4146 */    MCD::OPC_Decode, 207, 5, 50, // Opcode: SMCi
/* 4150 */    MCD::OPC_FilterValue, 5, 137, 20, // Skip to: 9411
/* 4154 */    MCD::OPC_Decode, 134, 2, 50, // Opcode: DCPS3i
/* 4158 */    MCD::OPC_FilterValue, 1, 153, 0, // Skip to: 4315
/* 4162 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4165 */    MCD::OPC_FilterValue, 0, 121, 0, // Skip to: 4290
/* 4169 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 4172 */    MCD::OPC_FilterValue, 1, 115, 20, // Skip to: 9411
/* 4176 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 4179 */    MCD::OPC_FilterValue, 95, 10, 0, // Skip to: 4193
/* 4183 */    MCD::OPC_CheckField, 12, 9, 51, 49, 0, // Skip to: 4238
/* 4189 */    MCD::OPC_Decode, 194, 1, 51, // Opcode: CLREXi
/* 4193 */    MCD::OPC_FilterValue, 159, 1, 10, 0, // Skip to: 4208
/* 4198 */    MCD::OPC_CheckField, 12, 9, 51, 34, 0, // Skip to: 4238
/* 4204 */    MCD::OPC_Decode, 138, 2, 52, // Opcode: DSBi
/* 4208 */    MCD::OPC_FilterValue, 191, 1, 10, 0, // Skip to: 4223
/* 4213 */    MCD::OPC_CheckField, 12, 9, 51, 19, 0, // Skip to: 4238
/* 4219 */    MCD::OPC_Decode, 136, 2, 52, // Opcode: DMBi
/* 4223 */    MCD::OPC_FilterValue, 223, 1, 10, 0, // Skip to: 4238
/* 4228 */    MCD::OPC_CheckField, 12, 9, 51, 4, 0, // Skip to: 4238
/* 4234 */    MCD::OPC_Decode, 162, 3, 53, // Opcode: ISBi
/* 4238 */    MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 4241 */    MCD::OPC_FilterValue, 31, 31, 0, // Skip to: 4276
/* 4245 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 4248 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 4262
/* 4252 */    MCD::OPC_CheckField, 16, 5, 3, 18, 0, // Skip to: 4276
/* 4258 */    MCD::OPC_Decode, 157, 3, 54, // Opcode: HINTi
/* 4262 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4276
/* 4266 */    MCD::OPC_CheckField, 19, 2, 0, 4, 0, // Skip to: 4276
/* 4272 */    MCD::OPC_Decode, 140, 5, 55, // Opcode: MSRii
/* 4276 */    MCD::OPC_CheckField, 19, 2, 1, 4, 0, // Skip to: 4286
/* 4282 */    MCD::OPC_Decode, 161, 6, 56, // Opcode: SYSiccix
/* 4286 */    MCD::OPC_Decode, 141, 5, 57, // Opcode: MSRix
/* 4290 */    MCD::OPC_FilterValue, 1, 253, 19, // Skip to: 9411
/* 4294 */    MCD::OPC_ExtractField, 31, 1,  // Inst{31} ...
/* 4297 */    MCD::OPC_FilterValue, 1, 246, 19, // Skip to: 9411
/* 4301 */    MCD::OPC_CheckField, 19, 2, 1, 4, 0, // Skip to: 4311
/* 4307 */    MCD::OPC_Decode, 160, 6, 58, // Opcode: SYSLxicci
/* 4311 */    MCD::OPC_Decode, 139, 5, 59, // Opcode: MRSxi
/* 4315 */    MCD::OPC_FilterValue, 2, 228, 19, // Skip to: 9411
/* 4319 */    MCD::OPC_ExtractField, 10, 14,  // Inst{23-10} ...
/* 4322 */    MCD::OPC_FilterValue, 192, 15, 16, 0, // Skip to: 4343
/* 4327 */    MCD::OPC_CheckField, 31, 1, 1, 214, 19, // Skip to: 9411
/* 4333 */    MCD::OPC_CheckField, 0, 5, 0, 208, 19, // Skip to: 9411
/* 4339 */    MCD::OPC_Decode, 179, 1, 60, // Opcode: BRx
/* 4343 */    MCD::OPC_FilterValue, 192, 31, 16, 0, // Skip to: 4364
/* 4348 */    MCD::OPC_CheckField, 31, 1, 1, 193, 19, // Skip to: 9411
/* 4354 */    MCD::OPC_CheckField, 0, 5, 0, 187, 19, // Skip to: 9411
/* 4360 */    MCD::OPC_Decode, 176, 1, 60, // Opcode: BLRx
/* 4364 */    MCD::OPC_FilterValue, 192, 47, 16, 0, // Skip to: 4385
/* 4369 */    MCD::OPC_CheckField, 31, 1, 1, 172, 19, // Skip to: 9411
/* 4375 */    MCD::OPC_CheckField, 0, 5, 0, 166, 19, // Skip to: 9411
/* 4381 */    MCD::OPC_Decode, 178, 5, 60, // Opcode: RETx
/* 4385 */    MCD::OPC_FilterValue, 192, 79, 17, 0, // Skip to: 4407
/* 4390 */    MCD::OPC_CheckField, 31, 1, 1, 151, 19, // Skip to: 9411
/* 4396 */    MCD::OPC_CheckField, 0, 10, 224, 7, 144, 19, // Skip to: 9411
/* 4403 */    MCD::OPC_Decode, 157, 2, 61, // Opcode: ERET
/* 4407 */    MCD::OPC_FilterValue, 192, 95, 135, 19, // Skip to: 9411
/* 4412 */    MCD::OPC_CheckField, 31, 1, 1, 129, 19, // Skip to: 9411
/* 4418 */    MCD::OPC_CheckField, 0, 10, 224, 7, 122, 19, // Skip to: 9411
/* 4425 */    MCD::OPC_Decode, 137, 2, 61, // Opcode: DRPS
/* 4429 */    MCD::OPC_FilterValue, 6, 114, 9, // Skip to: 6851
/* 4433 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 4436 */    MCD::OPC_FilterValue, 0, 255, 0, // Skip to: 4695
/* 4440 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4443 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4451
/* 4447 */    MCD::OPC_Decode, 209, 3, 45, // Opcode: LDRw_lit
/* 4451 */    MCD::OPC_FilterValue, 2, 205, 0, // Skip to: 4660
/* 4455 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4458 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 4517
/* 4462 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4465 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4478
/* 4469 */    MCD::OPC_CheckField, 12, 4, 0, 72, 19, // Skip to: 9411
/* 4475 */    MCD::OPC_Decode, 19, 62, // Opcode: ADCwww
/* 4478 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 4486
/* 4482 */    MCD::OPC_Decode, 252, 1, 63, // Opcode: CSELwwwc
/* 4486 */    MCD::OPC_FilterValue, 6, 57, 19, // Skip to: 9411
/* 4490 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 4493 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4501
/* 4497 */    MCD::OPC_Decode, 235, 4, 62, // Opcode: LSLVwww
/* 4501 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 4509
/* 4505 */    MCD::OPC_Decode, 244, 1, 62, // Opcode: CRC32B_www
/* 4509 */    MCD::OPC_FilterValue, 5, 34, 19, // Skip to: 9411
/* 4513 */    MCD::OPC_Decode, 245, 1, 62, // Opcode: CRC32CB_www
/* 4517 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 4563
/* 4521 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 4524 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 4532
/* 4528 */    MCD::OPC_Decode, 254, 1, 63, // Opcode: CSINCwwwc
/* 4532 */    MCD::OPC_FilterValue, 6, 11, 19, // Skip to: 9411
/* 4536 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 4539 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4547
/* 4543 */    MCD::OPC_Decode, 255, 4, 62, // Opcode: LSRVwww
/* 4547 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 4555
/* 4551 */    MCD::OPC_Decode, 249, 1, 62, // Opcode: CRC32H_www
/* 4555 */    MCD::OPC_FilterValue, 5, 244, 18, // Skip to: 9411
/* 4559 */    MCD::OPC_Decode, 246, 1, 62, // Opcode: CRC32CH_www
/* 4563 */    MCD::OPC_FilterValue, 2, 58, 0, // Skip to: 4625
/* 4567 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 4570 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4584
/* 4574 */    MCD::OPC_CheckField, 21, 3, 6, 223, 18, // Skip to: 9411
/* 4580 */    MCD::OPC_Decode, 196, 6, 62, // Opcode: UDIVwww
/* 4584 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4597
/* 4588 */    MCD::OPC_CheckField, 21, 3, 6, 209, 18, // Skip to: 9411
/* 4594 */    MCD::OPC_Decode, 101, 62, // Opcode: ASRVwww
/* 4597 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 4611
/* 4601 */    MCD::OPC_CheckField, 21, 3, 6, 196, 18, // Skip to: 9411
/* 4607 */    MCD::OPC_Decode, 250, 1, 62, // Opcode: CRC32W_www
/* 4611 */    MCD::OPC_FilterValue, 5, 188, 18, // Skip to: 9411
/* 4615 */    MCD::OPC_CheckField, 21, 3, 6, 182, 18, // Skip to: 9411
/* 4621 */    MCD::OPC_Decode, 247, 1, 62, // Opcode: CRC32CW_www
/* 4625 */    MCD::OPC_FilterValue, 3, 174, 18, // Skip to: 9411
/* 4629 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 4632 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4646
/* 4636 */    MCD::OPC_CheckField, 21, 3, 6, 161, 18, // Skip to: 9411
/* 4642 */    MCD::OPC_Decode, 204, 5, 62, // Opcode: SDIVwww
/* 4646 */    MCD::OPC_FilterValue, 2, 153, 18, // Skip to: 9411
/* 4650 */    MCD::OPC_CheckField, 21, 3, 6, 147, 18, // Skip to: 9411
/* 4656 */    MCD::OPC_Decode, 184, 5, 62, // Opcode: RORVwww
/* 4660 */    MCD::OPC_FilterValue, 3, 139, 18, // Skip to: 9411
/* 4664 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 4667 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4681
/* 4671 */    MCD::OPC_CheckField, 21, 3, 0, 126, 18, // Skip to: 9411
/* 4677 */    MCD::OPC_Decode, 131, 5, 64, // Opcode: MADDwwww
/* 4681 */    MCD::OPC_FilterValue, 1, 118, 18, // Skip to: 9411
/* 4685 */    MCD::OPC_CheckField, 21, 3, 0, 112, 18, // Skip to: 9411
/* 4691 */    MCD::OPC_Decode, 142, 5, 64, // Opcode: MSUBwwww
/* 4695 */    MCD::OPC_FilterValue, 1, 193, 1, // Skip to: 5148
/* 4699 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4702 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 4789
/* 4706 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4709 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4723
/* 4713 */    MCD::OPC_CheckField, 21, 1, 0, 84, 18, // Skip to: 9411
/* 4719 */    MCD::OPC_Decode, 144, 4, 65, // Opcode: LS8_STUR
/* 4723 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4737
/* 4727 */    MCD::OPC_CheckField, 21, 1, 0, 70, 18, // Skip to: 9411
/* 4733 */    MCD::OPC_Decode, 140, 4, 66, // Opcode: LS8_PostInd_STR
/* 4737 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 4775
/* 4741 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4744 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4752
/* 4748 */    MCD::OPC_Decode, 146, 4, 65, // Opcode: LS8_UnPriv_STR
/* 4752 */    MCD::OPC_FilterValue, 1, 47, 18, // Skip to: 9411
/* 4756 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4759 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4767
/* 4763 */    MCD::OPC_Decode, 148, 4, 67, // Opcode: LS8_Wm_RegOffset_STR
/* 4767 */    MCD::OPC_FilterValue, 1, 32, 18, // Skip to: 9411
/* 4771 */    MCD::OPC_Decode, 150, 4, 68, // Opcode: LS8_Xm_RegOffset_STR
/* 4775 */    MCD::OPC_FilterValue, 3, 24, 18, // Skip to: 9411
/* 4779 */    MCD::OPC_CheckField, 21, 1, 0, 18, 18, // Skip to: 9411
/* 4785 */    MCD::OPC_Decode, 142, 4, 66, // Opcode: LS8_PreInd_STR
/* 4789 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 4876
/* 4793 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4796 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4810
/* 4800 */    MCD::OPC_CheckField, 21, 1, 0, 253, 17, // Skip to: 9411
/* 4806 */    MCD::OPC_Decode, 138, 4, 65, // Opcode: LS8_LDUR
/* 4810 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4824
/* 4814 */    MCD::OPC_CheckField, 21, 1, 0, 239, 17, // Skip to: 9411
/* 4820 */    MCD::OPC_Decode, 139, 4, 66, // Opcode: LS8_PostInd_LDR
/* 4824 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 4862
/* 4828 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4831 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4839
/* 4835 */    MCD::OPC_Decode, 145, 4, 65, // Opcode: LS8_UnPriv_LDR
/* 4839 */    MCD::OPC_FilterValue, 1, 216, 17, // Skip to: 9411
/* 4843 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4846 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4854
/* 4850 */    MCD::OPC_Decode, 147, 4, 67, // Opcode: LS8_Wm_RegOffset_LDR
/* 4854 */    MCD::OPC_FilterValue, 1, 201, 17, // Skip to: 9411
/* 4858 */    MCD::OPC_Decode, 149, 4, 68, // Opcode: LS8_Xm_RegOffset_LDR
/* 4862 */    MCD::OPC_FilterValue, 3, 193, 17, // Skip to: 9411
/* 4866 */    MCD::OPC_CheckField, 21, 1, 0, 187, 17, // Skip to: 9411
/* 4872 */    MCD::OPC_Decode, 141, 4, 66, // Opcode: LS8_PreInd_LDR
/* 4876 */    MCD::OPC_FilterValue, 2, 83, 0, // Skip to: 4963
/* 4880 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4883 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4897
/* 4887 */    MCD::OPC_CheckField, 21, 1, 0, 166, 17, // Skip to: 9411
/* 4893 */    MCD::OPC_Decode, 185, 3, 69, // Opcode: LDRSBx_U
/* 4897 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4911
/* 4901 */    MCD::OPC_CheckField, 21, 1, 0, 152, 17, // Skip to: 9411
/* 4907 */    MCD::OPC_Decode, 183, 3, 66, // Opcode: LDRSBx_PostInd
/* 4911 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 4949
/* 4915 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4918 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4926
/* 4922 */    MCD::OPC_Decode, 212, 3, 69, // Opcode: LDTRSBx
/* 4926 */    MCD::OPC_FilterValue, 1, 129, 17, // Skip to: 9411
/* 4930 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 4933 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4941
/* 4937 */    MCD::OPC_Decode, 186, 3, 70, // Opcode: LDRSBx_Wm_RegOffset
/* 4941 */    MCD::OPC_FilterValue, 1, 114, 17, // Skip to: 9411
/* 4945 */    MCD::OPC_Decode, 187, 3, 71, // Opcode: LDRSBx_Xm_RegOffset
/* 4949 */    MCD::OPC_FilterValue, 3, 106, 17, // Skip to: 9411
/* 4953 */    MCD::OPC_CheckField, 21, 1, 0, 100, 17, // Skip to: 9411
/* 4959 */    MCD::OPC_Decode, 184, 3, 66, // Opcode: LDRSBx_PreInd
/* 4963 */    MCD::OPC_FilterValue, 3, 83, 0, // Skip to: 5050
/* 4967 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 4970 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4984
/* 4974 */    MCD::OPC_CheckField, 21, 1, 0, 79, 17, // Skip to: 9411
/* 4980 */    MCD::OPC_Decode, 179, 3, 65, // Opcode: LDRSBw_U
/* 4984 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4998
/* 4988 */    MCD::OPC_CheckField, 21, 1, 0, 65, 17, // Skip to: 9411
/* 4994 */    MCD::OPC_Decode, 177, 3, 66, // Opcode: LDRSBw_PostInd
/* 4998 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 5036
/* 5002 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5005 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5013
/* 5009 */    MCD::OPC_Decode, 211, 3, 65, // Opcode: LDTRSBw
/* 5013 */    MCD::OPC_FilterValue, 1, 42, 17, // Skip to: 9411
/* 5017 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5020 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5028
/* 5024 */    MCD::OPC_Decode, 180, 3, 67, // Opcode: LDRSBw_Wm_RegOffset
/* 5028 */    MCD::OPC_FilterValue, 1, 27, 17, // Skip to: 9411
/* 5032 */    MCD::OPC_Decode, 181, 3, 68, // Opcode: LDRSBw_Xm_RegOffset
/* 5036 */    MCD::OPC_FilterValue, 3, 19, 17, // Skip to: 9411
/* 5040 */    MCD::OPC_CheckField, 21, 1, 0, 13, 17, // Skip to: 9411
/* 5046 */    MCD::OPC_Decode, 178, 3, 66, // Opcode: LDRSBw_PreInd
/* 5050 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5058
/* 5054 */    MCD::OPC_Decode, 143, 4, 72, // Opcode: LS8_STR
/* 5058 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 5066
/* 5062 */    MCD::OPC_Decode, 137, 4, 72, // Opcode: LS8_LDR
/* 5066 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 5074
/* 5070 */    MCD::OPC_Decode, 182, 3, 29, // Opcode: LDRSBx
/* 5074 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 5082
/* 5078 */    MCD::OPC_Decode, 176, 3, 72, // Opcode: LDRSBw
/* 5082 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 5101
/* 5086 */    MCD::OPC_CheckField, 21, 1, 0, 223, 16, // Skip to: 9411
/* 5092 */    MCD::OPC_CheckField, 10, 6, 0, 217, 16, // Skip to: 9411
/* 5098 */    MCD::OPC_Decode, 17, 62, // Opcode: ADCSwww
/* 5101 */    MCD::OPC_FilterValue, 9, 210, 16, // Skip to: 9411
/* 5105 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5108 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5128
/* 5112 */    MCD::OPC_CheckField, 21, 1, 0, 197, 16, // Skip to: 9411
/* 5118 */    MCD::OPC_CheckField, 4, 1, 0, 191, 16, // Skip to: 9411
/* 5124 */    MCD::OPC_Decode, 187, 1, 73, // Opcode: CCMNww
/* 5128 */    MCD::OPC_FilterValue, 2, 183, 16, // Skip to: 9411
/* 5132 */    MCD::OPC_CheckField, 21, 1, 0, 177, 16, // Skip to: 9411
/* 5138 */    MCD::OPC_CheckField, 4, 1, 0, 171, 16, // Skip to: 9411
/* 5144 */    MCD::OPC_Decode, 186, 1, 74, // Opcode: CCMNwi
/* 5148 */    MCD::OPC_FilterValue, 2, 123, 0, // Skip to: 5275
/* 5152 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 5155 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5163
/* 5159 */    MCD::OPC_Decode, 210, 3, 46, // Opcode: LDRx_lit
/* 5163 */    MCD::OPC_FilterValue, 2, 148, 16, // Skip to: 9411
/* 5167 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5170 */    MCD::OPC_FilterValue, 0, 48, 0, // Skip to: 5222
/* 5174 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5177 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5191
/* 5181 */    MCD::OPC_CheckField, 12, 4, 0, 128, 16, // Skip to: 9411
/* 5187 */    MCD::OPC_Decode, 188, 5, 62, // Opcode: SBCwww
/* 5191 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5199
/* 5195 */    MCD::OPC_Decode, 128, 2, 63, // Opcode: CSINVwwwc
/* 5199 */    MCD::OPC_FilterValue, 6, 112, 16, // Skip to: 9411
/* 5203 */    MCD::OPC_ExtractField, 12, 9,  // Inst{20-12} ...
/* 5206 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5214
/* 5210 */    MCD::OPC_Decode, 175, 5, 38, // Opcode: RBITww
/* 5214 */    MCD::OPC_FilterValue, 1, 97, 16, // Skip to: 9411
/* 5218 */    MCD::OPC_Decode, 197, 1, 38, // Opcode: CLZww
/* 5222 */    MCD::OPC_FilterValue, 1, 34, 0, // Skip to: 5260
/* 5226 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5229 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5237
/* 5233 */    MCD::OPC_Decode, 130, 2, 63, // Opcode: CSNEGwwwc
/* 5237 */    MCD::OPC_FilterValue, 6, 74, 16, // Skip to: 9411
/* 5241 */    MCD::OPC_ExtractField, 12, 9,  // Inst{20-12} ...
/* 5244 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5252
/* 5248 */    MCD::OPC_Decode, 179, 5, 38, // Opcode: REV16ww
/* 5252 */    MCD::OPC_FilterValue, 1, 59, 16, // Skip to: 9411
/* 5256 */    MCD::OPC_Decode, 195, 1, 38, // Opcode: CLSww
/* 5260 */    MCD::OPC_FilterValue, 2, 51, 16, // Skip to: 9411
/* 5264 */    MCD::OPC_CheckField, 12, 12, 128, 24, 44, 16, // Skip to: 9411
/* 5271 */    MCD::OPC_Decode, 182, 5, 38, // Opcode: REVww
/* 5275 */    MCD::OPC_FilterValue, 3, 194, 1, // Skip to: 5729
/* 5279 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5282 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 5369
/* 5286 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5289 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5303
/* 5293 */    MCD::OPC_CheckField, 21, 1, 0, 16, 16, // Skip to: 9411
/* 5299 */    MCD::OPC_Decode, 230, 3, 65, // Opcode: LS16_STUR
/* 5303 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5317
/* 5307 */    MCD::OPC_CheckField, 21, 1, 0, 2, 16, // Skip to: 9411
/* 5313 */    MCD::OPC_Decode, 226, 3, 66, // Opcode: LS16_PostInd_STR
/* 5317 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 5355
/* 5321 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5324 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5332
/* 5328 */    MCD::OPC_Decode, 232, 3, 65, // Opcode: LS16_UnPriv_STR
/* 5332 */    MCD::OPC_FilterValue, 1, 235, 15, // Skip to: 9411
/* 5336 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5339 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5347
/* 5343 */    MCD::OPC_Decode, 234, 3, 67, // Opcode: LS16_Wm_RegOffset_STR
/* 5347 */    MCD::OPC_FilterValue, 1, 220, 15, // Skip to: 9411
/* 5351 */    MCD::OPC_Decode, 236, 3, 68, // Opcode: LS16_Xm_RegOffset_STR
/* 5355 */    MCD::OPC_FilterValue, 3, 212, 15, // Skip to: 9411
/* 5359 */    MCD::OPC_CheckField, 21, 1, 0, 206, 15, // Skip to: 9411
/* 5365 */    MCD::OPC_Decode, 228, 3, 66, // Opcode: LS16_PreInd_STR
/* 5369 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 5456
/* 5373 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5376 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5390
/* 5380 */    MCD::OPC_CheckField, 21, 1, 0, 185, 15, // Skip to: 9411
/* 5386 */    MCD::OPC_Decode, 224, 3, 65, // Opcode: LS16_LDUR
/* 5390 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5404
/* 5394 */    MCD::OPC_CheckField, 21, 1, 0, 171, 15, // Skip to: 9411
/* 5400 */    MCD::OPC_Decode, 225, 3, 66, // Opcode: LS16_PostInd_LDR
/* 5404 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 5442
/* 5408 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5411 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5419
/* 5415 */    MCD::OPC_Decode, 231, 3, 65, // Opcode: LS16_UnPriv_LDR
/* 5419 */    MCD::OPC_FilterValue, 1, 148, 15, // Skip to: 9411
/* 5423 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5426 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5434
/* 5430 */    MCD::OPC_Decode, 233, 3, 67, // Opcode: LS16_Wm_RegOffset_LDR
/* 5434 */    MCD::OPC_FilterValue, 1, 133, 15, // Skip to: 9411
/* 5438 */    MCD::OPC_Decode, 235, 3, 68, // Opcode: LS16_Xm_RegOffset_LDR
/* 5442 */    MCD::OPC_FilterValue, 3, 125, 15, // Skip to: 9411
/* 5446 */    MCD::OPC_CheckField, 21, 1, 0, 119, 15, // Skip to: 9411
/* 5452 */    MCD::OPC_Decode, 227, 3, 66, // Opcode: LS16_PreInd_LDR
/* 5456 */    MCD::OPC_FilterValue, 2, 83, 0, // Skip to: 5543
/* 5460 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5477
/* 5467 */    MCD::OPC_CheckField, 21, 1, 0, 98, 15, // Skip to: 9411
/* 5473 */    MCD::OPC_Decode, 197, 3, 69, // Opcode: LDRSHx_U
/* 5477 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5491
/* 5481 */    MCD::OPC_CheckField, 21, 1, 0, 84, 15, // Skip to: 9411
/* 5487 */    MCD::OPC_Decode, 195, 3, 66, // Opcode: LDRSHx_PostInd
/* 5491 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 5529
/* 5495 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5498 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5506
/* 5502 */    MCD::OPC_Decode, 214, 3, 69, // Opcode: LDTRSHx
/* 5506 */    MCD::OPC_FilterValue, 1, 61, 15, // Skip to: 9411
/* 5510 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5513 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5521
/* 5517 */    MCD::OPC_Decode, 198, 3, 70, // Opcode: LDRSHx_Wm_RegOffset
/* 5521 */    MCD::OPC_FilterValue, 1, 46, 15, // Skip to: 9411
/* 5525 */    MCD::OPC_Decode, 199, 3, 71, // Opcode: LDRSHx_Xm_RegOffset
/* 5529 */    MCD::OPC_FilterValue, 3, 38, 15, // Skip to: 9411
/* 5533 */    MCD::OPC_CheckField, 21, 1, 0, 32, 15, // Skip to: 9411
/* 5539 */    MCD::OPC_Decode, 196, 3, 66, // Opcode: LDRSHx_PreInd
/* 5543 */    MCD::OPC_FilterValue, 3, 83, 0, // Skip to: 5630
/* 5547 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5550 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5564
/* 5554 */    MCD::OPC_CheckField, 21, 1, 0, 11, 15, // Skip to: 9411
/* 5560 */    MCD::OPC_Decode, 191, 3, 65, // Opcode: LDRSHw_U
/* 5564 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 5578
/* 5568 */    MCD::OPC_CheckField, 21, 1, 0, 253, 14, // Skip to: 9411
/* 5574 */    MCD::OPC_Decode, 189, 3, 66, // Opcode: LDRSHw_PostInd
/* 5578 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 5616
/* 5582 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5585 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5593
/* 5589 */    MCD::OPC_Decode, 213, 3, 65, // Opcode: LDTRSHw
/* 5593 */    MCD::OPC_FilterValue, 1, 230, 14, // Skip to: 9411
/* 5597 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5600 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5608
/* 5604 */    MCD::OPC_Decode, 192, 3, 67, // Opcode: LDRSHw_Wm_RegOffset
/* 5608 */    MCD::OPC_FilterValue, 1, 215, 14, // Skip to: 9411
/* 5612 */    MCD::OPC_Decode, 193, 3, 68, // Opcode: LDRSHw_Xm_RegOffset
/* 5616 */    MCD::OPC_FilterValue, 3, 207, 14, // Skip to: 9411
/* 5620 */    MCD::OPC_CheckField, 21, 1, 0, 201, 14, // Skip to: 9411
/* 5626 */    MCD::OPC_Decode, 190, 3, 66, // Opcode: LDRSHw_PreInd
/* 5630 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5638
/* 5634 */    MCD::OPC_Decode, 229, 3, 72, // Opcode: LS16_STR
/* 5638 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 5646
/* 5642 */    MCD::OPC_Decode, 223, 3, 72, // Opcode: LS16_LDR
/* 5646 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 5654
/* 5650 */    MCD::OPC_Decode, 194, 3, 29, // Opcode: LDRSHx
/* 5654 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 5662
/* 5658 */    MCD::OPC_Decode, 188, 3, 72, // Opcode: LDRSHw
/* 5662 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 5682
/* 5666 */    MCD::OPC_CheckField, 21, 1, 0, 155, 14, // Skip to: 9411
/* 5672 */    MCD::OPC_CheckField, 10, 6, 0, 149, 14, // Skip to: 9411
/* 5678 */    MCD::OPC_Decode, 186, 5, 62, // Opcode: SBCSwww
/* 5682 */    MCD::OPC_FilterValue, 9, 141, 14, // Skip to: 9411
/* 5686 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5689 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5709
/* 5693 */    MCD::OPC_CheckField, 21, 1, 0, 128, 14, // Skip to: 9411
/* 5699 */    MCD::OPC_CheckField, 4, 1, 0, 122, 14, // Skip to: 9411
/* 5705 */    MCD::OPC_Decode, 191, 1, 73, // Opcode: CCMPww
/* 5709 */    MCD::OPC_FilterValue, 2, 114, 14, // Skip to: 9411
/* 5713 */    MCD::OPC_CheckField, 21, 1, 0, 108, 14, // Skip to: 9411
/* 5719 */    MCD::OPC_CheckField, 4, 1, 0, 102, 14, // Skip to: 9411
/* 5725 */    MCD::OPC_Decode, 190, 1, 74, // Opcode: CCMPwi
/* 5729 */    MCD::OPC_FilterValue, 4, 34, 1, // Skip to: 6023
/* 5733 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 5736 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5744
/* 5740 */    MCD::OPC_Decode, 205, 3, 46, // Opcode: LDRSWx_lit
/* 5744 */    MCD::OPC_FilterValue, 2, 171, 0, // Skip to: 5919
/* 5748 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 5751 */    MCD::OPC_FilterValue, 0, 38, 0, // Skip to: 5793
/* 5755 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5758 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5771
/* 5762 */    MCD::OPC_CheckField, 12, 4, 0, 59, 14, // Skip to: 9411
/* 5768 */    MCD::OPC_Decode, 20, 75, // Opcode: ADCxxx
/* 5771 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5779
/* 5775 */    MCD::OPC_Decode, 253, 1, 76, // Opcode: CSELxxxc
/* 5779 */    MCD::OPC_FilterValue, 6, 44, 14, // Skip to: 9411
/* 5783 */    MCD::OPC_CheckField, 12, 4, 2, 38, 14, // Skip to: 9411
/* 5789 */    MCD::OPC_Decode, 236, 4, 75, // Opcode: LSLVxxx
/* 5793 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5822
/* 5797 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5800 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 5808
/* 5804 */    MCD::OPC_Decode, 255, 1, 76, // Opcode: CSINCxxxc
/* 5808 */    MCD::OPC_FilterValue, 6, 15, 14, // Skip to: 9411
/* 5812 */    MCD::OPC_CheckField, 12, 4, 2, 9, 14, // Skip to: 9411
/* 5818 */    MCD::OPC_Decode, 128, 5, 75, // Opcode: LSRVxxx
/* 5822 */    MCD::OPC_FilterValue, 2, 30, 0, // Skip to: 5856
/* 5826 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 5829 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5843
/* 5833 */    MCD::OPC_CheckField, 21, 3, 6, 244, 13, // Skip to: 9411
/* 5839 */    MCD::OPC_Decode, 197, 6, 75, // Opcode: UDIVxxx
/* 5843 */    MCD::OPC_FilterValue, 2, 236, 13, // Skip to: 9411
/* 5847 */    MCD::OPC_CheckField, 21, 3, 6, 230, 13, // Skip to: 9411
/* 5853 */    MCD::OPC_Decode, 102, 75, // Opcode: ASRVxxx
/* 5856 */    MCD::OPC_FilterValue, 3, 223, 13, // Skip to: 9411
/* 5860 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 5863 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5877
/* 5867 */    MCD::OPC_CheckField, 21, 3, 6, 210, 13, // Skip to: 9411
/* 5873 */    MCD::OPC_Decode, 205, 5, 75, // Opcode: SDIVxxx
/* 5877 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 5891
/* 5881 */    MCD::OPC_CheckField, 21, 3, 6, 196, 13, // Skip to: 9411
/* 5887 */    MCD::OPC_Decode, 185, 5, 75, // Opcode: RORVxxx
/* 5891 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 5905
/* 5895 */    MCD::OPC_CheckField, 21, 3, 6, 182, 13, // Skip to: 9411
/* 5901 */    MCD::OPC_Decode, 251, 1, 77, // Opcode: CRC32X_wwx
/* 5905 */    MCD::OPC_FilterValue, 5, 174, 13, // Skip to: 9411
/* 5909 */    MCD::OPC_CheckField, 21, 3, 6, 168, 13, // Skip to: 9411
/* 5915 */    MCD::OPC_Decode, 248, 1, 77, // Opcode: CRC32CX_wwx
/* 5919 */    MCD::OPC_FilterValue, 3, 160, 13, // Skip to: 9411
/* 5923 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 5926 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 5949
/* 5930 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 5933 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5941
/* 5937 */    MCD::OPC_Decode, 132, 5, 78, // Opcode: MADDxxxx
/* 5941 */    MCD::OPC_FilterValue, 1, 138, 13, // Skip to: 9411
/* 5945 */    MCD::OPC_Decode, 143, 5, 78, // Opcode: MSUBxxxx
/* 5949 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 5972
/* 5953 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 5956 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5964
/* 5960 */    MCD::OPC_Decode, 206, 5, 79, // Opcode: SMADDLxwwx
/* 5964 */    MCD::OPC_FilterValue, 1, 115, 13, // Skip to: 9411
/* 5968 */    MCD::OPC_Decode, 208, 5, 79, // Opcode: SMSUBLxwwx
/* 5972 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 5986
/* 5976 */    MCD::OPC_CheckField, 15, 1, 0, 101, 13, // Skip to: 9411
/* 5982 */    MCD::OPC_Decode, 209, 5, 75, // Opcode: SMULHxxx
/* 5986 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 6009
/* 5990 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 5993 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6001
/* 5997 */    MCD::OPC_Decode, 198, 6, 79, // Opcode: UMADDLxwwx
/* 6001 */    MCD::OPC_FilterValue, 1, 78, 13, // Skip to: 9411
/* 6005 */    MCD::OPC_Decode, 199, 6, 79, // Opcode: UMSUBLxwwx
/* 6009 */    MCD::OPC_FilterValue, 6, 70, 13, // Skip to: 9411
/* 6013 */    MCD::OPC_CheckField, 15, 1, 0, 64, 13, // Skip to: 9411
/* 6019 */    MCD::OPC_Decode, 200, 6, 75, // Opcode: UMULHxxx
/* 6023 */    MCD::OPC_FilterValue, 5, 98, 1, // Skip to: 6381
/* 6027 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 6030 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 6117
/* 6034 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6037 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6051
/* 6041 */    MCD::OPC_CheckField, 21, 1, 0, 36, 13, // Skip to: 9411
/* 6047 */    MCD::OPC_Decode, 244, 3, 65, // Opcode: LS32_STUR
/* 6051 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6065
/* 6055 */    MCD::OPC_CheckField, 21, 1, 0, 22, 13, // Skip to: 9411
/* 6061 */    MCD::OPC_Decode, 240, 3, 66, // Opcode: LS32_PostInd_STR
/* 6065 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 6103
/* 6069 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6072 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6080
/* 6076 */    MCD::OPC_Decode, 246, 3, 65, // Opcode: LS32_UnPriv_STR
/* 6080 */    MCD::OPC_FilterValue, 1, 255, 12, // Skip to: 9411
/* 6084 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6087 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6095
/* 6091 */    MCD::OPC_Decode, 248, 3, 67, // Opcode: LS32_Wm_RegOffset_STR
/* 6095 */    MCD::OPC_FilterValue, 1, 240, 12, // Skip to: 9411
/* 6099 */    MCD::OPC_Decode, 250, 3, 68, // Opcode: LS32_Xm_RegOffset_STR
/* 6103 */    MCD::OPC_FilterValue, 3, 232, 12, // Skip to: 9411
/* 6107 */    MCD::OPC_CheckField, 21, 1, 0, 226, 12, // Skip to: 9411
/* 6113 */    MCD::OPC_Decode, 242, 3, 66, // Opcode: LS32_PreInd_STR
/* 6117 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 6204
/* 6121 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6124 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6138
/* 6128 */    MCD::OPC_CheckField, 21, 1, 0, 205, 12, // Skip to: 9411
/* 6134 */    MCD::OPC_Decode, 238, 3, 65, // Opcode: LS32_LDUR
/* 6138 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6152
/* 6142 */    MCD::OPC_CheckField, 21, 1, 0, 191, 12, // Skip to: 9411
/* 6148 */    MCD::OPC_Decode, 239, 3, 66, // Opcode: LS32_PostInd_LDR
/* 6152 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 6190
/* 6156 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6159 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6167
/* 6163 */    MCD::OPC_Decode, 245, 3, 65, // Opcode: LS32_UnPriv_LDR
/* 6167 */    MCD::OPC_FilterValue, 1, 168, 12, // Skip to: 9411
/* 6171 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6174 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6182
/* 6178 */    MCD::OPC_Decode, 247, 3, 67, // Opcode: LS32_Wm_RegOffset_LDR
/* 6182 */    MCD::OPC_FilterValue, 1, 153, 12, // Skip to: 9411
/* 6186 */    MCD::OPC_Decode, 249, 3, 68, // Opcode: LS32_Xm_RegOffset_LDR
/* 6190 */    MCD::OPC_FilterValue, 3, 145, 12, // Skip to: 9411
/* 6194 */    MCD::OPC_CheckField, 21, 1, 0, 139, 12, // Skip to: 9411
/* 6200 */    MCD::OPC_Decode, 241, 3, 66, // Opcode: LS32_PreInd_LDR
/* 6204 */    MCD::OPC_FilterValue, 2, 83, 0, // Skip to: 6291
/* 6208 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6211 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6225
/* 6215 */    MCD::OPC_CheckField, 21, 1, 0, 118, 12, // Skip to: 9411
/* 6221 */    MCD::OPC_Decode, 216, 3, 69, // Opcode: LDURSWx
/* 6225 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6239
/* 6229 */    MCD::OPC_CheckField, 21, 1, 0, 104, 12, // Skip to: 9411
/* 6235 */    MCD::OPC_Decode, 201, 3, 66, // Opcode: LDRSWx_PostInd
/* 6239 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 6277
/* 6243 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6246 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6254
/* 6250 */    MCD::OPC_Decode, 215, 3, 69, // Opcode: LDTRSWx
/* 6254 */    MCD::OPC_FilterValue, 1, 81, 12, // Skip to: 9411
/* 6258 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6261 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6269
/* 6265 */    MCD::OPC_Decode, 203, 3, 70, // Opcode: LDRSWx_Wm_RegOffset
/* 6269 */    MCD::OPC_FilterValue, 1, 66, 12, // Skip to: 9411
/* 6273 */    MCD::OPC_Decode, 204, 3, 71, // Opcode: LDRSWx_Xm_RegOffset
/* 6277 */    MCD::OPC_FilterValue, 3, 58, 12, // Skip to: 9411
/* 6281 */    MCD::OPC_CheckField, 21, 1, 0, 52, 12, // Skip to: 9411
/* 6287 */    MCD::OPC_Decode, 202, 3, 66, // Opcode: LDRSWx_PreInd
/* 6291 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6299
/* 6295 */    MCD::OPC_Decode, 243, 3, 72, // Opcode: LS32_STR
/* 6299 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 6307
/* 6303 */    MCD::OPC_Decode, 237, 3, 72, // Opcode: LS32_LDR
/* 6307 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 6315
/* 6311 */    MCD::OPC_Decode, 200, 3, 29, // Opcode: LDRSWx
/* 6315 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 6334
/* 6319 */    MCD::OPC_CheckField, 21, 1, 0, 14, 12, // Skip to: 9411
/* 6325 */    MCD::OPC_CheckField, 10, 6, 0, 8, 12, // Skip to: 9411
/* 6331 */    MCD::OPC_Decode, 18, 75, // Opcode: ADCSxxx
/* 6334 */    MCD::OPC_FilterValue, 9, 1, 12, // Skip to: 9411
/* 6338 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6341 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6361
/* 6345 */    MCD::OPC_CheckField, 21, 1, 0, 244, 11, // Skip to: 9411
/* 6351 */    MCD::OPC_CheckField, 4, 1, 0, 238, 11, // Skip to: 9411
/* 6357 */    MCD::OPC_Decode, 189, 1, 80, // Opcode: CCMNxx
/* 6361 */    MCD::OPC_FilterValue, 2, 230, 11, // Skip to: 9411
/* 6365 */    MCD::OPC_CheckField, 21, 1, 0, 224, 11, // Skip to: 9411
/* 6371 */    MCD::OPC_CheckField, 4, 1, 0, 218, 11, // Skip to: 9411
/* 6377 */    MCD::OPC_Decode, 188, 1, 81, // Opcode: CCMNxi
/* 6381 */    MCD::OPC_FilterValue, 6, 138, 0, // Skip to: 6523
/* 6385 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 6388 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6396
/* 6392 */    MCD::OPC_Decode, 173, 5, 82, // Opcode: PRFM_lit
/* 6396 */    MCD::OPC_FilterValue, 2, 195, 11, // Skip to: 9411
/* 6400 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6403 */    MCD::OPC_FilterValue, 0, 48, 0, // Skip to: 6455
/* 6407 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6410 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6424
/* 6414 */    MCD::OPC_CheckField, 12, 4, 0, 175, 11, // Skip to: 9411
/* 6420 */    MCD::OPC_Decode, 189, 5, 75, // Opcode: SBCxxx
/* 6424 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6432
/* 6428 */    MCD::OPC_Decode, 129, 2, 76, // Opcode: CSINVxxxc
/* 6432 */    MCD::OPC_FilterValue, 6, 159, 11, // Skip to: 9411
/* 6436 */    MCD::OPC_ExtractField, 12, 9,  // Inst{20-12} ...
/* 6439 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6447
/* 6443 */    MCD::OPC_Decode, 176, 5, 83, // Opcode: RBITxx
/* 6447 */    MCD::OPC_FilterValue, 1, 144, 11, // Skip to: 9411
/* 6451 */    MCD::OPC_Decode, 198, 1, 83, // Opcode: CLZxx
/* 6455 */    MCD::OPC_FilterValue, 1, 34, 0, // Skip to: 6493
/* 6459 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6462 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6470
/* 6466 */    MCD::OPC_Decode, 131, 2, 76, // Opcode: CSNEGxxxc
/* 6470 */    MCD::OPC_FilterValue, 6, 121, 11, // Skip to: 9411
/* 6474 */    MCD::OPC_ExtractField, 12, 9,  // Inst{20-12} ...
/* 6477 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6485
/* 6481 */    MCD::OPC_Decode, 180, 5, 83, // Opcode: REV16xx
/* 6485 */    MCD::OPC_FilterValue, 1, 106, 11, // Skip to: 9411
/* 6489 */    MCD::OPC_Decode, 196, 1, 83, // Opcode: CLSxx
/* 6493 */    MCD::OPC_FilterValue, 2, 11, 0, // Skip to: 6508
/* 6497 */    MCD::OPC_CheckField, 12, 12, 128, 24, 91, 11, // Skip to: 9411
/* 6504 */    MCD::OPC_Decode, 181, 5, 83, // Opcode: REV32xx
/* 6508 */    MCD::OPC_FilterValue, 3, 83, 11, // Skip to: 9411
/* 6512 */    MCD::OPC_CheckField, 12, 12, 128, 24, 76, 11, // Skip to: 9411
/* 6519 */    MCD::OPC_Decode, 183, 5, 83, // Opcode: REVxx
/* 6523 */    MCD::OPC_FilterValue, 7, 68, 11, // Skip to: 9411
/* 6527 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 6530 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 6617
/* 6534 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6537 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6551
/* 6541 */    MCD::OPC_CheckField, 21, 1, 0, 48, 11, // Skip to: 9411
/* 6547 */    MCD::OPC_Decode, 130, 4, 69, // Opcode: LS64_STUR
/* 6551 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6565
/* 6555 */    MCD::OPC_CheckField, 21, 1, 0, 34, 11, // Skip to: 9411
/* 6561 */    MCD::OPC_Decode, 254, 3, 66, // Opcode: LS64_PostInd_STR
/* 6565 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 6603
/* 6569 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6572 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6580
/* 6576 */    MCD::OPC_Decode, 132, 4, 69, // Opcode: LS64_UnPriv_STR
/* 6580 */    MCD::OPC_FilterValue, 1, 11, 11, // Skip to: 9411
/* 6584 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6587 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6595
/* 6591 */    MCD::OPC_Decode, 134, 4, 70, // Opcode: LS64_Wm_RegOffset_STR
/* 6595 */    MCD::OPC_FilterValue, 1, 252, 10, // Skip to: 9411
/* 6599 */    MCD::OPC_Decode, 136, 4, 71, // Opcode: LS64_Xm_RegOffset_STR
/* 6603 */    MCD::OPC_FilterValue, 3, 244, 10, // Skip to: 9411
/* 6607 */    MCD::OPC_CheckField, 21, 1, 0, 238, 10, // Skip to: 9411
/* 6613 */    MCD::OPC_Decode, 128, 4, 66, // Opcode: LS64_PreInd_STR
/* 6617 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 6704
/* 6621 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6624 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6638
/* 6628 */    MCD::OPC_CheckField, 21, 1, 0, 217, 10, // Skip to: 9411
/* 6634 */    MCD::OPC_Decode, 252, 3, 69, // Opcode: LS64_LDUR
/* 6638 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6652
/* 6642 */    MCD::OPC_CheckField, 21, 1, 0, 203, 10, // Skip to: 9411
/* 6648 */    MCD::OPC_Decode, 253, 3, 66, // Opcode: LS64_PostInd_LDR
/* 6652 */    MCD::OPC_FilterValue, 2, 34, 0, // Skip to: 6690
/* 6656 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6659 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6667
/* 6663 */    MCD::OPC_Decode, 131, 4, 69, // Opcode: LS64_UnPriv_LDR
/* 6667 */    MCD::OPC_FilterValue, 1, 180, 10, // Skip to: 9411
/* 6671 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6674 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6682
/* 6678 */    MCD::OPC_Decode, 133, 4, 70, // Opcode: LS64_Wm_RegOffset_LDR
/* 6682 */    MCD::OPC_FilterValue, 1, 165, 10, // Skip to: 9411
/* 6686 */    MCD::OPC_Decode, 135, 4, 71, // Opcode: LS64_Xm_RegOffset_LDR
/* 6690 */    MCD::OPC_FilterValue, 3, 157, 10, // Skip to: 9411
/* 6694 */    MCD::OPC_CheckField, 21, 1, 0, 151, 10, // Skip to: 9411
/* 6700 */    MCD::OPC_Decode, 255, 3, 66, // Opcode: LS64_PreInd_LDR
/* 6704 */    MCD::OPC_FilterValue, 2, 52, 0, // Skip to: 6760
/* 6708 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6711 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6725
/* 6715 */    MCD::OPC_CheckField, 21, 1, 0, 130, 10, // Skip to: 9411
/* 6721 */    MCD::OPC_Decode, 174, 5, 84, // Opcode: PRFUM
/* 6725 */    MCD::OPC_FilterValue, 2, 122, 10, // Skip to: 9411
/* 6729 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6732 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6746
/* 6736 */    MCD::OPC_CheckField, 21, 1, 1, 109, 10, // Skip to: 9411
/* 6742 */    MCD::OPC_Decode, 171, 5, 85, // Opcode: PRFM_Wm_RegOffset
/* 6746 */    MCD::OPC_FilterValue, 1, 101, 10, // Skip to: 9411
/* 6750 */    MCD::OPC_CheckField, 21, 1, 1, 95, 10, // Skip to: 9411
/* 6756 */    MCD::OPC_Decode, 172, 5, 86, // Opcode: PRFM_Xm_RegOffset
/* 6760 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6768
/* 6764 */    MCD::OPC_Decode, 129, 4, 29, // Opcode: LS64_STR
/* 6768 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 6776
/* 6772 */    MCD::OPC_Decode, 251, 3, 29, // Opcode: LS64_LDR
/* 6776 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 6784
/* 6780 */    MCD::OPC_Decode, 170, 5, 87, // Opcode: PRFM
/* 6784 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 6804
/* 6788 */    MCD::OPC_CheckField, 21, 1, 0, 57, 10, // Skip to: 9411
/* 6794 */    MCD::OPC_CheckField, 10, 6, 0, 51, 10, // Skip to: 9411
/* 6800 */    MCD::OPC_Decode, 187, 5, 75, // Opcode: SBCSxxx
/* 6804 */    MCD::OPC_FilterValue, 9, 43, 10, // Skip to: 9411
/* 6808 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6811 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6831
/* 6815 */    MCD::OPC_CheckField, 21, 1, 0, 30, 10, // Skip to: 9411
/* 6821 */    MCD::OPC_CheckField, 4, 1, 0, 24, 10, // Skip to: 9411
/* 6827 */    MCD::OPC_Decode, 193, 1, 80, // Opcode: CCMPxx
/* 6831 */    MCD::OPC_FilterValue, 2, 16, 10, // Skip to: 9411
/* 6835 */    MCD::OPC_CheckField, 21, 1, 0, 10, 10, // Skip to: 9411
/* 6841 */    MCD::OPC_CheckField, 4, 1, 0, 4, 10, // Skip to: 9411
/* 6847 */    MCD::OPC_Decode, 192, 1, 81, // Opcode: CCMPxi
/* 6851 */    MCD::OPC_FilterValue, 7, 252, 9, // Skip to: 9411
/* 6855 */    MCD::OPC_ExtractField, 29, 3,  // Inst{31-29} ...
/* 6858 */    MCD::OPC_FilterValue, 0, 22, 4, // Skip to: 7908
/* 6862 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 6865 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6873
/* 6869 */    MCD::OPC_Decode, 208, 3, 88, // Opcode: LDRs_lit
/* 6873 */    MCD::OPC_FilterValue, 2, 164, 3, // Skip to: 7809
/* 6877 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 6880 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6919
/* 6884 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 6887 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6895
/* 6891 */    MCD::OPC_Decode, 201, 5, 89, // Opcode: SCVTFswi
/* 6895 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 6903
/* 6899 */    MCD::OPC_Decode, 193, 6, 89, // Opcode: UCVTFswi
/* 6903 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 6911
/* 6907 */    MCD::OPC_Decode, 214, 2, 90, // Opcode: FCVTZSwsi
/* 6911 */    MCD::OPC_FilterValue, 25, 192, 9, // Skip to: 9411
/* 6915 */    MCD::OPC_Decode, 222, 2, 90, // Opcode: FCVTZUwsi
/* 6919 */    MCD::OPC_FilterValue, 1, 161, 1, // Skip to: 7340
/* 6923 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 6926 */    MCD::OPC_FilterValue, 0, 44, 1, // Skip to: 7230
/* 6930 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 6933 */    MCD::OPC_FilterValue, 0, 23, 1, // Skip to: 7216
/* 6937 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 6940 */    MCD::OPC_FilterValue, 0, 115, 0, // Skip to: 7059
/* 6944 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 6947 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6955
/* 6951 */    MCD::OPC_Decode, 196, 2, 91, // Opcode: FCVTNSws
/* 6955 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 6963
/* 6959 */    MCD::OPC_Decode, 200, 2, 91, // Opcode: FCVTNUws
/* 6963 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6971
/* 6967 */    MCD::OPC_Decode, 200, 5, 92, // Opcode: SCVTFsw
/* 6971 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 6979
/* 6975 */    MCD::OPC_Decode, 192, 6, 92, // Opcode: UCVTFsw
/* 6979 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 6987
/* 6983 */    MCD::OPC_Decode, 180, 2, 91, // Opcode: FCVTASws
/* 6987 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 6995
/* 6991 */    MCD::OPC_Decode, 184, 2, 91, // Opcode: FCVTAUws
/* 6995 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7003
/* 6999 */    MCD::OPC_Decode, 252, 2, 91, // Opcode: FMOVws
/* 7003 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 7011
/* 7007 */    MCD::OPC_Decode, 250, 2, 92, // Opcode: FMOVsw
/* 7011 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 7019
/* 7015 */    MCD::OPC_Decode, 204, 2, 91, // Opcode: FCVTPSws
/* 7019 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 7027
/* 7023 */    MCD::OPC_Decode, 208, 2, 91, // Opcode: FCVTPUws
/* 7027 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 7035
/* 7031 */    MCD::OPC_Decode, 188, 2, 91, // Opcode: FCVTMSws
/* 7035 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 7043
/* 7039 */    MCD::OPC_Decode, 192, 2, 91, // Opcode: FCVTMUws
/* 7043 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 7051
/* 7047 */    MCD::OPC_Decode, 213, 2, 91, // Opcode: FCVTZSws
/* 7051 */    MCD::OPC_FilterValue, 25, 52, 9, // Skip to: 9411
/* 7055 */    MCD::OPC_Decode, 221, 2, 91, // Opcode: FCVTZUws
/* 7059 */    MCD::OPC_FilterValue, 1, 35, 0, // Skip to: 7098
/* 7063 */    MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 7066 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7074
/* 7070 */    MCD::OPC_Decode, 175, 2, 93, // Opcode: FCMPss_quiet
/* 7074 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 7082
/* 7078 */    MCD::OPC_Decode, 173, 2, 94, // Opcode: FCMPsi_quiet
/* 7082 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 7090
/* 7086 */    MCD::OPC_Decode, 176, 2, 93, // Opcode: FCMPss_sig
/* 7090 */    MCD::OPC_FilterValue, 24, 13, 9, // Skip to: 9411
/* 7094 */    MCD::OPC_Decode, 174, 2, 94, // Opcode: FCMPsi_sig
/* 7098 */    MCD::OPC_FilterValue, 2, 51, 0, // Skip to: 7153
/* 7102 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 7105 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7113
/* 7109 */    MCD::OPC_Decode, 249, 2, 95, // Opcode: FMOVss
/* 7113 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7121
/* 7117 */    MCD::OPC_Decode, 132, 3, 95, // Opcode: FNEGss
/* 7121 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7129
/* 7125 */    MCD::OPC_Decode, 146, 3, 95, // Opcode: FRINTNss
/* 7129 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7137
/* 7133 */    MCD::OPC_Decode, 144, 3, 95, // Opcode: FRINTMss
/* 7137 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7145
/* 7141 */    MCD::OPC_Decode, 140, 3, 95, // Opcode: FRINTAss
/* 7145 */    MCD::OPC_FilterValue, 7, 214, 8, // Skip to: 9411
/* 7149 */    MCD::OPC_Decode, 150, 3, 95, // Opcode: FRINTXss
/* 7153 */    MCD::OPC_FilterValue, 6, 206, 8, // Skip to: 9411
/* 7157 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 7160 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7168
/* 7164 */    MCD::OPC_Decode, 162, 2, 95, // Opcode: FABSss
/* 7168 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7176
/* 7172 */    MCD::OPC_Decode, 154, 3, 95, // Opcode: FSQRTss
/* 7176 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7184
/* 7180 */    MCD::OPC_Decode, 228, 2, 96, // Opcode: FCVTds
/* 7184 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7192
/* 7188 */    MCD::OPC_Decode, 230, 2, 97, // Opcode: FCVThs
/* 7192 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7200
/* 7196 */    MCD::OPC_Decode, 148, 3, 95, // Opcode: FRINTPss
/* 7200 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7208
/* 7204 */    MCD::OPC_Decode, 152, 3, 95, // Opcode: FRINTZss
/* 7208 */    MCD::OPC_FilterValue, 7, 151, 8, // Skip to: 9411
/* 7212 */    MCD::OPC_Decode, 142, 3, 95, // Opcode: FRINTIss
/* 7216 */    MCD::OPC_FilterValue, 1, 143, 8, // Skip to: 9411
/* 7220 */    MCD::OPC_CheckField, 5, 5, 0, 137, 8, // Skip to: 9411
/* 7226 */    MCD::OPC_Decode, 248, 2, 98, // Opcode: FMOVsi
/* 7230 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 7253
/* 7234 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 7237 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7245
/* 7241 */    MCD::OPC_Decode, 168, 2, 99, // Opcode: FCCMPss
/* 7245 */    MCD::OPC_FilterValue, 1, 114, 8, // Skip to: 9411
/* 7249 */    MCD::OPC_Decode, 166, 2, 99, // Opcode: FCCMPEss
/* 7253 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 7332
/* 7257 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 7260 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7268
/* 7264 */    MCD::OPC_Decode, 130, 3, 100, // Opcode: FMULsss
/* 7268 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7276
/* 7272 */    MCD::OPC_Decode, 234, 2, 100, // Opcode: FDIVsss
/* 7276 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7284
/* 7280 */    MCD::OPC_Decode, 164, 2, 100, // Opcode: FADDsss
/* 7284 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7292
/* 7288 */    MCD::OPC_Decode, 156, 3, 100, // Opcode: FSUBsss
/* 7292 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7300
/* 7296 */    MCD::OPC_Decode, 240, 2, 100, // Opcode: FMAXsss
/* 7300 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7308
/* 7304 */    MCD::OPC_Decode, 244, 2, 100, // Opcode: FMINsss
/* 7308 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7316
/* 7312 */    MCD::OPC_Decode, 238, 2, 100, // Opcode: FMAXNMsss
/* 7316 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 7324
/* 7320 */    MCD::OPC_Decode, 242, 2, 100, // Opcode: FMINNMsss
/* 7324 */    MCD::OPC_FilterValue, 8, 35, 8, // Skip to: 9411
/* 7328 */    MCD::OPC_Decode, 138, 3, 100, // Opcode: FNMULsss
/* 7332 */    MCD::OPC_FilterValue, 3, 27, 8, // Skip to: 9411
/* 7336 */    MCD::OPC_Decode, 178, 2, 101, // Opcode: FCSELsssc
/* 7340 */    MCD::OPC_FilterValue, 2, 35, 0, // Skip to: 7379
/* 7344 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 7347 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7355
/* 7351 */    MCD::OPC_Decode, 197, 5, 102, // Opcode: SCVTFdwi
/* 7355 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7363
/* 7359 */    MCD::OPC_Decode, 189, 6, 102, // Opcode: UCVTFdwi
/* 7363 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 7371
/* 7367 */    MCD::OPC_Decode, 212, 2, 103, // Opcode: FCVTZSwdi
/* 7371 */    MCD::OPC_FilterValue, 25, 244, 7, // Skip to: 9411
/* 7375 */    MCD::OPC_Decode, 220, 2, 103, // Opcode: FCVTZUwdi
/* 7379 */    MCD::OPC_FilterValue, 3, 145, 1, // Skip to: 7784
/* 7383 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 7386 */    MCD::OPC_FilterValue, 0, 28, 1, // Skip to: 7674
/* 7390 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 7393 */    MCD::OPC_FilterValue, 0, 7, 1, // Skip to: 7660
/* 7397 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 7400 */    MCD::OPC_FilterValue, 0, 99, 0, // Skip to: 7503
/* 7404 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 7407 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7415
/* 7411 */    MCD::OPC_Decode, 195, 2, 104, // Opcode: FCVTNSwd
/* 7415 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7423
/* 7419 */    MCD::OPC_Decode, 199, 2, 104, // Opcode: FCVTNUwd
/* 7423 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7431
/* 7427 */    MCD::OPC_Decode, 196, 5, 105, // Opcode: SCVTFdw
/* 7431 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7439
/* 7435 */    MCD::OPC_Decode, 188, 6, 105, // Opcode: UCVTFdw
/* 7439 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7447
/* 7443 */    MCD::OPC_Decode, 179, 2, 104, // Opcode: FCVTASwd
/* 7447 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7455
/* 7451 */    MCD::OPC_Decode, 183, 2, 104, // Opcode: FCVTAUwd
/* 7455 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 7463
/* 7459 */    MCD::OPC_Decode, 203, 2, 104, // Opcode: FCVTPSwd
/* 7463 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 7471
/* 7467 */    MCD::OPC_Decode, 207, 2, 104, // Opcode: FCVTPUwd
/* 7471 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 7479
/* 7475 */    MCD::OPC_Decode, 187, 2, 104, // Opcode: FCVTMSwd
/* 7479 */    MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 7487
/* 7483 */    MCD::OPC_Decode, 191, 2, 104, // Opcode: FCVTMUwd
/* 7487 */    MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 7495
/* 7491 */    MCD::OPC_Decode, 211, 2, 104, // Opcode: FCVTZSwd
/* 7495 */    MCD::OPC_FilterValue, 25, 120, 7, // Skip to: 9411
/* 7499 */    MCD::OPC_Decode, 219, 2, 104, // Opcode: FCVTZUwd
/* 7503 */    MCD::OPC_FilterValue, 1, 35, 0, // Skip to: 7542
/* 7507 */    MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 7510 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7518
/* 7514 */    MCD::OPC_Decode, 169, 2, 106, // Opcode: FCMPdd_quiet
/* 7518 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 7526
/* 7522 */    MCD::OPC_Decode, 171, 2, 107, // Opcode: FCMPdi_quiet
/* 7526 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 7534
/* 7530 */    MCD::OPC_Decode, 170, 2, 106, // Opcode: FCMPdd_sig
/* 7534 */    MCD::OPC_FilterValue, 24, 81, 7, // Skip to: 9411
/* 7538 */    MCD::OPC_Decode, 172, 2, 107, // Opcode: FCMPdi_sig
/* 7542 */    MCD::OPC_FilterValue, 2, 59, 0, // Skip to: 7605
/* 7546 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 7549 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7557
/* 7553 */    MCD::OPC_Decode, 245, 2, 108, // Opcode: FMOVdd
/* 7557 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7565
/* 7561 */    MCD::OPC_Decode, 131, 3, 108, // Opcode: FNEGdd
/* 7565 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7573
/* 7569 */    MCD::OPC_Decode, 231, 2, 109, // Opcode: FCVTsd
/* 7573 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7581
/* 7577 */    MCD::OPC_Decode, 145, 3, 108, // Opcode: FRINTNdd
/* 7581 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7589
/* 7585 */    MCD::OPC_Decode, 143, 3, 108, // Opcode: FRINTMdd
/* 7589 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7597
/* 7593 */    MCD::OPC_Decode, 139, 3, 108, // Opcode: FRINTAdd
/* 7597 */    MCD::OPC_FilterValue, 7, 18, 7, // Skip to: 9411
/* 7601 */    MCD::OPC_Decode, 149, 3, 108, // Opcode: FRINTXdd
/* 7605 */    MCD::OPC_FilterValue, 6, 10, 7, // Skip to: 9411
/* 7609 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 7612 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7620
/* 7616 */    MCD::OPC_Decode, 161, 2, 108, // Opcode: FABSdd
/* 7620 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7628
/* 7624 */    MCD::OPC_Decode, 153, 3, 108, // Opcode: FSQRTdd
/* 7628 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7636
/* 7632 */    MCD::OPC_Decode, 229, 2, 110, // Opcode: FCVThd
/* 7636 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7644
/* 7640 */    MCD::OPC_Decode, 147, 3, 108, // Opcode: FRINTPdd
/* 7644 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7652
/* 7648 */    MCD::OPC_Decode, 151, 3, 108, // Opcode: FRINTZdd
/* 7652 */    MCD::OPC_FilterValue, 7, 219, 6, // Skip to: 9411
/* 7656 */    MCD::OPC_Decode, 141, 3, 108, // Opcode: FRINTIdd
/* 7660 */    MCD::OPC_FilterValue, 1, 211, 6, // Skip to: 9411
/* 7664 */    MCD::OPC_CheckField, 5, 5, 0, 205, 6, // Skip to: 9411
/* 7670 */    MCD::OPC_Decode, 246, 2, 111, // Opcode: FMOVdi
/* 7674 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 7697
/* 7678 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 7681 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7689
/* 7685 */    MCD::OPC_Decode, 167, 2, 112, // Opcode: FCCMPdd
/* 7689 */    MCD::OPC_FilterValue, 1, 182, 6, // Skip to: 9411
/* 7693 */    MCD::OPC_Decode, 165, 2, 112, // Opcode: FCCMPEdd
/* 7697 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 7776
/* 7701 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 7704 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7712
/* 7708 */    MCD::OPC_Decode, 129, 3, 113, // Opcode: FMULddd
/* 7712 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7720
/* 7716 */    MCD::OPC_Decode, 233, 2, 113, // Opcode: FDIVddd
/* 7720 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 7728
/* 7724 */    MCD::OPC_Decode, 163, 2, 113, // Opcode: FADDddd
/* 7728 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 7736
/* 7732 */    MCD::OPC_Decode, 155, 3, 113, // Opcode: FSUBddd
/* 7736 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 7744
/* 7740 */    MCD::OPC_Decode, 239, 2, 113, // Opcode: FMAXddd
/* 7744 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 7752
/* 7748 */    MCD::OPC_Decode, 243, 2, 113, // Opcode: FMINddd
/* 7752 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 7760
/* 7756 */    MCD::OPC_Decode, 237, 2, 113, // Opcode: FMAXNMddd
/* 7760 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 7768
/* 7764 */    MCD::OPC_Decode, 241, 2, 113, // Opcode: FMINNMddd
/* 7768 */    MCD::OPC_FilterValue, 8, 103, 6, // Skip to: 9411
/* 7772 */    MCD::OPC_Decode, 137, 3, 113, // Opcode: FNMULddd
/* 7776 */    MCD::OPC_FilterValue, 3, 95, 6, // Skip to: 9411
/* 7780 */    MCD::OPC_Decode, 177, 2, 114, // Opcode: FCSELdddc
/* 7784 */    MCD::OPC_FilterValue, 7, 87, 6, // Skip to: 9411
/* 7788 */    MCD::OPC_ExtractField, 10, 11,  // Inst{20-10} ...
/* 7791 */    MCD::OPC_FilterValue, 144, 1, 4, 0, // Skip to: 7800
/* 7796 */    MCD::OPC_Decode, 232, 2, 115, // Opcode: FCVTsh
/* 7800 */    MCD::OPC_FilterValue, 176, 1, 70, 6, // Skip to: 9411
/* 7805 */    MCD::OPC_Decode, 227, 2, 116, // Opcode: FCVTdh
/* 7809 */    MCD::OPC_FilterValue, 3, 62, 6, // Skip to: 9411
/* 7813 */    MCD::OPC_ExtractField, 21, 3,  // Inst{23-21} ...
/* 7816 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 7839
/* 7820 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 7823 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7831
/* 7827 */    MCD::OPC_Decode, 236, 2, 117, // Opcode: FMADDssss
/* 7831 */    MCD::OPC_FilterValue, 1, 40, 6, // Skip to: 9411
/* 7835 */    MCD::OPC_Decode, 128, 3, 117, // Opcode: FMSUBssss
/* 7839 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 7862
/* 7843 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 7846 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7854
/* 7850 */    MCD::OPC_Decode, 134, 3, 117, // Opcode: FNMADDssss
/* 7854 */    MCD::OPC_FilterValue, 1, 17, 6, // Skip to: 9411
/* 7858 */    MCD::OPC_Decode, 136, 3, 117, // Opcode: FNMSUBssss
/* 7862 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 7885
/* 7866 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 7869 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7877
/* 7873 */    MCD::OPC_Decode, 235, 2, 118, // Opcode: FMADDdddd
/* 7877 */    MCD::OPC_FilterValue, 1, 250, 5, // Skip to: 9411
/* 7881 */    MCD::OPC_Decode, 255, 2, 118, // Opcode: FMSUBdddd
/* 7885 */    MCD::OPC_FilterValue, 3, 242, 5, // Skip to: 9411
/* 7889 */    MCD::OPC_ExtractField, 15, 1,  // Inst{15} ...
/* 7892 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7900
/* 7896 */    MCD::OPC_Decode, 133, 3, 118, // Opcode: FNMADDdddd
/* 7900 */    MCD::OPC_FilterValue, 1, 227, 5, // Skip to: 9411
/* 7904 */    MCD::OPC_Decode, 135, 3, 118, // Opcode: FNMSUBdddd
/* 7908 */    MCD::OPC_FilterValue, 1, 115, 1, // Skip to: 8283
/* 7912 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 7915 */    MCD::OPC_FilterValue, 0, 80, 0, // Skip to: 7999
/* 7919 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 7922 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7936
/* 7926 */    MCD::OPC_CheckField, 21, 1, 0, 199, 5, // Skip to: 9411
/* 7932 */    MCD::OPC_Decode, 206, 4, 119, // Opcode: LSFP8_STUR
/* 7936 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7950
/* 7940 */    MCD::OPC_CheckField, 21, 1, 0, 185, 5, // Skip to: 9411
/* 7946 */    MCD::OPC_Decode, 202, 4, 66, // Opcode: LSFP8_PostInd_STR
/* 7950 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 7985
/* 7954 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 7957 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7971
/* 7961 */    MCD::OPC_CheckField, 21, 1, 1, 164, 5, // Skip to: 9411
/* 7967 */    MCD::OPC_Decode, 208, 4, 120, // Opcode: LSFP8_Wm_RegOffset_STR
/* 7971 */    MCD::OPC_FilterValue, 1, 156, 5, // Skip to: 9411
/* 7975 */    MCD::OPC_CheckField, 21, 1, 1, 150, 5, // Skip to: 9411
/* 7981 */    MCD::OPC_Decode, 210, 4, 121, // Opcode: LSFP8_Xm_RegOffset_STR
/* 7985 */    MCD::OPC_FilterValue, 3, 142, 5, // Skip to: 9411
/* 7989 */    MCD::OPC_CheckField, 21, 1, 0, 136, 5, // Skip to: 9411
/* 7995 */    MCD::OPC_Decode, 204, 4, 66, // Opcode: LSFP8_PreInd_STR
/* 7999 */    MCD::OPC_FilterValue, 1, 80, 0, // Skip to: 8083
/* 8003 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 8006 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8020
/* 8010 */    MCD::OPC_CheckField, 21, 1, 0, 115, 5, // Skip to: 9411
/* 8016 */    MCD::OPC_Decode, 200, 4, 119, // Opcode: LSFP8_LDUR
/* 8020 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8034
/* 8024 */    MCD::OPC_CheckField, 21, 1, 0, 101, 5, // Skip to: 9411
/* 8030 */    MCD::OPC_Decode, 201, 4, 66, // Opcode: LSFP8_PostInd_LDR
/* 8034 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 8069
/* 8038 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 8041 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8055
/* 8045 */    MCD::OPC_CheckField, 21, 1, 1, 80, 5, // Skip to: 9411
/* 8051 */    MCD::OPC_Decode, 207, 4, 120, // Opcode: LSFP8_Wm_RegOffset_LDR
/* 8055 */    MCD::OPC_FilterValue, 1, 72, 5, // Skip to: 9411
/* 8059 */    MCD::OPC_CheckField, 21, 1, 1, 66, 5, // Skip to: 9411
/* 8065 */    MCD::OPC_Decode, 209, 4, 121, // Opcode: LSFP8_Xm_RegOffset_LDR
/* 8069 */    MCD::OPC_FilterValue, 3, 58, 5, // Skip to: 9411
/* 8073 */    MCD::OPC_CheckField, 21, 1, 0, 52, 5, // Skip to: 9411
/* 8079 */    MCD::OPC_Decode, 203, 4, 66, // Opcode: LSFP8_PreInd_LDR
/* 8083 */    MCD::OPC_FilterValue, 2, 80, 0, // Skip to: 8167
/* 8087 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 8090 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8104
/* 8094 */    MCD::OPC_CheckField, 21, 1, 0, 31, 5, // Skip to: 9411
/* 8100 */    MCD::OPC_Decode, 158, 4, 122, // Opcode: LSFP128_STUR
/* 8104 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8118
/* 8108 */    MCD::OPC_CheckField, 21, 1, 0, 17, 5, // Skip to: 9411
/* 8114 */    MCD::OPC_Decode, 154, 4, 66, // Opcode: LSFP128_PostInd_STR
/* 8118 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 8153
/* 8122 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 8125 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8139
/* 8129 */    MCD::OPC_CheckField, 21, 1, 1, 252, 4, // Skip to: 9411
/* 8135 */    MCD::OPC_Decode, 160, 4, 123, // Opcode: LSFP128_Wm_RegOffset_STR
/* 8139 */    MCD::OPC_FilterValue, 1, 244, 4, // Skip to: 9411
/* 8143 */    MCD::OPC_CheckField, 21, 1, 1, 238, 4, // Skip to: 9411
/* 8149 */    MCD::OPC_Decode, 162, 4, 124, // Opcode: LSFP128_Xm_RegOffset_STR
/* 8153 */    MCD::OPC_FilterValue, 3, 230, 4, // Skip to: 9411
/* 8157 */    MCD::OPC_CheckField, 21, 1, 0, 224, 4, // Skip to: 9411
/* 8163 */    MCD::OPC_Decode, 156, 4, 66, // Opcode: LSFP128_PreInd_STR
/* 8167 */    MCD::OPC_FilterValue, 3, 80, 0, // Skip to: 8251
/* 8171 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 8174 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8188
/* 8178 */    MCD::OPC_CheckField, 21, 1, 0, 203, 4, // Skip to: 9411
/* 8184 */    MCD::OPC_Decode, 152, 4, 122, // Opcode: LSFP128_LDUR
/* 8188 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8202
/* 8192 */    MCD::OPC_CheckField, 21, 1, 0, 189, 4, // Skip to: 9411
/* 8198 */    MCD::OPC_Decode, 153, 4, 66, // Opcode: LSFP128_PostInd_LDR
/* 8202 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 8237
/* 8206 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 8209 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8223
/* 8213 */    MCD::OPC_CheckField, 21, 1, 1, 168, 4, // Skip to: 9411
/* 8219 */    MCD::OPC_Decode, 159, 4, 123, // Opcode: LSFP128_Wm_RegOffset_LDR
/* 8223 */    MCD::OPC_FilterValue, 1, 160, 4, // Skip to: 9411
/* 8227 */    MCD::OPC_CheckField, 21, 1, 1, 154, 4, // Skip to: 9411
/* 8233 */    MCD::OPC_Decode, 161, 4, 124, // Opcode: LSFP128_Xm_RegOffset_LDR
/* 8237 */    MCD::OPC_FilterValue, 3, 146, 4, // Skip to: 9411
/* 8241 */    MCD::OPC_CheckField, 21, 1, 0, 140, 4, // Skip to: 9411
/* 8247 */    MCD::OPC_Decode, 155, 4, 66, // Opcode: LSFP128_PreInd_LDR
/* 8251 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 8259
/* 8255 */    MCD::OPC_Decode, 205, 4, 125, // Opcode: LSFP8_STR
/* 8259 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 8267
/* 8263 */    MCD::OPC_Decode, 199, 4, 125, // Opcode: LSFP8_LDR
/* 8267 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 8275
/* 8271 */    MCD::OPC_Decode, 157, 4, 126, // Opcode: LSFP128_STR
/* 8275 */    MCD::OPC_FilterValue, 7, 108, 4, // Skip to: 9411
/* 8279 */    MCD::OPC_Decode, 151, 4, 126, // Opcode: LSFP128_LDR
/* 8283 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8297
/* 8287 */    MCD::OPC_CheckField, 24, 2, 0, 94, 4, // Skip to: 9411
/* 8293 */    MCD::OPC_Decode, 206, 3, 127, // Opcode: LDRd_lit
/* 8297 */    MCD::OPC_FilterValue, 3, 195, 0, // Skip to: 8496
/* 8301 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 8304 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 8391
/* 8308 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 8311 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8326
/* 8315 */    MCD::OPC_CheckField, 21, 1, 0, 66, 4, // Skip to: 9411
/* 8321 */    MCD::OPC_Decode, 170, 4, 128, 1, // Opcode: LSFP16_STUR
/* 8326 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8340
/* 8330 */    MCD::OPC_CheckField, 21, 1, 0, 51, 4, // Skip to: 9411
/* 8336 */    MCD::OPC_Decode, 166, 4, 66, // Opcode: LSFP16_PostInd_STR
/* 8340 */    MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 8377
/* 8344 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 8347 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8362
/* 8351 */    MCD::OPC_CheckField, 21, 1, 1, 30, 4, // Skip to: 9411
/* 8357 */    MCD::OPC_Decode, 172, 4, 129, 1, // Opcode: LSFP16_Wm_RegOffset_STR
/* 8362 */    MCD::OPC_FilterValue, 1, 21, 4, // Skip to: 9411
/* 8366 */    MCD::OPC_CheckField, 21, 1, 1, 15, 4, // Skip to: 9411
/* 8372 */    MCD::OPC_Decode, 174, 4, 130, 1, // Opcode: LSFP16_Xm_RegOffset_STR
/* 8377 */    MCD::OPC_FilterValue, 3, 6, 4, // Skip to: 9411
/* 8381 */    MCD::OPC_CheckField, 21, 1, 0, 0, 4, // Skip to: 9411
/* 8387 */    MCD::OPC_Decode, 168, 4, 66, // Opcode: LSFP16_PreInd_STR
/* 8391 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 8478
/* 8395 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 8398 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8413
/* 8402 */    MCD::OPC_CheckField, 21, 1, 0, 235, 3, // Skip to: 9411
/* 8408 */    MCD::OPC_Decode, 164, 4, 128, 1, // Opcode: LSFP16_LDUR
/* 8413 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8427
/* 8417 */    MCD::OPC_CheckField, 21, 1, 0, 220, 3, // Skip to: 9411
/* 8423 */    MCD::OPC_Decode, 165, 4, 66, // Opcode: LSFP16_PostInd_LDR
/* 8427 */    MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 8464
/* 8431 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 8434 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 8449
/* 8438 */    MCD::OPC_CheckField, 21, 1, 1, 199, 3, // Skip to: 9411
/* 8444 */    MCD::OPC_Decode, 171, 4, 129, 1, // Opcode: LSFP16_Wm_RegOffset_LDR
/* 8449 */    MCD::OPC_FilterValue, 1, 190, 3, // Skip to: 9411
/* 8453 */    MCD::OPC_CheckField, 21, 1, 1, 184, 3, // Skip to: 9411
/* 8459 */    MCD::OPC_Decode, 173, 4, 130, 1, // Opcode: LSFP16_Xm_RegOffset_LDR
/* 8464 */    MCD::OPC_FilterValue, 3, 175, 3, // Skip to: 9411
/* 8468 */    MCD::OPC_CheckField, 21, 1, 0, 169, 3, // Skip to: 9411
/* 8474 */    MCD::OPC_Decode, 167, 4, 66, // Opcode: LSFP16_PreInd_LDR
/* 8478 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 8487
/* 8482 */    MCD::OPC_Decode, 169, 4, 131, 1, // Opcode: LSFP16_STR
/* 8487 */    MCD::OPC_FilterValue, 5, 152, 3, // Skip to: 9411
/* 8491 */    MCD::OPC_Decode, 163, 4, 131, 1, // Opcode: LSFP16_LDR
/* 8496 */    MCD::OPC_FilterValue, 4, 1, 2, // Skip to: 9013
/* 8500 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 8503 */    MCD::OPC_FilterValue, 0, 5, 0, // Skip to: 8512
/* 8507 */    MCD::OPC_Decode, 207, 3, 132, 1, // Opcode: LDRq_lit
/* 8512 */    MCD::OPC_FilterValue, 2, 127, 3, // Skip to: 9411
/* 8516 */    MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 8519 */    MCD::OPC_FilterValue, 2, 5, 0, // Skip to: 8528
/* 8523 */    MCD::OPC_Decode, 203, 5, 133, 1, // Opcode: SCVTFsxi
/* 8528 */    MCD::OPC_FilterValue, 3, 5, 0, // Skip to: 8537
/* 8532 */    MCD::OPC_Decode, 195, 6, 133, 1, // Opcode: UCVTFsxi
/* 8537 */    MCD::OPC_FilterValue, 24, 5, 0, // Skip to: 8546
/* 8541 */    MCD::OPC_Decode, 218, 2, 134, 1, // Opcode: FCVTZSxsi
/* 8546 */    MCD::OPC_FilterValue, 25, 5, 0, // Skip to: 8555
/* 8550 */    MCD::OPC_Decode, 226, 2, 134, 1, // Opcode: FCVTZUxsi
/* 8555 */    MCD::OPC_FilterValue, 32, 11, 0, // Skip to: 8570
/* 8559 */    MCD::OPC_CheckField, 10, 6, 0, 78, 3, // Skip to: 9411
/* 8565 */    MCD::OPC_Decode, 198, 2, 135, 1, // Opcode: FCVTNSxs
/* 8570 */    MCD::OPC_FilterValue, 33, 11, 0, // Skip to: 8585
/* 8574 */    MCD::OPC_CheckField, 10, 6, 0, 63, 3, // Skip to: 9411
/* 8580 */    MCD::OPC_Decode, 202, 2, 135, 1, // Opcode: FCVTNUxs
/* 8585 */    MCD::OPC_FilterValue, 34, 11, 0, // Skip to: 8600
/* 8589 */    MCD::OPC_CheckField, 10, 6, 0, 48, 3, // Skip to: 9411
/* 8595 */    MCD::OPC_Decode, 202, 5, 136, 1, // Opcode: SCVTFsx
/* 8600 */    MCD::OPC_FilterValue, 35, 11, 0, // Skip to: 8615
/* 8604 */    MCD::OPC_CheckField, 10, 6, 0, 33, 3, // Skip to: 9411
/* 8610 */    MCD::OPC_Decode, 194, 6, 136, 1, // Opcode: UCVTFsx
/* 8615 */    MCD::OPC_FilterValue, 36, 11, 0, // Skip to: 8630
/* 8619 */    MCD::OPC_CheckField, 10, 6, 0, 18, 3, // Skip to: 9411
/* 8625 */    MCD::OPC_Decode, 182, 2, 135, 1, // Opcode: FCVTASxs
/* 8630 */    MCD::OPC_FilterValue, 37, 11, 0, // Skip to: 8645
/* 8634 */    MCD::OPC_CheckField, 10, 6, 0, 3, 3, // Skip to: 9411
/* 8640 */    MCD::OPC_Decode, 186, 2, 135, 1, // Opcode: FCVTAUxs
/* 8645 */    MCD::OPC_FilterValue, 40, 11, 0, // Skip to: 8660
/* 8649 */    MCD::OPC_CheckField, 10, 6, 0, 244, 2, // Skip to: 9411
/* 8655 */    MCD::OPC_Decode, 206, 2, 135, 1, // Opcode: FCVTPSxs
/* 8660 */    MCD::OPC_FilterValue, 41, 11, 0, // Skip to: 8675
/* 8664 */    MCD::OPC_CheckField, 10, 6, 0, 229, 2, // Skip to: 9411
/* 8670 */    MCD::OPC_Decode, 210, 2, 135, 1, // Opcode: FCVTPUxs
/* 8675 */    MCD::OPC_FilterValue, 48, 11, 0, // Skip to: 8690
/* 8679 */    MCD::OPC_CheckField, 10, 6, 0, 214, 2, // Skip to: 9411
/* 8685 */    MCD::OPC_Decode, 190, 2, 135, 1, // Opcode: FCVTMSxs
/* 8690 */    MCD::OPC_FilterValue, 49, 11, 0, // Skip to: 8705
/* 8694 */    MCD::OPC_CheckField, 10, 6, 0, 199, 2, // Skip to: 9411
/* 8700 */    MCD::OPC_Decode, 194, 2, 135, 1, // Opcode: FCVTMUxs
/* 8705 */    MCD::OPC_FilterValue, 56, 11, 0, // Skip to: 8720
/* 8709 */    MCD::OPC_CheckField, 10, 6, 0, 184, 2, // Skip to: 9411
/* 8715 */    MCD::OPC_Decode, 217, 2, 135, 1, // Opcode: FCVTZSxs
/* 8720 */    MCD::OPC_FilterValue, 57, 11, 0, // Skip to: 8735
/* 8724 */    MCD::OPC_CheckField, 10, 6, 0, 169, 2, // Skip to: 9411
/* 8730 */    MCD::OPC_Decode, 225, 2, 135, 1, // Opcode: FCVTZUxs
/* 8735 */    MCD::OPC_FilterValue, 66, 5, 0, // Skip to: 8744
/* 8739 */    MCD::OPC_Decode, 199, 5, 137, 1, // Opcode: SCVTFdxi
/* 8744 */    MCD::OPC_FilterValue, 67, 5, 0, // Skip to: 8753
/* 8748 */    MCD::OPC_Decode, 191, 6, 137, 1, // Opcode: UCVTFdxi
/* 8753 */    MCD::OPC_FilterValue, 88, 5, 0, // Skip to: 8762
/* 8757 */    MCD::OPC_Decode, 216, 2, 138, 1, // Opcode: FCVTZSxdi
/* 8762 */    MCD::OPC_FilterValue, 89, 5, 0, // Skip to: 8771
/* 8766 */    MCD::OPC_Decode, 224, 2, 138, 1, // Opcode: FCVTZUxdi
/* 8771 */    MCD::OPC_FilterValue, 96, 11, 0, // Skip to: 8786
/* 8775 */    MCD::OPC_CheckField, 10, 6, 0, 118, 2, // Skip to: 9411
/* 8781 */    MCD::OPC_Decode, 197, 2, 139, 1, // Opcode: FCVTNSxd
/* 8786 */    MCD::OPC_FilterValue, 97, 11, 0, // Skip to: 8801
/* 8790 */    MCD::OPC_CheckField, 10, 6, 0, 103, 2, // Skip to: 9411
/* 8796 */    MCD::OPC_Decode, 201, 2, 139, 1, // Opcode: FCVTNUxd
/* 8801 */    MCD::OPC_FilterValue, 98, 11, 0, // Skip to: 8816
/* 8805 */    MCD::OPC_CheckField, 10, 6, 0, 88, 2, // Skip to: 9411
/* 8811 */    MCD::OPC_Decode, 198, 5, 140, 1, // Opcode: SCVTFdx
/* 8816 */    MCD::OPC_FilterValue, 99, 11, 0, // Skip to: 8831
/* 8820 */    MCD::OPC_CheckField, 10, 6, 0, 73, 2, // Skip to: 9411
/* 8826 */    MCD::OPC_Decode, 190, 6, 140, 1, // Opcode: UCVTFdx
/* 8831 */    MCD::OPC_FilterValue, 100, 11, 0, // Skip to: 8846
/* 8835 */    MCD::OPC_CheckField, 10, 6, 0, 58, 2, // Skip to: 9411
/* 8841 */    MCD::OPC_Decode, 181, 2, 139, 1, // Opcode: FCVTASxd
/* 8846 */    MCD::OPC_FilterValue, 101, 11, 0, // Skip to: 8861
/* 8850 */    MCD::OPC_CheckField, 10, 6, 0, 43, 2, // Skip to: 9411
/* 8856 */    MCD::OPC_Decode, 185, 2, 139, 1, // Opcode: FCVTAUxd
/* 8861 */    MCD::OPC_FilterValue, 102, 11, 0, // Skip to: 8876
/* 8865 */    MCD::OPC_CheckField, 10, 6, 0, 28, 2, // Skip to: 9411
/* 8871 */    MCD::OPC_Decode, 253, 2, 139, 1, // Opcode: FMOVxd
/* 8876 */    MCD::OPC_FilterValue, 103, 11, 0, // Skip to: 8891
/* 8880 */    MCD::OPC_CheckField, 10, 6, 0, 13, 2, // Skip to: 9411
/* 8886 */    MCD::OPC_Decode, 247, 2, 140, 1, // Opcode: FMOVdx
/* 8891 */    MCD::OPC_FilterValue, 104, 11, 0, // Skip to: 8906
/* 8895 */    MCD::OPC_CheckField, 10, 6, 0, 254, 1, // Skip to: 9411
/* 8901 */    MCD::OPC_Decode, 205, 2, 139, 1, // Opcode: FCVTPSxd
/* 8906 */    MCD::OPC_FilterValue, 105, 11, 0, // Skip to: 8921
/* 8910 */    MCD::OPC_CheckField, 10, 6, 0, 239, 1, // Skip to: 9411
/* 8916 */    MCD::OPC_Decode, 209, 2, 139, 1, // Opcode: FCVTPUxd
/* 8921 */    MCD::OPC_FilterValue, 112, 11, 0, // Skip to: 8936
/* 8925 */    MCD::OPC_CheckField, 10, 6, 0, 224, 1, // Skip to: 9411
/* 8931 */    MCD::OPC_Decode, 189, 2, 139, 1, // Opcode: FCVTMSxd
/* 8936 */    MCD::OPC_FilterValue, 113, 11, 0, // Skip to: 8951
/* 8940 */    MCD::OPC_CheckField, 10, 6, 0, 209, 1, // Skip to: 9411
/* 8946 */    MCD::OPC_Decode, 193, 2, 139, 1, // Opcode: FCVTMUxd
/* 8951 */    MCD::OPC_FilterValue, 120, 11, 0, // Skip to: 8966
/* 8955 */    MCD::OPC_CheckField, 10, 6, 0, 194, 1, // Skip to: 9411
/* 8961 */    MCD::OPC_Decode, 215, 2, 139, 1, // Opcode: FCVTZSxd
/* 8966 */    MCD::OPC_FilterValue, 121, 11, 0, // Skip to: 8981
/* 8970 */    MCD::OPC_CheckField, 10, 6, 0, 179, 1, // Skip to: 9411
/* 8976 */    MCD::OPC_Decode, 223, 2, 139, 1, // Opcode: FCVTZUxd
/* 8981 */    MCD::OPC_FilterValue, 174, 1, 11, 0, // Skip to: 8997
/* 8986 */    MCD::OPC_CheckField, 10, 6, 0, 163, 1, // Skip to: 9411
/* 8992 */    MCD::OPC_Decode, 254, 2, 141, 1, // Opcode: FMOVxv
/* 8997 */    MCD::OPC_FilterValue, 175, 1, 153, 1, // Skip to: 9411
/* 9002 */    MCD::OPC_CheckField, 10, 6, 0, 147, 1, // Skip to: 9411
/* 9008 */    MCD::OPC_Decode, 251, 2, 141, 1, // Opcode: FMOVvx
/* 9013 */    MCD::OPC_FilterValue, 5, 195, 0, // Skip to: 9212
/* 9017 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 9020 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 9107
/* 9024 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 9027 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9042
/* 9031 */    MCD::OPC_CheckField, 21, 1, 0, 118, 1, // Skip to: 9411
/* 9037 */    MCD::OPC_Decode, 182, 4, 142, 1, // Opcode: LSFP32_STUR
/* 9042 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9056
/* 9046 */    MCD::OPC_CheckField, 21, 1, 0, 103, 1, // Skip to: 9411
/* 9052 */    MCD::OPC_Decode, 178, 4, 66, // Opcode: LSFP32_PostInd_STR
/* 9056 */    MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 9093
/* 9060 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 9063 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9078
/* 9067 */    MCD::OPC_CheckField, 21, 1, 1, 82, 1, // Skip to: 9411
/* 9073 */    MCD::OPC_Decode, 184, 4, 143, 1, // Opcode: LSFP32_Wm_RegOffset_STR
/* 9078 */    MCD::OPC_FilterValue, 1, 73, 1, // Skip to: 9411
/* 9082 */    MCD::OPC_CheckField, 21, 1, 1, 67, 1, // Skip to: 9411
/* 9088 */    MCD::OPC_Decode, 186, 4, 144, 1, // Opcode: LSFP32_Xm_RegOffset_STR
/* 9093 */    MCD::OPC_FilterValue, 3, 58, 1, // Skip to: 9411
/* 9097 */    MCD::OPC_CheckField, 21, 1, 0, 52, 1, // Skip to: 9411
/* 9103 */    MCD::OPC_Decode, 180, 4, 66, // Opcode: LSFP32_PreInd_STR
/* 9107 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 9194
/* 9111 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 9114 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9129
/* 9118 */    MCD::OPC_CheckField, 21, 1, 0, 31, 1, // Skip to: 9411
/* 9124 */    MCD::OPC_Decode, 176, 4, 142, 1, // Opcode: LSFP32_LDUR
/* 9129 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9143
/* 9133 */    MCD::OPC_CheckField, 21, 1, 0, 16, 1, // Skip to: 9411
/* 9139 */    MCD::OPC_Decode, 177, 4, 66, // Opcode: LSFP32_PostInd_LDR
/* 9143 */    MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 9180
/* 9147 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 9150 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9165
/* 9154 */    MCD::OPC_CheckField, 21, 1, 1, 251, 0, // Skip to: 9411
/* 9160 */    MCD::OPC_Decode, 183, 4, 143, 1, // Opcode: LSFP32_Wm_RegOffset_LDR
/* 9165 */    MCD::OPC_FilterValue, 1, 242, 0, // Skip to: 9411
/* 9169 */    MCD::OPC_CheckField, 21, 1, 1, 236, 0, // Skip to: 9411
/* 9175 */    MCD::OPC_Decode, 185, 4, 144, 1, // Opcode: LSFP32_Xm_RegOffset_LDR
/* 9180 */    MCD::OPC_FilterValue, 3, 227, 0, // Skip to: 9411
/* 9184 */    MCD::OPC_CheckField, 21, 1, 0, 221, 0, // Skip to: 9411
/* 9190 */    MCD::OPC_Decode, 179, 4, 66, // Opcode: LSFP32_PreInd_LDR
/* 9194 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 9203
/* 9198 */    MCD::OPC_Decode, 181, 4, 145, 1, // Opcode: LSFP32_STR
/* 9203 */    MCD::OPC_FilterValue, 5, 204, 0, // Skip to: 9411
/* 9207 */    MCD::OPC_Decode, 175, 4, 145, 1, // Opcode: LSFP32_LDR
/* 9212 */    MCD::OPC_FilterValue, 7, 195, 0, // Skip to: 9411
/* 9216 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 9219 */    MCD::OPC_FilterValue, 0, 83, 0, // Skip to: 9306
/* 9223 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 9226 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9241
/* 9230 */    MCD::OPC_CheckField, 21, 1, 0, 175, 0, // Skip to: 9411
/* 9236 */    MCD::OPC_Decode, 194, 4, 146, 1, // Opcode: LSFP64_STUR
/* 9241 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9255
/* 9245 */    MCD::OPC_CheckField, 21, 1, 0, 160, 0, // Skip to: 9411
/* 9251 */    MCD::OPC_Decode, 190, 4, 66, // Opcode: LSFP64_PostInd_STR
/* 9255 */    MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 9292
/* 9259 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 9262 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9277
/* 9266 */    MCD::OPC_CheckField, 21, 1, 1, 139, 0, // Skip to: 9411
/* 9272 */    MCD::OPC_Decode, 196, 4, 147, 1, // Opcode: LSFP64_Wm_RegOffset_STR
/* 9277 */    MCD::OPC_FilterValue, 1, 130, 0, // Skip to: 9411
/* 9281 */    MCD::OPC_CheckField, 21, 1, 1, 124, 0, // Skip to: 9411
/* 9287 */    MCD::OPC_Decode, 198, 4, 148, 1, // Opcode: LSFP64_Xm_RegOffset_STR
/* 9292 */    MCD::OPC_FilterValue, 3, 115, 0, // Skip to: 9411
/* 9296 */    MCD::OPC_CheckField, 21, 1, 0, 109, 0, // Skip to: 9411
/* 9302 */    MCD::OPC_Decode, 192, 4, 66, // Opcode: LSFP64_PreInd_STR
/* 9306 */    MCD::OPC_FilterValue, 1, 83, 0, // Skip to: 9393
/* 9310 */    MCD::OPC_ExtractField, 10, 2,  // Inst{11-10} ...
/* 9313 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9328
/* 9317 */    MCD::OPC_CheckField, 21, 1, 0, 88, 0, // Skip to: 9411
/* 9323 */    MCD::OPC_Decode, 188, 4, 146, 1, // Opcode: LSFP64_LDUR
/* 9328 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 9342
/* 9332 */    MCD::OPC_CheckField, 21, 1, 0, 73, 0, // Skip to: 9411
/* 9338 */    MCD::OPC_Decode, 189, 4, 66, // Opcode: LSFP64_PostInd_LDR
/* 9342 */    MCD::OPC_FilterValue, 2, 33, 0, // Skip to: 9379
/* 9346 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 9349 */    MCD::OPC_FilterValue, 0, 11, 0, // Skip to: 9364
/* 9353 */    MCD::OPC_CheckField, 21, 1, 1, 52, 0, // Skip to: 9411
/* 9359 */    MCD::OPC_Decode, 195, 4, 147, 1, // Opcode: LSFP64_Wm_RegOffset_LDR
/* 9364 */    MCD::OPC_FilterValue, 1, 43, 0, // Skip to: 9411
/* 9368 */    MCD::OPC_CheckField, 21, 1, 1, 37, 0, // Skip to: 9411
/* 9374 */    MCD::OPC_Decode, 197, 4, 148, 1, // Opcode: LSFP64_Xm_RegOffset_LDR
/* 9379 */    MCD::OPC_FilterValue, 3, 28, 0, // Skip to: 9411
/* 9383 */    MCD::OPC_CheckField, 21, 1, 0, 22, 0, // Skip to: 9411
/* 9389 */    MCD::OPC_Decode, 191, 4, 66, // Opcode: LSFP64_PreInd_LDR
/* 9393 */    MCD::OPC_FilterValue, 4, 5, 0, // Skip to: 9402
/* 9397 */    MCD::OPC_Decode, 193, 4, 149, 1, // Opcode: LSFP64_STR
/* 9402 */    MCD::OPC_FilterValue, 5, 5, 0, // Skip to: 9411
/* 9406 */    MCD::OPC_Decode, 187, 4, 149, 1, // Opcode: LSFP64_LDR
/* 9411 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 1:
    if (!Check(S, DecodeLDSTPairInstruction(MI, insn, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 6:
    if (!Check(S, DecodeLoadPairExclusiveInstruction(MI, insn, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, Decode32BitShiftOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, Decode32BitShiftOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, Decode32BitShiftOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 3);
    if (!Check(S, DecodeRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 5, 19) << 2);
    tmp |= (fieldFromInstruction(insn, 29, 2) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32wspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 13);
    if (!Check(S, DecodeLogicalImmOperand<32>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 18);
    if (!Check(S, DecodeMoveWideImmOperand<32>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 13);
    if (!Check(S, DecodeLogicalImmOperand<32>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 18);
    if (!Check(S, DecodeMoveWideImmOperand<32>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 13);
    if (!Check(S, DecodeLogicalImmOperand<64>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 18);
    if (!Check(S, DecodeMoveWideImmOperand<64>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 13);
    if (!Check(S, DecodeLogicalImmOperand<64>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 18);
    if (!Check(S, DecodeMoveWideImmOperand<64>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    if (!Check(S, DecodeBitfield32ImmOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 40:
    if (!Check(S, DecodeBitfieldInstruction(MI, insn, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, DecodeBitfield32ImmOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 0, 26);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 19, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 5, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 19, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 31, 1) << 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 5, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 5, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 8, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 8, 4);
    if (!Check(S, DecodeNamedImmOperand<A64DB::DBarrierMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 8, 4);
    if (!Check(S, DecodeNamedImmOperand<A64ISB::ISBMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 55:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 5, 3) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 3) << 3);
    if (!Check(S, DecodeNamedImmOperand<A64PState::PStateMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 5, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 5, 16);
    if (!Check(S, DecodeMSROperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 8, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 5, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 16);
    if (!Check(S, DecodeMRSOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 61:
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 66:
    if (!Check(S, DecodeSingleIndexedInstruction(MI, insn, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeNamedImmOperand<A64PRFM::PRFMMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeNamedImmOperand<A64PRFM::PRFMMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeNamedImmOperand<A64PRFM::PRFMMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeNamedImmOperand<A64PRFM::PRFMMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeNamedImmOperand<A64PRFM::PRFMMapper>(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, DecodeCVT32FixedPosOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, DecodeCVT32FixedPosOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, DecodeCVT32FixedPosOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    if (!Check(S, DecodeCVT32FixedPosOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR8RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR8RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR8RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR128RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR128RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR128RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR8RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR128RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR16RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR128RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 19);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 141:
    if (!Check(S, DecodeFMOVLaneInstruction(MI, insn, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 9);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR32RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (!Check(S, DecodeGPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 12, 1) << 0);
    tmp |= (fieldFromInstruction(insn, 14, 2) << 1);
    if (!Check(S, DecodeAddrRegExtendOperand(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (!Check(S, DecodeFPR64RegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 5);
    if (!Check(S, DecodeGPR64xspRegisterClass(MI, tmp, Address, Decoder))) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 10, 12);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
