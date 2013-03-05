/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * XCore Disassembler                                                       *|
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

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 0, 108, 0, // Skip to: 115
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 236, 15, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 212, 1, 0, // Opcode: WAITEU_0R
/* 19 */      MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 27
/* 24 */      MCD::OPC_Decode, 47, 0, // Opcode: CLRE_0R
/* 27 */      MCD::OPC_FilterValue, 238, 15, 4, 0, // Skip to: 36
/* 32 */      MCD::OPC_Decode, 189, 1, 0, // Opcode: SSYNC_0r
/* 36 */      MCD::OPC_FilterValue, 239, 15, 3, 0, // Skip to: 44
/* 41 */      MCD::OPC_Decode, 75, 0, // Opcode: FREET_0R
/* 44 */      MCD::OPC_FilterValue, 252, 15, 3, 0, // Skip to: 52
/* 49 */      MCD::OPC_Decode, 56, 0, // Opcode: DCALL_0R
/* 52 */      MCD::OPC_FilterValue, 253, 15, 3, 0, // Skip to: 60
/* 57 */      MCD::OPC_Decode, 98, 0, // Opcode: KRET_0R
/* 60 */      MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 68
/* 65 */      MCD::OPC_Decode, 62, 0, // Opcode: DRET_0R
/* 68 */      MCD::OPC_FilterValue, 255, 15, 4, 0, // Skip to: 77
/* 73 */      MCD::OPC_Decode, 170, 1, 0, // Opcode: SETKEP_0R
/* 77 */      MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 80 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 87
/* 84 */      MCD::OPC_Decode, 65, 1, // Opcode: EDU_1r
/* 87 */      MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 94
/* 91 */      MCD::OPC_Decode, 66, 1, // Opcode: EEU_1r
/* 94 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 97 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 104
/* 101 */     MCD::OPC_Decode, 91, 2, // Opcode: INITPC_2r
/* 104 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 111
/* 108 */     MCD::OPC_Decode, 85, 2, // Opcode: GETST_2r
/* 111 */     MCD::OPC_Decode, 201, 1, 3, // Opcode: STW_2rus
/* 115 */     MCD::OPC_FilterValue, 1, 112, 0, // Skip to: 231
/* 119 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 122 */     MCD::OPC_FilterValue, 236, 15, 3, 0, // Skip to: 130
/* 127 */     MCD::OPC_Decode, 125, 0, // Opcode: LDSPC_0R
/* 130 */     MCD::OPC_FilterValue, 237, 15, 4, 0, // Skip to: 139
/* 135 */     MCD::OPC_Decode, 194, 1, 0, // Opcode: STSPC_0R
/* 139 */     MCD::OPC_FilterValue, 238, 15, 3, 0, // Skip to: 147
/* 144 */     MCD::OPC_Decode, 126, 0, // Opcode: LDSSR_0R
/* 147 */     MCD::OPC_FilterValue, 239, 15, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 195, 1, 0, // Opcode: STSSR_0R
/* 156 */     MCD::OPC_FilterValue, 252, 15, 4, 0, // Skip to: 165
/* 161 */     MCD::OPC_Decode, 193, 1, 0, // Opcode: STSED_0R
/* 165 */     MCD::OPC_FilterValue, 253, 15, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 192, 1, 0, // Opcode: STET_0R
/* 174 */     MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 182
/* 179 */     MCD::OPC_Decode, 77, 0, // Opcode: GETED_0R
/* 182 */     MCD::OPC_FilterValue, 255, 15, 3, 0, // Skip to: 190
/* 187 */     MCD::OPC_Decode, 78, 0, // Opcode: GETET_0R
/* 190 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 193 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 201
/* 197 */     MCD::OPC_Decode, 211, 1, 1, // Opcode: WAITET_1R
/* 201 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 209
/* 205 */     MCD::OPC_Decode, 210, 1, 1, // Opcode: WAITEF_1R
/* 209 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 212 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 219
/* 216 */     MCD::OPC_Decode, 89, 2, // Opcode: INITDP_2r
/* 219 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 227
/* 223 */     MCD::OPC_Decode, 154, 1, 4, // Opcode: OUTT_2r
/* 227 */     MCD::OPC_Decode, 134, 1, 3, // Opcode: LDW_2rus
/* 231 */     MCD::OPC_FilterValue, 2, 98, 0, // Skip to: 333
/* 235 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 238 */     MCD::OPC_FilterValue, 236, 15, 3, 0, // Skip to: 246
/* 243 */     MCD::OPC_Decode, 57, 0, // Opcode: DENTSP_0R
/* 246 */     MCD::OPC_FilterValue, 237, 15, 3, 0, // Skip to: 254
/* 251 */     MCD::OPC_Decode, 61, 0, // Opcode: DRESTSP_0R
/* 254 */     MCD::OPC_FilterValue, 238, 15, 3, 0, // Skip to: 262
/* 259 */     MCD::OPC_Decode, 79, 0, // Opcode: GETID_0R
/* 262 */     MCD::OPC_FilterValue, 239, 15, 3, 0, // Skip to: 270
/* 267 */     MCD::OPC_Decode, 80, 0, // Opcode: GETKEP_0R
/* 270 */     MCD::OPC_FilterValue, 252, 15, 3, 0, // Skip to: 278
/* 275 */     MCD::OPC_Decode, 81, 0, // Opcode: GETKSP_0R
/* 278 */     MCD::OPC_FilterValue, 253, 15, 3, 0, // Skip to: 286
/* 283 */     MCD::OPC_Decode, 124, 0, // Opcode: LDSED_0R
/* 286 */     MCD::OPC_FilterValue, 254, 15, 3, 0, // Skip to: 294
/* 291 */     MCD::OPC_Decode, 122, 0, // Opcode: LDET_0R
/* 294 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 297 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 304
/* 301 */     MCD::OPC_Decode, 74, 1, // Opcode: FREER_1r
/* 304 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 312
/* 308 */     MCD::OPC_Decode, 142, 1, 1, // Opcode: MJOIN_1r
/* 312 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 315 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 322
/* 319 */     MCD::OPC_Decode, 92, 2, // Opcode: INITSP_2r
/* 322 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 168, 1, 4, // Opcode: SETD_2r
/* 330 */     MCD::OPC_Decode, 18, 5, // Opcode: ADD_3r
/* 333 */     MCD::OPC_FilterValue, 3, 32, 0, // Skip to: 369
/* 337 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 340 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 348
/* 344 */     MCD::OPC_Decode, 209, 1, 1, // Opcode: TSTART_1R
/* 348 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 356
/* 352 */     MCD::OPC_Decode, 145, 1, 1, // Opcode: MSYNC_1r
/* 356 */     MCD::OPC_CheckField, 4, 1, 0, 3, 0, // Skip to: 365
/* 362 */     MCD::OPC_Decode, 88, 2, // Opcode: INITCP_2r
/* 365 */     MCD::OPC_Decode, 204, 1, 5, // Opcode: SUB_3r
/* 369 */     MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 394
/* 373 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 376 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 383
/* 380 */     MCD::OPC_Decode, 27, 1, // Opcode: BLA_1r
/* 383 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 390
/* 387 */     MCD::OPC_Decode, 25, 1, // Opcode: BAU_1r
/* 390 */     MCD::OPC_Decode, 186, 1, 5, // Opcode: SHL_3r
/* 394 */     MCD::OPC_FilterValue, 5, 23, 0, // Skip to: 421
/* 398 */     MCD::OPC_CheckField, 4, 7, 127, 4, 0, // Skip to: 408
/* 404 */     MCD::OPC_Decode, 176, 1, 1, // Opcode: SETSP_1r
/* 408 */     MCD::OPC_CheckField, 4, 1, 0, 3, 0, // Skip to: 417
/* 414 */     MCD::OPC_Decode, 21, 6, // Opcode: ANDNOT_2r
/* 417 */     MCD::OPC_Decode, 188, 1, 5, // Opcode: SHR_3r
/* 421 */     MCD::OPC_FilterValue, 6, 41, 0, // Skip to: 466
/* 425 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 428 */     MCD::OPC_FilterValue, 126, 4, 0, // Skip to: 436
/* 432 */     MCD::OPC_Decode, 167, 1, 1, // Opcode: SETDP_1r
/* 436 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 444
/* 440 */     MCD::OPC_Decode, 163, 1, 1, // Opcode: SETCP_1r
/* 444 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 447 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 183, 1, 6, // Opcode: SEXT_2r
/* 455 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 184, 1, 7, // Opcode: SEXT_rus
/* 463 */     MCD::OPC_Decode, 71, 5, // Opcode: EQ_3r
/* 466 */     MCD::OPC_FilterValue, 7, 39, 0, // Skip to: 509
/* 470 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 473 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 480
/* 477 */     MCD::OPC_Decode, 58, 1, // Opcode: DGETREG_1r
/* 480 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 488
/* 484 */     MCD::OPC_Decode, 169, 1, 1, // Opcode: SETEV_1r
/* 488 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 491 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 498
/* 495 */     MCD::OPC_Decode, 86, 2, // Opcode: GETTS_2r
/* 498 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 174, 1, 4, // Opcode: SETPT_2r
/* 506 */     MCD::OPC_Decode, 22, 5, // Opcode: AND_3r
/* 509 */     MCD::OPC_FilterValue, 8, 41, 0, // Skip to: 554
/* 513 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 516 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 523
/* 520 */     MCD::OPC_Decode, 97, 1, // Opcode: KCALL_1r
/* 523 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 531
/* 527 */     MCD::OPC_Decode, 182, 1, 1, // Opcode: SETV_1r
/* 531 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 534 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 542
/* 538 */     MCD::OPC_Decode, 214, 1, 6, // Opcode: ZEXT_2r
/* 542 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 550
/* 546 */     MCD::OPC_Decode, 215, 1, 7, // Opcode: ZEXT_rus
/* 550 */     MCD::OPC_Decode, 149, 1, 5, // Opcode: OR_3r
/* 554 */     MCD::OPC_FilterValue, 9, 40, 0, // Skip to: 598
/* 558 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 561 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 568
/* 565 */     MCD::OPC_Decode, 63, 1, // Opcode: ECALLF_1r
/* 568 */     MCD::OPC_FilterValue, 127, 3, 0, // Skip to: 575
/* 572 */     MCD::OPC_Decode, 64, 1, // Opcode: ECALLT_1r
/* 575 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 578 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 150, 1, 2, // Opcode: OUTCT_2r
/* 586 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 594
/* 590 */     MCD::OPC_Decode, 151, 1, 8, // Opcode: OUTCT_rus
/* 594 */     MCD::OPC_Decode, 135, 1, 5, // Opcode: LDW_3r
/* 598 */     MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 621
/* 602 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 605 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 613
/* 609 */     MCD::OPC_Decode, 197, 1, 9, // Opcode: STWDP_ru6
/* 613 */     MCD::OPC_FilterValue, 1, 217, 1, // Skip to: 1090
/* 617 */     MCD::OPC_Decode, 200, 1, 10, // Opcode: STWSP_ru6
/* 621 */     MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 644
/* 625 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 628 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 636
/* 632 */     MCD::OPC_Decode, 130, 1, 9, // Opcode: LDWDP_ru6
/* 636 */     MCD::OPC_FilterValue, 1, 194, 1, // Skip to: 1090
/* 640 */     MCD::OPC_Decode, 133, 1, 10, // Opcode: LDWSP_ru6
/* 644 */     MCD::OPC_FilterValue, 12, 17, 0, // Skip to: 665
/* 648 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 651 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 658
/* 655 */     MCD::OPC_Decode, 112, 9, // Opcode: LDAWDP_ru6
/* 658 */     MCD::OPC_FilterValue, 1, 172, 1, // Skip to: 1090
/* 662 */     MCD::OPC_Decode, 118, 10, // Opcode: LDAWSP_ru6
/* 665 */     MCD::OPC_FilterValue, 13, 18, 0, // Skip to: 687
/* 669 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 672 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 679
/* 676 */     MCD::OPC_Decode, 121, 10, // Opcode: LDC_ru6
/* 679 */     MCD::OPC_FilterValue, 1, 151, 1, // Skip to: 1090
/* 683 */     MCD::OPC_Decode, 128, 1, 10, // Opcode: LDWCP_ru6
/* 687 */     MCD::OPC_FilterValue, 14, 58, 0, // Skip to: 749
/* 691 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 694 */     MCD::OPC_FilterValue, 0, 12, 0, // Skip to: 710
/* 698 */     MCD::OPC_CheckField, 6, 4, 12, 3, 0, // Skip to: 707
/* 704 */     MCD::OPC_Decode, 41, 11, // Opcode: BRFU_u6
/* 707 */     MCD::OPC_Decode, 39, 10, // Opcode: BRFT_ru6
/* 710 */     MCD::OPC_FilterValue, 1, 120, 1, // Skip to: 1090
/* 714 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 717 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 724
/* 721 */     MCD::OPC_Decode, 35, 11, // Opcode: BRBU_u6
/* 724 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 731
/* 728 */     MCD::OPC_Decode, 69, 11, // Opcode: ENTSP_u6
/* 731 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 738
/* 735 */     MCD::OPC_Decode, 73, 11, // Opcode: EXTSP_u6
/* 738 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 746
/* 742 */     MCD::OPC_Decode, 160, 1, 11, // Opcode: RETSP_u6
/* 746 */     MCD::OPC_Decode, 33, 10, // Opcode: BRBT_ru6
/* 749 */     MCD::OPC_FilterValue, 15, 44, 0, // Skip to: 797
/* 753 */     MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 756 */     MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 781
/* 760 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 763 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 770
/* 767 */     MCD::OPC_Decode, 52, 11, // Opcode: CLRSR_u6
/* 770 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 778
/* 774 */     MCD::OPC_Decode, 180, 1, 11, // Opcode: SETSR_u6
/* 778 */     MCD::OPC_Decode, 37, 10, // Opcode: BRFF_ru6
/* 781 */     MCD::OPC_FilterValue, 1, 49, 1, // Skip to: 1090
/* 785 */     MCD::OPC_CheckField, 6, 4, 13, 3, 0, // Skip to: 794
/* 791 */     MCD::OPC_Decode, 110, 12, // Opcode: LDAWCP_u6
/* 794 */     MCD::OPC_Decode, 31, 10, // Opcode: BRBF_ru6
/* 797 */     MCD::OPC_FilterValue, 16, 38, 0, // Skip to: 839
/* 801 */     MCD::OPC_ExtractField, 4, 7,  // Inst{10-4} ...
/* 804 */     MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 811
/* 808 */     MCD::OPC_Decode, 48, 1, // Opcode: CLRPT_1R
/* 811 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 819
/* 815 */     MCD::OPC_Decode, 205, 1, 1, // Opcode: SYNCR_1r
/* 819 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 822 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 829
/* 826 */     MCD::OPC_Decode, 84, 8, // Opcode: GETR_rus
/* 829 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 836
/* 833 */     MCD::OPC_Decode, 87, 2, // Opcode: INCT_2r
/* 836 */     MCD::OPC_Decode, 100, 5, // Opcode: LD16S_3r
/* 839 */     MCD::OPC_FilterValue, 17, 21, 0, // Skip to: 864
/* 843 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 846 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 854
/* 850 */     MCD::OPC_Decode, 148, 1, 2, // Opcode: NOT
/* 854 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 861
/* 858 */     MCD::OPC_Decode, 95, 2, // Opcode: INT_2r
/* 861 */     MCD::OPC_Decode, 101, 5, // Opcode: LD8U_3r
/* 864 */     MCD::OPC_FilterValue, 18, 21, 0, // Skip to: 889
/* 868 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 871 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 879
/* 875 */     MCD::OPC_Decode, 147, 1, 2, // Opcode: NEG
/* 879 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 886
/* 883 */     MCD::OPC_Decode, 67, 2, // Opcode: ENDIN_2r
/* 886 */     MCD::OPC_Decode, 17, 3, // Opcode: ADD_2rus
/* 889 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 897
/* 893 */     MCD::OPC_Decode, 203, 1, 3, // Opcode: SUB_2rus
/* 897 */     MCD::OPC_FilterValue, 20, 23, 0, // Skip to: 924
/* 901 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 904 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 912
/* 908 */     MCD::OPC_Decode, 143, 1, 2, // Opcode: MKMSK_2r
/* 912 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 920
/* 916 */     MCD::OPC_Decode, 144, 1, 13, // Opcode: MKMSK_rus
/* 920 */     MCD::OPC_Decode, 185, 1, 14, // Opcode: SHL_2rus
/* 924 */     MCD::OPC_FilterValue, 21, 23, 0, // Skip to: 951
/* 928 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 931 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 939
/* 935 */     MCD::OPC_Decode, 155, 1, 4, // Opcode: OUT_2r
/* 939 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 947
/* 943 */     MCD::OPC_Decode, 153, 1, 6, // Opcode: OUTSHR_2r
/* 947 */     MCD::OPC_Decode, 187, 1, 14, // Opcode: SHR_2rus
/* 951 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 975
/* 955 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 958 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 965
/* 962 */     MCD::OPC_Decode, 96, 2, // Opcode: IN_2r
/* 965 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 972
/* 969 */     MCD::OPC_Decode, 94, 6, // Opcode: INSHR_2r
/* 972 */     MCD::OPC_Decode, 70, 3, // Opcode: EQ_2rus
/* 975 */     MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 998
/* 979 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 982 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 990
/* 986 */     MCD::OPC_Decode, 156, 1, 2, // Opcode: PEEK_2r
/* 990 */     MCD::OPC_FilterValue, 1, 96, 0, // Skip to: 1090
/* 994 */     MCD::OPC_Decode, 206, 1, 2, // Opcode: TESTCT_2r
/* 998 */     MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1025
/* 1002 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1005 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1013
/* 1009 */    MCD::OPC_Decode, 172, 1, 4, // Opcode: SETPSC_2r
/* 1013 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1021
/* 1017 */    MCD::OPC_Decode, 208, 1, 2, // Opcode: TESTWCT_2r
/* 1021 */    MCD::OPC_Decode, 137, 1, 5, // Opcode: LSS_3r
/* 1025 */    MCD::OPC_FilterValue, 25, 21, 0, // Skip to: 1050
/* 1029 */    MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 1032 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1039
/* 1036 */    MCD::OPC_Decode, 45, 2, // Opcode: CHKCT_2r
/* 1039 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 1046
/* 1043 */    MCD::OPC_Decode, 46, 13, // Opcode: CHKCT_rus
/* 1046 */    MCD::OPC_Decode, 139, 1, 5, // Opcode: LSU_3r
/* 1050 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1063
/* 1054 */    MCD::OPC_CheckField, 10, 1, 0, 30, 0, // Skip to: 1090
/* 1060 */    MCD::OPC_Decode, 29, 15, // Opcode: BLRF_u10
/* 1063 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1076
/* 1067 */    MCD::OPC_CheckField, 10, 1, 0, 17, 0, // Skip to: 1090
/* 1073 */    MCD::OPC_Decode, 106, 15, // Opcode: LDAPF_u10
/* 1076 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1090
/* 1080 */    MCD::OPC_CheckField, 10, 1, 0, 4, 0, // Skip to: 1090
/* 1086 */    MCD::OPC_Decode, 166, 1, 10, // Opcode: SETC_ru6
/* 1090 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 3 */       MCD::OPC_FilterValue, 0, 88, 0, // Skip to: 95
/* 7 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 10 */      MCD::OPC_FilterValue, 31, 96, 3, // Skip to: 878
/* 14 */      MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 17 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 31
/* 21 */      MCD::OPC_CheckField, 16, 11, 236, 15, 17, 0, // Skip to: 45
/* 28 */      MCD::OPC_Decode, 26, 16, // Opcode: BITREV_l2r
/* 31 */      MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 45
/* 35 */      MCD::OPC_CheckField, 16, 11, 236, 15, 3, 0, // Skip to: 45
/* 42 */      MCD::OPC_Decode, 44, 16, // Opcode: BYTEREV_l2r
/* 45 */      MCD::OPC_CheckField, 16, 11, 236, 15, 4, 0, // Skip to: 56
/* 52 */      MCD::OPC_Decode, 202, 1, 17, // Opcode: STW_l3r
/* 56 */      MCD::OPC_ExtractField, 20, 7,  // Inst{26-20} ...
/* 59 */      MCD::OPC_FilterValue, 126, 3, 0, // Skip to: 66
/* 63 */      MCD::OPC_Decode, 54, 18, // Opcode: CRC8_l4r
/* 66 */      MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 141, 1, 19, // Opcode: MACCU_l4r
/* 74 */      MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 77 */      MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 84
/* 81 */      MCD::OPC_Decode, 123, 20, // Opcode: LDIVU_l5r
/* 84 */      MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 91
/* 88 */      MCD::OPC_Decode, 99, 20, // Opcode: LADD_l5r
/* 91 */      MCD::OPC_Decode, 136, 1, 21, // Opcode: LMUL_l6r
/* 95 */      MCD::OPC_FilterValue, 1, 86, 0, // Skip to: 185
/* 99 */      MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 102 */     MCD::OPC_FilterValue, 31, 4, 3, // Skip to: 878
/* 106 */     MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 109 */     MCD::OPC_FilterValue, 0, 253, 2, // Skip to: 878
/* 113 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 116 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 135
/* 120 */     MCD::OPC_CheckField, 21, 6, 63, 29, 0, // Skip to: 155
/* 126 */     MCD::OPC_CheckField, 16, 4, 12, 23, 0, // Skip to: 155
/* 132 */     MCD::OPC_Decode, 53, 16, // Opcode: CLZ_l2r
/* 135 */     MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 155
/* 139 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 155
/* 145 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 155
/* 151 */     MCD::OPC_Decode, 162, 1, 22, // Opcode: SETCLK_l2r
/* 155 */     MCD::OPC_CheckField, 21, 6, 63, 10, 0, // Skip to: 171
/* 161 */     MCD::OPC_CheckField, 16, 4, 12, 4, 0, // Skip to: 171
/* 167 */     MCD::OPC_Decode, 213, 1, 17, // Opcode: XOR_l3r
/* 171 */     MCD::OPC_CheckField, 21, 6, 63, 4, 0, // Skip to: 181
/* 177 */     MCD::OPC_Decode, 140, 1, 19, // Opcode: MACCS_l4r
/* 181 */     MCD::OPC_Decode, 138, 1, 20, // Opcode: LSUB_l5r
/* 185 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 218
/* 189 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 192 */     MCD::OPC_FilterValue, 159, 251, 3, 168, 2, // Skip to: 878
/* 198 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 201 */     MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 208
/* 205 */     MCD::OPC_Decode, 90, 16, // Opcode: INITLR_l2r
/* 208 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 215
/* 212 */     MCD::OPC_Decode, 83, 16, // Opcode: GETPS_l2r
/* 215 */     MCD::OPC_Decode, 24, 17, // Opcode: ASHR_l3r
/* 218 */     MCD::OPC_FilterValue, 3, 30, 0, // Skip to: 252
/* 222 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 225 */     MCD::OPC_FilterValue, 159, 251, 3, 135, 2, // Skip to: 878
/* 231 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 234 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 242
/* 238 */     MCD::OPC_Decode, 173, 1, 22, // Opcode: SETPS_l2r
/* 242 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 249
/* 246 */     MCD::OPC_Decode, 76, 16, // Opcode: GETD_l2r
/* 249 */     MCD::OPC_Decode, 115, 17, // Opcode: LDAWF_l3r
/* 252 */     MCD::OPC_FilterValue, 4, 31, 0, // Skip to: 287
/* 256 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 259 */     MCD::OPC_FilterValue, 159, 251, 3, 101, 2, // Skip to: 878
/* 265 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 268 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 276
/* 272 */     MCD::OPC_Decode, 207, 1, 16, // Opcode: TESTLCL_l2r
/* 276 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 284
/* 280 */     MCD::OPC_Decode, 181, 1, 22, // Opcode: SETTW_l2r
/* 284 */     MCD::OPC_Decode, 108, 17, // Opcode: LDAWB_l3r
/* 287 */     MCD::OPC_FilterValue, 5, 31, 0, // Skip to: 322
/* 291 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 294 */     MCD::OPC_FilterValue, 159, 251, 3, 66, 2, // Skip to: 878
/* 300 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 303 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 311
/* 307 */     MCD::OPC_Decode, 175, 1, 22, // Opcode: SETRDY_l2r
/* 311 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 164, 1, 16, // Opcode: SETC_l2r
/* 319 */     MCD::OPC_Decode, 103, 17, // Opcode: LDA16F_l3r
/* 322 */     MCD::OPC_FilterValue, 6, 30, 0, // Skip to: 356
/* 326 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 329 */     MCD::OPC_FilterValue, 159, 251, 3, 31, 2, // Skip to: 878
/* 335 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 338 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 171, 1, 22, // Opcode: SETN_l2r
/* 346 */     MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 353
/* 350 */     MCD::OPC_Decode, 82, 16, // Opcode: GETN_l2r
/* 353 */     MCD::OPC_Decode, 102, 17, // Opcode: LDA16B_l3r
/* 356 */     MCD::OPC_FilterValue, 7, 12, 0, // Skip to: 372
/* 360 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 254, 1, // Skip to: 878
/* 368 */     MCD::OPC_Decode, 146, 1, 17, // Opcode: MUL_l3r
/* 372 */     MCD::OPC_FilterValue, 8, 11, 0, // Skip to: 387
/* 376 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 238, 1, // Skip to: 878
/* 384 */     MCD::OPC_Decode, 59, 17, // Opcode: DIVS_l3r
/* 387 */     MCD::OPC_FilterValue, 9, 11, 0, // Skip to: 402
/* 391 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 223, 1, // Skip to: 878
/* 399 */     MCD::OPC_Decode, 60, 17, // Opcode: DIVU_l3r
/* 402 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 437
/* 406 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 409 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 423
/* 413 */     MCD::OPC_CheckField, 10, 6, 60, 203, 1, // Skip to: 878
/* 419 */     MCD::OPC_Decode, 196, 1, 23, // Opcode: STWDP_lru6
/* 423 */     MCD::OPC_FilterValue, 1, 195, 1, // Skip to: 878
/* 427 */     MCD::OPC_CheckField, 10, 6, 60, 189, 1, // Skip to: 878
/* 433 */     MCD::OPC_Decode, 199, 1, 24, // Opcode: STWSP_lru6
/* 437 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 472
/* 441 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 444 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 458
/* 448 */     MCD::OPC_CheckField, 10, 6, 60, 168, 1, // Skip to: 878
/* 454 */     MCD::OPC_Decode, 129, 1, 23, // Opcode: LDWDP_lru6
/* 458 */     MCD::OPC_FilterValue, 1, 160, 1, // Skip to: 878
/* 462 */     MCD::OPC_CheckField, 10, 6, 60, 154, 1, // Skip to: 878
/* 468 */     MCD::OPC_Decode, 132, 1, 24, // Opcode: LDWSP_lru6
/* 472 */     MCD::OPC_FilterValue, 12, 29, 0, // Skip to: 505
/* 476 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 479 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 492
/* 483 */     MCD::OPC_CheckField, 10, 6, 60, 133, 1, // Skip to: 878
/* 489 */     MCD::OPC_Decode, 111, 23, // Opcode: LDAWDP_lru6
/* 492 */     MCD::OPC_FilterValue, 1, 126, 1, // Skip to: 878
/* 496 */     MCD::OPC_CheckField, 10, 6, 60, 120, 1, // Skip to: 878
/* 502 */     MCD::OPC_Decode, 116, 24, // Opcode: LDAWSP_lru6
/* 505 */     MCD::OPC_FilterValue, 13, 29, 0, // Skip to: 538
/* 509 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 512 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 525
/* 516 */     MCD::OPC_CheckField, 10, 6, 60, 100, 1, // Skip to: 878
/* 522 */     MCD::OPC_Decode, 120, 24, // Opcode: LDC_lru6
/* 525 */     MCD::OPC_FilterValue, 1, 93, 1, // Skip to: 878
/* 529 */     MCD::OPC_CheckField, 10, 6, 60, 87, 1, // Skip to: 878
/* 535 */     MCD::OPC_Decode, 127, 24, // Opcode: LDWCP_lru6
/* 538 */     MCD::OPC_FilterValue, 14, 72, 0, // Skip to: 614
/* 542 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 545 */     MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 568
/* 549 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 552 */     MCD::OPC_FilterValue, 60, 66, 1, // Skip to: 878
/* 556 */     MCD::OPC_CheckField, 22, 4, 12, 3, 0, // Skip to: 565
/* 562 */     MCD::OPC_Decode, 40, 25, // Opcode: BRFU_lu6
/* 565 */     MCD::OPC_Decode, 38, 24, // Opcode: BRFT_lru6
/* 568 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 878
/* 572 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 575 */     MCD::OPC_FilterValue, 60, 43, 1, // Skip to: 878
/* 579 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 582 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 589
/* 586 */     MCD::OPC_Decode, 34, 25, // Opcode: BRBU_lu6
/* 589 */     MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 596
/* 593 */     MCD::OPC_Decode, 68, 25, // Opcode: ENTSP_lu6
/* 596 */     MCD::OPC_FilterValue, 14, 3, 0, // Skip to: 603
/* 600 */     MCD::OPC_Decode, 72, 25, // Opcode: EXTSP_lu6
/* 603 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 611
/* 607 */     MCD::OPC_Decode, 159, 1, 25, // Opcode: RETSP_lu6
/* 611 */     MCD::OPC_Decode, 32, 24, // Opcode: BRBT_lru6
/* 614 */     MCD::OPC_FilterValue, 15, 58, 0, // Skip to: 676
/* 618 */     MCD::OPC_ExtractField, 26, 1,  // Inst{26} ...
/* 621 */     MCD::OPC_FilterValue, 0, 28, 0, // Skip to: 653
/* 625 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 628 */     MCD::OPC_FilterValue, 60, 246, 0, // Skip to: 878
/* 632 */     MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 635 */     MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 642
/* 639 */     MCD::OPC_Decode, 51, 25, // Opcode: CLRSR_lu6
/* 642 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 179, 1, 25, // Opcode: SETSR_lu6
/* 650 */     MCD::OPC_Decode, 36, 24, // Opcode: BRFF_lru6
/* 653 */     MCD::OPC_FilterValue, 1, 221, 0, // Skip to: 878
/* 657 */     MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 660 */     MCD::OPC_FilterValue, 60, 214, 0, // Skip to: 878
/* 664 */     MCD::OPC_CheckField, 22, 4, 13, 3, 0, // Skip to: 673
/* 670 */     MCD::OPC_Decode, 109, 26, // Opcode: LDAWCP_lu6
/* 673 */     MCD::OPC_Decode, 30, 24, // Opcode: BRBF_lru6
/* 676 */     MCD::OPC_FilterValue, 16, 12, 0, // Skip to: 692
/* 680 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 190, 0, // Skip to: 878
/* 688 */     MCD::OPC_Decode, 190, 1, 17, // Opcode: ST16_l3r
/* 692 */     MCD::OPC_FilterValue, 17, 12, 0, // Skip to: 708
/* 696 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 174, 0, // Skip to: 878
/* 704 */     MCD::OPC_Decode, 191, 1, 17, // Opcode: ST8_l3r
/* 708 */     MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 743
/* 712 */     MCD::OPC_ExtractField, 11, 16,  // Inst{26-11} ...
/* 715 */     MCD::OPC_FilterValue, 159, 251, 3, 3, 0, // Skip to: 724
/* 721 */     MCD::OPC_Decode, 23, 27, // Opcode: ASHR_l2rus
/* 724 */     MCD::OPC_FilterValue, 191, 251, 3, 4, 0, // Skip to: 734
/* 730 */     MCD::OPC_Decode, 152, 1, 27, // Opcode: OUTPW_l2rus
/* 734 */     MCD::OPC_FilterValue, 223, 251, 3, 138, 0, // Skip to: 878
/* 740 */     MCD::OPC_Decode, 93, 27, // Opcode: INPW_l2rus
/* 743 */     MCD::OPC_FilterValue, 19, 11, 0, // Skip to: 758
/* 747 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 123, 0, // Skip to: 878
/* 755 */     MCD::OPC_Decode, 114, 28, // Opcode: LDAWF_l2rus
/* 758 */     MCD::OPC_FilterValue, 20, 11, 0, // Skip to: 773
/* 762 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 108, 0, // Skip to: 878
/* 770 */     MCD::OPC_Decode, 107, 28, // Opcode: LDAWB_l2rus
/* 773 */     MCD::OPC_FilterValue, 21, 11, 0, // Skip to: 788
/* 777 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 93, 0, // Skip to: 878
/* 785 */     MCD::OPC_Decode, 55, 29, // Opcode: CRC_l3r
/* 788 */     MCD::OPC_FilterValue, 24, 12, 0, // Skip to: 804
/* 792 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 78, 0, // Skip to: 878
/* 800 */     MCD::OPC_Decode, 157, 1, 17, // Opcode: REMS_l3r
/* 804 */     MCD::OPC_FilterValue, 25, 12, 0, // Skip to: 820
/* 808 */     MCD::OPC_CheckField, 11, 16, 159, 251, 3, 62, 0, // Skip to: 878
/* 816 */     MCD::OPC_Decode, 158, 1, 17, // Opcode: REMU_l3r
/* 820 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 839
/* 824 */     MCD::OPC_CheckField, 26, 1, 0, 48, 0, // Skip to: 878
/* 830 */     MCD::OPC_CheckField, 10, 6, 60, 42, 0, // Skip to: 878
/* 836 */     MCD::OPC_Decode, 28, 30, // Opcode: BLRF_lu10
/* 839 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 858
/* 843 */     MCD::OPC_CheckField, 26, 1, 0, 29, 0, // Skip to: 878
/* 849 */     MCD::OPC_CheckField, 10, 6, 60, 23, 0, // Skip to: 878
/* 855 */     MCD::OPC_Decode, 104, 30, // Opcode: LDAPF_lu10
/* 858 */     MCD::OPC_FilterValue, 29, 16, 0, // Skip to: 878
/* 862 */     MCD::OPC_CheckField, 26, 1, 0, 10, 0, // Skip to: 878
/* 868 */     MCD::OPC_CheckField, 10, 6, 60, 4, 0, // Skip to: 878
/* 874 */     MCD::OPC_Decode, 165, 1, 24, // Opcode: SETC_lru6
/* 878 */     MCD::OPC_Fail,
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
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    if (Decode2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    if (Decode2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    if (DecodeR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    if (Decode3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    if (Decode2RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    if (DecodeRUSSrcDstBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    if (DecodeRUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeMEMiiOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 6, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 0, 6);
    if (DecodeMEMiiOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    if (DecodeRUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    if (Decode2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 16:
    if (DecodeL2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    if (DecodeL3RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    if (DecodeL4RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    if (DecodeL4RSrcDstSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    if (DecodeL5RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    if (DecodeL6RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    if (DecodeLR2RInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    if (DecodeMEMiiOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 22, 4);
    if (DecodeGRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 25:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 26:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 6);
    tmp |= (fieldFromInstruction(insn, 16, 6) << 0);
    if (DecodeMEMiiOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    if (DecodeL2RUSBitpInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    if (DecodeL2RUSInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    if (DecodeL3RSrcDstInstruction(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 10) << 10);
    tmp |= (fieldFromInstruction(insn, 16, 10) << 0);
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
