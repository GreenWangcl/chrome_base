/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*123 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::MEMBARRIER),// ->80
/*40*/      OPC_RecordNode,   // #0 = 'membarrier' chained node
/*41*/      OPC_MoveChild, 1,
/*43*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*46*/      OPC_CheckType, MVT::i32,
/*48*/      OPC_MoveParent,
/*49*/      OPC_MoveChild, 2,
/*51*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*54*/      OPC_MoveParent,
/*55*/      OPC_MoveChild, 3,
/*57*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*60*/      OPC_MoveParent,
/*61*/      OPC_MoveChild, 4,
/*63*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*66*/      OPC_MoveParent,
/*67*/      OPC_MoveChild, 5,
/*69*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*72*/      OPC_MoveParent,
/*73*/      OPC_EmitMergeInputChains1_0,
/*74*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (SYNC)
          /*SwitchOpcode*/ 73|128,4/*585*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->669
/*84*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*85*/      OPC_MoveChild, 1,
/*87*/      OPC_Scope, 17, /*->106*/ // 21 children in Scope
/*89*/        OPC_CheckInteger, 67|128,12/*1603*/, 
/*92*/        OPC_MoveParent,
/*93*/        OPC_RecordChild2, // #1 = $dst
/*94*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*97*/        OPC_EmitMergeInputChains1_0,
/*98*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1603:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*106*/     /*Scope*/ 17, /*->124*/
/*107*/       OPC_CheckInteger, 68|128,12/*1604*/, 
/*110*/       OPC_MoveParent,
/*111*/       OPC_RecordChild2, // #1 = $dst
/*112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*115*/       OPC_EmitMergeInputChains1_0,
/*116*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1604:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*124*/     /*Scope*/ 17, /*->142*/
/*125*/       OPC_CheckInteger, 69|128,12/*1605*/, 
/*128*/       OPC_MoveParent,
/*129*/       OPC_RecordChild2, // #1 = $dst
/*130*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*133*/       OPC_EmitMergeInputChains1_0,
/*134*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1605:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*142*/     /*Scope*/ 17, /*->160*/
/*143*/       OPC_CheckInteger, 70|128,12/*1606*/, 
/*146*/       OPC_MoveParent,
/*147*/       OPC_RecordChild2, // #1 = $dst
/*148*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*151*/       OPC_EmitMergeInputChains1_0,
/*152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1606:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*160*/     /*Scope*/ 17, /*->178*/
/*161*/       OPC_CheckInteger, 71|128,12/*1607*/, 
/*164*/       OPC_MoveParent,
/*165*/       OPC_RecordChild2, // #1 = $dst
/*166*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*169*/       OPC_EmitMergeInputChains1_0,
/*170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*178*/     /*Scope*/ 17, /*->196*/
/*179*/       OPC_CheckInteger, 72|128,12/*1608*/, 
/*182*/       OPC_MoveParent,
/*183*/       OPC_RecordChild2, // #1 = $dst
/*184*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*187*/       OPC_EmitMergeInputChains1_0,
/*188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*196*/     /*Scope*/ 17, /*->214*/
/*197*/       OPC_CheckInteger, 73|128,12/*1609*/, 
/*200*/       OPC_MoveParent,
/*201*/       OPC_RecordChild2, // #1 = $dst
/*202*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*205*/       OPC_EmitMergeInputChains1_0,
/*206*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1609:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*214*/     /*Scope*/ 17, /*->232*/
/*215*/       OPC_CheckInteger, 74|128,12/*1610*/, 
/*218*/       OPC_MoveParent,
/*219*/       OPC_RecordChild2, // #1 = $dst
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1610:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*232*/     /*Scope*/ 19, /*->252*/
/*233*/       OPC_CheckInteger, 63|128,11/*1471*/, 
/*236*/       OPC_MoveParent,
/*237*/       OPC_RecordChild2, // #1 = $rS
/*238*/       OPC_RecordChild3, // #2 = $dst
/*239*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*242*/       OPC_EmitMergeInputChains1_0,
/*243*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1471:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
/*252*/     /*Scope*/ 19, /*->272*/
/*253*/       OPC_CheckInteger, 64|128,11/*1472*/, 
/*256*/       OPC_MoveParent,
/*257*/       OPC_RecordChild2, // #1 = $rS
/*258*/       OPC_RecordChild3, // #2 = $dst
/*259*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*262*/       OPC_EmitMergeInputChains1_0,
/*263*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1472:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
/*272*/     /*Scope*/ 19, /*->292*/
/*273*/       OPC_CheckInteger, 65|128,11/*1473*/, 
/*276*/       OPC_MoveParent,
/*277*/       OPC_RecordChild2, // #1 = $rS
/*278*/       OPC_RecordChild3, // #2 = $dst
/*279*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*282*/       OPC_EmitMergeInputChains1_0,
/*283*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1473:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*292*/     /*Scope*/ 19, /*->312*/
/*293*/       OPC_CheckInteger, 66|128,11/*1474*/, 
/*296*/       OPC_MoveParent,
/*297*/       OPC_RecordChild2, // #1 = $rS
/*298*/       OPC_RecordChild3, // #2 = $dst
/*299*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*302*/       OPC_EmitMergeInputChains1_0,
/*303*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1474:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*312*/     /*Scope*/ 19, /*->332*/
/*313*/       OPC_CheckInteger, 67|128,11/*1475*/, 
/*316*/       OPC_MoveParent,
/*317*/       OPC_RecordChild2, // #1 = $rS
/*318*/       OPC_RecordChild3, // #2 = $dst
/*319*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*322*/       OPC_EmitMergeInputChains1_0,
/*323*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1475:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*332*/     /*Scope*/ 33, /*->366*/
/*333*/       OPC_CheckInteger, 48|128,11/*1456*/, 
/*336*/       OPC_MoveParent,
/*337*/       OPC_RecordChild2, // #1 = $STRM
/*338*/       OPC_MoveChild, 2,
/*340*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*343*/       OPC_MoveParent,
/*344*/       OPC_EmitMergeInputChains1_0,
/*345*/       OPC_EmitInteger, MVT::i32, 0, 
/*348*/       OPC_EmitConvertToTarget, 1,
/*350*/       OPC_EmitInteger, MVT::i32, 0, 
/*353*/       OPC_EmitInteger, MVT::i32, 0, 
/*356*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1456:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*366*/     /*Scope*/ 61, /*->428*/
/*367*/       OPC_CheckInteger, 50|128,11/*1458*/, 
/*370*/       OPC_MoveParent,
/*371*/       OPC_RecordChild2, // #1 = $rA
/*372*/       OPC_Scope, 26, /*->400*/ // 2 children in Scope
/*374*/         OPC_CheckChild2Type, MVT::i32,
/*376*/         OPC_RecordChild3, // #2 = $rB
/*377*/         OPC_RecordChild4, // #3 = $STRM
/*378*/         OPC_MoveChild, 4,
/*380*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*383*/         OPC_MoveParent,
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1458:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*400*/       /*Scope*/ 26, /*->427*/
/*401*/         OPC_CheckChild2Type, MVT::i64,
/*403*/         OPC_RecordChild3, // #2 = $rB
/*404*/         OPC_RecordChild4, // #3 = $STRM
/*405*/         OPC_MoveChild, 4,
/*407*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*410*/         OPC_MoveParent,
/*411*/         OPC_EmitMergeInputChains1_0,
/*412*/         OPC_EmitInteger, MVT::i32, 0, 
/*415*/         OPC_EmitConvertToTarget, 3,
/*417*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1458:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*427*/       0, /*End of Scope*/
/*428*/     /*Scope*/ 61, /*->490*/
/*429*/       OPC_CheckInteger, 53|128,11/*1461*/, 
/*432*/       OPC_MoveParent,
/*433*/       OPC_RecordChild2, // #1 = $rA
/*434*/       OPC_Scope, 26, /*->462*/ // 2 children in Scope
/*436*/         OPC_CheckChild2Type, MVT::i32,
/*438*/         OPC_RecordChild3, // #2 = $rB
/*439*/         OPC_RecordChild4, // #3 = $STRM
/*440*/         OPC_MoveChild, 4,
/*442*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*445*/         OPC_MoveParent,
/*446*/         OPC_EmitMergeInputChains1_0,
/*447*/         OPC_EmitInteger, MVT::i32, 1, 
/*450*/         OPC_EmitConvertToTarget, 3,
/*452*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1461:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*462*/       /*Scope*/ 26, /*->489*/
/*463*/         OPC_CheckChild2Type, MVT::i64,
/*465*/         OPC_RecordChild3, // #2 = $rB
/*466*/         OPC_RecordChild4, // #3 = $STRM
/*467*/         OPC_MoveChild, 4,
/*469*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*472*/         OPC_MoveParent,
/*473*/         OPC_EmitMergeInputChains1_0,
/*474*/         OPC_EmitInteger, MVT::i32, 1, 
/*477*/         OPC_EmitConvertToTarget, 3,
/*479*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1461:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*489*/       0, /*End of Scope*/
/*490*/     /*Scope*/ 61, /*->552*/
/*491*/       OPC_CheckInteger, 51|128,11/*1459*/, 
/*494*/       OPC_MoveParent,
/*495*/       OPC_RecordChild2, // #1 = $rA
/*496*/       OPC_Scope, 26, /*->524*/ // 2 children in Scope
/*498*/         OPC_CheckChild2Type, MVT::i32,
/*500*/         OPC_RecordChild3, // #2 = $rB
/*501*/         OPC_RecordChild4, // #3 = $STRM
/*502*/         OPC_MoveChild, 4,
/*504*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*507*/         OPC_MoveParent,
/*508*/         OPC_EmitMergeInputChains1_0,
/*509*/         OPC_EmitInteger, MVT::i32, 0, 
/*512*/         OPC_EmitConvertToTarget, 3,
/*514*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1459:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*524*/       /*Scope*/ 26, /*->551*/
/*525*/         OPC_CheckChild2Type, MVT::i64,
/*527*/         OPC_RecordChild3, // #2 = $rB
/*528*/         OPC_RecordChild4, // #3 = $STRM
/*529*/         OPC_MoveChild, 4,
/*531*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*534*/         OPC_MoveParent,
/*535*/         OPC_EmitMergeInputChains1_0,
/*536*/         OPC_EmitInteger, MVT::i32, 0, 
/*539*/         OPC_EmitConvertToTarget, 3,
/*541*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1459:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*551*/       0, /*End of Scope*/
/*552*/     /*Scope*/ 61, /*->614*/
/*553*/       OPC_CheckInteger, 52|128,11/*1460*/, 
/*556*/       OPC_MoveParent,
/*557*/       OPC_RecordChild2, // #1 = $rA
/*558*/       OPC_Scope, 26, /*->586*/ // 2 children in Scope
/*560*/         OPC_CheckChild2Type, MVT::i32,
/*562*/         OPC_RecordChild3, // #2 = $rB
/*563*/         OPC_RecordChild4, // #3 = $STRM
/*564*/         OPC_MoveChild, 4,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_MoveParent,
/*570*/         OPC_EmitMergeInputChains1_0,
/*571*/         OPC_EmitInteger, MVT::i32, 1, 
/*574*/         OPC_EmitConvertToTarget, 3,
/*576*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1460:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*586*/       /*Scope*/ 26, /*->613*/
/*587*/         OPC_CheckChild2Type, MVT::i64,
/*589*/         OPC_RecordChild3, // #2 = $rB
/*590*/         OPC_RecordChild4, // #3 = $STRM
/*591*/         OPC_MoveChild, 4,
/*593*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*596*/         OPC_MoveParent,
/*597*/         OPC_EmitMergeInputChains1_0,
/*598*/         OPC_EmitInteger, MVT::i32, 1, 
/*601*/         OPC_EmitConvertToTarget, 3,
/*603*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1460:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*613*/       0, /*End of Scope*/
/*614*/     /*Scope*/ 11, /*->626*/
/*615*/       OPC_CheckInteger, 75|128,12/*1611*/, 
/*618*/       OPC_MoveParent,
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1611:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*626*/     /*Scope*/ 13, /*->640*/
/*627*/       OPC_CheckInteger, 62|128,11/*1470*/, 
/*630*/       OPC_MoveParent,
/*631*/       OPC_RecordChild2, // #1 = $vB
/*632*/       OPC_EmitMergeInputChains1_0,
/*633*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1470:iPTR, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR VRRC:v4i32:$vB)
/*640*/     /*Scope*/ 27, /*->668*/
/*641*/       OPC_CheckInteger, 49|128,11/*1457*/, 
/*644*/       OPC_MoveParent,
/*645*/       OPC_EmitMergeInputChains1_0,
/*646*/       OPC_EmitInteger, MVT::i32, 1, 
/*649*/       OPC_EmitInteger, MVT::i32, 0, 
/*652*/       OPC_EmitInteger, MVT::i32, 0, 
/*655*/       OPC_EmitInteger, MVT::i32, 0, 
/*658*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1457:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*668*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 103|128,4/*615*/,  TARGET_VAL(ISD::ADD),// ->1288
/*673*/     OPC_Scope, 49|128,1/*177*/, /*->853*/ // 3 children in Scope
/*676*/       OPC_RecordChild0, // #0 = $rA
/*677*/       OPC_MoveChild, 1,
/*679*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->707
/*683*/         OPC_RecordChild0, // #1 = $sym
/*684*/         OPC_MoveChild, 0,
/*686*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*689*/         OPC_MoveParent,
/*690*/         OPC_MoveChild, 1,
/*692*/         OPC_CheckInteger, 0, 
/*694*/         OPC_MoveParent,
/*695*/         OPC_MoveParent,
/*696*/         OPC_CheckType, MVT::i32,
/*698*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->852
/*711*/         OPC_RecordChild0, // #1 = $g
/*712*/         OPC_MoveChild, 0,
/*714*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->749
/*718*/           OPC_MoveParent,
/*719*/           OPC_MoveChild, 1,
/*721*/           OPC_CheckInteger, 0, 
/*723*/           OPC_MoveParent,
/*724*/           OPC_MoveParent,
/*725*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->748
/*739*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->783
/*752*/           OPC_MoveParent,
/*753*/           OPC_MoveChild, 1,
/*755*/           OPC_CheckInteger, 0, 
/*757*/           OPC_MoveParent,
/*758*/           OPC_MoveParent,
/*759*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->782
/*773*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->817
/*786*/           OPC_MoveParent,
/*787*/           OPC_MoveChild, 1,
/*789*/           OPC_CheckInteger, 0, 
/*791*/           OPC_MoveParent,
/*792*/           OPC_MoveParent,
/*793*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->816
/*807*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->851
/*820*/           OPC_MoveParent,
/*821*/           OPC_MoveChild, 1,
/*823*/           OPC_CheckInteger, 0, 
/*825*/           OPC_MoveParent,
/*826*/           OPC_MoveParent,
/*827*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->850
/*841*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*853*/     /*Scope*/ 53|128,1/*181*/, /*->1036*/
/*855*/       OPC_MoveChild, 0,
/*857*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->886
/*861*/         OPC_RecordChild0, // #0 = $sym
/*862*/         OPC_MoveChild, 0,
/*864*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*867*/         OPC_MoveParent,
/*868*/         OPC_MoveChild, 1,
/*870*/         OPC_CheckInteger, 0, 
/*872*/         OPC_MoveParent,
/*873*/         OPC_MoveParent,
/*874*/         OPC_RecordChild1, // #1 = $rA
/*875*/         OPC_CheckType, MVT::i32,
/*877*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1035
/*890*/         OPC_RecordChild0, // #0 = $g
/*891*/         OPC_MoveChild, 0,
/*893*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->929
/*897*/           OPC_MoveParent,
/*898*/           OPC_MoveChild, 1,
/*900*/           OPC_CheckInteger, 0, 
/*902*/           OPC_MoveParent,
/*903*/           OPC_MoveParent,
/*904*/           OPC_RecordChild1, // #1 = $in
/*905*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->928
/*919*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->964
/*932*/           OPC_MoveParent,
/*933*/           OPC_MoveChild, 1,
/*935*/           OPC_CheckInteger, 0, 
/*937*/           OPC_MoveParent,
/*938*/           OPC_MoveParent,
/*939*/           OPC_RecordChild1, // #1 = $in
/*940*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->963
/*954*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->999
/*967*/           OPC_MoveParent,
/*968*/           OPC_MoveChild, 1,
/*970*/           OPC_CheckInteger, 0, 
/*972*/           OPC_MoveParent,
/*973*/           OPC_MoveParent,
/*974*/           OPC_RecordChild1, // #1 = $in
/*975*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->998
/*989*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1034
/*1002*/          OPC_MoveParent,
/*1003*/          OPC_MoveChild, 1,
/*1005*/          OPC_CheckInteger, 0, 
/*1007*/          OPC_MoveParent,
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_RecordChild1, // #1 = $in
/*1010*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1033
/*1024*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1036*/    /*Scope*/ 121|128,1/*249*/, /*->1287*/
/*1038*/      OPC_RecordChild0, // #0 = $rA
/*1039*/      OPC_Scope, 125, /*->1166*/ // 3 children in Scope
/*1041*/        OPC_RecordChild1, // #1 = $imm
/*1042*/        OPC_MoveChild, 1,
/*1044*/        OPC_SwitchOpcode /*2 cases */, 102,  TARGET_VAL(ISD::Constant),// ->1150
/*1048*/          OPC_Scope, 29, /*->1079*/ // 4 children in Scope
/*1050*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1052*/            OPC_MoveParent,
/*1053*/            OPC_CheckType, MVT::i32,
/*1055*/            OPC_EmitConvertToTarget, 1,
/*1057*/            OPC_Scope, 9, /*->1068*/ // 2 children in Scope
/*1059*/              OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                      // Dst: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1068*/            /*Scope*/ 9, /*->1078*/
/*1069*/              OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIL), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                      // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                      // Dst: (ADDIL:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1078*/            0, /*End of Scope*/
/*1079*/          /*Scope*/ 19, /*->1099*/
/*1080*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1082*/            OPC_MoveParent,
/*1083*/            OPC_CheckType, MVT::i32,
/*1085*/            OPC_EmitConvertToTarget, 1,
/*1087*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1090*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1099*/          /*Scope*/ 29, /*->1129*/
/*1100*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1102*/            OPC_MoveParent,
/*1103*/            OPC_CheckType, MVT::i64,
/*1105*/            OPC_EmitConvertToTarget, 1,
/*1107*/            OPC_Scope, 9, /*->1118*/ // 2 children in Scope
/*1109*/              OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                      // Dst: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1118*/            /*Scope*/ 9, /*->1128*/
/*1119*/              OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8L), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                      // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                      // Dst: (ADDI8L:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1128*/            0, /*End of Scope*/
/*1129*/          /*Scope*/ 19, /*->1149*/
/*1130*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1132*/            OPC_MoveParent,
/*1133*/            OPC_CheckType, MVT::i64,
/*1135*/            OPC_EmitConvertToTarget, 1,
/*1137*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1140*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1149*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1165
/*1153*/          OPC_MoveParent,
/*1154*/          OPC_CheckType, MVT::i64,
/*1156*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 G8RC:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 G8RC:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1166*/      /*Scope*/ 18, /*->1185*/
/*1167*/        OPC_MoveChild, 0,
/*1169*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1172*/        OPC_MoveParent,
/*1173*/        OPC_RecordChild1, // #1 = $rA
/*1174*/        OPC_CheckType, MVT::i64,
/*1176*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, G8RC:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 G8RC:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1185*/      /*Scope*/ 100, /*->1286*/
/*1186*/        OPC_RecordChild1, // #1 = $imm
/*1187*/        OPC_Scope, 36, /*->1225*/ // 6 children in Scope
/*1189*/          OPC_MoveChild, 1,
/*1191*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1194*/          OPC_MoveParent,
/*1195*/          OPC_CheckType, MVT::i32,
/*1197*/          OPC_EmitConvertToTarget, 1,
/*1199*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1202*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1211*/          OPC_EmitConvertToTarget, 1,
/*1213*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1216*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1225*/        /*Scope*/ 11, /*->1237*/
/*1226*/          OPC_CheckType, MVT::i32,
/*1228*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*1237*/        /*Scope*/ 11, /*->1249*/
/*1238*/          OPC_CheckType, MVT::i64,
/*1240*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*1249*/        /*Scope*/ 11, /*->1261*/
/*1250*/          OPC_CheckType, MVT::v16i8,
/*1252*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*1261*/        /*Scope*/ 11, /*->1273*/
/*1262*/          OPC_CheckType, MVT::v8i16,
/*1264*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*1273*/        /*Scope*/ 11, /*->1285*/
/*1274*/          OPC_CheckType, MVT::v4i32,
/*1276*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*1285*/        0, /*End of Scope*/
/*1286*/      0, /*End of Scope*/
/*1287*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 72|128,6/*840*/,  TARGET_VAL(ISD::LOAD),// ->2132
/*1292*/    OPC_RecordMemRef,
/*1293*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1294*/    OPC_RecordChild1, // #1 = $src
/*1295*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1297*/    OPC_Scope, 19, /*->1318*/ // 18 children in Scope
/*1299*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1301*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1303*/      OPC_CheckType, MVT::i32,
/*1305*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1308*/      OPC_EmitMergeInputChains1_0,
/*1309*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1318*/    /*Scope*/ 19, /*->1338*/
/*1319*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1321*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1323*/      OPC_CheckType, MVT::i32,
/*1325*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1328*/      OPC_EmitMergeInputChains1_0,
/*1329*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1338*/    /*Scope*/ 19, /*->1358*/
/*1339*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1341*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1343*/      OPC_CheckType, MVT::i32,
/*1345*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1348*/      OPC_EmitMergeInputChains1_0,
/*1349*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1358*/    /*Scope*/ 17, /*->1376*/
/*1359*/      OPC_CheckPredicate, 8, // Predicate_load
/*1361*/      OPC_CheckType, MVT::i32,
/*1363*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1366*/      OPC_EmitMergeInputChains1_0,
/*1367*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1376*/    /*Scope*/ 19, /*->1396*/
/*1377*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1379*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1381*/      OPC_CheckType, MVT::i32,
/*1383*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1386*/      OPC_EmitMergeInputChains1_0,
/*1387*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1396*/    /*Scope*/ 19, /*->1416*/
/*1397*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1399*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1401*/      OPC_CheckType, MVT::i32,
/*1403*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1406*/      OPC_EmitMergeInputChains1_0,
/*1407*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1416*/    /*Scope*/ 19, /*->1436*/
/*1417*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1419*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1421*/      OPC_CheckType, MVT::i32,
/*1423*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1426*/      OPC_EmitMergeInputChains1_0,
/*1427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1436*/    /*Scope*/ 17, /*->1454*/
/*1437*/      OPC_CheckPredicate, 8, // Predicate_load
/*1439*/      OPC_CheckType, MVT::i32,
/*1441*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1444*/      OPC_EmitMergeInputChains1_0,
/*1445*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1454*/    /*Scope*/ 36, /*->1491*/
/*1455*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1457*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1459*/      OPC_CheckType, MVT::i32,
/*1461*/      OPC_Scope, 13, /*->1476*/ // 2 children in Scope
/*1463*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1466*/        OPC_EmitMergeInputChains1_0,
/*1467*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1476*/      /*Scope*/ 13, /*->1490*/
/*1477*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1480*/        OPC_EmitMergeInputChains1_0,
/*1481*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1490*/      0, /*End of Scope*/
/*1491*/    /*Scope*/ 105, /*->1597*/
/*1492*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1494*/      OPC_CheckType, MVT::i32,
/*1496*/      OPC_Scope, 32, /*->1530*/ // 3 children in Scope
/*1498*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1500*/        OPC_Scope, 13, /*->1515*/ // 2 children in Scope
/*1502*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1505*/          OPC_EmitMergeInputChains1_0,
/*1506*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1515*/        /*Scope*/ 13, /*->1529*/
/*1516*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1519*/          OPC_EmitMergeInputChains1_0,
/*1520*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1529*/        0, /*End of Scope*/
/*1530*/      /*Scope*/ 32, /*->1563*/
/*1531*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1533*/        OPC_Scope, 13, /*->1548*/ // 2 children in Scope
/*1535*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1538*/          OPC_EmitMergeInputChains1_0,
/*1539*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1548*/        /*Scope*/ 13, /*->1562*/
/*1549*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1552*/          OPC_EmitMergeInputChains1_0,
/*1553*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1562*/        0, /*End of Scope*/
/*1563*/      /*Scope*/ 32, /*->1596*/
/*1564*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1566*/        OPC_Scope, 13, /*->1581*/ // 2 children in Scope
/*1568*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1571*/          OPC_EmitMergeInputChains1_0,
/*1572*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1581*/        /*Scope*/ 13, /*->1595*/
/*1582*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1585*/          OPC_EmitMergeInputChains1_0,
/*1586*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1595*/        0, /*End of Scope*/
/*1596*/      0, /*End of Scope*/
/*1597*/    /*Scope*/ 70, /*->1668*/
/*1598*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1600*/      OPC_CheckType, MVT::i64,
/*1602*/      OPC_Scope, 15, /*->1619*/ // 4 children in Scope
/*1604*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1606*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1609*/        OPC_EmitMergeInputChains1_0,
/*1610*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1619*/      /*Scope*/ 15, /*->1635*/
/*1620*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1622*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1625*/        OPC_EmitMergeInputChains1_0,
/*1626*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1635*/      /*Scope*/ 15, /*->1651*/
/*1636*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1638*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1641*/        OPC_EmitMergeInputChains1_0,
/*1642*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1651*/      /*Scope*/ 15, /*->1667*/
/*1652*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1654*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1657*/        OPC_EmitMergeInputChains1_0,
/*1658*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1667*/      0, /*End of Scope*/
/*1668*/    /*Scope*/ 102, /*->1771*/
/*1669*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1671*/      OPC_CheckType, MVT::i64,
/*1673*/      OPC_Scope, 15, /*->1690*/ // 6 children in Scope
/*1675*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1677*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1680*/        OPC_EmitMergeInputChains1_0,
/*1681*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1690*/      /*Scope*/ 15, /*->1706*/
/*1691*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1693*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1696*/        OPC_EmitMergeInputChains1_0,
/*1697*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1706*/      /*Scope*/ 15, /*->1722*/
/*1707*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1709*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1712*/        OPC_EmitMergeInputChains1_0,
/*1713*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1722*/      /*Scope*/ 15, /*->1738*/
/*1723*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1725*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1728*/        OPC_EmitMergeInputChains1_0,
/*1729*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1738*/      /*Scope*/ 15, /*->1754*/
/*1739*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1741*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1744*/        OPC_EmitMergeInputChains1_0,
/*1745*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1754*/      /*Scope*/ 15, /*->1770*/
/*1755*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1757*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1760*/        OPC_EmitMergeInputChains1_0,
/*1761*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1770*/      0, /*End of Scope*/
/*1771*/    /*Scope*/ 34, /*->1806*/
/*1772*/      OPC_CheckPredicate, 8, // Predicate_load
/*1774*/      OPC_CheckType, MVT::i64,
/*1776*/      OPC_Scope, 13, /*->1791*/ // 2 children in Scope
/*1778*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1781*/        OPC_EmitMergeInputChains1_0,
/*1782*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1791*/      /*Scope*/ 13, /*->1805*/
/*1792*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1795*/        OPC_EmitMergeInputChains1_0,
/*1796*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1805*/      0, /*End of Scope*/
/*1806*/    /*Scope*/ 36, /*->1843*/
/*1807*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1809*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1811*/      OPC_CheckType, MVT::i64,
/*1813*/      OPC_Scope, 13, /*->1828*/ // 2 children in Scope
/*1815*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1818*/        OPC_EmitMergeInputChains1_0,
/*1819*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1828*/      /*Scope*/ 13, /*->1842*/
/*1829*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1832*/        OPC_EmitMergeInputChains1_0,
/*1833*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1842*/      0, /*End of Scope*/
/*1843*/    /*Scope*/ 10|128,1/*138*/, /*->1983*/
/*1845*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1847*/      OPC_CheckType, MVT::i64,
/*1849*/      OPC_Scope, 32, /*->1883*/ // 4 children in Scope
/*1851*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1853*/        OPC_Scope, 13, /*->1868*/ // 2 children in Scope
/*1855*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1858*/          OPC_EmitMergeInputChains1_0,
/*1859*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1868*/        /*Scope*/ 13, /*->1882*/
/*1869*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1872*/          OPC_EmitMergeInputChains1_0,
/*1873*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1882*/        0, /*End of Scope*/
/*1883*/      /*Scope*/ 32, /*->1916*/
/*1884*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1886*/        OPC_Scope, 13, /*->1901*/ // 2 children in Scope
/*1888*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1891*/          OPC_EmitMergeInputChains1_0,
/*1892*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1901*/        /*Scope*/ 13, /*->1915*/
/*1902*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1905*/          OPC_EmitMergeInputChains1_0,
/*1906*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1915*/        0, /*End of Scope*/
/*1916*/      /*Scope*/ 32, /*->1949*/
/*1917*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1919*/        OPC_Scope, 13, /*->1934*/ // 2 children in Scope
/*1921*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1924*/          OPC_EmitMergeInputChains1_0,
/*1925*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1934*/        /*Scope*/ 13, /*->1948*/
/*1935*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1938*/          OPC_EmitMergeInputChains1_0,
/*1939*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1948*/        0, /*End of Scope*/
/*1949*/      /*Scope*/ 32, /*->1982*/
/*1950*/        OPC_CheckPredicate, 16, // Predicate_extloadi32
/*1952*/        OPC_Scope, 13, /*->1967*/ // 2 children in Scope
/*1954*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1957*/          OPC_EmitMergeInputChains1_0,
/*1958*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1967*/        /*Scope*/ 13, /*->1981*/
/*1968*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1971*/          OPC_EmitMergeInputChains1_0,
/*1972*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1981*/        0, /*End of Scope*/
/*1982*/      0, /*End of Scope*/
/*1983*/    /*Scope*/ 68, /*->2052*/
/*1984*/      OPC_CheckPredicate, 8, // Predicate_load
/*1986*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->2019
/*1989*/        OPC_Scope, 13, /*->2004*/ // 2 children in Scope
/*1991*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1994*/          OPC_EmitMergeInputChains1_0,
/*1995*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2004*/        /*Scope*/ 13, /*->2018*/
/*2005*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2008*/          OPC_EmitMergeInputChains1_0,
/*2009*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2018*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2051
/*2021*/        OPC_Scope, 13, /*->2036*/ // 2 children in Scope
/*2023*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2026*/          OPC_EmitMergeInputChains1_0,
/*2027*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2036*/        /*Scope*/ 13, /*->2050*/
/*2037*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2040*/          OPC_EmitMergeInputChains1_0,
/*2041*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2050*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2052*/    /*Scope*/ 60, /*->2113*/
/*2053*/      OPC_CheckPredicate, 10, // Predicate_extload
/*2055*/      OPC_CheckPredicate, 17, // Predicate_extloadf32
/*2057*/      OPC_CheckType, MVT::f64,
/*2059*/      OPC_Scope, 25, /*->2086*/ // 2 children in Scope
/*2061*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2064*/        OPC_EmitMergeInputChains1_0,
/*2065*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2074*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2077*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:f64)
/*2086*/      /*Scope*/ 25, /*->2112*/
/*2087*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2090*/        OPC_EmitMergeInputChains1_0,
/*2091*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2100*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2103*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:f64)
/*2112*/      0, /*End of Scope*/
/*2113*/    /*Scope*/ 17, /*->2131*/
/*2114*/      OPC_CheckPredicate, 8, // Predicate_load
/*2116*/      OPC_CheckType, MVT::v4i32,
/*2118*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2121*/      OPC_EmitMergeInputChains1_0,
/*2122*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2131*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,5/*732*/,  TARGET_VAL(ISD::STORE),// ->2868
/*2136*/    OPC_RecordMemRef,
/*2137*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2138*/    OPC_RecordChild1, // #1 = $rS
/*2139*/    OPC_Scope, 112|128,1/*240*/, /*->2382*/ // 5 children in Scope
/*2142*/      OPC_CheckChild1Type, MVT::i32,
/*2144*/      OPC_RecordChild2, // #2 = $src
/*2145*/      OPC_Scope, 110, /*->2257*/ // 2 children in Scope
/*2147*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2149*/        OPC_Scope, 36, /*->2187*/ // 4 children in Scope
/*2151*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2153*/          OPC_Scope, 15, /*->2170*/ // 2 children in Scope
/*2155*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2157*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2160*/            OPC_EmitMergeInputChains1_0,
/*2161*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB GPRC:i32:$rS, iaddr:iPTR:$src)
/*2170*/          /*Scope*/ 15, /*->2186*/
/*2171*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2173*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2176*/            OPC_EmitMergeInputChains1_0,
/*2177*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH GPRC:i32:$rS, iaddr:iPTR:$src)
/*2186*/          0, /*End of Scope*/
/*2187*/        /*Scope*/ 15, /*->2203*/
/*2188*/          OPC_CheckPredicate, 22, // Predicate_store
/*2190*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2193*/          OPC_EmitMergeInputChains1_0,
/*2194*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW GPRC:i32:$rS, iaddr:iPTR:$src)
/*2203*/        /*Scope*/ 36, /*->2240*/
/*2204*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2206*/          OPC_Scope, 15, /*->2223*/ // 2 children in Scope
/*2208*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2210*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2213*/            OPC_EmitMergeInputChains1_0,
/*2214*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2223*/          /*Scope*/ 15, /*->2239*/
/*2224*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2226*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2229*/            OPC_EmitMergeInputChains1_0,
/*2230*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2239*/          0, /*End of Scope*/
/*2240*/        /*Scope*/ 15, /*->2256*/
/*2241*/          OPC_CheckPredicate, 22, // Predicate_store
/*2243*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2246*/          OPC_EmitMergeInputChains1_0,
/*2247*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2256*/        0, /*End of Scope*/
/*2257*/      /*Scope*/ 123, /*->2381*/
/*2258*/        OPC_RecordChild3, // #3 = $ptroff
/*2259*/        OPC_Scope, 40, /*->2301*/ // 4 children in Scope
/*2261*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2263*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2265*/          OPC_Scope, 16, /*->2283*/ // 2 children in Scope
/*2267*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2269*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2272*/            OPC_EmitMergeInputChains1_0,
/*2273*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2283*/          /*Scope*/ 16, /*->2300*/
/*2284*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2286*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2289*/            OPC_EmitMergeInputChains1_0,
/*2290*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2300*/          0, /*End of Scope*/
/*2301*/        /*Scope*/ 18, /*->2320*/
/*2302*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2304*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2306*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2309*/          OPC_EmitMergeInputChains1_0,
/*2310*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2320*/        /*Scope*/ 40, /*->2361*/
/*2321*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2323*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2325*/          OPC_Scope, 16, /*->2343*/ // 2 children in Scope
/*2327*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2329*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2332*/            OPC_EmitMergeInputChains1_0,
/*2333*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2343*/          /*Scope*/ 16, /*->2360*/
/*2344*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2346*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2349*/            OPC_EmitMergeInputChains1_0,
/*2350*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2360*/          0, /*End of Scope*/
/*2361*/        /*Scope*/ 18, /*->2380*/
/*2362*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2364*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2366*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2369*/          OPC_EmitMergeInputChains1_0,
/*2370*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2380*/        0, /*End of Scope*/
/*2381*/      0, /*End of Scope*/
/*2382*/    /*Scope*/ 78, /*->2461*/
/*2383*/      OPC_CheckChild1Type, MVT::f32,
/*2385*/      OPC_RecordChild2, // #2 = $dst
/*2386*/      OPC_Scope, 34, /*->2422*/ // 2 children in Scope
/*2388*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2390*/        OPC_CheckPredicate, 22, // Predicate_store
/*2392*/        OPC_Scope, 13, /*->2407*/ // 2 children in Scope
/*2394*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2397*/          OPC_EmitMergeInputChains1_0,
/*2398*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS F4RC:f32:$rS, iaddr:iPTR:$dst)
/*2407*/        /*Scope*/ 13, /*->2421*/
/*2408*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2411*/          OPC_EmitMergeInputChains1_0,
/*2412*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX F4RC:f32:$frS, xaddr:iPTR:$dst)
/*2421*/        0, /*End of Scope*/
/*2422*/      /*Scope*/ 37, /*->2460*/
/*2423*/        OPC_RecordChild3, // #3 = $ptroff
/*2424*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2426*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2428*/        OPC_Scope, 14, /*->2444*/ // 2 children in Scope
/*2430*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2433*/          OPC_EmitMergeInputChains1_0,
/*2434*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2444*/        /*Scope*/ 14, /*->2459*/
/*2445*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2448*/          OPC_EmitMergeInputChains1_0,
/*2449*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSUX:iPTR F4RC:f32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2459*/        0, /*End of Scope*/
/*2460*/      0, /*End of Scope*/
/*2461*/    /*Scope*/ 78, /*->2540*/
/*2462*/      OPC_CheckChild1Type, MVT::f64,
/*2464*/      OPC_RecordChild2, // #2 = $dst
/*2465*/      OPC_Scope, 34, /*->2501*/ // 2 children in Scope
/*2467*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2469*/        OPC_CheckPredicate, 22, // Predicate_store
/*2471*/        OPC_Scope, 13, /*->2486*/ // 2 children in Scope
/*2473*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2476*/          OPC_EmitMergeInputChains1_0,
/*2477*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD F8RC:f64:$rS, iaddr:iPTR:$dst)
/*2486*/        /*Scope*/ 13, /*->2500*/
/*2487*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2490*/          OPC_EmitMergeInputChains1_0,
/*2491*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX F8RC:f64:$frS, xaddr:iPTR:$dst)
/*2500*/        0, /*End of Scope*/
/*2501*/      /*Scope*/ 37, /*->2539*/
/*2502*/        OPC_RecordChild3, // #3 = $ptroff
/*2503*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2505*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2507*/        OPC_Scope, 14, /*->2523*/ // 2 children in Scope
/*2509*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2512*/          OPC_EmitMergeInputChains1_0,
/*2513*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2523*/        /*Scope*/ 14, /*->2538*/
/*2524*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2527*/          OPC_EmitMergeInputChains1_0,
/*2528*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDUX:iPTR F8RC:f64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2538*/        0, /*End of Scope*/
/*2539*/      0, /*End of Scope*/
/*2540*/    /*Scope*/ 20, /*->2561*/
/*2541*/      OPC_CheckChild1Type, MVT::v4i32,
/*2543*/      OPC_RecordChild2, // #2 = $dst
/*2544*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2546*/      OPC_CheckPredicate, 22, // Predicate_store
/*2548*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2551*/      OPC_EmitMergeInputChains1_0,
/*2552*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*2561*/    /*Scope*/ 48|128,2/*304*/, /*->2867*/
/*2563*/      OPC_CheckChild1Type, MVT::i64,
/*2565*/      OPC_RecordChild2, // #2 = $src
/*2566*/      OPC_Scope, 10|128,1/*138*/, /*->2707*/ // 2 children in Scope
/*2569*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2571*/        OPC_Scope, 100, /*->2673*/ // 2 children in Scope
/*2573*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2575*/          OPC_Scope, 15, /*->2592*/ // 6 children in Scope
/*2577*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2579*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2582*/            OPC_EmitMergeInputChains1_0,
/*2583*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2592*/          /*Scope*/ 15, /*->2608*/
/*2593*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2595*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2598*/            OPC_EmitMergeInputChains1_0,
/*2599*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2608*/          /*Scope*/ 15, /*->2624*/
/*2609*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2611*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2614*/            OPC_EmitMergeInputChains1_0,
/*2615*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2624*/          /*Scope*/ 15, /*->2640*/
/*2625*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2627*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2630*/            OPC_EmitMergeInputChains1_0,
/*2631*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2640*/          /*Scope*/ 15, /*->2656*/
/*2641*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2643*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2646*/            OPC_EmitMergeInputChains1_0,
/*2647*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2656*/          /*Scope*/ 15, /*->2672*/
/*2657*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2659*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2662*/            OPC_EmitMergeInputChains1_0,
/*2663*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2672*/          0, /*End of Scope*/
/*2673*/        /*Scope*/ 32, /*->2706*/
/*2674*/          OPC_CheckPredicate, 22, // Predicate_store
/*2676*/          OPC_Scope, 13, /*->2691*/ // 2 children in Scope
/*2678*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2681*/            OPC_EmitMergeInputChains1_0,
/*2682*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STD G8RC:i64:$rS, ixaddr:iPTR:$dst)
/*2691*/          /*Scope*/ 13, /*->2705*/
/*2692*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2695*/            OPC_EmitMergeInputChains1_0,
/*2696*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2705*/          0, /*End of Scope*/
/*2706*/        0, /*End of Scope*/
/*2707*/      /*Scope*/ 29|128,1/*157*/, /*->2866*/
/*2709*/        OPC_RecordChild3, // #3 = $ptroff
/*2710*/        OPC_Scope, 57, /*->2769*/ // 4 children in Scope
/*2712*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2714*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2716*/          OPC_Scope, 16, /*->2734*/ // 3 children in Scope
/*2718*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2720*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2723*/            OPC_EmitMergeInputChains1_0,
/*2724*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2734*/          /*Scope*/ 16, /*->2751*/
/*2735*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2737*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2740*/            OPC_EmitMergeInputChains1_0,
/*2741*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2751*/          /*Scope*/ 16, /*->2768*/
/*2752*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti32
/*2754*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2757*/            OPC_EmitMergeInputChains1_0,
/*2758*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2768*/          0, /*End of Scope*/
/*2769*/        /*Scope*/ 18, /*->2788*/
/*2770*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2772*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2774*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2777*/          OPC_EmitMergeInputChains1_0,
/*2778*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2788*/        /*Scope*/ 57, /*->2846*/
/*2789*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2791*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2793*/          OPC_Scope, 16, /*->2811*/ // 3 children in Scope
/*2795*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2797*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2800*/            OPC_EmitMergeInputChains1_0,
/*2801*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2811*/          /*Scope*/ 16, /*->2828*/
/*2812*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2814*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2817*/            OPC_EmitMergeInputChains1_0,
/*2818*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2828*/          /*Scope*/ 16, /*->2845*/
/*2829*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti32
/*2831*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2834*/            OPC_EmitMergeInputChains1_0,
/*2835*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2845*/          0, /*End of Scope*/
/*2846*/        /*Scope*/ 18, /*->2865*/
/*2847*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2849*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2851*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2854*/          OPC_EmitMergeInputChains1_0,
/*2855*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDUX:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2865*/        0, /*End of Scope*/
/*2866*/      0, /*End of Scope*/
/*2867*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2954
/*2871*/    OPC_RecordMemRef,
/*2872*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2873*/    OPC_RecordChild1, // #1 = $ptr
/*2874*/    OPC_RecordChild2, // #2 = $incr
/*2875*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2934
/*2878*/      OPC_Scope, 17, /*->2897*/ // 3 children in Scope
/*2880*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_add_8
/*2882*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2885*/        OPC_EmitMergeInputChains1_0,
/*2886*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2897*/      /*Scope*/ 17, /*->2915*/
/*2898*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_add_16
/*2900*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2903*/        OPC_EmitMergeInputChains1_0,
/*2904*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2915*/      /*Scope*/ 17, /*->2933*/
/*2916*/        OPC_CheckPredicate, 33, // Predicate_atomic_load_add_32
/*2918*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2921*/        OPC_EmitMergeInputChains1_0,
/*2922*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2933*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2953
/*2936*/      OPC_CheckPredicate, 34, // Predicate_atomic_load_add_64
/*2938*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2941*/      OPC_EmitMergeInputChains1_0,
/*2942*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3040
/*2957*/    OPC_RecordMemRef,
/*2958*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2959*/    OPC_RecordChild1, // #1 = $ptr
/*2960*/    OPC_RecordChild2, // #2 = $incr
/*2961*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3020
/*2964*/      OPC_Scope, 17, /*->2983*/ // 3 children in Scope
/*2966*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_8
/*2968*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2971*/        OPC_EmitMergeInputChains1_0,
/*2972*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2983*/      /*Scope*/ 17, /*->3001*/
/*2984*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_16
/*2986*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2989*/        OPC_EmitMergeInputChains1_0,
/*2990*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3001*/      /*Scope*/ 17, /*->3019*/
/*3002*/        OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_32
/*3004*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3007*/        OPC_EmitMergeInputChains1_0,
/*3008*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3019*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3039
/*3022*/      OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_64
/*3024*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3027*/      OPC_EmitMergeInputChains1_0,
/*3028*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3126
/*3043*/    OPC_RecordMemRef,
/*3044*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3045*/    OPC_RecordChild1, // #1 = $ptr
/*3046*/    OPC_RecordChild2, // #2 = $incr
/*3047*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3106
/*3050*/      OPC_Scope, 17, /*->3069*/ // 3 children in Scope
/*3052*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_and_8
/*3054*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3057*/        OPC_EmitMergeInputChains1_0,
/*3058*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3069*/      /*Scope*/ 17, /*->3087*/
/*3070*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_and_16
/*3072*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3075*/        OPC_EmitMergeInputChains1_0,
/*3076*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3087*/      /*Scope*/ 17, /*->3105*/
/*3088*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_and_32
/*3090*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3093*/        OPC_EmitMergeInputChains1_0,
/*3094*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3105*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3125
/*3108*/      OPC_CheckPredicate, 42, // Predicate_atomic_load_and_64
/*3110*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3113*/      OPC_EmitMergeInputChains1_0,
/*3114*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3212
/*3129*/    OPC_RecordMemRef,
/*3130*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3131*/    OPC_RecordChild1, // #1 = $ptr
/*3132*/    OPC_RecordChild2, // #2 = $incr
/*3133*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3192
/*3136*/      OPC_Scope, 17, /*->3155*/ // 3 children in Scope
/*3138*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_or_8
/*3140*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3143*/        OPC_EmitMergeInputChains1_0,
/*3144*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3155*/      /*Scope*/ 17, /*->3173*/
/*3156*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_or_16
/*3158*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3161*/        OPC_EmitMergeInputChains1_0,
/*3162*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3173*/      /*Scope*/ 17, /*->3191*/
/*3174*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_or_32
/*3176*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3179*/        OPC_EmitMergeInputChains1_0,
/*3180*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3191*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3211
/*3194*/      OPC_CheckPredicate, 46, // Predicate_atomic_load_or_64
/*3196*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3199*/      OPC_EmitMergeInputChains1_0,
/*3200*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3298
/*3215*/    OPC_RecordMemRef,
/*3216*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3217*/    OPC_RecordChild1, // #1 = $ptr
/*3218*/    OPC_RecordChild2, // #2 = $incr
/*3219*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3278
/*3222*/      OPC_Scope, 17, /*->3241*/ // 3 children in Scope
/*3224*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_8
/*3226*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3229*/        OPC_EmitMergeInputChains1_0,
/*3230*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3241*/      /*Scope*/ 17, /*->3259*/
/*3242*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_16
/*3244*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3247*/        OPC_EmitMergeInputChains1_0,
/*3248*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3259*/      /*Scope*/ 17, /*->3277*/
/*3260*/        OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_32
/*3262*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3265*/        OPC_EmitMergeInputChains1_0,
/*3266*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3277*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3297
/*3280*/      OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_64
/*3282*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3285*/      OPC_EmitMergeInputChains1_0,
/*3286*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3384
/*3301*/    OPC_RecordMemRef,
/*3302*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3303*/    OPC_RecordChild1, // #1 = $ptr
/*3304*/    OPC_RecordChild2, // #2 = $incr
/*3305*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3364
/*3308*/      OPC_Scope, 17, /*->3327*/ // 3 children in Scope
/*3310*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_8
/*3312*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3315*/        OPC_EmitMergeInputChains1_0,
/*3316*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3327*/      /*Scope*/ 17, /*->3345*/
/*3328*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_16
/*3330*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3333*/        OPC_EmitMergeInputChains1_0,
/*3334*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3345*/      /*Scope*/ 17, /*->3363*/
/*3346*/        OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_32
/*3348*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3351*/        OPC_EmitMergeInputChains1_0,
/*3352*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3363*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3383
/*3366*/      OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_64
/*3368*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3371*/      OPC_EmitMergeInputChains1_0,
/*3372*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3475
/*3387*/    OPC_RecordMemRef,
/*3388*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3389*/    OPC_RecordChild1, // #1 = $ptr
/*3390*/    OPC_RecordChild2, // #2 = $old
/*3391*/    OPC_RecordChild3, // #3 = $new
/*3392*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3454
/*3395*/      OPC_Scope, 18, /*->3415*/ // 3 children in Scope
/*3397*/        OPC_CheckPredicate, 55, // Predicate_atomic_cmp_swap_8
/*3399*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3402*/        OPC_EmitMergeInputChains1_0,
/*3403*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3415*/      /*Scope*/ 18, /*->3434*/
/*3416*/        OPC_CheckPredicate, 56, // Predicate_atomic_cmp_swap_16
/*3418*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3421*/        OPC_EmitMergeInputChains1_0,
/*3422*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3434*/      /*Scope*/ 18, /*->3453*/
/*3435*/        OPC_CheckPredicate, 57, // Predicate_atomic_cmp_swap_32
/*3437*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3440*/        OPC_EmitMergeInputChains1_0,
/*3441*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3453*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3474
/*3456*/      OPC_CheckPredicate, 58, // Predicate_atomic_cmp_swap_64
/*3458*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3461*/      OPC_EmitMergeInputChains1_0,
/*3462*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3561
/*3478*/    OPC_RecordMemRef,
/*3479*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3480*/    OPC_RecordChild1, // #1 = $ptr
/*3481*/    OPC_RecordChild2, // #2 = $new
/*3482*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3541
/*3485*/      OPC_Scope, 17, /*->3504*/ // 3 children in Scope
/*3487*/        OPC_CheckPredicate, 59, // Predicate_atomic_swap_8
/*3489*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3492*/        OPC_EmitMergeInputChains1_0,
/*3493*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3504*/      /*Scope*/ 17, /*->3522*/
/*3505*/        OPC_CheckPredicate, 60, // Predicate_atomic_swap_16
/*3507*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3510*/        OPC_EmitMergeInputChains1_0,
/*3511*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3522*/      /*Scope*/ 17, /*->3540*/
/*3523*/        OPC_CheckPredicate, 61, // Predicate_atomic_swap_32
/*3525*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3528*/        OPC_EmitMergeInputChains1_0,
/*3529*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3540*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3560
/*3543*/      OPC_CheckPredicate, 62, // Predicate_atomic_swap_64
/*3545*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3548*/      OPC_EmitMergeInputChains1_0,
/*3549*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3612
/*3564*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3565*/    OPC_RecordChild1, // #1 = $negsize
/*3566*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3589
/*3569*/      OPC_CheckChild1Type, MVT::i32,
/*3571*/      OPC_RecordChild2, // #2 = $fpsi
/*3572*/      OPC_CheckChild2Type, MVT::iPTR,
/*3574*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3577*/      OPC_EmitMergeInputChains1_0,
/*3578*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3611
/*3591*/      OPC_CheckChild1Type, MVT::i64,
/*3593*/      OPC_RecordChild2, // #2 = $fpsi
/*3594*/      OPC_CheckChild2Type, MVT::iPTR,
/*3596*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3599*/      OPC_EmitMergeInputChains1_0,
/*3600*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3649
/*3615*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3616*/    OPC_RecordChild1, // #1 = $src
/*3617*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3633
/*3620*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3623*/      OPC_EmitMergeInputChains1_0,
/*3624*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3648
/*3635*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3638*/      OPC_EmitMergeInputChains1_0,
/*3639*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->3692
/*3652*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*3653*/    OPC_RecordChild1, // #1 = $rS
/*3654*/    OPC_Scope, 17, /*->3673*/ // 2 children in Scope
/*3656*/      OPC_CheckChild1Type, MVT::i32,
/*3658*/      OPC_RecordChild2, // #2 = $dst
/*3659*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3662*/      OPC_EmitMergeInputChains1_0,
/*3663*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx GPRC:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3673*/    /*Scope*/ 17, /*->3691*/
/*3674*/      OPC_CheckChild1Type, MVT::i64,
/*3676*/      OPC_RecordChild2, // #2 = $dst
/*3677*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3680*/      OPC_EmitMergeInputChains1_0,
/*3681*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx G8RC:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 G8RC:i64:$rS, xoaddr:iPTR:$dst)
/*3691*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::LBRX),// ->3735
/*3695*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3696*/    OPC_RecordChild1, // #1 = $src
/*3697*/    OPC_MoveChild, 2,
/*3699*/    OPC_Scope, 16, /*->3717*/ // 2 children in Scope
/*3701*/      OPC_CheckValueType, MVT::i16,
/*3703*/      OPC_MoveParent,
/*3704*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3707*/      OPC_EmitMergeInputChains1_0,
/*3708*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3717*/    /*Scope*/ 16, /*->3734*/
/*3718*/      OPC_CheckValueType, MVT::i32,
/*3720*/      OPC_MoveParent,
/*3721*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3724*/      OPC_EmitMergeInputChains1_0,
/*3725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3734*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(PPCISD::STBRX),// ->3779
/*3738*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*3739*/    OPC_RecordChild1, // #1 = $rS
/*3740*/    OPC_RecordChild2, // #2 = $dst
/*3741*/    OPC_MoveChild, 3,
/*3743*/    OPC_Scope, 16, /*->3761*/ // 2 children in Scope
/*3745*/      OPC_CheckValueType, MVT::i16,
/*3747*/      OPC_MoveParent,
/*3748*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3751*/      OPC_EmitMergeInputChains1_0,
/*3752*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
              // Dst: (STHBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3761*/    /*Scope*/ 16, /*->3778*/
/*3762*/      OPC_CheckValueType, MVT::i32,
/*3764*/      OPC_MoveParent,
/*3765*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3768*/      OPC_EmitMergeInputChains1_0,
/*3769*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
              // Dst: (STWBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3778*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->3798
/*3782*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*3783*/    OPC_RecordChild1, // #1 = $frS
/*3784*/    OPC_RecordChild2, // #2 = $dst
/*3785*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3788*/    OPC_EmitMergeInputChains1_0,
/*3789*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx F8RC:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX F8RC:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3838
/*3801*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3802*/    OPC_CaptureGlueInput,
/*3803*/    OPC_RecordChild1, // #1 = $src
/*3804*/    OPC_CheckChild1Type, MVT::iPTR,
/*3806*/    OPC_CheckType, MVT::i64,
/*3808*/    OPC_Scope, 13, /*->3823*/ // 2 children in Scope
/*3810*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3813*/      OPC_EmitMergeInputChains1_0,
/*3814*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3823*/    /*Scope*/ 13, /*->3837*/
/*3824*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3827*/      OPC_EmitMergeInputChains1_0,
/*3828*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3837*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::STD_32),// ->3876
/*3841*/    OPC_RecordNode,   // #0 = 'PPCstd_32' chained node
/*3842*/    OPC_RecordChild1, // #1 = $rT
/*3843*/    OPC_CheckChild1Type, MVT::i32,
/*3845*/    OPC_RecordChild2, // #2 = $dst
/*3846*/    OPC_Scope, 13, /*->3861*/ // 2 children in Scope
/*3848*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*3851*/      OPC_EmitMergeInputChains1_0,
/*3852*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STD_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, ixaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STD_32 GPRC:i32:$rT, ixaddr:iPTR:$dst)
/*3861*/    /*Scope*/ 13, /*->3875*/
/*3862*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*3865*/      OPC_EmitMergeInputChains1_0,
/*3866*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDX_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, xaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDX_32 GPRC:i32:$rT, xaddr:iPTR:$dst)
/*3875*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,4/*596*/,  TARGET_VAL(ISD::XOR),// ->4476
/*3880*/    OPC_Scope, 39|128,1/*167*/, /*->4050*/ // 8 children in Scope
/*3883*/      OPC_MoveChild, 0,
/*3885*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3930
/*3889*/        OPC_RecordChild0, // #0 = $rS
/*3890*/        OPC_RecordChild1, // #1 = $rB
/*3891*/        OPC_MoveParent,
/*3892*/        OPC_MoveChild, 1,
/*3894*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3905*/        OPC_MoveParent,
/*3906*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3918
/*3909*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3929
/*3920*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3974
/*3933*/        OPC_RecordChild0, // #0 = $rS
/*3934*/        OPC_RecordChild1, // #1 = $rB
/*3935*/        OPC_MoveParent,
/*3936*/        OPC_MoveChild, 1,
/*3938*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3949*/        OPC_MoveParent,
/*3950*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3962
/*3953*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3973
/*3964*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->4049
/*3977*/        OPC_RecordChild0, // #0 = $rS
/*3978*/        OPC_Scope, 40, /*->4020*/ // 2 children in Scope
/*3980*/          OPC_RecordChild1, // #1 = $rB
/*3981*/          OPC_MoveParent,
/*3982*/          OPC_MoveChild, 1,
/*3984*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3995*/          OPC_MoveParent,
/*3996*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4008
/*3999*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->4019
/*4010*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                  0, // EndSwitchType
/*4020*/        /*Scope*/ 27, /*->4048*/
/*4021*/          OPC_MoveChild, 1,
/*4023*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4034*/          OPC_MoveParent,
/*4035*/          OPC_MoveParent,
/*4036*/          OPC_RecordChild1, // #1 = $rB
/*4037*/          OPC_CheckType, MVT::i32,
/*4039*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, -1:i32), GPRC:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4048*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*4050*/    /*Scope*/ 33, /*->4084*/
/*4051*/      OPC_RecordChild0, // #0 = $rB
/*4052*/      OPC_MoveChild, 1,
/*4054*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4057*/      OPC_RecordChild0, // #1 = $rS
/*4058*/      OPC_MoveChild, 1,
/*4060*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4071*/      OPC_MoveParent,
/*4072*/      OPC_MoveParent,
/*4073*/      OPC_CheckType, MVT::i32,
/*4075*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4084*/    /*Scope*/ 33, /*->4118*/
/*4085*/      OPC_MoveChild, 0,
/*4087*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4090*/      OPC_RecordChild0, // #0 = $rS
/*4091*/      OPC_MoveChild, 1,
/*4093*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4104*/      OPC_MoveParent,
/*4105*/      OPC_MoveParent,
/*4106*/      OPC_RecordChild1, // #1 = $rB
/*4107*/      OPC_CheckType, MVT::i64,
/*4109*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, -1:i64), G8RC:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4118*/    /*Scope*/ 84|128,1/*212*/, /*->4332*/
/*4120*/      OPC_RecordChild0, // #0 = $rB
/*4121*/      OPC_Scope, 59, /*->4182*/ // 2 children in Scope
/*4123*/        OPC_MoveChild, 1,
/*4125*/        OPC_Scope, 30, /*->4157*/ // 2 children in Scope
/*4127*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4130*/          OPC_RecordChild0, // #1 = $rS
/*4131*/          OPC_MoveChild, 1,
/*4133*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4144*/          OPC_MoveParent,
/*4145*/          OPC_MoveParent,
/*4146*/          OPC_CheckType, MVT::i64,
/*4148*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, -1:i64)) - Complexity = 11
                  // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4157*/        /*Scope*/ 23, /*->4181*/
/*4158*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4169*/          OPC_MoveParent,
/*4170*/          OPC_CheckType, MVT::i32,
/*4172*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (xor:i32 GPRC:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
/*4181*/        0, /*End of Scope*/
/*4182*/      /*Scope*/ 19|128,1/*147*/, /*->4331*/
/*4184*/        OPC_RecordChild1, // #1 = $src2
/*4185*/        OPC_Scope, 119, /*->4306*/ // 3 children in Scope
/*4187*/          OPC_MoveChild, 1,
/*4189*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4192*/          OPC_Scope, 19, /*->4213*/ // 5 children in Scope
/*4194*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4196*/            OPC_MoveParent,
/*4197*/            OPC_CheckType, MVT::i32,
/*4199*/            OPC_EmitConvertToTarget, 1,
/*4201*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4204*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4213*/          /*Scope*/ 19, /*->4233*/
/*4214*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4216*/            OPC_MoveParent,
/*4217*/            OPC_CheckType, MVT::i32,
/*4219*/            OPC_EmitConvertToTarget, 1,
/*4221*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4224*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4233*/          /*Scope*/ 19, /*->4253*/
/*4234*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4236*/            OPC_MoveParent,
/*4237*/            OPC_CheckType, MVT::i64,
/*4239*/            OPC_EmitConvertToTarget, 1,
/*4241*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4244*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4253*/          /*Scope*/ 19, /*->4273*/
/*4254*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4256*/            OPC_MoveParent,
/*4257*/            OPC_CheckType, MVT::i64,
/*4259*/            OPC_EmitConvertToTarget, 1,
/*4261*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4264*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4273*/          /*Scope*/ 31, /*->4305*/
/*4274*/            OPC_MoveParent,
/*4275*/            OPC_CheckType, MVT::i32,
/*4277*/            OPC_EmitConvertToTarget, 1,
/*4279*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4282*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4291*/            OPC_EmitConvertToTarget, 1,
/*4293*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4296*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4305*/          0, /*End of Scope*/
/*4306*/        /*Scope*/ 11, /*->4318*/
/*4307*/          OPC_CheckType, MVT::i32,
/*4309*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4318*/        /*Scope*/ 11, /*->4330*/
/*4319*/          OPC_CheckType, MVT::i64,
/*4321*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4330*/        0, /*End of Scope*/
/*4331*/      0, /*End of Scope*/
/*4332*/    /*Scope*/ 70, /*->4403*/
/*4333*/      OPC_MoveChild, 0,
/*4335*/      OPC_SwitchOpcode /*2 cases */, 30,  TARGET_VAL(ISD::OR),// ->4369
/*4339*/        OPC_RecordChild0, // #0 = $vA
/*4340*/        OPC_RecordChild1, // #1 = $vB
/*4341*/        OPC_MoveParent,
/*4342*/        OPC_MoveChild, 1,
/*4344*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4347*/        OPC_MoveChild, 0,
/*4349*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4352*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4354*/        OPC_CheckType, MVT::v16i8,
/*4356*/        OPC_MoveParent,
/*4357*/        OPC_MoveParent,
/*4358*/        OPC_CheckType, MVT::v4i32,
/*4360*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BITCAST),// ->4402
/*4372*/        OPC_MoveChild, 0,
/*4374*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4377*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4379*/        OPC_CheckType, MVT::v16i8,
/*4381*/        OPC_MoveParent,
/*4382*/        OPC_MoveParent,
/*4383*/        OPC_MoveChild, 1,
/*4385*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4388*/        OPC_RecordChild0, // #0 = $vA
/*4389*/        OPC_RecordChild1, // #1 = $vB
/*4390*/        OPC_MoveParent,
/*4391*/        OPC_CheckType, MVT::v4i32,
/*4393*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              0, // EndSwitchOpcode
/*4403*/    /*Scope*/ 28, /*->4432*/
/*4404*/      OPC_RecordChild0, // #0 = $vA
/*4405*/      OPC_MoveChild, 1,
/*4407*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4410*/      OPC_MoveChild, 0,
/*4412*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4415*/      OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4417*/      OPC_CheckType, MVT::v16i8,
/*4419*/      OPC_MoveParent,
/*4420*/      OPC_MoveParent,
/*4421*/      OPC_CheckType, MVT::v4i32,
/*4423*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4432*/    /*Scope*/ 28, /*->4461*/
/*4433*/      OPC_MoveChild, 0,
/*4435*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4438*/      OPC_MoveChild, 0,
/*4440*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4443*/      OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4445*/      OPC_CheckType, MVT::v16i8,
/*4447*/      OPC_MoveParent,
/*4448*/      OPC_MoveParent,
/*4449*/      OPC_RecordChild1, // #0 = $vA
/*4450*/      OPC_CheckType, MVT::v4i32,
/*4452*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4461*/    /*Scope*/ 13, /*->4475*/
/*4462*/      OPC_RecordChild0, // #0 = $vA
/*4463*/      OPC_RecordChild1, // #1 = $vB
/*4464*/      OPC_CheckType, MVT::v4i32,
/*4466*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4475*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31|128,3/*415*/,  TARGET_VAL(ISD::AND),// ->4895
/*4480*/    OPC_Scope, 46, /*->4528*/ // 5 children in Scope
/*4482*/      OPC_RecordChild0, // #0 = $rS
/*4483*/      OPC_MoveChild, 1,
/*4485*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4488*/      OPC_RecordChild0, // #1 = $rB
/*4489*/      OPC_MoveChild, 1,
/*4491*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4502*/      OPC_MoveParent,
/*4503*/      OPC_MoveParent,
/*4504*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4516
/*4507*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4527
/*4518*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4528*/    /*Scope*/ 88, /*->4617*/
/*4529*/      OPC_MoveChild, 0,
/*4531*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4576
/*4535*/        OPC_RecordChild0, // #0 = $rB
/*4536*/        OPC_MoveChild, 1,
/*4538*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4549*/        OPC_MoveParent,
/*4550*/        OPC_MoveParent,
/*4551*/        OPC_RecordChild1, // #1 = $rS
/*4552*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4564
/*4555*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4575
/*4566*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4616
/*4579*/        OPC_RecordChild0, // #0 = $in
/*4580*/        OPC_RecordChild1, // #1 = $sh
/*4581*/        OPC_CheckChild1Type, MVT::i32,
/*4583*/        OPC_MoveParent,
/*4584*/        OPC_RecordChild1, // #2 = $imm
/*4585*/        OPC_MoveChild, 1,
/*4587*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4590*/        OPC_CheckPredicate, 66, // Predicate_maskimm32
/*4592*/        OPC_MoveParent,
/*4593*/        OPC_CheckType, MVT::i32,
/*4595*/        OPC_EmitConvertToTarget, 2,
/*4597*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4600*/        OPC_EmitConvertToTarget, 2,
/*4602*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4605*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4617*/    /*Scope*/ 63|128,1/*191*/, /*->4810*/
/*4619*/      OPC_RecordChild0, // #0 = $src1
/*4620*/      OPC_Scope, 119, /*->4741*/ // 2 children in Scope
/*4622*/        OPC_RecordChild1, // #1 = $src2
/*4623*/        OPC_Scope, 91, /*->4716*/ // 3 children in Scope
/*4625*/          OPC_MoveChild, 1,
/*4627*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4630*/          OPC_Scope, 20, /*->4652*/ // 4 children in Scope
/*4632*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4634*/            OPC_MoveParent,
/*4635*/            OPC_CheckType, MVT::i32,
/*4637*/            OPC_EmitConvertToTarget, 1,
/*4639*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4642*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo:i32:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4652*/          /*Scope*/ 20, /*->4673*/
/*4653*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4655*/            OPC_MoveParent,
/*4656*/            OPC_CheckType, MVT::i32,
/*4658*/            OPC_EmitConvertToTarget, 1,
/*4660*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4663*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo:i32:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4673*/          /*Scope*/ 20, /*->4694*/
/*4674*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4676*/            OPC_MoveParent,
/*4677*/            OPC_CheckType, MVT::i64,
/*4679*/            OPC_EmitConvertToTarget, 1,
/*4681*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4684*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo8:i64:i32 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4694*/          /*Scope*/ 20, /*->4715*/
/*4695*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4697*/            OPC_MoveParent,
/*4698*/            OPC_CheckType, MVT::i64,
/*4700*/            OPC_EmitConvertToTarget, 1,
/*4702*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4705*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo8:i64:i32 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4715*/          0, /*End of Scope*/
/*4716*/        /*Scope*/ 11, /*->4728*/
/*4717*/          OPC_CheckType, MVT::i32,
/*4719*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4728*/        /*Scope*/ 11, /*->4740*/
/*4729*/          OPC_CheckType, MVT::i64,
/*4731*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4740*/        0, /*End of Scope*/
/*4741*/      /*Scope*/ 67, /*->4809*/
/*4742*/        OPC_MoveChild, 1,
/*4744*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4747*/        OPC_Scope, 29, /*->4778*/ // 2 children in Scope
/*4749*/          OPC_RecordChild0, // #1 = $vB
/*4750*/          OPC_MoveChild, 1,
/*4752*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4755*/          OPC_MoveChild, 0,
/*4757*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4760*/          OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4762*/          OPC_CheckType, MVT::v16i8,
/*4764*/          OPC_MoveParent,
/*4765*/          OPC_MoveParent,
/*4766*/          OPC_MoveParent,
/*4767*/          OPC_CheckType, MVT::v4i32,
/*4769*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4778*/        /*Scope*/ 29, /*->4808*/
/*4779*/          OPC_MoveChild, 0,
/*4781*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4784*/          OPC_MoveChild, 0,
/*4786*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4789*/          OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4791*/          OPC_CheckType, MVT::v16i8,
/*4793*/          OPC_MoveParent,
/*4794*/          OPC_MoveParent,
/*4795*/          OPC_RecordChild1, // #1 = $vB
/*4796*/          OPC_MoveParent,
/*4797*/          OPC_CheckType, MVT::v4i32,
/*4799*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB)) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4808*/        0, /*End of Scope*/
/*4809*/      0, /*End of Scope*/
/*4810*/    /*Scope*/ 69, /*->4880*/
/*4811*/      OPC_MoveChild, 0,
/*4813*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4816*/      OPC_Scope, 30, /*->4848*/ // 2 children in Scope
/*4818*/        OPC_RecordChild0, // #0 = $vB
/*4819*/        OPC_MoveChild, 1,
/*4821*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4824*/        OPC_MoveChild, 0,
/*4826*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4829*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4831*/        OPC_CheckType, MVT::v16i8,
/*4833*/        OPC_MoveParent,
/*4834*/        OPC_MoveParent,
/*4835*/        OPC_MoveParent,
/*4836*/        OPC_RecordChild1, // #1 = $vA
/*4837*/        OPC_CheckType, MVT::v4i32,
/*4839*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4848*/      /*Scope*/ 30, /*->4879*/
/*4849*/        OPC_MoveChild, 0,
/*4851*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4854*/        OPC_MoveChild, 0,
/*4856*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4859*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4861*/        OPC_CheckType, MVT::v16i8,
/*4863*/        OPC_MoveParent,
/*4864*/        OPC_MoveParent,
/*4865*/        OPC_RecordChild1, // #0 = $vB
/*4866*/        OPC_MoveParent,
/*4867*/        OPC_RecordChild1, // #1 = $vA
/*4868*/        OPC_CheckType, MVT::v4i32,
/*4870*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4879*/      0, /*End of Scope*/
/*4880*/    /*Scope*/ 13, /*->4894*/
/*4881*/      OPC_RecordChild0, // #0 = $vA
/*4882*/      OPC_RecordChild1, // #1 = $vB
/*4883*/      OPC_CheckType, MVT::v4i32,
/*4885*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4894*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,2/*258*/,  TARGET_VAL(ISD::OR),// ->5157
/*4899*/    OPC_Scope, 46, /*->4947*/ // 3 children in Scope
/*4901*/      OPC_RecordChild0, // #0 = $rS
/*4902*/      OPC_MoveChild, 1,
/*4904*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4907*/      OPC_RecordChild0, // #1 = $rB
/*4908*/      OPC_MoveChild, 1,
/*4910*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4921*/      OPC_MoveParent,
/*4922*/      OPC_MoveParent,
/*4923*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4935
/*4926*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4946
/*4937*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4947*/    /*Scope*/ 46, /*->4994*/
/*4948*/      OPC_MoveChild, 0,
/*4950*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4953*/      OPC_RecordChild0, // #0 = $rB
/*4954*/      OPC_MoveChild, 1,
/*4956*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4967*/      OPC_MoveParent,
/*4968*/      OPC_MoveParent,
/*4969*/      OPC_RecordChild1, // #1 = $rS
/*4970*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4982
/*4973*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4993
/*4984*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4994*/    /*Scope*/ 32|128,1/*160*/, /*->5156*/
/*4996*/      OPC_RecordChild0, // #0 = $src1
/*4997*/      OPC_RecordChild1, // #1 = $src2
/*4998*/      OPC_Scope, 119, /*->5119*/ // 4 children in Scope
/*5000*/        OPC_MoveChild, 1,
/*5002*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5005*/        OPC_Scope, 19, /*->5026*/ // 5 children in Scope
/*5007*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*5009*/          OPC_MoveParent,
/*5010*/          OPC_CheckType, MVT::i32,
/*5012*/          OPC_EmitConvertToTarget, 1,
/*5014*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5017*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*5026*/        /*Scope*/ 19, /*->5046*/
/*5027*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*5029*/          OPC_MoveParent,
/*5030*/          OPC_CheckType, MVT::i32,
/*5032*/          OPC_EmitConvertToTarget, 1,
/*5034*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5037*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*5046*/        /*Scope*/ 19, /*->5066*/
/*5047*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*5049*/          OPC_MoveParent,
/*5050*/          OPC_CheckType, MVT::i64,
/*5052*/          OPC_EmitConvertToTarget, 1,
/*5054*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5057*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*5066*/        /*Scope*/ 19, /*->5086*/
/*5067*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*5069*/          OPC_MoveParent,
/*5070*/          OPC_CheckType, MVT::i64,
/*5072*/          OPC_EmitConvertToTarget, 1,
/*5074*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5077*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*5086*/        /*Scope*/ 31, /*->5118*/
/*5087*/          OPC_MoveParent,
/*5088*/          OPC_CheckType, MVT::i32,
/*5090*/          OPC_EmitConvertToTarget, 1,
/*5092*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5095*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5104*/          OPC_EmitConvertToTarget, 1,
/*5106*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5109*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5118*/        0, /*End of Scope*/
/*5119*/      /*Scope*/ 11, /*->5131*/
/*5120*/        OPC_CheckType, MVT::i32,
/*5122*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*5131*/      /*Scope*/ 11, /*->5143*/
/*5132*/        OPC_CheckType, MVT::i64,
/*5134*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*5143*/      /*Scope*/ 11, /*->5155*/
/*5144*/        OPC_CheckType, MVT::v4i32,
/*5146*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5155*/      0, /*End of Scope*/
/*5156*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5319
/*5161*/    OPC_RecordChild0, // #0 = $in
/*5162*/    OPC_MoveChild, 0,
/*5164*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5196
/*5168*/      OPC_MoveParent,
/*5169*/      OPC_MoveChild, 1,
/*5171*/      OPC_CheckInteger, 0, 
/*5173*/      OPC_MoveParent,
/*5174*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5185
/*5177*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5195
/*5187*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5227
/*5199*/      OPC_MoveParent,
/*5200*/      OPC_MoveChild, 1,
/*5202*/      OPC_CheckInteger, 0, 
/*5204*/      OPC_MoveParent,
/*5205*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5216
/*5208*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5226
/*5218*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5258
/*5230*/      OPC_MoveParent,
/*5231*/      OPC_MoveChild, 1,
/*5233*/      OPC_CheckInteger, 0, 
/*5235*/      OPC_MoveParent,
/*5236*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5247
/*5239*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5257
/*5249*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5289
/*5261*/      OPC_MoveParent,
/*5262*/      OPC_MoveChild, 1,
/*5264*/      OPC_CheckInteger, 0, 
/*5266*/      OPC_MoveParent,
/*5267*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5278
/*5270*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5288
/*5280*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5318
/*5292*/      OPC_MoveParent,
/*5293*/      OPC_RecordChild1, // #1 = $in
/*5294*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5306
/*5297*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, GPRC:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5317
/*5308*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, G8RC:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5481
/*5323*/    OPC_RecordChild0, // #0 = $in
/*5324*/    OPC_MoveChild, 0,
/*5326*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5358
/*5330*/      OPC_MoveParent,
/*5331*/      OPC_MoveChild, 1,
/*5333*/      OPC_CheckInteger, 0, 
/*5335*/      OPC_MoveParent,
/*5336*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5347
/*5339*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5357
/*5349*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5389
/*5361*/      OPC_MoveParent,
/*5362*/      OPC_MoveChild, 1,
/*5364*/      OPC_CheckInteger, 0, 
/*5366*/      OPC_MoveParent,
/*5367*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5378
/*5370*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5388
/*5380*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5420
/*5392*/      OPC_MoveParent,
/*5393*/      OPC_MoveChild, 1,
/*5395*/      OPC_CheckInteger, 0, 
/*5397*/      OPC_MoveParent,
/*5398*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5409
/*5401*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5419
/*5411*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5451
/*5423*/      OPC_MoveParent,
/*5424*/      OPC_MoveChild, 1,
/*5426*/      OPC_CheckInteger, 0, 
/*5428*/      OPC_MoveParent,
/*5429*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5440
/*5432*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5450
/*5442*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5480
/*5454*/      OPC_MoveParent,
/*5455*/      OPC_RecordChild1, // #1 = $in
/*5456*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5468
/*5459*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, GPRC:i32:$in) - Complexity = 6
                // Dst: (ADDIL:i32 GPRC:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5479
/*5470*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8L), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, G8RC:i64:$in) - Complexity = 6
                // Dst: (ADDI8L:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::SUB),// ->5602
/*5484*/    OPC_Scope, 28, /*->5514*/ // 2 children in Scope
/*5486*/      OPC_MoveChild, 0,
/*5488*/      OPC_CheckInteger, 0, 
/*5490*/      OPC_MoveParent,
/*5491*/      OPC_RecordChild1, // #0 = $rA
/*5492*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5503
/*5495*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 GPRC:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->5513
/*5505*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 G8RC:i64:$rA)
              0, // EndSwitchType
/*5514*/    /*Scope*/ 86, /*->5601*/
/*5515*/      OPC_RecordChild0, // #0 = $imm
/*5516*/      OPC_Scope, 23, /*->5541*/ // 2 children in Scope
/*5518*/        OPC_MoveChild, 0,
/*5520*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5523*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5525*/        OPC_MoveParent,
/*5526*/        OPC_RecordChild1, // #1 = $in
/*5527*/        OPC_CheckType, MVT::i32,
/*5529*/        OPC_EmitConvertToTarget, 0,
/*5531*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$in, (imm:i32):$imm)
/*5541*/      /*Scope*/ 58, /*->5600*/
/*5542*/        OPC_RecordChild1, // #1 = $rA
/*5543*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->5555
/*5546*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->5566
/*5557*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
                /*SwitchType*/ 9,  MVT::v16i8,// ->5577
/*5568*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
                /*SwitchType*/ 9,  MVT::v8i16,// ->5588
/*5579*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
                /*SwitchType*/ 9,  MVT::v4i32,// ->5599
/*5590*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
                0, // EndSwitchType
/*5600*/      0, /*End of Scope*/
/*5601*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->5707
/*5605*/    OPC_CaptureGlueInput,
/*5606*/    OPC_RecordChild0, // #0 = $rA
/*5607*/    OPC_Scope, 69, /*->5678*/ // 2 children in Scope
/*5609*/      OPC_MoveChild, 1,
/*5611*/      OPC_Scope, 36, /*->5649*/ // 2 children in Scope
/*5613*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5624*/        OPC_MoveParent,
/*5625*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5637
/*5628*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5648
/*5639*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5649*/      /*Scope*/ 27, /*->5677*/
/*5650*/        OPC_CheckInteger, 0, 
/*5652*/        OPC_MoveParent,
/*5653*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5665
/*5656*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5676
/*5667*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5677*/      0, /*End of Scope*/
/*5678*/    /*Scope*/ 27, /*->5706*/
/*5679*/      OPC_RecordChild1, // #1 = $rB
/*5680*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5693
/*5683*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5705
/*5695*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5706*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->5814
/*5710*/    OPC_CaptureGlueInput,
/*5711*/    OPC_Scope, 71, /*->5784*/ // 2 children in Scope
/*5713*/      OPC_MoveChild, 0,
/*5715*/      OPC_Scope, 37, /*->5754*/ // 2 children in Scope
/*5717*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5728*/        OPC_MoveParent,
/*5729*/        OPC_RecordChild1, // #0 = $rA
/*5730*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5742
/*5733*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5753
/*5744*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5754*/      /*Scope*/ 28, /*->5783*/
/*5755*/        OPC_CheckInteger, 0, 
/*5757*/        OPC_MoveParent,
/*5758*/        OPC_RecordChild1, // #0 = $rA
/*5759*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5771
/*5762*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5782
/*5773*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5783*/      0, /*End of Scope*/
/*5784*/    /*Scope*/ 28, /*->5813*/
/*5785*/      OPC_RecordChild0, // #0 = $rB
/*5786*/      OPC_RecordChild1, // #1 = $rA
/*5787*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5800
/*5790*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5812
/*5802*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5813*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->5886
/*5817*/    OPC_RecordChild0, // #0 = $rA
/*5818*/    OPC_RecordChild1, // #1 = $imm
/*5819*/    OPC_Scope, 38, /*->5859*/ // 3 children in Scope
/*5821*/      OPC_MoveChild, 1,
/*5823*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5826*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5828*/      OPC_MoveParent,
/*5829*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5844
/*5832*/        OPC_EmitConvertToTarget, 1,
/*5834*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->5858
/*5846*/        OPC_EmitConvertToTarget, 1,
/*5848*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*5859*/    /*Scope*/ 12, /*->5872*/
/*5860*/      OPC_CheckType, MVT::i32,
/*5862*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*5872*/    /*Scope*/ 12, /*->5885*/
/*5873*/      OPC_CheckType, MVT::i64,
/*5875*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
/*5885*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->5939
/*5889*/    OPC_RecordChild0, // #0 = $rA
/*5890*/    OPC_RecordChild1, // #1 = $imm
/*5891*/    OPC_Scope, 21, /*->5914*/ // 3 children in Scope
/*5893*/      OPC_MoveChild, 1,
/*5895*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5898*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5900*/      OPC_MoveParent,
/*5901*/      OPC_CheckType, MVT::i32,
/*5903*/      OPC_EmitConvertToTarget, 1,
/*5905*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*5914*/    /*Scope*/ 11, /*->5926*/
/*5915*/      OPC_CheckType, MVT::i32,
/*5917*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*5926*/    /*Scope*/ 11, /*->5938*/
/*5927*/      OPC_CheckType, MVT::i64,
/*5929*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*5938*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->6013
/*5942*/    OPC_RecordChild0, // #0 = $imm
/*5943*/    OPC_Scope, 39, /*->5984*/ // 2 children in Scope
/*5945*/      OPC_MoveChild, 0,
/*5947*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5950*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5952*/      OPC_MoveParent,
/*5953*/      OPC_RecordChild1, // #1 = $rA
/*5954*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5969
/*5957*/        OPC_EmitConvertToTarget, 0,
/*5959*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->5983
/*5971*/        OPC_EmitConvertToTarget, 0,
/*5973*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*5984*/    /*Scope*/ 27, /*->6012*/
/*5985*/      OPC_RecordChild1, // #1 = $rA
/*5986*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5999
/*5989*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6011
/*6001*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*6012*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::SRA),// ->6130
/*6016*/    OPC_RecordChild0, // #0 = $rS
/*6017*/    OPC_RecordChild1, // #1 = $SH
/*6018*/    OPC_Scope, 38, /*->6058*/ // 5 children in Scope
/*6020*/      OPC_MoveChild, 1,
/*6022*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6025*/      OPC_CheckType, MVT::i32,
/*6027*/      OPC_MoveParent,
/*6028*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6043
/*6031*/        OPC_EmitConvertToTarget, 1,
/*6033*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 GPRC:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->6057
/*6045*/        OPC_EmitConvertToTarget, 1,
/*6047*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 G8RC:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*6058*/    /*Scope*/ 28, /*->6087*/
/*6059*/      OPC_CheckChild1Type, MVT::i32,
/*6061*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6074
/*6064*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6086
/*6076*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6087*/    /*Scope*/ 13, /*->6101*/
/*6088*/      OPC_CheckChild1Type, MVT::v16i8,
/*6090*/      OPC_CheckType, MVT::v16i8,
/*6092*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6101*/    /*Scope*/ 13, /*->6115*/
/*6102*/      OPC_CheckChild1Type, MVT::v8i16,
/*6104*/      OPC_CheckType, MVT::v8i16,
/*6106*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6115*/    /*Scope*/ 13, /*->6129*/
/*6116*/      OPC_CheckChild1Type, MVT::v4i32,
/*6118*/      OPC_CheckType, MVT::v4i32,
/*6120*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6129*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SHL),// ->6259
/*6133*/    OPC_RecordChild0, // #0 = $in
/*6134*/    OPC_RecordChild1, // #1 = $imm
/*6135*/    OPC_Scope, 52, /*->6189*/ // 5 children in Scope
/*6137*/      OPC_MoveChild, 1,
/*6139*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6142*/      OPC_CheckType, MVT::i32,
/*6144*/      OPC_MoveParent,
/*6145*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6169
/*6148*/        OPC_EmitConvertToTarget, 1,
/*6150*/        OPC_EmitInteger, MVT::i32, 0, 
/*6153*/        OPC_EmitConvertToTarget, 1,
/*6155*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*6158*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->6188
/*6171*/        OPC_EmitConvertToTarget, 1,
/*6173*/        OPC_EmitConvertToTarget, 1,
/*6175*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*6178*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*6189*/    /*Scope*/ 26, /*->6216*/
/*6190*/      OPC_CheckChild1Type, MVT::i32,
/*6192*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6204
/*6195*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6215
/*6206*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6216*/    /*Scope*/ 13, /*->6230*/
/*6217*/      OPC_CheckChild1Type, MVT::v16i8,
/*6219*/      OPC_CheckType, MVT::v16i8,
/*6221*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6230*/    /*Scope*/ 13, /*->6244*/
/*6231*/      OPC_CheckChild1Type, MVT::v8i16,
/*6233*/      OPC_CheckType, MVT::v8i16,
/*6235*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6244*/    /*Scope*/ 13, /*->6258*/
/*6245*/      OPC_CheckChild1Type, MVT::v4i32,
/*6247*/      OPC_CheckType, MVT::v4i32,
/*6249*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6258*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SRL),// ->6388
/*6262*/    OPC_RecordChild0, // #0 = $in
/*6263*/    OPC_RecordChild1, // #1 = $imm
/*6264*/    OPC_Scope, 52, /*->6318*/ // 5 children in Scope
/*6266*/      OPC_MoveChild, 1,
/*6268*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6271*/      OPC_CheckType, MVT::i32,
/*6273*/      OPC_MoveParent,
/*6274*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6298
/*6277*/        OPC_EmitConvertToTarget, 1,
/*6279*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*6282*/        OPC_EmitConvertToTarget, 1,
/*6284*/        OPC_EmitInteger, MVT::i32, 31, 
/*6287*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->6317
/*6300*/        OPC_EmitConvertToTarget, 1,
/*6302*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*6305*/        OPC_EmitConvertToTarget, 1,
/*6307*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*6318*/    /*Scope*/ 26, /*->6345*/
/*6319*/      OPC_CheckChild1Type, MVT::i32,
/*6321*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6333
/*6324*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6344
/*6335*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6345*/    /*Scope*/ 13, /*->6359*/
/*6346*/      OPC_CheckChild1Type, MVT::v16i8,
/*6348*/      OPC_CheckType, MVT::v16i8,
/*6350*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6359*/    /*Scope*/ 13, /*->6373*/
/*6360*/      OPC_CheckChild1Type, MVT::v8i16,
/*6362*/      OPC_CheckType, MVT::v8i16,
/*6364*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6373*/    /*Scope*/ 13, /*->6387*/
/*6374*/      OPC_CheckChild1Type, MVT::v4i32,
/*6376*/      OPC_CheckType, MVT::v4i32,
/*6378*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6387*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->6483
/*6391*/    OPC_RecordChild0, // #0 = $in
/*6392*/    OPC_RecordChild1, // #1 = $imm
/*6393*/    OPC_Scope, 48, /*->6443*/ // 2 children in Scope
/*6395*/      OPC_MoveChild, 1,
/*6397*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6400*/      OPC_CheckType, MVT::i32,
/*6402*/      OPC_MoveParent,
/*6403*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->6425
/*6406*/        OPC_EmitConvertToTarget, 1,
/*6408*/        OPC_EmitInteger, MVT::i32, 0, 
/*6411*/        OPC_EmitInteger, MVT::i32, 31, 
/*6414*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->6442
/*6427*/        OPC_EmitConvertToTarget, 1,
/*6429*/        OPC_EmitInteger, MVT::i32, 0, 
/*6432*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*6443*/    /*Scope*/ 38, /*->6482*/
/*6444*/      OPC_CheckChild1Type, MVT::i32,
/*6446*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6466
/*6449*/        OPC_EmitInteger, MVT::i32, 0, 
/*6452*/        OPC_EmitInteger, MVT::i32, 31, 
/*6455*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->6481
/*6468*/        OPC_EmitInteger, MVT::i32, 0, 
/*6471*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
              0, // EndSwitchType
/*6482*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->6539
/*6486*/    OPC_RecordChild0, // #0 = $disp
/*6487*/    OPC_MoveChild, 0,
/*6489*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6506
/*6493*/      OPC_MoveParent,
/*6494*/      OPC_RecordChild1, // #1 = $reg
/*6495*/      OPC_CheckType, MVT::i64,
/*6497*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->6522
/*6509*/      OPC_MoveParent,
/*6510*/      OPC_RecordChild1, // #1 = $reg
/*6511*/      OPC_CheckType, MVT::i64,
/*6513*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, G8RC:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->6538
/*6525*/      OPC_MoveParent,
/*6526*/      OPC_RecordChild1, // #1 = $reg
/*6527*/      OPC_CheckType, MVT::i64,
/*6529*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, G8RC:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->6561
/*6542*/    OPC_RecordChild0, // #0 = $reg
/*6543*/    OPC_RecordChild1, // #1 = $disp
/*6544*/    OPC_MoveChild, 1,
/*6546*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6549*/    OPC_MoveParent,
/*6550*/    OPC_CheckType, MVT::i64,
/*6552*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 G8RC:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 G8RC:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->6583
/*6564*/    OPC_RecordChild0, // #0 = $disp
/*6565*/    OPC_MoveChild, 0,
/*6567*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6570*/    OPC_MoveParent,
/*6571*/    OPC_RecordChild1, // #1 = $reg
/*6572*/    OPC_CheckType, MVT::i64,
/*6574*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->6605
/*6586*/    OPC_RecordChild0, // #0 = $reg
/*6587*/    OPC_RecordChild1, // #1 = $disp
/*6588*/    OPC_MoveChild, 1,
/*6590*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6593*/    OPC_MoveParent,
/*6594*/    OPC_CheckType, MVT::i64,
/*6596*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 G8RC:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 G8RC:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->6627
/*6608*/    OPC_RecordChild0, // #0 = $reg
/*6609*/    OPC_RecordChild1, // #1 = $disp
/*6610*/    OPC_MoveChild, 1,
/*6612*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6615*/    OPC_MoveParent,
/*6616*/    OPC_CheckType, MVT::i64,
/*6618*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->6649
/*6630*/    OPC_RecordChild0, // #0 = $disp
/*6631*/    OPC_MoveChild, 0,
/*6633*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6636*/    OPC_MoveParent,
/*6637*/    OPC_RecordChild1, // #1 = $reg
/*6638*/    OPC_CheckType, MVT::i64,
/*6640*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, G8RC:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->6671
/*6652*/    OPC_RecordChild0, // #0 = $in
/*6653*/    OPC_RecordChild1, // #1 = $g
/*6654*/    OPC_MoveChild, 1,
/*6656*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6659*/    OPC_MoveParent,
/*6660*/    OPC_CheckType, MVT::i64,
/*6662*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->6693
/*6674*/    OPC_RecordChild0, // #0 = $reg
/*6675*/    OPC_RecordChild1, // #1 = $disp
/*6676*/    OPC_MoveChild, 1,
/*6678*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6681*/    OPC_MoveParent,
/*6682*/    OPC_CheckType, MVT::i64,
/*6684*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->6715
/*6696*/    OPC_RecordChild0, // #0 = $reg
/*6697*/    OPC_RecordChild1, // #1 = $disp
/*6698*/    OPC_MoveChild, 1,
/*6700*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6703*/    OPC_MoveParent,
/*6704*/    OPC_CheckType, MVT::i64,
/*6706*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->6737
/*6718*/    OPC_RecordChild0, // #0 = $reg
/*6719*/    OPC_RecordChild1, // #1 = $sym
/*6720*/    OPC_MoveChild, 1,
/*6722*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6725*/    OPC_MoveParent,
/*6726*/    OPC_CheckType, MVT::i64,
/*6728*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->6759
/*6740*/    OPC_RecordChild0, // #0 = $reg
/*6741*/    OPC_RecordChild1, // #1 = $disp
/*6742*/    OPC_MoveChild, 1,
/*6744*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6747*/    OPC_MoveParent,
/*6748*/    OPC_CheckType, MVT::i64,
/*6750*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->6781
/*6762*/    OPC_RecordChild0, // #0 = $reg
/*6763*/    OPC_RecordChild1, // #1 = $disp
/*6764*/    OPC_MoveChild, 1,
/*6766*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6769*/    OPC_MoveParent,
/*6770*/    OPC_CheckType, MVT::i64,
/*6772*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->6803
/*6784*/    OPC_RecordChild0, // #0 = $reg
/*6785*/    OPC_RecordChild1, // #1 = $sym
/*6786*/    OPC_MoveChild, 1,
/*6788*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6791*/    OPC_MoveParent,
/*6792*/    OPC_CheckType, MVT::i64,
/*6794*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->6827
/*6806*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*6807*/    OPC_RecordChild1, // #1 = $reg
/*6808*/    OPC_RecordChild2, // #2 = $disp
/*6809*/    OPC_MoveChild, 2,
/*6811*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6814*/    OPC_MoveParent,
/*6815*/    OPC_CheckType, MVT::i64,
/*6817*/    OPC_EmitMergeInputChains1_0,
/*6818*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->6849
/*6830*/    OPC_RecordChild0, // #0 = $reg
/*6831*/    OPC_RecordChild1, // #1 = $disp
/*6832*/    OPC_MoveChild, 1,
/*6834*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6837*/    OPC_MoveParent,
/*6838*/    OPC_CheckType, MVT::i64,
/*6840*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 G8RC:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->6949
/*6852*/    OPC_RecordNode,   // #0 = $imm
/*6853*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->6915
/*6856*/      OPC_Scope, 12, /*->6870*/ // 3 children in Scope
/*6858*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6860*/        OPC_EmitConvertToTarget, 0,
/*6862*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*6870*/      /*Scope*/ 15, /*->6886*/
/*6871*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6873*/        OPC_EmitConvertToTarget, 0,
/*6875*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6878*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*6886*/      /*Scope*/ 27, /*->6914*/
/*6887*/        OPC_EmitConvertToTarget, 0,
/*6889*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6892*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*6900*/        OPC_EmitConvertToTarget, 0,
/*6902*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*6905*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*6914*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->6948
/*6917*/      OPC_Scope, 12, /*->6931*/ // 2 children in Scope
/*6919*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6921*/        OPC_EmitConvertToTarget, 0,
/*6923*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*6931*/      /*Scope*/ 15, /*->6947*/
/*6932*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6934*/        OPC_EmitConvertToTarget, 0,
/*6936*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6939*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*6947*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->6980
/*6952*/    OPC_RecordChild0, // #0 = $rS
/*6953*/    OPC_RecordChild1, // #1 = $rB
/*6954*/    OPC_CheckChild1Type, MVT::i32,
/*6956*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6968
/*6959*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6979
/*6970*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->7011
/*6983*/    OPC_RecordChild0, // #0 = $rS
/*6984*/    OPC_RecordChild1, // #1 = $rB
/*6985*/    OPC_CheckChild1Type, MVT::i32,
/*6987*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6999
/*6990*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7010
/*7001*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->7044
/*7014*/    OPC_RecordChild0, // #0 = $rS
/*7015*/    OPC_RecordChild1, // #1 = $rB
/*7016*/    OPC_CheckChild1Type, MVT::i32,
/*7018*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7031
/*7021*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->7043
/*7033*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->7070
/*7047*/    OPC_RecordChild0, // #0 = $rS
/*7048*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7059
/*7051*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPRC:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 GPRC:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->7069
/*7061*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 G8RC:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 G8RC:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7142
/*7073*/    OPC_RecordChild0, // #0 = $rS
/*7074*/    OPC_MoveChild, 1,
/*7076*/    OPC_Scope, 25, /*->7103*/ // 3 children in Scope
/*7078*/      OPC_CheckValueType, MVT::i8,
/*7080*/      OPC_MoveParent,
/*7081*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7092
/*7084*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7102
/*7094*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*7103*/    /*Scope*/ 25, /*->7129*/
/*7104*/      OPC_CheckValueType, MVT::i16,
/*7106*/      OPC_MoveParent,
/*7107*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7118
/*7110*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7128
/*7120*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*7129*/    /*Scope*/ 11, /*->7141*/
/*7130*/      OPC_CheckValueType, MVT::i32,
/*7132*/      OPC_MoveParent,
/*7133*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 G8RC:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 G8RC:i64:$rS)
/*7141*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->7171
/*7145*/    OPC_RecordChild0, // #0 = $rA
/*7146*/    OPC_RecordChild1, // #1 = $rB
/*7147*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7159
/*7150*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7170
/*7161*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->7200
/*7174*/    OPC_RecordChild0, // #0 = $rA
/*7175*/    OPC_RecordChild1, // #1 = $rB
/*7176*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7188
/*7179*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7199
/*7190*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->7229
/*7203*/    OPC_RecordChild0, // #0 = $rA
/*7204*/    OPC_RecordChild1, // #1 = $rB
/*7205*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7217
/*7208*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7228
/*7219*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->7258
/*7232*/    OPC_RecordChild0, // #0 = $rA
/*7233*/    OPC_RecordChild1, // #1 = $rB
/*7234*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7246
/*7237*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7257
/*7248*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->7272
/*7261*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*7262*/    OPC_CheckType, MVT::i64,
/*7264*/    OPC_EmitMergeInputChains1_0,
/*7265*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::EXTSW_32),// ->7286
/*7275*/    OPC_RecordChild0, // #0 = $rS
/*7276*/    OPC_CheckType, MVT::i32,
/*7278*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (PPCextsw_32:i32 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32:i32 GPRC:i32:$rS)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7302
/*7289*/    OPC_RecordChild0, // #0 = $rS
/*7290*/    OPC_CheckChild0Type, MVT::i32,
/*7292*/    OPC_CheckType, MVT::i64,
/*7294*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 GPRC:i32:$rS)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->7320
/*7305*/    OPC_RecordChild0, // #0 = $in
/*7306*/    OPC_CheckType, MVT::i32,
/*7308*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7311*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 G8RC:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 G8RC:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->7348
/*7323*/    OPC_RecordChild0, // #0 = $in
/*7324*/    OPC_CheckChild0Type, MVT::i32,
/*7326*/    OPC_CheckType, MVT::i64,
/*7328*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7335*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7338*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GPRC:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7392
/*7351*/    OPC_RecordChild0, // #0 = $in
/*7352*/    OPC_CheckChild0Type, MVT::i32,
/*7354*/    OPC_CheckType, MVT::i64,
/*7356*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7363*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7366*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*7376*/    OPC_EmitInteger, MVT::i32, 0, 
/*7379*/    OPC_EmitInteger, MVT::i32, 32, 
/*7382*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GPRC:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::FNEG),// ->7553
/*7396*/    OPC_Scope, 102, /*->7500*/ // 3 children in Scope
/*7398*/      OPC_MoveChild, 0,
/*7400*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->7472
/*7404*/        OPC_RecordChild0, // #0 = $FRA
/*7405*/        OPC_RecordChild1, // #1 = $FRC
/*7406*/        OPC_Scope, 34, /*->7442*/ // 2 children in Scope
/*7408*/          OPC_MoveChild, 2,
/*7410*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7413*/          OPC_RecordChild0, // #2 = $FRB
/*7414*/          OPC_MoveParent,
/*7415*/          OPC_MoveParent,
/*7416*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7429
/*7419*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, (fneg:f64 F8RC:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7441
/*7431*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, (fneg:f32 F4RC:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*7442*/        /*Scope*/ 28, /*->7471*/
/*7443*/          OPC_RecordChild2, // #2 = $FRB
/*7444*/          OPC_MoveParent,
/*7445*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7458
/*7448*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7470
/*7460*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*7471*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->7499
/*7475*/        OPC_RecordChild0, // #0 = $frB
/*7476*/        OPC_MoveParent,
/*7477*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7488
/*7480*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 F4RC:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 F4RC:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->7498
/*7490*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 F8RC:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 F8RC:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7500*/    /*Scope*/ 23, /*->7524*/
/*7501*/      OPC_RecordChild0, // #0 = $frB
/*7502*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7513
/*7505*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 F4RC:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 F4RC:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->7523
/*7515*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 F8RC:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 F8RC:f64:$frB)
              0, // EndSwitchType
/*7524*/    /*Scope*/ 27, /*->7552*/
/*7525*/      OPC_MoveChild, 0,
/*7527*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*7530*/      OPC_RecordChild0, // #0 = $vA
/*7531*/      OPC_RecordChild1, // #1 = $vC
/*7532*/      OPC_MoveChild, 2,
/*7534*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7537*/      OPC_RecordChild0, // #2 = $vB
/*7538*/      OPC_MoveParent,
/*7539*/      OPC_MoveParent,
/*7540*/      OPC_CheckType, MVT::v4f32,
/*7542*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, (fneg:v4f32 VRRC:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7552*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::MTFSF),// ->7580
/*7556*/    OPC_CaptureGlueInput,
/*7557*/    OPC_RecordChild0, // #0 = $FM
/*7558*/    OPC_MoveChild, 0,
/*7560*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7563*/    OPC_CheckType, MVT::i32,
/*7565*/    OPC_MoveParent,
/*7566*/    OPC_RecordChild1, // #1 = $rT
/*7567*/    OPC_RecordChild2, // #2 = $FRB
/*7568*/    OPC_EmitConvertToTarget, 0,
/*7570*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSF), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 1, 2, 
            // Src: (PPCmtfsf:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB) - Complexity = 6
            // Dst: (MTFSF:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::FMA),// ->7661
/*7583*/    OPC_RecordChild0, // #0 = $FRA
/*7584*/    OPC_RecordChild1, // #1 = $FRC
/*7585*/    OPC_Scope, 33, /*->7620*/ // 2 children in Scope
/*7587*/      OPC_MoveChild, 2,
/*7589*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7592*/      OPC_RecordChild0, // #2 = $FRB
/*7593*/      OPC_MoveParent,
/*7594*/      OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7607
/*7597*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, (fneg:f64 F8RC:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->7619
/*7609*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, (fneg:f32 F4RC:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*7620*/    /*Scope*/ 39, /*->7660*/
/*7621*/      OPC_RecordChild2, // #2 = $FRB
/*7622*/      OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->7635
/*7625*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
                // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->7647
/*7637*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
                // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              /*SwitchType*/ 10,  MVT::v4f32,// ->7659
/*7649*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB) - Complexity = 3
                // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
              0, // EndSwitchType
/*7660*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->7675
/*7664*/    OPC_RecordChild0, // #0 = $frB
/*7665*/    OPC_CheckType, MVT::f64,
/*7667*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->7687
/*7678*/    OPC_RecordChild0, // #0 = $frB
/*7679*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 F8RC:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->7713
/*7690*/    OPC_RecordChild0, // #0 = $frB
/*7691*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->7702
/*7694*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 F8RC:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->7712
/*7704*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 F4RC:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->7739
/*7716*/    OPC_RecordChild0, // #0 = $frB
/*7717*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7728
/*7720*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 F4RC:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->7738
/*7730*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 F8RC:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->7749
/*7742*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 14,  TARGET_VAL(PPCISD::FADDRTZ),// ->7766
/*7752*/    OPC_CaptureGlueInput,
/*7753*/    OPC_RecordChild0, // #0 = $FRA
/*7754*/    OPC_RecordChild1, // #1 = $FRB
/*7755*/    OPC_CheckType, MVT::f64,
/*7757*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->7798
/*7769*/    OPC_RecordChild0, // #0 = $FRA
/*7770*/    OPC_RecordChild1, // #1 = $FRC
/*7771*/    OPC_RecordChild2, // #2 = $FRB
/*7772*/    OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7785
/*7775*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->7797
/*7787*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FADD),// ->7838
/*7801*/    OPC_RecordChild0, // #0 = $FRA
/*7802*/    OPC_RecordChild1, // #1 = $FRB
/*7803*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7815
/*7806*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7826
/*7817*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 9,  MVT::v4f32,// ->7837
/*7828*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->7867
/*7841*/    OPC_RecordChild0, // #0 = $FRA
/*7842*/    OPC_RecordChild1, // #1 = $FRB
/*7843*/    OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7855
/*7846*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7866
/*7857*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 61,  TARGET_VAL(ISD::FMUL),// ->7931
/*7870*/    OPC_RecordChild0, // #0 = $FRA
/*7871*/    OPC_RecordChild1, // #1 = $FRC
/*7872*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7884
/*7875*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->7895
/*7886*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)
            /*SwitchType*/ 33,  MVT::v4f32,// ->7930
/*7897*/      OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*7904*/      OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*7911*/      OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7920*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FSUB),// ->7971
/*7934*/    OPC_RecordChild0, // #0 = $FRA
/*7935*/    OPC_RecordChild1, // #1 = $FRB
/*7936*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7948
/*7939*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7959
/*7950*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 9,  MVT::v4f32,// ->7970
/*7961*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->7987
/*7974*/    OPC_RecordChild0, // #0 = $src
/*7975*/    OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*7978*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 F4RC:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 F4RC:f32:$src, F8RC:f64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->8001
/*7990*/    OPC_RecordChild0, // #0 = $frB
/*7991*/    OPC_CheckType, MVT::f64,
/*7993*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->8015
/*8004*/    OPC_RecordChild0, // #0 = $frB
/*8005*/    OPC_CheckType, MVT::f64,
/*8007*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->8131
/*8018*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*8019*/    OPC_MoveChild, 1,
/*8021*/    OPC_Scope, 18, /*->8041*/ // 6 children in Scope
/*8023*/      OPC_CheckInteger, 54|128,11/*1462*/, 
/*8026*/      OPC_MoveParent,
/*8027*/      OPC_RecordChild2, // #1 = $src
/*8028*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8031*/      OPC_EmitMergeInputChains1_0,
/*8032*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1462:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*8041*/    /*Scope*/ 18, /*->8060*/
/*8042*/      OPC_CheckInteger, 55|128,11/*1463*/, 
/*8045*/      OPC_MoveParent,
/*8046*/      OPC_RecordChild2, // #1 = $src
/*8047*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8050*/      OPC_EmitMergeInputChains1_0,
/*8051*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1463:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*8060*/    /*Scope*/ 18, /*->8079*/
/*8061*/      OPC_CheckInteger, 56|128,11/*1464*/, 
/*8064*/      OPC_MoveParent,
/*8065*/      OPC_RecordChild2, // #1 = $src
/*8066*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8069*/      OPC_EmitMergeInputChains1_0,
/*8070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1464:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*8079*/    /*Scope*/ 18, /*->8098*/
/*8080*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*8083*/      OPC_MoveParent,
/*8084*/      OPC_RecordChild2, // #1 = $src
/*8085*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8088*/      OPC_EmitMergeInputChains1_0,
/*8089*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1467:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*8098*/    /*Scope*/ 18, /*->8117*/
/*8099*/      OPC_CheckInteger, 60|128,11/*1468*/, 
/*8102*/      OPC_MoveParent,
/*8103*/      OPC_RecordChild2, // #1 = $src
/*8104*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*8107*/      OPC_EmitMergeInputChains1_0,
/*8108*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1468:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*8117*/    /*Scope*/ 12, /*->8130*/
/*8118*/      OPC_CheckInteger, 61|128,11/*1469*/, 
/*8121*/      OPC_MoveParent,
/*8122*/      OPC_EmitMergeInputChains1_0,
/*8123*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1469:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*8130*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,13/*1754*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->9889
/*8135*/    OPC_MoveChild, 0,
/*8137*/    OPC_Scope, 17, /*->8156*/ // 103 children in Scope
/*8139*/      OPC_CheckInteger, 57|128,11/*1465*/, 
/*8142*/      OPC_MoveParent,
/*8143*/      OPC_RecordChild1, // #0 = $src
/*8144*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*8147*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1465:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*8156*/    /*Scope*/ 17, /*->8174*/
/*8157*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*8160*/      OPC_MoveParent,
/*8161*/      OPC_RecordChild1, // #0 = $src
/*8162*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*8165*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*8174*/    /*Scope*/ 40, /*->8215*/
/*8175*/      OPC_CheckInteger, 110|128,11/*1518*/, 
/*8178*/      OPC_MoveParent,
/*8179*/      OPC_RecordChild1, // #0 = $vB
/*8180*/      OPC_Scope, 13, /*->8195*/ // 2 children in Scope
/*8182*/        OPC_MoveChild, 2,
/*8184*/        OPC_CheckInteger, 0, 
/*8186*/        OPC_MoveParent,
/*8187*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1518:iPTR, VRRC:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 VRRC:v4f32:$vB)
/*8195*/      /*Scope*/ 18, /*->8214*/
/*8196*/        OPC_RecordChild2, // #1 = $UIMM
/*8197*/        OPC_MoveChild, 2,
/*8199*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8202*/        OPC_MoveParent,
/*8203*/        OPC_EmitConvertToTarget, 1,
/*8205*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1518:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*8214*/      0, /*End of Scope*/
/*8215*/    /*Scope*/ 40, /*->8256*/
/*8216*/      OPC_CheckInteger, 109|128,11/*1517*/, 
/*8219*/      OPC_MoveParent,
/*8220*/      OPC_RecordChild1, // #0 = $vB
/*8221*/      OPC_Scope, 13, /*->8236*/ // 2 children in Scope
/*8223*/        OPC_MoveChild, 2,
/*8225*/        OPC_CheckInteger, 0, 
/*8227*/        OPC_MoveParent,
/*8228*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1517:iPTR, VRRC:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 VRRC:v4f32:$vB)
/*8236*/      /*Scope*/ 18, /*->8255*/
/*8237*/        OPC_RecordChild2, // #1 = $UIMM
/*8238*/        OPC_MoveChild, 2,
/*8240*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8243*/        OPC_MoveParent,
/*8244*/        OPC_EmitConvertToTarget, 1,
/*8246*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1517:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*8255*/      0, /*End of Scope*/
/*8256*/    /*Scope*/ 17, /*->8274*/
/*8257*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*8260*/      OPC_MoveParent,
/*8261*/      OPC_RecordChild1, // #0 = $vA
/*8262*/      OPC_RecordChild2, // #1 = $vB
/*8263*/      OPC_RecordChild3, // #2 = $vC
/*8264*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1529:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*8274*/    /*Scope*/ 17, /*->8292*/
/*8275*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*8278*/      OPC_MoveParent,
/*8279*/      OPC_RecordChild1, // #0 = $vA
/*8280*/      OPC_RecordChild2, // #1 = $vB
/*8281*/      OPC_RecordChild3, // #2 = $vC
/*8282*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1530:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*8292*/    /*Scope*/ 17, /*->8310*/
/*8293*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*8296*/      OPC_MoveParent,
/*8297*/      OPC_RecordChild1, // #0 = $vA
/*8298*/      OPC_RecordChild2, // #1 = $vB
/*8299*/      OPC_RecordChild3, // #2 = $vC
/*8300*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1538:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*8310*/    /*Scope*/ 17, /*->8328*/
/*8311*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*8314*/      OPC_MoveParent,
/*8315*/      OPC_RecordChild1, // #0 = $vA
/*8316*/      OPC_RecordChild2, // #1 = $vB
/*8317*/      OPC_RecordChild3, // #2 = $vC
/*8318*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1554:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
/*8328*/    /*Scope*/ 17, /*->8346*/
/*8329*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*8332*/      OPC_MoveParent,
/*8333*/      OPC_RecordChild1, // #0 = $vA
/*8334*/      OPC_RecordChild2, // #1 = $vB
/*8335*/      OPC_RecordChild3, // #2 = $vC
/*8336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1571:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
/*8346*/    /*Scope*/ 15, /*->8362*/
/*8347*/      OPC_CheckInteger, 68|128,11/*1476*/, 
/*8350*/      OPC_MoveParent,
/*8351*/      OPC_RecordChild1, // #0 = $vA
/*8352*/      OPC_RecordChild2, // #1 = $vB
/*8353*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1476:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8362*/    /*Scope*/ 15, /*->8378*/
/*8363*/      OPC_CheckInteger, 69|128,11/*1477*/, 
/*8366*/      OPC_MoveParent,
/*8367*/      OPC_RecordChild1, // #0 = $vA
/*8368*/      OPC_RecordChild2, // #1 = $vB
/*8369*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1477:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8378*/    /*Scope*/ 15, /*->8394*/
/*8379*/      OPC_CheckInteger, 70|128,11/*1478*/, 
/*8382*/      OPC_MoveParent,
/*8383*/      OPC_RecordChild1, // #0 = $vA
/*8384*/      OPC_RecordChild2, // #1 = $vB
/*8385*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1478:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8394*/    /*Scope*/ 15, /*->8410*/
/*8395*/      OPC_CheckInteger, 71|128,11/*1479*/, 
/*8398*/      OPC_MoveParent,
/*8399*/      OPC_RecordChild1, // #0 = $vA
/*8400*/      OPC_RecordChild2, // #1 = $vB
/*8401*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1479:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8410*/    /*Scope*/ 15, /*->8426*/
/*8411*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*8414*/      OPC_MoveParent,
/*8415*/      OPC_RecordChild1, // #0 = $vA
/*8416*/      OPC_RecordChild2, // #1 = $vB
/*8417*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1480:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8426*/    /*Scope*/ 15, /*->8442*/
/*8427*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*8430*/      OPC_MoveParent,
/*8431*/      OPC_RecordChild1, // #0 = $vA
/*8432*/      OPC_RecordChild2, // #1 = $vB
/*8433*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1481:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8442*/    /*Scope*/ 15, /*->8458*/
/*8443*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*8446*/      OPC_MoveParent,
/*8447*/      OPC_RecordChild1, // #0 = $vA
/*8448*/      OPC_RecordChild2, // #1 = $vB
/*8449*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1482:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8458*/    /*Scope*/ 15, /*->8474*/
/*8459*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*8462*/      OPC_MoveParent,
/*8463*/      OPC_RecordChild1, // #0 = $vA
/*8464*/      OPC_RecordChild2, // #1 = $vB
/*8465*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1483:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8474*/    /*Scope*/ 15, /*->8490*/
/*8475*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*8478*/      OPC_MoveParent,
/*8479*/      OPC_RecordChild1, // #0 = $vA
/*8480*/      OPC_RecordChild2, // #1 = $vB
/*8481*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1484:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8490*/    /*Scope*/ 15, /*->8506*/
/*8491*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*8494*/      OPC_MoveParent,
/*8495*/      OPC_RecordChild1, // #0 = $vA
/*8496*/      OPC_RecordChild2, // #1 = $vB
/*8497*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1485:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8506*/    /*Scope*/ 15, /*->8522*/
/*8507*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*8510*/      OPC_MoveParent,
/*8511*/      OPC_RecordChild1, // #0 = $vA
/*8512*/      OPC_RecordChild2, // #1 = $vB
/*8513*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1486:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8522*/    /*Scope*/ 15, /*->8538*/
/*8523*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*8526*/      OPC_MoveParent,
/*8527*/      OPC_RecordChild1, // #0 = $vA
/*8528*/      OPC_RecordChild2, // #1 = $vB
/*8529*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1487:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8538*/    /*Scope*/ 15, /*->8554*/
/*8539*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*8542*/      OPC_MoveParent,
/*8543*/      OPC_RecordChild1, // #0 = $vA
/*8544*/      OPC_RecordChild2, // #1 = $vB
/*8545*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1488:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8554*/    /*Scope*/ 15, /*->8570*/
/*8555*/      OPC_CheckInteger, 115|128,11/*1523*/, 
/*8558*/      OPC_MoveParent,
/*8559*/      OPC_RecordChild1, // #0 = $vA
/*8560*/      OPC_RecordChild2, // #1 = $vB
/*8561*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1523:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8570*/    /*Scope*/ 15, /*->8586*/
/*8571*/      OPC_CheckInteger, 116|128,11/*1524*/, 
/*8574*/      OPC_MoveParent,
/*8575*/      OPC_RecordChild1, // #0 = $vA
/*8576*/      OPC_RecordChild2, // #1 = $vB
/*8577*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1524:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8586*/    /*Scope*/ 15, /*->8602*/
/*8587*/      OPC_CheckInteger, 117|128,11/*1525*/, 
/*8590*/      OPC_MoveParent,
/*8591*/      OPC_RecordChild1, // #0 = $vA
/*8592*/      OPC_RecordChild2, // #1 = $vB
/*8593*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1525:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8602*/    /*Scope*/ 15, /*->8618*/
/*8603*/      OPC_CheckInteger, 118|128,11/*1526*/, 
/*8606*/      OPC_MoveParent,
/*8607*/      OPC_RecordChild1, // #0 = $vA
/*8608*/      OPC_RecordChild2, // #1 = $vB
/*8609*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1526:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8618*/    /*Scope*/ 15, /*->8634*/
/*8619*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*8622*/      OPC_MoveParent,
/*8623*/      OPC_RecordChild1, // #0 = $vA
/*8624*/      OPC_RecordChild2, // #1 = $vB
/*8625*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1527:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8634*/    /*Scope*/ 15, /*->8650*/
/*8635*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*8638*/      OPC_MoveParent,
/*8639*/      OPC_RecordChild1, // #0 = $vA
/*8640*/      OPC_RecordChild2, // #1 = $vB
/*8641*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1528:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8650*/    /*Scope*/ 15, /*->8666*/
/*8651*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*8654*/      OPC_MoveParent,
/*8655*/      OPC_RecordChild1, // #0 = $vA
/*8656*/      OPC_RecordChild2, // #1 = $vB
/*8657*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1532:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8666*/    /*Scope*/ 15, /*->8682*/
/*8667*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*8670*/      OPC_MoveParent,
/*8671*/      OPC_RecordChild1, // #0 = $vA
/*8672*/      OPC_RecordChild2, // #1 = $vB
/*8673*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1533:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8682*/    /*Scope*/ 15, /*->8698*/
/*8683*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*8686*/      OPC_MoveParent,
/*8687*/      OPC_RecordChild1, // #0 = $vA
/*8688*/      OPC_RecordChild2, // #1 = $vB
/*8689*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1534:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8698*/    /*Scope*/ 15, /*->8714*/
/*8699*/      OPC_CheckInteger, 127|128,11/*1535*/, 
/*8702*/      OPC_MoveParent,
/*8703*/      OPC_RecordChild1, // #0 = $vA
/*8704*/      OPC_RecordChild2, // #1 = $vB
/*8705*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1535:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8714*/    /*Scope*/ 15, /*->8730*/
/*8715*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*8718*/      OPC_MoveParent,
/*8719*/      OPC_RecordChild1, // #0 = $vA
/*8720*/      OPC_RecordChild2, // #1 = $vB
/*8721*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1536:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8730*/    /*Scope*/ 15, /*->8746*/
/*8731*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*8734*/      OPC_MoveParent,
/*8735*/      OPC_RecordChild1, // #0 = $vA
/*8736*/      OPC_RecordChild2, // #1 = $vB
/*8737*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1537:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8746*/    /*Scope*/ 17, /*->8764*/
/*8747*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*8750*/      OPC_MoveParent,
/*8751*/      OPC_RecordChild1, // #0 = $vA
/*8752*/      OPC_RecordChild2, // #1 = $vB
/*8753*/      OPC_RecordChild3, // #2 = $vC
/*8754*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1539:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8764*/    /*Scope*/ 17, /*->8782*/
/*8765*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*8768*/      OPC_MoveParent,
/*8769*/      OPC_RecordChild1, // #0 = $vA
/*8770*/      OPC_RecordChild2, // #1 = $vB
/*8771*/      OPC_RecordChild3, // #2 = $vC
/*8772*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1540:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8782*/    /*Scope*/ 17, /*->8800*/
/*8783*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*8786*/      OPC_MoveParent,
/*8787*/      OPC_RecordChild1, // #0 = $vA
/*8788*/      OPC_RecordChild2, // #1 = $vB
/*8789*/      OPC_RecordChild3, // #2 = $vC
/*8790*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8800*/    /*Scope*/ 17, /*->8818*/
/*8801*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*8804*/      OPC_MoveParent,
/*8805*/      OPC_RecordChild1, // #0 = $vA
/*8806*/      OPC_RecordChild2, // #1 = $vB
/*8807*/      OPC_RecordChild3, // #2 = $vC
/*8808*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1542:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8818*/    /*Scope*/ 17, /*->8836*/
/*8819*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*8822*/      OPC_MoveParent,
/*8823*/      OPC_RecordChild1, // #0 = $vA
/*8824*/      OPC_RecordChild2, // #1 = $vB
/*8825*/      OPC_RecordChild3, // #2 = $vC
/*8826*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1543:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8836*/    /*Scope*/ 17, /*->8854*/
/*8837*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*8840*/      OPC_MoveParent,
/*8841*/      OPC_RecordChild1, // #0 = $vA
/*8842*/      OPC_RecordChild2, // #1 = $vB
/*8843*/      OPC_RecordChild3, // #2 = $vC
/*8844*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8854*/    /*Scope*/ 15, /*->8870*/
/*8855*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*8858*/      OPC_MoveParent,
/*8859*/      OPC_RecordChild1, // #0 = $vA
/*8860*/      OPC_RecordChild2, // #1 = $vB
/*8861*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1545:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8870*/    /*Scope*/ 15, /*->8886*/
/*8871*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*8874*/      OPC_MoveParent,
/*8875*/      OPC_RecordChild1, // #0 = $vA
/*8876*/      OPC_RecordChild2, // #1 = $vB
/*8877*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8886*/    /*Scope*/ 15, /*->8902*/
/*8887*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*8890*/      OPC_MoveParent,
/*8891*/      OPC_RecordChild1, // #0 = $vA
/*8892*/      OPC_RecordChild2, // #1 = $vB
/*8893*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1547:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8902*/    /*Scope*/ 15, /*->8918*/
/*8903*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*8906*/      OPC_MoveParent,
/*8907*/      OPC_RecordChild1, // #0 = $vA
/*8908*/      OPC_RecordChild2, // #1 = $vB
/*8909*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8918*/    /*Scope*/ 15, /*->8934*/
/*8919*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*8922*/      OPC_MoveParent,
/*8923*/      OPC_RecordChild1, // #0 = $vA
/*8924*/      OPC_RecordChild2, // #1 = $vB
/*8925*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8934*/    /*Scope*/ 15, /*->8950*/
/*8935*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*8938*/      OPC_MoveParent,
/*8939*/      OPC_RecordChild1, // #0 = $vA
/*8940*/      OPC_RecordChild2, // #1 = $vB
/*8941*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8950*/    /*Scope*/ 15, /*->8966*/
/*8951*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*8954*/      OPC_MoveParent,
/*8955*/      OPC_RecordChild1, // #0 = $vA
/*8956*/      OPC_RecordChild2, // #1 = $vB
/*8957*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1551:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8966*/    /*Scope*/ 15, /*->8982*/
/*8967*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*8970*/      OPC_MoveParent,
/*8971*/      OPC_RecordChild1, // #0 = $vA
/*8972*/      OPC_RecordChild2, // #1 = $vB
/*8973*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8982*/    /*Scope*/ 15, /*->8998*/
/*8983*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*8986*/      OPC_MoveParent,
/*8987*/      OPC_RecordChild1, // #0 = $vA
/*8988*/      OPC_RecordChild2, // #1 = $vB
/*8989*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1585:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8998*/    /*Scope*/ 15, /*->9014*/
/*8999*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*9002*/      OPC_MoveParent,
/*9003*/      OPC_RecordChild1, // #0 = $vA
/*9004*/      OPC_RecordChild2, // #1 = $vB
/*9005*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1586:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9014*/    /*Scope*/ 15, /*->9030*/
/*9015*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*9018*/      OPC_MoveParent,
/*9019*/      OPC_RecordChild1, // #0 = $vA
/*9020*/      OPC_RecordChild2, // #1 = $vB
/*9021*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1587:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9030*/    /*Scope*/ 15, /*->9046*/
/*9031*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*9034*/      OPC_MoveParent,
/*9035*/      OPC_RecordChild1, // #0 = $vA
/*9036*/      OPC_RecordChild2, // #1 = $vB
/*9037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1588:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9046*/    /*Scope*/ 15, /*->9062*/
/*9047*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*9050*/      OPC_MoveParent,
/*9051*/      OPC_RecordChild1, // #0 = $vA
/*9052*/      OPC_RecordChild2, // #1 = $vB
/*9053*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1589:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9062*/    /*Scope*/ 15, /*->9078*/
/*9063*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*9066*/      OPC_MoveParent,
/*9067*/      OPC_RecordChild1, // #0 = $vA
/*9068*/      OPC_RecordChild2, // #1 = $vB
/*9069*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1590:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9078*/    /*Scope*/ 15, /*->9094*/
/*9079*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*9082*/      OPC_MoveParent,
/*9083*/      OPC_RecordChild1, // #0 = $vA
/*9084*/      OPC_RecordChild2, // #1 = $vB
/*9085*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1591:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9094*/    /*Scope*/ 15, /*->9110*/
/*9095*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*9098*/      OPC_MoveParent,
/*9099*/      OPC_RecordChild1, // #0 = $vA
/*9100*/      OPC_RecordChild2, // #1 = $vB
/*9101*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1596:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9110*/    /*Scope*/ 15, /*->9126*/
/*9111*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*9114*/      OPC_MoveParent,
/*9115*/      OPC_RecordChild1, // #0 = $vA
/*9116*/      OPC_RecordChild2, // #1 = $vB
/*9117*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9126*/    /*Scope*/ 15, /*->9142*/
/*9127*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*9130*/      OPC_MoveParent,
/*9131*/      OPC_RecordChild1, // #0 = $vA
/*9132*/      OPC_RecordChild2, // #1 = $vB
/*9133*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1593:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*9142*/    /*Scope*/ 15, /*->9158*/
/*9143*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*9146*/      OPC_MoveParent,
/*9147*/      OPC_RecordChild1, // #0 = $vA
/*9148*/      OPC_RecordChild2, // #1 = $vB
/*9149*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1594:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
/*9158*/    /*Scope*/ 15, /*->9174*/
/*9159*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*9162*/      OPC_MoveParent,
/*9163*/      OPC_RecordChild1, // #0 = $vA
/*9164*/      OPC_RecordChild2, // #1 = $vB
/*9165*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*9174*/    /*Scope*/ 15, /*->9190*/
/*9175*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*9178*/      OPC_MoveParent,
/*9179*/      OPC_RecordChild1, // #0 = $vA
/*9180*/      OPC_RecordChild2, // #1 = $vB
/*9181*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1567:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9190*/    /*Scope*/ 15, /*->9206*/
/*9191*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*9194*/      OPC_MoveParent,
/*9195*/      OPC_RecordChild1, // #0 = $vA
/*9196*/      OPC_RecordChild2, // #1 = $vB
/*9197*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1568:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9206*/    /*Scope*/ 15, /*->9222*/
/*9207*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*9210*/      OPC_MoveParent,
/*9211*/      OPC_RecordChild1, // #0 = $vA
/*9212*/      OPC_RecordChild2, // #1 = $vB
/*9213*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1569:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9222*/    /*Scope*/ 15, /*->9238*/
/*9223*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*9226*/      OPC_MoveParent,
/*9227*/      OPC_RecordChild1, // #0 = $vA
/*9228*/      OPC_RecordChild2, // #1 = $vB
/*9229*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1572:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9238*/    /*Scope*/ 15, /*->9254*/
/*9239*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*9242*/      OPC_MoveParent,
/*9243*/      OPC_RecordChild1, // #0 = $vA
/*9244*/      OPC_RecordChild2, // #1 = $vB
/*9245*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9254*/    /*Scope*/ 15, /*->9270*/
/*9255*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*9258*/      OPC_MoveParent,
/*9259*/      OPC_RecordChild1, // #0 = $vA
/*9260*/      OPC_RecordChild2, // #1 = $vB
/*9261*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1573:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9270*/    /*Scope*/ 15, /*->9286*/
/*9271*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*9274*/      OPC_MoveParent,
/*9275*/      OPC_RecordChild1, // #0 = $vA
/*9276*/      OPC_RecordChild2, // #1 = $vB
/*9277*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1574:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9286*/    /*Scope*/ 15, /*->9302*/
/*9287*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*9290*/      OPC_MoveParent,
/*9291*/      OPC_RecordChild1, // #0 = $vA
/*9292*/      OPC_RecordChild2, // #1 = $vB
/*9293*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1576:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9302*/    /*Scope*/ 15, /*->9318*/
/*9303*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*9306*/      OPC_MoveParent,
/*9307*/      OPC_RecordChild1, // #0 = $vA
/*9308*/      OPC_RecordChild2, // #1 = $vB
/*9309*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1577:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9318*/    /*Scope*/ 15, /*->9334*/
/*9319*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*9322*/      OPC_MoveParent,
/*9323*/      OPC_RecordChild1, // #0 = $vA
/*9324*/      OPC_RecordChild2, // #1 = $vB
/*9325*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1583:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9334*/    /*Scope*/ 15, /*->9350*/
/*9335*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*9338*/      OPC_MoveParent,
/*9339*/      OPC_RecordChild1, // #0 = $vA
/*9340*/      OPC_RecordChild2, // #1 = $vB
/*9341*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1578:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9350*/    /*Scope*/ 15, /*->9366*/
/*9351*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*9354*/      OPC_MoveParent,
/*9355*/      OPC_RecordChild1, // #0 = $vA
/*9356*/      OPC_RecordChild2, // #1 = $vB
/*9357*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1579:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9366*/    /*Scope*/ 15, /*->9382*/
/*9367*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*9370*/      OPC_MoveParent,
/*9371*/      OPC_RecordChild1, // #0 = $vA
/*9372*/      OPC_RecordChild2, // #1 = $vB
/*9373*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1580:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9382*/    /*Scope*/ 15, /*->9398*/
/*9383*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*9386*/      OPC_MoveParent,
/*9387*/      OPC_RecordChild1, // #0 = $vA
/*9388*/      OPC_RecordChild2, // #1 = $vB
/*9389*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1581:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9398*/    /*Scope*/ 15, /*->9414*/
/*9399*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*9402*/      OPC_MoveParent,
/*9403*/      OPC_RecordChild1, // #0 = $vA
/*9404*/      OPC_RecordChild2, // #1 = $vB
/*9405*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1582:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9414*/    /*Scope*/ 15, /*->9430*/
/*9415*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*9418*/      OPC_MoveParent,
/*9419*/      OPC_RecordChild1, // #0 = $vA
/*9420*/      OPC_RecordChild2, // #1 = $vB
/*9421*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1584:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9430*/    /*Scope*/ 15, /*->9446*/
/*9431*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*9434*/      OPC_MoveParent,
/*9435*/      OPC_RecordChild1, // #0 = $vA
/*9436*/      OPC_RecordChild2, // #1 = $vB
/*9437*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1555:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9446*/    /*Scope*/ 15, /*->9462*/
/*9447*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*9450*/      OPC_MoveParent,
/*9451*/      OPC_RecordChild1, // #0 = $vA
/*9452*/      OPC_RecordChild2, // #1 = $vB
/*9453*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1556:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9462*/    /*Scope*/ 15, /*->9478*/
/*9463*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*9466*/      OPC_MoveParent,
/*9467*/      OPC_RecordChild1, // #0 = $vA
/*9468*/      OPC_RecordChild2, // #1 = $vB
/*9469*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1557:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9478*/    /*Scope*/ 15, /*->9494*/
/*9479*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*9482*/      OPC_MoveParent,
/*9483*/      OPC_RecordChild1, // #0 = $vA
/*9484*/      OPC_RecordChild2, // #1 = $vB
/*9485*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1558:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9494*/    /*Scope*/ 15, /*->9510*/
/*9495*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*9498*/      OPC_MoveParent,
/*9499*/      OPC_RecordChild1, // #0 = $vA
/*9500*/      OPC_RecordChild2, // #1 = $vB
/*9501*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9510*/    /*Scope*/ 15, /*->9526*/
/*9511*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*9514*/      OPC_MoveParent,
/*9515*/      OPC_RecordChild1, // #0 = $vA
/*9516*/      OPC_RecordChild2, // #1 = $vB
/*9517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1560:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9526*/    /*Scope*/ 15, /*->9542*/
/*9527*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*9530*/      OPC_MoveParent,
/*9531*/      OPC_RecordChild1, // #0 = $vA
/*9532*/      OPC_RecordChild2, // #1 = $vB
/*9533*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1561:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9542*/    /*Scope*/ 13, /*->9556*/
/*9543*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*9546*/      OPC_MoveParent,
/*9547*/      OPC_RecordChild1, // #0 = $vB
/*9548*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
/*9556*/    /*Scope*/ 13, /*->9570*/
/*9557*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*9560*/      OPC_MoveParent,
/*9561*/      OPC_RecordChild1, // #0 = $vB
/*9562*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1598:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
/*9570*/    /*Scope*/ 13, /*->9584*/
/*9571*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*9574*/      OPC_MoveParent,
/*9575*/      OPC_RecordChild1, // #0 = $vB
/*9576*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1599:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
/*9584*/    /*Scope*/ 13, /*->9598*/
/*9585*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*9588*/      OPC_MoveParent,
/*9589*/      OPC_RecordChild1, // #0 = $vB
/*9590*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
/*9598*/    /*Scope*/ 13, /*->9612*/
/*9599*/      OPC_CheckInteger, 65|128,12/*1601*/, 
/*9602*/      OPC_MoveParent,
/*9603*/      OPC_RecordChild1, // #0 = $vB
/*9604*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1601:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
/*9612*/    /*Scope*/ 13, /*->9626*/
/*9613*/      OPC_CheckInteger, 66|128,12/*1602*/, 
/*9616*/      OPC_MoveParent,
/*9617*/      OPC_RecordChild1, // #0 = $vB
/*9618*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1602:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
/*9626*/    /*Scope*/ 40, /*->9667*/
/*9627*/      OPC_CheckInteger, 81|128,11/*1489*/, 
/*9630*/      OPC_MoveParent,
/*9631*/      OPC_RecordChild1, // #0 = $vB
/*9632*/      OPC_Scope, 13, /*->9647*/ // 2 children in Scope
/*9634*/        OPC_MoveChild, 2,
/*9636*/        OPC_CheckInteger, 0, 
/*9638*/        OPC_MoveParent,
/*9639*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1489:iPTR, VRRC:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 VRRC:v4i32:$vB)
/*9647*/      /*Scope*/ 18, /*->9666*/
/*9648*/        OPC_RecordChild2, // #1 = $UIMM
/*9649*/        OPC_MoveChild, 2,
/*9651*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9654*/        OPC_MoveParent,
/*9655*/        OPC_EmitConvertToTarget, 1,
/*9657*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1489:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9666*/      0, /*End of Scope*/
/*9667*/    /*Scope*/ 40, /*->9708*/
/*9668*/      OPC_CheckInteger, 82|128,11/*1490*/, 
/*9671*/      OPC_MoveParent,
/*9672*/      OPC_RecordChild1, // #0 = $vB
/*9673*/      OPC_Scope, 13, /*->9688*/ // 2 children in Scope
/*9675*/        OPC_MoveChild, 2,
/*9677*/        OPC_CheckInteger, 0, 
/*9679*/        OPC_MoveParent,
/*9680*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1490:iPTR, VRRC:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 VRRC:v4i32:$vB)
/*9688*/      /*Scope*/ 18, /*->9707*/
/*9689*/        OPC_RecordChild2, // #1 = $UIMM
/*9690*/        OPC_MoveChild, 2,
/*9692*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9695*/        OPC_MoveParent,
/*9696*/        OPC_EmitConvertToTarget, 1,
/*9698*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1490:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9707*/      0, /*End of Scope*/
/*9708*/    /*Scope*/ 13, /*->9722*/
/*9709*/      OPC_CheckInteger, 111|128,11/*1519*/, 
/*9712*/      OPC_MoveParent,
/*9713*/      OPC_RecordChild1, // #0 = $vB
/*9714*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1519:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
/*9722*/    /*Scope*/ 13, /*->9736*/
/*9723*/      OPC_CheckInteger, 112|128,11/*1520*/, 
/*9726*/      OPC_MoveParent,
/*9727*/      OPC_RecordChild1, // #0 = $vB
/*9728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1520:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
/*9736*/    /*Scope*/ 15, /*->9752*/
/*9737*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*9740*/      OPC_MoveParent,
/*9741*/      OPC_RecordChild1, // #0 = $vA
/*9742*/      OPC_RecordChild2, // #1 = $vB
/*9743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1522:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9752*/    /*Scope*/ 15, /*->9768*/
/*9753*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*9756*/      OPC_MoveParent,
/*9757*/      OPC_RecordChild1, // #0 = $vA
/*9758*/      OPC_RecordChild2, // #1 = $vB
/*9759*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1531:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9768*/    /*Scope*/ 13, /*->9782*/
/*9769*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*9772*/      OPC_MoveParent,
/*9773*/      OPC_RecordChild1, // #0 = $vB
/*9774*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1562:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 VRRC:v4f32:$vB)
/*9782*/    /*Scope*/ 13, /*->9796*/
/*9783*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*9786*/      OPC_MoveParent,
/*9787*/      OPC_RecordChild1, // #0 = $vB
/*9788*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1563:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 VRRC:v4f32:$vB)
/*9796*/    /*Scope*/ 13, /*->9810*/
/*9797*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*9800*/      OPC_MoveParent,
/*9801*/      OPC_RecordChild1, // #0 = $vB
/*9802*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1564:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 VRRC:v4f32:$vB)
/*9810*/    /*Scope*/ 13, /*->9824*/
/*9811*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*9814*/      OPC_MoveParent,
/*9815*/      OPC_RecordChild1, // #0 = $vB
/*9816*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1565:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 VRRC:v4f32:$vB)
/*9824*/    /*Scope*/ 13, /*->9838*/
/*9825*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*9828*/      OPC_MoveParent,
/*9829*/      OPC_RecordChild1, // #0 = $vB
/*9830*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1566:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vB)
/*9838*/    /*Scope*/ 13, /*->9852*/
/*9839*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*9842*/      OPC_MoveParent,
/*9843*/      OPC_RecordChild1, // #0 = $vB
/*9844*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1570:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
/*9852*/    /*Scope*/ 17, /*->9870*/
/*9853*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*9856*/      OPC_MoveParent,
/*9857*/      OPC_RecordChild1, // #0 = $A
/*9858*/      OPC_RecordChild2, // #1 = $B
/*9859*/      OPC_RecordChild3, // #2 = $C
/*9860*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1521:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9870*/    /*Scope*/ 17, /*->9888*/
/*9871*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*9874*/      OPC_MoveParent,
/*9875*/      OPC_RecordChild1, // #0 = $A
/*9876*/      OPC_RecordChild2, // #1 = $B
/*9877*/      OPC_RecordChild3, // #2 = $C
/*9878*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1553:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9888*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->9918
/*9892*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*9893*/    OPC_CaptureGlueInput,
/*9894*/    OPC_RecordChild1, // #1 = $amt1
/*9895*/    OPC_MoveChild, 1,
/*9897*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9900*/    OPC_MoveParent,
/*9901*/    OPC_RecordChild2, // #2 = $amt2
/*9902*/    OPC_MoveChild, 2,
/*9904*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9907*/    OPC_MoveParent,
/*9908*/    OPC_EmitMergeInputChains1_0,
/*9909*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->10120
/*9922*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*9923*/    OPC_CaptureGlueInput,
/*9924*/    OPC_RecordChild1, // #1 = $func
/*9925*/    OPC_Scope, 21|128,1/*149*/, /*->10077*/ // 3 children in Scope
/*9928*/      OPC_MoveChild, 1,
/*9930*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->9982
/*9934*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9958
/*9937*/          OPC_MoveParent,
/*9938*/          OPC_RecordChild2, // #2 = $offset
/*9939*/          OPC_MoveChild, 2,
/*9941*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9944*/          OPC_MoveParent,
/*9945*/          OPC_EmitMergeInputChains1_0,
/*9946*/          OPC_EmitConvertToTarget, 1,
/*9948*/          OPC_EmitConvertToTarget, 2,
/*9950*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->9981
/*9960*/          OPC_MoveParent,
/*9961*/          OPC_RecordChild2, // #2 = $offset
/*9962*/          OPC_MoveChild, 2,
/*9964*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9967*/          OPC_MoveParent,
/*9968*/          OPC_EmitMergeInputChains1_0,
/*9969*/          OPC_EmitConvertToTarget, 1,
/*9971*/          OPC_EmitConvertToTarget, 2,
/*9973*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10029
/*9985*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->10007
/*9988*/          OPC_MoveParent,
/*9989*/          OPC_RecordChild2, // #2 = $imm
/*9990*/          OPC_MoveChild, 2,
/*9992*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9995*/          OPC_MoveParent,
/*9996*/          OPC_EmitMergeInputChains1_0,
/*9997*/          OPC_EmitConvertToTarget, 2,
/*9999*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->10028
/*10009*/         OPC_MoveParent,
/*10010*/         OPC_RecordChild2, // #2 = $imm
/*10011*/         OPC_MoveChild, 2,
/*10013*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10016*/         OPC_MoveParent,
/*10017*/         OPC_EmitMergeInputChains1_0,
/*10018*/         OPC_EmitConvertToTarget, 2,
/*10020*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10076
/*10032*/       OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->10054
/*10035*/         OPC_MoveParent,
/*10036*/         OPC_RecordChild2, // #2 = $imm
/*10037*/         OPC_MoveChild, 2,
/*10039*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10042*/         OPC_MoveParent,
/*10043*/         OPC_EmitMergeInputChains1_0,
/*10044*/         OPC_EmitConvertToTarget, 2,
/*10046*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->10075
/*10056*/         OPC_MoveParent,
/*10057*/         OPC_RecordChild2, // #2 = $imm
/*10058*/         OPC_MoveChild, 2,
/*10060*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10063*/         OPC_MoveParent,
/*10064*/         OPC_EmitMergeInputChains1_0,
/*10065*/         OPC_EmitConvertToTarget, 2,
/*10067*/         OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*10077*/   /*Scope*/ 20, /*->10098*/
/*10078*/     OPC_CheckChild1Type, MVT::i32,
/*10080*/     OPC_RecordChild2, // #2 = $imm
/*10081*/     OPC_MoveChild, 2,
/*10083*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10086*/     OPC_MoveParent,
/*10087*/     OPC_EmitMergeInputChains1_0,
/*10088*/     OPC_EmitConvertToTarget, 2,
/*10090*/     OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*10098*/   /*Scope*/ 20, /*->10119*/
/*10099*/     OPC_CheckChild1Type, MVT::i64,
/*10101*/     OPC_RecordChild2, // #2 = $imm
/*10102*/     OPC_MoveChild, 2,
/*10104*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10107*/     OPC_MoveParent,
/*10108*/     OPC_EmitMergeInputChains1_0,
/*10109*/     OPC_EmitConvertToTarget, 2,
/*10111*/     OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*10119*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->10143
/*10123*/   OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*10124*/   OPC_MoveChild, 1,
/*10126*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10129*/   OPC_MoveParent,
/*10130*/   OPC_MoveChild, 2,
/*10132*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10135*/   OPC_MoveParent,
/*10136*/   OPC_EmitMergeInputChains1_0,
/*10137*/   OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(PPCISD::VCMP),// ->10359
/*10147*/   OPC_RecordChild0, // #0 = $vA
/*10148*/   OPC_RecordChild1, // #1 = $vB
/*10149*/   OPC_MoveChild, 2,
/*10151*/   OPC_Scope, 14, /*->10167*/ // 13 children in Scope
/*10153*/     OPC_CheckInteger, 6, 
/*10155*/     OPC_MoveParent,
/*10156*/     OPC_CheckType, MVT::v16i8,
/*10158*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10167*/   /*Scope*/ 15, /*->10183*/
/*10168*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*10171*/     OPC_MoveParent,
/*10172*/     OPC_CheckType, MVT::v16i8,
/*10174*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10183*/   /*Scope*/ 15, /*->10199*/
/*10184*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*10187*/     OPC_MoveParent,
/*10188*/     OPC_CheckType, MVT::v16i8,
/*10190*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10199*/   /*Scope*/ 14, /*->10214*/
/*10200*/     OPC_CheckInteger, 70, 
/*10202*/     OPC_MoveParent,
/*10203*/     OPC_CheckType, MVT::v8i16,
/*10205*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10214*/   /*Scope*/ 15, /*->10230*/
/*10215*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*10218*/     OPC_MoveParent,
/*10219*/     OPC_CheckType, MVT::v8i16,
/*10221*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10230*/   /*Scope*/ 15, /*->10246*/
/*10231*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*10234*/     OPC_MoveParent,
/*10235*/     OPC_CheckType, MVT::v8i16,
/*10237*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10246*/   /*Scope*/ 15, /*->10262*/
/*10247*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*10250*/     OPC_MoveParent,
/*10251*/     OPC_CheckType, MVT::v4i32,
/*10253*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10262*/   /*Scope*/ 15, /*->10278*/
/*10263*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*10266*/     OPC_MoveParent,
/*10267*/     OPC_CheckType, MVT::v4i32,
/*10269*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10278*/   /*Scope*/ 15, /*->10294*/
/*10279*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*10282*/     OPC_MoveParent,
/*10283*/     OPC_CheckType, MVT::v4i32,
/*10285*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10294*/   /*Scope*/ 15, /*->10310*/
/*10295*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*10298*/     OPC_MoveParent,
/*10299*/     OPC_CheckType, MVT::v4f32,
/*10301*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10310*/   /*Scope*/ 15, /*->10326*/
/*10311*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*10314*/     OPC_MoveParent,
/*10315*/     OPC_CheckType, MVT::v4f32,
/*10317*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10326*/   /*Scope*/ 15, /*->10342*/
/*10327*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*10330*/     OPC_MoveParent,
/*10331*/     OPC_CheckType, MVT::v4f32,
/*10333*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10342*/   /*Scope*/ 15, /*->10358*/
/*10343*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*10346*/     OPC_MoveParent,
/*10347*/     OPC_CheckType, MVT::v4f32,
/*10349*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10358*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(PPCISD::VCMPo),// ->10588
/*10363*/   OPC_RecordChild0, // #0 = $vA
/*10364*/   OPC_RecordChild1, // #1 = $vB
/*10365*/   OPC_MoveChild, 2,
/*10367*/   OPC_Scope, 15, /*->10384*/ // 13 children in Scope
/*10369*/     OPC_CheckInteger, 6, 
/*10371*/     OPC_MoveParent,
/*10372*/     OPC_CheckType, MVT::v16i8,
/*10374*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10384*/   /*Scope*/ 16, /*->10401*/
/*10385*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*10388*/     OPC_MoveParent,
/*10389*/     OPC_CheckType, MVT::v16i8,
/*10391*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10401*/   /*Scope*/ 16, /*->10418*/
/*10402*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*10405*/     OPC_MoveParent,
/*10406*/     OPC_CheckType, MVT::v16i8,
/*10408*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10418*/   /*Scope*/ 15, /*->10434*/
/*10419*/     OPC_CheckInteger, 70, 
/*10421*/     OPC_MoveParent,
/*10422*/     OPC_CheckType, MVT::v8i16,
/*10424*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10434*/   /*Scope*/ 16, /*->10451*/
/*10435*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*10438*/     OPC_MoveParent,
/*10439*/     OPC_CheckType, MVT::v8i16,
/*10441*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10451*/   /*Scope*/ 16, /*->10468*/
/*10452*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*10455*/     OPC_MoveParent,
/*10456*/     OPC_CheckType, MVT::v8i16,
/*10458*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10468*/   /*Scope*/ 16, /*->10485*/
/*10469*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*10472*/     OPC_MoveParent,
/*10473*/     OPC_CheckType, MVT::v4i32,
/*10475*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10485*/   /*Scope*/ 16, /*->10502*/
/*10486*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*10489*/     OPC_MoveParent,
/*10490*/     OPC_CheckType, MVT::v4i32,
/*10492*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10502*/   /*Scope*/ 16, /*->10519*/
/*10503*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*10506*/     OPC_MoveParent,
/*10507*/     OPC_CheckType, MVT::v4i32,
/*10509*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10519*/   /*Scope*/ 16, /*->10536*/
/*10520*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*10523*/     OPC_MoveParent,
/*10524*/     OPC_CheckType, MVT::v4f32,
/*10526*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10536*/   /*Scope*/ 16, /*->10553*/
/*10537*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*10540*/     OPC_MoveParent,
/*10541*/     OPC_CheckType, MVT::v4f32,
/*10543*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10553*/   /*Scope*/ 16, /*->10570*/
/*10554*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*10557*/     OPC_MoveParent,
/*10558*/     OPC_CheckType, MVT::v4f32,
/*10560*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10570*/   /*Scope*/ 16, /*->10587*/
/*10571*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*10574*/     OPC_MoveParent,
/*10575*/     OPC_CheckType, MVT::v4f32,
/*10577*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10587*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->10900
/*10592*/   OPC_Scope, 73, /*->10667*/ // 4 children in Scope
/*10594*/     OPC_RecordNode, // #0 = $UIMM
/*10595*/     OPC_RecordChild0, // #1 = $vB
/*10596*/     OPC_MoveChild, 1,
/*10598*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10601*/     OPC_MoveParent,
/*10602*/     OPC_CheckType, MVT::v16i8,
/*10604*/     OPC_Scope, 14, /*->10620*/ // 4 children in Scope
/*10606*/       OPC_CheckPredicate, 67, // Predicate_vspltb_shuffle
/*10608*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*10611*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10620*/     /*Scope*/ 14, /*->10635*/
/*10621*/       OPC_CheckPredicate, 68, // Predicate_vsplth_shuffle
/*10623*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*10626*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10635*/     /*Scope*/ 14, /*->10650*/
/*10636*/       OPC_CheckPredicate, 69, // Predicate_vspltw_shuffle
/*10638*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*10641*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10650*/     /*Scope*/ 15, /*->10666*/
/*10651*/       OPC_CheckPredicate, 70, // Predicate_vsldoi_unary_shuffle
/*10653*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*10656*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 VRRC:v16i8:$in))
/*10666*/     0, /*End of Scope*/
/*10667*/   /*Scope*/ 107, /*->10775*/
/*10668*/     OPC_RecordChild0, // #0 = $vA
/*10669*/     OPC_MoveChild, 1,
/*10671*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10674*/     OPC_MoveParent,
/*10675*/     OPC_CheckType, MVT::v16i8,
/*10677*/     OPC_Scope, 11, /*->10690*/ // 8 children in Scope
/*10679*/       OPC_CheckPredicate, 71, // Predicate_vpkuwum_unary_shuffle
/*10681*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10690*/     /*Scope*/ 11, /*->10702*/
/*10691*/       OPC_CheckPredicate, 72, // Predicate_vpkuhum_unary_shuffle
/*10693*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10702*/     /*Scope*/ 11, /*->10714*/
/*10703*/       OPC_CheckPredicate, 73, // Predicate_vmrglb_unary_shuffle
/*10705*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10714*/     /*Scope*/ 11, /*->10726*/
/*10715*/       OPC_CheckPredicate, 74, // Predicate_vmrglh_unary_shuffle
/*10717*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10726*/     /*Scope*/ 11, /*->10738*/
/*10727*/       OPC_CheckPredicate, 75, // Predicate_vmrglw_unary_shuffle
/*10729*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10738*/     /*Scope*/ 11, /*->10750*/
/*10739*/       OPC_CheckPredicate, 76, // Predicate_vmrghb_unary_shuffle
/*10741*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10750*/     /*Scope*/ 11, /*->10762*/
/*10751*/       OPC_CheckPredicate, 77, // Predicate_vmrghh_unary_shuffle
/*10753*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10762*/     /*Scope*/ 11, /*->10774*/
/*10763*/       OPC_CheckPredicate, 78, // Predicate_vmrghw_unary_shuffle
/*10765*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10774*/     0, /*End of Scope*/
/*10775*/   /*Scope*/ 20, /*->10796*/
/*10776*/     OPC_RecordNode, // #0 = $SH
/*10777*/     OPC_RecordChild0, // #1 = $vA
/*10778*/     OPC_RecordChild1, // #2 = $vB
/*10779*/     OPC_CheckPredicate, 79, // Predicate_vsldoi_shuffle
/*10781*/     OPC_CheckType, MVT::v16i8,
/*10783*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*10786*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB):$SH))
/*10796*/   /*Scope*/ 102, /*->10899*/
/*10797*/     OPC_RecordChild0, // #0 = $vA
/*10798*/     OPC_RecordChild1, // #1 = $vB
/*10799*/     OPC_CheckType, MVT::v16i8,
/*10801*/     OPC_Scope, 11, /*->10814*/ // 8 children in Scope
/*10803*/       OPC_CheckPredicate, 80, // Predicate_vmrghb_shuffle
/*10805*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10814*/     /*Scope*/ 11, /*->10826*/
/*10815*/       OPC_CheckPredicate, 81, // Predicate_vmrghh_shuffle
/*10817*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10826*/     /*Scope*/ 11, /*->10838*/
/*10827*/       OPC_CheckPredicate, 82, // Predicate_vmrghw_shuffle
/*10829*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10838*/     /*Scope*/ 11, /*->10850*/
/*10839*/       OPC_CheckPredicate, 83, // Predicate_vmrglb_shuffle
/*10841*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10850*/     /*Scope*/ 11, /*->10862*/
/*10851*/       OPC_CheckPredicate, 84, // Predicate_vmrglh_shuffle
/*10853*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10862*/     /*Scope*/ 11, /*->10874*/
/*10863*/       OPC_CheckPredicate, 85, // Predicate_vmrglw_shuffle
/*10865*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10874*/     /*Scope*/ 11, /*->10886*/
/*10875*/       OPC_CheckPredicate, 86, // Predicate_vpkuhum_shuffle
/*10877*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10886*/     /*Scope*/ 11, /*->10898*/
/*10887*/       OPC_CheckPredicate, 87, // Predicate_vpkuwum_shuffle
/*10889*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10898*/     0, /*End of Scope*/
/*10899*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::BUILD_VECTOR),// ->10978
/*10903*/   OPC_Scope, 48, /*->10953*/ // 3 children in Scope
/*10905*/     OPC_RecordNode, // #0 = $SIMM
/*10906*/     OPC_SwitchType /*3 cases */, 13,  MVT::v16i8,// ->10922
/*10909*/       OPC_CheckPredicate, 88, // Predicate_vecspltisb
/*10911*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*10914*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 13,  MVT::v8i16,// ->10937
/*10924*/       OPC_CheckPredicate, 89, // Predicate_vecspltish
/*10926*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*10929*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 13,  MVT::v4i32,// ->10952
/*10939*/       OPC_CheckPredicate, 90, // Predicate_vecspltisw
/*10941*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*10944*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*10953*/   /*Scope*/ 11, /*->10965*/
/*10954*/     OPC_CheckPredicate, 91, // Predicate_immAllZerosV
/*10956*/     OPC_CheckType, MVT::v4i32,
/*10958*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*10965*/   /*Scope*/ 11, /*->10977*/
/*10966*/     OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*10968*/     OPC_CheckType, MVT::v4i32,
/*10970*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
              // Dst: (V_SETALLONES:v4i32)
/*10977*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::BITCAST),// ->11064
/*10981*/   OPC_RecordChild0, // #0 = $src
/*10982*/   OPC_Scope, 19, /*->11003*/ // 4 children in Scope
/*10984*/     OPC_CheckChild0Type, MVT::v8i16,
/*10986*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10992
/*10989*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10997
/*10994*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->11002
/*10999*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*11003*/   /*Scope*/ 19, /*->11023*/
/*11004*/     OPC_CheckChild0Type, MVT::v4i32,
/*11006*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->11012
/*11009*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->11017
/*11014*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->11022
/*11019*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*11023*/   /*Scope*/ 19, /*->11043*/
/*11024*/     OPC_CheckChild0Type, MVT::v4f32,
/*11026*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->11032
/*11029*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->11037
/*11034*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->11042
/*11039*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*11043*/   /*Scope*/ 19, /*->11063*/
/*11044*/     OPC_CheckChild0Type, MVT::v16i8,
/*11046*/     OPC_SwitchType /*3 cases */, 3,  MVT::v8i16,// ->11052
/*11049*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->11057
/*11054*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->11062
/*11059*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*11063*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VPERM),// ->11082
/*11067*/   OPC_RecordChild0, // #0 = $vA
/*11068*/   OPC_RecordChild1, // #1 = $vB
/*11069*/   OPC_RecordChild2, // #2 = $vC
/*11070*/   OPC_CheckType, MVT::v16i8,
/*11072*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_TO_SINT),// ->11098
/*11085*/   OPC_RecordChild0, // #0 = $vA
/*11086*/   OPC_CheckChild0Type, MVT::v4f32,
/*11088*/   OPC_CheckType, MVT::v4i32,
/*11090*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_TO_UINT),// ->11114
/*11101*/   OPC_RecordChild0, // #0 = $vA
/*11102*/   OPC_CheckChild0Type, MVT::v4f32,
/*11104*/   OPC_CheckType, MVT::v4i32,
/*11106*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->11134
/*11117*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*11118*/   OPC_RecordChild1, // #1 = $amt
/*11119*/   OPC_MoveChild, 1,
/*11121*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11124*/   OPC_MoveParent,
/*11125*/   OPC_EmitMergeInputChains1_0,
/*11126*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_Darwin),// ->11235
/*11137*/   OPC_RecordNode,   // #0 = 'PPCcall_Darwin' chained node
/*11138*/   OPC_CaptureGlueInput,
/*11139*/   OPC_RecordChild1, // #1 = $func
/*11140*/   OPC_MoveChild, 1,
/*11142*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->11176
/*11146*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->11161
/*11149*/       OPC_MoveParent,
/*11150*/       OPC_EmitMergeInputChains1_0,
/*11151*/       OPC_EmitConvertToTarget, 1,
/*11153*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_Darwin:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->11175
/*11163*/       OPC_MoveParent,
/*11164*/       OPC_EmitMergeInputChains1_0,
/*11165*/       OPC_EmitConvertToTarget, 1,
/*11167*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_Darwin:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11205
/*11179*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11192
/*11182*/       OPC_MoveParent,
/*11183*/       OPC_EmitMergeInputChains1_0,
/*11184*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->11204
/*11194*/       OPC_MoveParent,
/*11195*/       OPC_EmitMergeInputChains1_0,
/*11196*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11234
/*11208*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11221
/*11211*/       OPC_MoveParent,
/*11212*/       OPC_EmitMergeInputChains1_0,
/*11213*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->11233
/*11223*/       OPC_MoveParent,
/*11224*/       OPC_EmitMergeInputChains1_0,
/*11225*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_SVR4),// ->11336
/*11238*/   OPC_RecordNode,   // #0 = 'PPCcall_SVR4' chained node
/*11239*/   OPC_CaptureGlueInput,
/*11240*/   OPC_RecordChild1, // #1 = $func
/*11241*/   OPC_MoveChild, 1,
/*11243*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->11277
/*11247*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->11262
/*11250*/       OPC_MoveParent,
/*11251*/       OPC_EmitMergeInputChains1_0,
/*11252*/       OPC_EmitConvertToTarget, 1,
/*11254*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_SVR4:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->11276
/*11264*/       OPC_MoveParent,
/*11265*/       OPC_EmitMergeInputChains1_0,
/*11266*/       OPC_EmitConvertToTarget, 1,
/*11268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_ELF:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11306
/*11280*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11293
/*11283*/       OPC_MoveParent,
/*11284*/       OPC_EmitMergeInputChains1_0,
/*11285*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->11305
/*11295*/       OPC_MoveParent,
/*11296*/       OPC_EmitMergeInputChains1_0,
/*11297*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11335
/*11309*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11322
/*11312*/       OPC_MoveParent,
/*11313*/       OPC_EmitMergeInputChains1_0,
/*11314*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->11334
/*11324*/       OPC_MoveParent,
/*11325*/       OPC_EmitMergeInputChains1_0,
/*11326*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB0),// ->11358
/*11339*/   OPC_CaptureGlueInput,
/*11340*/   OPC_RecordChild0, // #0 = $FM
/*11341*/   OPC_MoveChild, 0,
/*11343*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11346*/   OPC_CheckType, MVT::i32,
/*11348*/   OPC_MoveParent,
/*11349*/   OPC_EmitConvertToTarget, 0,
/*11351*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB0), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb0 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB0 (imm:i32):$FM)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB1),// ->11380
/*11361*/   OPC_CaptureGlueInput,
/*11362*/   OPC_RecordChild0, // #0 = $FM
/*11363*/   OPC_MoveChild, 0,
/*11365*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11368*/   OPC_CheckType, MVT::i32,
/*11370*/   OPC_MoveParent,
/*11371*/   OPC_EmitConvertToTarget, 0,
/*11373*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB1), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb1 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB1 (imm:i32):$FM)
          /*SwitchOpcode*/ 54,  TARGET_VAL(PPCISD::CALL_NOP_SVR4),// ->11437
/*11383*/   OPC_RecordNode,   // #0 = 'PPCcall_nop_SVR4' chained node
/*11384*/   OPC_CaptureGlueInput,
/*11385*/   OPC_RecordChild1, // #1 = $func
/*11386*/   OPC_MoveChild, 1,
/*11388*/   OPC_SwitchOpcode /*3 cases */, 14,  TARGET_VAL(ISD::Constant),// ->11406
/*11392*/     OPC_CheckType, MVT::i64,
/*11394*/     OPC_MoveParent,
/*11395*/     OPC_EmitMergeInputChains1_0,
/*11396*/     OPC_EmitConvertToTarget, 1,
/*11398*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop_SVR4 (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP_ELF:i64 (imm:i64):$func)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11421
/*11409*/     OPC_CheckType, MVT::i64,
/*11411*/     OPC_MoveParent,
/*11412*/     OPC_EmitMergeInputChains1_0,
/*11413*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11436
/*11424*/     OPC_CheckType, MVT::i64,
/*11426*/     OPC_MoveParent,
/*11427*/     OPC_EmitMergeInputChains1_0,
/*11428*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::RET_FLAG),// ->11457
/*11440*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*11441*/   OPC_CaptureGlueInput,
/*11442*/   OPC_EmitMergeInputChains1_0,
/*11443*/   OPC_EmitInteger, MVT::i32, 20, 
/*11446*/   OPC_EmitRegister, MVT::i32, 0 /*zero_reg*/,
/*11449*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->11476
/*11460*/   OPC_RecordNode,   // #0 = 'br' chained node
/*11461*/   OPC_RecordChild1, // #1 = $dst
/*11462*/   OPC_MoveChild, 1,
/*11464*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*11467*/   OPC_MoveParent,
/*11468*/   OPC_EmitMergeInputChains1_0,
/*11469*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_Darwin),// ->11505
/*11479*/   OPC_RecordNode,   // #0 = 'PPCbctrl_Darwin' chained node
/*11480*/   OPC_CaptureGlueInput,
/*11481*/   OPC_Scope, 10, /*->11493*/ // 2 children in Scope
/*11483*/     OPC_CheckPatternPredicate, 0, // (!PPCSubTarget.isPPC64())
/*11485*/     OPC_EmitMergeInputChains1_0,
/*11486*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL_Darwin:i32)
/*11493*/   /*Scope*/ 10, /*->11504*/
/*11494*/     OPC_CheckPatternPredicate, 1, // (PPCSubTarget.isPPC64())
/*11496*/     OPC_EmitMergeInputChains1_0,
/*11497*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL8_Darwin:i64)
/*11504*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_SVR4),// ->11534
/*11508*/   OPC_RecordNode,   // #0 = 'PPCbctrl_SVR4' chained node
/*11509*/   OPC_CaptureGlueInput,
/*11510*/   OPC_Scope, 10, /*->11522*/ // 2 children in Scope
/*11512*/     OPC_CheckPatternPredicate, 0, // (!PPCSubTarget.isPPC64())
/*11514*/     OPC_EmitMergeInputChains1_0,
/*11515*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL_SVR4:i32)
/*11522*/   /*Scope*/ 10, /*->11533*/
/*11523*/     OPC_CheckPatternPredicate, 1, // (PPCSubTarget.isPPC64())
/*11525*/     OPC_EmitMergeInputChains1_0,
/*11526*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL8_ELF:i64)
/*11533*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->11545
/*11537*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*11538*/   OPC_EmitMergeInputChains1_0,
/*11539*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->11558
/*11548*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*11549*/   OPC_CaptureGlueInput,
/*11550*/   OPC_EmitMergeInputChains1_0,
/*11551*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->11571
/*11561*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*11562*/   OPC_CaptureGlueInput,
/*11563*/   OPC_EmitMergeInputChains1_0,
/*11564*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->11603
/*11574*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*11575*/   OPC_CaptureGlueInput,
/*11576*/   OPC_RecordChild1, // #1 = $rS
/*11577*/   OPC_Scope, 11, /*->11590*/ // 2 children in Scope
/*11579*/     OPC_CheckChild1Type, MVT::i32,
/*11581*/     OPC_EmitMergeInputChains1_0,
/*11582*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr GPRC:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 GPRC:i32:$rS)
/*11590*/   /*Scope*/ 11, /*->11602*/
/*11591*/     OPC_CheckChild1Type, MVT::i64,
/*11593*/     OPC_EmitMergeInputChains1_0,
/*11594*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr G8RC:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 G8RC:i64:$rS)
/*11602*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VMADDFP),// ->11621
/*11606*/   OPC_RecordChild0, // #0 = $A
/*11607*/   OPC_RecordChild1, // #1 = $B
/*11608*/   OPC_RecordChild2, // #2 = $C
/*11609*/   OPC_CheckType, MVT::v4f32,
/*11611*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VNMSUBFP),// ->11639
/*11624*/   OPC_RecordChild0, // #0 = $A
/*11625*/   OPC_RecordChild1, // #1 = $B
/*11626*/   OPC_RecordChild2, // #2 = $C
/*11627*/   OPC_CheckType, MVT::v4f32,
/*11629*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SINT_TO_FP),// ->11655
/*11642*/   OPC_RecordChild0, // #0 = $vA
/*11643*/   OPC_CheckChild0Type, MVT::v4i32,
/*11645*/   OPC_CheckType, MVT::v4f32,
/*11647*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 VRRC:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 VRRC:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::UINT_TO_FP),// ->11671
/*11658*/   OPC_RecordChild0, // #0 = $vA
/*11659*/   OPC_CheckChild0Type, MVT::v4i32,
/*11661*/   OPC_CheckType, MVT::v4f32,
/*11663*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 VRRC:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 VRRC:v4i32:$vA)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FFLOOR),// ->11685
/*11674*/   OPC_RecordChild0, // #0 = $vA
/*11675*/   OPC_CheckType, MVT::v4f32,
/*11677*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (ffloor:v4f32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VRFIM:v4f32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FCEIL),// ->11699
/*11688*/   OPC_RecordChild0, // #0 = $vA
/*11689*/   OPC_CheckType, MVT::v4f32,
/*11691*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (fceil:v4f32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VRFIP:v4f32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FTRUNC),// ->11713
/*11702*/   OPC_RecordChild0, // #0 = $vA
/*11703*/   OPC_CheckType, MVT::v4f32,
/*11705*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (ftrunc:v4f32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FNEARBYINT),// ->11727
/*11716*/   OPC_RecordChild0, // #0 = $vA
/*11717*/   OPC_CheckType, MVT::v4f32,
/*11719*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (fnearbyint:v4f32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VRFIN:v4f32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::NOP),// ->11737
/*11730*/   OPC_CaptureGlueInput,
/*11731*/   OPC_MorphNodeTo, TARGET_VAL(PPC::NOP), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCnop) - Complexity = 3
            // Dst: (NOP)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->11753
/*11740*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*11741*/   OPC_CaptureGlueInput,
/*11742*/   OPC_RecordChild1, // #1 = $reg
/*11743*/   OPC_CheckChild1Type, MVT::i64,
/*11745*/   OPC_EmitMergeInputChains1_0,
/*11746*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc G8RC:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc G8RC:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->11765
/*11756*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*11757*/   OPC_CaptureGlueInput,
/*11758*/   OPC_EmitMergeInputChains1_0,
/*11759*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 11767 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 115
  // #OPC_RecordNode                     = 45
  // #OPC_RecordChild                    = 517
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 21
  // #OPC_MoveChild                      = 158
  // #OPC_MoveParent                     = 381
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 4
  // #OPC_CheckPredicate                 = 190
  // #OPC_CheckOpcode                    = 96
  // #OPC_SwitchOpcode                   = 17
  // #OPC_CheckType                      = 175
  // #OPC_SwitchType                     = 93
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 197
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 7
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 26
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 1
  // #OPC_EmitConvertToTarget            = 79
  // #OPC_EmitMergeInputChains           = 203
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 12
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 621

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!PPCSubTarget.isPPC64());
  case 1: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 18: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 19: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 20: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 21: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 22: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 23: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 25: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 31: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 32: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 33: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 34: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 35: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 36: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 37: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 38: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 39: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 56: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 57: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 58: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 59: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 64: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 65: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 66: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 67: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 68: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 69: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 70: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 71: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 72: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 73: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 74: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 75: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 76: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 77: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 78: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 79: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 80: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 81: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 82: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 83: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 84: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 85: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 86: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 87: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 88: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 89: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 90: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 91: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddrIdxOffs(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

