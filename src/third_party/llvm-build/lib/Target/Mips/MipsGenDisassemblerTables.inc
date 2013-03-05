/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
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

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 135, 2, // Skip to: 654
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 0, 176, 18, // Skip to: 4802
/* 18 */      MCD::OPC_CheckField, 21, 5, 0, 170, 18, // Skip to: 4802
/* 24 */      MCD::OPC_Decode, 227, 4, 0, // Opcode: SLL
/* 28 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 71
/* 32 */      MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 35 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 53
/* 39 */      MCD::OPC_CheckPredicate, 0, 151, 18, // Skip to: 4802
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 145, 18, // Skip to: 4802
/* 49 */      MCD::OPC_Decode, 170, 3, 1, // Opcode: MOVF_I
/* 53 */      MCD::OPC_FilterValue, 1, 137, 18, // Skip to: 4802
/* 57 */      MCD::OPC_CheckPredicate, 0, 133, 18, // Skip to: 4802
/* 61 */      MCD::OPC_CheckField, 6, 5, 0, 127, 18, // Skip to: 4802
/* 67 */      MCD::OPC_Decode, 184, 3, 1, // Opcode: MOVT_I
/* 71 */      MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 102
/* 75 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 78 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 90
/* 82 */      MCD::OPC_CheckPredicate, 0, 108, 18, // Skip to: 4802
/* 86 */      MCD::OPC_Decode, 241, 4, 0, // Opcode: SRL
/* 90 */      MCD::OPC_FilterValue, 1, 100, 18, // Skip to: 4802
/* 94 */      MCD::OPC_CheckPredicate, 1, 96, 18, // Skip to: 4802
/* 98 */      MCD::OPC_Decode, 161, 4, 0, // Opcode: ROTR
/* 102 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 120
/* 106 */     MCD::OPC_CheckPredicate, 0, 84, 18, // Skip to: 4802
/* 110 */     MCD::OPC_CheckField, 21, 5, 0, 78, 18, // Skip to: 4802
/* 116 */     MCD::OPC_Decode, 239, 4, 0, // Opcode: SRA
/* 120 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 138
/* 124 */     MCD::OPC_CheckPredicate, 0, 66, 18, // Skip to: 4802
/* 128 */     MCD::OPC_CheckField, 6, 5, 0, 60, 18, // Skip to: 4802
/* 134 */     MCD::OPC_Decode, 230, 4, 2, // Opcode: SLLV
/* 138 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 169
/* 142 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 145 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 157
/* 149 */     MCD::OPC_CheckPredicate, 0, 41, 18, // Skip to: 4802
/* 153 */     MCD::OPC_Decode, 242, 4, 2, // Opcode: SRLV
/* 157 */     MCD::OPC_FilterValue, 1, 33, 18, // Skip to: 4802
/* 161 */     MCD::OPC_CheckPredicate, 1, 29, 18, // Skip to: 4802
/* 165 */     MCD::OPC_Decode, 162, 4, 2, // Opcode: ROTRV
/* 169 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 187
/* 173 */     MCD::OPC_CheckPredicate, 0, 17, 18, // Skip to: 4802
/* 177 */     MCD::OPC_CheckField, 6, 5, 0, 11, 18, // Skip to: 4802
/* 183 */     MCD::OPC_Decode, 240, 4, 2, // Opcode: SRAV
/* 187 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 205
/* 191 */     MCD::OPC_CheckPredicate, 0, 255, 17, // Skip to: 4802
/* 195 */     MCD::OPC_CheckField, 6, 15, 0, 249, 17, // Skip to: 4802
/* 201 */     MCD::OPC_Decode, 191, 2, 3, // Opcode: JR
/* 205 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 229
/* 209 */     MCD::OPC_CheckPredicate, 0, 237, 17, // Skip to: 4802
/* 213 */     MCD::OPC_CheckField, 16, 5, 0, 231, 17, // Skip to: 4802
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 225, 17, // Skip to: 4802
/* 225 */     MCD::OPC_Decode, 187, 2, 4, // Opcode: JALR
/* 229 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 247
/* 233 */     MCD::OPC_CheckPredicate, 0, 213, 17, // Skip to: 4802
/* 237 */     MCD::OPC_CheckField, 6, 5, 0, 207, 17, // Skip to: 4802
/* 243 */     MCD::OPC_Decode, 193, 3, 5, // Opcode: MOVZ_I_I
/* 247 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 265
/* 251 */     MCD::OPC_CheckPredicate, 0, 195, 17, // Skip to: 4802
/* 255 */     MCD::OPC_CheckField, 6, 5, 0, 189, 17, // Skip to: 4802
/* 261 */     MCD::OPC_Decode, 179, 3, 5, // Opcode: MOVN_I_I
/* 265 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 277
/* 269 */     MCD::OPC_CheckPredicate, 0, 177, 17, // Skip to: 4802
/* 273 */     MCD::OPC_Decode, 148, 5, 6, // Opcode: SYNC
/* 277 */     MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 301
/* 281 */     MCD::OPC_CheckPredicate, 0, 165, 17, // Skip to: 4802
/* 285 */     MCD::OPC_CheckField, 16, 10, 0, 159, 17, // Skip to: 4802
/* 291 */     MCD::OPC_CheckField, 6, 5, 0, 153, 17, // Skip to: 4802
/* 297 */     MCD::OPC_Decode, 160, 3, 7, // Opcode: MFHI
/* 301 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 319
/* 305 */     MCD::OPC_CheckPredicate, 0, 141, 17, // Skip to: 4802
/* 309 */     MCD::OPC_CheckField, 6, 15, 0, 135, 17, // Skip to: 4802
/* 315 */     MCD::OPC_Decode, 208, 3, 3, // Opcode: MTHI
/* 319 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 343
/* 323 */     MCD::OPC_CheckPredicate, 0, 123, 17, // Skip to: 4802
/* 327 */     MCD::OPC_CheckField, 16, 10, 0, 117, 17, // Skip to: 4802
/* 333 */     MCD::OPC_CheckField, 6, 5, 0, 111, 17, // Skip to: 4802
/* 339 */     MCD::OPC_Decode, 162, 3, 7, // Opcode: MFLO
/* 343 */     MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 361
/* 347 */     MCD::OPC_CheckPredicate, 0, 99, 17, // Skip to: 4802
/* 351 */     MCD::OPC_CheckField, 6, 15, 0, 93, 17, // Skip to: 4802
/* 357 */     MCD::OPC_Decode, 212, 3, 3, // Opcode: MTLO
/* 361 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 401
/* 365 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 368 */     MCD::OPC_FilterValue, 0, 78, 17, // Skip to: 4802
/* 372 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 375 */     MCD::OPC_FilterValue, 0, 71, 17, // Skip to: 4802
/* 379 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 393
/* 383 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 393
/* 389 */     MCD::OPC_Decode, 227, 3, 8, // Opcode: MULT
/* 393 */     MCD::OPC_CheckPredicate, 2, 53, 17, // Skip to: 4802
/* 397 */     MCD::OPC_Decode, 230, 3, 9, // Opcode: MULT_DSP
/* 401 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 441
/* 405 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 408 */     MCD::OPC_FilterValue, 0, 38, 17, // Skip to: 4802
/* 412 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 415 */     MCD::OPC_FilterValue, 0, 31, 17, // Skip to: 4802
/* 419 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 433
/* 423 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 433
/* 429 */     MCD::OPC_Decode, 232, 3, 8, // Opcode: MULTu
/* 433 */     MCD::OPC_CheckPredicate, 2, 13, 17, // Skip to: 4802
/* 437 */     MCD::OPC_Decode, 228, 3, 9, // Opcode: MULTU_DSP
/* 441 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 459
/* 445 */     MCD::OPC_CheckPredicate, 0, 1, 17, // Skip to: 4802
/* 449 */     MCD::OPC_CheckField, 6, 10, 0, 251, 16, // Skip to: 4802
/* 455 */     MCD::OPC_Decode, 184, 4, 8, // Opcode: SDIV
/* 459 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 477
/* 463 */     MCD::OPC_CheckPredicate, 0, 239, 16, // Skip to: 4802
/* 467 */     MCD::OPC_CheckField, 6, 10, 0, 233, 16, // Skip to: 4802
/* 473 */     MCD::OPC_Decode, 190, 5, 8, // Opcode: UDIV
/* 477 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 494
/* 481 */     MCD::OPC_CheckPredicate, 0, 221, 16, // Skip to: 4802
/* 485 */     MCD::OPC_CheckField, 6, 5, 0, 215, 16, // Skip to: 4802
/* 491 */     MCD::OPC_Decode, 20, 2, // Opcode: ADD
/* 494 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 511
/* 498 */     MCD::OPC_CheckPredicate, 0, 204, 16, // Skip to: 4802
/* 502 */     MCD::OPC_CheckField, 6, 5, 0, 198, 16, // Skip to: 4802
/* 508 */     MCD::OPC_Decode, 38, 2, // Opcode: ADDu
/* 511 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 529
/* 515 */     MCD::OPC_CheckPredicate, 0, 187, 16, // Skip to: 4802
/* 519 */     MCD::OPC_CheckField, 6, 5, 0, 181, 16, // Skip to: 4802
/* 525 */     MCD::OPC_Decode, 243, 4, 2, // Opcode: SUB
/* 529 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 547
/* 533 */     MCD::OPC_CheckPredicate, 0, 169, 16, // Skip to: 4802
/* 537 */     MCD::OPC_CheckField, 6, 5, 0, 163, 16, // Skip to: 4802
/* 543 */     MCD::OPC_Decode, 129, 5, 2, // Opcode: SUBu
/* 547 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 564
/* 551 */     MCD::OPC_CheckPredicate, 0, 151, 16, // Skip to: 4802
/* 555 */     MCD::OPC_CheckField, 6, 5, 0, 145, 16, // Skip to: 4802
/* 561 */     MCD::OPC_Decode, 41, 2, // Opcode: AND
/* 564 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 582
/* 568 */     MCD::OPC_CheckPredicate, 0, 134, 16, // Skip to: 4802
/* 572 */     MCD::OPC_CheckField, 6, 5, 0, 128, 16, // Skip to: 4802
/* 578 */     MCD::OPC_Decode, 254, 3, 2, // Opcode: OR
/* 582 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 600
/* 586 */     MCD::OPC_CheckPredicate, 0, 116, 16, // Skip to: 4802
/* 590 */     MCD::OPC_CheckField, 6, 5, 0, 110, 16, // Skip to: 4802
/* 596 */     MCD::OPC_Decode, 193, 5, 2, // Opcode: XOR
/* 600 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 618
/* 604 */     MCD::OPC_CheckPredicate, 0, 98, 16, // Skip to: 4802
/* 608 */     MCD::OPC_CheckField, 6, 5, 0, 92, 16, // Skip to: 4802
/* 614 */     MCD::OPC_Decode, 250, 3, 2, // Opcode: NOR
/* 618 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 636
/* 622 */     MCD::OPC_CheckPredicate, 0, 80, 16, // Skip to: 4802
/* 626 */     MCD::OPC_CheckField, 6, 5, 0, 74, 16, // Skip to: 4802
/* 632 */     MCD::OPC_Decode, 231, 4, 2, // Opcode: SLT
/* 636 */     MCD::OPC_FilterValue, 43, 66, 16, // Skip to: 4802
/* 640 */     MCD::OPC_CheckPredicate, 0, 62, 16, // Skip to: 4802
/* 644 */     MCD::OPC_CheckField, 6, 5, 0, 56, 16, // Skip to: 4802
/* 650 */     MCD::OPC_Decode, 237, 4, 2, // Opcode: SLTu
/* 654 */     MCD::OPC_FilterValue, 1, 80, 0, // Skip to: 738
/* 658 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 661 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 673
/* 665 */     MCD::OPC_CheckPredicate, 0, 37, 16, // Skip to: 4802
/* 669 */     MCD::OPC_Decode, 132, 1, 10, // Opcode: BLTZ
/* 673 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 684
/* 677 */     MCD::OPC_CheckPredicate, 0, 25, 16, // Skip to: 4802
/* 681 */     MCD::OPC_Decode, 124, 10, // Opcode: BGEZ
/* 684 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 696
/* 688 */     MCD::OPC_CheckPredicate, 0, 14, 16, // Skip to: 4802
/* 692 */     MCD::OPC_Decode, 134, 1, 10, // Opcode: BLTZAL
/* 696 */     MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 720
/* 700 */     MCD::OPC_CheckPredicate, 0, 9, 0, // Skip to: 713
/* 704 */     MCD::OPC_CheckField, 21, 5, 0, 3, 0, // Skip to: 713
/* 710 */     MCD::OPC_Decode, 119, 11, // Opcode: BAL_BR
/* 713 */     MCD::OPC_CheckPredicate, 0, 245, 15, // Skip to: 4802
/* 717 */     MCD::OPC_Decode, 126, 10, // Opcode: BGEZAL
/* 720 */     MCD::OPC_FilterValue, 28, 238, 15, // Skip to: 4802
/* 724 */     MCD::OPC_CheckPredicate, 2, 234, 15, // Skip to: 4802
/* 728 */     MCD::OPC_CheckField, 21, 5, 0, 228, 15, // Skip to: 4802
/* 734 */     MCD::OPC_Decode, 137, 1, 11, // Opcode: BPOSGE32
/* 738 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 750
/* 742 */     MCD::OPC_CheckPredicate, 3, 216, 15, // Skip to: 4802
/* 746 */     MCD::OPC_Decode, 185, 2, 12, // Opcode: J
/* 750 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 762
/* 754 */     MCD::OPC_CheckPredicate, 0, 204, 15, // Skip to: 4802
/* 758 */     MCD::OPC_Decode, 186, 2, 12, // Opcode: JAL
/* 762 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 786
/* 766 */     MCD::OPC_CheckPredicate, 3, 9, 0, // Skip to: 779
/* 770 */     MCD::OPC_CheckField, 16, 10, 0, 3, 0, // Skip to: 779
/* 776 */     MCD::OPC_Decode, 117, 11, // Opcode: B
/* 779 */     MCD::OPC_CheckPredicate, 0, 179, 15, // Skip to: 4802
/* 783 */     MCD::OPC_Decode, 122, 13, // Opcode: BEQ
/* 786 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 798
/* 790 */     MCD::OPC_CheckPredicate, 0, 168, 15, // Skip to: 4802
/* 794 */     MCD::OPC_Decode, 135, 1, 13, // Opcode: BNE
/* 798 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 816
/* 802 */     MCD::OPC_CheckPredicate, 0, 156, 15, // Skip to: 4802
/* 806 */     MCD::OPC_CheckField, 16, 5, 0, 150, 15, // Skip to: 4802
/* 812 */     MCD::OPC_Decode, 130, 1, 10, // Opcode: BLEZ
/* 816 */     MCD::OPC_FilterValue, 7, 13, 0, // Skip to: 833
/* 820 */     MCD::OPC_CheckPredicate, 0, 138, 15, // Skip to: 4802
/* 824 */     MCD::OPC_CheckField, 16, 5, 0, 132, 15, // Skip to: 4802
/* 830 */     MCD::OPC_Decode, 127, 10, // Opcode: BGTZ
/* 833 */     MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 844
/* 837 */     MCD::OPC_CheckPredicate, 0, 121, 15, // Skip to: 4802
/* 841 */     MCD::OPC_Decode, 36, 14, // Opcode: ADDi
/* 844 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 855
/* 848 */     MCD::OPC_CheckPredicate, 0, 110, 15, // Skip to: 4802
/* 852 */     MCD::OPC_Decode, 37, 14, // Opcode: ADDiu
/* 855 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 867
/* 859 */     MCD::OPC_CheckPredicate, 0, 99, 15, // Skip to: 4802
/* 863 */     MCD::OPC_Decode, 233, 4, 14, // Opcode: SLTi
/* 867 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 879
/* 871 */     MCD::OPC_CheckPredicate, 0, 87, 15, // Skip to: 4802
/* 875 */     MCD::OPC_Decode, 235, 4, 14, // Opcode: SLTiu
/* 879 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 890
/* 883 */     MCD::OPC_CheckPredicate, 0, 75, 15, // Skip to: 4802
/* 887 */     MCD::OPC_Decode, 43, 15, // Opcode: ANDi
/* 890 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 902
/* 894 */     MCD::OPC_CheckPredicate, 0, 64, 15, // Skip to: 4802
/* 898 */     MCD::OPC_Decode, 128, 4, 15, // Opcode: ORi
/* 902 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 914
/* 906 */     MCD::OPC_CheckPredicate, 0, 52, 15, // Skip to: 4802
/* 910 */     MCD::OPC_Decode, 195, 5, 15, // Opcode: XORi
/* 914 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 932
/* 918 */     MCD::OPC_CheckPredicate, 0, 40, 15, // Skip to: 4802
/* 922 */     MCD::OPC_CheckField, 21, 5, 0, 34, 15, // Skip to: 4802
/* 928 */     MCD::OPC_Decode, 236, 2, 16, // Opcode: LUi
/* 932 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 975
/* 936 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 939 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 957
/* 943 */     MCD::OPC_CheckPredicate, 0, 15, 15, // Skip to: 4802
/* 947 */     MCD::OPC_CheckField, 3, 8, 0, 9, 15, // Skip to: 4802
/* 953 */     MCD::OPC_Decode, 157, 3, 17, // Opcode: MFC0_3OP
/* 957 */     MCD::OPC_FilterValue, 4, 1, 15, // Skip to: 4802
/* 961 */     MCD::OPC_CheckPredicate, 0, 253, 14, // Skip to: 4802
/* 965 */     MCD::OPC_CheckField, 3, 8, 0, 247, 14, // Skip to: 4802
/* 971 */     MCD::OPC_Decode, 205, 3, 18, // Opcode: MTC0_3OP
/* 975 */     MCD::OPC_FilterValue, 17, 109, 3, // Skip to: 1856
/* 979 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 982 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1000
/* 986 */     MCD::OPC_CheckPredicate, 0, 228, 14, // Skip to: 4802
/* 990 */     MCD::OPC_CheckField, 0, 11, 0, 222, 14, // Skip to: 4802
/* 996 */     MCD::OPC_Decode, 158, 3, 19, // Opcode: MFC1
/* 1000 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1018
/* 1004 */    MCD::OPC_CheckPredicate, 0, 210, 14, // Skip to: 4802
/* 1008 */    MCD::OPC_CheckField, 0, 11, 0, 204, 14, // Skip to: 4802
/* 1014 */    MCD::OPC_Decode, 207, 1, 20, // Opcode: DMFC1
/* 1018 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1036
/* 1022 */    MCD::OPC_CheckPredicate, 0, 192, 14, // Skip to: 4802
/* 1026 */    MCD::OPC_CheckField, 0, 11, 0, 186, 14, // Skip to: 4802
/* 1032 */    MCD::OPC_Decode, 162, 1, 21, // Opcode: CFC1
/* 1036 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1054
/* 1040 */    MCD::OPC_CheckPredicate, 0, 174, 14, // Skip to: 4802
/* 1044 */    MCD::OPC_CheckField, 0, 11, 0, 168, 14, // Skip to: 4802
/* 1050 */    MCD::OPC_Decode, 206, 3, 22, // Opcode: MTC1
/* 1054 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1072
/* 1058 */    MCD::OPC_CheckPredicate, 0, 156, 14, // Skip to: 4802
/* 1062 */    MCD::OPC_CheckField, 0, 11, 0, 150, 14, // Skip to: 4802
/* 1068 */    MCD::OPC_Decode, 210, 1, 23, // Opcode: DMTC1
/* 1072 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1090
/* 1076 */    MCD::OPC_CheckPredicate, 0, 138, 14, // Skip to: 4802
/* 1080 */    MCD::OPC_CheckField, 0, 11, 0, 132, 14, // Skip to: 4802
/* 1086 */    MCD::OPC_Decode, 177, 1, 24, // Opcode: CTC1
/* 1090 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 1119
/* 1094 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1097 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1108
/* 1101 */    MCD::OPC_CheckPredicate, 0, 113, 14, // Skip to: 4802
/* 1105 */    MCD::OPC_Decode, 120, 25, // Opcode: BC1F
/* 1108 */    MCD::OPC_FilterValue, 1, 106, 14, // Skip to: 4802
/* 1112 */    MCD::OPC_CheckPredicate, 0, 102, 14, // Skip to: 4802
/* 1116 */    MCD::OPC_Decode, 121, 25, // Opcode: BC1T
/* 1119 */    MCD::OPC_FilterValue, 16, 87, 1, // Skip to: 1466
/* 1123 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 1126 */    MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 1325
/* 1130 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1133 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1145
/* 1137 */    MCD::OPC_CheckPredicate, 0, 77, 14, // Skip to: 4802
/* 1141 */    MCD::OPC_Decode, 156, 2, 26, // Opcode: FADD_S
/* 1145 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1157
/* 1149 */    MCD::OPC_CheckPredicate, 0, 65, 14, // Skip to: 4802
/* 1153 */    MCD::OPC_Decode, 182, 2, 26, // Opcode: FSUB_S
/* 1157 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1169
/* 1161 */    MCD::OPC_CheckPredicate, 0, 53, 14, // Skip to: 4802
/* 1165 */    MCD::OPC_Decode, 173, 2, 26, // Opcode: FMUL_S
/* 1169 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1181
/* 1173 */    MCD::OPC_CheckPredicate, 0, 41, 14, // Skip to: 4802
/* 1177 */    MCD::OPC_Decode, 162, 2, 26, // Opcode: FDIV_S
/* 1181 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1199
/* 1185 */    MCD::OPC_CheckPredicate, 0, 29, 14, // Skip to: 4802
/* 1189 */    MCD::OPC_CheckField, 16, 5, 0, 23, 14, // Skip to: 4802
/* 1195 */    MCD::OPC_Decode, 179, 2, 27, // Opcode: FSQRT_S
/* 1199 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1217
/* 1203 */    MCD::OPC_CheckPredicate, 3, 11, 14, // Skip to: 4802
/* 1207 */    MCD::OPC_CheckField, 16, 5, 0, 5, 14, // Skip to: 4802
/* 1213 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: FABS_S
/* 1217 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1235
/* 1221 */    MCD::OPC_CheckPredicate, 0, 249, 13, // Skip to: 4802
/* 1225 */    MCD::OPC_CheckField, 16, 5, 0, 243, 13, // Skip to: 4802
/* 1231 */    MCD::OPC_Decode, 170, 2, 27, // Opcode: FMOV_S
/* 1235 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1253
/* 1239 */    MCD::OPC_CheckPredicate, 3, 231, 13, // Skip to: 4802
/* 1243 */    MCD::OPC_CheckField, 16, 5, 0, 225, 13, // Skip to: 4802
/* 1249 */    MCD::OPC_Decode, 176, 2, 27, // Opcode: FNEG_S
/* 1253 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1271
/* 1257 */    MCD::OPC_CheckPredicate, 0, 213, 13, // Skip to: 4802
/* 1261 */    MCD::OPC_CheckField, 16, 5, 0, 207, 13, // Skip to: 4802
/* 1267 */    MCD::OPC_Decode, 167, 4, 27, // Opcode: ROUND_W_S
/* 1271 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1289
/* 1275 */    MCD::OPC_CheckPredicate, 0, 195, 13, // Skip to: 4802
/* 1279 */    MCD::OPC_CheckField, 16, 5, 0, 189, 13, // Skip to: 4802
/* 1285 */    MCD::OPC_Decode, 189, 5, 27, // Opcode: TRUNC_W_S
/* 1289 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1307
/* 1293 */    MCD::OPC_CheckPredicate, 0, 177, 13, // Skip to: 4802
/* 1297 */    MCD::OPC_CheckField, 16, 5, 0, 171, 13, // Skip to: 4802
/* 1303 */    MCD::OPC_Decode, 161, 1, 27, // Opcode: CEIL_W_S
/* 1307 */    MCD::OPC_FilterValue, 15, 163, 13, // Skip to: 4802
/* 1311 */    MCD::OPC_CheckPredicate, 0, 159, 13, // Skip to: 4802
/* 1315 */    MCD::OPC_CheckField, 16, 5, 0, 153, 13, // Skip to: 4802
/* 1321 */    MCD::OPC_Decode, 167, 2, 27, // Opcode: FLOOR_W_S
/* 1325 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 1387
/* 1329 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1332 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 1363
/* 1336 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1339 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1351
/* 1343 */    MCD::OPC_CheckPredicate, 0, 127, 13, // Skip to: 4802
/* 1347 */    MCD::OPC_Decode, 172, 3, 28, // Opcode: MOVF_S
/* 1351 */    MCD::OPC_FilterValue, 1, 119, 13, // Skip to: 4802
/* 1355 */    MCD::OPC_CheckPredicate, 0, 115, 13, // Skip to: 4802
/* 1359 */    MCD::OPC_Decode, 186, 3, 28, // Opcode: MOVT_S
/* 1363 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1375
/* 1367 */    MCD::OPC_CheckPredicate, 0, 103, 13, // Skip to: 4802
/* 1371 */    MCD::OPC_Decode, 195, 3, 29, // Opcode: MOVZ_I_S
/* 1375 */    MCD::OPC_FilterValue, 3, 95, 13, // Skip to: 4802
/* 1379 */    MCD::OPC_CheckPredicate, 0, 91, 13, // Skip to: 4802
/* 1383 */    MCD::OPC_Decode, 181, 3, 29, // Opcode: MOVN_I_S
/* 1387 */    MCD::OPC_FilterValue, 2, 57, 0, // Skip to: 1448
/* 1391 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1394 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1412
/* 1398 */    MCD::OPC_CheckPredicate, 4, 72, 13, // Skip to: 4802
/* 1402 */    MCD::OPC_CheckField, 16, 5, 0, 66, 13, // Skip to: 4802
/* 1408 */    MCD::OPC_Decode, 178, 1, 30, // Opcode: CVT_D32_S
/* 1412 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1430
/* 1416 */    MCD::OPC_CheckPredicate, 0, 54, 13, // Skip to: 4802
/* 1420 */    MCD::OPC_CheckField, 16, 5, 0, 48, 13, // Skip to: 4802
/* 1426 */    MCD::OPC_Decode, 191, 1, 27, // Opcode: CVT_W_S
/* 1430 */    MCD::OPC_FilterValue, 5, 40, 13, // Skip to: 4802
/* 1434 */    MCD::OPC_CheckPredicate, 0, 36, 13, // Skip to: 4802
/* 1438 */    MCD::OPC_CheckField, 16, 5, 0, 30, 13, // Skip to: 4802
/* 1444 */    MCD::OPC_Decode, 184, 1, 31, // Opcode: CVT_L_S
/* 1448 */    MCD::OPC_FilterValue, 3, 22, 13, // Skip to: 4802
/* 1452 */    MCD::OPC_CheckPredicate, 0, 18, 13, // Skip to: 4802
/* 1456 */    MCD::OPC_CheckField, 6, 5, 0, 12, 13, // Skip to: 4802
/* 1462 */    MCD::OPC_Decode, 159, 2, 32, // Opcode: FCMP_S32
/* 1466 */    MCD::OPC_FilterValue, 17, 87, 1, // Skip to: 1813
/* 1470 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 1473 */    MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 1672
/* 1477 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1480 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1492
/* 1484 */    MCD::OPC_CheckPredicate, 4, 242, 12, // Skip to: 4802
/* 1488 */    MCD::OPC_Decode, 154, 2, 33, // Opcode: FADD_D32
/* 1492 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1504
/* 1496 */    MCD::OPC_CheckPredicate, 4, 230, 12, // Skip to: 4802
/* 1500 */    MCD::OPC_Decode, 180, 2, 33, // Opcode: FSUB_D32
/* 1504 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1516
/* 1508 */    MCD::OPC_CheckPredicate, 4, 218, 12, // Skip to: 4802
/* 1512 */    MCD::OPC_Decode, 171, 2, 33, // Opcode: FMUL_D32
/* 1516 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1528
/* 1520 */    MCD::OPC_CheckPredicate, 4, 206, 12, // Skip to: 4802
/* 1524 */    MCD::OPC_Decode, 160, 2, 33, // Opcode: FDIV_D32
/* 1528 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1546
/* 1532 */    MCD::OPC_CheckPredicate, 4, 194, 12, // Skip to: 4802
/* 1536 */    MCD::OPC_CheckField, 16, 5, 0, 188, 12, // Skip to: 4802
/* 1542 */    MCD::OPC_Decode, 177, 2, 34, // Opcode: FSQRT_D32
/* 1546 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1564
/* 1550 */    MCD::OPC_CheckPredicate, 3, 176, 12, // Skip to: 4802
/* 1554 */    MCD::OPC_CheckField, 16, 5, 0, 170, 12, // Skip to: 4802
/* 1560 */    MCD::OPC_Decode, 151, 2, 34, // Opcode: FABS_D32
/* 1564 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1582
/* 1568 */    MCD::OPC_CheckPredicate, 4, 158, 12, // Skip to: 4802
/* 1572 */    MCD::OPC_CheckField, 16, 5, 0, 152, 12, // Skip to: 4802
/* 1578 */    MCD::OPC_Decode, 168, 2, 34, // Opcode: FMOV_D32
/* 1582 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1600
/* 1586 */    MCD::OPC_CheckPredicate, 3, 140, 12, // Skip to: 4802
/* 1590 */    MCD::OPC_CheckField, 16, 5, 0, 134, 12, // Skip to: 4802
/* 1596 */    MCD::OPC_Decode, 174, 2, 34, // Opcode: FNEG_D32
/* 1600 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1618
/* 1604 */    MCD::OPC_CheckPredicate, 4, 122, 12, // Skip to: 4802
/* 1608 */    MCD::OPC_CheckField, 16, 5, 0, 116, 12, // Skip to: 4802
/* 1614 */    MCD::OPC_Decode, 165, 4, 35, // Opcode: ROUND_W_D32
/* 1618 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1636
/* 1622 */    MCD::OPC_CheckPredicate, 4, 104, 12, // Skip to: 4802
/* 1626 */    MCD::OPC_CheckField, 16, 5, 0, 98, 12, // Skip to: 4802
/* 1632 */    MCD::OPC_Decode, 187, 5, 35, // Opcode: TRUNC_W_D32
/* 1636 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1654
/* 1640 */    MCD::OPC_CheckPredicate, 4, 86, 12, // Skip to: 4802
/* 1644 */    MCD::OPC_CheckField, 16, 5, 0, 80, 12, // Skip to: 4802
/* 1650 */    MCD::OPC_Decode, 159, 1, 35, // Opcode: CEIL_W_D32
/* 1654 */    MCD::OPC_FilterValue, 15, 72, 12, // Skip to: 4802
/* 1658 */    MCD::OPC_CheckPredicate, 4, 68, 12, // Skip to: 4802
/* 1662 */    MCD::OPC_CheckField, 16, 5, 0, 62, 12, // Skip to: 4802
/* 1668 */    MCD::OPC_Decode, 165, 2, 35, // Opcode: FLOOR_W_D32
/* 1672 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 1734
/* 1676 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1679 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 1710
/* 1683 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1686 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1698
/* 1690 */    MCD::OPC_CheckPredicate, 4, 36, 12, // Skip to: 4802
/* 1694 */    MCD::OPC_Decode, 168, 3, 36, // Opcode: MOVF_D32
/* 1698 */    MCD::OPC_FilterValue, 1, 28, 12, // Skip to: 4802
/* 1702 */    MCD::OPC_CheckPredicate, 4, 24, 12, // Skip to: 4802
/* 1706 */    MCD::OPC_Decode, 182, 3, 36, // Opcode: MOVT_D32
/* 1710 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1722
/* 1714 */    MCD::OPC_CheckPredicate, 4, 12, 12, // Skip to: 4802
/* 1718 */    MCD::OPC_Decode, 191, 3, 37, // Opcode: MOVZ_I_D32
/* 1722 */    MCD::OPC_FilterValue, 3, 4, 12, // Skip to: 4802
/* 1726 */    MCD::OPC_CheckPredicate, 4, 0, 12, // Skip to: 4802
/* 1730 */    MCD::OPC_Decode, 177, 3, 37, // Opcode: MOVN_I_D32
/* 1734 */    MCD::OPC_FilterValue, 2, 57, 0, // Skip to: 1795
/* 1738 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1741 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1759
/* 1745 */    MCD::OPC_CheckPredicate, 4, 237, 11, // Skip to: 4802
/* 1749 */    MCD::OPC_CheckField, 16, 5, 0, 231, 11, // Skip to: 4802
/* 1755 */    MCD::OPC_Decode, 185, 1, 35, // Opcode: CVT_S_D32
/* 1759 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1777
/* 1763 */    MCD::OPC_CheckPredicate, 4, 219, 11, // Skip to: 4802
/* 1767 */    MCD::OPC_CheckField, 16, 5, 0, 213, 11, // Skip to: 4802
/* 1773 */    MCD::OPC_Decode, 189, 1, 35, // Opcode: CVT_W_D32
/* 1777 */    MCD::OPC_FilterValue, 5, 205, 11, // Skip to: 4802
/* 1781 */    MCD::OPC_CheckPredicate, 0, 201, 11, // Skip to: 4802
/* 1785 */    MCD::OPC_CheckField, 16, 5, 0, 195, 11, // Skip to: 4802
/* 1791 */    MCD::OPC_Decode, 183, 1, 38, // Opcode: CVT_L_D64
/* 1795 */    MCD::OPC_FilterValue, 3, 187, 11, // Skip to: 4802
/* 1799 */    MCD::OPC_CheckPredicate, 4, 183, 11, // Skip to: 4802
/* 1803 */    MCD::OPC_CheckField, 6, 5, 0, 177, 11, // Skip to: 4802
/* 1809 */    MCD::OPC_Decode, 157, 2, 39, // Opcode: FCMP_D32
/* 1813 */    MCD::OPC_FilterValue, 20, 169, 11, // Skip to: 4802
/* 1817 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1820 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 1838
/* 1824 */    MCD::OPC_CheckPredicate, 0, 158, 11, // Skip to: 4802
/* 1828 */    MCD::OPC_CheckField, 16, 5, 0, 152, 11, // Skip to: 4802
/* 1834 */    MCD::OPC_Decode, 188, 1, 27, // Opcode: CVT_S_W
/* 1838 */    MCD::OPC_FilterValue, 33, 144, 11, // Skip to: 4802
/* 1842 */    MCD::OPC_CheckPredicate, 4, 140, 11, // Skip to: 4802
/* 1846 */    MCD::OPC_CheckField, 16, 5, 0, 134, 11, // Skip to: 4802
/* 1852 */    MCD::OPC_Decode, 179, 1, 30, // Opcode: CVT_D32_W
/* 1856 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1899
/* 1860 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1863 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1881
/* 1867 */    MCD::OPC_CheckPredicate, 0, 115, 11, // Skip to: 4802
/* 1871 */    MCD::OPC_CheckField, 3, 8, 0, 109, 11, // Skip to: 4802
/* 1877 */    MCD::OPC_Decode, 159, 3, 17, // Opcode: MFC2_3OP
/* 1881 */    MCD::OPC_FilterValue, 4, 101, 11, // Skip to: 4802
/* 1885 */    MCD::OPC_CheckPredicate, 0, 97, 11, // Skip to: 4802
/* 1889 */    MCD::OPC_CheckField, 3, 8, 0, 91, 11, // Skip to: 4802
/* 1895 */    MCD::OPC_Decode, 207, 3, 18, // Opcode: MTC2_3OP
/* 1899 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 2110
/* 1903 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1906 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1924
/* 1910 */    MCD::OPC_CheckPredicate, 5, 72, 11, // Skip to: 4802
/* 1914 */    MCD::OPC_CheckField, 11, 5, 0, 66, 11, // Skip to: 4802
/* 1920 */    MCD::OPC_Decode, 252, 2, 40, // Opcode: LWXC1
/* 1924 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1942
/* 1928 */    MCD::OPC_CheckPredicate, 6, 54, 11, // Skip to: 4802
/* 1932 */    MCD::OPC_CheckField, 11, 5, 0, 48, 11, // Skip to: 4802
/* 1938 */    MCD::OPC_Decode, 215, 2, 41, // Opcode: LDXC1
/* 1942 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1960
/* 1946 */    MCD::OPC_CheckPredicate, 7, 36, 11, // Skip to: 4802
/* 1950 */    MCD::OPC_CheckField, 11, 5, 0, 30, 11, // Skip to: 4802
/* 1956 */    MCD::OPC_Decode, 234, 2, 41, // Opcode: LUXC1
/* 1960 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1978
/* 1964 */    MCD::OPC_CheckPredicate, 5, 18, 11, // Skip to: 4802
/* 1968 */    MCD::OPC_CheckField, 6, 5, 0, 12, 11, // Skip to: 4802
/* 1974 */    MCD::OPC_Decode, 145, 5, 42, // Opcode: SWXC1
/* 1978 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1996
/* 1982 */    MCD::OPC_CheckPredicate, 6, 0, 11, // Skip to: 4802
/* 1986 */    MCD::OPC_CheckField, 6, 5, 0, 250, 10, // Skip to: 4802
/* 1992 */    MCD::OPC_Decode, 189, 4, 43, // Opcode: SDXC1
/* 1996 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2014
/* 2000 */    MCD::OPC_CheckPredicate, 7, 238, 10, // Skip to: 4802
/* 2004 */    MCD::OPC_CheckField, 6, 5, 0, 232, 10, // Skip to: 4802
/* 2010 */    MCD::OPC_Decode, 130, 5, 43, // Opcode: SUXC1
/* 2014 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2026
/* 2018 */    MCD::OPC_CheckPredicate, 1, 220, 10, // Skip to: 4802
/* 2022 */    MCD::OPC_Decode, 148, 3, 44, // Opcode: MADD_S
/* 2026 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 2038
/* 2030 */    MCD::OPC_CheckPredicate, 8, 208, 10, // Skip to: 4802
/* 2034 */    MCD::OPC_Decode, 144, 3, 45, // Opcode: MADD_D32
/* 2038 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2050
/* 2042 */    MCD::OPC_CheckPredicate, 1, 196, 10, // Skip to: 4802
/* 2046 */    MCD::OPC_Decode, 204, 3, 44, // Opcode: MSUB_S
/* 2050 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2062
/* 2054 */    MCD::OPC_CheckPredicate, 8, 184, 10, // Skip to: 4802
/* 2058 */    MCD::OPC_Decode, 200, 3, 45, // Opcode: MSUB_D32
/* 2062 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2074
/* 2066 */    MCD::OPC_CheckPredicate, 9, 172, 10, // Skip to: 4802
/* 2070 */    MCD::OPC_Decode, 245, 3, 44, // Opcode: NMADD_S
/* 2074 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2086
/* 2078 */    MCD::OPC_CheckPredicate, 10, 160, 10, // Skip to: 4802
/* 2082 */    MCD::OPC_Decode, 243, 3, 45, // Opcode: NMADD_D32
/* 2086 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2098
/* 2090 */    MCD::OPC_CheckPredicate, 9, 148, 10, // Skip to: 4802
/* 2094 */    MCD::OPC_Decode, 248, 3, 44, // Opcode: NMSUB_S
/* 2098 */    MCD::OPC_FilterValue, 57, 140, 10, // Skip to: 4802
/* 2102 */    MCD::OPC_CheckPredicate, 10, 136, 10, // Skip to: 4802
/* 2106 */    MCD::OPC_Decode, 246, 3, 45, // Opcode: NMSUB_D32
/* 2110 */    MCD::OPC_FilterValue, 28, 171, 0, // Skip to: 2285
/* 2114 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2117 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2150
/* 2121 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2124 */    MCD::OPC_FilterValue, 0, 114, 10, // Skip to: 4802
/* 2128 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2142
/* 2132 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2142
/* 2138 */    MCD::OPC_Decode, 140, 3, 8, // Opcode: MADD
/* 2142 */    MCD::OPC_CheckPredicate, 2, 96, 10, // Skip to: 4802
/* 2146 */    MCD::OPC_Decode, 146, 3, 9, // Opcode: MADD_DSP
/* 2150 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 2183
/* 2154 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2157 */    MCD::OPC_FilterValue, 0, 81, 10, // Skip to: 4802
/* 2161 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2175
/* 2165 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2175
/* 2171 */    MCD::OPC_Decode, 141, 3, 8, // Opcode: MADDU
/* 2175 */    MCD::OPC_CheckPredicate, 2, 63, 10, // Skip to: 4802
/* 2179 */    MCD::OPC_Decode, 142, 3, 9, // Opcode: MADDU_DSP
/* 2183 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2195
/* 2187 */    MCD::OPC_CheckPredicate, 0, 51, 10, // Skip to: 4802
/* 2191 */    MCD::OPC_Decode, 214, 3, 2, // Opcode: MUL
/* 2195 */    MCD::OPC_FilterValue, 4, 29, 0, // Skip to: 2228
/* 2199 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2202 */    MCD::OPC_FilterValue, 0, 36, 10, // Skip to: 4802
/* 2206 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2220
/* 2210 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2220
/* 2216 */    MCD::OPC_Decode, 196, 3, 8, // Opcode: MSUB
/* 2220 */    MCD::OPC_CheckPredicate, 2, 18, 10, // Skip to: 4802
/* 2224 */    MCD::OPC_Decode, 202, 3, 9, // Opcode: MSUB_DSP
/* 2228 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 2261
/* 2232 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2235 */    MCD::OPC_FilterValue, 0, 3, 10, // Skip to: 4802
/* 2239 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2253
/* 2243 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2253
/* 2249 */    MCD::OPC_Decode, 197, 3, 8, // Opcode: MSUBU
/* 2253 */    MCD::OPC_CheckPredicate, 2, 241, 9, // Skip to: 4802
/* 2257 */    MCD::OPC_Decode, 198, 3, 9, // Opcode: MSUBU_DSP
/* 2261 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2273
/* 2265 */    MCD::OPC_CheckPredicate, 11, 229, 9, // Skip to: 4802
/* 2269 */    MCD::OPC_Decode, 164, 1, 46, // Opcode: CLZ
/* 2273 */    MCD::OPC_FilterValue, 33, 221, 9, // Skip to: 4802
/* 2277 */    MCD::OPC_CheckPredicate, 11, 217, 9, // Skip to: 4802
/* 2281 */    MCD::OPC_Decode, 163, 1, 46, // Opcode: CLO
/* 2285 */    MCD::OPC_FilterValue, 31, 249, 8, // Skip to: 4586
/* 2289 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2292 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2304
/* 2296 */    MCD::OPC_CheckPredicate, 1, 198, 9, // Skip to: 4802
/* 2300 */    MCD::OPC_Decode, 137, 2, 47, // Opcode: EXT
/* 2304 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2316
/* 2308 */    MCD::OPC_CheckPredicate, 1, 186, 9, // Skip to: 4802
/* 2312 */    MCD::OPC_Decode, 183, 2, 48, // Opcode: INS
/* 2316 */    MCD::OPC_FilterValue, 10, 39, 0, // Skip to: 2359
/* 2320 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2323 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2335
/* 2327 */    MCD::OPC_CheckPredicate, 2, 167, 9, // Skip to: 4802
/* 2331 */    MCD::OPC_Decode, 251, 2, 2, // Opcode: LWX
/* 2335 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2347
/* 2339 */    MCD::OPC_CheckPredicate, 2, 155, 9, // Skip to: 4802
/* 2343 */    MCD::OPC_Decode, 224, 2, 2, // Opcode: LHX
/* 2347 */    MCD::OPC_FilterValue, 6, 147, 9, // Skip to: 4802
/* 2351 */    MCD::OPC_CheckPredicate, 2, 143, 9, // Skip to: 4802
/* 2355 */    MCD::OPC_Decode, 201, 2, 2, // Opcode: LBUX
/* 2359 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2377
/* 2363 */    MCD::OPC_CheckPredicate, 2, 131, 9, // Skip to: 4802
/* 2367 */    MCD::OPC_CheckField, 6, 10, 0, 125, 9, // Skip to: 4802
/* 2373 */    MCD::OPC_Decode, 184, 2, 49, // Opcode: INSV
/* 2377 */    MCD::OPC_FilterValue, 16, 32, 1, // Skip to: 2669
/* 2381 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2384 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2395
/* 2388 */    MCD::OPC_CheckPredicate, 2, 106, 9, // Skip to: 4802
/* 2392 */    MCD::OPC_Decode, 32, 50, // Opcode: ADDU_QB
/* 2395 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2407
/* 2399 */    MCD::OPC_CheckPredicate, 2, 95, 9, // Skip to: 4802
/* 2403 */    MCD::OPC_Decode, 254, 4, 50, // Opcode: SUBU_QB
/* 2407 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2418
/* 2411 */    MCD::OPC_CheckPredicate, 2, 83, 9, // Skip to: 4802
/* 2415 */    MCD::OPC_Decode, 34, 50, // Opcode: ADDU_S_QB
/* 2418 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2430
/* 2422 */    MCD::OPC_CheckPredicate, 2, 72, 9, // Skip to: 4802
/* 2426 */    MCD::OPC_Decode, 128, 5, 50, // Opcode: SUBU_S_QB
/* 2430 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2442
/* 2434 */    MCD::OPC_CheckPredicate, 2, 60, 9, // Skip to: 4802
/* 2438 */    MCD::OPC_Decode, 217, 3, 50, // Opcode: MULEU_S_PH_QBL
/* 2442 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2454
/* 2446 */    MCD::OPC_CheckPredicate, 2, 48, 9, // Skip to: 4802
/* 2450 */    MCD::OPC_Decode, 218, 3, 50, // Opcode: MULEU_S_PH_QBR
/* 2454 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 2465
/* 2458 */    MCD::OPC_CheckPredicate, 12, 36, 9, // Skip to: 4802
/* 2462 */    MCD::OPC_Decode, 31, 50, // Opcode: ADDU_PH
/* 2465 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2477
/* 2469 */    MCD::OPC_CheckPredicate, 12, 25, 9, // Skip to: 4802
/* 2473 */    MCD::OPC_Decode, 253, 4, 50, // Opcode: SUBU_PH
/* 2477 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 2488
/* 2481 */    MCD::OPC_CheckPredicate, 2, 13, 9, // Skip to: 4802
/* 2485 */    MCD::OPC_Decode, 25, 50, // Opcode: ADDQ_PH
/* 2488 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2500
/* 2492 */    MCD::OPC_CheckPredicate, 2, 2, 9, // Skip to: 4802
/* 2496 */    MCD::OPC_Decode, 248, 4, 50, // Opcode: SUBQ_PH
/* 2500 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 2511
/* 2504 */    MCD::OPC_CheckPredicate, 12, 246, 8, // Skip to: 4802
/* 2508 */    MCD::OPC_Decode, 33, 50, // Opcode: ADDU_S_PH
/* 2511 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2523
/* 2515 */    MCD::OPC_CheckPredicate, 12, 235, 8, // Skip to: 4802
/* 2519 */    MCD::OPC_Decode, 255, 4, 50, // Opcode: SUBU_S_PH
/* 2523 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 2534
/* 2527 */    MCD::OPC_CheckPredicate, 2, 223, 8, // Skip to: 4802
/* 2531 */    MCD::OPC_Decode, 26, 50, // Opcode: ADDQ_S_PH
/* 2534 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2546
/* 2538 */    MCD::OPC_CheckPredicate, 2, 212, 8, // Skip to: 4802
/* 2542 */    MCD::OPC_Decode, 249, 4, 50, // Opcode: SUBQ_S_PH
/* 2546 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 2557
/* 2550 */    MCD::OPC_CheckPredicate, 2, 200, 8, // Skip to: 4802
/* 2554 */    MCD::OPC_Decode, 28, 2, // Opcode: ADDSC
/* 2557 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 2568
/* 2561 */    MCD::OPC_CheckPredicate, 2, 189, 8, // Skip to: 4802
/* 2565 */    MCD::OPC_Decode, 35, 2, // Opcode: ADDWC
/* 2568 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2580
/* 2572 */    MCD::OPC_CheckPredicate, 2, 178, 8, // Skip to: 4802
/* 2576 */    MCD::OPC_Decode, 166, 3, 2, // Opcode: MODSUB
/* 2580 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 2598
/* 2584 */    MCD::OPC_CheckPredicate, 2, 166, 8, // Skip to: 4802
/* 2588 */    MCD::OPC_CheckField, 16, 5, 0, 160, 8, // Skip to: 4802
/* 2594 */    MCD::OPC_Decode, 152, 4, 51, // Opcode: RADDU_W_QB
/* 2598 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 2609
/* 2602 */    MCD::OPC_CheckPredicate, 2, 148, 8, // Skip to: 4802
/* 2606 */    MCD::OPC_Decode, 27, 2, // Opcode: ADDQ_S_W
/* 2609 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 2621
/* 2613 */    MCD::OPC_CheckPredicate, 2, 137, 8, // Skip to: 4802
/* 2617 */    MCD::OPC_Decode, 250, 4, 2, // Opcode: SUBQ_S_W
/* 2621 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 2633
/* 2625 */    MCD::OPC_CheckPredicate, 2, 125, 8, // Skip to: 4802
/* 2629 */    MCD::OPC_Decode, 215, 3, 52, // Opcode: MULEQ_S_W_PHL
/* 2633 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 2645
/* 2637 */    MCD::OPC_CheckPredicate, 2, 113, 8, // Skip to: 4802
/* 2641 */    MCD::OPC_Decode, 216, 3, 52, // Opcode: MULEQ_S_W_PHR
/* 2645 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 2657
/* 2649 */    MCD::OPC_CheckPredicate, 12, 101, 8, // Skip to: 4802
/* 2653 */    MCD::OPC_Decode, 221, 3, 50, // Opcode: MULQ_S_PH
/* 2657 */    MCD::OPC_FilterValue, 31, 93, 8, // Skip to: 4802
/* 2661 */    MCD::OPC_CheckPredicate, 2, 89, 8, // Skip to: 4802
/* 2665 */    MCD::OPC_Decode, 219, 3, 50, // Opcode: MULQ_RS_PH
/* 2669 */    MCD::OPC_FilterValue, 17, 47, 1, // Skip to: 2976
/* 2673 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2676 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2694
/* 2680 */    MCD::OPC_CheckPredicate, 2, 70, 8, // Skip to: 4802
/* 2684 */    MCD::OPC_CheckField, 11, 5, 0, 64, 8, // Skip to: 4802
/* 2690 */    MCD::OPC_Decode, 171, 1, 53, // Opcode: CMPU_EQ_QB
/* 2694 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2712
/* 2698 */    MCD::OPC_CheckPredicate, 2, 52, 8, // Skip to: 4802
/* 2702 */    MCD::OPC_CheckField, 11, 5, 0, 46, 8, // Skip to: 4802
/* 2708 */    MCD::OPC_Decode, 173, 1, 53, // Opcode: CMPU_LT_QB
/* 2712 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2730
/* 2716 */    MCD::OPC_CheckPredicate, 2, 34, 8, // Skip to: 4802
/* 2720 */    MCD::OPC_CheckField, 11, 5, 0, 28, 8, // Skip to: 4802
/* 2726 */    MCD::OPC_Decode, 172, 1, 53, // Opcode: CMPU_LE_QB
/* 2730 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2742
/* 2734 */    MCD::OPC_CheckPredicate, 2, 16, 8, // Skip to: 4802
/* 2738 */    MCD::OPC_Decode, 133, 4, 50, // Opcode: PICK_QB
/* 2742 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2754
/* 2746 */    MCD::OPC_CheckPredicate, 2, 4, 8, // Skip to: 4802
/* 2750 */    MCD::OPC_Decode, 168, 1, 52, // Opcode: CMPGU_EQ_QB
/* 2754 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2766
/* 2758 */    MCD::OPC_CheckPredicate, 2, 248, 7, // Skip to: 4802
/* 2762 */    MCD::OPC_Decode, 170, 1, 52, // Opcode: CMPGU_LT_QB
/* 2766 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2778
/* 2770 */    MCD::OPC_CheckPredicate, 2, 236, 7, // Skip to: 4802
/* 2774 */    MCD::OPC_Decode, 169, 1, 52, // Opcode: CMPGU_LE_QB
/* 2778 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2796
/* 2782 */    MCD::OPC_CheckPredicate, 2, 224, 7, // Skip to: 4802
/* 2786 */    MCD::OPC_CheckField, 11, 5, 0, 218, 7, // Skip to: 4802
/* 2792 */    MCD::OPC_Decode, 174, 1, 53, // Opcode: CMP_EQ_PH
/* 2796 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2814
/* 2800 */    MCD::OPC_CheckPredicate, 2, 206, 7, // Skip to: 4802
/* 2804 */    MCD::OPC_CheckField, 11, 5, 0, 200, 7, // Skip to: 4802
/* 2810 */    MCD::OPC_Decode, 176, 1, 53, // Opcode: CMP_LT_PH
/* 2814 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2832
/* 2818 */    MCD::OPC_CheckPredicate, 2, 188, 7, // Skip to: 4802
/* 2822 */    MCD::OPC_CheckField, 11, 5, 0, 182, 7, // Skip to: 4802
/* 2828 */    MCD::OPC_Decode, 175, 1, 53, // Opcode: CMP_LE_PH
/* 2832 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2844
/* 2836 */    MCD::OPC_CheckPredicate, 2, 170, 7, // Skip to: 4802
/* 2840 */    MCD::OPC_Decode, 132, 4, 50, // Opcode: PICK_PH
/* 2844 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2856
/* 2848 */    MCD::OPC_CheckPredicate, 2, 158, 7, // Skip to: 4802
/* 2852 */    MCD::OPC_Decode, 146, 4, 50, // Opcode: PRECRQ_QB_PH
/* 2856 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2868
/* 2860 */    MCD::OPC_CheckPredicate, 12, 146, 7, // Skip to: 4802
/* 2864 */    MCD::OPC_Decode, 148, 4, 50, // Opcode: PRECR_QB_PH
/* 2868 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2880
/* 2872 */    MCD::OPC_CheckPredicate, 2, 134, 7, // Skip to: 4802
/* 2876 */    MCD::OPC_Decode, 131, 4, 50, // Opcode: PACKRL_PH
/* 2880 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2892
/* 2884 */    MCD::OPC_CheckPredicate, 2, 122, 7, // Skip to: 4802
/* 2888 */    MCD::OPC_Decode, 144, 4, 50, // Opcode: PRECRQU_S_QB_PH
/* 2892 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 2904
/* 2896 */    MCD::OPC_CheckPredicate, 2, 110, 7, // Skip to: 4802
/* 2900 */    MCD::OPC_Decode, 145, 4, 54, // Opcode: PRECRQ_PH_W
/* 2904 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 2916
/* 2908 */    MCD::OPC_CheckPredicate, 2, 98, 7, // Skip to: 4802
/* 2912 */    MCD::OPC_Decode, 147, 4, 54, // Opcode: PRECRQ_RS_PH_W
/* 2916 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 2928
/* 2920 */    MCD::OPC_CheckPredicate, 12, 86, 7, // Skip to: 4802
/* 2924 */    MCD::OPC_Decode, 165, 1, 52, // Opcode: CMPGDU_EQ_QB
/* 2928 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 2940
/* 2932 */    MCD::OPC_CheckPredicate, 12, 74, 7, // Skip to: 4802
/* 2936 */    MCD::OPC_Decode, 167, 1, 52, // Opcode: CMPGDU_LT_QB
/* 2940 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 2952
/* 2944 */    MCD::OPC_CheckPredicate, 12, 62, 7, // Skip to: 4802
/* 2948 */    MCD::OPC_Decode, 166, 1, 52, // Opcode: CMPGDU_LE_QB
/* 2952 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 2964
/* 2956 */    MCD::OPC_CheckPredicate, 12, 50, 7, // Skip to: 4802
/* 2960 */    MCD::OPC_Decode, 149, 4, 55, // Opcode: PRECR_SRA_PH_W
/* 2964 */    MCD::OPC_FilterValue, 31, 42, 7, // Skip to: 4802
/* 2968 */    MCD::OPC_CheckPredicate, 12, 38, 7, // Skip to: 4802
/* 2972 */    MCD::OPC_Decode, 150, 4, 55, // Opcode: PRECR_SRA_R_PH_W
/* 2976 */    MCD::OPC_FilterValue, 18, 56, 1, // Skip to: 3292
/* 2980 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2983 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 3000
/* 2987 */    MCD::OPC_CheckPredicate, 12, 19, 7, // Skip to: 4802
/* 2991 */    MCD::OPC_CheckField, 21, 5, 0, 13, 7, // Skip to: 4802
/* 2997 */    MCD::OPC_Decode, 18, 56, // Opcode: ABSQ_S_QB
/* 3000 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3012
/* 3004 */    MCD::OPC_CheckPredicate, 2, 2, 7, // Skip to: 4802
/* 3008 */    MCD::OPC_Decode, 159, 4, 57, // Opcode: REPL_QB
/* 3012 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3030
/* 3016 */    MCD::OPC_CheckPredicate, 2, 246, 6, // Skip to: 4802
/* 3020 */    MCD::OPC_CheckField, 21, 5, 0, 240, 6, // Skip to: 4802
/* 3026 */    MCD::OPC_Decode, 157, 4, 58, // Opcode: REPLV_QB
/* 3030 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3048
/* 3034 */    MCD::OPC_CheckPredicate, 2, 228, 6, // Skip to: 4802
/* 3038 */    MCD::OPC_CheckField, 21, 5, 0, 222, 6, // Skip to: 4802
/* 3044 */    MCD::OPC_Decode, 134, 4, 56, // Opcode: PRECEQU_PH_QBL
/* 3048 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3066
/* 3052 */    MCD::OPC_CheckPredicate, 2, 210, 6, // Skip to: 4802
/* 3056 */    MCD::OPC_CheckField, 21, 5, 0, 204, 6, // Skip to: 4802
/* 3062 */    MCD::OPC_Decode, 136, 4, 56, // Opcode: PRECEQU_PH_QBR
/* 3066 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3084
/* 3070 */    MCD::OPC_CheckPredicate, 2, 192, 6, // Skip to: 4802
/* 3074 */    MCD::OPC_CheckField, 21, 5, 0, 186, 6, // Skip to: 4802
/* 3080 */    MCD::OPC_Decode, 135, 4, 56, // Opcode: PRECEQU_PH_QBLA
/* 3084 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3102
/* 3088 */    MCD::OPC_CheckPredicate, 2, 174, 6, // Skip to: 4802
/* 3092 */    MCD::OPC_CheckField, 21, 5, 0, 168, 6, // Skip to: 4802
/* 3098 */    MCD::OPC_Decode, 137, 4, 56, // Opcode: PRECEQU_PH_QBRA
/* 3102 */    MCD::OPC_FilterValue, 9, 13, 0, // Skip to: 3119
/* 3106 */    MCD::OPC_CheckPredicate, 2, 156, 6, // Skip to: 4802
/* 3110 */    MCD::OPC_CheckField, 21, 5, 0, 150, 6, // Skip to: 4802
/* 3116 */    MCD::OPC_Decode, 17, 56, // Opcode: ABSQ_S_PH
/* 3119 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3131
/* 3123 */    MCD::OPC_CheckPredicate, 2, 139, 6, // Skip to: 4802
/* 3127 */    MCD::OPC_Decode, 158, 4, 57, // Opcode: REPL_PH
/* 3131 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 3149
/* 3135 */    MCD::OPC_CheckPredicate, 2, 127, 6, // Skip to: 4802
/* 3139 */    MCD::OPC_CheckField, 21, 5, 0, 121, 6, // Skip to: 4802
/* 3145 */    MCD::OPC_Decode, 156, 4, 58, // Opcode: REPLV_PH
/* 3149 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 3167
/* 3153 */    MCD::OPC_CheckPredicate, 2, 109, 6, // Skip to: 4802
/* 3157 */    MCD::OPC_CheckField, 21, 5, 0, 103, 6, // Skip to: 4802
/* 3163 */    MCD::OPC_Decode, 138, 4, 59, // Opcode: PRECEQ_W_PHL
/* 3167 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 3185
/* 3171 */    MCD::OPC_CheckPredicate, 2, 91, 6, // Skip to: 4802
/* 3175 */    MCD::OPC_CheckField, 21, 5, 0, 85, 6, // Skip to: 4802
/* 3181 */    MCD::OPC_Decode, 139, 4, 59, // Opcode: PRECEQ_W_PHR
/* 3185 */    MCD::OPC_FilterValue, 17, 13, 0, // Skip to: 3202
/* 3189 */    MCD::OPC_CheckPredicate, 2, 73, 6, // Skip to: 4802
/* 3193 */    MCD::OPC_CheckField, 21, 5, 0, 67, 6, // Skip to: 4802
/* 3199 */    MCD::OPC_Decode, 19, 60, // Opcode: ABSQ_S_W
/* 3202 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 3220
/* 3206 */    MCD::OPC_CheckPredicate, 2, 56, 6, // Skip to: 4802
/* 3210 */    MCD::OPC_CheckField, 21, 5, 0, 50, 6, // Skip to: 4802
/* 3216 */    MCD::OPC_Decode, 129, 1, 60, // Opcode: BITREV
/* 3220 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 3238
/* 3224 */    MCD::OPC_CheckPredicate, 2, 38, 6, // Skip to: 4802
/* 3228 */    MCD::OPC_CheckField, 21, 5, 0, 32, 6, // Skip to: 4802
/* 3234 */    MCD::OPC_Decode, 140, 4, 56, // Opcode: PRECEU_PH_QBL
/* 3238 */    MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 3256
/* 3242 */    MCD::OPC_CheckPredicate, 2, 20, 6, // Skip to: 4802
/* 3246 */    MCD::OPC_CheckField, 21, 5, 0, 14, 6, // Skip to: 4802
/* 3252 */    MCD::OPC_Decode, 142, 4, 56, // Opcode: PRECEU_PH_QBR
/* 3256 */    MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 3274
/* 3260 */    MCD::OPC_CheckPredicate, 2, 2, 6, // Skip to: 4802
/* 3264 */    MCD::OPC_CheckField, 21, 5, 0, 252, 5, // Skip to: 4802
/* 3270 */    MCD::OPC_Decode, 141, 4, 56, // Opcode: PRECEU_PH_QBLA
/* 3274 */    MCD::OPC_FilterValue, 31, 244, 5, // Skip to: 4802
/* 3278 */    MCD::OPC_CheckPredicate, 2, 240, 5, // Skip to: 4802
/* 3282 */    MCD::OPC_CheckField, 21, 5, 0, 234, 5, // Skip to: 4802
/* 3288 */    MCD::OPC_Decode, 143, 4, 56, // Opcode: PRECEU_PH_QBRA
/* 3292 */    MCD::OPC_FilterValue, 19, 11, 1, // Skip to: 3563
/* 3296 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3299 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3311
/* 3303 */    MCD::OPC_CheckPredicate, 2, 215, 5, // Skip to: 4802
/* 3307 */    MCD::OPC_Decode, 209, 4, 61, // Opcode: SHLL_QB
/* 3311 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3323
/* 3315 */    MCD::OPC_CheckPredicate, 2, 203, 5, // Skip to: 4802
/* 3319 */    MCD::OPC_Decode, 225, 4, 61, // Opcode: SHRL_QB
/* 3323 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3335
/* 3327 */    MCD::OPC_CheckPredicate, 2, 191, 5, // Skip to: 4802
/* 3331 */    MCD::OPC_Decode, 205, 4, 62, // Opcode: SHLLV_QB
/* 3335 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3347
/* 3339 */    MCD::OPC_CheckPredicate, 2, 179, 5, // Skip to: 4802
/* 3343 */    MCD::OPC_Decode, 223, 4, 62, // Opcode: SHRLV_QB
/* 3347 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3359
/* 3351 */    MCD::OPC_CheckPredicate, 12, 167, 5, // Skip to: 4802
/* 3355 */    MCD::OPC_Decode, 218, 4, 61, // Opcode: SHRA_QB
/* 3359 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3371
/* 3363 */    MCD::OPC_CheckPredicate, 12, 155, 5, // Skip to: 4802
/* 3367 */    MCD::OPC_Decode, 220, 4, 61, // Opcode: SHRA_R_QB
/* 3371 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3383
/* 3375 */    MCD::OPC_CheckPredicate, 12, 143, 5, // Skip to: 4802
/* 3379 */    MCD::OPC_Decode, 213, 4, 62, // Opcode: SHRAV_QB
/* 3383 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3395
/* 3387 */    MCD::OPC_CheckPredicate, 12, 131, 5, // Skip to: 4802
/* 3391 */    MCD::OPC_Decode, 215, 4, 62, // Opcode: SHRAV_R_QB
/* 3395 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3407
/* 3399 */    MCD::OPC_CheckPredicate, 2, 119, 5, // Skip to: 4802
/* 3403 */    MCD::OPC_Decode, 208, 4, 61, // Opcode: SHLL_PH
/* 3407 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3419
/* 3411 */    MCD::OPC_CheckPredicate, 2, 107, 5, // Skip to: 4802
/* 3415 */    MCD::OPC_Decode, 217, 4, 61, // Opcode: SHRA_PH
/* 3419 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3431
/* 3423 */    MCD::OPC_CheckPredicate, 2, 95, 5, // Skip to: 4802
/* 3427 */    MCD::OPC_Decode, 204, 4, 62, // Opcode: SHLLV_PH
/* 3431 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3443
/* 3435 */    MCD::OPC_CheckPredicate, 2, 83, 5, // Skip to: 4802
/* 3439 */    MCD::OPC_Decode, 212, 4, 62, // Opcode: SHRAV_PH
/* 3443 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3455
/* 3447 */    MCD::OPC_CheckPredicate, 2, 71, 5, // Skip to: 4802
/* 3451 */    MCD::OPC_Decode, 210, 4, 61, // Opcode: SHLL_S_PH
/* 3455 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3467
/* 3459 */    MCD::OPC_CheckPredicate, 2, 59, 5, // Skip to: 4802
/* 3463 */    MCD::OPC_Decode, 219, 4, 61, // Opcode: SHRA_R_PH
/* 3467 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3479
/* 3471 */    MCD::OPC_CheckPredicate, 2, 47, 5, // Skip to: 4802
/* 3475 */    MCD::OPC_Decode, 206, 4, 62, // Opcode: SHLLV_S_PH
/* 3479 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3491
/* 3483 */    MCD::OPC_CheckPredicate, 2, 35, 5, // Skip to: 4802
/* 3487 */    MCD::OPC_Decode, 214, 4, 62, // Opcode: SHRAV_R_PH
/* 3491 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3503
/* 3495 */    MCD::OPC_CheckPredicate, 2, 23, 5, // Skip to: 4802
/* 3499 */    MCD::OPC_Decode, 211, 4, 63, // Opcode: SHLL_S_W
/* 3503 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3515
/* 3507 */    MCD::OPC_CheckPredicate, 2, 11, 5, // Skip to: 4802
/* 3511 */    MCD::OPC_Decode, 221, 4, 63, // Opcode: SHRA_R_W
/* 3515 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3527
/* 3519 */    MCD::OPC_CheckPredicate, 2, 255, 4, // Skip to: 4802
/* 3523 */    MCD::OPC_Decode, 207, 4, 64, // Opcode: SHLLV_S_W
/* 3527 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 3539
/* 3531 */    MCD::OPC_CheckPredicate, 2, 243, 4, // Skip to: 4802
/* 3535 */    MCD::OPC_Decode, 216, 4, 64, // Opcode: SHRAV_R_W
/* 3539 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3551
/* 3543 */    MCD::OPC_CheckPredicate, 12, 231, 4, // Skip to: 4802
/* 3547 */    MCD::OPC_Decode, 224, 4, 61, // Opcode: SHRL_PH
/* 3551 */    MCD::OPC_FilterValue, 27, 223, 4, // Skip to: 4802
/* 3555 */    MCD::OPC_CheckPredicate, 12, 219, 4, // Skip to: 4802
/* 3559 */    MCD::OPC_Decode, 222, 4, 62, // Opcode: SHRLV_PH
/* 3563 */    MCD::OPC_FilterValue, 24, 189, 0, // Skip to: 3756
/* 3567 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3570 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3581
/* 3574 */    MCD::OPC_CheckPredicate, 12, 200, 4, // Skip to: 4802
/* 3578 */    MCD::OPC_Decode, 29, 50, // Opcode: ADDUH_QB
/* 3581 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3593
/* 3585 */    MCD::OPC_CheckPredicate, 12, 189, 4, // Skip to: 4802
/* 3589 */    MCD::OPC_Decode, 251, 4, 50, // Opcode: SUBUH_QB
/* 3593 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3604
/* 3597 */    MCD::OPC_CheckPredicate, 12, 177, 4, // Skip to: 4802
/* 3601 */    MCD::OPC_Decode, 30, 50, // Opcode: ADDUH_R_QB
/* 3604 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3616
/* 3608 */    MCD::OPC_CheckPredicate, 12, 166, 4, // Skip to: 4802
/* 3612 */    MCD::OPC_Decode, 252, 4, 50, // Opcode: SUBUH_R_QB
/* 3616 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3627
/* 3620 */    MCD::OPC_CheckPredicate, 12, 154, 4, // Skip to: 4802
/* 3624 */    MCD::OPC_Decode, 21, 50, // Opcode: ADDQH_PH
/* 3627 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3639
/* 3631 */    MCD::OPC_CheckPredicate, 12, 143, 4, // Skip to: 4802
/* 3635 */    MCD::OPC_Decode, 244, 4, 50, // Opcode: SUBQH_PH
/* 3639 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 3650
/* 3643 */    MCD::OPC_CheckPredicate, 12, 131, 4, // Skip to: 4802
/* 3647 */    MCD::OPC_Decode, 22, 50, // Opcode: ADDQH_R_PH
/* 3650 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3662
/* 3654 */    MCD::OPC_CheckPredicate, 12, 120, 4, // Skip to: 4802
/* 3658 */    MCD::OPC_Decode, 245, 4, 50, // Opcode: SUBQH_R_PH
/* 3662 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3674
/* 3666 */    MCD::OPC_CheckPredicate, 12, 108, 4, // Skip to: 4802
/* 3670 */    MCD::OPC_Decode, 233, 3, 50, // Opcode: MUL_PH
/* 3674 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3686
/* 3678 */    MCD::OPC_CheckPredicate, 12, 96, 4, // Skip to: 4802
/* 3682 */    MCD::OPC_Decode, 234, 3, 50, // Opcode: MUL_S_PH
/* 3686 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3697
/* 3690 */    MCD::OPC_CheckPredicate, 12, 84, 4, // Skip to: 4802
/* 3694 */    MCD::OPC_Decode, 24, 2, // Opcode: ADDQH_W
/* 3697 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3709
/* 3701 */    MCD::OPC_CheckPredicate, 12, 73, 4, // Skip to: 4802
/* 3705 */    MCD::OPC_Decode, 247, 4, 2, // Opcode: SUBQH_W
/* 3709 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3720
/* 3713 */    MCD::OPC_CheckPredicate, 12, 61, 4, // Skip to: 4802
/* 3717 */    MCD::OPC_Decode, 23, 2, // Opcode: ADDQH_R_W
/* 3720 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3732
/* 3724 */    MCD::OPC_CheckPredicate, 12, 50, 4, // Skip to: 4802
/* 3728 */    MCD::OPC_Decode, 246, 4, 2, // Opcode: SUBQH_R_W
/* 3732 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3744
/* 3736 */    MCD::OPC_CheckPredicate, 12, 38, 4, // Skip to: 4802
/* 3740 */    MCD::OPC_Decode, 222, 3, 2, // Opcode: MULQ_S_W
/* 3744 */    MCD::OPC_FilterValue, 23, 30, 4, // Skip to: 4802
/* 3748 */    MCD::OPC_CheckPredicate, 12, 26, 4, // Skip to: 4802
/* 3752 */    MCD::OPC_Decode, 220, 3, 2, // Opcode: MULQ_RS_W
/* 3756 */    MCD::OPC_FilterValue, 32, 57, 0, // Skip to: 3817
/* 3760 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3763 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3781
/* 3767 */    MCD::OPC_CheckPredicate, 13, 7, 4, // Skip to: 4802
/* 3771 */    MCD::OPC_CheckField, 21, 5, 0, 1, 4, // Skip to: 4802
/* 3777 */    MCD::OPC_Decode, 192, 5, 60, // Opcode: WSBH
/* 3781 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 3799
/* 3785 */    MCD::OPC_CheckPredicate, 14, 245, 3, // Skip to: 4802
/* 3789 */    MCD::OPC_CheckField, 21, 5, 0, 239, 3, // Skip to: 4802
/* 3795 */    MCD::OPC_Decode, 193, 4, 60, // Opcode: SEB
/* 3799 */    MCD::OPC_FilterValue, 24, 231, 3, // Skip to: 4802
/* 3803 */    MCD::OPC_CheckPredicate, 14, 227, 3, // Skip to: 4802
/* 3807 */    MCD::OPC_CheckField, 21, 5, 0, 221, 3, // Skip to: 4802
/* 3813 */    MCD::OPC_Decode, 195, 4, 60, // Opcode: SEH
/* 3817 */    MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 4220
/* 3821 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3824 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3842
/* 3828 */    MCD::OPC_CheckPredicate, 12, 202, 3, // Skip to: 4802
/* 3832 */    MCD::OPC_CheckField, 13, 3, 0, 196, 3, // Skip to: 4802
/* 3838 */    MCD::OPC_Decode, 228, 1, 9, // Opcode: DPA_W_PH
/* 3842 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3860
/* 3846 */    MCD::OPC_CheckPredicate, 12, 184, 3, // Skip to: 4802
/* 3850 */    MCD::OPC_CheckField, 13, 3, 0, 178, 3, // Skip to: 4802
/* 3856 */    MCD::OPC_Decode, 244, 1, 9, // Opcode: DPS_W_PH
/* 3860 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3878
/* 3864 */    MCD::OPC_CheckPredicate, 12, 166, 3, // Skip to: 4802
/* 3868 */    MCD::OPC_CheckField, 13, 3, 0, 160, 3, // Skip to: 4802
/* 3874 */    MCD::OPC_Decode, 225, 3, 9, // Opcode: MULSA_W_PH
/* 3878 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3896
/* 3882 */    MCD::OPC_CheckPredicate, 2, 148, 3, // Skip to: 4802
/* 3886 */    MCD::OPC_CheckField, 13, 3, 0, 142, 3, // Skip to: 4802
/* 3892 */    MCD::OPC_Decode, 222, 1, 9, // Opcode: DPAU_H_QBL
/* 3896 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3914
/* 3900 */    MCD::OPC_CheckPredicate, 2, 130, 3, // Skip to: 4802
/* 3904 */    MCD::OPC_CheckField, 13, 3, 0, 124, 3, // Skip to: 4802
/* 3910 */    MCD::OPC_Decode, 220, 1, 9, // Opcode: DPAQ_S_W_PH
/* 3914 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3932
/* 3918 */    MCD::OPC_CheckPredicate, 2, 112, 3, // Skip to: 4802
/* 3922 */    MCD::OPC_CheckField, 13, 3, 0, 106, 3, // Skip to: 4802
/* 3928 */    MCD::OPC_Decode, 236, 1, 9, // Opcode: DPSQ_S_W_PH
/* 3932 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3950
/* 3936 */    MCD::OPC_CheckPredicate, 2, 94, 3, // Skip to: 4802
/* 3940 */    MCD::OPC_CheckField, 13, 3, 0, 88, 3, // Skip to: 4802
/* 3946 */    MCD::OPC_Decode, 223, 3, 9, // Opcode: MULSAQ_S_W_PH
/* 3950 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3968
/* 3954 */    MCD::OPC_CheckPredicate, 2, 76, 3, // Skip to: 4802
/* 3958 */    MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 4802
/* 3964 */    MCD::OPC_Decode, 224, 1, 9, // Opcode: DPAU_H_QBR
/* 3968 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 3986
/* 3972 */    MCD::OPC_CheckPredicate, 12, 58, 3, // Skip to: 4802
/* 3976 */    MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 4802
/* 3982 */    MCD::OPC_Decode, 226, 1, 9, // Opcode: DPAX_W_PH
/* 3986 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 4004
/* 3990 */    MCD::OPC_CheckPredicate, 12, 40, 3, // Skip to: 4802
/* 3994 */    MCD::OPC_CheckField, 13, 3, 0, 34, 3, // Skip to: 4802
/* 4000 */    MCD::OPC_Decode, 242, 1, 9, // Opcode: DPSX_W_PH
/* 4004 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4022
/* 4008 */    MCD::OPC_CheckPredicate, 2, 22, 3, // Skip to: 4802
/* 4012 */    MCD::OPC_CheckField, 13, 3, 0, 16, 3, // Skip to: 4802
/* 4018 */    MCD::OPC_Decode, 238, 1, 9, // Opcode: DPSU_H_QBL
/* 4022 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 4040
/* 4026 */    MCD::OPC_CheckPredicate, 2, 4, 3, // Skip to: 4802
/* 4030 */    MCD::OPC_CheckField, 13, 3, 0, 254, 2, // Skip to: 4802
/* 4036 */    MCD::OPC_Decode, 218, 1, 9, // Opcode: DPAQ_SA_L_W
/* 4040 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 4058
/* 4044 */    MCD::OPC_CheckPredicate, 2, 242, 2, // Skip to: 4802
/* 4048 */    MCD::OPC_CheckField, 13, 3, 0, 236, 2, // Skip to: 4802
/* 4054 */    MCD::OPC_Decode, 234, 1, 9, // Opcode: DPSQ_SA_L_W
/* 4058 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4076
/* 4062 */    MCD::OPC_CheckPredicate, 2, 224, 2, // Skip to: 4802
/* 4066 */    MCD::OPC_CheckField, 13, 3, 0, 218, 2, // Skip to: 4802
/* 4072 */    MCD::OPC_Decode, 240, 1, 9, // Opcode: DPSU_H_QBR
/* 4076 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4094
/* 4080 */    MCD::OPC_CheckPredicate, 2, 206, 2, // Skip to: 4802
/* 4084 */    MCD::OPC_CheckField, 13, 3, 0, 200, 2, // Skip to: 4802
/* 4090 */    MCD::OPC_Decode, 149, 3, 9, // Opcode: MAQ_SA_W_PHL
/* 4094 */    MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 4112
/* 4098 */    MCD::OPC_CheckPredicate, 2, 188, 2, // Skip to: 4802
/* 4102 */    MCD::OPC_CheckField, 13, 3, 0, 182, 2, // Skip to: 4802
/* 4108 */    MCD::OPC_Decode, 151, 3, 9, // Opcode: MAQ_SA_W_PHR
/* 4112 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 4130
/* 4116 */    MCD::OPC_CheckPredicate, 2, 170, 2, // Skip to: 4802
/* 4120 */    MCD::OPC_CheckField, 13, 3, 0, 164, 2, // Skip to: 4802
/* 4126 */    MCD::OPC_Decode, 153, 3, 9, // Opcode: MAQ_S_W_PHL
/* 4130 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 4148
/* 4134 */    MCD::OPC_CheckPredicate, 2, 152, 2, // Skip to: 4802
/* 4138 */    MCD::OPC_CheckField, 13, 3, 0, 146, 2, // Skip to: 4802
/* 4144 */    MCD::OPC_Decode, 155, 3, 9, // Opcode: MAQ_S_W_PHR
/* 4148 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 4166
/* 4152 */    MCD::OPC_CheckPredicate, 12, 134, 2, // Skip to: 4802
/* 4156 */    MCD::OPC_CheckField, 13, 3, 0, 128, 2, // Skip to: 4802
/* 4162 */    MCD::OPC_Decode, 216, 1, 9, // Opcode: DPAQX_S_W_PH
/* 4166 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 4184
/* 4170 */    MCD::OPC_CheckPredicate, 12, 116, 2, // Skip to: 4802
/* 4174 */    MCD::OPC_CheckField, 13, 3, 0, 110, 2, // Skip to: 4802
/* 4180 */    MCD::OPC_Decode, 232, 1, 9, // Opcode: DPSQX_S_W_PH
/* 4184 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4202
/* 4188 */    MCD::OPC_CheckPredicate, 12, 98, 2, // Skip to: 4802
/* 4192 */    MCD::OPC_CheckField, 13, 3, 0, 92, 2, // Skip to: 4802
/* 4198 */    MCD::OPC_Decode, 214, 1, 9, // Opcode: DPAQX_SA_W_PH
/* 4202 */    MCD::OPC_FilterValue, 27, 84, 2, // Skip to: 4802
/* 4206 */    MCD::OPC_CheckPredicate, 12, 80, 2, // Skip to: 4802
/* 4210 */    MCD::OPC_CheckField, 13, 3, 0, 74, 2, // Skip to: 4802
/* 4216 */    MCD::OPC_Decode, 230, 1, 9, // Opcode: DPSQX_SA_W_PH
/* 4220 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 4261
/* 4224 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4227 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 4238
/* 4231 */    MCD::OPC_CheckPredicate, 12, 55, 2, // Skip to: 4802
/* 4235 */    MCD::OPC_Decode, 44, 65, // Opcode: APPEND
/* 4238 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4250
/* 4242 */    MCD::OPC_CheckPredicate, 12, 44, 2, // Skip to: 4802
/* 4246 */    MCD::OPC_Decode, 151, 4, 65, // Opcode: PREPEND
/* 4250 */    MCD::OPC_FilterValue, 16, 36, 2, // Skip to: 4802
/* 4254 */    MCD::OPC_CheckPredicate, 12, 32, 2, // Skip to: 4802
/* 4258 */    MCD::OPC_Decode, 118, 65, // Opcode: BALIGN
/* 4261 */    MCD::OPC_FilterValue, 56, 41, 1, // Skip to: 4562
/* 4265 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4268 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4286
/* 4272 */    MCD::OPC_CheckPredicate, 2, 14, 2, // Skip to: 4802
/* 4276 */    MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 4802
/* 4282 */    MCD::OPC_Decode, 149, 2, 66, // Opcode: EXTR_W
/* 4286 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 4304
/* 4290 */    MCD::OPC_CheckPredicate, 2, 252, 1, // Skip to: 4802
/* 4294 */    MCD::OPC_CheckField, 13, 3, 0, 246, 1, // Skip to: 4802
/* 4300 */    MCD::OPC_Decode, 145, 2, 67, // Opcode: EXTRV_W
/* 4304 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4322
/* 4308 */    MCD::OPC_CheckPredicate, 2, 234, 1, // Skip to: 4802
/* 4312 */    MCD::OPC_CheckField, 13, 3, 0, 228, 1, // Skip to: 4802
/* 4318 */    MCD::OPC_Decode, 138, 2, 66, // Opcode: EXTP
/* 4322 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 4340
/* 4326 */    MCD::OPC_CheckPredicate, 2, 216, 1, // Skip to: 4802
/* 4330 */    MCD::OPC_CheckField, 13, 3, 0, 210, 1, // Skip to: 4802
/* 4336 */    MCD::OPC_Decode, 141, 2, 67, // Opcode: EXTPV
/* 4340 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 4358
/* 4344 */    MCD::OPC_CheckPredicate, 2, 198, 1, // Skip to: 4802
/* 4348 */    MCD::OPC_CheckField, 13, 3, 0, 192, 1, // Skip to: 4802
/* 4354 */    MCD::OPC_Decode, 147, 2, 66, // Opcode: EXTR_R_W
/* 4358 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 4376
/* 4362 */    MCD::OPC_CheckPredicate, 2, 180, 1, // Skip to: 4802
/* 4366 */    MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 4802
/* 4372 */    MCD::OPC_Decode, 143, 2, 67, // Opcode: EXTRV_R_W
/* 4376 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 4394
/* 4380 */    MCD::OPC_CheckPredicate, 2, 162, 1, // Skip to: 4802
/* 4384 */    MCD::OPC_CheckField, 13, 3, 0, 156, 1, // Skip to: 4802
/* 4390 */    MCD::OPC_Decode, 146, 2, 66, // Opcode: EXTR_RS_W
/* 4394 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 4412
/* 4398 */    MCD::OPC_CheckPredicate, 2, 144, 1, // Skip to: 4802
/* 4402 */    MCD::OPC_CheckField, 13, 3, 0, 138, 1, // Skip to: 4802
/* 4408 */    MCD::OPC_Decode, 142, 2, 67, // Opcode: EXTRV_RS_W
/* 4412 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 4430
/* 4416 */    MCD::OPC_CheckPredicate, 2, 126, 1, // Skip to: 4802
/* 4420 */    MCD::OPC_CheckField, 13, 3, 0, 120, 1, // Skip to: 4802
/* 4426 */    MCD::OPC_Decode, 139, 2, 66, // Opcode: EXTPDP
/* 4430 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4448
/* 4434 */    MCD::OPC_CheckPredicate, 2, 108, 1, // Skip to: 4802
/* 4438 */    MCD::OPC_CheckField, 13, 3, 0, 102, 1, // Skip to: 4802
/* 4444 */    MCD::OPC_Decode, 140, 2, 67, // Opcode: EXTPDPV
/* 4448 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 4466
/* 4452 */    MCD::OPC_CheckPredicate, 2, 90, 1, // Skip to: 4802
/* 4456 */    MCD::OPC_CheckField, 13, 3, 0, 84, 1, // Skip to: 4802
/* 4462 */    MCD::OPC_Decode, 148, 2, 66, // Opcode: EXTR_S_H
/* 4466 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4484
/* 4470 */    MCD::OPC_CheckPredicate, 2, 72, 1, // Skip to: 4802
/* 4474 */    MCD::OPC_CheckField, 13, 3, 0, 66, 1, // Skip to: 4802
/* 4480 */    MCD::OPC_Decode, 144, 2, 67, // Opcode: EXTRV_S_H
/* 4484 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4496
/* 4488 */    MCD::OPC_CheckPredicate, 2, 54, 1, // Skip to: 4802
/* 4492 */    MCD::OPC_Decode, 153, 4, 68, // Opcode: RDDSP
/* 4496 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4508
/* 4500 */    MCD::OPC_CheckPredicate, 2, 42, 1, // Skip to: 4802
/* 4504 */    MCD::OPC_Decode, 191, 5, 69, // Opcode: WRDSP
/* 4508 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4526
/* 4512 */    MCD::OPC_CheckPredicate, 2, 30, 1, // Skip to: 4802
/* 4516 */    MCD::OPC_CheckField, 13, 7, 0, 24, 1, // Skip to: 4802
/* 4522 */    MCD::OPC_Decode, 200, 4, 70, // Opcode: SHILO
/* 4526 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 4544
/* 4530 */    MCD::OPC_CheckPredicate, 2, 12, 1, // Skip to: 4802
/* 4534 */    MCD::OPC_CheckField, 13, 8, 0, 6, 1, // Skip to: 4802
/* 4540 */    MCD::OPC_Decode, 201, 4, 71, // Opcode: SHILOV
/* 4544 */    MCD::OPC_FilterValue, 31, 254, 0, // Skip to: 4802
/* 4548 */    MCD::OPC_CheckPredicate, 2, 250, 0, // Skip to: 4802
/* 4552 */    MCD::OPC_CheckField, 13, 8, 0, 244, 0, // Skip to: 4802
/* 4558 */    MCD::OPC_Decode, 210, 3, 71, // Opcode: MTHLIP
/* 4562 */    MCD::OPC_FilterValue, 59, 236, 0, // Skip to: 4802
/* 4566 */    MCD::OPC_CheckPredicate, 0, 232, 0, // Skip to: 4802
/* 4570 */    MCD::OPC_CheckField, 21, 5, 0, 226, 0, // Skip to: 4802
/* 4576 */    MCD::OPC_CheckField, 6, 5, 0, 220, 0, // Skip to: 4802
/* 4582 */    MCD::OPC_Decode, 154, 4, 72, // Opcode: RDHWR
/* 4586 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4598
/* 4590 */    MCD::OPC_CheckPredicate, 15, 208, 0, // Skip to: 4802
/* 4594 */    MCD::OPC_Decode, 198, 2, 73, // Opcode: LB
/* 4598 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4610
/* 4602 */    MCD::OPC_CheckPredicate, 15, 196, 0, // Skip to: 4802
/* 4606 */    MCD::OPC_Decode, 221, 2, 73, // Opcode: LH
/* 4610 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4622
/* 4614 */    MCD::OPC_CheckPredicate, 15, 184, 0, // Skip to: 4802
/* 4618 */    MCD::OPC_Decode, 243, 2, 73, // Opcode: LWL
/* 4622 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4634
/* 4626 */    MCD::OPC_CheckPredicate, 15, 172, 0, // Skip to: 4802
/* 4630 */    MCD::OPC_Decode, 238, 2, 73, // Opcode: LW
/* 4634 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4646
/* 4638 */    MCD::OPC_CheckPredicate, 15, 160, 0, // Skip to: 4802
/* 4642 */    MCD::OPC_Decode, 203, 2, 73, // Opcode: LBu
/* 4646 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4658
/* 4650 */    MCD::OPC_CheckPredicate, 15, 148, 0, // Skip to: 4802
/* 4654 */    MCD::OPC_Decode, 226, 2, 73, // Opcode: LHu
/* 4658 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4670
/* 4662 */    MCD::OPC_CheckPredicate, 15, 136, 0, // Skip to: 4802
/* 4666 */    MCD::OPC_Decode, 247, 2, 73, // Opcode: LWR
/* 4670 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4682
/* 4674 */    MCD::OPC_CheckPredicate, 15, 124, 0, // Skip to: 4802
/* 4678 */    MCD::OPC_Decode, 172, 4, 73, // Opcode: SB
/* 4682 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4694
/* 4686 */    MCD::OPC_CheckPredicate, 15, 112, 0, // Skip to: 4802
/* 4690 */    MCD::OPC_Decode, 197, 4, 73, // Opcode: SH
/* 4694 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4706
/* 4698 */    MCD::OPC_CheckPredicate, 15, 100, 0, // Skip to: 4802
/* 4702 */    MCD::OPC_Decode, 137, 5, 73, // Opcode: SWL
/* 4706 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4718
/* 4710 */    MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 4802
/* 4714 */    MCD::OPC_Decode, 132, 5, 73, // Opcode: SW
/* 4718 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4730
/* 4722 */    MCD::OPC_CheckPredicate, 15, 76, 0, // Skip to: 4802
/* 4726 */    MCD::OPC_Decode, 141, 5, 73, // Opcode: SWR
/* 4730 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 4742
/* 4734 */    MCD::OPC_CheckPredicate, 15, 64, 0, // Skip to: 4802
/* 4738 */    MCD::OPC_Decode, 230, 2, 73, // Opcode: LL
/* 4742 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4754
/* 4746 */    MCD::OPC_CheckPredicate, 15, 52, 0, // Skip to: 4802
/* 4750 */    MCD::OPC_Decode, 241, 2, 74, // Opcode: LWC1
/* 4754 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4766
/* 4758 */    MCD::OPC_CheckPredicate, 16, 40, 0, // Skip to: 4802
/* 4762 */    MCD::OPC_Decode, 208, 2, 74, // Opcode: LDC1
/* 4766 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4778
/* 4770 */    MCD::OPC_CheckPredicate, 15, 28, 0, // Skip to: 4802
/* 4774 */    MCD::OPC_Decode, 176, 4, 73, // Opcode: SC
/* 4778 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4790
/* 4782 */    MCD::OPC_CheckPredicate, 15, 16, 0, // Skip to: 4802
/* 4786 */    MCD::OPC_Decode, 135, 5, 74, // Opcode: SWC1
/* 4790 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4802
/* 4794 */    MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 4802
/* 4798 */    MCD::OPC_Decode, 181, 4, 74, // Opcode: SDC1
/* 4802 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 117, 2, // Skip to: 636
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 53
/* 14 */      MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 17 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 35
/* 21 */      MCD::OPC_CheckPredicate, 17, 68, 8, // Skip to: 2141
/* 25 */      MCD::OPC_CheckField, 6, 5, 0, 62, 8, // Skip to: 2141
/* 31 */      MCD::OPC_Decode, 171, 3, 75, // Opcode: MOVF_I64
/* 35 */      MCD::OPC_FilterValue, 1, 54, 8, // Skip to: 2141
/* 39 */      MCD::OPC_CheckPredicate, 17, 50, 8, // Skip to: 2141
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 44, 8, // Skip to: 2141
/* 49 */      MCD::OPC_Decode, 185, 3, 75, // Opcode: MOVT_I64
/* 53 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 71
/* 57 */      MCD::OPC_CheckPredicate, 0, 32, 8, // Skip to: 2141
/* 61 */      MCD::OPC_CheckField, 6, 15, 0, 26, 8, // Skip to: 2141
/* 67 */      MCD::OPC_Decode, 192, 2, 76, // Opcode: JR64
/* 71 */      MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 95
/* 75 */      MCD::OPC_CheckPredicate, 0, 14, 8, // Skip to: 2141
/* 79 */      MCD::OPC_CheckField, 16, 5, 0, 8, 8, // Skip to: 2141
/* 85 */      MCD::OPC_CheckField, 6, 5, 0, 2, 8, // Skip to: 2141
/* 91 */      MCD::OPC_Decode, 188, 2, 77, // Opcode: JALR64
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 0, 246, 7, // Skip to: 2141
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 240, 7, // Skip to: 2141
/* 109 */     MCD::OPC_Decode, 194, 3, 78, // Opcode: MOVZ_I_I64
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 0, 228, 7, // Skip to: 2141
/* 121 */     MCD::OPC_CheckField, 6, 5, 0, 222, 7, // Skip to: 2141
/* 127 */     MCD::OPC_Decode, 180, 3, 78, // Opcode: MOVN_I_I64
/* 131 */     MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 155
/* 135 */     MCD::OPC_CheckPredicate, 0, 210, 7, // Skip to: 2141
/* 139 */     MCD::OPC_CheckField, 16, 10, 0, 204, 7, // Skip to: 2141
/* 145 */     MCD::OPC_CheckField, 6, 5, 0, 198, 7, // Skip to: 2141
/* 151 */     MCD::OPC_Decode, 161, 3, 79, // Opcode: MFHI64
/* 155 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 173
/* 159 */     MCD::OPC_CheckPredicate, 0, 186, 7, // Skip to: 2141
/* 163 */     MCD::OPC_CheckField, 6, 15, 0, 180, 7, // Skip to: 2141
/* 169 */     MCD::OPC_Decode, 209, 3, 76, // Opcode: MTHI64
/* 173 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 197
/* 177 */     MCD::OPC_CheckPredicate, 0, 168, 7, // Skip to: 2141
/* 181 */     MCD::OPC_CheckField, 16, 10, 0, 162, 7, // Skip to: 2141
/* 187 */     MCD::OPC_CheckField, 6, 5, 0, 156, 7, // Skip to: 2141
/* 193 */     MCD::OPC_Decode, 163, 3, 79, // Opcode: MFLO64
/* 197 */     MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 215
/* 201 */     MCD::OPC_CheckPredicate, 0, 144, 7, // Skip to: 2141
/* 205 */     MCD::OPC_CheckField, 6, 15, 0, 138, 7, // Skip to: 2141
/* 211 */     MCD::OPC_Decode, 213, 3, 76, // Opcode: MTLO64
/* 215 */     MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 233
/* 219 */     MCD::OPC_CheckPredicate, 0, 126, 7, // Skip to: 2141
/* 223 */     MCD::OPC_CheckField, 6, 5, 0, 120, 7, // Skip to: 2141
/* 229 */     MCD::OPC_Decode, 254, 1, 80, // Opcode: DSLLV
/* 233 */     MCD::OPC_FilterValue, 22, 27, 0, // Skip to: 264
/* 237 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 240 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 252
/* 244 */     MCD::OPC_CheckPredicate, 0, 101, 7, // Skip to: 2141
/* 248 */     MCD::OPC_Decode, 132, 2, 80, // Opcode: DSRLV
/* 252 */     MCD::OPC_FilterValue, 1, 93, 7, // Skip to: 2141
/* 256 */     MCD::OPC_CheckPredicate, 18, 89, 7, // Skip to: 2141
/* 260 */     MCD::OPC_Decode, 247, 1, 80, // Opcode: DROTRV
/* 264 */     MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 282
/* 268 */     MCD::OPC_CheckPredicate, 0, 77, 7, // Skip to: 2141
/* 272 */     MCD::OPC_CheckField, 6, 5, 0, 71, 7, // Skip to: 2141
/* 278 */     MCD::OPC_Decode, 129, 2, 80, // Opcode: DSRAV
/* 282 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 300
/* 286 */     MCD::OPC_CheckPredicate, 0, 59, 7, // Skip to: 2141
/* 290 */     MCD::OPC_CheckField, 6, 10, 0, 53, 7, // Skip to: 2141
/* 296 */     MCD::OPC_Decode, 212, 1, 81, // Opcode: DMULT
/* 300 */     MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 318
/* 304 */     MCD::OPC_CheckPredicate, 0, 41, 7, // Skip to: 2141
/* 308 */     MCD::OPC_CheckField, 6, 10, 0, 35, 7, // Skip to: 2141
/* 314 */     MCD::OPC_Decode, 213, 1, 81, // Opcode: DMULTu
/* 318 */     MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 336
/* 322 */     MCD::OPC_CheckPredicate, 0, 23, 7, // Skip to: 2141
/* 326 */     MCD::OPC_CheckField, 6, 10, 0, 17, 7, // Skip to: 2141
/* 332 */     MCD::OPC_Decode, 249, 1, 81, // Opcode: DSDIV
/* 336 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 354
/* 340 */     MCD::OPC_CheckPredicate, 0, 5, 7, // Skip to: 2141
/* 344 */     MCD::OPC_CheckField, 6, 10, 0, 255, 6, // Skip to: 2141
/* 350 */     MCD::OPC_Decode, 134, 2, 81, // Opcode: DUDIV
/* 354 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 371
/* 358 */     MCD::OPC_CheckPredicate, 0, 243, 6, // Skip to: 2141
/* 362 */     MCD::OPC_CheckField, 6, 5, 0, 237, 6, // Skip to: 2141
/* 368 */     MCD::OPC_Decode, 42, 82, // Opcode: AND64
/* 371 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 389
/* 375 */     MCD::OPC_CheckPredicate, 0, 226, 6, // Skip to: 2141
/* 379 */     MCD::OPC_CheckField, 6, 5, 0, 220, 6, // Skip to: 2141
/* 385 */     MCD::OPC_Decode, 255, 3, 82, // Opcode: OR64
/* 389 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 407
/* 393 */     MCD::OPC_CheckPredicate, 0, 208, 6, // Skip to: 2141
/* 397 */     MCD::OPC_CheckField, 6, 5, 0, 202, 6, // Skip to: 2141
/* 403 */     MCD::OPC_Decode, 194, 5, 82, // Opcode: XOR64
/* 407 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 425
/* 411 */     MCD::OPC_CheckPredicate, 0, 190, 6, // Skip to: 2141
/* 415 */     MCD::OPC_CheckField, 6, 5, 0, 184, 6, // Skip to: 2141
/* 421 */     MCD::OPC_Decode, 251, 3, 82, // Opcode: NOR64
/* 425 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 443
/* 429 */     MCD::OPC_CheckPredicate, 0, 172, 6, // Skip to: 2141
/* 433 */     MCD::OPC_CheckField, 6, 5, 0, 166, 6, // Skip to: 2141
/* 439 */     MCD::OPC_Decode, 232, 4, 83, // Opcode: SLT64
/* 443 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 461
/* 447 */     MCD::OPC_CheckPredicate, 0, 154, 6, // Skip to: 2141
/* 451 */     MCD::OPC_CheckField, 6, 5, 0, 148, 6, // Skip to: 2141
/* 457 */     MCD::OPC_Decode, 238, 4, 83, // Opcode: SLTu64
/* 461 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 479
/* 465 */     MCD::OPC_CheckPredicate, 0, 136, 6, // Skip to: 2141
/* 469 */     MCD::OPC_CheckField, 6, 5, 0, 130, 6, // Skip to: 2141
/* 475 */     MCD::OPC_Decode, 193, 1, 82, // Opcode: DADD
/* 479 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 497
/* 483 */     MCD::OPC_CheckPredicate, 0, 118, 6, // Skip to: 2141
/* 487 */     MCD::OPC_CheckField, 6, 5, 0, 112, 6, // Skip to: 2141
/* 493 */     MCD::OPC_Decode, 196, 1, 82, // Opcode: DADDu
/* 497 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 515
/* 501 */     MCD::OPC_CheckPredicate, 0, 100, 6, // Skip to: 2141
/* 505 */     MCD::OPC_CheckField, 6, 5, 0, 94, 6, // Skip to: 2141
/* 511 */     MCD::OPC_Decode, 133, 2, 82, // Opcode: DSUBu
/* 515 */     MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 533
/* 519 */     MCD::OPC_CheckPredicate, 0, 82, 6, // Skip to: 2141
/* 523 */     MCD::OPC_CheckField, 21, 5, 0, 76, 6, // Skip to: 2141
/* 529 */     MCD::OPC_Decode, 251, 1, 84, // Opcode: DSLL
/* 533 */     MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 564
/* 537 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 540 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 552
/* 544 */     MCD::OPC_CheckPredicate, 0, 57, 6, // Skip to: 2141
/* 548 */     MCD::OPC_Decode, 130, 2, 84, // Opcode: DSRL
/* 552 */     MCD::OPC_FilterValue, 1, 49, 6, // Skip to: 2141
/* 556 */     MCD::OPC_CheckPredicate, 18, 45, 6, // Skip to: 2141
/* 560 */     MCD::OPC_Decode, 246, 1, 84, // Opcode: DROTR
/* 564 */     MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 582
/* 568 */     MCD::OPC_CheckPredicate, 0, 33, 6, // Skip to: 2141
/* 572 */     MCD::OPC_CheckField, 21, 5, 0, 27, 6, // Skip to: 2141
/* 578 */     MCD::OPC_Decode, 255, 1, 84, // Opcode: DSRA
/* 582 */     MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 600
/* 586 */     MCD::OPC_CheckPredicate, 0, 15, 6, // Skip to: 2141
/* 590 */     MCD::OPC_CheckField, 21, 5, 0, 9, 6, // Skip to: 2141
/* 596 */     MCD::OPC_Decode, 252, 1, 84, // Opcode: DSLL32
/* 600 */     MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 618
/* 604 */     MCD::OPC_CheckPredicate, 0, 253, 5, // Skip to: 2141
/* 608 */     MCD::OPC_CheckField, 21, 5, 0, 247, 5, // Skip to: 2141
/* 614 */     MCD::OPC_Decode, 131, 2, 84, // Opcode: DSRL32
/* 618 */     MCD::OPC_FilterValue, 63, 239, 5, // Skip to: 2141
/* 622 */     MCD::OPC_CheckPredicate, 0, 235, 5, // Skip to: 2141
/* 626 */     MCD::OPC_CheckField, 21, 5, 0, 229, 5, // Skip to: 2141
/* 632 */     MCD::OPC_Decode, 128, 2, 84, // Opcode: DSRA32
/* 636 */     MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 666
/* 640 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 643 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 655
/* 647 */     MCD::OPC_CheckPredicate, 0, 210, 5, // Skip to: 2141
/* 651 */     MCD::OPC_Decode, 133, 1, 85, // Opcode: BLTZ64
/* 655 */     MCD::OPC_FilterValue, 1, 202, 5, // Skip to: 2141
/* 659 */     MCD::OPC_CheckPredicate, 0, 198, 5, // Skip to: 2141
/* 663 */     MCD::OPC_Decode, 125, 85, // Opcode: BGEZ64
/* 666 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 677
/* 670 */     MCD::OPC_CheckPredicate, 0, 187, 5, // Skip to: 2141
/* 674 */     MCD::OPC_Decode, 123, 86, // Opcode: BEQ64
/* 677 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 689
/* 681 */     MCD::OPC_CheckPredicate, 0, 176, 5, // Skip to: 2141
/* 685 */     MCD::OPC_Decode, 136, 1, 86, // Opcode: BNE64
/* 689 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 707
/* 693 */     MCD::OPC_CheckPredicate, 0, 164, 5, // Skip to: 2141
/* 697 */     MCD::OPC_CheckField, 16, 5, 0, 158, 5, // Skip to: 2141
/* 703 */     MCD::OPC_Decode, 131, 1, 85, // Opcode: BLEZ64
/* 707 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 725
/* 711 */     MCD::OPC_CheckPredicate, 0, 146, 5, // Skip to: 2141
/* 715 */     MCD::OPC_CheckField, 16, 5, 0, 140, 5, // Skip to: 2141
/* 721 */     MCD::OPC_Decode, 128, 1, 85, // Opcode: BGTZ64
/* 725 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 737
/* 729 */     MCD::OPC_CheckPredicate, 0, 128, 5, // Skip to: 2141
/* 733 */     MCD::OPC_Decode, 234, 4, 87, // Opcode: SLTi64
/* 737 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 749
/* 741 */     MCD::OPC_CheckPredicate, 0, 116, 5, // Skip to: 2141
/* 745 */     MCD::OPC_Decode, 236, 4, 87, // Opcode: SLTiu64
/* 749 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 761
/* 753 */     MCD::OPC_CheckPredicate, 0, 104, 5, // Skip to: 2141
/* 757 */     MCD::OPC_Decode, 197, 1, 88, // Opcode: DANDi
/* 761 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 773
/* 765 */     MCD::OPC_CheckPredicate, 0, 92, 5, // Skip to: 2141
/* 769 */     MCD::OPC_Decode, 129, 4, 88, // Opcode: ORi64
/* 773 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 785
/* 777 */     MCD::OPC_CheckPredicate, 0, 80, 5, // Skip to: 2141
/* 781 */     MCD::OPC_Decode, 196, 5, 88, // Opcode: XORi64
/* 785 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 803
/* 789 */     MCD::OPC_CheckPredicate, 0, 68, 5, // Skip to: 2141
/* 793 */     MCD::OPC_CheckField, 21, 5, 0, 62, 5, // Skip to: 2141
/* 799 */     MCD::OPC_Decode, 237, 2, 89, // Opcode: LUi64
/* 803 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 846
/* 807 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 810 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 828
/* 814 */     MCD::OPC_CheckPredicate, 0, 43, 5, // Skip to: 2141
/* 818 */     MCD::OPC_CheckField, 3, 8, 0, 37, 5, // Skip to: 2141
/* 824 */     MCD::OPC_Decode, 206, 1, 90, // Opcode: DMFC0_3OP64
/* 828 */     MCD::OPC_FilterValue, 5, 29, 5, // Skip to: 2141
/* 832 */     MCD::OPC_CheckPredicate, 0, 25, 5, // Skip to: 2141
/* 836 */     MCD::OPC_CheckField, 3, 8, 0, 19, 5, // Skip to: 2141
/* 842 */     MCD::OPC_Decode, 209, 1, 91, // Opcode: DMTC0_3OP64
/* 846 */     MCD::OPC_FilterValue, 17, 89, 2, // Skip to: 1451
/* 850 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 853 */     MCD::OPC_FilterValue, 0, 103, 1, // Skip to: 1216
/* 857 */     MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 860 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 878
/* 864 */     MCD::OPC_CheckPredicate, 19, 249, 4, // Skip to: 2141
/* 868 */     MCD::OPC_CheckField, 21, 5, 17, 243, 4, // Skip to: 2141
/* 874 */     MCD::OPC_Decode, 155, 2, 92, // Opcode: FADD_D64
/* 878 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 896
/* 882 */     MCD::OPC_CheckPredicate, 19, 231, 4, // Skip to: 2141
/* 886 */     MCD::OPC_CheckField, 21, 5, 17, 225, 4, // Skip to: 2141
/* 892 */     MCD::OPC_Decode, 181, 2, 92, // Opcode: FSUB_D64
/* 896 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 914
/* 900 */     MCD::OPC_CheckPredicate, 19, 213, 4, // Skip to: 2141
/* 904 */     MCD::OPC_CheckField, 21, 5, 17, 207, 4, // Skip to: 2141
/* 910 */     MCD::OPC_Decode, 172, 2, 92, // Opcode: FMUL_D64
/* 914 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 932
/* 918 */     MCD::OPC_CheckPredicate, 19, 195, 4, // Skip to: 2141
/* 922 */     MCD::OPC_CheckField, 21, 5, 17, 189, 4, // Skip to: 2141
/* 928 */     MCD::OPC_Decode, 161, 2, 92, // Opcode: FDIV_D64
/* 932 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 951
/* 936 */     MCD::OPC_CheckPredicate, 19, 177, 4, // Skip to: 2141
/* 940 */     MCD::OPC_CheckField, 16, 10, 160, 4, 170, 4, // Skip to: 2141
/* 947 */     MCD::OPC_Decode, 178, 2, 38, // Opcode: FSQRT_D64
/* 951 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 970
/* 955 */     MCD::OPC_CheckPredicate, 3, 158, 4, // Skip to: 2141
/* 959 */     MCD::OPC_CheckField, 16, 10, 160, 4, 151, 4, // Skip to: 2141
/* 966 */     MCD::OPC_Decode, 152, 2, 38, // Opcode: FABS_D64
/* 970 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 989
/* 974 */     MCD::OPC_CheckPredicate, 19, 139, 4, // Skip to: 2141
/* 978 */     MCD::OPC_CheckField, 16, 10, 160, 4, 132, 4, // Skip to: 2141
/* 985 */     MCD::OPC_Decode, 169, 2, 38, // Opcode: FMOV_D64
/* 989 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1008
/* 993 */     MCD::OPC_CheckPredicate, 3, 120, 4, // Skip to: 2141
/* 997 */     MCD::OPC_CheckField, 16, 10, 160, 4, 113, 4, // Skip to: 2141
/* 1004 */    MCD::OPC_Decode, 175, 2, 38, // Opcode: FNEG_D64
/* 1008 */    MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 1041
/* 1012 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1015 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1028
/* 1020 */    MCD::OPC_CheckPredicate, 19, 93, 4, // Skip to: 2141
/* 1024 */    MCD::OPC_Decode, 164, 4, 31, // Opcode: ROUND_L_S
/* 1028 */    MCD::OPC_FilterValue, 160, 4, 84, 4, // Skip to: 2141
/* 1033 */    MCD::OPC_CheckPredicate, 19, 80, 4, // Skip to: 2141
/* 1037 */    MCD::OPC_Decode, 163, 4, 38, // Opcode: ROUND_L_D64
/* 1041 */    MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 1074
/* 1045 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1048 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1061
/* 1053 */    MCD::OPC_CheckPredicate, 19, 60, 4, // Skip to: 2141
/* 1057 */    MCD::OPC_Decode, 186, 5, 31, // Opcode: TRUNC_L_S
/* 1061 */    MCD::OPC_FilterValue, 160, 4, 51, 4, // Skip to: 2141
/* 1066 */    MCD::OPC_CheckPredicate, 19, 47, 4, // Skip to: 2141
/* 1070 */    MCD::OPC_Decode, 185, 5, 38, // Opcode: TRUNC_L_D64
/* 1074 */    MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 1107
/* 1078 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1081 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1094
/* 1086 */    MCD::OPC_CheckPredicate, 19, 27, 4, // Skip to: 2141
/* 1090 */    MCD::OPC_Decode, 158, 1, 31, // Opcode: CEIL_L_S
/* 1094 */    MCD::OPC_FilterValue, 160, 4, 18, 4, // Skip to: 2141
/* 1099 */    MCD::OPC_CheckPredicate, 19, 14, 4, // Skip to: 2141
/* 1103 */    MCD::OPC_Decode, 157, 1, 38, // Opcode: CEIL_L_D64
/* 1107 */    MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 1140
/* 1111 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1114 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1127
/* 1119 */    MCD::OPC_CheckPredicate, 19, 250, 3, // Skip to: 2141
/* 1123 */    MCD::OPC_Decode, 164, 2, 31, // Opcode: FLOOR_L_S
/* 1127 */    MCD::OPC_FilterValue, 160, 4, 241, 3, // Skip to: 2141
/* 1132 */    MCD::OPC_CheckPredicate, 19, 237, 3, // Skip to: 2141
/* 1136 */    MCD::OPC_Decode, 163, 2, 38, // Opcode: FLOOR_L_D64
/* 1140 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 1159
/* 1144 */    MCD::OPC_CheckPredicate, 19, 225, 3, // Skip to: 2141
/* 1148 */    MCD::OPC_CheckField, 16, 10, 160, 4, 218, 3, // Skip to: 2141
/* 1155 */    MCD::OPC_Decode, 166, 4, 93, // Opcode: ROUND_W_D64
/* 1159 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1178
/* 1163 */    MCD::OPC_CheckPredicate, 19, 206, 3, // Skip to: 2141
/* 1167 */    MCD::OPC_CheckField, 16, 10, 160, 4, 199, 3, // Skip to: 2141
/* 1174 */    MCD::OPC_Decode, 188, 5, 93, // Opcode: TRUNC_W_D64
/* 1178 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 1197
/* 1182 */    MCD::OPC_CheckPredicate, 19, 187, 3, // Skip to: 2141
/* 1186 */    MCD::OPC_CheckField, 16, 10, 160, 4, 180, 3, // Skip to: 2141
/* 1193 */    MCD::OPC_Decode, 160, 1, 93, // Opcode: CEIL_W_D64
/* 1197 */    MCD::OPC_FilterValue, 15, 172, 3, // Skip to: 2141
/* 1201 */    MCD::OPC_CheckPredicate, 19, 168, 3, // Skip to: 2141
/* 1205 */    MCD::OPC_CheckField, 16, 10, 160, 4, 161, 3, // Skip to: 2141
/* 1212 */    MCD::OPC_Decode, 166, 2, 93, // Opcode: FLOOR_W_D64
/* 1216 */    MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1318
/* 1220 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1223 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 1256
/* 1227 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1230 */    MCD::OPC_FilterValue, 160, 4, 8, 0, // Skip to: 1243
/* 1235 */    MCD::OPC_CheckPredicate, 19, 134, 3, // Skip to: 2141
/* 1239 */    MCD::OPC_Decode, 169, 3, 94, // Opcode: MOVF_D64
/* 1243 */    MCD::OPC_FilterValue, 161, 4, 125, 3, // Skip to: 2141
/* 1248 */    MCD::OPC_CheckPredicate, 19, 121, 3, // Skip to: 2141
/* 1252 */    MCD::OPC_Decode, 183, 3, 94, // Opcode: MOVT_D64
/* 1256 */    MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 1287
/* 1260 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1263 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1275
/* 1267 */    MCD::OPC_CheckPredicate, 17, 102, 3, // Skip to: 2141
/* 1271 */    MCD::OPC_Decode, 190, 3, 95, // Opcode: MOVZ_I64_S
/* 1275 */    MCD::OPC_FilterValue, 17, 94, 3, // Skip to: 2141
/* 1279 */    MCD::OPC_CheckPredicate, 19, 90, 3, // Skip to: 2141
/* 1283 */    MCD::OPC_Decode, 192, 3, 96, // Opcode: MOVZ_I_D64
/* 1287 */    MCD::OPC_FilterValue, 3, 82, 3, // Skip to: 2141
/* 1291 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1294 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 17, 71, 3, // Skip to: 2141
/* 1302 */    MCD::OPC_Decode, 176, 3, 95, // Opcode: MOVN_I64_S
/* 1306 */    MCD::OPC_FilterValue, 17, 63, 3, // Skip to: 2141
/* 1310 */    MCD::OPC_CheckPredicate, 19, 59, 3, // Skip to: 2141
/* 1314 */    MCD::OPC_Decode, 178, 3, 96, // Opcode: MOVN_I_D64
/* 1318 */    MCD::OPC_FilterValue, 2, 105, 0, // Skip to: 1427
/* 1322 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1325 */    MCD::OPC_FilterValue, 128, 4, 14, 0, // Skip to: 1344
/* 1330 */    MCD::OPC_CheckPredicate, 19, 39, 3, // Skip to: 2141
/* 1334 */    MCD::OPC_CheckField, 0, 4, 1, 33, 3, // Skip to: 2141
/* 1340 */    MCD::OPC_Decode, 181, 1, 31, // Opcode: CVT_D64_S
/* 1344 */    MCD::OPC_FilterValue, 160, 4, 27, 0, // Skip to: 1376
/* 1349 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1352 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1364
/* 1356 */    MCD::OPC_CheckPredicate, 19, 13, 3, // Skip to: 2141
/* 1360 */    MCD::OPC_Decode, 186, 1, 93, // Opcode: CVT_S_D64
/* 1364 */    MCD::OPC_FilterValue, 4, 5, 3, // Skip to: 2141
/* 1368 */    MCD::OPC_CheckPredicate, 19, 1, 3, // Skip to: 2141
/* 1372 */    MCD::OPC_Decode, 190, 1, 93, // Opcode: CVT_W_D64
/* 1376 */    MCD::OPC_FilterValue, 128, 5, 14, 0, // Skip to: 1395
/* 1381 */    MCD::OPC_CheckPredicate, 19, 244, 2, // Skip to: 2141
/* 1385 */    MCD::OPC_CheckField, 0, 4, 1, 238, 2, // Skip to: 2141
/* 1391 */    MCD::OPC_Decode, 182, 1, 31, // Opcode: CVT_D64_W
/* 1395 */    MCD::OPC_FilterValue, 160, 5, 229, 2, // Skip to: 2141
/* 1400 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1403 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1415
/* 1407 */    MCD::OPC_CheckPredicate, 19, 218, 2, // Skip to: 2141
/* 1411 */    MCD::OPC_Decode, 187, 1, 93, // Opcode: CVT_S_L
/* 1415 */    MCD::OPC_FilterValue, 1, 210, 2, // Skip to: 2141
/* 1419 */    MCD::OPC_CheckPredicate, 19, 206, 2, // Skip to: 2141
/* 1423 */    MCD::OPC_Decode, 180, 1, 38, // Opcode: CVT_D64_L
/* 1427 */    MCD::OPC_FilterValue, 3, 198, 2, // Skip to: 2141
/* 1431 */    MCD::OPC_CheckPredicate, 19, 194, 2, // Skip to: 2141
/* 1435 */    MCD::OPC_CheckField, 21, 5, 17, 188, 2, // Skip to: 2141
/* 1441 */    MCD::OPC_CheckField, 6, 5, 0, 182, 2, // Skip to: 2141
/* 1447 */    MCD::OPC_Decode, 158, 2, 97, // Opcode: FCMP_D64
/* 1451 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1494
/* 1455 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1458 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1476
/* 1462 */    MCD::OPC_CheckPredicate, 0, 163, 2, // Skip to: 2141
/* 1466 */    MCD::OPC_CheckField, 3, 8, 0, 157, 2, // Skip to: 2141
/* 1472 */    MCD::OPC_Decode, 208, 1, 90, // Opcode: DMFC2_3OP64
/* 1476 */    MCD::OPC_FilterValue, 5, 149, 2, // Skip to: 2141
/* 1480 */    MCD::OPC_CheckPredicate, 0, 145, 2, // Skip to: 2141
/* 1484 */    MCD::OPC_CheckField, 3, 8, 0, 139, 2, // Skip to: 2141
/* 1490 */    MCD::OPC_Decode, 211, 1, 91, // Opcode: DMTC2_3OP64
/* 1494 */    MCD::OPC_FilterValue, 19, 75, 0, // Skip to: 1573
/* 1498 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1501 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1519
/* 1505 */    MCD::OPC_CheckPredicate, 20, 120, 2, // Skip to: 2141
/* 1509 */    MCD::OPC_CheckField, 11, 5, 0, 114, 2, // Skip to: 2141
/* 1515 */    MCD::OPC_Decode, 216, 2, 98, // Opcode: LDXC164
/* 1519 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1537
/* 1523 */    MCD::OPC_CheckPredicate, 17, 102, 2, // Skip to: 2141
/* 1527 */    MCD::OPC_CheckField, 11, 5, 0, 96, 2, // Skip to: 2141
/* 1533 */    MCD::OPC_Decode, 235, 2, 98, // Opcode: LUXC164
/* 1537 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1555
/* 1541 */    MCD::OPC_CheckPredicate, 20, 84, 2, // Skip to: 2141
/* 1545 */    MCD::OPC_CheckField, 6, 5, 0, 78, 2, // Skip to: 2141
/* 1551 */    MCD::OPC_Decode, 190, 4, 99, // Opcode: SDXC164
/* 1555 */    MCD::OPC_FilterValue, 13, 70, 2, // Skip to: 2141
/* 1559 */    MCD::OPC_CheckPredicate, 17, 66, 2, // Skip to: 2141
/* 1563 */    MCD::OPC_CheckField, 6, 5, 0, 60, 2, // Skip to: 2141
/* 1569 */    MCD::OPC_Decode, 131, 5, 99, // Opcode: SUXC164
/* 1573 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1585
/* 1577 */    MCD::OPC_CheckPredicate, 0, 48, 2, // Skip to: 2141
/* 1581 */    MCD::OPC_Decode, 194, 1, 88, // Opcode: DADDi
/* 1585 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 1597
/* 1589 */    MCD::OPC_CheckPredicate, 0, 36, 2, // Skip to: 2141
/* 1593 */    MCD::OPC_Decode, 195, 1, 88, // Opcode: DADDiu
/* 1597 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 1609
/* 1601 */    MCD::OPC_CheckPredicate, 15, 24, 2, // Skip to: 2141
/* 1605 */    MCD::OPC_Decode, 211, 2, 73, // Opcode: LDL
/* 1609 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 1621
/* 1613 */    MCD::OPC_CheckPredicate, 15, 12, 2, // Skip to: 2141
/* 1617 */    MCD::OPC_Decode, 213, 2, 73, // Opcode: LDR
/* 1621 */    MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 1652
/* 1625 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1628 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1640
/* 1632 */    MCD::OPC_CheckPredicate, 11, 249, 1, // Skip to: 2141
/* 1636 */    MCD::OPC_Decode, 199, 1, 100, // Opcode: DCLZ
/* 1640 */    MCD::OPC_FilterValue, 37, 241, 1, // Skip to: 2141
/* 1644 */    MCD::OPC_CheckPredicate, 11, 237, 1, // Skip to: 2141
/* 1648 */    MCD::OPC_Decode, 198, 1, 100, // Opcode: DCLO
/* 1652 */    MCD::OPC_FilterValue, 31, 185, 0, // Skip to: 1841
/* 1656 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1659 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1671
/* 1663 */    MCD::OPC_CheckPredicate, 1, 218, 1, // Skip to: 2141
/* 1667 */    MCD::OPC_Decode, 201, 1, 101, // Opcode: DEXTM
/* 1671 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1683
/* 1675 */    MCD::OPC_CheckPredicate, 1, 206, 1, // Skip to: 2141
/* 1679 */    MCD::OPC_Decode, 202, 1, 101, // Opcode: DEXTU
/* 1683 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1695
/* 1687 */    MCD::OPC_CheckPredicate, 1, 194, 1, // Skip to: 2141
/* 1691 */    MCD::OPC_Decode, 200, 1, 101, // Opcode: DEXT
/* 1695 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1707
/* 1699 */    MCD::OPC_CheckPredicate, 1, 182, 1, // Skip to: 2141
/* 1703 */    MCD::OPC_Decode, 204, 1, 102, // Opcode: DINSM
/* 1707 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1719
/* 1711 */    MCD::OPC_CheckPredicate, 1, 170, 1, // Skip to: 2141
/* 1715 */    MCD::OPC_Decode, 205, 1, 102, // Opcode: DINSU
/* 1719 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1731
/* 1723 */    MCD::OPC_CheckPredicate, 1, 158, 1, // Skip to: 2141
/* 1727 */    MCD::OPC_Decode, 203, 1, 102, // Opcode: DINS
/* 1731 */    MCD::OPC_FilterValue, 32, 39, 0, // Skip to: 1774
/* 1735 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1738 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 1756
/* 1742 */    MCD::OPC_CheckPredicate, 14, 139, 1, // Skip to: 2141
/* 1746 */    MCD::OPC_CheckField, 21, 5, 0, 133, 1, // Skip to: 2141
/* 1752 */    MCD::OPC_Decode, 194, 4, 103, // Opcode: SEB64
/* 1756 */    MCD::OPC_FilterValue, 24, 125, 1, // Skip to: 2141
/* 1760 */    MCD::OPC_CheckPredicate, 14, 121, 1, // Skip to: 2141
/* 1764 */    MCD::OPC_CheckField, 21, 5, 0, 115, 1, // Skip to: 2141
/* 1770 */    MCD::OPC_Decode, 196, 4, 103, // Opcode: SEH64
/* 1774 */    MCD::OPC_FilterValue, 36, 39, 0, // Skip to: 1817
/* 1778 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1781 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1799
/* 1785 */    MCD::OPC_CheckPredicate, 13, 96, 1, // Skip to: 2141
/* 1789 */    MCD::OPC_CheckField, 21, 5, 0, 90, 1, // Skip to: 2141
/* 1795 */    MCD::OPC_Decode, 248, 1, 103, // Opcode: DSBH
/* 1799 */    MCD::OPC_FilterValue, 5, 82, 1, // Skip to: 2141
/* 1803 */    MCD::OPC_CheckPredicate, 13, 78, 1, // Skip to: 2141
/* 1807 */    MCD::OPC_CheckField, 21, 5, 0, 72, 1, // Skip to: 2141
/* 1813 */    MCD::OPC_Decode, 250, 1, 103, // Opcode: DSHD
/* 1817 */    MCD::OPC_FilterValue, 59, 64, 1, // Skip to: 2141
/* 1821 */    MCD::OPC_CheckPredicate, 0, 60, 1, // Skip to: 2141
/* 1825 */    MCD::OPC_CheckField, 21, 5, 0, 54, 1, // Skip to: 2141
/* 1831 */    MCD::OPC_CheckField, 6, 5, 0, 48, 1, // Skip to: 2141
/* 1837 */    MCD::OPC_Decode, 155, 4, 104, // Opcode: RDHWR64
/* 1841 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 1853
/* 1845 */    MCD::OPC_CheckPredicate, 15, 36, 1, // Skip to: 2141
/* 1849 */    MCD::OPC_Decode, 199, 2, 73, // Opcode: LB64
/* 1853 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 1865
/* 1857 */    MCD::OPC_CheckPredicate, 15, 24, 1, // Skip to: 2141
/* 1861 */    MCD::OPC_Decode, 222, 2, 73, // Opcode: LH64
/* 1865 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 1877
/* 1869 */    MCD::OPC_CheckPredicate, 15, 12, 1, // Skip to: 2141
/* 1873 */    MCD::OPC_Decode, 244, 2, 73, // Opcode: LWL64
/* 1877 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 1889
/* 1881 */    MCD::OPC_CheckPredicate, 15, 0, 1, // Skip to: 2141
/* 1885 */    MCD::OPC_Decode, 239, 2, 73, // Opcode: LW64
/* 1889 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1901
/* 1893 */    MCD::OPC_CheckPredicate, 15, 244, 0, // Skip to: 2141
/* 1897 */    MCD::OPC_Decode, 204, 2, 73, // Opcode: LBu64
/* 1901 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1913
/* 1905 */    MCD::OPC_CheckPredicate, 15, 232, 0, // Skip to: 2141
/* 1909 */    MCD::OPC_Decode, 227, 2, 73, // Opcode: LHu64
/* 1913 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 1925
/* 1917 */    MCD::OPC_CheckPredicate, 15, 220, 0, // Skip to: 2141
/* 1921 */    MCD::OPC_Decode, 248, 2, 73, // Opcode: LWR64
/* 1925 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 1937
/* 1929 */    MCD::OPC_CheckPredicate, 15, 208, 0, // Skip to: 2141
/* 1933 */    MCD::OPC_Decode, 255, 2, 73, // Opcode: LWu64
/* 1937 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 1949
/* 1941 */    MCD::OPC_CheckPredicate, 15, 196, 0, // Skip to: 2141
/* 1945 */    MCD::OPC_Decode, 173, 4, 73, // Opcode: SB64
/* 1949 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 1961
/* 1953 */    MCD::OPC_CheckPredicate, 15, 184, 0, // Skip to: 2141
/* 1957 */    MCD::OPC_Decode, 198, 4, 73, // Opcode: SH64
/* 1961 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 1973
/* 1965 */    MCD::OPC_CheckPredicate, 15, 172, 0, // Skip to: 2141
/* 1969 */    MCD::OPC_Decode, 138, 5, 73, // Opcode: SWL64
/* 1973 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 1985
/* 1977 */    MCD::OPC_CheckPredicate, 15, 160, 0, // Skip to: 2141
/* 1981 */    MCD::OPC_Decode, 133, 5, 73, // Opcode: SW64
/* 1985 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1997
/* 1989 */    MCD::OPC_CheckPredicate, 15, 148, 0, // Skip to: 2141
/* 1993 */    MCD::OPC_Decode, 185, 4, 73, // Opcode: SDL
/* 1997 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 2009
/* 2001 */    MCD::OPC_CheckPredicate, 15, 136, 0, // Skip to: 2141
/* 2005 */    MCD::OPC_Decode, 187, 4, 73, // Opcode: SDR
/* 2009 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 2021
/* 2013 */    MCD::OPC_CheckPredicate, 15, 124, 0, // Skip to: 2141
/* 2017 */    MCD::OPC_Decode, 142, 5, 73, // Opcode: SWR64
/* 2021 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2033
/* 2025 */    MCD::OPC_CheckPredicate, 21, 112, 0, // Skip to: 2141
/* 2029 */    MCD::OPC_Decode, 233, 2, 73, // Opcode: LL_P8
/* 2033 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2045
/* 2037 */    MCD::OPC_CheckPredicate, 21, 100, 0, // Skip to: 2141
/* 2041 */    MCD::OPC_Decode, 242, 2, 74, // Opcode: LWC1_P8
/* 2045 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 2057
/* 2049 */    MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 2141
/* 2053 */    MCD::OPC_Decode, 231, 2, 73, // Opcode: LLD
/* 2057 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 2069
/* 2061 */    MCD::OPC_CheckPredicate, 22, 76, 0, // Skip to: 2141
/* 2065 */    MCD::OPC_Decode, 209, 2, 74, // Opcode: LDC164
/* 2069 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 2081
/* 2073 */    MCD::OPC_CheckPredicate, 15, 64, 0, // Skip to: 2141
/* 2077 */    MCD::OPC_Decode, 207, 2, 73, // Opcode: LD
/* 2081 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2093
/* 2085 */    MCD::OPC_CheckPredicate, 21, 52, 0, // Skip to: 2141
/* 2089 */    MCD::OPC_Decode, 179, 4, 73, // Opcode: SC_P8
/* 2093 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 2105
/* 2097 */    MCD::OPC_CheckPredicate, 21, 40, 0, // Skip to: 2141
/* 2101 */    MCD::OPC_Decode, 136, 5, 74, // Opcode: SWC1_P8
/* 2105 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 2117
/* 2109 */    MCD::OPC_CheckPredicate, 15, 28, 0, // Skip to: 2141
/* 2113 */    MCD::OPC_Decode, 177, 4, 73, // Opcode: SCD
/* 2117 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 2129
/* 2121 */    MCD::OPC_CheckPredicate, 22, 16, 0, // Skip to: 2141
/* 2125 */    MCD::OPC_Decode, 182, 4, 74, // Opcode: SDC164
/* 2129 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 2141
/* 2133 */    MCD::OPC_CheckPredicate, 15, 4, 0, // Skip to: 2141
/* 2137 */    MCD::OPC_Decode, 180, 4, 73, // Opcode: SD
/* 2141 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (!(Bits & Mips::FeatureMips16));
  case 1:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips16));
  case 2:
    return ((Bits & Mips::FeatureDSP));
  case 3:
    return ((Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 4:
    return (!(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 5:
    return ((Bits & Mips::FeatureFPIdx) && !(Bits & Mips::FeatureMips16));
  case 6:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 7:
    return (!(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 8:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 9:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 10:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 11:
    return ((Bits & Mips::FeatureBitCount) && !(Bits & Mips::FeatureMips16));
  case 12:
    return ((Bits & Mips::FeatureDSPR2));
  case 13:
    return ((Bits & Mips::FeatureSwap) && !(Bits & Mips::FeatureMips16));
  case 14:
    return ((Bits & Mips::FeatureSEInReg) && !(Bits & Mips::FeatureMips16));
  case 15:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 16:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 17:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 18:
    return ((Bits & Mips::FeatureMips64r2) && !(Bits & Mips::FeatureMips16));
  case 19:
    return ((Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 20:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 21:
    return ((Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 22:
    return (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    if (DecodeBC1(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegs64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
