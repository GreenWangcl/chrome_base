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

namespace PPC {
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
    ADD4	= 17,
    ADD8	= 18,
    ADD8TLS	= 19,
    ADDC	= 20,
    ADDC8	= 21,
    ADDE	= 22,
    ADDE8	= 23,
    ADDI	= 24,
    ADDI8	= 25,
    ADDI8L	= 26,
    ADDIC	= 27,
    ADDIC8	= 28,
    ADDICo	= 29,
    ADDIL	= 30,
    ADDIS	= 31,
    ADDIS8	= 32,
    ADDISdtprelHA	= 33,
    ADDISgotTprelHA	= 34,
    ADDIStlsgdHA	= 35,
    ADDIStlsldHA	= 36,
    ADDIStocHA	= 37,
    ADDIdtprelL	= 38,
    ADDItlsgdL	= 39,
    ADDItlsldL	= 40,
    ADDItocL	= 41,
    ADDME	= 42,
    ADDME8	= 43,
    ADDZE	= 44,
    ADDZE8	= 45,
    ADJCALLSTACKDOWN	= 46,
    ADJCALLSTACKUP	= 47,
    AND	= 48,
    AND8	= 49,
    ANDC	= 50,
    ANDC8	= 51,
    ANDISo	= 52,
    ANDISo8	= 53,
    ANDIo	= 54,
    ANDIo8	= 55,
    ATOMIC_CMP_SWAP_I16	= 56,
    ATOMIC_CMP_SWAP_I32	= 57,
    ATOMIC_CMP_SWAP_I64	= 58,
    ATOMIC_CMP_SWAP_I8	= 59,
    ATOMIC_LOAD_ADD_I16	= 60,
    ATOMIC_LOAD_ADD_I32	= 61,
    ATOMIC_LOAD_ADD_I64	= 62,
    ATOMIC_LOAD_ADD_I8	= 63,
    ATOMIC_LOAD_AND_I16	= 64,
    ATOMIC_LOAD_AND_I32	= 65,
    ATOMIC_LOAD_AND_I64	= 66,
    ATOMIC_LOAD_AND_I8	= 67,
    ATOMIC_LOAD_NAND_I16	= 68,
    ATOMIC_LOAD_NAND_I32	= 69,
    ATOMIC_LOAD_NAND_I64	= 70,
    ATOMIC_LOAD_NAND_I8	= 71,
    ATOMIC_LOAD_OR_I16	= 72,
    ATOMIC_LOAD_OR_I32	= 73,
    ATOMIC_LOAD_OR_I64	= 74,
    ATOMIC_LOAD_OR_I8	= 75,
    ATOMIC_LOAD_SUB_I16	= 76,
    ATOMIC_LOAD_SUB_I32	= 77,
    ATOMIC_LOAD_SUB_I64	= 78,
    ATOMIC_LOAD_SUB_I8	= 79,
    ATOMIC_LOAD_XOR_I16	= 80,
    ATOMIC_LOAD_XOR_I32	= 81,
    ATOMIC_LOAD_XOR_I64	= 82,
    ATOMIC_LOAD_XOR_I8	= 83,
    ATOMIC_SWAP_I16	= 84,
    ATOMIC_SWAP_I32	= 85,
    ATOMIC_SWAP_I64	= 86,
    ATOMIC_SWAP_I8	= 87,
    B	= 88,
    BCC	= 89,
    BCTR	= 90,
    BCTR8	= 91,
    BCTRL8_Darwin	= 92,
    BCTRL8_ELF	= 93,
    BCTRL_Darwin	= 94,
    BCTRL_SVR4	= 95,
    BDNZ	= 96,
    BDNZ8	= 97,
    BDZ	= 98,
    BDZ8	= 99,
    BL8_Darwin	= 100,
    BL8_ELF	= 101,
    BL8_NOP_ELF	= 102,
    BL8_NOP_ELF_TLSGD	= 103,
    BL8_NOP_ELF_TLSLD	= 104,
    BLA8_Darwin	= 105,
    BLA8_ELF	= 106,
    BLA8_NOP_ELF	= 107,
    BLA_Darwin	= 108,
    BLA_SVR4	= 109,
    BLR	= 110,
    BL_Darwin	= 111,
    BL_SVR4	= 112,
    CMPD	= 113,
    CMPDI	= 114,
    CMPLD	= 115,
    CMPLDI	= 116,
    CMPLW	= 117,
    CMPLWI	= 118,
    CMPW	= 119,
    CMPWI	= 120,
    CNTLZD	= 121,
    CNTLZW	= 122,
    CR6SET	= 123,
    CR6UNSET	= 124,
    CREQV	= 125,
    CROR	= 126,
    CRSET	= 127,
    CRUNSET	= 128,
    DCBA	= 129,
    DCBF	= 130,
    DCBI	= 131,
    DCBST	= 132,
    DCBT	= 133,
    DCBTST	= 134,
    DCBZ	= 135,
    DCBZL	= 136,
    DIVD	= 137,
    DIVDU	= 138,
    DIVW	= 139,
    DIVWU	= 140,
    DSS	= 141,
    DSSALL	= 142,
    DST	= 143,
    DST64	= 144,
    DSTST	= 145,
    DSTST64	= 146,
    DSTSTT	= 147,
    DSTSTT64	= 148,
    DSTT	= 149,
    DSTT64	= 150,
    DYNALLOC	= 151,
    DYNALLOC8	= 152,
    EQV	= 153,
    EQV8	= 154,
    EXTSB	= 155,
    EXTSB8	= 156,
    EXTSH	= 157,
    EXTSH8	= 158,
    EXTSW	= 159,
    EXTSW_32	= 160,
    EXTSW_32_64	= 161,
    FABSD	= 162,
    FABSS	= 163,
    FADD	= 164,
    FADDS	= 165,
    FADDrtz	= 166,
    FCFID	= 167,
    FCMPUD	= 168,
    FCMPUS	= 169,
    FCTIDZ	= 170,
    FCTIWZ	= 171,
    FDIV	= 172,
    FDIVS	= 173,
    FMADD	= 174,
    FMADDS	= 175,
    FMR	= 176,
    FMSUB	= 177,
    FMSUBS	= 178,
    FMUL	= 179,
    FMULS	= 180,
    FNABSD	= 181,
    FNABSS	= 182,
    FNEGD	= 183,
    FNEGS	= 184,
    FNMADD	= 185,
    FNMADDS	= 186,
    FNMSUB	= 187,
    FNMSUBS	= 188,
    FRSP	= 189,
    FSELD	= 190,
    FSELS	= 191,
    FSQRT	= 192,
    FSQRTS	= 193,
    FSUB	= 194,
    FSUBS	= 195,
    GETtlsADDR	= 196,
    GETtlsldADDR	= 197,
    ISEL	= 198,
    ISEL8	= 199,
    LA	= 200,
    LBZ	= 201,
    LBZ8	= 202,
    LBZU	= 203,
    LBZU8	= 204,
    LBZUX	= 205,
    LBZUX8	= 206,
    LBZX	= 207,
    LBZX8	= 208,
    LD	= 209,
    LDARX	= 210,
    LDU	= 211,
    LDUX	= 212,
    LDX	= 213,
    LDgotTprelL	= 214,
    LDinto_toc	= 215,
    LDrs	= 216,
    LDtoc	= 217,
    LDtocCPT	= 218,
    LDtocJTI	= 219,
    LDtocL	= 220,
    LDtoc_restore	= 221,
    LFD	= 222,
    LFDU	= 223,
    LFDUX	= 224,
    LFDX	= 225,
    LFS	= 226,
    LFSU	= 227,
    LFSUX	= 228,
    LFSX	= 229,
    LHA	= 230,
    LHA8	= 231,
    LHAU	= 232,
    LHAU8	= 233,
    LHAUX	= 234,
    LHAUX8	= 235,
    LHAX	= 236,
    LHAX8	= 237,
    LHBRX	= 238,
    LHZ	= 239,
    LHZ8	= 240,
    LHZU	= 241,
    LHZU8	= 242,
    LHZUX	= 243,
    LHZUX8	= 244,
    LHZX	= 245,
    LHZX8	= 246,
    LI	= 247,
    LI8	= 248,
    LIS	= 249,
    LIS8	= 250,
    LVEBX	= 251,
    LVEHX	= 252,
    LVEWX	= 253,
    LVSL	= 254,
    LVSR	= 255,
    LVX	= 256,
    LVXL	= 257,
    LWA	= 258,
    LWARX	= 259,
    LWAUX	= 260,
    LWAX	= 261,
    LWBRX	= 262,
    LWZ	= 263,
    LWZ8	= 264,
    LWZU	= 265,
    LWZU8	= 266,
    LWZUX	= 267,
    LWZUX8	= 268,
    LWZX	= 269,
    LWZX8	= 270,
    MCRF	= 271,
    MFCR	= 272,
    MFCR8	= 273,
    MFCR8pseud	= 274,
    MFCRpseud	= 275,
    MFCTR	= 276,
    MFCTR8	= 277,
    MFFS	= 278,
    MFLR	= 279,
    MFLR8	= 280,
    MFOCRF	= 281,
    MFTB8	= 282,
    MFVRSAVE	= 283,
    MFVSCR	= 284,
    MTCRF	= 285,
    MTCRF8	= 286,
    MTCTR	= 287,
    MTCTR8	= 288,
    MTFSB0	= 289,
    MTFSB1	= 290,
    MTFSF	= 291,
    MTLR	= 292,
    MTLR8	= 293,
    MTVRSAVE	= 294,
    MTVSCR	= 295,
    MULHD	= 296,
    MULHDU	= 297,
    MULHW	= 298,
    MULHWU	= 299,
    MULLD	= 300,
    MULLI	= 301,
    MULLW	= 302,
    MovePCtoLR	= 303,
    MovePCtoLR8	= 304,
    NAND	= 305,
    NAND8	= 306,
    NEG	= 307,
    NEG8	= 308,
    NOP	= 309,
    NOR	= 310,
    NOR8	= 311,
    OR	= 312,
    OR8	= 313,
    ORC	= 314,
    ORC8	= 315,
    ORI	= 316,
    ORI8	= 317,
    ORIS	= 318,
    ORIS8	= 319,
    RESTORE_CR	= 320,
    RLDCL	= 321,
    RLDICL	= 322,
    RLDICR	= 323,
    RLDIMI	= 324,
    RLWIMI	= 325,
    RLWINM	= 326,
    RLWINM8	= 327,
    RLWINMo	= 328,
    RLWNM	= 329,
    SELECT_CC_F4	= 330,
    SELECT_CC_F8	= 331,
    SELECT_CC_I4	= 332,
    SELECT_CC_I8	= 333,
    SELECT_CC_VRRC	= 334,
    SLD	= 335,
    SLW	= 336,
    SPILL_CR	= 337,
    SRAD	= 338,
    SRADI	= 339,
    SRAW	= 340,
    SRAWI	= 341,
    SRD	= 342,
    SRW	= 343,
    STB	= 344,
    STB8	= 345,
    STBU	= 346,
    STBU8	= 347,
    STBUX	= 348,
    STBUX8	= 349,
    STBX	= 350,
    STBX8	= 351,
    STD	= 352,
    STDCX	= 353,
    STDU	= 354,
    STDUX	= 355,
    STDX	= 356,
    STDX_32	= 357,
    STD_32	= 358,
    STFD	= 359,
    STFDU	= 360,
    STFDUX	= 361,
    STFDX	= 362,
    STFIWX	= 363,
    STFS	= 364,
    STFSU	= 365,
    STFSUX	= 366,
    STFSX	= 367,
    STH	= 368,
    STH8	= 369,
    STHBRX	= 370,
    STHU	= 371,
    STHU8	= 372,
    STHUX	= 373,
    STHUX8	= 374,
    STHX	= 375,
    STHX8	= 376,
    STVEBX	= 377,
    STVEHX	= 378,
    STVEWX	= 379,
    STVX	= 380,
    STVXL	= 381,
    STW	= 382,
    STW8	= 383,
    STWBRX	= 384,
    STWCX	= 385,
    STWU	= 386,
    STWU8	= 387,
    STWUX	= 388,
    STWUX8	= 389,
    STWX	= 390,
    STWX8	= 391,
    SUBF	= 392,
    SUBF8	= 393,
    SUBFC	= 394,
    SUBFC8	= 395,
    SUBFE	= 396,
    SUBFE8	= 397,
    SUBFIC	= 398,
    SUBFIC8	= 399,
    SUBFME	= 400,
    SUBFME8	= 401,
    SUBFZE	= 402,
    SUBFZE8	= 403,
    SYNC	= 404,
    TAILB	= 405,
    TAILB8	= 406,
    TAILBA	= 407,
    TAILBA8	= 408,
    TAILBCTR	= 409,
    TAILBCTR8	= 410,
    TCRETURNai	= 411,
    TCRETURNai8	= 412,
    TCRETURNdi	= 413,
    TCRETURNdi8	= 414,
    TCRETURNri	= 415,
    TCRETURNri8	= 416,
    TRAP	= 417,
    UPDATE_VRSAVE	= 418,
    VADDCUW	= 419,
    VADDFP	= 420,
    VADDSBS	= 421,
    VADDSHS	= 422,
    VADDSWS	= 423,
    VADDUBM	= 424,
    VADDUBS	= 425,
    VADDUHM	= 426,
    VADDUHS	= 427,
    VADDUWM	= 428,
    VADDUWS	= 429,
    VAND	= 430,
    VANDC	= 431,
    VAVGSB	= 432,
    VAVGSH	= 433,
    VAVGSW	= 434,
    VAVGUB	= 435,
    VAVGUH	= 436,
    VAVGUW	= 437,
    VCFSX	= 438,
    VCFSX_0	= 439,
    VCFUX	= 440,
    VCFUX_0	= 441,
    VCMPBFP	= 442,
    VCMPBFPo	= 443,
    VCMPEQFP	= 444,
    VCMPEQFPo	= 445,
    VCMPEQUB	= 446,
    VCMPEQUBo	= 447,
    VCMPEQUH	= 448,
    VCMPEQUHo	= 449,
    VCMPEQUW	= 450,
    VCMPEQUWo	= 451,
    VCMPGEFP	= 452,
    VCMPGEFPo	= 453,
    VCMPGTFP	= 454,
    VCMPGTFPo	= 455,
    VCMPGTSB	= 456,
    VCMPGTSBo	= 457,
    VCMPGTSH	= 458,
    VCMPGTSHo	= 459,
    VCMPGTSW	= 460,
    VCMPGTSWo	= 461,
    VCMPGTUB	= 462,
    VCMPGTUBo	= 463,
    VCMPGTUH	= 464,
    VCMPGTUHo	= 465,
    VCMPGTUW	= 466,
    VCMPGTUWo	= 467,
    VCTSXS	= 468,
    VCTSXS_0	= 469,
    VCTUXS	= 470,
    VCTUXS_0	= 471,
    VEXPTEFP	= 472,
    VLOGEFP	= 473,
    VMADDFP	= 474,
    VMAXFP	= 475,
    VMAXSB	= 476,
    VMAXSH	= 477,
    VMAXSW	= 478,
    VMAXUB	= 479,
    VMAXUH	= 480,
    VMAXUW	= 481,
    VMHADDSHS	= 482,
    VMHRADDSHS	= 483,
    VMINFP	= 484,
    VMINSB	= 485,
    VMINSH	= 486,
    VMINSW	= 487,
    VMINUB	= 488,
    VMINUH	= 489,
    VMINUW	= 490,
    VMLADDUHM	= 491,
    VMRGHB	= 492,
    VMRGHH	= 493,
    VMRGHW	= 494,
    VMRGLB	= 495,
    VMRGLH	= 496,
    VMRGLW	= 497,
    VMSUMMBM	= 498,
    VMSUMSHM	= 499,
    VMSUMSHS	= 500,
    VMSUMUBM	= 501,
    VMSUMUHM	= 502,
    VMSUMUHS	= 503,
    VMULESB	= 504,
    VMULESH	= 505,
    VMULEUB	= 506,
    VMULEUH	= 507,
    VMULOSB	= 508,
    VMULOSH	= 509,
    VMULOUB	= 510,
    VMULOUH	= 511,
    VNMSUBFP	= 512,
    VNOR	= 513,
    VOR	= 514,
    VPERM	= 515,
    VPKPX	= 516,
    VPKSHSS	= 517,
    VPKSHUS	= 518,
    VPKSWSS	= 519,
    VPKSWUS	= 520,
    VPKUHUM	= 521,
    VPKUHUS	= 522,
    VPKUWUM	= 523,
    VPKUWUS	= 524,
    VREFP	= 525,
    VRFIM	= 526,
    VRFIN	= 527,
    VRFIP	= 528,
    VRFIZ	= 529,
    VRLB	= 530,
    VRLH	= 531,
    VRLW	= 532,
    VRSQRTEFP	= 533,
    VSEL	= 534,
    VSL	= 535,
    VSLB	= 536,
    VSLDOI	= 537,
    VSLH	= 538,
    VSLO	= 539,
    VSLW	= 540,
    VSPLTB	= 541,
    VSPLTH	= 542,
    VSPLTISB	= 543,
    VSPLTISH	= 544,
    VSPLTISW	= 545,
    VSPLTW	= 546,
    VSR	= 547,
    VSRAB	= 548,
    VSRAH	= 549,
    VSRAW	= 550,
    VSRB	= 551,
    VSRH	= 552,
    VSRO	= 553,
    VSRW	= 554,
    VSUBCUW	= 555,
    VSUBFP	= 556,
    VSUBSBS	= 557,
    VSUBSHS	= 558,
    VSUBSWS	= 559,
    VSUBUBM	= 560,
    VSUBUBS	= 561,
    VSUBUHM	= 562,
    VSUBUHS	= 563,
    VSUBUWM	= 564,
    VSUBUWS	= 565,
    VSUM2SWS	= 566,
    VSUM4SBS	= 567,
    VSUM4SHS	= 568,
    VSUM4UBS	= 569,
    VSUMSWS	= 570,
    VUPKHPX	= 571,
    VUPKHSB	= 572,
    VUPKHSH	= 573,
    VUPKLPX	= 574,
    VUPKLSB	= 575,
    VUPKLSH	= 576,
    VXOR	= 577,
    V_SET0	= 578,
    V_SETALLONES	= 579,
    XOR	= 580,
    XOR8	= 581,
    XORI	= 582,
    XORI8	= 583,
    XORIS	= 584,
    XORIS8	= 585,
    INSTRUCTION_LIST_END = 586
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

static const uint16_t ImplicitList1[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList2[] = { PPC::R1, 0 };
static const uint16_t ImplicitList3[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList5[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList6[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList7[] = { PPC::X11, PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList8[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList9[] = { PPC::LR, 0 };
static const uint16_t ImplicitList10[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList11[] = { PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList13[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList14[] = { PPC::X1, 0 };
static const uint16_t ImplicitList15[] = { PPC::CR6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo88[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo89[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo92[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo94[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
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
  { 17,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #17 = ADD4
  { 18,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #18 = ADD8
  { 19,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #19 = ADD8TLS
  { 20,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #20 = ADDC
  { 21,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #21 = ADDC8
  { 22,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #22 = ADDE
  { 23,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #23 = ADDE8
  { 24,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #24 = ADDI
  { 25,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #25 = ADDI8
  { 26,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #26 = ADDI8L
  { 27,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #27 = ADDIC
  { 28,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #28 = ADDIC8
  { 29,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #29 = ADDICo
  { 30,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDIL
  { 31,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #31 = ADDIS
  { 32,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #32 = ADDIS8
  { 33,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #33 = ADDISdtprelHA
  { 34,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #34 = ADDISgotTprelHA
  { 35,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #35 = ADDIStlsgdHA
  { 36,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #36 = ADDIStlsldHA
  { 37,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #37 = ADDIStocHA
  { 38,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #38 = ADDIdtprelL
  { 39,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #39 = ADDItlsgdL
  { 40,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #40 = ADDItlsldL
  { 41,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #41 = ADDItocL
  { 42,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #42 = ADDME
  { 43,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #43 = ADDME8
  { 44,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #44 = ADDZE
  { 45,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #45 = ADDZE8
  { 46,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #46 = ADJCALLSTACKDOWN
  { 47,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo7 },  // Inst #47 = ADJCALLSTACKUP
  { 48,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #48 = AND
  { 49,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #49 = AND8
  { 50,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #50 = ANDC
  { 51,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #51 = ANDC8
  { 52,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo11 },  // Inst #52 = ANDISo
  { 53,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #53 = ANDISo8
  { 54,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo11 },  // Inst #54 = ANDIo
  { 55,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #55 = ANDIo8
  { 56,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #56 = ATOMIC_CMP_SWAP_I16
  { 57,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #57 = ATOMIC_CMP_SWAP_I32
  { 58,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo15 },  // Inst #58 = ATOMIC_CMP_SWAP_I64
  { 59,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #59 = ATOMIC_CMP_SWAP_I8
  { 60,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #60 = ATOMIC_LOAD_ADD_I16
  { 61,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #61 = ATOMIC_LOAD_ADD_I32
  { 62,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #62 = ATOMIC_LOAD_ADD_I64
  { 63,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #63 = ATOMIC_LOAD_ADD_I8
  { 64,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #64 = ATOMIC_LOAD_AND_I16
  { 65,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #65 = ATOMIC_LOAD_AND_I32
  { 66,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #66 = ATOMIC_LOAD_AND_I64
  { 67,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #67 = ATOMIC_LOAD_AND_I8
  { 68,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #68 = ATOMIC_LOAD_NAND_I16
  { 69,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #69 = ATOMIC_LOAD_NAND_I32
  { 70,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #70 = ATOMIC_LOAD_NAND_I64
  { 71,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #71 = ATOMIC_LOAD_NAND_I8
  { 72,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #72 = ATOMIC_LOAD_OR_I16
  { 73,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #73 = ATOMIC_LOAD_OR_I32
  { 74,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #74 = ATOMIC_LOAD_OR_I64
  { 75,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #75 = ATOMIC_LOAD_OR_I8
  { 76,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #76 = ATOMIC_LOAD_SUB_I16
  { 77,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #77 = ATOMIC_LOAD_SUB_I32
  { 78,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #78 = ATOMIC_LOAD_SUB_I64
  { 79,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #79 = ATOMIC_LOAD_SUB_I8
  { 80,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #80 = ATOMIC_LOAD_XOR_I16
  { 81,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #81 = ATOMIC_LOAD_XOR_I32
  { 82,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #82 = ATOMIC_LOAD_XOR_I64
  { 83,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #83 = ATOMIC_LOAD_XOR_I8
  { 84,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #84 = ATOMIC_SWAP_I16
  { 85,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #85 = ATOMIC_SWAP_I32
  { 86,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #86 = ATOMIC_SWAP_I64
  { 87,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #87 = ATOMIC_SWAP_I8
  { 88,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #88 = B
  { 89,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Predicable)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo18 },  // Inst #89 = BCC
  { 90,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, NULL, 0 },  // Inst #90 = BCTR
  { 91,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #91 = BCTR8
  { 92,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList6, 0 },  // Inst #92 = BCTRL8_Darwin
  { 93,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList7, ImplicitList6, 0 },  // Inst #93 = BCTRL8_ELF
  { 94,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList8, ImplicitList9, 0 },  // Inst #94 = BCTRL_Darwin
  { 95,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList8, ImplicitList9, 0 },  // Inst #95 = BCTRL_SVR4
  { 96,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #96 = BDNZ
  { 97,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList10, OperandInfo5 },  // Inst #97 = BDNZ8
  { 98,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #98 = BDZ
  { 99,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList10, OperandInfo5 },  // Inst #99 = BDZ8
  { 100,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #100 = BL8_Darwin
  { 101,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #101 = BL8_ELF
  { 102,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #102 = BL8_NOP_ELF
  { 103,	2,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo7 },  // Inst #103 = BL8_NOP_ELF_TLSGD
  { 104,	2,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo7 },  // Inst #104 = BL8_NOP_ELF_TLSLD
  { 105,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #105 = BLA8_Darwin
  { 106,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #106 = BLA8_ELF
  { 107,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #107 = BLA8_NOP_ELF
  { 108,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #108 = BLA_Darwin
  { 109,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #109 = BLA_SVR4
  { 110,	2,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Predicable)|(1<<MCID::Terminator), 0x38ULL, ImplicitList12, NULL, OperandInfo19 },  // Inst #110 = BLR
  { 111,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #111 = BL_Darwin
  { 112,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #112 = BL_SVR4
  { 113,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo20 },  // Inst #113 = CMPD
  { 114,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo21 },  // Inst #114 = CMPDI
  { 115,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo20 },  // Inst #115 = CMPLD
  { 116,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo21 },  // Inst #116 = CMPLDI
  { 117,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #117 = CMPLW
  { 118,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #118 = CMPLWI
  { 119,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #119 = CMPW
  { 120,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #120 = CMPWI
  { 121,	2,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #121 = CNTLZD
  { 122,	2,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #122 = CNTLZW
  { 123,	0,	0,	2,	0,	0, 0x0ULL, NULL, ImplicitList13, 0 },  // Inst #123 = CR6SET
  { 124,	0,	0,	2,	0,	0, 0x0ULL, NULL, ImplicitList13, 0 },  // Inst #124 = CR6UNSET
  { 125,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #125 = CREQV
  { 126,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #126 = CROR
  { 127,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #127 = CRSET
  { 128,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #128 = CRUNSET
  { 129,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #129 = DCBA
  { 130,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #130 = DCBF
  { 131,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #131 = DCBI
  { 132,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #132 = DCBST
  { 133,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #133 = DCBT
  { 134,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #134 = DCBTST
  { 135,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #135 = DCBZ
  { 136,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #136 = DCBZL
  { 137,	3,	1,	13,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #137 = DIVD
  { 138,	3,	1,	13,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #138 = DIVDU
  { 139,	3,	1,	14,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #139 = DIVW
  { 140,	3,	1,	14,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #140 = DIVWU
  { 141,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #141 = DSS
  { 142,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #142 = DSSALL
  { 143,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #143 = DST
  { 144,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #144 = DST64
  { 145,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #145 = DSTST
  { 146,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #146 = DSTST64
  { 147,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #147 = DSTSTT
  { 148,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #148 = DSTSTT64
  { 149,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #149 = DSTT
  { 150,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #150 = DSTT64
  { 151,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo30 },  // Inst #151 = DYNALLOC
  { 152,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList14, ImplicitList14, OperandInfo31 },  // Inst #152 = DYNALLOC8
  { 153,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #153 = EQV
  { 154,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #154 = EQV8
  { 155,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #155 = EXTSB
  { 156,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #156 = EXTSB8
  { 157,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #157 = EXTSH
  { 158,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #158 = EXTSH8
  { 159,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #159 = EXTSW
  { 160,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #160 = EXTSW_32
  { 161,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo32 },  // Inst #161 = EXTSW_32_64
  { 162,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #162 = FABSD
  { 163,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #163 = FABSS
  { 164,	3,	1,	5,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #164 = FADD
  { 165,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #165 = FADDS
  { 166,	3,	1,	5,	0,	0, 0x1aULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #166 = FADDrtz
  { 167,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #167 = FCFID
  { 168,	3,	1,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #168 = FCMPUD
  { 169,	3,	1,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #169 = FCMPUS
  { 170,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #170 = FCTIDZ
  { 171,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #171 = FCTIWZ
  { 172,	3,	1,	7,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #172 = FDIV
  { 173,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #173 = FDIVS
  { 174,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #174 = FMADD
  { 175,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #175 = FMADDS
  { 176,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #176 = FMR
  { 177,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #177 = FMSUB
  { 178,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #178 = FMSUBS
  { 179,	3,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #179 = FMUL
  { 180,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #180 = FMULS
  { 181,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #181 = FNABSD
  { 182,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #182 = FNABSS
  { 183,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #183 = FNEGD
  { 184,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #184 = FNEGS
  { 185,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #185 = FNMADD
  { 186,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #186 = FNMADDS
  { 187,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #187 = FNMSUB
  { 188,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #188 = FNMSUBS
  { 189,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo41 },  // Inst #189 = FRSP
  { 190,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #190 = FSELD
  { 191,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo42 },  // Inst #191 = FSELS
  { 192,	2,	1,	11,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #192 = FSQRT
  { 193,	2,	1,	11,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo34 },  // Inst #193 = FSQRTS
  { 194,	3,	1,	5,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #194 = FSUB
  { 195,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #195 = FSUBS
  { 196,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #196 = GETtlsADDR
  { 197,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #197 = GETtlsldADDR
  { 198,	5,	1,	15,	0,	0|(1<<MCID::Predicable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo43 },  // Inst #198 = ISEL
  { 199,	5,	1,	15,	0,	0|(1<<MCID::Predicable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo44 },  // Inst #199 = ISEL8
  { 200,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #200 = LA
  { 201,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #201 = LBZ
  { 202,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #202 = LBZ8
  { 203,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #203 = LBZU
  { 204,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #204 = LBZU8
  { 205,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #205 = LBZUX
  { 206,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #206 = LBZUX8
  { 207,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #207 = LBZX
  { 208,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #208 = LBZX8
  { 209,	3,	1,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #209 = LD
  { 210,	3,	1,	29,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #210 = LDARX
  { 211,	4,	2,	30,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #211 = LDU
  { 212,	4,	2,	30,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #212 = LDUX
  { 213,	3,	1,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #213 = LDX
  { 214,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo53 },  // Inst #214 = LDgotTprelL
  { 215,	1,	0,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #215 = LDinto_toc
  { 216,	3,	1,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #216 = LDrs
  { 217,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #217 = LDtoc
  { 218,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #218 = LDtocCPT
  { 219,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #219 = LDtocJTI
  { 220,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo53 },  // Inst #220 = LDtocL
  { 221,	0,	0,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, 0 },  // Inst #221 = LDtoc_restore
  { 222,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #222 = LFD
  { 223,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #223 = LFDU
  { 224,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #224 = LFDUX
  { 225,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #225 = LFDX
  { 226,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #226 = LFS
  { 227,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #227 = LFSU
  { 228,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #228 = LFSUX
  { 229,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #229 = LFSX
  { 230,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo45 },  // Inst #230 = LHA
  { 231,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo46 },  // Inst #231 = LHA8
  { 232,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #232 = LHAU
  { 233,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #233 = LHAU8
  { 234,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #234 = LHAUX
  { 235,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #235 = LHAUX8
  { 236,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #236 = LHAX
  { 237,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #237 = LHAX8
  { 238,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #238 = LHBRX
  { 239,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #239 = LHZ
  { 240,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #240 = LHZ8
  { 241,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #241 = LHZU
  { 242,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #242 = LHZU8
  { 243,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #243 = LHZUX
  { 244,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #244 = LHZUX8
  { 245,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #245 = LHZX
  { 246,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #246 = LHZX8
  { 247,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo63 },  // Inst #247 = LI
  { 248,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo64 },  // Inst #248 = LI8
  { 249,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo63 },  // Inst #249 = LIS
  { 250,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo64 },  // Inst #250 = LIS8
  { 251,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #251 = LVEBX
  { 252,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #252 = LVEHX
  { 253,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #253 = LVEWX
  { 254,	3,	1,	37,	0,	0, 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #254 = LVSL
  { 255,	3,	1,	37,	0,	0, 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #255 = LVSR
  { 256,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #256 = LVX
  { 257,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #257 = LVXL
  { 258,	3,	1,	35,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo46 },  // Inst #258 = LWA
  { 259,	3,	1,	36,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #259 = LWARX
  { 260,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #260 = LWAUX
  { 261,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #261 = LWAX
  { 262,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #262 = LWBRX
  { 263,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #263 = LWZ
  { 264,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #264 = LWZ8
  { 265,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #265 = LWZU
  { 266,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #266 = LWZU8
  { 267,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #267 = LWZUX
  { 268,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #268 = LWZUX8
  { 269,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #269 = LWZX
  { 270,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #270 = LWZX8
  { 271,	2,	1,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x21ULL, NULL, NULL, OperandInfo66 },  // Inst #271 = MCRF
  { 272,	1,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo67 },  // Inst #272 = MFCR
  { 273,	1,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo54 },  // Inst #273 = MFCR8
  { 274,	2,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo64 },  // Inst #274 = MFCR8pseud
  { 275,	2,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo63 },  // Inst #275 = MFCRpseud
  { 276,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList4, NULL, OperandInfo67 },  // Inst #276 = MFCTR
  { 277,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, NULL, OperandInfo54 },  // Inst #277 = MFCTR8
  { 278,	1,	1,	16,	0,	0, 0x1aULL, ImplicitList11, NULL, OperandInfo68 },  // Inst #278 = MFFS
  { 279,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList9, NULL, OperandInfo67 },  // Inst #279 = MFLR
  { 280,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, NULL, OperandInfo54 },  // Inst #280 = MFLR8
  { 281,	2,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x21ULL, NULL, NULL, OperandInfo63 },  // Inst #281 = MFOCRF
  { 282,	1,	1,	50,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo54 },  // Inst #282 = MFTB8
  { 283,	1,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo67 },  // Inst #283 = MFVRSAVE
  { 284,	1,	1,	45,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #284 = MFVSCR
  { 285,	2,	1,	4,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo70 },  // Inst #285 = MTCRF
  { 286,	2,	1,	4,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo71 },  // Inst #286 = MTCRF8
  { 287,	1,	0,	51,	0,	0, 0x9ULL, NULL, ImplicitList4, OperandInfo67 },  // Inst #287 = MTCTR
  { 288,	1,	0,	51,	0,	0, 0x9ULL, NULL, ImplicitList10, OperandInfo54 },  // Inst #288 = MTCTR8
  { 289,	1,	0,	17,	0,	0, 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo5 },  // Inst #289 = MTFSB0
  { 290,	1,	0,	17,	0,	0, 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo5 },  // Inst #290 = MTFSB1
  { 291,	4,	1,	17,	0,	0, 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo72 },  // Inst #291 = MTFSF
  { 292,	1,	0,	51,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList9, OperandInfo67 },  // Inst #292 = MTLR
  { 293,	1,	0,	51,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList6, OperandInfo54 },  // Inst #293 = MTLR8
  { 294,	1,	0,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo67 },  // Inst #294 = MTVRSAVE
  { 295,	1,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #295 = MTVSCR
  { 296,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #296 = MULHD
  { 297,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #297 = MULHDU
  { 298,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #298 = MULHW
  { 299,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #299 = MULHWU
  { 300,	3,	1,	18,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #300 = MULLD
  { 301,	3,	1,	21,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #301 = MULLI
  { 302,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #302 = MULLW
  { 303,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList9, 0 },  // Inst #303 = MovePCtoLR
  { 304,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList6, 0 },  // Inst #304 = MovePCtoLR8
  { 305,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #305 = NAND
  { 306,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #306 = NAND8
  { 307,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #307 = NEG
  { 308,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #308 = NEG8
  { 309,	0,	0,	26,	0,	0, 0x8ULL, NULL, NULL, 0 },  // Inst #309 = NOP
  { 310,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #310 = NOR
  { 311,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #311 = NOR8
  { 312,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #312 = OR
  { 313,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #313 = OR8
  { 314,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #314 = ORC
  { 315,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #315 = ORC8
  { 316,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #316 = ORI
  { 317,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #317 = ORI8
  { 318,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #318 = ORIS
  { 319,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #319 = ORIS8
  { 320,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #320 = RESTORE_CR
  { 321,	4,	1,	23,	0,	0, 0x8ULL, NULL, NULL, OperandInfo74 },  // Inst #321 = RLDCL
  { 322,	4,	1,	24,	0,	0, 0x8ULL, NULL, NULL, OperandInfo75 },  // Inst #322 = RLDICL
  { 323,	4,	1,	24,	0,	0, 0x8ULL, NULL, NULL, OperandInfo75 },  // Inst #323 = RLDICR
  { 324,	5,	1,	24,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo76 },  // Inst #324 = RLDIMI
  { 325,	6,	1,	22,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, NULL, OperandInfo77 },  // Inst #325 = RLWIMI
  { 326,	5,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo78 },  // Inst #326 = RLWINM
  { 327,	5,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo79 },  // Inst #327 = RLWINM8
  { 328,	5,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, ImplicitList3, OperandInfo78 },  // Inst #328 = RLWINMo
  { 329,	5,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo80 },  // Inst #329 = RLWNM
  { 330,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo81 },  // Inst #330 = SELECT_CC_F4
  { 331,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo82 },  // Inst #331 = SELECT_CC_F8
  { 332,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo83 },  // Inst #332 = SELECT_CC_I4
  { 333,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #333 = SELECT_CC_I8
  { 334,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #334 = SELECT_CC_VRRC
  { 335,	3,	1,	23,	0,	0, 0x8ULL, NULL, NULL, OperandInfo86 },  // Inst #335 = SLD
  { 336,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #336 = SLW
  { 337,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #337 = SPILL_CR
  { 338,	3,	1,	23,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo86 },  // Inst #338 = SRAD
  { 339,	3,	1,	24,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #339 = SRADI
  { 340,	3,	1,	25,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #340 = SRAW
  { 341,	3,	1,	25,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #341 = SRAWI
  { 342,	3,	1,	23,	0,	0, 0x8ULL, NULL, NULL, OperandInfo86 },  // Inst #342 = SRD
  { 343,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #343 = SRW
  { 344,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #344 = STB
  { 345,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #345 = STB8
  { 346,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo87 },  // Inst #346 = STBU
  { 347,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #347 = STBU8
  { 348,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo89 },  // Inst #348 = STBUX
  { 349,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #349 = STBUX8
  { 350,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #350 = STBX
  { 351,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #351 = STBX8
  { 352,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #352 = STD
  { 353,	3,	0,	40,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList3, OperandInfo52 },  // Inst #353 = STDCX
  { 354,	4,	1,	41,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #354 = STDU
  { 355,	4,	1,	41,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #355 = STDUX
  { 356,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #356 = STDX
  { 357,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #357 = STDX_32
  { 358,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #358 = STD_32
  { 359,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #359 = STFD
  { 360,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo91 },  // Inst #360 = STFDU
  { 361,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo92 },  // Inst #361 = STFDUX
  { 362,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #362 = STFDX
  { 363,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #363 = STFIWX
  { 364,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #364 = STFS
  { 365,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo93 },  // Inst #365 = STFSU
  { 366,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo94 },  // Inst #366 = STFSUX
  { 367,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #367 = STFSX
  { 368,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #368 = STH
  { 369,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #369 = STH8
  { 370,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #370 = STHBRX
  { 371,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo87 },  // Inst #371 = STHU
  { 372,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #372 = STHU8
  { 373,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo89 },  // Inst #373 = STHUX
  { 374,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #374 = STHUX8
  { 375,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #375 = STHX
  { 376,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #376 = STHX8
  { 377,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #377 = STVEBX
  { 378,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #378 = STVEHX
  { 379,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #379 = STVEWX
  { 380,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #380 = STVX
  { 381,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #381 = STVXL
  { 382,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #382 = STW
  { 383,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #383 = STW8
  { 384,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #384 = STWBRX
  { 385,	3,	0,	44,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList3, OperandInfo51 },  // Inst #385 = STWCX
  { 386,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo87 },  // Inst #386 = STWU
  { 387,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #387 = STWU8
  { 388,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo89 },  // Inst #388 = STWUX
  { 389,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #389 = STWUX8
  { 390,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #390 = STWX
  { 391,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #391 = STWX8
  { 392,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #392 = SUBF
  { 393,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #393 = SUBF8
  { 394,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #394 = SUBFC
  { 395,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #395 = SUBFC8
  { 396,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #396 = SUBFE
  { 397,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #397 = SUBFE8
  { 398,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #398 = SUBFIC
  { 399,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #399 = SUBFIC8
  { 400,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #400 = SUBFME
  { 401,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #401 = SUBFME8
  { 402,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #402 = SUBFZE
  { 403,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #403 = SUBFZE8
  { 404,	0,	0,	47,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #404 = SYNC
  { 405,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #405 = TAILB
  { 406,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #406 = TAILB8
  { 407,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #407 = TAILBA
  { 408,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #408 = TAILBA8
  { 409,	0,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, NULL, 0 },  // Inst #409 = TAILBCTR
  { 410,	0,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #410 = TAILBCTR8
  { 411,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #411 = TCRETURNai
  { 412,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #412 = TCRETURNai8
  { 413,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #413 = TCRETURNdi
  { 414,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #414 = TCRETURNdi8
  { 415,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo96 },  // Inst #415 = TCRETURNri
  { 416,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo97 },  // Inst #416 = TCRETURNri8
  { 417,	0,	0,	37,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #417 = TRAP
  { 418,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #418 = UPDATE_VRSAVE
  { 419,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #419 = VADDCUW
  { 420,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #420 = VADDFP
  { 421,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #421 = VADDSBS
  { 422,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #422 = VADDSHS
  { 423,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #423 = VADDSWS
  { 424,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #424 = VADDUBM
  { 425,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #425 = VADDUBS
  { 426,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #426 = VADDUHM
  { 427,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #427 = VADDUHS
  { 428,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #428 = VADDUWM
  { 429,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #429 = VADDUWS
  { 430,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #430 = VAND
  { 431,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #431 = VANDC
  { 432,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #432 = VAVGSB
  { 433,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #433 = VAVGSH
  { 434,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #434 = VAVGSW
  { 435,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #435 = VAVGUB
  { 436,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #436 = VAVGUH
  { 437,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #437 = VAVGUW
  { 438,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #438 = VCFSX
  { 439,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #439 = VCFSX_0
  { 440,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #440 = VCFUX
  { 441,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #441 = VCFUX_0
  { 442,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #442 = VCMPBFP
  { 443,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #443 = VCMPBFPo
  { 444,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #444 = VCMPEQFP
  { 445,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #445 = VCMPEQFPo
  { 446,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #446 = VCMPEQUB
  { 447,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #447 = VCMPEQUBo
  { 448,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #448 = VCMPEQUH
  { 449,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #449 = VCMPEQUHo
  { 450,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #450 = VCMPEQUW
  { 451,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #451 = VCMPEQUWo
  { 452,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #452 = VCMPGEFP
  { 453,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #453 = VCMPGEFPo
  { 454,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #454 = VCMPGTFP
  { 455,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #455 = VCMPGTFPo
  { 456,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #456 = VCMPGTSB
  { 457,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #457 = VCMPGTSBo
  { 458,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #458 = VCMPGTSH
  { 459,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #459 = VCMPGTSHo
  { 460,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #460 = VCMPGTSW
  { 461,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #461 = VCMPGTSWo
  { 462,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #462 = VCMPGTUB
  { 463,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #463 = VCMPGTUBo
  { 464,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #464 = VCMPGTUH
  { 465,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #465 = VCMPGTUHo
  { 466,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #466 = VCMPGTUW
  { 467,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #467 = VCMPGTUWo
  { 468,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #468 = VCTSXS
  { 469,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #469 = VCTSXS_0
  { 470,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #470 = VCTUXS
  { 471,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #471 = VCTUXS_0
  { 472,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #472 = VEXPTEFP
  { 473,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #473 = VLOGEFP
  { 474,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #474 = VMADDFP
  { 475,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #475 = VMAXFP
  { 476,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #476 = VMAXSB
  { 477,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #477 = VMAXSH
  { 478,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #478 = VMAXSW
  { 479,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #479 = VMAXUB
  { 480,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #480 = VMAXUH
  { 481,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #481 = VMAXUW
  { 482,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #482 = VMHADDSHS
  { 483,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #483 = VMHRADDSHS
  { 484,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #484 = VMINFP
  { 485,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #485 = VMINSB
  { 486,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #486 = VMINSH
  { 487,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #487 = VMINSW
  { 488,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #488 = VMINUB
  { 489,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #489 = VMINUH
  { 490,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #490 = VMINUW
  { 491,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #491 = VMLADDUHM
  { 492,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #492 = VMRGHB
  { 493,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #493 = VMRGHH
  { 494,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #494 = VMRGHW
  { 495,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #495 = VMRGLB
  { 496,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #496 = VMRGLH
  { 497,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #497 = VMRGLW
  { 498,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #498 = VMSUMMBM
  { 499,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #499 = VMSUMSHM
  { 500,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #500 = VMSUMSHS
  { 501,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #501 = VMSUMUBM
  { 502,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #502 = VMSUMUHM
  { 503,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #503 = VMSUMUHS
  { 504,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #504 = VMULESB
  { 505,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #505 = VMULESH
  { 506,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #506 = VMULEUB
  { 507,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #507 = VMULEUH
  { 508,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #508 = VMULOSB
  { 509,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #509 = VMULOSH
  { 510,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #510 = VMULOUB
  { 511,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #511 = VMULOUH
  { 512,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #512 = VNMSUBFP
  { 513,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #513 = VNOR
  { 514,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #514 = VOR
  { 515,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #515 = VPERM
  { 516,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #516 = VPKPX
  { 517,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #517 = VPKSHSS
  { 518,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #518 = VPKSHUS
  { 519,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #519 = VPKSWSS
  { 520,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #520 = VPKSWUS
  { 521,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #521 = VPKUHUM
  { 522,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #522 = VPKUHUS
  { 523,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #523 = VPKUWUM
  { 524,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #524 = VPKUWUS
  { 525,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #525 = VREFP
  { 526,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #526 = VRFIM
  { 527,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #527 = VRFIN
  { 528,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #528 = VRFIP
  { 529,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #529 = VRFIZ
  { 530,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #530 = VRLB
  { 531,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #531 = VRLH
  { 532,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #532 = VRLW
  { 533,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #533 = VRSQRTEFP
  { 534,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #534 = VSEL
  { 535,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #535 = VSL
  { 536,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #536 = VSLB
  { 537,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo102 },  // Inst #537 = VSLDOI
  { 538,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #538 = VSLH
  { 539,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #539 = VSLO
  { 540,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #540 = VSLW
  { 541,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #541 = VSPLTB
  { 542,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #542 = VSPLTH
  { 543,	2,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo103 },  // Inst #543 = VSPLTISB
  { 544,	2,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo103 },  // Inst #544 = VSPLTISH
  { 545,	2,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo103 },  // Inst #545 = VSPLTISW
  { 546,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #546 = VSPLTW
  { 547,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #547 = VSR
  { 548,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #548 = VSRAB
  { 549,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #549 = VSRAH
  { 550,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #550 = VSRAW
  { 551,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #551 = VSRB
  { 552,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #552 = VSRH
  { 553,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #553 = VSRO
  { 554,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #554 = VSRW
  { 555,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #555 = VSUBCUW
  { 556,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #556 = VSUBFP
  { 557,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #557 = VSUBSBS
  { 558,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #558 = VSUBSHS
  { 559,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #559 = VSUBSWS
  { 560,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #560 = VSUBUBM
  { 561,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #561 = VSUBUBS
  { 562,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #562 = VSUBUHM
  { 563,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #563 = VSUBUHS
  { 564,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #564 = VSUBUWM
  { 565,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #565 = VSUBUWS
  { 566,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #566 = VSUM2SWS
  { 567,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #567 = VSUM4SBS
  { 568,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #568 = VSUM4SHS
  { 569,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #569 = VSUM4UBS
  { 570,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #570 = VSUMSWS
  { 571,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #571 = VUPKHPX
  { 572,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #572 = VUPKHSB
  { 573,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #573 = VUPKHSH
  { 574,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #574 = VUPKLPX
  { 575,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #575 = VUPKLSB
  { 576,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #576 = VUPKLSH
  { 577,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #577 = VXOR
  { 578,	1,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo69 },  // Inst #578 = V_SET0
  { 579,	1,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo69 },  // Inst #579 = V_SETALLONES
  { 580,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #580 = XOR
  { 581,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #581 = XOR8
  { 582,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #582 = XORI
  { 583,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #583 = XORI8
  { 584,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #584 = XORIS
  { 585,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #585 = XORIS8
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 75 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 95 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 116 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 136 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 192 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 211 */ 'S', 'T', 'D', '_', '3', '2', 0,
  /* 218 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', 0,
  /* 227 */ 'S', 'T', 'D', 'X', '_', '3', '2', 0,
  /* 235 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 255 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 275 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 296 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 316 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 332 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 352 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 372 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 391 */ 'D', 'S', 'T', '6', '4', 0,
  /* 397 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 405 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 412 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 421 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 433 */ 'A', 'D', 'D', '4', 0,
  /* 438 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 451 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 464 */ 'B', 'L', 'A', '_', 'S', 'V', 'R', '4', 0,
  /* 473 */ 'B', 'L', '_', 'S', 'V', 'R', '4', 0,
  /* 481 */ 'B', 'C', 'T', 'R', 'L', '_', 'S', 'V', 'R', '4', 0,
  /* 492 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 512 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 532 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 553 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 573 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 589 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 609 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 629 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 648 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 656 */ 'L', 'H', 'A', '8', 0,
  /* 661 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 668 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 675 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 681 */ 'S', 'T', 'B', '8', 0,
  /* 686 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 692 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 698 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 705 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 712 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 720 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 730 */ 'O', 'R', 'C', '8', 0,
  /* 735 */ 'A', 'D', 'D', '8', 0,
  /* 740 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 746 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 752 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 759 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 766 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 774 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 781 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 789 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 795 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 802 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 815 */ 'N', 'E', 'G', '8', 0,
  /* 820 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 827 */ 'S', 'T', 'H', '8', 0,
  /* 832 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 838 */ 'L', 'I', '8', 0,
  /* 842 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 848 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 867 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 880 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 899 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 919 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 938 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 953 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 972 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 991 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1009 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1015 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1023 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1029 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1035 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1041 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1053 */ 'N', 'O', 'R', '8', 0,
  /* 1058 */ 'X', 'O', 'R', '8', 0,
  /* 1063 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1073 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1080 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1087 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1094 */ 'L', 'I', 'S', '8', 0,
  /* 1099 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1106 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1112 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1118 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1124 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1130 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1136 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1142 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1148 */ 'E', 'Q', 'V', '8', 0,
  /* 1153 */ 'S', 'T', 'W', '8', 0,
  /* 1158 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1164 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1170 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1176 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1183 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1190 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1197 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1204 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1211 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1218 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1225 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1231 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1237 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1243 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1249 */ 'L', 'B', 'Z', '8', 0,
  /* 1254 */ 'B', 'D', 'Z', '8', 0,
  /* 1259 */ 'L', 'H', 'Z', '8', 0,
  /* 1264 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1270 */ 'L', 'W', 'Z', '8', 0,
  /* 1275 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1287 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1299 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1311 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1318 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1326 */ 'D', 'C', 'B', 'A', 0,
  /* 1331 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1338 */ 'L', 'H', 'A', 0,
  /* 1342 */ 'A', 'D', 'D', 'I', 'S', 't', 'o', 'c', 'H', 'A', 0,
  /* 1353 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'g', 'd', 'H', 'A', 0,
  /* 1366 */ 'A', 'D', 'D', 'I', 'S', 't', 'l', 's', 'l', 'd', 'H', 'A', 0,
  /* 1379 */ 'A', 'D', 'D', 'I', 'S', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1395 */ 'A', 'D', 'D', 'I', 'S', 'd', 't', 'p', 'r', 'e', 'l', 'H', 'A', 0,
  /* 1409 */ 'L', 'A', 0,
  /* 1412 */ 'L', 'W', 'A', 0,
  /* 1416 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 1422 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 1429 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 1436 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 1442 */ 'V', 'R', 'L', 'B', 0,
  /* 1447 */ 'V', 'S', 'L', 'B', 0,
  /* 1452 */ 'V', 'S', 'R', 'B', 0,
  /* 1457 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 1465 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 1472 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 1480 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 1489 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 1497 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 1504 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 1512 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 1521 */ 'E', 'X', 'T', 'S', 'B', 0,
  /* 1527 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 1534 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 1541 */ 'S', 'T', 'B', 0,
  /* 1545 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 1553 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 1560 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 1567 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 1575 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 1584 */ 'F', 'S', 'U', 'B', 0,
  /* 1589 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 1595 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 1602 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 1611 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 1618 */ 'B', 'C', 'C', 0,
  /* 1622 */ 'A', 'D', 'D', 'C', 0,
  /* 1627 */ 'V', 'A', 'N', 'D', 'C', 0,
  /* 1633 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 1639 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 1645 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 1652 */ 'S', 'Y', 'N', 'C', 0,
  /* 1657 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1666 */ 'O', 'R', 'C', 0,
  /* 1670 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 1685 */ 'S', 'R', 'A', 'D', 0,
  /* 1690 */ 'F', 'A', 'D', 'D', 0,
  /* 1695 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 1701 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 1708 */ 'L', 'F', 'D', 0,
  /* 1712 */ 'S', 'T', 'F', 'D', 0,
  /* 1717 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1723 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', '_', 'T', 'L', 'S', 'G', 'D', 0,
  /* 1741 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 1747 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 1753 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 1759 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 1765 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 1771 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', '_', 'T', 'L', 'S', 'L', 'D', 0,
  /* 1789 */ 'N', 'A', 'N', 'D', 0,
  /* 1794 */ 'V', 'A', 'N', 'D', 0,
  /* 1799 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1812 */ 'C', 'M', 'P', 'D', 0,
  /* 1817 */ 'S', 'R', 'D', 0,
  /* 1821 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1827 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 1834 */ 'S', 'T', 'D', 0,
  /* 1838 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 1845 */ 'D', 'I', 'V', 'D', 0,
  /* 1850 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 1857 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1870 */ 'A', 'D', 'D', 'E', 0,
  /* 1875 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 1881 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1888 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 1894 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 1901 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1911 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1920 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1929 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1943 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 1949 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 1956 */ 'D', 'C', 'B', 'F', 0,
  /* 1961 */ 'S', 'U', 'B', 'F', 0,
  /* 1966 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1979 */ 'B', 'L', 'A', '8', '_', 'E', 'L', 'F', 0,
  /* 1988 */ 'B', 'L', '8', '_', 'E', 'L', 'F', 0,
  /* 1996 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'E', 'L', 'F', 0,
  /* 2007 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', 0,
  /* 2020 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', 0,
  /* 2032 */ 'M', 'C', 'R', 'F', 0,
  /* 2037 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 2044 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 2050 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 2056 */ 'N', 'E', 'G', 0,
  /* 2060 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2075 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2089 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2103 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 2109 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 2116 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 2123 */ 'V', 'R', 'L', 'H', 0,
  /* 2128 */ 'V', 'S', 'L', 'H', 0,
  /* 2133 */ 'V', 'S', 'R', 'H', 0,
  /* 2138 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 2146 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 2153 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 2161 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 2170 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 2178 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 2185 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 2193 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 2202 */ 'E', 'X', 'T', 'S', 'H', 0,
  /* 2208 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 2215 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 2222 */ 'S', 'T', 'H', 0,
  /* 2226 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 2234 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 2241 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 2248 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 2256 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 2265 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 2274 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 2281 */ 'D', 'C', 'B', 'I', 0,
  /* 2286 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 2292 */ 'A', 'D', 'D', 'I', 0,
  /* 2297 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 2304 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 2310 */ 'P', 'H', 'I', 0,
  /* 2314 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 2320 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 2327 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 2334 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 2341 */ 'X', 'O', 'R', 'I', 0,
  /* 2346 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 2355 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 2361 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 2368 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 2374 */ 'A', 'D', 'D', 'I', '8', 'L', 0,
  /* 2381 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 2387 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 2394 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2403 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2416 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2425 */ 'I', 'S', 'E', 'L', 0,
  /* 2430 */ 'V', 'S', 'E', 'L', 0,
  /* 2435 */ 'A', 'D', 'D', 'I', 'L', 0,
  /* 2441 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 2448 */ 'K', 'I', 'L', 'L', 0,
  /* 2453 */ 'L', 'V', 'S', 'L', 0,
  /* 2458 */ 'F', 'M', 'U', 'L', 0,
  /* 2463 */ 'L', 'V', 'X', 'L', 0,
  /* 2468 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 2474 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 2480 */ 'L', 'D', 't', 'o', 'c', 'L', 0,
  /* 2487 */ 'A', 'D', 'D', 'I', 't', 'o', 'c', 'L', 0,
  /* 2496 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'g', 'd', 'L', 0,
  /* 2507 */ 'A', 'D', 'D', 'I', 't', 'l', 's', 'l', 'd', 'L', 0,
  /* 2518 */ 'L', 'D', 'g', 'o', 't', 'T', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2530 */ 'A', 'D', 'D', 'I', 'd', 't', 'p', 'r', 'e', 'l', 'L', 0,
  /* 2542 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 2551 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 2559 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 2567 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 2576 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 2585 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 2593 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2603 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2611 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 2620 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 2626 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 2633 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 2639 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 2645 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2655 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 2663 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 2671 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 2679 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 2687 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 2693 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2710 */ 'V', 'S', 'L', 'O', 0,
  /* 2715 */ 'V', 'S', 'R', 'O', 0,
  /* 2720 */ 'T', 'R', 'A', 'P', 0,
  /* 2725 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 2733 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2742 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2749 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2757 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2764 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 2772 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 2781 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 2787 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 2796 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 2806 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 2813 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 2822 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 2831 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 2838 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 2844 */ 'N', 'O', 'P', 0,
  /* 2848 */ 'F', 'R', 'S', 'P', 0,
  /* 2853 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2868 */ 'M', 'F', 'C', 'R', 0,
  /* 2873 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 2880 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 2887 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 2894 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 2905 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 2914 */ 'G', 'E', 'T', 't', 'l', 's', 'l', 'd', 'A', 'D', 'D', 'R', 0,
  /* 2927 */ 'G', 'E', 'T', 't', 'l', 's', 'A', 'D', 'D', 'R', 0,
  /* 2938 */ 'B', 'L', 'R', 0,
  /* 2942 */ 'M', 'F', 'L', 'R', 0,
  /* 2947 */ 'M', 'T', 'L', 'R', 0,
  /* 2952 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 2963 */ 'F', 'M', 'R', 0,
  /* 2967 */ 'V', 'N', 'O', 'R', 0,
  /* 2972 */ 'C', 'R', 'O', 'R', 0,
  /* 2977 */ 'V', 'O', 'R', 0,
  /* 2981 */ 'V', 'X', 'O', 'R', 0,
  /* 2986 */ 'L', 'V', 'S', 'R', 0,
  /* 2991 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 3000 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 3006 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 3012 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 3021 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 3029 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 3037 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 3046 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 3054 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 3062 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 3068 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3075 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 3083 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 3089 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3096 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 3104 */ 'V', '_', 'S', 'E', 'T', 'A', 'L', 'L', 'O', 'N', 'E', 'S', 0,
  /* 3117 */ 'M', 'F', 'F', 'S', 0,
  /* 3122 */ 'L', 'F', 'S', 0,
  /* 3126 */ 'S', 'T', 'F', 'S', 0,
  /* 3131 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 3137 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 3146 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 3154 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3164 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3175 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 3183 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 3192 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 3200 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 3208 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 3217 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 3223 */ 'L', 'I', 'S', 0,
  /* 3227 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 3233 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 3239 */ 'A', 'D', 'D', '8', 'T', 'L', 'S', 0,
  /* 3247 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3253 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3270 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3276 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 3283 */ 'D', 'S', 'S', 0,
  /* 3287 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 3295 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 3303 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3310 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 3318 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 3326 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 3333 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 3341 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 3349 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3355 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 3364 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 3372 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 3380 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 3388 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 3396 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 3404 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 3411 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 3418 */ 'D', 'C', 'B', 'T', 0,
  /* 3423 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 3430 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3439 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3447 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 3453 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 3462 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3477 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3483 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 3489 */ 'D', 'S', 'T', 0,
  /* 3493 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 3500 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 3506 */ 'D', 'S', 'T', 'T', 0,
  /* 3511 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 3518 */ 'L', 'H', 'A', 'U', 0,
  /* 3523 */ 'S', 'T', 'B', 'U', 0,
  /* 3528 */ 'L', 'F', 'D', 'U', 0,
  /* 3533 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 3539 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 3546 */ 'L', 'D', 'U', 0,
  /* 3550 */ 'S', 'T', 'D', 'U', 0,
  /* 3555 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 3561 */ 'S', 'T', 'H', 'U', 0,
  /* 3566 */ 'L', 'F', 'S', 'U', 0,
  /* 3571 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 3577 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 3584 */ 'S', 'T', 'W', 'U', 0,
  /* 3589 */ 'D', 'I', 'V', 'W', 'U', 0,
  /* 3595 */ 'L', 'B', 'Z', 'U', 0,
  /* 3600 */ 'L', 'H', 'Z', 'U', 0,
  /* 3605 */ 'L', 'W', 'Z', 'U', 0,
  /* 3610 */ 'F', 'D', 'I', 'V', 0,
  /* 3615 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 3621 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 3627 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 3634 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 3640 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 3647 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 3653 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 3659 */ 'V', 'R', 'L', 'W', 0,
  /* 3664 */ 'V', 'S', 'L', 'W', 0,
  /* 3669 */ 'C', 'M', 'P', 'W', 0,
  /* 3674 */ 'V', 'S', 'R', 'W', 0,
  /* 3679 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 3686 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 3695 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 3702 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 3711 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 3717 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 3724 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 3731 */ 'S', 'T', 'W', 0,
  /* 3735 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 3743 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 3751 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 3758 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 3765 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 3774 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 3783 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 3790 */ 'D', 'I', 'V', 'W', 0,
  /* 3795 */ 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 3802 */ 'L', 'H', 'A', 'X', 0,
  /* 3807 */ 'L', 'W', 'A', 'X', 0,
  /* 3812 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 3818 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 3825 */ 'S', 'T', 'B', 'X', 0,
  /* 3830 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 3836 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 3842 */ 'L', 'F', 'D', 'X', 0,
  /* 3847 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 3853 */ 'L', 'D', 'X', 0,
  /* 3857 */ 'S', 'T', 'D', 'X', 0,
  /* 3862 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 3868 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 3875 */ 'S', 'T', 'H', 'X', 0,
  /* 3880 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 3888 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 3894 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 3902 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 3908 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 3914 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 3920 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 3927 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 3933 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 3940 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 3946 */ 'L', 'F', 'S', 'X', 0,
  /* 3951 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 3957 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 3963 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 3969 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 3975 */ 'L', 'F', 'D', 'U', 'X', 0,
  /* 3981 */ 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 3988 */ 'L', 'D', 'U', 'X', 0,
  /* 3993 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 3999 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 4005 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 4011 */ 'L', 'F', 'S', 'U', 'X', 0,
  /* 4017 */ 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 4024 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 4030 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 4036 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 4042 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 4048 */ 'L', 'V', 'X', 0,
  /* 4052 */ 'S', 'T', 'V', 'X', 0,
  /* 4057 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 4063 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 4070 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 4077 */ 'S', 'T', 'W', 'X', 0,
  /* 4082 */ 'L', 'B', 'Z', 'X', 0,
  /* 4087 */ 'L', 'H', 'Z', 'X', 0,
  /* 4092 */ 'L', 'W', 'Z', 'X', 0,
  /* 4097 */ 'C', 'O', 'P', 'Y', 0,
  /* 4102 */ 'D', 'C', 'B', 'Z', 0,
  /* 4107 */ 'L', 'B', 'Z', 0,
  /* 4111 */ 'B', 'D', 'Z', 0,
  /* 4115 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 4122 */ 'L', 'H', 'Z', 0,
  /* 4126 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 4132 */ 'B', 'D', 'N', 'Z', 0,
  /* 4137 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 4144 */ 'L', 'W', 'Z', 0,
  /* 4148 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 4154 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 4165 */ 'M', 'F', 'C', 'R', '8', 'p', 's', 'e', 'u', 'd', 0,
  /* 4176 */ 'M', 'F', 'C', 'R', 'p', 's', 'e', 'u', 'd', 0,
  /* 4186 */ 'L', 'D', 't', 'o', 'c', '_', 'r', 'e', 's', 't', 'o', 'r', 'e', 0,
  /* 4200 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 4211 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 4222 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 4233 */ 'B', 'L', 'A', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4245 */ 'B', 'L', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4256 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4270 */ 'B', 'L', 'A', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4281 */ 'B', 'L', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4291 */ 'B', 'C', 'T', 'R', 'L', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4304 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 4314 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 4324 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 4334 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 4341 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 4351 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 4361 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 4371 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 4377 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 4385 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 4394 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 4404 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 4414 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 4424 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 4431 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 4441 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 4451 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 4461 */ 'L', 'D', 'r', 's', 0,
  /* 4466 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    2310U, 2645U, 2403U, 2416U, 2394U, 2448U, 2060U, 2075U, 
    1966U, 2089U, 3253U, 1901U, 1857U, 4097U, 1881U, 3462U, 
    1799U, 433U, 735U, 3239U, 1622U, 686U, 1870U, 746U, 
    2292U, 832U, 2374U, 1639U, 705U, 4334U, 2435U, 3217U, 
    1087U, 1395U, 1379U, 1353U, 1366U, 1342U, 2530U, 2496U, 
    2507U, 2487U, 1888U, 759U, 1943U, 774U, 2693U, 2853U, 
    1790U, 741U, 1628U, 692U, 4424U, 1318U, 4371U, 1311U, 
    589U, 152U, 332U, 953U, 512U, 75U, 255U, 880U, 
    553U, 116U, 296U, 919U, 532U, 95U, 275U, 899U, 
    629U, 192U, 372U, 991U, 492U, 55U, 235U, 848U, 
    609U, 172U, 352U, 972U, 573U, 136U, 316U, 938U, 
    1420U, 1618U, 2995U, 1067U, 4256U, 1996U, 4291U, 481U, 
    4132U, 1264U, 4111U, 1254U, 4245U, 1988U, 2020U, 1723U, 
    1771U, 4233U, 1979U, 2007U, 4270U, 464U, 2938U, 4281U, 
    473U, 1812U, 2304U, 1765U, 2297U, 3653U, 2361U, 3669U, 
    2368U, 1850U, 3795U, 3423U, 3430U, 3615U, 2972U, 3447U, 
    3439U, 1326U, 1956U, 2281U, 3483U, 3418U, 3493U, 4102U, 
    2474U, 1845U, 3555U, 3790U, 3589U, 3283U, 2441U, 3489U, 
    391U, 3500U, 397U, 3511U, 412U, 3506U, 405U, 1657U, 
    720U, 3617U, 1148U, 1521U, 668U, 2202U, 820U, 3711U, 
    218U, 421U, 1821U, 3270U, 1690U, 3083U, 4466U, 1747U, 
    1838U, 3326U, 4115U, 4137U, 3610U, 3349U, 1695U, 3089U, 
    2963U, 1589U, 3068U, 2458U, 3247U, 1827U, 3276U, 1717U, 
    3131U, 1701U, 3096U, 1595U, 3075U, 2848U, 1753U, 3233U, 
    3477U, 3303U, 1584U, 3062U, 2927U, 2914U, 2425U, 1009U, 
    1409U, 4107U, 1249U, 3595U, 1130U, 4030U, 1204U, 4082U, 
    1231U, 1756U, 3902U, 3546U, 3988U, 3853U, 2518U, 4154U, 
    4461U, 4148U, 3453U, 2346U, 2480U, 4186U, 1708U, 3528U, 
    3975U, 3842U, 3122U, 3566U, 4011U, 3946U, 1338U, 656U, 
    3518U, 1106U, 3957U, 1176U, 3802U, 1158U, 3914U, 4122U, 
    1259U, 3600U, 1136U, 4036U, 1211U, 4087U, 1237U, 2317U, 
    838U, 3223U, 1094U, 3812U, 3862U, 4057U, 2453U, 2986U, 
    4048U, 2463U, 1412U, 3908U, 3963U, 3807U, 3927U, 4144U, 
    1270U, 3605U, 1142U, 4042U, 1218U, 4092U, 1243U, 2032U, 
    2868U, 1023U, 4165U, 4176U, 3000U, 1073U, 3117U, 2942U, 
    1029U, 2037U, 675U, 1911U, 2880U, 2044U, 795U, 3006U, 
    1080U, 0U, 48U, 2050U, 2947U, 1035U, 1920U, 2887U, 
    1741U, 3539U, 3634U, 3577U, 1759U, 2314U, 3647U, 2952U, 
    1041U, 1789U, 740U, 2056U, 815U, 2844U, 2968U, 1053U, 
    2969U, 1054U, 1666U, 730U, 2342U, 843U, 3228U, 1100U, 
    2894U, 2381U, 2387U, 2873U, 2320U, 2327U, 2626U, 1015U, 
    4377U, 2633U, 438U, 802U, 451U, 867U, 1670U, 1785U, 
    3665U, 2905U, 1685U, 2286U, 3622U, 2355U, 1817U, 3675U, 
    1541U, 681U, 3523U, 1112U, 3969U, 1183U, 3825U, 1164U, 
    1834U, 3830U, 3550U, 3993U, 3857U, 227U, 211U, 1712U, 
    3533U, 3981U, 3847U, 4070U, 3126U, 3571U, 4017U, 3951U, 
    2222U, 827U, 3920U, 3561U, 1118U, 4005U, 1190U, 3875U, 
    1170U, 3818U, 3868U, 4063U, 4052U, 2468U, 3731U, 1153U, 
    3933U, 3836U, 3584U, 1124U, 4024U, 1197U, 4077U, 1225U, 
    1961U, 789U, 1633U, 698U, 1875U, 752U, 1645U, 712U, 
    1894U, 766U, 1949U, 781U, 1652U, 1436U, 661U, 1331U, 
    648U, 2991U, 1063U, 4200U, 1275U, 4211U, 1287U, 4222U, 
    1299U, 2720U, 1929U, 3743U, 2757U, 3029U, 3175U, 3372U, 
    2559U, 3054U, 2603U, 3200U, 2679U, 3396U, 1794U, 1627U, 
    1465U, 2146U, 3679U, 1553U, 2234U, 3751U, 3940U, 32U, 
    3999U, 40U, 2725U, 4385U, 2813U, 4404U, 1575U, 4314U, 
    2256U, 4351U, 3765U, 4441U, 2772U, 4394U, 2822U, 4414U, 
    1512U, 4304U, 2193U, 4341U, 3702U, 4431U, 1602U, 4324U, 
    2265U, 4361U, 3774U, 4451U, 3404U, 14U, 3411U, 23U, 
    2787U, 2764U, 2749U, 2831U, 1527U, 2208U, 3717U, 1611U, 
    2274U, 3783U, 3154U, 3164U, 2806U, 1497U, 2178U, 3695U, 
    1560U, 2241U, 3758U, 2593U, 1422U, 2109U, 3627U, 1429U, 
    2116U, 3640U, 2542U, 2576U, 3183U, 2567U, 2611U, 3208U, 
    1457U, 2138U, 1545U, 2226U, 1504U, 2185U, 1567U, 2248U, 
    2733U, 2967U, 2977U, 2639U, 3888U, 3287U, 3310U, 3295U, 
    3333U, 2655U, 3318U, 2663U, 3341U, 2781U, 2620U, 2687U, 
    2838U, 4126U, 1442U, 2123U, 3659U, 2796U, 2430U, 2454U, 
    1447U, 2334U, 2128U, 2710U, 3664U, 1534U, 2215U, 1480U, 
    2161U, 3686U, 3724U, 2987U, 1416U, 2103U, 3621U, 1452U, 
    2133U, 2715U, 3674U, 3735U, 2742U, 3021U, 3146U, 3364U, 
    2551U, 3046U, 2585U, 3192U, 2671U, 3388U, 3355U, 3012U, 
    3137U, 3037U, 3380U, 3880U, 1472U, 2153U, 3894U, 1489U, 
    2170U, 2981U, 7U, 3104U, 2982U, 1058U, 2341U, 842U, 
    3227U, 1099U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 586);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfo {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 586);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

