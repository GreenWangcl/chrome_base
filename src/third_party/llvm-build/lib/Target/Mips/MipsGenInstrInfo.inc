/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    ABSQ_S_PH	= 17,
    ABSQ_S_QB	= 18,
    ABSQ_S_W	= 19,
    ADD	= 20,
    ADDQH_PH	= 21,
    ADDQH_R_PH	= 22,
    ADDQH_R_W	= 23,
    ADDQH_W	= 24,
    ADDQ_PH	= 25,
    ADDQ_S_PH	= 26,
    ADDQ_S_W	= 27,
    ADDSC	= 28,
    ADDUH_QB	= 29,
    ADDUH_R_QB	= 30,
    ADDU_PH	= 31,
    ADDU_QB	= 32,
    ADDU_S_PH	= 33,
    ADDU_S_QB	= 34,
    ADDWC	= 35,
    ADDi	= 36,
    ADDiu	= 37,
    ADDu	= 38,
    ADJCALLSTACKDOWN	= 39,
    ADJCALLSTACKUP	= 40,
    AND	= 41,
    AND64	= 42,
    ANDi	= 43,
    APPEND	= 44,
    ATOMIC_CMP_SWAP_I16	= 45,
    ATOMIC_CMP_SWAP_I16_P8	= 46,
    ATOMIC_CMP_SWAP_I32	= 47,
    ATOMIC_CMP_SWAP_I32_P8	= 48,
    ATOMIC_CMP_SWAP_I64	= 49,
    ATOMIC_CMP_SWAP_I64_P8	= 50,
    ATOMIC_CMP_SWAP_I8	= 51,
    ATOMIC_CMP_SWAP_I8_P8	= 52,
    ATOMIC_LOAD_ADD_I16	= 53,
    ATOMIC_LOAD_ADD_I16_P8	= 54,
    ATOMIC_LOAD_ADD_I32	= 55,
    ATOMIC_LOAD_ADD_I32_P8	= 56,
    ATOMIC_LOAD_ADD_I64	= 57,
    ATOMIC_LOAD_ADD_I64_P8	= 58,
    ATOMIC_LOAD_ADD_I8	= 59,
    ATOMIC_LOAD_ADD_I8_P8	= 60,
    ATOMIC_LOAD_AND_I16	= 61,
    ATOMIC_LOAD_AND_I16_P8	= 62,
    ATOMIC_LOAD_AND_I32	= 63,
    ATOMIC_LOAD_AND_I32_P8	= 64,
    ATOMIC_LOAD_AND_I64	= 65,
    ATOMIC_LOAD_AND_I64_P8	= 66,
    ATOMIC_LOAD_AND_I8	= 67,
    ATOMIC_LOAD_AND_I8_P8	= 68,
    ATOMIC_LOAD_NAND_I16	= 69,
    ATOMIC_LOAD_NAND_I16_P8	= 70,
    ATOMIC_LOAD_NAND_I32	= 71,
    ATOMIC_LOAD_NAND_I32_P8	= 72,
    ATOMIC_LOAD_NAND_I64	= 73,
    ATOMIC_LOAD_NAND_I64_P8	= 74,
    ATOMIC_LOAD_NAND_I8	= 75,
    ATOMIC_LOAD_NAND_I8_P8	= 76,
    ATOMIC_LOAD_OR_I16	= 77,
    ATOMIC_LOAD_OR_I16_P8	= 78,
    ATOMIC_LOAD_OR_I32	= 79,
    ATOMIC_LOAD_OR_I32_P8	= 80,
    ATOMIC_LOAD_OR_I64	= 81,
    ATOMIC_LOAD_OR_I64_P8	= 82,
    ATOMIC_LOAD_OR_I8	= 83,
    ATOMIC_LOAD_OR_I8_P8	= 84,
    ATOMIC_LOAD_SUB_I16	= 85,
    ATOMIC_LOAD_SUB_I16_P8	= 86,
    ATOMIC_LOAD_SUB_I32	= 87,
    ATOMIC_LOAD_SUB_I32_P8	= 88,
    ATOMIC_LOAD_SUB_I64	= 89,
    ATOMIC_LOAD_SUB_I64_P8	= 90,
    ATOMIC_LOAD_SUB_I8	= 91,
    ATOMIC_LOAD_SUB_I8_P8	= 92,
    ATOMIC_LOAD_XOR_I16	= 93,
    ATOMIC_LOAD_XOR_I16_P8	= 94,
    ATOMIC_LOAD_XOR_I32	= 95,
    ATOMIC_LOAD_XOR_I32_P8	= 96,
    ATOMIC_LOAD_XOR_I64	= 97,
    ATOMIC_LOAD_XOR_I64_P8	= 98,
    ATOMIC_LOAD_XOR_I8	= 99,
    ATOMIC_LOAD_XOR_I8_P8	= 100,
    ATOMIC_SWAP_I16	= 101,
    ATOMIC_SWAP_I16_P8	= 102,
    ATOMIC_SWAP_I32	= 103,
    ATOMIC_SWAP_I32_P8	= 104,
    ATOMIC_SWAP_I64	= 105,
    ATOMIC_SWAP_I64_P8	= 106,
    ATOMIC_SWAP_I8	= 107,
    ATOMIC_SWAP_I8_P8	= 108,
    AddiuRxImmX16	= 109,
    AddiuRxPcImmX16	= 110,
    AddiuRxRxImm16	= 111,
    AddiuRxRxImmX16	= 112,
    AddiuRxRyOffMemX16	= 113,
    AddiuSpImmX16	= 114,
    AdduRxRyRz16	= 115,
    AndRxRxRy16	= 116,
    B	= 117,
    BALIGN	= 118,
    BAL_BR	= 119,
    BC1F	= 120,
    BC1T	= 121,
    BEQ	= 122,
    BEQ64	= 123,
    BGEZ	= 124,
    BGEZ64	= 125,
    BGEZAL	= 126,
    BGTZ	= 127,
    BGTZ64	= 128,
    BITREV	= 129,
    BLEZ	= 130,
    BLEZ64	= 131,
    BLTZ	= 132,
    BLTZ64	= 133,
    BLTZAL	= 134,
    BNE	= 135,
    BNE64	= 136,
    BPOSGE32	= 137,
    BPOSGE32_PSEUDO	= 138,
    BeqzRxImmX16	= 139,
    BimmX16	= 140,
    BnezRxImmX16	= 141,
    BteqzT8CmpX16	= 142,
    BteqzT8CmpiX16	= 143,
    BteqzT8SltX16	= 144,
    BteqzT8SltiX16	= 145,
    BteqzT8SltiuX16	= 146,
    BteqzT8SltuX16	= 147,
    BteqzX16	= 148,
    BtnezT8CmpX16	= 149,
    BtnezT8CmpiX16	= 150,
    BtnezT8SltX16	= 151,
    BtnezT8SltiX16	= 152,
    BtnezT8SltiuX16	= 153,
    BtnezT8SltuX16	= 154,
    BtnezX16	= 155,
    BuildPairF64	= 156,
    CEIL_L_D64	= 157,
    CEIL_L_S	= 158,
    CEIL_W_D32	= 159,
    CEIL_W_D64	= 160,
    CEIL_W_S	= 161,
    CFC1	= 162,
    CLO	= 163,
    CLZ	= 164,
    CMPGDU_EQ_QB	= 165,
    CMPGDU_LE_QB	= 166,
    CMPGDU_LT_QB	= 167,
    CMPGU_EQ_QB	= 168,
    CMPGU_LE_QB	= 169,
    CMPGU_LT_QB	= 170,
    CMPU_EQ_QB	= 171,
    CMPU_LE_QB	= 172,
    CMPU_LT_QB	= 173,
    CMP_EQ_PH	= 174,
    CMP_LE_PH	= 175,
    CMP_LT_PH	= 176,
    CTC1	= 177,
    CVT_D32_S	= 178,
    CVT_D32_W	= 179,
    CVT_D64_L	= 180,
    CVT_D64_S	= 181,
    CVT_D64_W	= 182,
    CVT_L_D64	= 183,
    CVT_L_S	= 184,
    CVT_S_D32	= 185,
    CVT_S_D64	= 186,
    CVT_S_L	= 187,
    CVT_S_W	= 188,
    CVT_W_D32	= 189,
    CVT_W_D64	= 190,
    CVT_W_S	= 191,
    Constant32	= 192,
    DADD	= 193,
    DADDi	= 194,
    DADDiu	= 195,
    DADDu	= 196,
    DANDi	= 197,
    DCLO	= 198,
    DCLZ	= 199,
    DEXT	= 200,
    DEXTM	= 201,
    DEXTU	= 202,
    DINS	= 203,
    DINSM	= 204,
    DINSU	= 205,
    DMFC0_3OP64	= 206,
    DMFC1	= 207,
    DMFC2_3OP64	= 208,
    DMTC0_3OP64	= 209,
    DMTC1	= 210,
    DMTC2_3OP64	= 211,
    DMULT	= 212,
    DMULTu	= 213,
    DPAQX_SA_W_PH	= 214,
    DPAQX_SA_W_PH_PSEUDO	= 215,
    DPAQX_S_W_PH	= 216,
    DPAQX_S_W_PH_PSEUDO	= 217,
    DPAQ_SA_L_W	= 218,
    DPAQ_SA_L_W_PSEUDO	= 219,
    DPAQ_S_W_PH	= 220,
    DPAQ_S_W_PH_PSEUDO	= 221,
    DPAU_H_QBL	= 222,
    DPAU_H_QBL_PSEUDO	= 223,
    DPAU_H_QBR	= 224,
    DPAU_H_QBR_PSEUDO	= 225,
    DPAX_W_PH	= 226,
    DPAX_W_PH_PSEUDO	= 227,
    DPA_W_PH	= 228,
    DPA_W_PH_PSEUDO	= 229,
    DPSQX_SA_W_PH	= 230,
    DPSQX_SA_W_PH_PSEUDO	= 231,
    DPSQX_S_W_PH	= 232,
    DPSQX_S_W_PH_PSEUDO	= 233,
    DPSQ_SA_L_W	= 234,
    DPSQ_SA_L_W_PSEUDO	= 235,
    DPSQ_S_W_PH	= 236,
    DPSQ_S_W_PH_PSEUDO	= 237,
    DPSU_H_QBL	= 238,
    DPSU_H_QBL_PSEUDO	= 239,
    DPSU_H_QBR	= 240,
    DPSU_H_QBR_PSEUDO	= 241,
    DPSX_W_PH	= 242,
    DPSX_W_PH_PSEUDO	= 243,
    DPS_W_PH	= 244,
    DPS_W_PH_PSEUDO	= 245,
    DROTR	= 246,
    DROTRV	= 247,
    DSBH	= 248,
    DSDIV	= 249,
    DSHD	= 250,
    DSLL	= 251,
    DSLL32	= 252,
    DSLL64_32	= 253,
    DSLLV	= 254,
    DSRA	= 255,
    DSRA32	= 256,
    DSRAV	= 257,
    DSRL	= 258,
    DSRL32	= 259,
    DSRLV	= 260,
    DSUBu	= 261,
    DUDIV	= 262,
    DivRxRy16	= 263,
    DivuRxRy16	= 264,
    EXT	= 265,
    EXTP	= 266,
    EXTPDP	= 267,
    EXTPDPV	= 268,
    EXTPV	= 269,
    EXTRV_RS_W	= 270,
    EXTRV_R_W	= 271,
    EXTRV_S_H	= 272,
    EXTRV_W	= 273,
    EXTR_RS_W	= 274,
    EXTR_R_W	= 275,
    EXTR_S_H	= 276,
    EXTR_W	= 277,
    ExtractElementF64	= 278,
    FABS_D32	= 279,
    FABS_D64	= 280,
    FABS_S	= 281,
    FADD_D32	= 282,
    FADD_D64	= 283,
    FADD_S	= 284,
    FCMP_D32	= 285,
    FCMP_D64	= 286,
    FCMP_S32	= 287,
    FDIV_D32	= 288,
    FDIV_D64	= 289,
    FDIV_S	= 290,
    FLOOR_L_D64	= 291,
    FLOOR_L_S	= 292,
    FLOOR_W_D32	= 293,
    FLOOR_W_D64	= 294,
    FLOOR_W_S	= 295,
    FMOV_D32	= 296,
    FMOV_D64	= 297,
    FMOV_S	= 298,
    FMUL_D32	= 299,
    FMUL_D64	= 300,
    FMUL_S	= 301,
    FNEG_D32	= 302,
    FNEG_D64	= 303,
    FNEG_S	= 304,
    FSQRT_D32	= 305,
    FSQRT_D64	= 306,
    FSQRT_S	= 307,
    FSUB_D32	= 308,
    FSUB_D64	= 309,
    FSUB_S	= 310,
    INS	= 311,
    INSV	= 312,
    J	= 313,
    JAL	= 314,
    JALR	= 315,
    JALR64	= 316,
    JALR64Pseudo	= 317,
    JALRPseudo	= 318,
    JR	= 319,
    JR64	= 320,
    Jal16	= 321,
    JrRa16	= 322,
    JrcRa16	= 323,
    JrcRx16	= 324,
    JumpLinkReg16	= 325,
    LB	= 326,
    LB64	= 327,
    LB64_P8	= 328,
    LBUX	= 329,
    LB_P8	= 330,
    LBu	= 331,
    LBu64	= 332,
    LBu64_P8	= 333,
    LBu_P8	= 334,
    LD	= 335,
    LDC1	= 336,
    LDC164	= 337,
    LDC164_P8	= 338,
    LDL	= 339,
    LDL_P8	= 340,
    LDR	= 341,
    LDR_P8	= 342,
    LDXC1	= 343,
    LDXC164	= 344,
    LDXC164_P8	= 345,
    LD_P8	= 346,
    LEA_ADDiu	= 347,
    LEA_ADDiu64	= 348,
    LH	= 349,
    LH64	= 350,
    LH64_P8	= 351,
    LHX	= 352,
    LH_P8	= 353,
    LHu	= 354,
    LHu64	= 355,
    LHu64_P8	= 356,
    LHu_P8	= 357,
    LL	= 358,
    LLD	= 359,
    LLD_P8	= 360,
    LL_P8	= 361,
    LUXC1	= 362,
    LUXC164	= 363,
    LUi	= 364,
    LUi64	= 365,
    LW	= 366,
    LW64	= 367,
    LW64_P8	= 368,
    LWC1	= 369,
    LWC1_P8	= 370,
    LWL	= 371,
    LWL64	= 372,
    LWL64_P8	= 373,
    LWL_P8	= 374,
    LWR	= 375,
    LWR64	= 376,
    LWR64_P8	= 377,
    LWR_P8	= 378,
    LWX	= 379,
    LWXC1	= 380,
    LWXC1_P8	= 381,
    LW_P8	= 382,
    LWu64	= 383,
    LWu64_P8	= 384,
    LbRxRyOffMemX16	= 385,
    LbuRxRyOffMemX16	= 386,
    LhRxRyOffMemX16	= 387,
    LhuRxRyOffMemX16	= 388,
    LiRxImmX16	= 389,
    LoadAddr32Imm	= 390,
    LoadAddr32Reg	= 391,
    LoadImm32Reg	= 392,
    LwConstant32	= 393,
    LwRxRyOffMemX16	= 394,
    LwRxSpImmX16	= 395,
    MADD	= 396,
    MADDU	= 397,
    MADDU_DSP	= 398,
    MADDU_DSP_PSEUDO	= 399,
    MADD_D32	= 400,
    MADD_D64	= 401,
    MADD_DSP	= 402,
    MADD_DSP_PSEUDO	= 403,
    MADD_S	= 404,
    MAQ_SA_W_PHL	= 405,
    MAQ_SA_W_PHL_PSEUDO	= 406,
    MAQ_SA_W_PHR	= 407,
    MAQ_SA_W_PHR_PSEUDO	= 408,
    MAQ_S_W_PHL	= 409,
    MAQ_S_W_PHL_PSEUDO	= 410,
    MAQ_S_W_PHR	= 411,
    MAQ_S_W_PHR_PSEUDO	= 412,
    MFC0_3OP	= 413,
    MFC1	= 414,
    MFC2_3OP	= 415,
    MFHI	= 416,
    MFHI64	= 417,
    MFLO	= 418,
    MFLO64	= 419,
    MIPSeh_return32	= 420,
    MIPSeh_return64	= 421,
    MODSUB	= 422,
    MOVCCRToCCR	= 423,
    MOVF_D32	= 424,
    MOVF_D64	= 425,
    MOVF_I	= 426,
    MOVF_I64	= 427,
    MOVF_S	= 428,
    MOVN_I64_D64	= 429,
    MOVN_I64_I	= 430,
    MOVN_I64_I64	= 431,
    MOVN_I64_S	= 432,
    MOVN_I_D32	= 433,
    MOVN_I_D64	= 434,
    MOVN_I_I	= 435,
    MOVN_I_I64	= 436,
    MOVN_I_S	= 437,
    MOVT_D32	= 438,
    MOVT_D64	= 439,
    MOVT_I	= 440,
    MOVT_I64	= 441,
    MOVT_S	= 442,
    MOVZ_I64_D64	= 443,
    MOVZ_I64_I	= 444,
    MOVZ_I64_I64	= 445,
    MOVZ_I64_S	= 446,
    MOVZ_I_D32	= 447,
    MOVZ_I_D64	= 448,
    MOVZ_I_I	= 449,
    MOVZ_I_I64	= 450,
    MOVZ_I_S	= 451,
    MSUB	= 452,
    MSUBU	= 453,
    MSUBU_DSP	= 454,
    MSUBU_DSP_PSEUDO	= 455,
    MSUB_D32	= 456,
    MSUB_D64	= 457,
    MSUB_DSP	= 458,
    MSUB_DSP_PSEUDO	= 459,
    MSUB_S	= 460,
    MTC0_3OP	= 461,
    MTC1	= 462,
    MTC2_3OP	= 463,
    MTHI	= 464,
    MTHI64	= 465,
    MTHLIP	= 466,
    MTHLIP_PSEUDO	= 467,
    MTLO	= 468,
    MTLO64	= 469,
    MUL	= 470,
    MULEQ_S_W_PHL	= 471,
    MULEQ_S_W_PHR	= 472,
    MULEU_S_PH_QBL	= 473,
    MULEU_S_PH_QBR	= 474,
    MULQ_RS_PH	= 475,
    MULQ_RS_W	= 476,
    MULQ_S_PH	= 477,
    MULQ_S_W	= 478,
    MULSAQ_S_W_PH	= 479,
    MULSAQ_S_W_PH_PSEUDO	= 480,
    MULSA_W_PH	= 481,
    MULSA_W_PH_PSEUDO	= 482,
    MULT	= 483,
    MULTU_DSP	= 484,
    MULTU_DSP_PSEUDO	= 485,
    MULT_DSP	= 486,
    MULT_DSP_PSEUDO	= 487,
    MULTu	= 488,
    MUL_PH	= 489,
    MUL_S_PH	= 490,
    Mfhi16	= 491,
    Mflo16	= 492,
    Move32R16	= 493,
    MoveR3216	= 494,
    MultRxRy16	= 495,
    MultRxRyRz16	= 496,
    MultuRxRy16	= 497,
    MultuRxRyRz16	= 498,
    NMADD_D32	= 499,
    NMADD_D64	= 500,
    NMADD_S	= 501,
    NMSUB_D32	= 502,
    NMSUB_D64	= 503,
    NMSUB_S	= 504,
    NOP	= 505,
    NOR	= 506,
    NOR64	= 507,
    NegRxRy16	= 508,
    NotRxRy16	= 509,
    OR	= 510,
    OR64	= 511,
    ORi	= 512,
    ORi64	= 513,
    OrRxRxRy16	= 514,
    PACKRL_PH	= 515,
    PICK_PH	= 516,
    PICK_QB	= 517,
    PRECEQU_PH_QBL	= 518,
    PRECEQU_PH_QBLA	= 519,
    PRECEQU_PH_QBR	= 520,
    PRECEQU_PH_QBRA	= 521,
    PRECEQ_W_PHL	= 522,
    PRECEQ_W_PHR	= 523,
    PRECEU_PH_QBL	= 524,
    PRECEU_PH_QBLA	= 525,
    PRECEU_PH_QBR	= 526,
    PRECEU_PH_QBRA	= 527,
    PRECRQU_S_QB_PH	= 528,
    PRECRQ_PH_W	= 529,
    PRECRQ_QB_PH	= 530,
    PRECRQ_RS_PH_W	= 531,
    PRECR_QB_PH	= 532,
    PRECR_SRA_PH_W	= 533,
    PRECR_SRA_R_PH_W	= 534,
    PREPEND	= 535,
    RADDU_W_QB	= 536,
    RDDSP	= 537,
    RDHWR	= 538,
    RDHWR64	= 539,
    REPLV_PH	= 540,
    REPLV_QB	= 541,
    REPL_PH	= 542,
    REPL_QB	= 543,
    RET	= 544,
    ROTR	= 545,
    ROTRV	= 546,
    ROUND_L_D64	= 547,
    ROUND_L_S	= 548,
    ROUND_W_D32	= 549,
    ROUND_W_D64	= 550,
    ROUND_W_S	= 551,
    RestoreIncSpF16	= 552,
    RestoreRaF16	= 553,
    RetRA	= 554,
    RetRA16	= 555,
    SB	= 556,
    SB64	= 557,
    SB64_P8	= 558,
    SB_P8	= 559,
    SC	= 560,
    SCD	= 561,
    SCD_P8	= 562,
    SC_P8	= 563,
    SD	= 564,
    SDC1	= 565,
    SDC164	= 566,
    SDC164_P8	= 567,
    SDIV	= 568,
    SDL	= 569,
    SDL_P8	= 570,
    SDR	= 571,
    SDR_P8	= 572,
    SDXC1	= 573,
    SDXC164	= 574,
    SDXC164_P8	= 575,
    SD_P8	= 576,
    SEB	= 577,
    SEB64	= 578,
    SEH	= 579,
    SEH64	= 580,
    SH	= 581,
    SH64	= 582,
    SH64_P8	= 583,
    SHILO	= 584,
    SHILOV	= 585,
    SHILOV_PSEUDO	= 586,
    SHILO_PSEUDO	= 587,
    SHLLV_PH	= 588,
    SHLLV_QB	= 589,
    SHLLV_S_PH	= 590,
    SHLLV_S_W	= 591,
    SHLL_PH	= 592,
    SHLL_QB	= 593,
    SHLL_S_PH	= 594,
    SHLL_S_W	= 595,
    SHRAV_PH	= 596,
    SHRAV_QB	= 597,
    SHRAV_R_PH	= 598,
    SHRAV_R_QB	= 599,
    SHRAV_R_W	= 600,
    SHRA_PH	= 601,
    SHRA_QB	= 602,
    SHRA_R_PH	= 603,
    SHRA_R_QB	= 604,
    SHRA_R_W	= 605,
    SHRLV_PH	= 606,
    SHRLV_QB	= 607,
    SHRL_PH	= 608,
    SHRL_QB	= 609,
    SH_P8	= 610,
    SLL	= 611,
    SLL64_32	= 612,
    SLL64_64	= 613,
    SLLV	= 614,
    SLT	= 615,
    SLT64	= 616,
    SLTi	= 617,
    SLTi64	= 618,
    SLTiu	= 619,
    SLTiu64	= 620,
    SLTu	= 621,
    SLTu64	= 622,
    SRA	= 623,
    SRAV	= 624,
    SRL	= 625,
    SRLV	= 626,
    SUB	= 627,
    SUBQH_PH	= 628,
    SUBQH_R_PH	= 629,
    SUBQH_R_W	= 630,
    SUBQH_W	= 631,
    SUBQ_PH	= 632,
    SUBQ_S_PH	= 633,
    SUBQ_S_W	= 634,
    SUBUH_QB	= 635,
    SUBUH_R_QB	= 636,
    SUBU_PH	= 637,
    SUBU_QB	= 638,
    SUBU_S_PH	= 639,
    SUBU_S_QB	= 640,
    SUBu	= 641,
    SUXC1	= 642,
    SUXC164	= 643,
    SW	= 644,
    SW64	= 645,
    SW64_P8	= 646,
    SWC1	= 647,
    SWC1_P8	= 648,
    SWL	= 649,
    SWL64	= 650,
    SWL64_P8	= 651,
    SWL_P8	= 652,
    SWR	= 653,
    SWR64	= 654,
    SWR64_P8	= 655,
    SWR_P8	= 656,
    SWXC1	= 657,
    SWXC1_P8	= 658,
    SW_P8	= 659,
    SYNC	= 660,
    SaveDecSpF16	= 661,
    SaveRaF16	= 662,
    SbRxRyOffMemX16	= 663,
    SelBeqZ	= 664,
    SelBneZ	= 665,
    SelTBteqZCmp	= 666,
    SelTBteqZCmpi	= 667,
    SelTBteqZSlt	= 668,
    SelTBteqZSlti	= 669,
    SelTBteqZSltiu	= 670,
    SelTBteqZSltu	= 671,
    SelTBtneZCmp	= 672,
    SelTBtneZCmpi	= 673,
    SelTBtneZSlt	= 674,
    SelTBtneZSlti	= 675,
    SelTBtneZSltiu	= 676,
    SelTBtneZSltu	= 677,
    ShRxRyOffMemX16	= 678,
    SllX16	= 679,
    SllvRxRy16	= 680,
    SltCCRxRy16	= 681,
    SltRxRy16	= 682,
    SltiCCRxImmX16	= 683,
    SltiuCCRxImmX16	= 684,
    SltuCCRxRy16	= 685,
    SltuRxRyRz16	= 686,
    SraX16	= 687,
    SravRxRy16	= 688,
    SrlX16	= 689,
    SrlvRxRy16	= 690,
    SubuRxRyRz16	= 691,
    SwRxRyOffMemX16	= 692,
    SwRxSpImmX16	= 693,
    TAILCALL	= 694,
    TAILCALL64_R	= 695,
    TAILCALL_R	= 696,
    TRUNC_L_D64	= 697,
    TRUNC_L_S	= 698,
    TRUNC_W_D32	= 699,
    TRUNC_W_D64	= 700,
    TRUNC_W_S	= 701,
    UDIV	= 702,
    WRDSP	= 703,
    WSBH	= 704,
    XOR	= 705,
    XOR64	= 706,
    XORi	= 707,
    XORi64	= 708,
    XorRxRxRy16	= 709,
    INSTRUCTION_LIST_END = 710
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { Mips::DSPCtrl, 0 };
static const uint16_t ImplicitList2[] = { Mips::SP, 0 };
static const uint16_t ImplicitList3[] = { Mips::AT, 0 };
static const uint16_t ImplicitList4[] = { Mips::RA, 0 };
static const uint16_t ImplicitList5[] = { Mips::FCR31, 0 };
static const uint16_t ImplicitList6[] = { Mips::HI64, Mips::LO64, 0 };
static const uint16_t ImplicitList7[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCtrl, Mips::AC0, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI, Mips::LO, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI, 0 };
static const uint16_t ImplicitList11[] = { Mips::HI64, 0 };
static const uint16_t ImplicitList12[] = { Mips::LO, 0 };
static const uint16_t ImplicitList13[] = { Mips::LO64, 0 };
static const uint16_t ImplicitList14[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList15[] = { Mips::S0, Mips::S1, Mips::RA, Mips::SP, 0 };
static const uint16_t ImplicitList16[] = { Mips::RA, Mips::SP, Mips::S0, Mips::S1, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegs64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #16 = LIFETIME_END
  { 17,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ABSQ_S_PH
  { 18,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ABSQ_S_QB
  { 19,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #19 = ABSQ_S_W
  { 20,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD
  { 21,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADDQH_PH
  { 22,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #22 = ADDQH_R_PH
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #23 = ADDQH_R_W
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #24 = ADDQH_W
  { 25,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #25 = ADDQ_PH
  { 26,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #26 = ADDQ_S_PH
  { 27,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #27 = ADDQ_S_W
  { 28,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #28 = ADDSC
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #29 = ADDUH_QB
  { 30,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDUH_R_QB
  { 31,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #31 = ADDU_PH
  { 32,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #32 = ADDU_QB
  { 33,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #33 = ADDU_S_PH
  { 34,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #34 = ADDU_S_QB
  { 35,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #35 = ADDWC
  { 36,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #36 = ADDi
  { 37,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #37 = ADDiu
  { 38,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #38 = ADDu
  { 39,	1,	0,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #39 = ADJCALLSTACKDOWN
  { 40,	2,	0,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo14 },  // Inst #40 = ADJCALLSTACKUP
  { 41,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #41 = AND
  { 42,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #42 = AND64
  { 43,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #43 = ANDi
  { 44,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #44 = APPEND
  { 45,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #45 = ATOMIC_CMP_SWAP_I16
  { 46,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #46 = ATOMIC_CMP_SWAP_I16_P8
  { 47,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #47 = ATOMIC_CMP_SWAP_I32
  { 48,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #48 = ATOMIC_CMP_SWAP_I32_P8
  { 49,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #49 = ATOMIC_CMP_SWAP_I64
  { 50,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #50 = ATOMIC_CMP_SWAP_I64_P8
  { 51,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #51 = ATOMIC_CMP_SWAP_I8
  { 52,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #52 = ATOMIC_CMP_SWAP_I8_P8
  { 53,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #53 = ATOMIC_LOAD_ADD_I16
  { 54,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #54 = ATOMIC_LOAD_ADD_I16_P8
  { 55,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #55 = ATOMIC_LOAD_ADD_I32
  { 56,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #56 = ATOMIC_LOAD_ADD_I32_P8
  { 57,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #57 = ATOMIC_LOAD_ADD_I64
  { 58,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #58 = ATOMIC_LOAD_ADD_I64_P8
  { 59,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #59 = ATOMIC_LOAD_ADD_I8
  { 60,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #60 = ATOMIC_LOAD_ADD_I8_P8
  { 61,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #61 = ATOMIC_LOAD_AND_I16
  { 62,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #62 = ATOMIC_LOAD_AND_I16_P8
  { 63,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #63 = ATOMIC_LOAD_AND_I32
  { 64,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #64 = ATOMIC_LOAD_AND_I32_P8
  { 65,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #65 = ATOMIC_LOAD_AND_I64
  { 66,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #66 = ATOMIC_LOAD_AND_I64_P8
  { 67,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #67 = ATOMIC_LOAD_AND_I8
  { 68,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #68 = ATOMIC_LOAD_AND_I8_P8
  { 69,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #69 = ATOMIC_LOAD_NAND_I16
  { 70,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #70 = ATOMIC_LOAD_NAND_I16_P8
  { 71,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #71 = ATOMIC_LOAD_NAND_I32
  { 72,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #72 = ATOMIC_LOAD_NAND_I32_P8
  { 73,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #73 = ATOMIC_LOAD_NAND_I64
  { 74,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #74 = ATOMIC_LOAD_NAND_I64_P8
  { 75,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #75 = ATOMIC_LOAD_NAND_I8
  { 76,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #76 = ATOMIC_LOAD_NAND_I8_P8
  { 77,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #77 = ATOMIC_LOAD_OR_I16
  { 78,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #78 = ATOMIC_LOAD_OR_I16_P8
  { 79,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #79 = ATOMIC_LOAD_OR_I32
  { 80,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #80 = ATOMIC_LOAD_OR_I32_P8
  { 81,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #81 = ATOMIC_LOAD_OR_I64
  { 82,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #82 = ATOMIC_LOAD_OR_I64_P8
  { 83,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #83 = ATOMIC_LOAD_OR_I8
  { 84,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #84 = ATOMIC_LOAD_OR_I8_P8
  { 85,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #85 = ATOMIC_LOAD_SUB_I16
  { 86,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #86 = ATOMIC_LOAD_SUB_I16_P8
  { 87,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #87 = ATOMIC_LOAD_SUB_I32
  { 88,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #88 = ATOMIC_LOAD_SUB_I32_P8
  { 89,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #89 = ATOMIC_LOAD_SUB_I64
  { 90,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #90 = ATOMIC_LOAD_SUB_I64_P8
  { 91,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #91 = ATOMIC_LOAD_SUB_I8
  { 92,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #92 = ATOMIC_LOAD_SUB_I8_P8
  { 93,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #93 = ATOMIC_LOAD_XOR_I16
  { 94,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #94 = ATOMIC_LOAD_XOR_I16_P8
  { 95,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #95 = ATOMIC_LOAD_XOR_I32
  { 96,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #96 = ATOMIC_LOAD_XOR_I32_P8
  { 97,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #97 = ATOMIC_LOAD_XOR_I64
  { 98,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #98 = ATOMIC_LOAD_XOR_I64_P8
  { 99,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #99 = ATOMIC_LOAD_XOR_I8
  { 100,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #100 = ATOMIC_LOAD_XOR_I8_P8
  { 101,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #101 = ATOMIC_SWAP_I16
  { 102,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #102 = ATOMIC_SWAP_I16_P8
  { 103,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #103 = ATOMIC_SWAP_I32
  { 104,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #104 = ATOMIC_SWAP_I32_P8
  { 105,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #105 = ATOMIC_SWAP_I64
  { 106,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #106 = ATOMIC_SWAP_I64_P8
  { 107,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #107 = ATOMIC_SWAP_I8
  { 108,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #108 = ATOMIC_SWAP_I8_P8
  { 109,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo24 },  // Inst #109 = AddiuRxImmX16
  { 110,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo24 },  // Inst #110 = AddiuRxPcImmX16
  { 111,	3,	1,	1,	0,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo25 },  // Inst #111 = AddiuRxRxImm16
  { 112,	3,	1,	1,	0,	0|(1<<MCID::Rematerializable), 0x10ULL, NULL, NULL, OperandInfo25 },  // Inst #112 = AddiuRxRxImmX16
  { 113,	3,	1,	1,	0,	0, 0x12ULL, NULL, NULL, OperandInfo26 },  // Inst #113 = AddiuRxRyOffMemX16
  { 114,	1,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x14ULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #114 = AddiuSpImmX16
  { 115,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x5ULL, NULL, NULL, OperandInfo27 },  // Inst #115 = AdduRxRyRz16
  { 116,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x3ULL, NULL, NULL, OperandInfo28 },  // Inst #116 = AndRxRxRy16
  { 117,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo29 },  // Inst #117 = B
  { 118,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #118 = BALIGN
  { 119,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList4, OperandInfo29 },  // Inst #119 = BAL_BR
  { 120,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList5, ImplicitList3, OperandInfo29 },  // Inst #120 = BC1F
  { 121,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList5, ImplicitList3, OperandInfo29 },  // Inst #121 = BC1T
  { 122,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo30 },  // Inst #122 = BEQ
  { 123,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo31 },  // Inst #123 = BEQ64
  { 124,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo32 },  // Inst #124 = BGEZ
  { 125,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo33 },  // Inst #125 = BGEZ64
  { 126,	2,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList4, OperandInfo34 },  // Inst #126 = BGEZAL
  { 127,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo32 },  // Inst #127 = BGTZ
  { 128,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo33 },  // Inst #128 = BGTZ64
  { 129,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo9 },  // Inst #129 = BITREV
  { 130,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo32 },  // Inst #130 = BLEZ
  { 131,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo33 },  // Inst #131 = BLEZ64
  { 132,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo32 },  // Inst #132 = BLTZ
  { 133,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo33 },  // Inst #133 = BLTZ64
  { 134,	2,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList4, OperandInfo34 },  // Inst #134 = BLTZAL
  { 135,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo30 },  // Inst #135 = BNE
  { 136,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo31 },  // Inst #136 = BNE64
  { 137,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList1, NULL, OperandInfo29 },  // Inst #137 = BPOSGE32
  { 138,	1,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo35 },  // Inst #138 = BPOSGE32_PSEUDO
  { 139,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x10ULL, NULL, NULL, OperandInfo36 },  // Inst #139 = BeqzRxImmX16
  { 140,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xeULL, NULL, NULL, OperandInfo29 },  // Inst #140 = BimmX16
  { 141,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x10ULL, NULL, NULL, OperandInfo36 },  // Inst #141 = BnezRxImmX16
  { 142,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo37 },  // Inst #142 = BteqzT8CmpX16
  { 143,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo38 },  // Inst #143 = BteqzT8CmpiX16
  { 144,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo37 },  // Inst #144 = BteqzT8SltX16
  { 145,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo38 },  // Inst #145 = BteqzT8SltiX16
  { 146,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo38 },  // Inst #146 = BteqzT8SltiuX16
  { 147,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo37 },  // Inst #147 = BteqzT8SltuX16
  { 148,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo5 },  // Inst #148 = BteqzX16
  { 149,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo37 },  // Inst #149 = BtnezT8CmpX16
  { 150,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo38 },  // Inst #150 = BtnezT8CmpiX16
  { 151,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo37 },  // Inst #151 = BtnezT8SltX16
  { 152,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo38 },  // Inst #152 = BtnezT8SltiX16
  { 153,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo38 },  // Inst #153 = BtnezT8SltiuX16
  { 154,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo37 },  // Inst #154 = BtnezT8SltuX16
  { 155,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo5 },  // Inst #155 = BtnezX16
  { 156,	3,	1,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #156 = BuildPairF64
  { 157,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #157 = CEIL_L_D64
  { 158,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #158 = CEIL_L_S
  { 159,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #159 = CEIL_W_D32
  { 160,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #160 = CEIL_W_D64
  { 161,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #161 = CEIL_W_S
  { 162,	2,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #162 = CFC1
  { 163,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo46 },  // Inst #163 = CLO
  { 164,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo46 },  // Inst #164 = CLZ
  { 165,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #165 = CMPGDU_EQ_QB
  { 166,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #166 = CMPGDU_LE_QB
  { 167,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #167 = CMPGDU_LT_QB
  { 168,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #168 = CMPGU_EQ_QB
  { 169,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #169 = CMPGU_LE_QB
  { 170,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #170 = CMPGU_LT_QB
  { 171,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #171 = CMPU_EQ_QB
  { 172,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #172 = CMPU_LE_QB
  { 173,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #173 = CMPU_LT_QB
  { 174,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #174 = CMP_EQ_PH
  { 175,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #175 = CMP_LE_PH
  { 176,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #176 = CMP_LT_PH
  { 177,	2,	1,	8,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo48 },  // Inst #177 = CTC1
  { 178,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo49 },  // Inst #178 = CVT_D32_S
  { 179,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo49 },  // Inst #179 = CVT_D32_W
  { 180,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #180 = CVT_D64_L
  { 181,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #181 = CVT_D64_S
  { 182,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #182 = CVT_D64_W
  { 183,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #183 = CVT_L_D64
  { 184,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #184 = CVT_L_S
  { 185,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #185 = CVT_S_D32
  { 186,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #186 = CVT_S_D64
  { 187,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #187 = CVT_S_L
  { 188,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #188 = CVT_S_W
  { 189,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #189 = CVT_W_D32
  { 190,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #190 = CVT_W_D64
  { 191,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #191 = CVT_W_S
  { 192,	1,	0,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #192 = Constant32
  { 193,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #193 = DADD
  { 194,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo50 },  // Inst #194 = DADDi
  { 195,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo50 },  // Inst #195 = DADDiu
  { 196,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #196 = DADDu
  { 197,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo50 },  // Inst #197 = DANDi
  { 198,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #198 = DCLO
  { 199,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #199 = DCLZ
  { 200,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #200 = DEXT
  { 201,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #201 = DEXTM
  { 202,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #202 = DEXTU
  { 203,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #203 = DINS
  { 204,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #204 = DINSM
  { 205,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #205 = DINSU
  { 206,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #206 = DMFC0_3OP64
  { 207,	2,	1,	8,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo54 },  // Inst #207 = DMFC1
  { 208,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo50 },  // Inst #208 = DMFC2_3OP64
  { 209,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo55 },  // Inst #209 = DMTC0_3OP64
  { 210,	2,	1,	8,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo56 },  // Inst #210 = DMTC1
  { 211,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo55 },  // Inst #211 = DMTC2_3OP64
  { 212,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList6, OperandInfo51 },  // Inst #212 = DMULT
  { 213,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList6, OperandInfo51 },  // Inst #213 = DMULTu
  { 214,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #214 = DPAQX_SA_W_PH
  { 215,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #215 = DPAQX_SA_W_PH_PSEUDO
  { 216,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #216 = DPAQX_S_W_PH
  { 217,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #217 = DPAQX_S_W_PH_PSEUDO
  { 218,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #218 = DPAQ_SA_L_W
  { 219,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #219 = DPAQ_SA_L_W_PSEUDO
  { 220,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #220 = DPAQ_S_W_PH
  { 221,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #221 = DPAQ_S_W_PH_PSEUDO
  { 222,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #222 = DPAU_H_QBL
  { 223,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #223 = DPAU_H_QBL_PSEUDO
  { 224,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #224 = DPAU_H_QBR
  { 225,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #225 = DPAU_H_QBR_PSEUDO
  { 226,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #226 = DPAX_W_PH
  { 227,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #227 = DPAX_W_PH_PSEUDO
  { 228,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #228 = DPA_W_PH
  { 229,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #229 = DPA_W_PH_PSEUDO
  { 230,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #230 = DPSQX_SA_W_PH
  { 231,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #231 = DPSQX_SA_W_PH_PSEUDO
  { 232,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #232 = DPSQX_S_W_PH
  { 233,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #233 = DPSQX_S_W_PH_PSEUDO
  { 234,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #234 = DPSQ_SA_L_W
  { 235,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #235 = DPSQ_SA_L_W_PSEUDO
  { 236,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #236 = DPSQ_S_W_PH
  { 237,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #237 = DPSQ_S_W_PH_PSEUDO
  { 238,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #238 = DPSU_H_QBL
  { 239,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #239 = DPSU_H_QBL_PSEUDO
  { 240,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #240 = DPSU_H_QBR
  { 241,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #241 = DPSU_H_QBR_PSEUDO
  { 242,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #242 = DPSX_W_PH
  { 243,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #243 = DPSX_W_PH_PSEUDO
  { 244,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #244 = DPS_W_PH
  { 245,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #245 = DPS_W_PH_PSEUDO
  { 246,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #246 = DROTR
  { 247,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo58 },  // Inst #247 = DROTRV
  { 248,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #248 = DSBH
  { 249,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList6, OperandInfo51 },  // Inst #249 = DSDIV
  { 250,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #250 = DSHD
  { 251,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #251 = DSLL
  { 252,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #252 = DSLL32
  { 253,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #253 = DSLL64_32
  { 254,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo58 },  // Inst #254 = DSLLV
  { 255,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #255 = DSRA
  { 256,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #256 = DSRA32
  { 257,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo58 },  // Inst #257 = DSRAV
  { 258,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #258 = DSRL
  { 259,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #259 = DSRL32
  { 260,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo58 },  // Inst #260 = DSRLV
  { 261,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #261 = DSUBu
  { 262,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList6, OperandInfo51 },  // Inst #262 = DUDIV
  { 263,	2,	0,	1,	0,	0, 0x3ULL, NULL, ImplicitList9, OperandInfo60 },  // Inst #263 = DivRxRy16
  { 264,	2,	0,	1,	0,	0, 0x3ULL, NULL, ImplicitList9, OperandInfo60 },  // Inst #264 = DivuRxRy16
  { 265,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo61 },  // Inst #265 = EXT
  { 266,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #266 = EXTP
  { 267,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #267 = EXTPDP
  { 268,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #268 = EXTPDPV
  { 269,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #269 = EXTPV
  { 270,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #270 = EXTRV_RS_W
  { 271,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #271 = EXTRV_R_W
  { 272,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #272 = EXTRV_S_H
  { 273,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo63 },  // Inst #273 = EXTRV_W
  { 274,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #274 = EXTR_RS_W
  { 275,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #275 = EXTR_R_W
  { 276,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #276 = EXTR_S_H
  { 277,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo62 },  // Inst #277 = EXTR_W
  { 278,	3,	1,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #278 = ExtractElementF64
  { 279,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #279 = FABS_D32
  { 280,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #280 = FABS_D64
  { 281,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #281 = FABS_S
  { 282,	3,	1,	3,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #282 = FADD_D32
  { 283,	3,	1,	3,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #283 = FADD_D64
  { 284,	3,	1,	3,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #284 = FADD_S
  { 285,	3,	0,	4,	4,	0, 0x4ULL, NULL, ImplicitList5, OperandInfo69 },  // Inst #285 = FCMP_D32
  { 286,	3,	0,	4,	4,	0, 0x4ULL, NULL, ImplicitList5, OperandInfo70 },  // Inst #286 = FCMP_D64
  { 287,	3,	0,	4,	4,	0, 0x4ULL, NULL, ImplicitList5, OperandInfo71 },  // Inst #287 = FCMP_S32
  { 288,	3,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #288 = FDIV_D32
  { 289,	3,	1,	6,	4,	0, 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #289 = FDIV_D64
  { 290,	3,	1,	7,	4,	0, 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #290 = FDIV_S
  { 291,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #291 = FLOOR_L_D64
  { 292,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #292 = FLOOR_L_S
  { 293,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #293 = FLOOR_W_D32
  { 294,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #294 = FLOOR_W_D64
  { 295,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #295 = FLOOR_W_S
  { 296,	2,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #296 = FMOV_D32
  { 297,	2,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #297 = FMOV_D64
  { 298,	2,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #298 = FMOV_S
  { 299,	3,	1,	9,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #299 = FMUL_D32
  { 300,	3,	1,	9,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #300 = FMUL_D64
  { 301,	3,	1,	10,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #301 = FMUL_S
  { 302,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #302 = FNEG_D32
  { 303,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #303 = FNEG_D64
  { 304,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #304 = FNEG_S
  { 305,	2,	1,	11,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #305 = FSQRT_D32
  { 306,	2,	1,	11,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #306 = FSQRT_D64
  { 307,	2,	1,	12,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #307 = FSQRT_S
  { 308,	3,	1,	3,	4,	0, 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #308 = FSUB_D32
  { 309,	3,	1,	3,	4,	0, 0x4ULL, NULL, NULL, OperandInfo67 },  // Inst #309 = FSUB_D64
  { 310,	3,	1,	3,	4,	0, 0x4ULL, NULL, NULL, OperandInfo68 },  // Inst #310 = FSUB_S
  { 311,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo72 },  // Inst #311 = INS
  { 312,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo73 },  // Inst #312 = INSV
  { 313,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #313 = J
  { 314,	1,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, NULL, ImplicitList4, OperandInfo5 },  // Inst #314 = JAL
  { 315,	2,	1,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList4, OperandInfo9 },  // Inst #315 = JALR
  { 316,	2,	1,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList4, OperandInfo74 },  // Inst #316 = JALR64
  { 317,	1,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, NULL, ImplicitList4, OperandInfo75 },  // Inst #317 = JALR64Pseudo
  { 318,	1,	0,	2,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, NULL, ImplicitList4, OperandInfo35 },  // Inst #318 = JALRPseudo
  { 319,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #319 = JR
  { 320,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #320 = JR64
  { 321,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xcULL, NULL, NULL, OperandInfo5 },  // Inst #321 = Jal16
  { 322,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, 0 },  // Inst #322 = JrRa16
  { 323,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, 0 },  // Inst #323 = JrcRa16
  { 324,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x3ULL, NULL, NULL, OperandInfo76 },  // Inst #324 = JrcRx16
  { 325,	1,	0,	2,	0,	0|(1<<MCID::Call), 0x3ULL, NULL, NULL, OperandInfo76 },  // Inst #325 = JumpLinkReg16
  { 326,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #326 = LB
  { 327,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #327 = LB64
  { 328,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #328 = LB64_P8
  { 329,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #329 = LBUX
  { 330,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #330 = LB_P8
  { 331,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #331 = LBu
  { 332,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #332 = LBu64
  { 333,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #333 = LBu64_P8
  { 334,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #334 = LBu_P8
  { 335,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #335 = LD
  { 336,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo81 },  // Inst #336 = LDC1
  { 337,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo82 },  // Inst #337 = LDC164
  { 338,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo83 },  // Inst #338 = LDC164_P8
  { 339,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #339 = LDL
  { 340,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #340 = LDL_P8
  { 341,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #341 = LDR
  { 342,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #342 = LDR_P8
  { 343,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #343 = LDXC1
  { 344,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #344 = LDXC164
  { 345,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo87 },  // Inst #345 = LDXC164_P8
  { 346,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #346 = LD_P8
  { 347,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #347 = LEA_ADDiu
  { 348,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #348 = LEA_ADDiu64
  { 349,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #349 = LH
  { 350,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #350 = LH64
  { 351,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #351 = LH64_P8
  { 352,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #352 = LHX
  { 353,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #353 = LH_P8
  { 354,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #354 = LHu
  { 355,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #355 = LHu64
  { 356,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #356 = LHu64_P8
  { 357,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #357 = LHu_P8
  { 358,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #358 = LL
  { 359,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo88 },  // Inst #359 = LLD
  { 360,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo50 },  // Inst #360 = LLD_P8
  { 361,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo89 },  // Inst #361 = LL_P8
  { 362,	3,	1,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #362 = LUXC1
  { 363,	3,	1,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #363 = LUXC164
  { 364,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo90 },  // Inst #364 = LUi
  { 365,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo91 },  // Inst #365 = LUi64
  { 366,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #366 = LW
  { 367,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #367 = LW64
  { 368,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #368 = LW64_P8
  { 369,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo92 },  // Inst #369 = LWC1
  { 370,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo93 },  // Inst #370 = LWC1_P8
  { 371,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #371 = LWL
  { 372,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #372 = LWL64
  { 373,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #373 = LWL64_P8
  { 374,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo95 },  // Inst #374 = LWL_P8
  { 375,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #375 = LWR
  { 376,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #376 = LWR64
  { 377,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #377 = LWR64_P8
  { 378,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo95 },  // Inst #378 = LWR_P8
  { 379,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #379 = LWX
  { 380,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo96 },  // Inst #380 = LWXC1
  { 381,	3,	1,	16,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo97 },  // Inst #381 = LWXC1_P8
  { 382,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #382 = LW_P8
  { 383,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #383 = LWu64
  { 384,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #384 = LWu64_P8
  { 385,	4,	1,	16,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #385 = LbRxRyOffMemX16
  { 386,	4,	1,	16,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #386 = LbuRxRyOffMemX16
  { 387,	4,	1,	16,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #387 = LhRxRyOffMemX16
  { 388,	4,	1,	16,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #388 = LhuRxRyOffMemX16
  { 389,	2,	1,	1,	0,	0, 0x10ULL, NULL, NULL, OperandInfo24 },  // Inst #389 = LiRxImmX16
  { 390,	2,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo99 },  // Inst #390 = LoadAddr32Imm
  { 391,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #391 = LoadAddr32Reg
  { 392,	2,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo99 },  // Inst #392 = LoadImm32Reg
  { 393,	2,	0,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #393 = LwConstant32
  { 394,	4,	1,	16,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #394 = LwRxRyOffMemX16
  { 395,	3,	1,	16,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, ImplicitList2, NULL, OperandInfo100 },  // Inst #395 = LwRxSpImmX16
  { 396,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo46 },  // Inst #396 = MADD
  { 397,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo46 },  // Inst #397 = MADDU
  { 398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #398 = MADDU_DSP
  { 399,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #399 = MADDU_DSP_PSEUDO
  { 400,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo101 },  // Inst #400 = MADD_D32
  { 401,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo102 },  // Inst #401 = MADD_D64
  { 402,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #402 = MADD_DSP
  { 403,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #403 = MADD_DSP_PSEUDO
  { 404,	4,	1,	10,	4,	0, 0x4ULL, NULL, NULL, OperandInfo103 },  // Inst #404 = MADD_S
  { 405,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #405 = MAQ_SA_W_PHL
  { 406,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #406 = MAQ_SA_W_PHL_PSEUDO
  { 407,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #407 = MAQ_SA_W_PHR
  { 408,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #408 = MAQ_SA_W_PHR_PSEUDO
  { 409,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #409 = MAQ_S_W_PHL
  { 410,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #410 = MAQ_S_W_PHL_PSEUDO
  { 411,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #411 = MAQ_S_W_PHR
  { 412,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #412 = MAQ_S_W_PHR_PSEUDO
  { 413,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo13 },  // Inst #413 = MFC0_3OP
  { 414,	2,	1,	8,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo104 },  // Inst #414 = MFC1
  { 415,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo13 },  // Inst #415 = MFC2_3OP
  { 416,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList10, NULL, OperandInfo35 },  // Inst #416 = MFHI
  { 417,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList11, NULL, OperandInfo75 },  // Inst #417 = MFHI64
  { 418,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList12, NULL, OperandInfo35 },  // Inst #418 = MFLO
  { 419,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList13, NULL, OperandInfo75 },  // Inst #419 = MFLO64
  { 420,	2,	0,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList14, NULL, OperandInfo9 },  // Inst #420 = MIPSeh_return32
  { 421,	2,	0,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList14, NULL, OperandInfo74 },  // Inst #421 = MIPSeh_return64
  { 422,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #422 = MODSUB
  { 423,	2,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo105 },  // Inst #423 = MOVCCRToCCR
  { 424,	3,	1,	8,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo106 },  // Inst #424 = MOVF_D32
  { 425,	3,	1,	8,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo107 },  // Inst #425 = MOVF_D64
  { 426,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo108 },  // Inst #426 = MOVF_I
  { 427,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo109 },  // Inst #427 = MOVF_I64
  { 428,	3,	1,	8,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo110 },  // Inst #428 = MOVF_S
  { 429,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #429 = MOVN_I64_D64
  { 430,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #430 = MOVN_I64_I
  { 431,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #431 = MOVN_I64_I64
  { 432,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo114 },  // Inst #432 = MOVN_I64_S
  { 433,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo115 },  // Inst #433 = MOVN_I_D32
  { 434,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo116 },  // Inst #434 = MOVN_I_D64
  { 435,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo117 },  // Inst #435 = MOVN_I_I
  { 436,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo118 },  // Inst #436 = MOVN_I_I64
  { 437,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo119 },  // Inst #437 = MOVN_I_S
  { 438,	3,	1,	8,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo106 },  // Inst #438 = MOVT_D32
  { 439,	3,	1,	8,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo107 },  // Inst #439 = MOVT_D64
  { 440,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo108 },  // Inst #440 = MOVT_I
  { 441,	3,	1,	1,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo109 },  // Inst #441 = MOVT_I64
  { 442,	3,	1,	8,	4,	0, 0x4ULL, ImplicitList5, NULL, OperandInfo110 },  // Inst #442 = MOVT_S
  { 443,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #443 = MOVZ_I64_D64
  { 444,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #444 = MOVZ_I64_I
  { 445,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #445 = MOVZ_I64_I64
  { 446,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo114 },  // Inst #446 = MOVZ_I64_S
  { 447,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo115 },  // Inst #447 = MOVZ_I_D32
  { 448,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo116 },  // Inst #448 = MOVZ_I_D64
  { 449,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo117 },  // Inst #449 = MOVZ_I_I
  { 450,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo118 },  // Inst #450 = MOVZ_I_I64
  { 451,	4,	1,	8,	4,	0, 0x4ULL, NULL, NULL, OperandInfo119 },  // Inst #451 = MOVZ_I_S
  { 452,	2,	0,	15,	4,	0, 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo46 },  // Inst #452 = MSUB
  { 453,	2,	0,	15,	4,	0, 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo46 },  // Inst #453 = MSUBU
  { 454,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #454 = MSUBU_DSP
  { 455,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #455 = MSUBU_DSP_PSEUDO
  { 456,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo101 },  // Inst #456 = MSUB_D32
  { 457,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo102 },  // Inst #457 = MSUB_D64
  { 458,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #458 = MSUB_DSP
  { 459,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #459 = MSUB_DSP_PSEUDO
  { 460,	4,	1,	10,	4,	0, 0x4ULL, NULL, NULL, OperandInfo103 },  // Inst #460 = MSUB_S
  { 461,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo120 },  // Inst #461 = MTC0_3OP
  { 462,	2,	1,	8,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo121 },  // Inst #462 = MTC1
  { 463,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo120 },  // Inst #463 = MTC2_3OP
  { 464,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList10, OperandInfo35 },  // Inst #464 = MTHI
  { 465,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList11, OperandInfo75 },  // Inst #465 = MTHI64
  { 466,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo122 },  // Inst #466 = MTHLIP
  { 467,	1,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo35 },  // Inst #467 = MTHLIP_PSEUDO
  { 468,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList12, OperandInfo35 },  // Inst #468 = MTLO
  { 469,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList13, OperandInfo75 },  // Inst #469 = MTLO64
  { 470,	3,	1,	15,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #470 = MUL
  { 471,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #471 = MULEQ_S_W_PHL
  { 472,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo47 },  // Inst #472 = MULEQ_S_W_PHR
  { 473,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #473 = MULEU_S_PH_QBL
  { 474,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #474 = MULEU_S_PH_QBR
  { 475,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #475 = MULQ_RS_PH
  { 476,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #476 = MULQ_RS_W
  { 477,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #477 = MULQ_S_PH
  { 478,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #478 = MULQ_S_W
  { 479,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #479 = MULSAQ_S_W_PH
  { 480,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #480 = MULSAQ_S_W_PH_PSEUDO
  { 481,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #481 = MULSA_W_PH
  { 482,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #482 = MULSA_W_PH_PSEUDO
  { 483,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList9, OperandInfo46 },  // Inst #483 = MULT
  { 484,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #484 = MULTU_DSP
  { 485,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList8, OperandInfo9 },  // Inst #485 = MULTU_DSP_PSEUDO
  { 486,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo57 },  // Inst #486 = MULT_DSP
  { 487,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList8, OperandInfo9 },  // Inst #487 = MULT_DSP_PSEUDO
  { 488,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList9, OperandInfo46 },  // Inst #488 = MULTu
  { 489,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #489 = MUL_PH
  { 490,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #490 = MUL_S_PH
  { 491,	1,	1,	1,	0,	0, 0x3ULL, ImplicitList10, NULL, OperandInfo76 },  // Inst #491 = Mfhi16
  { 492,	1,	1,	1,	0,	0, 0x3ULL, ImplicitList12, NULL, OperandInfo76 },  // Inst #492 = Mflo16
  { 493,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo123 },  // Inst #493 = Move32R16
  { 494,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo124 },  // Inst #494 = MoveR3216
  { 495,	2,	0,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo60 },  // Inst #495 = MultRxRy16
  { 496,	3,	1,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo27 },  // Inst #496 = MultRxRyRz16
  { 497,	2,	0,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo60 },  // Inst #497 = MultuRxRy16
  { 498,	3,	1,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo27 },  // Inst #498 = MultuRxRyRz16
  { 499,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo101 },  // Inst #499 = NMADD_D32
  { 500,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo102 },  // Inst #500 = NMADD_D64
  { 501,	4,	1,	10,	4,	0, 0x4ULL, NULL, NULL, OperandInfo103 },  // Inst #501 = NMADD_S
  { 502,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo101 },  // Inst #502 = NMSUB_D32
  { 503,	4,	1,	9,	4,	0, 0x4ULL, NULL, NULL, OperandInfo102 },  // Inst #503 = NMSUB_D64
  { 504,	4,	1,	10,	4,	0, 0x4ULL, NULL, NULL, OperandInfo103 },  // Inst #504 = NMSUB_S
  { 505,	0,	0,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #505 = NOP
  { 506,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #506 = NOR
  { 507,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #507 = NOR64
  { 508,	2,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo60 },  // Inst #508 = NegRxRy16
  { 509,	2,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo60 },  // Inst #509 = NotRxRy16
  { 510,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #510 = OR
  { 511,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #511 = OR64
  { 512,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #512 = ORi
  { 513,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo50 },  // Inst #513 = ORi64
  { 514,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x3ULL, NULL, NULL, OperandInfo28 },  // Inst #514 = OrRxRxRy16
  { 515,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #515 = PACKRL_PH
  { 516,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo11 },  // Inst #516 = PICK_PH
  { 517,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo11 },  // Inst #517 = PICK_QB
  { 518,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #518 = PRECEQU_PH_QBL
  { 519,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #519 = PRECEQU_PH_QBLA
  { 520,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #520 = PRECEQU_PH_QBR
  { 521,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #521 = PRECEQU_PH_QBRA
  { 522,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #522 = PRECEQ_W_PHL
  { 523,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #523 = PRECEQ_W_PHR
  { 524,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #524 = PRECEU_PH_QBL
  { 525,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #525 = PRECEU_PH_QBLA
  { 526,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #526 = PRECEU_PH_QBR
  { 527,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #527 = PRECEU_PH_QBRA
  { 528,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #528 = PRECRQU_S_QB_PH
  { 529,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo126 },  // Inst #529 = PRECRQ_PH_W
  { 530,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #530 = PRECRQ_QB_PH
  { 531,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo126 },  // Inst #531 = PRECRQ_RS_PH_W
  { 532,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #532 = PRECR_QB_PH
  { 533,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo127 },  // Inst #533 = PRECR_SRA_PH_W
  { 534,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo127 },  // Inst #534 = PRECR_SRA_R_PH_W
  { 535,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo16 },  // Inst #535 = PREPEND
  { 536,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo125 },  // Inst #536 = RADDU_W_QB
  { 537,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo90 },  // Inst #537 = RDDSP
  { 538,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo128 },  // Inst #538 = RDHWR
  { 539,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo129 },  // Inst #539 = RDHWR64
  { 540,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #540 = REPLV_PH
  { 541,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #541 = REPLV_QB
  { 542,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo131 },  // Inst #542 = REPL_PH
  { 543,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo131 },  // Inst #543 = REPL_QB
  { 544,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #544 = RET
  { 545,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #545 = ROTR
  { 546,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #546 = ROTRV
  { 547,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #547 = ROUND_L_D64
  { 548,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #548 = ROUND_L_S
  { 549,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #549 = ROUND_W_D32
  { 550,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #550 = ROUND_W_D64
  { 551,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #551 = ROUND_W_S
  { 552,	1,	0,	16,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0xbULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #552 = RestoreIncSpF16
  { 553,	1,	0,	16,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0xbULL, ImplicitList2, ImplicitList15, OperandInfo5 },  // Inst #553 = RestoreRaF16
  { 554,	0,	0,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #554 = RetRA
  { 555,	0,	0,	17,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, NULL, NULL, 0 },  // Inst #555 = RetRA16
  { 556,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #556 = SB
  { 557,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #557 = SB64
  { 558,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #558 = SB64_P8
  { 559,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #559 = SB_P8
  { 560,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo132 },  // Inst #560 = SC
  { 561,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo133 },  // Inst #561 = SCD
  { 562,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo134 },  // Inst #562 = SCD_P8
  { 563,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo135 },  // Inst #563 = SC_P8
  { 564,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #564 = SD
  { 565,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo81 },  // Inst #565 = SDC1
  { 566,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo82 },  // Inst #566 = SDC164
  { 567,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo83 },  // Inst #567 = SDC164_P8
  { 568,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList9, OperandInfo46 },  // Inst #568 = SDIV
  { 569,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #569 = SDL
  { 570,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #570 = SDL_P8
  { 571,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #571 = SDR
  { 572,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #572 = SDR_P8
  { 573,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #573 = SDXC1
  { 574,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #574 = SDXC164
  { 575,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo87 },  // Inst #575 = SDXC164_P8
  { 576,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #576 = SD_P8
  { 577,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #577 = SEB
  { 578,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo74 },  // Inst #578 = SEB64
  { 579,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #579 = SEH
  { 580,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo74 },  // Inst #580 = SEH64
  { 581,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #581 = SH
  { 582,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #582 = SH64
  { 583,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #583 = SH64_P8
  { 584,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo136 },  // Inst #584 = SHILO
  { 585,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo122 },  // Inst #585 = SHILOV
  { 586,	1,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo35 },  // Inst #586 = SHILOV_PSEUDO
  { 587,	1,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo5 },  // Inst #587 = SHILO_PSEUDO
  { 588,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo137 },  // Inst #588 = SHLLV_PH
  { 589,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo137 },  // Inst #589 = SHLLV_QB
  { 590,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo137 },  // Inst #590 = SHLLV_S_PH
  { 591,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #591 = SHLLV_S_W
  { 592,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo138 },  // Inst #592 = SHLL_PH
  { 593,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo138 },  // Inst #593 = SHLL_QB
  { 594,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo138 },  // Inst #594 = SHLL_S_PH
  { 595,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo139 },  // Inst #595 = SHLL_S_W
  { 596,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #596 = SHRAV_PH
  { 597,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #597 = SHRAV_QB
  { 598,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #598 = SHRAV_R_PH
  { 599,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #599 = SHRAV_R_QB
  { 600,	3,	1,	0,	4,	0, 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #600 = SHRAV_R_W
  { 601,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo138 },  // Inst #601 = SHRA_PH
  { 602,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo138 },  // Inst #602 = SHRA_QB
  { 603,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo138 },  // Inst #603 = SHRA_R_PH
  { 604,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo138 },  // Inst #604 = SHRA_R_QB
  { 605,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo139 },  // Inst #605 = SHRA_R_W
  { 606,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #606 = SHRLV_PH
  { 607,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo137 },  // Inst #607 = SHRLV_QB
  { 608,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo138 },  // Inst #608 = SHRL_PH
  { 609,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo138 },  // Inst #609 = SHRL_QB
  { 610,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #610 = SH_P8
  { 611,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #611 = SLL
  { 612,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #612 = SLL64_32
  { 613,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo74 },  // Inst #613 = SLL64_64
  { 614,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #614 = SLLV
  { 615,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo140 },  // Inst #615 = SLT
  { 616,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo141 },  // Inst #616 = SLT64
  { 617,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo142 },  // Inst #617 = SLTi
  { 618,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo143 },  // Inst #618 = SLTi64
  { 619,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo142 },  // Inst #619 = SLTiu
  { 620,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo143 },  // Inst #620 = SLTiu64
  { 621,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo140 },  // Inst #621 = SLTu
  { 622,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo141 },  // Inst #622 = SLTu64
  { 623,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #623 = SRA
  { 624,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #624 = SRAV
  { 625,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo13 },  // Inst #625 = SRL
  { 626,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #626 = SRLV
  { 627,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #627 = SUB
  { 628,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #628 = SUBQH_PH
  { 629,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #629 = SUBQH_R_PH
  { 630,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #630 = SUBQH_R_W
  { 631,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #631 = SUBQH_W
  { 632,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #632 = SUBQ_PH
  { 633,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #633 = SUBQ_S_PH
  { 634,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #634 = SUBQ_S_W
  { 635,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #635 = SUBUH_QB
  { 636,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #636 = SUBUH_R_QB
  { 637,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #637 = SUBU_PH
  { 638,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #638 = SUBU_QB
  { 639,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #639 = SUBU_S_PH
  { 640,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #640 = SUBU_S_QB
  { 641,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #641 = SUBu
  { 642,	3,	0,	18,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo39 },  // Inst #642 = SUXC1
  { 643,	3,	0,	18,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #643 = SUXC164
  { 644,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #644 = SW
  { 645,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #645 = SW64
  { 646,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #646 = SW64_P8
  { 647,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo92 },  // Inst #647 = SWC1
  { 648,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo93 },  // Inst #648 = SWC1_P8
  { 649,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #649 = SWL
  { 650,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #650 = SWL64
  { 651,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #651 = SWL64_P8
  { 652,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #652 = SWL_P8
  { 653,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #653 = SWR
  { 654,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #654 = SWR64
  { 655,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #655 = SWR64_P8
  { 656,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #656 = SWR_P8
  { 657,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo96 },  // Inst #657 = SWXC1
  { 658,	3,	0,	18,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo97 },  // Inst #658 = SWXC1_P8
  { 659,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #659 = SW_P8
  { 660,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo2 },  // Inst #660 = SYNC
  { 661,	1,	0,	18,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #661 = SaveDecSpF16
  { 662,	1,	0,	18,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, ImplicitList16, ImplicitList2, OperandInfo5 },  // Inst #662 = SaveRaF16
  { 663,	4,	0,	18,	0,	0|(1<<MCID::MayStore), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #663 = SbRxRyOffMemX16
  { 664,	4,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo144 },  // Inst #664 = SelBeqZ
  { 665,	4,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo144 },  // Inst #665 = SelBneZ
  { 666,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #666 = SelTBteqZCmp
  { 667,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #667 = SelTBteqZCmpi
  { 668,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #668 = SelTBteqZSlt
  { 669,	5,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #669 = SelTBteqZSlti
  { 670,	5,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #670 = SelTBteqZSltiu
  { 671,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #671 = SelTBteqZSltu
  { 672,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #672 = SelTBtneZCmp
  { 673,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #673 = SelTBtneZCmpi
  { 674,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #674 = SelTBtneZSlt
  { 675,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #675 = SelTBtneZSlti
  { 676,	5,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo146 },  // Inst #676 = SelTBtneZSltiu
  { 677,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo145 },  // Inst #677 = SelTBtneZSltu
  { 678,	4,	0,	18,	0,	0|(1<<MCID::MayStore), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #678 = ShRxRyOffMemX16
  { 679,	3,	1,	1,	0,	0, 0x13ULL, NULL, NULL, OperandInfo147 },  // Inst #679 = SllX16
  { 680,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo28 },  // Inst #680 = SllvRxRy16
  { 681,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo27 },  // Inst #681 = SltCCRxRy16
  { 682,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo60 },  // Inst #682 = SltRxRy16
  { 683,	3,	1,	1,	0,	0, 0x10ULL, NULL, NULL, OperandInfo147 },  // Inst #683 = SltiCCRxImmX16
  { 684,	3,	1,	1,	0,	0, 0x10ULL, NULL, NULL, OperandInfo147 },  // Inst #684 = SltiuCCRxImmX16
  { 685,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo27 },  // Inst #685 = SltuCCRxRy16
  { 686,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo27 },  // Inst #686 = SltuRxRyRz16
  { 687,	3,	1,	1,	0,	0, 0x13ULL, NULL, NULL, OperandInfo147 },  // Inst #687 = SraX16
  { 688,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo28 },  // Inst #688 = SravRxRy16
  { 689,	3,	1,	1,	0,	0, 0x13ULL, NULL, NULL, OperandInfo147 },  // Inst #689 = SrlX16
  { 690,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo28 },  // Inst #690 = SrlvRxRy16
  { 691,	3,	1,	1,	0,	0|(1<<MCID::Rematerializable), 0x5ULL, NULL, NULL, OperandInfo27 },  // Inst #691 = SubuRxRyRz16
  { 692,	4,	0,	18,	0,	0|(1<<MCID::MayStore), 0x11ULL, NULL, NULL, OperandInfo98 },  // Inst #692 = SwRxRyOffMemX16
  { 693,	3,	1,	18,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo100 },  // Inst #693 = SwRxSpImmX16
  { 694,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x3ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #694 = TAILCALL
  { 695,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo75 },  // Inst #695 = TAILCALL64_R
  { 696,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #696 = TAILCALL_R
  { 697,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #697 = TRUNC_L_D64
  { 698,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #698 = TRUNC_L_S
  { 699,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #699 = TRUNC_W_D32
  { 700,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo43 },  // Inst #700 = TRUNC_W_D64
  { 701,	2,	1,	5,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #701 = TRUNC_W_S
  { 702,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList9, OperandInfo46 },  // Inst #702 = UDIV
  { 703,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo90 },  // Inst #703 = WRDSP
  { 704,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo46 },  // Inst #704 = WSBH
  { 705,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #705 = XOR
  { 706,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo15 },  // Inst #706 = XOR64
  { 707,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo13 },  // Inst #707 = XORi
  { 708,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo50 },  // Inst #708 = XORi64
  { 709,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x3ULL, NULL, NULL, OperandInfo28 },  // Inst #709 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'L', 'D', 'C', '1', 0,
  /* 5 */ 'S', 'D', 'C', '1', 0,
  /* 10 */ 'C', 'F', 'C', '1', 0,
  /* 15 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 21 */ 'C', 'T', 'C', '1', 0,
  /* 26 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 32 */ 'L', 'W', 'C', '1', 0,
  /* 37 */ 'S', 'W', 'C', '1', 0,
  /* 42 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 48 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 54 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 60 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 66 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 72 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 78 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 85 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 94 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 104 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 113 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 123 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 132 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 141 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 152 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 163 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 172 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 181 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 200 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 210 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 219 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 228 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 237 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 249 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 261 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 272 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 284 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 294 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 303 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 323 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 343 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 364 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 384 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 400 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 420 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 440 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 459 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 466 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 473 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 482 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 492 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 508 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 521 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 528 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 535 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 543 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 551 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 559 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 567 */ 'S', 'E', 'B', '6', '4', 0,
  /* 573 */ 'L', 'B', '6', '4', 0,
  /* 578 */ 'S', 'B', '6', '4', 0,
  /* 583 */ 'A', 'N', 'D', '6', '4', 0,
  /* 589 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 602 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 615 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 624 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 634 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 643 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 653 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 662 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 671 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 682 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 693 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 702 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 714 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 726 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 737 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 749 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 759 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 768 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 777 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 787 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 797 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 806 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 815 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 824 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 836 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 848 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 859 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 871 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 881 */ 'B', 'N', 'E', '6', '4', 0,
  /* 887 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 900 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 918 */ 'S', 'E', 'H', '6', '4', 0,
  /* 924 */ 'L', 'H', '6', '4', 0,
  /* 929 */ 'S', 'H', '6', '4', 0,
  /* 934 */ 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 941 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 948 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 961 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 974 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 994 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1014 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1035 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1055 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1064 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1075 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1086 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1102 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1122 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1142 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1161 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1170 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1176 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1182 */ 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1189 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1196 */ 'D', 'M', 'F', 'C', '0', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1208 */ 'D', 'M', 'T', 'C', '0', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1220 */ 'D', 'M', 'F', 'C', '2', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1232 */ 'D', 'M', 'T', 'C', '2', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1244 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1250 */ 'J', 'R', '6', '4', 0,
  /* 1255 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1262 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1268 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1274 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1282 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1288 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1294 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1300 */ 'L', 'W', '6', '4', 0,
  /* 1305 */ 'S', 'W', '6', '4', 0,
  /* 1310 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1317 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1324 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1331 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1338 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1347 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1354 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1361 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1367 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1383 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1389 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1395 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1402 */ 'L', 'W', 'u', '6', '4', 0,
  /* 1408 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1420 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1428 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 1438 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 1446 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1459 */ 'S', 'a', 'v', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1469 */ 'S', 'a', 'v', 'e', 'D', 'e', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1482 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'I', 'n', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1498 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 1518 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 1538 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1559 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1579 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1595 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1615 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1635 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1654 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 1664 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 1671 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 1686 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 1701 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 1716 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 1731 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 1738 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 1745 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1761 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1777 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1793 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1809 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1826 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1843 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1862 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1878 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1894 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1910 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1924 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1937 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1950 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1965 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1981 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1992 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2006 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2022 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2035 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2048 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2056 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2070 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2084 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2098 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2112 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2128 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2144 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2159 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2174 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2183 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2192 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2200 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2207 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2221 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2228 */ 'J', 'a', 'l', '1', '6', 0,
  /* 2234 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2249 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2256 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 2264 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2276 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2289 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2299 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2309 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2320 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2330 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2342 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2353 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2364 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2374 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2385 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2396 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2408 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2419 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2431 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2444 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2457 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2470 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2483 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2497 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 2516 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 2535 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 2555 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 2574 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 2589 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 2608 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 2627 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 2645 */ 'L', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 2653 */ 'S', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 2661 */ 'L', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 2670 */ 'S', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 2679 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2702 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2725 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2749 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2772 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2791 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2814 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2837 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2859 */ 'L', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2869 */ 'S', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2879 */ 'L', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2890 */ 'S', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2901 */ 'L', 'B', '6', '4', '_', 'P', '8', 0,
  /* 2909 */ 'S', 'B', '6', '4', '_', 'P', '8', 0,
  /* 2917 */ 'L', 'H', '6', '4', '_', 'P', '8', 0,
  /* 2925 */ 'S', 'H', '6', '4', '_', 'P', '8', 0,
  /* 2933 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2956 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2979 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3003 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3026 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3045 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3068 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3091 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3113 */ 'L', 'W', 'L', '6', '4', '_', 'P', '8', 0,
  /* 3122 */ 'S', 'W', 'L', '6', '4', '_', 'P', '8', 0,
  /* 3131 */ 'L', 'W', 'R', '6', '4', '_', 'P', '8', 0,
  /* 3140 */ 'S', 'W', 'R', '6', '4', '_', 'P', '8', 0,
  /* 3149 */ 'L', 'W', '6', '4', '_', 'P', '8', 0,
  /* 3157 */ 'S', 'W', '6', '4', '_', 'P', '8', 0,
  /* 3165 */ 'L', 'B', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3174 */ 'L', 'H', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3183 */ 'L', 'W', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3192 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3215 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3238 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3262 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3285 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3304 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3327 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3350 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3372 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3394 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3416 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3439 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3461 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3479 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3501 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3523 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3544 */ 'L', 'B', '_', 'P', '8', 0,
  /* 3550 */ 'S', 'B', '_', 'P', '8', 0,
  /* 3556 */ 'S', 'C', '_', 'P', '8', 0,
  /* 3562 */ 'S', 'C', 'D', '_', 'P', '8', 0,
  /* 3569 */ 'L', 'L', 'D', '_', 'P', '8', 0,
  /* 3576 */ 'S', 'D', '_', 'P', '8', 0,
  /* 3582 */ 'L', 'H', '_', 'P', '8', 0,
  /* 3588 */ 'S', 'H', '_', 'P', '8', 0,
  /* 3594 */ 'L', 'D', 'L', '_', 'P', '8', 0,
  /* 3601 */ 'S', 'D', 'L', '_', 'P', '8', 0,
  /* 3608 */ 'L', 'L', '_', 'P', '8', 0,
  /* 3614 */ 'L', 'W', 'L', '_', 'P', '8', 0,
  /* 3621 */ 'S', 'W', 'L', '_', 'P', '8', 0,
  /* 3628 */ 'L', 'D', 'R', '_', 'P', '8', 0,
  /* 3635 */ 'S', 'D', 'R', '_', 'P', '8', 0,
  /* 3642 */ 'L', 'W', 'R', '_', 'P', '8', 0,
  /* 3649 */ 'S', 'W', 'R', '_', 'P', '8', 0,
  /* 3656 */ 'L', 'W', '_', 'P', '8', 0,
  /* 3662 */ 'S', 'W', '_', 'P', '8', 0,
  /* 3668 */ 'L', 'B', 'u', '_', 'P', '8', 0,
  /* 3675 */ 'L', 'H', 'u', '_', 'P', '8', 0,
  /* 3682 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3697 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3713 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3728 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3744 */ 'D', 'S', 'R', 'A', 0,
  /* 3749 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3755 */ 'S', 'E', 'B', 0,
  /* 3759 */ 'L', 'B', 0,
  /* 3762 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3770 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3783 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3795 */ 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3806 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3815 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3824 */ 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 3832 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 3840 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 3848 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 3856 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3869 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3881 */ 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3892 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 3902 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3913 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3924 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 3935 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 3945 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3955 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3965 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3978 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3990 */ 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 4001 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 4009 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 4017 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4026 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4035 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4044 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4053 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4064 */ 'S', 'B', 0,
  /* 4067 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4074 */ 'M', 'S', 'U', 'B', 0,
  /* 4079 */ 'S', 'Y', 'N', 'C', 0,
  /* 4084 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4090 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4096 */ 'S', 'C', 'D', 0,
  /* 4100 */ 'D', 'A', 'D', 'D', 0,
  /* 4105 */ 'M', 'A', 'D', 'D', 0,
  /* 4110 */ 'D', 'S', 'H', 'D', 0,
  /* 4115 */ 'L', 'L', 'D', 0,
  /* 4119 */ 'A', 'N', 'D', 0,
  /* 4123 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 4131 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 4138 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 4151 */ 'S', 'D', 0,
  /* 4154 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 4167 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 4174 */ 'B', 'N', 'E', 0,
  /* 4178 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 4188 */ 'B', 'C', '1', 'F', 0,
  /* 4193 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 4206 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4221 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4235 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 4249 */ 'D', 'S', 'B', 'H', 0,
  /* 4254 */ 'W', 'S', 'B', 'H', 0,
  /* 4259 */ 'S', 'E', 'H', 0,
  /* 4263 */ 'L', 'H', 0,
  /* 4266 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 4274 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4287 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4299 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4315 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 4325 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 4334 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 4343 */ 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 4351 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 4359 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 4367 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 4375 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 4385 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 4392 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 4400 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 4408 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 4418 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 4428 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 4439 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 4450 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 4461 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 4472 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 4482 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 4491 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4501 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4511 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4521 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4531 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 4541 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 4551 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 4562 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 4572 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 4580 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 4588 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 4597 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 4606 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 4615 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 4624 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4633 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4644 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4658 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4672 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4681 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4693 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4707 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4719 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4732 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4745 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 4755 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 4765 */ 'S', 'H', 0,
  /* 4768 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 4777 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 4787 */ 'M', 'F', 'H', 'I', 0,
  /* 4792 */ 'P', 'H', 'I', 0,
  /* 4796 */ 'M', 'T', 'H', 'I', 0,
  /* 4801 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 4812 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 4823 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 4830 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 4839 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 4848 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 4855 */ 'J', 0,
  /* 4857 */ 'J', 'A', 'L', 0,
  /* 4861 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 4868 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 4875 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4890 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4904 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4919 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4930 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4941 */ 'L', 'D', 'L', 0,
  /* 4945 */ 'S', 'D', 'L', 0,
  /* 4949 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4958 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4971 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4980 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 4993 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5006 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5018 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 5032 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 5041 */ 'K', 'I', 'L', 'L', 0,
  /* 5046 */ 'D', 'S', 'L', 'L', 0,
  /* 5051 */ 'D', 'S', 'R', 'L', 0,
  /* 5056 */ 'M', 'U', 'L', 0,
  /* 5060 */ 'L', 'W', 'L', 0,
  /* 5064 */ 'S', 'W', 'L', 0,
  /* 5068 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 5078 */ 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 5086 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 5096 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 5102 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 5108 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 5115 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 5132 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5148 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5164 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5182 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5203 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5224 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5240 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5259 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5280 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5299 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5319 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5339 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5356 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5373 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5391 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5409 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5429 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5448 */ 'S', 'H', 'I', 'L', 'O', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5461 */ 'M', 'T', 'H', 'L', 'I', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5475 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5491 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5507 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5523 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5540 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5557 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5574 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5592 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5610 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5630 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5649 */ 'S', 'H', 'I', 'L', 'O', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5663 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5682 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5701 */ 'D', 'C', 'L', 'O', 0,
  /* 5706 */ 'M', 'F', 'L', 'O', 0,
  /* 5711 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 5717 */ 'M', 'T', 'L', 'O', 0,
  /* 5722 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 5729 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 5736 */ 'M', 'F', 'C', '0', '_', '3', 'O', 'P', 0,
  /* 5745 */ 'M', 'T', 'C', '0', '_', '3', 'O', 'P', 0,
  /* 5754 */ 'M', 'F', 'C', '2', '_', '3', 'O', 'P', 0,
  /* 5763 */ 'M', 'T', 'C', '2', '_', '3', 'O', 'P', 0,
  /* 5772 */ 'N', 'O', 'P', 0,
  /* 5776 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 5782 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 5788 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 5797 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 5806 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 5815 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 5825 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 5835 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 5845 */ 'E', 'X', 'T', 'P', 0,
  /* 5850 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 5865 */ 'B', 'E', 'Q', 0,
  /* 5869 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5884 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5898 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5913 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5924 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5935 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 5942 */ 'M', 'O', 'V', 'C', 'C', 'R', 'T', 'o', 'C', 'C', 'R', 0,
  /* 5954 */ 'L', 'D', 'R', 0,
  /* 5958 */ 'S', 'D', 'R', 0,
  /* 5962 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 5975 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 5988 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 6000 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 6014 */ 'J', 'R', 0,
  /* 6017 */ 'J', 'A', 'L', 'R', 0,
  /* 6022 */ 'N', 'O', 'R', 0,
  /* 6026 */ 'X', 'O', 'R', 0,
  /* 6030 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 6036 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 6042 */ 'L', 'W', 'R', 0,
  /* 6046 */ 'S', 'W', 'R', 0,
  /* 6050 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 6063 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 6074 */ 'D', 'I', 'N', 'S', 0,
  /* 6079 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 6096 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 6106 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 6116 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 6127 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 6138 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 6145 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 6153 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 6160 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 6168 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 6175 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 6182 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 6191 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 6200 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 6207 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 6217 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 6227 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 6236 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 6246 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 6254 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 6261 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 6269 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 6276 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 6283 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 6290 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 6300 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 6310 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 6319 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 6329 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 6337 */ 'B', 'C', '1', 'T', 0,
  /* 6342 */ 'R', 'E', 'T', 0,
  /* 6346 */ 'S', 'L', 'T', 0,
  /* 6350 */ 'D', 'M', 'U', 'L', 'T', 0,
  /* 6356 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 6371 */ 'D', 'E', 'X', 'T', 0,
  /* 6376 */ 'M', 'S', 'U', 'B', 'U', 0,
  /* 6382 */ 'M', 'A', 'D', 'D', 'U', 0,
  /* 6388 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 6394 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 6400 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 6406 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 6413 */ 'D', 'S', 'D', 'I', 'V', 0,
  /* 6419 */ 'D', 'U', 'D', 'I', 'V', 0,
  /* 6425 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 6431 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 6437 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 6444 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 6452 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 6458 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 6465 */ 'I', 'N', 'S', 'V', 0,
  /* 6470 */ 'L', 'W', 0,
  /* 6473 */ 'S', 'W', 0,
  /* 6476 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 6486 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 6496 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 6511 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 6523 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 6540 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 6555 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 6563 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 6571 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 6583 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 6595 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 6602 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 6611 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 6621 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 6631 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 6640 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 6650 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 6660 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 6670 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 6680 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 6691 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 6700 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 6709 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 6718 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 6727 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 6736 */ 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 6744 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 6754 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 6762 */ 'L', 'H', 'X', 0,
  /* 6766 */ 'L', 'B', 'U', 'X', 0,
  /* 6771 */ 'L', 'W', 'X', 0,
  /* 6775 */ 'C', 'O', 'P', 'Y', 0,
  /* 6780 */ 'B', 'G', 'E', 'Z', 0,
  /* 6785 */ 'B', 'L', 'E', 'Z', 0,
  /* 6790 */ 'D', 'C', 'L', 'Z', 0,
  /* 6795 */ 'B', 'G', 'T', 'Z', 0,
  /* 6800 */ 'B', 'L', 'T', 'Z', 0,
  /* 6805 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 6813 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 6821 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 6834 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 6848 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 6854 */ 'D', 'A', 'N', 'D', 'i', 0,
  /* 6860 */ 'X', 'O', 'R', 'i', 0,
  /* 6865 */ 'S', 'L', 'T', 'i', 0,
  /* 6870 */ 'L', 'U', 'i', 0,
  /* 6874 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 6888 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 6902 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 6916 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 6930 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 6944 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 6957 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 6968 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 6981 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 6994 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 7007 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 7020 */ 'L', 'B', 'u', 0,
  /* 7024 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 7030 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 7036 */ 'L', 'H', 'u', 0,
  /* 7040 */ 'S', 'L', 'T', 'u', 0,
  /* 7045 */ 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 7052 */ 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 7059 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 7069 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 7075 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 7090 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 7105 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 7119 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    4792U, 5086U, 4958U, 4971U, 4949U, 5041U, 4206U, 4221U, 
    4193U, 4235U, 6079U, 4178U, 4154U, 6775U, 4167U, 6356U, 
    4138U, 4521U, 3935U, 6727U, 4101U, 4334U, 4439U, 6621U, 
    6563U, 4400U, 4501U, 6709U, 4084U, 3815U, 3913U, 4580U, 
    4009U, 4541U, 3955U, 4090U, 6849U, 7053U, 7031U, 5115U, 
    5850U, 4119U, 583U, 6855U, 4131U, 1595U, 3304U, 400U, 
    2791U, 1102U, 3045U, 2589U, 3479U, 1518U, 3215U, 323U, 
    2702U, 994U, 2956U, 2516U, 3394U, 1559U, 3262U, 364U, 
    2749U, 1035U, 3003U, 2555U, 3439U, 1538U, 3238U, 343U, 
    2725U, 1014U, 2979U, 2535U, 3416U, 1635U, 3350U, 440U, 
    2837U, 1142U, 3091U, 2627U, 3523U, 1498U, 3192U, 303U, 
    2679U, 974U, 2933U, 2497U, 3372U, 1615U, 3327U, 420U, 
    2814U, 1122U, 3068U, 2608U, 3501U, 1579U, 3285U, 384U, 
    2772U, 1086U, 3026U, 2574U, 3461U, 1992U, 1894U, 2234U, 
    2006U, 1843U, 1910U, 2457U, 2396U, 3757U, 5108U, 5935U, 
    4188U, 6337U, 5865U, 1244U, 6780U, 1310U, 4861U, 6795U, 
    1324U, 6406U, 6785U, 1317U, 6800U, 1331U, 4868U, 4174U, 
    881U, 294U, 5132U, 2035U, 2048U, 2022U, 2070U, 1686U, 
    2098U, 1716U, 2128U, 2159U, 2183U, 2056U, 1671U, 2084U, 
    1701U, 2112U, 2144U, 2174U, 887U, 726U, 6227U, 261U, 
    848U, 6310U, 10U, 5702U, 6791U, 3856U, 3770U, 3965U, 
    3869U, 3783U, 3978U, 3881U, 3795U, 3990U, 4408U, 4315U, 
    4562U, 21U, 6096U, 6476U, 5068U, 6106U, 6486U, 749U, 
    6246U, 190U, 777U, 5078U, 6736U, 284U, 871U, 6329U, 
    510U, 4100U, 6848U, 7052U, 7030U, 6854U, 5701U, 6790U, 
    6371U, 5102U, 6394U, 6074U, 5096U, 6388U, 1196U, 15U, 
    1220U, 1208U, 26U, 1232U, 6350U, 7045U, 4644U, 5182U, 
    4719U, 5299U, 6571U, 5663U, 4681U, 5240U, 4919U, 5373U, 
    5913U, 5574U, 4745U, 5339U, 4624U, 5148U, 4658U, 5203U, 
    4732U, 5319U, 6583U, 5682U, 4707U, 5280U, 4930U, 5391U, 
    5924U, 5592U, 4755U, 5356U, 4672U, 5224U, 6030U, 6458U, 
    4249U, 6413U, 4110U, 5046U, 459U, 482U, 6425U, 3744U, 
    78U, 6400U, 5051U, 466U, 6431U, 7024U, 6419U, 2364U, 
    2342U, 6372U, 5845U, 5722U, 6444U, 6452U, 6680U, 6650U, 
    4777U, 6754U, 6670U, 6631U, 4768U, 6595U, 900U, 181U, 
    768U, 6254U, 104U, 634U, 6153U, 172U, 759U, 473U, 
    219U, 806U, 6276U, 737U, 6236U, 272U, 859U, 6319U, 
    228U, 815U, 6283U, 163U, 693U, 6200U, 132U, 662U, 
    6175U, 200U, 787U, 6261U, 85U, 615U, 6138U, 6075U, 
    6465U, 4855U, 4857U, 6017U, 1255U, 6944U, 6957U, 6014U, 
    1250U, 2228U, 2200U, 2192U, 2256U, 2207U, 3759U, 573U, 
    2901U, 6766U, 3544U, 7020U, 1383U, 3165U, 3668U, 4116U, 
    0U, 521U, 2859U, 4941U, 3594U, 5954U, 3628U, 42U, 
    535U, 2879U, 3570U, 7059U, 1408U, 4263U, 924U, 2917U, 
    6762U, 3582U, 7036U, 1389U, 3174U, 3675U, 5038U, 4115U, 
    3569U, 3608U, 54U, 551U, 6870U, 1361U, 6470U, 1300U, 
    3149U, 32U, 2645U, 5060U, 1170U, 3113U, 3614U, 6042U, 
    1282U, 3131U, 3642U, 6771U, 66U, 2661U, 3656U, 1402U, 
    3183U, 1745U, 1809U, 1777U, 1826U, 1981U, 6930U, 6834U, 
    6821U, 508U, 1862U, 1924U, 4105U, 6382U, 5825U, 5540U, 
    114U, 644U, 5797U, 5491U, 6161U, 4980U, 5409U, 5962U, 
    5610U, 5006U, 5429U, 5988U, 5630U, 5736U, 16U, 5754U, 
    4787U, 934U, 5706U, 1182U, 492U, 1367U, 4067U, 5942U, 
    123U, 653U, 4823U, 1055U, 6168U, 589U, 4801U, 948U, 
    6116U, 141U, 671U, 4830U, 1064U, 6182U, 210U, 797U, 
    4848U, 1161U, 6269U, 602U, 4812U, 961U, 6127U, 152U, 
    682U, 4839U, 1075U, 6191U, 4074U, 6376U, 5815U, 5523U, 
    95U, 625U, 5788U, 5475U, 6146U, 5745U, 27U, 5763U, 
    4796U, 941U, 5729U, 5461U, 5717U, 1189U, 5056U, 5018U, 
    6000U, 4875U, 5869U, 4461U, 6660U, 4511U, 6718U, 4693U, 
    5259U, 4633U, 5164U, 6351U, 5835U, 5557U, 5806U, 5507U, 
    7046U, 4385U, 4482U, 2221U, 2249U, 1654U, 1428U, 2309U, 
    2431U, 2330U, 2483U, 113U, 643U, 6160U, 94U, 624U, 
    6145U, 5772U, 6022U, 1262U, 2289U, 2320U, 6023U, 1263U, 
    6861U, 1348U, 2408U, 4375U, 4343U, 3824U, 4904U, 3697U, 
    5898U, 3728U, 4993U, 5975U, 4890U, 3682U, 5884U, 3713U, 
    4299U, 6511U, 4274U, 6540U, 4287U, 6496U, 6523U, 4123U, 
    4053U, 5776U, 6036U, 1274U, 4606U, 4035U, 4359U, 3840U, 
    6342U, 6031U, 6459U, 714U, 6217U, 249U, 836U, 6300U, 
    1482U, 1446U, 3749U, 1438U, 4064U, 578U, 2909U, 3550U, 
    4087U, 4096U, 3562U, 3556U, 4151U, 5U, 528U, 2869U, 
    6414U, 4945U, 3601U, 5958U, 3635U, 48U, 543U, 2890U, 
    3576U, 3755U, 567U, 4259U, 918U, 4765U, 929U, 2925U, 
    5711U, 6437U, 5649U, 5448U, 4597U, 4026U, 4551U, 6744U, 
    4351U, 3832U, 4472U, 6691U, 4588U, 4017U, 4450U, 3924U, 
    6640U, 4266U, 3762U, 4418U, 3892U, 6602U, 4615U, 4044U, 
    4367U, 3848U, 3588U, 5047U, 483U, 1338U, 6426U, 6346U, 
    1294U, 6865U, 1354U, 7069U, 1420U, 7040U, 1395U, 3745U, 
    6401U, 5052U, 6432U, 4070U, 4325U, 4428U, 6611U, 6555U, 
    4392U, 4491U, 6700U, 3806U, 3902U, 4572U, 4001U, 4531U, 
    3945U, 7025U, 60U, 559U, 6473U, 1305U, 3157U, 37U, 
    2653U, 5064U, 1176U, 3122U, 3621U, 6046U, 1288U, 3140U, 
    3649U, 72U, 2670U, 3662U, 4079U, 1469U, 1459U, 1761U, 
    6813U, 6805U, 6981U, 6888U, 7007U, 6916U, 7090U, 7119U, 
    6968U, 6874U, 6994U, 6902U, 7075U, 7105U, 1793U, 1731U, 
    2374U, 2264U, 2299U, 1950U, 1965U, 2276U, 2470U, 1664U, 
    2353U, 1738U, 2385U, 2444U, 1878U, 1937U, 5032U, 6050U, 
    6063U, 702U, 6207U, 237U, 824U, 6290U, 6420U, 5782U, 
    4254U, 6026U, 1268U, 6860U, 1347U, 2419U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 710);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 710);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

