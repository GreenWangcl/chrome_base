/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Mips target                                *|
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
/*0*/     OPC_SwitchOpcode /*120 cases */, 59|128,5/*699*/,  TARGET_VAL(ISD::STORE),// ->704
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 52, /*->61*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_CheckType, MVT::i32,
/*15*/        OPC_MoveParent,
/*16*/        OPC_RecordChild2, // #1 = $dst
/*17*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*19*/        OPC_CheckPredicate, 1, // Predicate_store
/*21*/        OPC_Scope, 18, /*->41*/ // 2 children in Scope
/*23*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*25*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*28*/          OPC_EmitMergeInputChains1_0,
/*29*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*32*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*41*/        /*Scope*/ 18, /*->60*/
/*42*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*44*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*47*/          OPC_EmitMergeInputChains1_0,
/*48*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*51*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*60*/        0, /*End of Scope*/
/*61*/      /*Scope*/ 0|128,5/*640*/, /*->703*/
/*63*/        OPC_RecordChild1, // #1 = $r
/*64*/        OPC_Scope, 57|128,1/*185*/, /*->252*/ // 6 children in Scope
/*67*/          OPC_CheckChild1Type, MVT::i32,
/*69*/          OPC_RecordChild2, // #2 = $addr
/*70*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*72*/          OPC_Scope, 42, /*->116*/ // 4 children in Scope
/*74*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*76*/            OPC_Scope, 18, /*->96*/ // 2 children in Scope
/*78*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*80*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*82*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddr16:$addr #3 #4 #5
/*85*/              OPC_EmitMergeInputChains1_0,
/*86*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*96*/            /*Scope*/ 18, /*->115*/
/*97*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*99*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*101*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddr16:$addr #3 #4 #5
/*104*/             OPC_EmitMergeInputChains1_0,
/*105*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*115*/           0, /*End of Scope*/
/*116*/         /*Scope*/ 18, /*->135*/
/*117*/           OPC_CheckPredicate, 1, // Predicate_store
/*119*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*121*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddr16:$addr #3 #4 #5
/*124*/           OPC_EmitMergeInputChains1_0,
/*125*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*135*/         /*Scope*/ 78, /*->214*/
/*136*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*138*/           OPC_Scope, 36, /*->176*/ // 2 children in Scope
/*140*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*142*/             OPC_Scope, 15, /*->159*/ // 2 children in Scope
/*144*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*146*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*149*/               OPC_EmitMergeInputChains1_0,
/*150*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB CPURegs:i32:$rt, addr:i32:$addr)
/*159*/             /*Scope*/ 15, /*->175*/
/*160*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*162*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*165*/               OPC_EmitMergeInputChains1_0,
/*166*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*175*/             0, /*End of Scope*/
/*176*/           /*Scope*/ 36, /*->213*/
/*177*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*179*/             OPC_Scope, 15, /*->196*/ // 2 children in Scope
/*181*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*183*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*186*/               OPC_EmitMergeInputChains1_0,
/*187*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH CPURegs:i32:$rt, addr:i32:$addr)
/*196*/             /*Scope*/ 15, /*->212*/
/*197*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*199*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*202*/               OPC_EmitMergeInputChains1_0,
/*203*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*212*/             0, /*End of Scope*/
/*213*/           0, /*End of Scope*/
/*214*/         /*Scope*/ 36, /*->251*/
/*215*/           OPC_CheckPredicate, 1, // Predicate_store
/*217*/           OPC_Scope, 15, /*->234*/ // 2 children in Scope
/*219*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*221*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*224*/             OPC_EmitMergeInputChains1_0,
/*225*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW CPURegs:i32:$rt, addr:i32:$addr)
/*234*/           /*Scope*/ 15, /*->250*/
/*235*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*237*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*240*/             OPC_EmitMergeInputChains1_0,
/*241*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*250*/           0, /*End of Scope*/
/*251*/         0, /*End of Scope*/
/*252*/       /*Scope*/ 92, /*->345*/
/*253*/         OPC_CheckChild1Type, MVT::f32,
/*255*/         OPC_Scope, 39, /*->296*/ // 2 children in Scope
/*257*/           OPC_RecordChild2, // #2 = $addr
/*258*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*260*/           OPC_CheckPredicate, 1, // Predicate_store
/*262*/           OPC_Scope, 15, /*->279*/ // 2 children in Scope
/*264*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*266*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*269*/             OPC_EmitMergeInputChains1_0,
/*270*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR32:f32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWC1_P8 FGR32:f32:$rt, addr:i64:$addr)
/*279*/           /*Scope*/ 15, /*->295*/
/*280*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*282*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*285*/             OPC_EmitMergeInputChains1_0,
/*286*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR32:f32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWC1 FGR32:f32:$rt, addr:i32:$addr)
/*295*/           0, /*End of Scope*/
/*296*/         /*Scope*/ 47, /*->344*/
/*297*/           OPC_MoveChild, 2,
/*299*/           OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*302*/           OPC_RecordChild0, // #2 = $base
/*303*/           OPC_RecordChild1, // #3 = $index
/*304*/           OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->324
/*307*/             OPC_MoveParent,
/*308*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*310*/             OPC_CheckPredicate, 1, // Predicate_store
/*312*/             OPC_CheckPatternPredicate, 3, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*314*/             OPC_EmitMergeInputChains1_0,
/*315*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                    // Dst: (SWXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->343
/*326*/             OPC_MoveParent,
/*327*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*329*/             OPC_CheckPredicate, 1, // Predicate_store
/*331*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*333*/             OPC_EmitMergeInputChains1_0,
/*334*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                    // Dst: (SWXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*344*/         0, /*End of Scope*/
/*345*/       /*Scope*/ 124, /*->470*/
/*346*/         OPC_CheckChild1Type, MVT::f64,
/*348*/         OPC_Scope, 55, /*->405*/ // 2 children in Scope
/*350*/           OPC_RecordChild2, // #2 = $addr
/*351*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*353*/           OPC_CheckPredicate, 1, // Predicate_store
/*355*/           OPC_Scope, 15, /*->372*/ // 3 children in Scope
/*357*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*359*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*362*/             OPC_EmitMergeInputChains1_0,
/*363*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR64:f64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SDC164_P8 FGR64:f64:$rt, addr:i64:$addr)
/*372*/           /*Scope*/ 15, /*->388*/
/*373*/             OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*375*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*378*/             OPC_EmitMergeInputChains1_0,
/*379*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR64:f64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SDC164 FGR64:f64:$rt, addr:i32:$addr)
/*388*/           /*Scope*/ 15, /*->404*/
/*389*/             OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*391*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*394*/             OPC_EmitMergeInputChains1_0,
/*395*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st AFGR64:f64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SDC1 AFGR64:f64:$rt, addr:i32:$addr)
/*404*/           0, /*End of Scope*/
/*405*/         /*Scope*/ 63, /*->469*/
/*406*/           OPC_MoveChild, 2,
/*408*/           OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*411*/           OPC_RecordChild0, // #2 = $base
/*412*/           OPC_RecordChild1, // #3 = $index
/*413*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->449
/*416*/             OPC_MoveParent,
/*417*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*419*/             OPC_CheckPredicate, 1, // Predicate_store
/*421*/             OPC_Scope, 12, /*->435*/ // 2 children in Scope
/*423*/               OPC_CheckPatternPredicate, 6, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*425*/               OPC_EmitMergeInputChains1_0,
/*426*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                      // Dst: (SDXC1 AFGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*435*/             /*Scope*/ 12, /*->448*/
/*436*/               OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*438*/               OPC_EmitMergeInputChains1_0,
/*439*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                      // Dst: (SDXC164 FGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*448*/             0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->468
/*451*/             OPC_MoveParent,
/*452*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*454*/             OPC_CheckPredicate, 1, // Predicate_store
/*456*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*458*/             OPC_EmitMergeInputChains1_0,
/*459*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64:f64:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                    // Dst: (SDXC164_P8 FGR64:f64:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*469*/         0, /*End of Scope*/
/*470*/       /*Scope*/ 32|128,1/*160*/, /*->632*/
/*472*/         OPC_CheckChild1Type, MVT::i64,
/*474*/         OPC_RecordChild2, // #2 = $addr
/*475*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*477*/         OPC_Scope, 115, /*->594*/ // 2 children in Scope
/*479*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*481*/           OPC_Scope, 36, /*->519*/ // 3 children in Scope
/*483*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*485*/             OPC_Scope, 15, /*->502*/ // 2 children in Scope
/*487*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*489*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*492*/               OPC_EmitMergeInputChains1_0,
/*493*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*502*/             /*Scope*/ 15, /*->518*/
/*503*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*505*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*508*/               OPC_EmitMergeInputChains1_0,
/*509*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*518*/             0, /*End of Scope*/
/*519*/           /*Scope*/ 36, /*->556*/
/*520*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*522*/             OPC_Scope, 15, /*->539*/ // 2 children in Scope
/*524*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*526*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*529*/               OPC_EmitMergeInputChains1_0,
/*530*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*539*/             /*Scope*/ 15, /*->555*/
/*540*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*542*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*545*/               OPC_EmitMergeInputChains1_0,
/*546*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*555*/             0, /*End of Scope*/
/*556*/           /*Scope*/ 36, /*->593*/
/*557*/             OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*559*/             OPC_Scope, 15, /*->576*/ // 2 children in Scope
/*561*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*563*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*566*/               OPC_EmitMergeInputChains1_0,
/*567*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*576*/             /*Scope*/ 15, /*->592*/
/*577*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*579*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*582*/               OPC_EmitMergeInputChains1_0,
/*583*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*592*/             0, /*End of Scope*/
/*593*/           0, /*End of Scope*/
/*594*/         /*Scope*/ 36, /*->631*/
/*595*/           OPC_CheckPredicate, 1, // Predicate_store
/*597*/           OPC_Scope, 15, /*->614*/ // 2 children in Scope
/*599*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*601*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*604*/             OPC_EmitMergeInputChains1_0,
/*605*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD CPU64Regs:i64:$rt, addr:i32:$addr)
/*614*/           /*Scope*/ 15, /*->630*/
/*615*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*617*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*620*/             OPC_EmitMergeInputChains1_0,
/*621*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*630*/           0, /*End of Scope*/
/*631*/         0, /*End of Scope*/
/*632*/       /*Scope*/ 34, /*->667*/
/*633*/         OPC_CheckChild1Type, MVT::v2i16,
/*635*/         OPC_RecordChild2, // #2 = $a
/*636*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*638*/         OPC_CheckPredicate, 1, // Predicate_store
/*640*/         OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*642*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$a #3 #4
/*645*/         OPC_EmitMergeInputChains1_0,
/*646*/         OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*649*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*658*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$val, CPURegs:i32), addr:i32:$a)
/*667*/       /*Scope*/ 34, /*->702*/
/*668*/         OPC_CheckChild1Type, MVT::v4i8,
/*670*/         OPC_RecordChild2, // #2 = $a
/*671*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*673*/         OPC_CheckPredicate, 1, // Predicate_store
/*675*/         OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*677*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$a #3 #4
/*680*/         OPC_EmitMergeInputChains1_0,
/*681*/         OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*684*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*693*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$val, CPURegs:i32), addr:i32:$a)
/*702*/       0, /*End of Scope*/
/*703*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 31|128,9/*1183*/,  TARGET_VAL(ISD::LOAD),// ->1891
/*708*/     OPC_RecordMemRef,
/*709*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*710*/     OPC_Scope, 115|128,7/*1011*/, /*->1724*/ // 3 children in Scope
/*713*/       OPC_RecordChild1, // #1 = $addr
/*714*/       OPC_CheckPredicate, 6, // Predicate_unindexedload
/*716*/       OPC_Scope, 22, /*->740*/ // 21 children in Scope
/*718*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*720*/         OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*722*/         OPC_CheckType, MVT::i32,
/*724*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*726*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*729*/         OPC_EmitMergeInputChains1_0,
/*730*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*740*/       /*Scope*/ 22, /*->763*/
/*741*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*743*/         OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*745*/         OPC_CheckType, MVT::i32,
/*747*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*749*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*752*/         OPC_EmitMergeInputChains1_0,
/*753*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*763*/       /*Scope*/ 22, /*->786*/
/*764*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*766*/         OPC_CheckPredicate, 11, // Predicate_sextloadi16
/*768*/         OPC_CheckType, MVT::i32,
/*770*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*772*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*775*/         OPC_EmitMergeInputChains1_0,
/*776*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*786*/       /*Scope*/ 22, /*->809*/
/*787*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*789*/         OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*791*/         OPC_CheckType, MVT::i32,
/*793*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*795*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*798*/         OPC_EmitMergeInputChains1_0,
/*799*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*809*/       /*Scope*/ 20, /*->830*/
/*810*/         OPC_CheckPredicate, 13, // Predicate_load
/*812*/         OPC_CheckType, MVT::i32,
/*814*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*816*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*819*/         OPC_EmitMergeInputChains1_0,
/*820*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*830*/       /*Scope*/ 44, /*->875*/
/*831*/         OPC_CheckPredicate, 14, // Predicate_extload
/*833*/         OPC_CheckType, MVT::i32,
/*835*/         OPC_Scope, 18, /*->855*/ // 2 children in Scope
/*837*/           OPC_CheckPredicate, 15, // Predicate_extloadi8
/*839*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*841*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$src #2 #3 #4
/*844*/           OPC_EmitMergeInputChains1_0,
/*845*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*855*/         /*Scope*/ 18, /*->874*/
/*856*/           OPC_CheckPredicate, 16, // Predicate_extloadi16
/*858*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*860*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$src #2 #3 #4
/*863*/           OPC_EmitMergeInputChains1_0,
/*864*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*874*/         0, /*End of Scope*/
/*875*/       /*Scope*/ 40, /*->916*/
/*876*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*878*/         OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*880*/         OPC_CheckType, MVT::i32,
/*882*/         OPC_Scope, 15, /*->899*/ // 2 children in Scope
/*884*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*886*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*889*/           OPC_EmitMergeInputChains1_0,
/*890*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*899*/         /*Scope*/ 15, /*->915*/
/*900*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*902*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*905*/           OPC_EmitMergeInputChains1_0,
/*906*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*915*/         0, /*End of Scope*/
/*916*/       /*Scope*/ 40, /*->957*/
/*917*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*919*/         OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*921*/         OPC_CheckType, MVT::i32,
/*923*/         OPC_Scope, 15, /*->940*/ // 2 children in Scope
/*925*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*927*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*930*/           OPC_EmitMergeInputChains1_0,
/*931*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$addr)
/*940*/         /*Scope*/ 15, /*->956*/
/*941*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*943*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*946*/           OPC_EmitMergeInputChains1_0,
/*947*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$addr)
/*956*/         0, /*End of Scope*/
/*957*/       /*Scope*/ 40, /*->998*/
/*958*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*960*/         OPC_CheckPredicate, 11, // Predicate_sextloadi16
/*962*/         OPC_CheckType, MVT::i32,
/*964*/         OPC_Scope, 15, /*->981*/ // 2 children in Scope
/*966*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*968*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*971*/           OPC_EmitMergeInputChains1_0,
/*972*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addr:i32:$addr)
/*981*/         /*Scope*/ 15, /*->997*/
/*982*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*984*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*987*/           OPC_EmitMergeInputChains1_0,
/*988*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addr:i64:$addr)
/*997*/         0, /*End of Scope*/
/*998*/       /*Scope*/ 40, /*->1039*/
/*999*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*1001*/        OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*1003*/        OPC_CheckType, MVT::i32,
/*1005*/        OPC_Scope, 15, /*->1022*/ // 2 children in Scope
/*1007*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1009*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1012*/          OPC_EmitMergeInputChains1_0,
/*1013*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*1022*/        /*Scope*/ 15, /*->1038*/
/*1023*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1025*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1028*/          OPC_EmitMergeInputChains1_0,
/*1029*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*1038*/        0, /*End of Scope*/
/*1039*/      /*Scope*/ 38, /*->1078*/
/*1040*/        OPC_CheckPredicate, 13, // Predicate_load
/*1042*/        OPC_CheckType, MVT::i32,
/*1044*/        OPC_Scope, 15, /*->1061*/ // 2 children in Scope
/*1046*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1048*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1051*/          OPC_EmitMergeInputChains1_0,
/*1052*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addr:i32:$addr)
/*1061*/        /*Scope*/ 15, /*->1077*/
/*1062*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1064*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1067*/          OPC_EmitMergeInputChains1_0,
/*1068*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addr:i64:$addr)
/*1077*/        0, /*End of Scope*/
/*1078*/      /*Scope*/ 114, /*->1193*/
/*1079*/        OPC_CheckPredicate, 14, // Predicate_extload
/*1081*/        OPC_CheckType, MVT::i32,
/*1083*/        OPC_Scope, 17, /*->1102*/ // 6 children in Scope
/*1085*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1087*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1089*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1092*/          OPC_EmitMergeInputChains1_0,
/*1093*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*1102*/        /*Scope*/ 17, /*->1120*/
/*1103*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1105*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1107*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1110*/          OPC_EmitMergeInputChains1_0,
/*1111*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*1120*/        /*Scope*/ 17, /*->1138*/
/*1121*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1123*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1125*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1128*/          OPC_EmitMergeInputChains1_0,
/*1129*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*1138*/        /*Scope*/ 17, /*->1156*/
/*1139*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1141*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1146*/          OPC_EmitMergeInputChains1_0,
/*1147*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*1156*/        /*Scope*/ 17, /*->1174*/
/*1157*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1159*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1161*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1164*/          OPC_EmitMergeInputChains1_0,
/*1165*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*1174*/        /*Scope*/ 17, /*->1192*/
/*1175*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1177*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1179*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1182*/          OPC_EmitMergeInputChains1_0,
/*1183*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*1192*/        0, /*End of Scope*/
/*1193*/      /*Scope*/ 40, /*->1234*/
/*1194*/        OPC_CheckPredicate, 7, // Predicate_sextload
/*1196*/        OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*1198*/        OPC_CheckType, MVT::i64,
/*1200*/        OPC_Scope, 15, /*->1217*/ // 2 children in Scope
/*1202*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1204*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1207*/          OPC_EmitMergeInputChains1_0,
/*1208*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*1217*/        /*Scope*/ 15, /*->1233*/
/*1218*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1220*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1223*/          OPC_EmitMergeInputChains1_0,
/*1224*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*1233*/        0, /*End of Scope*/
/*1234*/      /*Scope*/ 40, /*->1275*/
/*1235*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*1237*/        OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*1239*/        OPC_CheckType, MVT::i64,
/*1241*/        OPC_Scope, 15, /*->1258*/ // 2 children in Scope
/*1243*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1245*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1248*/          OPC_EmitMergeInputChains1_0,
/*1249*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*1258*/        /*Scope*/ 15, /*->1274*/
/*1259*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1264*/          OPC_EmitMergeInputChains1_0,
/*1265*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*1274*/        0, /*End of Scope*/
/*1275*/      /*Scope*/ 40, /*->1316*/
/*1276*/        OPC_CheckPredicate, 7, // Predicate_sextload
/*1278*/        OPC_CheckPredicate, 11, // Predicate_sextloadi16
/*1280*/        OPC_CheckType, MVT::i64,
/*1282*/        OPC_Scope, 15, /*->1299*/ // 2 children in Scope
/*1284*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1286*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1289*/          OPC_EmitMergeInputChains1_0,
/*1290*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*1299*/        /*Scope*/ 15, /*->1315*/
/*1300*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1302*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1305*/          OPC_EmitMergeInputChains1_0,
/*1306*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*1315*/        0, /*End of Scope*/
/*1316*/      /*Scope*/ 40, /*->1357*/
/*1317*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*1319*/        OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*1321*/        OPC_CheckType, MVT::i64,
/*1323*/        OPC_Scope, 15, /*->1340*/ // 2 children in Scope
/*1325*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1327*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1330*/          OPC_EmitMergeInputChains1_0,
/*1331*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*1340*/        /*Scope*/ 15, /*->1356*/
/*1341*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1343*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1346*/          OPC_EmitMergeInputChains1_0,
/*1347*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*1356*/        0, /*End of Scope*/
/*1357*/      /*Scope*/ 40, /*->1398*/
/*1358*/        OPC_CheckPredicate, 7, // Predicate_sextload
/*1360*/        OPC_CheckPredicate, 18, // Predicate_sextloadi32
/*1362*/        OPC_CheckType, MVT::i64,
/*1364*/        OPC_Scope, 15, /*->1381*/ // 2 children in Scope
/*1366*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1368*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1371*/          OPC_EmitMergeInputChains1_0,
/*1372*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*1381*/        /*Scope*/ 15, /*->1397*/
/*1382*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1384*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1387*/          OPC_EmitMergeInputChains1_0,
/*1388*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*1397*/        0, /*End of Scope*/
/*1398*/      /*Scope*/ 40, /*->1439*/
/*1399*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*1401*/        OPC_CheckPredicate, 19, // Predicate_zextloadi32
/*1403*/        OPC_CheckType, MVT::i64,
/*1405*/        OPC_Scope, 15, /*->1422*/ // 2 children in Scope
/*1407*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1409*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1412*/          OPC_EmitMergeInputChains1_0,
/*1413*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64:i64 addr:i32:$addr)
/*1422*/        /*Scope*/ 15, /*->1438*/
/*1423*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1428*/          OPC_EmitMergeInputChains1_0,
/*1429*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64_P8:i64 addr:i64:$addr)
/*1438*/        0, /*End of Scope*/
/*1439*/      /*Scope*/ 38, /*->1478*/
/*1440*/        OPC_CheckPredicate, 13, // Predicate_load
/*1442*/        OPC_CheckType, MVT::i64,
/*1444*/        OPC_Scope, 15, /*->1461*/ // 2 children in Scope
/*1446*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1448*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1451*/          OPC_EmitMergeInputChains1_0,
/*1452*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*1461*/        /*Scope*/ 15, /*->1477*/
/*1462*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1464*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1467*/          OPC_EmitMergeInputChains1_0,
/*1468*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*1477*/        0, /*End of Scope*/
/*1478*/      /*Scope*/ 22|128,1/*150*/, /*->1630*/
/*1480*/        OPC_CheckPredicate, 14, // Predicate_extload
/*1482*/        OPC_CheckType, MVT::i64,
/*1484*/        OPC_Scope, 17, /*->1503*/ // 8 children in Scope
/*1486*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1488*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1490*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1493*/          OPC_EmitMergeInputChains1_0,
/*1494*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1503*/        /*Scope*/ 17, /*->1521*/
/*1504*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1506*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1508*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1511*/          OPC_EmitMergeInputChains1_0,
/*1512*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1521*/        /*Scope*/ 17, /*->1539*/
/*1522*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1524*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1526*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1529*/          OPC_EmitMergeInputChains1_0,
/*1530*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1539*/        /*Scope*/ 17, /*->1557*/
/*1540*/          OPC_CheckPredicate, 20, // Predicate_extloadi32
/*1542*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1544*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1547*/          OPC_EmitMergeInputChains1_0,
/*1548*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1557*/        /*Scope*/ 17, /*->1575*/
/*1558*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1560*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1562*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1565*/          OPC_EmitMergeInputChains1_0,
/*1566*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1575*/        /*Scope*/ 17, /*->1593*/
/*1576*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1578*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1580*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1583*/          OPC_EmitMergeInputChains1_0,
/*1584*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1593*/        /*Scope*/ 17, /*->1611*/
/*1594*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1596*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1598*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1601*/          OPC_EmitMergeInputChains1_0,
/*1602*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1611*/        /*Scope*/ 17, /*->1629*/
/*1612*/          OPC_CheckPredicate, 20, // Predicate_extloadi32
/*1614*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1616*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1619*/          OPC_EmitMergeInputChains1_0,
/*1620*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1629*/        0, /*End of Scope*/
/*1630*/      /*Scope*/ 92, /*->1723*/
/*1631*/        OPC_CheckPredicate, 13, // Predicate_load
/*1633*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1670
/*1636*/          OPC_Scope, 15, /*->1653*/ // 2 children in Scope
/*1638*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1640*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1643*/            OPC_EmitMergeInputChains1_0,
/*1644*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LWC1_P8:f32 addr:i64:$addr)
/*1653*/          /*Scope*/ 15, /*->1669*/
/*1654*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1656*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1659*/            OPC_EmitMergeInputChains1_0,
/*1660*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LWC1:f32 addr:i32:$addr)
/*1669*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1722
/*1672*/          OPC_Scope, 15, /*->1689*/ // 3 children in Scope
/*1674*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1676*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1679*/            OPC_EmitMergeInputChains1_0,
/*1680*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDC164_P8:f64 addr:i64:$addr)
/*1689*/          /*Scope*/ 15, /*->1705*/
/*1690*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1692*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1695*/            OPC_EmitMergeInputChains1_0,
/*1696*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDC164:f64 addr:i32:$addr)
/*1705*/          /*Scope*/ 15, /*->1721*/
/*1706*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1708*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1711*/            OPC_EmitMergeInputChains1_0,
/*1712*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDC1:f64 addr:i32:$addr)
/*1721*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1723*/      0, /*End of Scope*/
/*1724*/    /*Scope*/ 99, /*->1824*/
/*1725*/      OPC_MoveChild, 1,
/*1727*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1730*/      OPC_RecordChild0, // #1 = $base
/*1731*/      OPC_RecordChild1, // #2 = $index
/*1732*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1786
/*1735*/        OPC_MoveParent,
/*1736*/        OPC_CheckPredicate, 6, // Predicate_unindexedload
/*1738*/        OPC_CheckPredicate, 13, // Predicate_load
/*1740*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1755
/*1743*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1745*/          OPC_EmitMergeInputChains1_0,
/*1746*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                  // Dst: (LWXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1785
/*1757*/          OPC_Scope, 12, /*->1771*/ // 2 children in Scope
/*1759*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1761*/            OPC_EmitMergeInputChains1_0,
/*1762*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                    // Dst: (LDXC1:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1771*/          /*Scope*/ 12, /*->1784*/
/*1772*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                    // Dst: (LDXC164:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1784*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1823
/*1788*/        OPC_MoveParent,
/*1789*/        OPC_CheckPredicate, 6, // Predicate_unindexedload
/*1791*/        OPC_CheckPredicate, 13, // Predicate_load
/*1793*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1808
/*1796*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1798*/          OPC_EmitMergeInputChains1_0,
/*1799*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                  // Dst: (LWXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1822
/*1810*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1812*/          OPC_EmitMergeInputChains1_0,
/*1813*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                  // Dst: (LDXC164_P8:f64 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1824*/    /*Scope*/ 65, /*->1890*/
/*1825*/      OPC_RecordChild1, // #1 = $a
/*1826*/      OPC_CheckPredicate, 6, // Predicate_unindexedload
/*1828*/      OPC_CheckPredicate, 13, // Predicate_load
/*1830*/      OPC_SwitchType /*2 cases */, 27,  MVT::v2i16,// ->1860
/*1833*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*1835*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$a #2 #3
/*1838*/        OPC_EmitMergeInputChains1_0,
/*1839*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1848*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1851*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPRegs:v4i8)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1889
/*1862*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*1864*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$a #2 #3
/*1867*/        OPC_EmitMergeInputChains1_0,
/*1868*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1877*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1880*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPRegs:v4i8)
              0, // EndSwitchType
/*1890*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWL),// ->1976
/*1894*/    OPC_RecordMemRef,
/*1895*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*1896*/    OPC_RecordChild1, // #1 = $addr
/*1897*/    OPC_RecordChild2, // #2 = $src
/*1898*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->1937
/*1901*/      OPC_Scope, 16, /*->1919*/ // 2 children in Scope
/*1903*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1905*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1908*/        OPC_EmitMergeInputChains1_0,
/*1909*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, CPURegs:i32:$src)
/*1919*/      /*Scope*/ 16, /*->1936*/
/*1920*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1922*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1925*/        OPC_EmitMergeInputChains1_0,
/*1926*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*1936*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->1975
/*1939*/      OPC_Scope, 16, /*->1957*/ // 2 children in Scope
/*1941*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1943*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1946*/        OPC_EmitMergeInputChains1_0,
/*1947*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*1957*/      /*Scope*/ 16, /*->1974*/
/*1958*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1960*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1963*/        OPC_EmitMergeInputChains1_0,
/*1964*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*1974*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWR),// ->2061
/*1979*/    OPC_RecordMemRef,
/*1980*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*1981*/    OPC_RecordChild1, // #1 = $addr
/*1982*/    OPC_RecordChild2, // #2 = $src
/*1983*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2022
/*1986*/      OPC_Scope, 16, /*->2004*/ // 2 children in Scope
/*1988*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1990*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1993*/        OPC_EmitMergeInputChains1_0,
/*1994*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2004*/      /*Scope*/ 16, /*->2021*/
/*2005*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2007*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2010*/        OPC_EmitMergeInputChains1_0,
/*2011*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2021*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2060
/*2024*/      OPC_Scope, 16, /*->2042*/ // 2 children in Scope
/*2026*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2028*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2031*/        OPC_EmitMergeInputChains1_0,
/*2032*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2042*/      /*Scope*/ 16, /*->2059*/
/*2043*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2045*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2048*/        OPC_EmitMergeInputChains1_0,
/*2049*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2059*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWL),// ->2145
/*2064*/    OPC_RecordMemRef,
/*2065*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2066*/    OPC_RecordChild1, // #1 = $rt
/*2067*/    OPC_Scope, 37, /*->2106*/ // 2 children in Scope
/*2069*/      OPC_CheckChild1Type, MVT::i32,
/*2071*/      OPC_RecordChild2, // #2 = $addr
/*2072*/      OPC_Scope, 15, /*->2089*/ // 2 children in Scope
/*2074*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2076*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2079*/        OPC_EmitMergeInputChains1_0,
/*2080*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL CPURegs:i32:$rt, addr:i32:$addr)
/*2089*/      /*Scope*/ 15, /*->2105*/
/*2090*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2092*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2095*/        OPC_EmitMergeInputChains1_0,
/*2096*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2105*/      0, /*End of Scope*/
/*2106*/    /*Scope*/ 37, /*->2144*/
/*2107*/      OPC_CheckChild1Type, MVT::i64,
/*2109*/      OPC_RecordChild2, // #2 = $addr
/*2110*/      OPC_Scope, 15, /*->2127*/ // 2 children in Scope
/*2112*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2114*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2117*/        OPC_EmitMergeInputChains1_0,
/*2118*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2127*/      /*Scope*/ 15, /*->2143*/
/*2128*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2130*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2133*/        OPC_EmitMergeInputChains1_0,
/*2134*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2143*/      0, /*End of Scope*/
/*2144*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWR),// ->2229
/*2148*/    OPC_RecordMemRef,
/*2149*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*2150*/    OPC_RecordChild1, // #1 = $rt
/*2151*/    OPC_Scope, 37, /*->2190*/ // 2 children in Scope
/*2153*/      OPC_CheckChild1Type, MVT::i32,
/*2155*/      OPC_RecordChild2, // #2 = $addr
/*2156*/      OPC_Scope, 15, /*->2173*/ // 2 children in Scope
/*2158*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2160*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2163*/        OPC_EmitMergeInputChains1_0,
/*2164*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR CPURegs:i32:$rt, addr:i32:$addr)
/*2173*/      /*Scope*/ 15, /*->2189*/
/*2174*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2176*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2179*/        OPC_EmitMergeInputChains1_0,
/*2180*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2189*/      0, /*End of Scope*/
/*2190*/    /*Scope*/ 37, /*->2228*/
/*2191*/      OPC_CheckChild1Type, MVT::i64,
/*2193*/      OPC_RecordChild2, // #2 = $addr
/*2194*/      OPC_Scope, 15, /*->2211*/ // 2 children in Scope
/*2196*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2198*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2201*/        OPC_EmitMergeInputChains1_0,
/*2202*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2211*/      /*Scope*/ 15, /*->2227*/
/*2212*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2214*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2217*/        OPC_EmitMergeInputChains1_0,
/*2218*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2227*/      0, /*End of Scope*/
/*2228*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->2274
/*2232*/    OPC_RecordMemRef,
/*2233*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*2234*/    OPC_RecordChild1, // #1 = $addr
/*2235*/    OPC_RecordChild2, // #2 = $src
/*2236*/    OPC_CheckType, MVT::i64,
/*2238*/    OPC_Scope, 16, /*->2256*/ // 2 children in Scope
/*2240*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2242*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2245*/      OPC_EmitMergeInputChains1_0,
/*2246*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2256*/    /*Scope*/ 16, /*->2273*/
/*2257*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2259*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2262*/      OPC_EmitMergeInputChains1_0,
/*2263*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2273*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->2319
/*2277*/    OPC_RecordMemRef,
/*2278*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*2279*/    OPC_RecordChild1, // #1 = $addr
/*2280*/    OPC_RecordChild2, // #2 = $src
/*2281*/    OPC_CheckType, MVT::i64,
/*2283*/    OPC_Scope, 16, /*->2301*/ // 2 children in Scope
/*2285*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2287*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2290*/      OPC_EmitMergeInputChains1_0,
/*2291*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2301*/    /*Scope*/ 16, /*->2318*/
/*2302*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2304*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2307*/      OPC_EmitMergeInputChains1_0,
/*2308*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2318*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->2362
/*2322*/    OPC_RecordMemRef,
/*2323*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*2324*/    OPC_RecordChild1, // #1 = $rt
/*2325*/    OPC_CheckChild1Type, MVT::i64,
/*2327*/    OPC_RecordChild2, // #2 = $addr
/*2328*/    OPC_Scope, 15, /*->2345*/ // 2 children in Scope
/*2330*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2332*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2335*/      OPC_EmitMergeInputChains1_0,
/*2336*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL CPU64Regs:i64:$rt, addr:i32:$addr)
/*2345*/    /*Scope*/ 15, /*->2361*/
/*2346*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2348*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2351*/      OPC_EmitMergeInputChains1_0,
/*2352*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2361*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->2405
/*2365*/    OPC_RecordMemRef,
/*2366*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*2367*/    OPC_RecordChild1, // #1 = $rt
/*2368*/    OPC_CheckChild1Type, MVT::i64,
/*2370*/    OPC_RecordChild2, // #2 = $addr
/*2371*/    OPC_Scope, 15, /*->2388*/ // 2 children in Scope
/*2373*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2375*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2378*/      OPC_EmitMergeInputChains1_0,
/*2379*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR CPU64Regs:i64:$rt, addr:i32:$addr)
/*2388*/    /*Scope*/ 15, /*->2404*/
/*2389*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2391*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2394*/      OPC_EmitMergeInputChains1_0,
/*2395*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2404*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(ISD::FrameIndex),// ->2462
/*2408*/    OPC_RecordNode,   // #0 = $addr
/*2409*/    OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->2445
/*2412*/      OPC_Scope, 15, /*->2429*/ // 2 children in Scope
/*2414*/        OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*2416*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectAddr16:$addr #1 #2 #3
/*2419*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*2429*/      /*Scope*/ 14, /*->2444*/
/*2430*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2432*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*2435*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*2444*/      0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::i64,// ->2461
/*2447*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2449*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*2452*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: addr:i64:$addr - Complexity = 9
              // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->3527
/*2466*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*2467*/    OPC_MoveChild, 1,
/*2469*/    OPC_Scope, 44, /*->2515*/ // 50 children in Scope
/*2471*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*2474*/      OPC_MoveParent,
/*2475*/      OPC_RecordChild2, // #1 = $rt
/*2476*/      OPC_RecordChild3, // #2 = $rs_sa
/*2477*/      OPC_Scope, 22, /*->2501*/ // 2 children in Scope
/*2479*/        OPC_MoveChild, 3,
/*2481*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2484*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*2486*/        OPC_MoveParent,
/*2487*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2489*/        OPC_EmitMergeInputChains1_0,
/*2490*/        OPC_EmitConvertToTarget, 2,
/*2492*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*2501*/      /*Scope*/ 12, /*->2514*/
/*2502*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2504*/        OPC_EmitMergeInputChains1_0,
/*2505*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*2514*/      0, /*End of Scope*/
/*2515*/    /*Scope*/ 26, /*->2542*/
/*2516*/      OPC_CheckInteger, 117|128,8/*1141*/, 
/*2519*/      OPC_MoveParent,
/*2520*/      OPC_RecordChild2, // #1 = $mask
/*2521*/      OPC_MoveChild, 2,
/*2523*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2526*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*2528*/      OPC_MoveParent,
/*2529*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2531*/      OPC_EmitMergeInputChains1_0,
/*2532*/      OPC_EmitConvertToTarget, 1,
/*2534*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1141:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*2542*/    /*Scope*/ 18, /*->2561*/
/*2543*/      OPC_CheckInteger, 16|128,8/*1040*/, 
/*2546*/      OPC_MoveParent,
/*2547*/      OPC_RecordChild2, // #1 = $rs
/*2548*/      OPC_RecordChild3, // #2 = $rt
/*2549*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2551*/      OPC_EmitMergeInputChains1_0,
/*2552*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1040:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2561*/    /*Scope*/ 18, /*->2580*/
/*2562*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*2565*/      OPC_MoveParent,
/*2566*/      OPC_RecordChild2, // #1 = $rs
/*2567*/      OPC_RecordChild3, // #2 = $rt
/*2568*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2570*/      OPC_EmitMergeInputChains1_0,
/*2571*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1158:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2580*/    /*Scope*/ 18, /*->2599*/
/*2581*/      OPC_CheckInteger, 21|128,8/*1045*/, 
/*2584*/      OPC_MoveParent,
/*2585*/      OPC_RecordChild2, // #1 = $rs
/*2586*/      OPC_RecordChild3, // #2 = $rt
/*2587*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2589*/      OPC_EmitMergeInputChains1_0,
/*2590*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1045:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDSC:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2599*/    /*Scope*/ 18, /*->2618*/
/*2600*/      OPC_CheckInteger, 28|128,8/*1052*/, 
/*2603*/      OPC_MoveParent,
/*2604*/      OPC_RecordChild2, // #1 = $rs
/*2605*/      OPC_RecordChild3, // #2 = $rt
/*2606*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2608*/      OPC_EmitMergeInputChains1_0,
/*2609*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1052:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDWC:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2618*/    /*Scope*/ 16, /*->2635*/
/*2619*/      OPC_CheckInteger, 13|128,8/*1037*/, 
/*2622*/      OPC_MoveParent,
/*2623*/      OPC_RecordChild2, // #1 = $rt
/*2624*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2626*/      OPC_EmitMergeInputChains1_0,
/*2627*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1037:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 CPURegs:i32:$rt)
/*2635*/    /*Scope*/ 18, /*->2654*/
/*2636*/      OPC_CheckInteger, 83|128,8/*1107*/, 
/*2639*/      OPC_MoveParent,
/*2640*/      OPC_RecordChild2, // #1 = $rs
/*2641*/      OPC_RecordChild3, // #2 = $rt
/*2642*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2644*/      OPC_EmitMergeInputChains1_0,
/*2645*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1107:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*2654*/    /*Scope*/ 18, /*->2673*/
/*2655*/      OPC_CheckInteger, 84|128,8/*1108*/, 
/*2658*/      OPC_MoveParent,
/*2659*/      OPC_RecordChild2, // #1 = $rs
/*2660*/      OPC_RecordChild3, // #2 = $rt
/*2661*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2663*/      OPC_EmitMergeInputChains1_0,
/*2664*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1108:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*2673*/    /*Scope*/ 18, /*->2692*/
/*2674*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*2677*/      OPC_MoveParent,
/*2678*/      OPC_RecordChild2, // #1 = $rs
/*2679*/      OPC_RecordChild3, // #2 = $rt
/*2680*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2682*/      OPC_EmitMergeInputChains1_0,
/*2683*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2692*/    /*Scope*/ 18, /*->2711*/
/*2693*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*2696*/      OPC_MoveParent,
/*2697*/      OPC_RecordChild2, // #1 = $rs
/*2698*/      OPC_RecordChild3, // #2 = $rt
/*2699*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2701*/      OPC_EmitMergeInputChains1_0,
/*2702*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1065:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2711*/    /*Scope*/ 18, /*->2730*/
/*2712*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*2715*/      OPC_MoveParent,
/*2716*/      OPC_RecordChild2, // #1 = $rs
/*2717*/      OPC_RecordChild3, // #2 = $rt
/*2718*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2720*/      OPC_EmitMergeInputChains1_0,
/*2721*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1064:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2730*/    /*Scope*/ 20, /*->2751*/
/*2731*/      OPC_CheckInteger, 70|128,8/*1094*/, 
/*2734*/      OPC_MoveParent,
/*2735*/      OPC_RecordChild2, // #1 = $base
/*2736*/      OPC_CheckChild2Type, MVT::i32,
/*2738*/      OPC_RecordChild3, // #2 = $index
/*2739*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2741*/      OPC_EmitMergeInputChains1_0,
/*2742*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1094:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2751*/    /*Scope*/ 20, /*->2772*/
/*2752*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*2755*/      OPC_MoveParent,
/*2756*/      OPC_RecordChild2, // #1 = $base
/*2757*/      OPC_CheckChild2Type, MVT::i32,
/*2759*/      OPC_RecordChild3, // #2 = $index
/*2760*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2762*/      OPC_EmitMergeInputChains1_0,
/*2763*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1093:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2772*/    /*Scope*/ 20, /*->2793*/
/*2773*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*2776*/      OPC_MoveParent,
/*2777*/      OPC_RecordChild2, // #1 = $base
/*2778*/      OPC_CheckChild2Type, MVT::i32,
/*2780*/      OPC_RecordChild3, // #2 = $index
/*2781*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2783*/      OPC_EmitMergeInputChains1_0,
/*2784*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1092:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2793*/    /*Scope*/ 18, /*->2812*/
/*2794*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*2797*/      OPC_MoveParent,
/*2798*/      OPC_RecordChild2, // #1 = $src
/*2799*/      OPC_RecordChild3, // #2 = $rs
/*2800*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2802*/      OPC_EmitMergeInputChains1_0,
/*2803*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 CPURegs:i32:$src, CPURegs:i32:$rs)
/*2812*/    /*Scope*/ 18, /*->2831*/
/*2813*/      OPC_CheckInteger, 36|128,8/*1060*/, 
/*2816*/      OPC_MoveParent,
/*2817*/      OPC_RecordChild2, // #1 = $rs
/*2818*/      OPC_RecordChild3, // #2 = $rt
/*2819*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2821*/      OPC_EmitMergeInputChains1_0,
/*2822*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1060:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2831*/    /*Scope*/ 18, /*->2850*/
/*2832*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*2835*/      OPC_MoveParent,
/*2836*/      OPC_RecordChild2, // #1 = $rs
/*2837*/      OPC_RecordChild3, // #2 = $rt
/*2838*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2840*/      OPC_EmitMergeInputChains1_0,
/*2841*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1062:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2850*/    /*Scope*/ 18, /*->2869*/
/*2851*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*2854*/      OPC_MoveParent,
/*2855*/      OPC_RecordChild2, // #1 = $rs
/*2856*/      OPC_RecordChild3, // #2 = $rt
/*2857*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2859*/      OPC_EmitMergeInputChains1_0,
/*2860*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1061:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2869*/    /*Scope*/ 18, /*->2888*/
/*2870*/      OPC_CheckInteger, 90|128,8/*1114*/, 
/*2873*/      OPC_MoveParent,
/*2874*/      OPC_RecordChild2, // #1 = $rs
/*2875*/      OPC_RecordChild3, // #2 = $rt
/*2876*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2878*/      OPC_EmitMergeInputChains1_0,
/*2879*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1114:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2888*/    /*Scope*/ 18, /*->2907*/
/*2889*/      OPC_CheckInteger, 88|128,8/*1112*/, 
/*2892*/      OPC_MoveParent,
/*2893*/      OPC_RecordChild2, // #1 = $rs
/*2894*/      OPC_RecordChild3, // #2 = $rt
/*2895*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2897*/      OPC_EmitMergeInputChains1_0,
/*2898*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1112:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2907*/    /*Scope*/ 12, /*->2920*/
/*2908*/      OPC_CheckInteger, 32|128,8/*1056*/, 
/*2911*/      OPC_MoveParent,
/*2912*/      OPC_EmitMergeInputChains1_0,
/*2913*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1056:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*2920*/    /*Scope*/ 44, /*->2965*/
/*2921*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*2924*/      OPC_MoveParent,
/*2925*/      OPC_RecordChild2, // #1 = $rt
/*2926*/      OPC_RecordChild3, // #2 = $rs_sa
/*2927*/      OPC_Scope, 22, /*->2951*/ // 2 children in Scope
/*2929*/        OPC_MoveChild, 3,
/*2931*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2934*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*2936*/        OPC_MoveParent,
/*2937*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2939*/        OPC_EmitMergeInputChains1_0,
/*2940*/        OPC_EmitConvertToTarget, 2,
/*2942*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*2951*/      /*Scope*/ 12, /*->2964*/
/*2952*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2954*/        OPC_EmitMergeInputChains1_0,
/*2955*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*2964*/      0, /*End of Scope*/
/*2965*/    /*Scope*/ 44, /*->3010*/
/*2966*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*2969*/      OPC_MoveParent,
/*2970*/      OPC_RecordChild2, // #1 = $rt
/*2971*/      OPC_RecordChild3, // #2 = $rs_sa
/*2972*/      OPC_Scope, 22, /*->2996*/ // 2 children in Scope
/*2974*/        OPC_MoveChild, 3,
/*2976*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2979*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*2981*/        OPC_MoveParent,
/*2982*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2984*/        OPC_EmitMergeInputChains1_0,
/*2985*/        OPC_EmitConvertToTarget, 2,
/*2987*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*2996*/      /*Scope*/ 12, /*->3009*/
/*2997*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2999*/        OPC_EmitMergeInputChains1_0,
/*3000*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3009*/      0, /*End of Scope*/
/*3010*/    /*Scope*/ 44, /*->3055*/
/*3011*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*3014*/      OPC_MoveParent,
/*3015*/      OPC_RecordChild2, // #1 = $rt
/*3016*/      OPC_RecordChild3, // #2 = $rs_sa
/*3017*/      OPC_Scope, 22, /*->3041*/ // 2 children in Scope
/*3019*/        OPC_MoveChild, 3,
/*3021*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3024*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*3026*/        OPC_MoveParent,
/*3027*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3029*/        OPC_EmitMergeInputChains1_0,
/*3030*/        OPC_EmitConvertToTarget, 2,
/*3032*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3041*/      /*Scope*/ 12, /*->3054*/
/*3042*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3044*/        OPC_EmitMergeInputChains1_0,
/*3045*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3054*/      0, /*End of Scope*/
/*3055*/    /*Scope*/ 18, /*->3074*/
/*3056*/      OPC_CheckInteger, 23|128,8/*1047*/, 
/*3059*/      OPC_MoveParent,
/*3060*/      OPC_RecordChild2, // #1 = $rs
/*3061*/      OPC_RecordChild3, // #2 = $rt
/*3062*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3064*/      OPC_EmitMergeInputChains1_0,
/*3065*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1047:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3074*/    /*Scope*/ 18, /*->3093*/
/*3075*/      OPC_CheckInteger, 25|128,8/*1049*/, 
/*3078*/      OPC_MoveParent,
/*3079*/      OPC_RecordChild2, // #1 = $rs
/*3080*/      OPC_RecordChild3, // #2 = $rt
/*3081*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3083*/      OPC_EmitMergeInputChains1_0,
/*3084*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1049:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3093*/    /*Scope*/ 18, /*->3112*/
/*3094*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*3097*/      OPC_MoveParent,
/*3098*/      OPC_RecordChild2, // #1 = $rs
/*3099*/      OPC_RecordChild3, // #2 = $rt
/*3100*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3102*/      OPC_EmitMergeInputChains1_0,
/*3103*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1164:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3112*/    /*Scope*/ 18, /*->3131*/
/*3113*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*3116*/      OPC_MoveParent,
/*3117*/      OPC_RecordChild2, // #1 = $rs
/*3118*/      OPC_RecordChild3, // #2 = $rt
/*3119*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3121*/      OPC_EmitMergeInputChains1_0,
/*3122*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1166:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3131*/    /*Scope*/ 18, /*->3150*/
/*3132*/      OPC_CheckInteger, 14|128,8/*1038*/, 
/*3135*/      OPC_MoveParent,
/*3136*/      OPC_RecordChild2, // #1 = $rs
/*3137*/      OPC_RecordChild3, // #2 = $rt
/*3138*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3140*/      OPC_EmitMergeInputChains1_0,
/*3141*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1038:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3150*/    /*Scope*/ 18, /*->3169*/
/*3151*/      OPC_CheckInteger, 15|128,8/*1039*/, 
/*3154*/      OPC_MoveParent,
/*3155*/      OPC_RecordChild2, // #1 = $rs
/*3156*/      OPC_RecordChild3, // #2 = $rt
/*3157*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3159*/      OPC_EmitMergeInputChains1_0,
/*3160*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1039:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3169*/    /*Scope*/ 18, /*->3188*/
/*3170*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*3173*/      OPC_MoveParent,
/*3174*/      OPC_RecordChild2, // #1 = $rs
/*3175*/      OPC_RecordChild3, // #2 = $rt
/*3176*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3178*/      OPC_EmitMergeInputChains1_0,
/*3179*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1156:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3188*/    /*Scope*/ 18, /*->3207*/
/*3189*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*3192*/      OPC_MoveParent,
/*3193*/      OPC_RecordChild2, // #1 = $rs
/*3194*/      OPC_RecordChild3, // #2 = $rt
/*3195*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3197*/      OPC_EmitMergeInputChains1_0,
/*3198*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1157:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3207*/    /*Scope*/ 16, /*->3224*/
/*3208*/      OPC_CheckInteger, 11|128,8/*1035*/, 
/*3211*/      OPC_MoveParent,
/*3212*/      OPC_RecordChild2, // #1 = $rt
/*3213*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3215*/      OPC_EmitMergeInputChains1_0,
/*3216*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1035:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPRegs:v2i16:$rt)
/*3224*/    /*Scope*/ 18, /*->3243*/
/*3225*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*3228*/      OPC_MoveParent,
/*3229*/      OPC_RecordChild2, // #1 = $rs
/*3230*/      OPC_RecordChild3, // #2 = $rt
/*3231*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3233*/      OPC_EmitMergeInputChains1_0,
/*3234*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1137:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3243*/    /*Scope*/ 18, /*->3262*/
/*3244*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3247*/      OPC_MoveParent,
/*3248*/      OPC_RecordChild2, // #1 = $rs
/*3249*/      OPC_RecordChild3, // #2 = $rt
/*3250*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3252*/      OPC_EmitMergeInputChains1_0,
/*3253*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1138:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3262*/    /*Scope*/ 18, /*->3281*/
/*3263*/      OPC_CheckInteger, 85|128,8/*1109*/, 
/*3266*/      OPC_MoveParent,
/*3267*/      OPC_RecordChild2, // #1 = $rs
/*3268*/      OPC_RecordChild3, // #2 = $rt
/*3269*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3271*/      OPC_EmitMergeInputChains1_0,
/*3272*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1109:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3281*/    /*Scope*/ 18, /*->3300*/
/*3282*/      OPC_CheckInteger, 86|128,8/*1110*/, 
/*3285*/      OPC_MoveParent,
/*3286*/      OPC_RecordChild2, // #1 = $rs
/*3287*/      OPC_RecordChild3, // #2 = $rt
/*3288*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3290*/      OPC_EmitMergeInputChains1_0,
/*3291*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1110:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3300*/    /*Scope*/ 18, /*->3319*/
/*3301*/      OPC_CheckInteger, 87|128,8/*1111*/, 
/*3304*/      OPC_MoveParent,
/*3305*/      OPC_RecordChild2, // #1 = $rs
/*3306*/      OPC_RecordChild3, // #2 = $rt
/*3307*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3309*/      OPC_EmitMergeInputChains1_0,
/*3310*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1111:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3319*/    /*Scope*/ 18, /*->3338*/
/*3320*/      OPC_CheckInteger, 97|128,8/*1121*/, 
/*3323*/      OPC_MoveParent,
/*3324*/      OPC_RecordChild2, // #1 = $rs
/*3325*/      OPC_RecordChild3, // #2 = $rt
/*3326*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3328*/      OPC_EmitMergeInputChains1_0,
/*3329*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1121:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3338*/    /*Scope*/ 18, /*->3357*/
/*3339*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3342*/      OPC_MoveParent,
/*3343*/      OPC_RecordChild2, // #1 = $rs
/*3344*/      OPC_RecordChild3, // #2 = $rt
/*3345*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3347*/      OPC_EmitMergeInputChains1_0,
/*3348*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1120:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3357*/    /*Scope*/ 18, /*->3376*/
/*3358*/      OPC_CheckInteger, 22|128,8/*1046*/, 
/*3361*/      OPC_MoveParent,
/*3362*/      OPC_RecordChild2, // #1 = $rs
/*3363*/      OPC_RecordChild3, // #2 = $rt
/*3364*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3366*/      OPC_EmitMergeInputChains1_0,
/*3367*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1046:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3376*/    /*Scope*/ 18, /*->3395*/
/*3377*/      OPC_CheckInteger, 24|128,8/*1048*/, 
/*3380*/      OPC_MoveParent,
/*3381*/      OPC_RecordChild2, // #1 = $rs
/*3382*/      OPC_RecordChild3, // #2 = $rt
/*3383*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3385*/      OPC_EmitMergeInputChains1_0,
/*3386*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1048:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3395*/    /*Scope*/ 18, /*->3414*/
/*3396*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*3399*/      OPC_MoveParent,
/*3400*/      OPC_RecordChild2, // #1 = $rs
/*3401*/      OPC_RecordChild3, // #2 = $rt
/*3402*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3404*/      OPC_EmitMergeInputChains1_0,
/*3405*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1163:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3414*/    /*Scope*/ 18, /*->3433*/
/*3415*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*3418*/      OPC_MoveParent,
/*3419*/      OPC_RecordChild2, // #1 = $rs
/*3420*/      OPC_RecordChild3, // #2 = $rt
/*3421*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3423*/      OPC_EmitMergeInputChains1_0,
/*3424*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1165:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3433*/    /*Scope*/ 16, /*->3450*/
/*3434*/      OPC_CheckInteger, 12|128,8/*1036*/, 
/*3437*/      OPC_MoveParent,
/*3438*/      OPC_RecordChild2, // #1 = $rt
/*3439*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3441*/      OPC_EmitMergeInputChains1_0,
/*3442*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1036:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPRegs:v4i8:$rt)
/*3450*/    /*Scope*/ 18, /*->3469*/
/*3451*/      OPC_CheckInteger, 81|128,8/*1105*/, 
/*3454*/      OPC_MoveParent,
/*3455*/      OPC_RecordChild2, // #1 = $rs
/*3456*/      OPC_RecordChild3, // #2 = $rt
/*3457*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3459*/      OPC_EmitMergeInputChains1_0,
/*3460*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1105:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3469*/    /*Scope*/ 18, /*->3488*/
/*3470*/      OPC_CheckInteger, 82|128,8/*1106*/, 
/*3473*/      OPC_MoveParent,
/*3474*/      OPC_RecordChild2, // #1 = $rs
/*3475*/      OPC_RecordChild3, // #2 = $rt
/*3476*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3478*/      OPC_EmitMergeInputChains1_0,
/*3479*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1106:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3488*/    /*Scope*/ 18, /*->3507*/
/*3489*/      OPC_CheckInteger, 89|128,8/*1113*/, 
/*3492*/      OPC_MoveParent,
/*3493*/      OPC_RecordChild2, // #1 = $rs
/*3494*/      OPC_RecordChild3, // #2 = $rt
/*3495*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3497*/      OPC_EmitMergeInputChains1_0,
/*3498*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1113:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3507*/    /*Scope*/ 18, /*->3526*/
/*3508*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*3511*/      OPC_MoveParent,
/*3512*/      OPC_RecordChild2, // #1 = $rs
/*3513*/      OPC_RecordChild3, // #2 = $rt
/*3514*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3516*/      OPC_EmitMergeInputChains1_0,
/*3517*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1132:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3526*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->4546
/*3531*/    OPC_MoveChild, 0,
/*3533*/    OPC_Scope, 42, /*->3577*/ // 42 children in Scope
/*3535*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*3538*/      OPC_MoveParent,
/*3539*/      OPC_RecordChild1, // #0 = $rt
/*3540*/      OPC_RecordChild2, // #1 = $rs_sa
/*3541*/      OPC_Scope, 21, /*->3564*/ // 2 children in Scope
/*3543*/        OPC_MoveChild, 2,
/*3545*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3548*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3550*/        OPC_MoveParent,
/*3551*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3553*/        OPC_EmitConvertToTarget, 1,
/*3555*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*3564*/      /*Scope*/ 11, /*->3576*/
/*3565*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3567*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*3576*/      0, /*End of Scope*/
/*3577*/    /*Scope*/ 29, /*->3607*/
/*3578*/      OPC_CheckInteger, 29|128,8/*1053*/, 
/*3581*/      OPC_MoveParent,
/*3582*/      OPC_RecordChild1, // #0 = $src
/*3583*/      OPC_RecordChild2, // #1 = $rs
/*3584*/      OPC_RecordChild3, // #2 = $sa
/*3585*/      OPC_MoveChild, 3,
/*3587*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3590*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3592*/      OPC_MoveParent,
/*3593*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3595*/      OPC_EmitConvertToTarget, 2,
/*3597*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1053:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*3607*/    /*Scope*/ 29, /*->3637*/
/*3608*/      OPC_CheckInteger, 30|128,8/*1054*/, 
/*3611*/      OPC_MoveParent,
/*3612*/      OPC_RecordChild1, // #0 = $src
/*3613*/      OPC_RecordChild2, // #1 = $rs
/*3614*/      OPC_RecordChild3, // #2 = $sa
/*3615*/      OPC_MoveChild, 3,
/*3617*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3620*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*3622*/      OPC_MoveParent,
/*3623*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3625*/      OPC_EmitConvertToTarget, 2,
/*3627*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1054:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*3637*/    /*Scope*/ 29, /*->3667*/
/*3638*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*3641*/      OPC_MoveParent,
/*3642*/      OPC_RecordChild1, // #0 = $src
/*3643*/      OPC_RecordChild2, // #1 = $rs
/*3644*/      OPC_RecordChild3, // #2 = $sa
/*3645*/      OPC_MoveChild, 3,
/*3647*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3650*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3652*/      OPC_MoveParent,
/*3653*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3655*/      OPC_EmitConvertToTarget, 2,
/*3657*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1139:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*3667*/    /*Scope*/ 17, /*->3685*/
/*3668*/      OPC_CheckInteger, 77|128,8/*1101*/, 
/*3671*/      OPC_MoveParent,
/*3672*/      OPC_RecordChild1, // #0 = $rs
/*3673*/      OPC_RecordChild2, // #1 = $rt
/*3674*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3676*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1101:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3685*/    /*Scope*/ 15, /*->3701*/
/*3686*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*3689*/      OPC_MoveParent,
/*3690*/      OPC_RecordChild1, // #0 = $rs
/*3691*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3693*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1140:iPTR, DSPRegs:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPRegs:v4i8:$rs)
/*3701*/    /*Scope*/ 15, /*->3717*/
/*3702*/      OPC_CheckInteger, 98|128,8/*1122*/, 
/*3705*/      OPC_MoveParent,
/*3706*/      OPC_RecordChild1, // #0 = $rt
/*3707*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3709*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1122:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPRegs:v2i16:$rt)
/*3717*/    /*Scope*/ 15, /*->3733*/
/*3718*/      OPC_CheckInteger, 99|128,8/*1123*/, 
/*3721*/      OPC_MoveParent,
/*3722*/      OPC_RecordChild1, // #0 = $rt
/*3723*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3725*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1123:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPRegs:v2i16:$rt)
/*3733*/    /*Scope*/ 15, /*->3749*/
/*3734*/      OPC_CheckInteger, 31|128,8/*1055*/, 
/*3737*/      OPC_MoveParent,
/*3738*/      OPC_RecordChild1, // #0 = $rt
/*3739*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3741*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1055:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 CPURegs:i32:$rt)
/*3749*/    /*Scope*/ 17, /*->3767*/
/*3750*/      OPC_CheckInteger, 20|128,8/*1044*/, 
/*3753*/      OPC_MoveParent,
/*3754*/      OPC_RecordChild1, // #0 = $rs
/*3755*/      OPC_RecordChild2, // #1 = $rt
/*3756*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3758*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1044:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3767*/    /*Scope*/ 17, /*->3785*/
/*3768*/      OPC_CheckInteger, 19|128,8/*1043*/, 
/*3771*/      OPC_MoveParent,
/*3772*/      OPC_RecordChild1, // #0 = $rs
/*3773*/      OPC_RecordChild2, // #1 = $rt
/*3774*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3776*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1043:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3785*/    /*Scope*/ 17, /*->3803*/
/*3786*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*3789*/      OPC_MoveParent,
/*3790*/      OPC_RecordChild1, // #0 = $rs
/*3791*/      OPC_RecordChild2, // #1 = $rt
/*3792*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3794*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1162:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3803*/    /*Scope*/ 17, /*->3821*/
/*3804*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*3807*/      OPC_MoveParent,
/*3808*/      OPC_RecordChild1, // #0 = $rs
/*3809*/      OPC_RecordChild2, // #1 = $rt
/*3810*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3812*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1161:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3821*/    /*Scope*/ 42, /*->3864*/
/*3822*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*3825*/      OPC_MoveParent,
/*3826*/      OPC_RecordChild1, // #0 = $rt
/*3827*/      OPC_RecordChild2, // #1 = $rs_sa
/*3828*/      OPC_Scope, 21, /*->3851*/ // 2 children in Scope
/*3830*/        OPC_MoveChild, 2,
/*3832*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3835*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*3837*/        OPC_MoveParent,
/*3838*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3840*/        OPC_EmitConvertToTarget, 1,
/*3842*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*3851*/      /*Scope*/ 11, /*->3863*/
/*3852*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3854*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*3863*/      0, /*End of Scope*/
/*3864*/    /*Scope*/ 42, /*->3907*/
/*3865*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*3868*/      OPC_MoveParent,
/*3869*/      OPC_RecordChild1, // #0 = $rt
/*3870*/      OPC_RecordChild2, // #1 = $rs_sa
/*3871*/      OPC_Scope, 21, /*->3894*/ // 2 children in Scope
/*3873*/        OPC_MoveChild, 2,
/*3875*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3878*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*3880*/        OPC_MoveParent,
/*3881*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3883*/        OPC_EmitConvertToTarget, 1,
/*3885*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3894*/      /*Scope*/ 11, /*->3906*/
/*3895*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3897*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3906*/      0, /*End of Scope*/
/*3907*/    /*Scope*/ 42, /*->3950*/
/*3908*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*3911*/      OPC_MoveParent,
/*3912*/      OPC_RecordChild1, // #0 = $rt
/*3913*/      OPC_RecordChild2, // #1 = $rs_sa
/*3914*/      OPC_Scope, 21, /*->3937*/ // 2 children in Scope
/*3916*/        OPC_MoveChild, 2,
/*3918*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3921*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*3923*/        OPC_MoveParent,
/*3924*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3926*/        OPC_EmitConvertToTarget, 1,
/*3928*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3937*/      /*Scope*/ 11, /*->3949*/
/*3938*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3940*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3949*/      0, /*End of Scope*/
/*3950*/    /*Scope*/ 39, /*->3990*/
/*3951*/      OPC_CheckInteger, 119|128,8/*1143*/, 
/*3954*/      OPC_MoveParent,
/*3955*/      OPC_RecordChild1, // #0 = $imm
/*3956*/      OPC_Scope, 20, /*->3978*/ // 2 children in Scope
/*3958*/        OPC_MoveChild, 1,
/*3960*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3963*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*3965*/        OPC_MoveParent,
/*3966*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3968*/        OPC_EmitConvertToTarget, 0,
/*3970*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*3978*/      /*Scope*/ 10, /*->3989*/
/*3979*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3981*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 CPURegs:i32:$rt)
/*3989*/      0, /*End of Scope*/
/*3990*/    /*Scope*/ 39, /*->4030*/
/*3991*/      OPC_CheckInteger, 118|128,8/*1142*/, 
/*3994*/      OPC_MoveParent,
/*3995*/      OPC_RecordChild1, // #0 = $imm
/*3996*/      OPC_Scope, 20, /*->4018*/ // 2 children in Scope
/*3998*/        OPC_MoveChild, 1,
/*4000*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4003*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4005*/        OPC_MoveParent,
/*4006*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4008*/        OPC_EmitConvertToTarget, 0,
/*4010*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4018*/      /*Scope*/ 10, /*->4029*/
/*4019*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4021*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 CPURegs:i32:$rt)
/*4029*/      0, /*End of Scope*/
/*4030*/    /*Scope*/ 29, /*->4060*/
/*4031*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*4034*/      OPC_MoveParent,
/*4035*/      OPC_RecordChild1, // #0 = $src
/*4036*/      OPC_RecordChild2, // #1 = $rs
/*4037*/      OPC_RecordChild3, // #2 = $sa
/*4038*/      OPC_MoveChild, 3,
/*4040*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4043*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4045*/      OPC_MoveParent,
/*4046*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4048*/      OPC_EmitConvertToTarget, 2,
/*4050*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1133:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4060*/    /*Scope*/ 29, /*->4090*/
/*4061*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*4064*/      OPC_MoveParent,
/*4065*/      OPC_RecordChild1, // #0 = $src
/*4066*/      OPC_RecordChild2, // #1 = $rs
/*4067*/      OPC_RecordChild3, // #2 = $sa
/*4068*/      OPC_MoveChild, 3,
/*4070*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4073*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4075*/      OPC_MoveParent,
/*4076*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4078*/      OPC_EmitConvertToTarget, 2,
/*4080*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1134:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4090*/    /*Scope*/ 42, /*->4133*/
/*4091*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*4094*/      OPC_MoveParent,
/*4095*/      OPC_RecordChild1, // #0 = $rt
/*4096*/      OPC_RecordChild2, // #1 = $rs_sa
/*4097*/      OPC_Scope, 21, /*->4120*/ // 2 children in Scope
/*4099*/        OPC_MoveChild, 2,
/*4101*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4104*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*4106*/        OPC_MoveParent,
/*4107*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4109*/        OPC_EmitConvertToTarget, 1,
/*4111*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4120*/      /*Scope*/ 11, /*->4132*/
/*4121*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4123*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4132*/      0, /*End of Scope*/
/*4133*/    /*Scope*/ 42, /*->4176*/
/*4134*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*4137*/      OPC_MoveParent,
/*4138*/      OPC_RecordChild1, // #0 = $rt
/*4139*/      OPC_RecordChild2, // #1 = $rs_sa
/*4140*/      OPC_Scope, 21, /*->4163*/ // 2 children in Scope
/*4142*/        OPC_MoveChild, 2,
/*4144*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4147*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*4149*/        OPC_MoveParent,
/*4150*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4152*/        OPC_EmitConvertToTarget, 1,
/*4154*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4163*/      /*Scope*/ 11, /*->4175*/
/*4164*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4166*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4175*/      0, /*End of Scope*/
/*4176*/    /*Scope*/ 42, /*->4219*/
/*4177*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*4180*/      OPC_MoveParent,
/*4181*/      OPC_RecordChild1, // #0 = $rt
/*4182*/      OPC_RecordChild2, // #1 = $rs_sa
/*4183*/      OPC_Scope, 21, /*->4206*/ // 2 children in Scope
/*4185*/        OPC_MoveChild, 2,
/*4187*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4190*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*4192*/        OPC_MoveParent,
/*4193*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4195*/        OPC_EmitConvertToTarget, 1,
/*4197*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4206*/      /*Scope*/ 11, /*->4218*/
/*4207*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4209*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4218*/      0, /*End of Scope*/
/*4219*/    /*Scope*/ 17, /*->4237*/
/*4220*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*4223*/      OPC_MoveParent,
/*4224*/      OPC_RecordChild1, // #0 = $rs
/*4225*/      OPC_RecordChild2, // #1 = $rt
/*4226*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4228*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1136:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4237*/    /*Scope*/ 17, /*->4255*/
/*4238*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*4241*/      OPC_MoveParent,
/*4242*/      OPC_RecordChild1, // #0 = $rs
/*4243*/      OPC_RecordChild2, // #1 = $rt
/*4244*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4246*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1135:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4255*/    /*Scope*/ 15, /*->4271*/
/*4256*/      OPC_CheckInteger, 100|128,8/*1124*/, 
/*4259*/      OPC_MoveParent,
/*4260*/      OPC_RecordChild1, // #0 = $rt
/*4261*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4263*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1124:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4271*/    /*Scope*/ 15, /*->4287*/
/*4272*/      OPC_CheckInteger, 102|128,8/*1126*/, 
/*4275*/      OPC_MoveParent,
/*4276*/      OPC_RecordChild1, // #0 = $rt
/*4277*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4279*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1126:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4287*/    /*Scope*/ 15, /*->4303*/
/*4288*/      OPC_CheckInteger, 101|128,8/*1125*/, 
/*4291*/      OPC_MoveParent,
/*4292*/      OPC_RecordChild1, // #0 = $rt
/*4293*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4295*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1125:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4303*/    /*Scope*/ 15, /*->4319*/
/*4304*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4307*/      OPC_MoveParent,
/*4308*/      OPC_RecordChild1, // #0 = $rt
/*4309*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4311*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1127:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*4319*/    /*Scope*/ 15, /*->4335*/
/*4320*/      OPC_CheckInteger, 104|128,8/*1128*/, 
/*4323*/      OPC_MoveParent,
/*4324*/      OPC_RecordChild1, // #0 = $rt
/*4325*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4327*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1128:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4335*/    /*Scope*/ 15, /*->4351*/
/*4336*/      OPC_CheckInteger, 106|128,8/*1130*/, 
/*4339*/      OPC_MoveParent,
/*4340*/      OPC_RecordChild1, // #0 = $rt
/*4341*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4343*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1130:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4351*/    /*Scope*/ 15, /*->4367*/
/*4352*/      OPC_CheckInteger, 105|128,8/*1129*/, 
/*4355*/      OPC_MoveParent,
/*4356*/      OPC_RecordChild1, // #0 = $rt
/*4357*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4359*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1129:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4367*/    /*Scope*/ 15, /*->4383*/
/*4368*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*4371*/      OPC_MoveParent,
/*4372*/      OPC_RecordChild1, // #0 = $rt
/*4373*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4375*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1131:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*4383*/    /*Scope*/ 17, /*->4401*/
/*4384*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*4387*/      OPC_MoveParent,
/*4388*/      OPC_RecordChild1, // #0 = $rs
/*4389*/      OPC_RecordChild2, // #1 = $rt
/*4390*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4392*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1119:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4401*/    /*Scope*/ 17, /*->4419*/
/*4402*/      OPC_CheckInteger, 26|128,8/*1050*/, 
/*4405*/      OPC_MoveParent,
/*4406*/      OPC_RecordChild1, // #0 = $rs
/*4407*/      OPC_RecordChild2, // #1 = $rt
/*4408*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4410*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1050:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4419*/    /*Scope*/ 17, /*->4437*/
/*4420*/      OPC_CheckInteger, 27|128,8/*1051*/, 
/*4423*/      OPC_MoveParent,
/*4424*/      OPC_RecordChild1, // #0 = $rs
/*4425*/      OPC_RecordChild2, // #1 = $rt
/*4426*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4428*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1051:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4437*/    /*Scope*/ 17, /*->4455*/
/*4438*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*4441*/      OPC_MoveParent,
/*4442*/      OPC_RecordChild1, // #0 = $rs
/*4443*/      OPC_RecordChild2, // #1 = $rt
/*4444*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4446*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1167:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4455*/    /*Scope*/ 17, /*->4473*/
/*4456*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*4459*/      OPC_MoveParent,
/*4460*/      OPC_RecordChild1, // #0 = $rs
/*4461*/      OPC_RecordChild2, // #1 = $rt
/*4462*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4464*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1168:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4473*/    /*Scope*/ 17, /*->4491*/
/*4474*/      OPC_CheckInteger, 17|128,8/*1041*/, 
/*4477*/      OPC_MoveParent,
/*4478*/      OPC_RecordChild1, // #0 = $rs
/*4479*/      OPC_RecordChild2, // #1 = $rt
/*4480*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4482*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1041:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4491*/    /*Scope*/ 17, /*->4509*/
/*4492*/      OPC_CheckInteger, 18|128,8/*1042*/, 
/*4495*/      OPC_MoveParent,
/*4496*/      OPC_RecordChild1, // #0 = $rs
/*4497*/      OPC_RecordChild2, // #1 = $rt
/*4498*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4500*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1042:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4509*/    /*Scope*/ 17, /*->4527*/
/*4510*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*4513*/      OPC_MoveParent,
/*4514*/      OPC_RecordChild1, // #0 = $rs
/*4515*/      OPC_RecordChild2, // #1 = $rt
/*4516*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4518*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4527*/    /*Scope*/ 17, /*->4545*/
/*4528*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*4531*/      OPC_MoveParent,
/*4532*/      OPC_RecordChild1, // #0 = $rs
/*4533*/      OPC_RecordChild2, // #1 = $rt
/*4534*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4536*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1160:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4545*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->4691
/*4550*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*4551*/    OPC_MoveChild, 1,
/*4553*/    OPC_Scope, 27, /*->4582*/ // 7 children in Scope
/*4555*/      OPC_CheckInteger, 17|128,9/*1169*/, 
/*4558*/      OPC_MoveParent,
/*4559*/      OPC_RecordChild2, // #1 = $rs
/*4560*/      OPC_RecordChild3, // #2 = $mask
/*4561*/      OPC_MoveChild, 3,
/*4563*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4566*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4568*/      OPC_MoveParent,
/*4569*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4571*/      OPC_EmitMergeInputChains1_0,
/*4572*/      OPC_EmitConvertToTarget, 2,
/*4574*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1169:iPTR, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP CPURegs:i32:$rs, (imm:i32):$mask)
/*4582*/    /*Scope*/ 17, /*->4600*/
/*4583*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*4586*/      OPC_MoveParent,
/*4587*/      OPC_RecordChild2, // #1 = $rs
/*4588*/      OPC_RecordChild3, // #2 = $rt
/*4589*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4591*/      OPC_EmitMergeInputChains1_0,
/*4592*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1066:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4600*/    /*Scope*/ 17, /*->4618*/
/*4601*/      OPC_CheckInteger, 44|128,8/*1068*/, 
/*4604*/      OPC_MoveParent,
/*4605*/      OPC_RecordChild2, // #1 = $rs
/*4606*/      OPC_RecordChild3, // #2 = $rt
/*4607*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4609*/      OPC_EmitMergeInputChains1_0,
/*4610*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1068:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4618*/    /*Scope*/ 17, /*->4636*/
/*4619*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*4622*/      OPC_MoveParent,
/*4623*/      OPC_RecordChild2, // #1 = $rs
/*4624*/      OPC_RecordChild3, // #2 = $rt
/*4625*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4627*/      OPC_EmitMergeInputChains1_0,
/*4628*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1067:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4636*/    /*Scope*/ 17, /*->4654*/
/*4637*/      OPC_CheckInteger, 33|128,8/*1057*/, 
/*4640*/      OPC_MoveParent,
/*4641*/      OPC_RecordChild2, // #1 = $rs
/*4642*/      OPC_RecordChild3, // #2 = $rt
/*4643*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4645*/      OPC_EmitMergeInputChains1_0,
/*4646*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1057:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4654*/    /*Scope*/ 17, /*->4672*/
/*4655*/      OPC_CheckInteger, 35|128,8/*1059*/, 
/*4658*/      OPC_MoveParent,
/*4659*/      OPC_RecordChild2, // #1 = $rs
/*4660*/      OPC_RecordChild3, // #2 = $rt
/*4661*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4663*/      OPC_EmitMergeInputChains1_0,
/*4664*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1059:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4672*/    /*Scope*/ 17, /*->4690*/
/*4673*/      OPC_CheckInteger, 34|128,8/*1058*/, 
/*4676*/      OPC_MoveParent,
/*4677*/      OPC_RecordChild2, // #1 = $rs
/*4678*/      OPC_RecordChild3, // #2 = $rt
/*4679*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4681*/      OPC_EmitMergeInputChains1_0,
/*4682*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1058:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4690*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->4892
/*4695*/    OPC_Scope, 50, /*->4747*/ // 2 children in Scope
/*4697*/      OPC_MoveChild, 0,
/*4699*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4702*/      OPC_RecordChild0, // #0 = $rs
/*4703*/      OPC_RecordChild1, // #1 = $rt
/*4704*/      OPC_MoveParent,
/*4705*/      OPC_MoveChild, 1,
/*4707*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4718*/      OPC_MoveParent,
/*4719*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->4733
/*4722*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4724*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->4746
/*4735*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4737*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*4747*/    /*Scope*/ 14|128,1/*142*/, /*->4891*/
/*4749*/      OPC_RecordChild0, // #0 = $in
/*4750*/      OPC_Scope, 44, /*->4796*/ // 2 children in Scope
/*4752*/        OPC_MoveChild, 1,
/*4754*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4765*/        OPC_MoveParent,
/*4766*/        OPC_CheckType, MVT::i32,
/*4768*/        OPC_Scope, 14, /*->4784*/ // 2 children in Scope
/*4770*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4772*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*4775*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 CPURegsOpnd:i32:$in, ZERO:i32)
/*4784*/        /*Scope*/ 10, /*->4795*/
/*4785*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*4787*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*4795*/        0, /*End of Scope*/
/*4796*/      /*Scope*/ 93, /*->4890*/
/*4797*/        OPC_RecordChild1, // #1 = $imm16
/*4798*/        OPC_Scope, 46, /*->4846*/ // 3 children in Scope
/*4800*/          OPC_MoveChild, 1,
/*4802*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4805*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*4807*/          OPC_MoveParent,
/*4808*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->4827
/*4811*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4813*/            OPC_EmitConvertToTarget, 1,
/*4815*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*4818*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->4845
/*4829*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4831*/            OPC_EmitConvertToTarget, 1,
/*4833*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*4836*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*4846*/        /*Scope*/ 28, /*->4875*/
/*4847*/          OPC_CheckType, MVT::i32,
/*4849*/          OPC_Scope, 11, /*->4862*/ // 2 children in Scope
/*4851*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4853*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*4862*/          /*Scope*/ 11, /*->4874*/
/*4863*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*4865*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*4874*/          0, /*End of Scope*/
/*4875*/        /*Scope*/ 13, /*->4889*/
/*4876*/          OPC_CheckType, MVT::i64,
/*4878*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4880*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*4889*/        0, /*End of Scope*/
/*4890*/      0, /*End of Scope*/
/*4891*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,10/*1378*/,  TARGET_VAL(ISD::BRCOND),// ->6274
/*4896*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*4897*/    OPC_Scope, 24|128,10/*1304*/, /*->6204*/ // 2 children in Scope
/*4900*/      OPC_MoveChild, 1,
/*4902*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*4905*/      OPC_RecordChild0, // #1 = $rs
/*4906*/      OPC_Scope, 43|128,6/*811*/, /*->5720*/ // 2 children in Scope
/*4909*/        OPC_CheckChild0Type, MVT::i32,
/*4911*/        OPC_Scope, 79|128,1/*207*/, /*->5121*/ // 2 children in Scope
/*4914*/          OPC_MoveChild, 1,
/*4916*/          OPC_CheckInteger, 0, 
/*4918*/          OPC_MoveParent,
/*4919*/          OPC_MoveChild, 2,
/*4921*/          OPC_Scope, 24, /*->4947*/ // 7 children in Scope
/*4923*/            OPC_CheckCondCode, ISD::SETGE,
/*4925*/            OPC_MoveParent,
/*4926*/            OPC_CheckType, MVT::i32,
/*4928*/            OPC_MoveParent,
/*4929*/            OPC_RecordChild2, // #2 = $offset
/*4930*/            OPC_MoveChild, 2,
/*4932*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4935*/            OPC_MoveParent,
/*4936*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4938*/            OPC_EmitMergeInputChains1_0,
/*4939*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGEZ CPURegs:i32:$rs, (bb:Other):$offset)
/*4947*/          /*Scope*/ 24, /*->4972*/
/*4948*/            OPC_CheckCondCode, ISD::SETGT,
/*4950*/            OPC_MoveParent,
/*4951*/            OPC_CheckType, MVT::i32,
/*4953*/            OPC_MoveParent,
/*4954*/            OPC_RecordChild2, // #2 = $offset
/*4955*/            OPC_MoveChild, 2,
/*4957*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4960*/            OPC_MoveParent,
/*4961*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4963*/            OPC_EmitMergeInputChains1_0,
/*4964*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGTZ CPURegs:i32:$rs, (bb:Other):$offset)
/*4972*/          /*Scope*/ 24, /*->4997*/
/*4973*/            OPC_CheckCondCode, ISD::SETLE,
/*4975*/            OPC_MoveParent,
/*4976*/            OPC_CheckType, MVT::i32,
/*4978*/            OPC_MoveParent,
/*4979*/            OPC_RecordChild2, // #2 = $offset
/*4980*/            OPC_MoveChild, 2,
/*4982*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4985*/            OPC_MoveParent,
/*4986*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4988*/            OPC_EmitMergeInputChains1_0,
/*4989*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLEZ CPURegs:i32:$rs, (bb:Other):$offset)
/*4997*/          /*Scope*/ 24, /*->5022*/
/*4998*/            OPC_CheckCondCode, ISD::SETLT,
/*5000*/            OPC_MoveParent,
/*5001*/            OPC_CheckType, MVT::i32,
/*5003*/            OPC_MoveParent,
/*5004*/            OPC_RecordChild2, // #2 = $offset
/*5005*/            OPC_MoveChild, 2,
/*5007*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5010*/            OPC_MoveParent,
/*5011*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5013*/            OPC_EmitMergeInputChains1_0,
/*5014*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLTZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5022*/          /*Scope*/ 28, /*->5051*/
/*5023*/            OPC_CheckCondCode, ISD::SETNE,
/*5025*/            OPC_MoveParent,
/*5026*/            OPC_CheckType, MVT::i32,
/*5028*/            OPC_MoveParent,
/*5029*/            OPC_RecordChild2, // #2 = $dst
/*5030*/            OPC_MoveChild, 2,
/*5032*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5035*/            OPC_MoveParent,
/*5036*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5038*/            OPC_EmitMergeInputChains1_0,
/*5039*/            OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5042*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5051*/          /*Scope*/ 43, /*->5095*/
/*5052*/            OPC_CheckCondCode, ISD::SETEQ,
/*5054*/            OPC_MoveParent,
/*5055*/            OPC_CheckType, MVT::i32,
/*5057*/            OPC_MoveParent,
/*5058*/            OPC_RecordChild2, // #2 = $dst
/*5059*/            OPC_MoveChild, 2,
/*5061*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5064*/            OPC_MoveParent,
/*5065*/            OPC_Scope, 15, /*->5082*/ // 2 children in Scope
/*5067*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5069*/              OPC_EmitMergeInputChains1_0,
/*5070*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5073*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5082*/            /*Scope*/ 11, /*->5094*/
/*5083*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5085*/              OPC_EmitMergeInputChains1_0,
/*5086*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5094*/            0, /*End of Scope*/
/*5095*/          /*Scope*/ 24, /*->5120*/
/*5096*/            OPC_CheckCondCode, ISD::SETNE,
/*5098*/            OPC_MoveParent,
/*5099*/            OPC_CheckType, MVT::i32,
/*5101*/            OPC_MoveParent,
/*5102*/            OPC_RecordChild2, // #2 = $targ16
/*5103*/            OPC_MoveChild, 2,
/*5105*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5108*/            OPC_MoveParent,
/*5109*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5111*/            OPC_EmitMergeInputChains1_0,
/*5112*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                    // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5120*/          0, /*End of Scope*/
/*5121*/        /*Scope*/ 84|128,4/*596*/, /*->5719*/
/*5123*/          OPC_RecordChild1, // #2 = $imm
/*5124*/          OPC_Scope, 97|128,1/*225*/, /*->5352*/ // 2 children in Scope
/*5127*/            OPC_MoveChild, 1,
/*5129*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5132*/            OPC_Scope, 32, /*->5166*/ // 4 children in Scope
/*5134*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5136*/              OPC_MoveParent,
/*5137*/              OPC_MoveChild, 2,
/*5139*/              OPC_CheckCondCode, ISD::SETEQ,
/*5141*/              OPC_MoveParent,
/*5142*/              OPC_CheckType, MVT::i32,
/*5144*/              OPC_MoveParent,
/*5145*/              OPC_RecordChild2, // #3 = $targ16
/*5146*/              OPC_MoveChild, 2,
/*5148*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5151*/              OPC_MoveParent,
/*5152*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5154*/              OPC_EmitMergeInputChains1_0,
/*5155*/              OPC_EmitConvertToTarget, 2,
/*5157*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*5166*/            /*Scope*/ 63, /*->5230*/
/*5167*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5169*/              OPC_MoveParent,
/*5170*/              OPC_MoveChild, 2,
/*5172*/              OPC_Scope, 27, /*->5201*/ // 2 children in Scope
/*5174*/                OPC_CheckCondCode, ISD::SETGE,
/*5176*/                OPC_MoveParent,
/*5177*/                OPC_CheckType, MVT::i32,
/*5179*/                OPC_MoveParent,
/*5180*/                OPC_RecordChild2, // #3 = $imm16
/*5181*/                OPC_MoveChild, 2,
/*5183*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5186*/                OPC_MoveParent,
/*5187*/                OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5189*/                OPC_EmitMergeInputChains1_0,
/*5190*/                OPC_EmitConvertToTarget, 2,
/*5192*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*5201*/              /*Scope*/ 27, /*->5229*/
/*5202*/                OPC_CheckCondCode, ISD::SETLT,
/*5204*/                OPC_MoveParent,
/*5205*/                OPC_CheckType, MVT::i32,
/*5207*/                OPC_MoveParent,
/*5208*/                OPC_RecordChild2, // #3 = $imm16
/*5209*/                OPC_MoveChild, 2,
/*5211*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5214*/                OPC_MoveParent,
/*5215*/                OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5217*/                OPC_EmitMergeInputChains1_0,
/*5218*/                OPC_EmitConvertToTarget, 2,
/*5220*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*5229*/              0, /*End of Scope*/
/*5230*/            /*Scope*/ 32, /*->5263*/
/*5231*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5233*/              OPC_MoveParent,
/*5234*/              OPC_MoveChild, 2,
/*5236*/              OPC_CheckCondCode, ISD::SETNE,
/*5238*/              OPC_MoveParent,
/*5239*/              OPC_CheckType, MVT::i32,
/*5241*/              OPC_MoveParent,
/*5242*/              OPC_RecordChild2, // #3 = $targ16
/*5243*/              OPC_MoveChild, 2,
/*5245*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5248*/              OPC_MoveParent,
/*5249*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5251*/              OPC_EmitMergeInputChains1_0,
/*5252*/              OPC_EmitConvertToTarget, 2,
/*5254*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*5263*/            /*Scope*/ 87, /*->5351*/
/*5264*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5266*/              OPC_MoveParent,
/*5267*/              OPC_MoveChild, 2,
/*5269*/              OPC_Scope, 39, /*->5310*/ // 2 children in Scope
/*5271*/                OPC_CheckCondCode, ISD::SETGE,
/*5273*/                OPC_MoveParent,
/*5274*/                OPC_CheckType, MVT::i32,
/*5276*/                OPC_MoveParent,
/*5277*/                OPC_RecordChild2, // #3 = $dst
/*5278*/                OPC_MoveChild, 2,
/*5280*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5283*/                OPC_MoveParent,
/*5284*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5286*/                OPC_EmitMergeInputChains1_0,
/*5287*/                OPC_EmitConvertToTarget, 2,
/*5289*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5298*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5301*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5310*/              /*Scope*/ 39, /*->5350*/
/*5311*/                OPC_CheckCondCode, ISD::SETUGE,
/*5313*/                OPC_MoveParent,
/*5314*/                OPC_CheckType, MVT::i32,
/*5316*/                OPC_MoveParent,
/*5317*/                OPC_RecordChild2, // #3 = $dst
/*5318*/                OPC_MoveChild, 2,
/*5320*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5323*/                OPC_MoveParent,
/*5324*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5326*/                OPC_EmitMergeInputChains1_0,
/*5327*/                OPC_EmitConvertToTarget, 2,
/*5329*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5338*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5341*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5350*/              0, /*End of Scope*/
/*5351*/            0, /*End of Scope*/
/*5352*/          /*Scope*/ 108|128,2/*364*/, /*->5718*/
/*5354*/            OPC_MoveChild, 2,
/*5356*/            OPC_Scope, 25, /*->5383*/ // 12 children in Scope
/*5358*/              OPC_CheckCondCode, ISD::SETEQ,
/*5360*/              OPC_MoveParent,
/*5361*/              OPC_CheckType, MVT::i32,
/*5363*/              OPC_MoveParent,
/*5364*/              OPC_RecordChild2, // #3 = $offset
/*5365*/              OPC_MoveChild, 2,
/*5367*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5370*/              OPC_MoveParent,
/*5371*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5373*/              OPC_EmitMergeInputChains1_0,
/*5374*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$offset)
/*5383*/            /*Scope*/ 25, /*->5409*/
/*5384*/              OPC_CheckCondCode, ISD::SETNE,
/*5386*/              OPC_MoveParent,
/*5387*/              OPC_CheckType, MVT::i32,
/*5389*/              OPC_MoveParent,
/*5390*/              OPC_RecordChild2, // #3 = $offset
/*5391*/              OPC_MoveChild, 2,
/*5393*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5396*/              OPC_MoveParent,
/*5397*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5399*/              OPC_EmitMergeInputChains1_0,
/*5400*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$offset)
/*5409*/            /*Scope*/ 25, /*->5435*/
/*5410*/              OPC_CheckCondCode, ISD::SETEQ,
/*5412*/              OPC_MoveParent,
/*5413*/              OPC_CheckType, MVT::i32,
/*5415*/              OPC_MoveParent,
/*5416*/              OPC_RecordChild2, // #3 = $imm16
/*5417*/              OPC_MoveChild, 2,
/*5419*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5422*/              OPC_MoveParent,
/*5423*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5425*/              OPC_EmitMergeInputChains1_0,
/*5426*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*5435*/            /*Scope*/ 25, /*->5461*/
/*5436*/              OPC_CheckCondCode, ISD::SETGT,
/*5438*/              OPC_MoveParent,
/*5439*/              OPC_CheckType, MVT::i32,
/*5441*/              OPC_MoveParent,
/*5442*/              OPC_RecordChild2, // #3 = $imm16
/*5443*/              OPC_MoveChild, 2,
/*5445*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5448*/              OPC_MoveParent,
/*5449*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5451*/              OPC_EmitMergeInputChains1_0,
/*5452*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*5461*/            /*Scope*/ 25, /*->5487*/
/*5462*/              OPC_CheckCondCode, ISD::SETGE,
/*5464*/              OPC_MoveParent,
/*5465*/              OPC_CheckType, MVT::i32,
/*5467*/              OPC_MoveParent,
/*5468*/              OPC_RecordChild2, // #3 = $imm16
/*5469*/              OPC_MoveChild, 2,
/*5471*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5474*/              OPC_MoveParent,
/*5475*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5477*/              OPC_EmitMergeInputChains1_0,
/*5478*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*5487*/            /*Scope*/ 25, /*->5513*/
/*5488*/              OPC_CheckCondCode, ISD::SETLT,
/*5490*/              OPC_MoveParent,
/*5491*/              OPC_CheckType, MVT::i32,
/*5493*/              OPC_MoveParent,
/*5494*/              OPC_RecordChild2, // #3 = $imm16
/*5495*/              OPC_MoveChild, 2,
/*5497*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5500*/              OPC_MoveParent,
/*5501*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5503*/              OPC_EmitMergeInputChains1_0,
/*5504*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*5513*/            /*Scope*/ 25, /*->5539*/
/*5514*/              OPC_CheckCondCode, ISD::SETLE,
/*5516*/              OPC_MoveParent,
/*5517*/              OPC_CheckType, MVT::i32,
/*5519*/              OPC_MoveParent,
/*5520*/              OPC_RecordChild2, // #3 = $imm16
/*5521*/              OPC_MoveChild, 2,
/*5523*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5526*/              OPC_MoveParent,
/*5527*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5529*/              OPC_EmitMergeInputChains1_0,
/*5530*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*5539*/            /*Scope*/ 25, /*->5565*/
/*5540*/              OPC_CheckCondCode, ISD::SETNE,
/*5542*/              OPC_MoveParent,
/*5543*/              OPC_CheckType, MVT::i32,
/*5545*/              OPC_MoveParent,
/*5546*/              OPC_RecordChild2, // #3 = $imm16
/*5547*/              OPC_MoveChild, 2,
/*5549*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5552*/              OPC_MoveParent,
/*5553*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5555*/              OPC_EmitMergeInputChains1_0,
/*5556*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*5565*/            /*Scope*/ 37, /*->5603*/
/*5566*/              OPC_CheckCondCode, ISD::SETGE,
/*5568*/              OPC_MoveParent,
/*5569*/              OPC_CheckType, MVT::i32,
/*5571*/              OPC_MoveParent,
/*5572*/              OPC_RecordChild2, // #3 = $dst
/*5573*/              OPC_MoveChild, 2,
/*5575*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5578*/              OPC_MoveParent,
/*5579*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5581*/              OPC_EmitMergeInputChains1_0,
/*5582*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*5591*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5594*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*5603*/            /*Scope*/ 37, /*->5641*/
/*5604*/              OPC_CheckCondCode, ISD::SETUGE,
/*5606*/              OPC_MoveParent,
/*5607*/              OPC_CheckType, MVT::i32,
/*5609*/              OPC_MoveParent,
/*5610*/              OPC_RecordChild2, // #3 = $dst
/*5611*/              OPC_MoveChild, 2,
/*5613*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5616*/              OPC_MoveParent,
/*5617*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5619*/              OPC_EmitMergeInputChains1_0,
/*5620*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*5629*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5632*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*5641*/            /*Scope*/ 37, /*->5679*/
/*5642*/              OPC_CheckCondCode, ISD::SETLE,
/*5644*/              OPC_MoveParent,
/*5645*/              OPC_CheckType, MVT::i32,
/*5647*/              OPC_MoveParent,
/*5648*/              OPC_RecordChild2, // #3 = $dst
/*5649*/              OPC_MoveChild, 2,
/*5651*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5654*/              OPC_MoveParent,
/*5655*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5657*/              OPC_EmitMergeInputChains1_0,
/*5658*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*5667*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5670*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*5679*/            /*Scope*/ 37, /*->5717*/
/*5680*/              OPC_CheckCondCode, ISD::SETULE,
/*5682*/              OPC_MoveParent,
/*5683*/              OPC_CheckType, MVT::i32,
/*5685*/              OPC_MoveParent,
/*5686*/              OPC_RecordChild2, // #3 = $dst
/*5687*/              OPC_MoveChild, 2,
/*5689*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5692*/              OPC_MoveParent,
/*5693*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5695*/              OPC_EmitMergeInputChains1_0,
/*5696*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*5705*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5708*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*5717*/            0, /*End of Scope*/
/*5718*/          0, /*End of Scope*/
/*5719*/        0, /*End of Scope*/
/*5720*/      /*Scope*/ 97|128,3/*481*/, /*->6203*/
/*5722*/        OPC_CheckChild0Type, MVT::i64,
/*5724*/        OPC_Scope, 39|128,1/*167*/, /*->5894*/ // 2 children in Scope
/*5727*/          OPC_MoveChild, 1,
/*5729*/          OPC_CheckInteger, 0, 
/*5731*/          OPC_MoveParent,
/*5732*/          OPC_MoveChild, 2,
/*5734*/          OPC_Scope, 24, /*->5760*/ // 6 children in Scope
/*5736*/            OPC_CheckCondCode, ISD::SETGE,
/*5738*/            OPC_MoveParent,
/*5739*/            OPC_CheckType, MVT::i32,
/*5741*/            OPC_MoveParent,
/*5742*/            OPC_RecordChild2, // #2 = $offset
/*5743*/            OPC_MoveChild, 2,
/*5745*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5748*/            OPC_MoveParent,
/*5749*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5751*/            OPC_EmitMergeInputChains1_0,
/*5752*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGEZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*5760*/          /*Scope*/ 24, /*->5785*/
/*5761*/            OPC_CheckCondCode, ISD::SETGT,
/*5763*/            OPC_MoveParent,
/*5764*/            OPC_CheckType, MVT::i32,
/*5766*/            OPC_MoveParent,
/*5767*/            OPC_RecordChild2, // #2 = $offset
/*5768*/            OPC_MoveChild, 2,
/*5770*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5773*/            OPC_MoveParent,
/*5774*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5776*/            OPC_EmitMergeInputChains1_0,
/*5777*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGTZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*5785*/          /*Scope*/ 24, /*->5810*/
/*5786*/            OPC_CheckCondCode, ISD::SETLE,
/*5788*/            OPC_MoveParent,
/*5789*/            OPC_CheckType, MVT::i32,
/*5791*/            OPC_MoveParent,
/*5792*/            OPC_RecordChild2, // #2 = $offset
/*5793*/            OPC_MoveChild, 2,
/*5795*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5798*/            OPC_MoveParent,
/*5799*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5801*/            OPC_EmitMergeInputChains1_0,
/*5802*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLEZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*5810*/          /*Scope*/ 24, /*->5835*/
/*5811*/            OPC_CheckCondCode, ISD::SETLT,
/*5813*/            OPC_MoveParent,
/*5814*/            OPC_CheckType, MVT::i32,
/*5816*/            OPC_MoveParent,
/*5817*/            OPC_RecordChild2, // #2 = $offset
/*5818*/            OPC_MoveChild, 2,
/*5820*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5823*/            OPC_MoveParent,
/*5824*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5826*/            OPC_EmitMergeInputChains1_0,
/*5827*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLTZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*5835*/          /*Scope*/ 28, /*->5864*/
/*5836*/            OPC_CheckCondCode, ISD::SETNE,
/*5838*/            OPC_MoveParent,
/*5839*/            OPC_CheckType, MVT::i32,
/*5841*/            OPC_MoveParent,
/*5842*/            OPC_RecordChild2, // #2 = $dst
/*5843*/            OPC_MoveChild, 2,
/*5845*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5848*/            OPC_MoveParent,
/*5849*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5851*/            OPC_EmitMergeInputChains1_0,
/*5852*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*5855*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*5864*/          /*Scope*/ 28, /*->5893*/
/*5865*/            OPC_CheckCondCode, ISD::SETEQ,
/*5867*/            OPC_MoveParent,
/*5868*/            OPC_CheckType, MVT::i32,
/*5870*/            OPC_MoveParent,
/*5871*/            OPC_RecordChild2, // #2 = $dst
/*5872*/            OPC_MoveChild, 2,
/*5874*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5877*/            OPC_MoveParent,
/*5878*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5880*/            OPC_EmitMergeInputChains1_0,
/*5881*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*5884*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BEQ64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*5893*/          0, /*End of Scope*/
/*5894*/        /*Scope*/ 50|128,2/*306*/, /*->6202*/
/*5896*/          OPC_RecordChild1, // #2 = $rhs
/*5897*/          OPC_Scope, 92, /*->5991*/ // 2 children in Scope
/*5899*/            OPC_MoveChild, 1,
/*5901*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5904*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5906*/            OPC_MoveParent,
/*5907*/            OPC_MoveChild, 2,
/*5909*/            OPC_Scope, 39, /*->5950*/ // 2 children in Scope
/*5911*/              OPC_CheckCondCode, ISD::SETGE,
/*5913*/              OPC_MoveParent,
/*5914*/              OPC_CheckType, MVT::i32,
/*5916*/              OPC_MoveParent,
/*5917*/              OPC_RecordChild2, // #3 = $dst
/*5918*/              OPC_MoveChild, 2,
/*5920*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5923*/              OPC_MoveParent,
/*5924*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5926*/              OPC_EmitMergeInputChains1_0,
/*5927*/              OPC_EmitConvertToTarget, 2,
/*5929*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5938*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5941*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5950*/            /*Scope*/ 39, /*->5990*/
/*5951*/              OPC_CheckCondCode, ISD::SETUGE,
/*5953*/              OPC_MoveParent,
/*5954*/              OPC_CheckType, MVT::i32,
/*5956*/              OPC_MoveParent,
/*5957*/              OPC_RecordChild2, // #3 = $dst
/*5958*/              OPC_MoveChild, 2,
/*5960*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5963*/              OPC_MoveParent,
/*5964*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5966*/              OPC_EmitMergeInputChains1_0,
/*5967*/              OPC_EmitConvertToTarget, 2,
/*5969*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5978*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5981*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5990*/            0, /*End of Scope*/
/*5991*/          /*Scope*/ 80|128,1/*208*/, /*->6201*/
/*5993*/            OPC_MoveChild, 2,
/*5995*/            OPC_Scope, 25, /*->6022*/ // 6 children in Scope
/*5997*/              OPC_CheckCondCode, ISD::SETEQ,
/*5999*/              OPC_MoveParent,
/*6000*/              OPC_CheckType, MVT::i32,
/*6002*/              OPC_MoveParent,
/*6003*/              OPC_RecordChild2, // #3 = $offset
/*6004*/              OPC_MoveChild, 2,
/*6006*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6009*/              OPC_MoveParent,
/*6010*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6012*/              OPC_EmitMergeInputChains1_0,
/*6013*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$offset)
/*6022*/            /*Scope*/ 25, /*->6048*/
/*6023*/              OPC_CheckCondCode, ISD::SETNE,
/*6025*/              OPC_MoveParent,
/*6026*/              OPC_CheckType, MVT::i32,
/*6028*/              OPC_MoveParent,
/*6029*/              OPC_RecordChild2, // #3 = $offset
/*6030*/              OPC_MoveChild, 2,
/*6032*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6035*/              OPC_MoveParent,
/*6036*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6038*/              OPC_EmitMergeInputChains1_0,
/*6039*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$offset)
/*6048*/            /*Scope*/ 37, /*->6086*/
/*6049*/              OPC_CheckCondCode, ISD::SETGE,
/*6051*/              OPC_MoveParent,
/*6052*/              OPC_CheckType, MVT::i32,
/*6054*/              OPC_MoveParent,
/*6055*/              OPC_RecordChild2, // #3 = $dst
/*6056*/              OPC_MoveChild, 2,
/*6058*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6061*/              OPC_MoveParent,
/*6062*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6064*/              OPC_EmitMergeInputChains1_0,
/*6065*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6074*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6077*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6086*/            /*Scope*/ 37, /*->6124*/
/*6087*/              OPC_CheckCondCode, ISD::SETUGE,
/*6089*/              OPC_MoveParent,
/*6090*/              OPC_CheckType, MVT::i32,
/*6092*/              OPC_MoveParent,
/*6093*/              OPC_RecordChild2, // #3 = $dst
/*6094*/              OPC_MoveChild, 2,
/*6096*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6099*/              OPC_MoveParent,
/*6100*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6102*/              OPC_EmitMergeInputChains1_0,
/*6103*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6112*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6115*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6124*/            /*Scope*/ 37, /*->6162*/
/*6125*/              OPC_CheckCondCode, ISD::SETLE,
/*6127*/              OPC_MoveParent,
/*6128*/              OPC_CheckType, MVT::i32,
/*6130*/              OPC_MoveParent,
/*6131*/              OPC_RecordChild2, // #3 = $dst
/*6132*/              OPC_MoveChild, 2,
/*6134*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6137*/              OPC_MoveParent,
/*6138*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6140*/              OPC_EmitMergeInputChains1_0,
/*6141*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6150*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6153*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6162*/            /*Scope*/ 37, /*->6200*/
/*6163*/              OPC_CheckCondCode, ISD::SETULE,
/*6165*/              OPC_MoveParent,
/*6166*/              OPC_CheckType, MVT::i32,
/*6168*/              OPC_MoveParent,
/*6169*/              OPC_RecordChild2, // #3 = $dst
/*6170*/              OPC_MoveChild, 2,
/*6172*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6175*/              OPC_MoveParent,
/*6176*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6178*/              OPC_EmitMergeInputChains1_0,
/*6179*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6188*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6191*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6200*/            0, /*End of Scope*/
/*6201*/          0, /*End of Scope*/
/*6202*/        0, /*End of Scope*/
/*6203*/      0, /*End of Scope*/
/*6204*/    /*Scope*/ 68, /*->6273*/
/*6205*/      OPC_RecordChild1, // #1 = $cond
/*6206*/      OPC_Scope, 39, /*->6247*/ // 2 children in Scope
/*6208*/        OPC_CheckChild1Type, MVT::i32,
/*6210*/        OPC_RecordChild2, // #2 = $dst
/*6211*/        OPC_MoveChild, 2,
/*6213*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6216*/        OPC_MoveParent,
/*6217*/        OPC_Scope, 15, /*->6234*/ // 2 children in Scope
/*6219*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6221*/          OPC_EmitMergeInputChains1_0,
/*6222*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6225*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*6234*/        /*Scope*/ 11, /*->6246*/
/*6235*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6237*/          OPC_EmitMergeInputChains1_0,
/*6238*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*6246*/        0, /*End of Scope*/
/*6247*/      /*Scope*/ 24, /*->6272*/
/*6248*/        OPC_CheckChild1Type, MVT::i64,
/*6250*/        OPC_RecordChild2, // #2 = $dst
/*6251*/        OPC_MoveChild, 2,
/*6253*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6256*/        OPC_MoveParent,
/*6257*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6259*/        OPC_EmitMergeInputChains1_0,
/*6260*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6263*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPU64Regs:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 CPU64Regs:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*6272*/      0, /*End of Scope*/
/*6273*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->6355
/*6277*/    OPC_Scope, 47, /*->6326*/ // 2 children in Scope
/*6279*/      OPC_MoveChild, 0,
/*6281*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*6284*/      OPC_RecordChild0, // #0 = $rs
/*6285*/      OPC_MoveChild, 1,
/*6287*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6298*/      OPC_MoveParent,
/*6299*/      OPC_MoveParent,
/*6300*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6313
/*6303*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6305*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 CPURegsOpnd:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->6325
/*6315*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6317*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 CPU64RegsOpnd:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*6326*/    /*Scope*/ 27, /*->6354*/
/*6327*/      OPC_RecordChild0, // #0 = $rs
/*6328*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6341
/*6331*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6333*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->6353
/*6343*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6345*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 CPU64RegsOpnd:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*6354*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 111|128,27/*3567*/,  TARGET_VAL(ISD::SELECT),// ->9926
/*6359*/    OPC_Scope, 96|128,13/*1760*/, /*->8122*/ // 4 children in Scope
/*6362*/      OPC_MoveChild, 0,
/*6364*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*6367*/      OPC_RecordChild0, // #0 = $lhs
/*6368*/      OPC_Scope, 31|128,8/*1055*/, /*->7426*/ // 2 children in Scope
/*6371*/        OPC_CheckChild0Type, MVT::i32,
/*6373*/        OPC_Scope, 5|128,1/*133*/, /*->6509*/ // 2 children in Scope
/*6376*/          OPC_MoveChild, 1,
/*6378*/          OPC_CheckInteger, 0, 
/*6380*/          OPC_MoveParent,
/*6381*/          OPC_MoveChild, 2,
/*6383*/          OPC_Scope, 38, /*->6423*/ // 4 children in Scope
/*6385*/            OPC_CheckCondCode, ISD::SETEQ,
/*6387*/            OPC_MoveParent,
/*6388*/            OPC_CheckType, MVT::i32,
/*6390*/            OPC_MoveParent,
/*6391*/            OPC_RecordChild1, // #1 = $T
/*6392*/            OPC_RecordChild2, // #2 = $F
/*6393*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6408
/*6396*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6398*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->6422
/*6410*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6412*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*6423*/          /*Scope*/ 38, /*->6462*/
/*6424*/            OPC_CheckCondCode, ISD::SETNE,
/*6426*/            OPC_MoveParent,
/*6427*/            OPC_CheckType, MVT::i32,
/*6429*/            OPC_MoveParent,
/*6430*/            OPC_RecordChild1, // #1 = $T
/*6431*/            OPC_RecordChild2, // #2 = $F
/*6432*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6447
/*6435*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6437*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->6461
/*6449*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6451*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*6462*/          /*Scope*/ 22, /*->6485*/
/*6463*/            OPC_CheckCondCode, ISD::SETEQ,
/*6465*/            OPC_MoveParent,
/*6466*/            OPC_CheckType, MVT::i32,
/*6468*/            OPC_MoveParent,
/*6469*/            OPC_RecordChild1, // #1 = $x
/*6470*/            OPC_RecordChild2, // #2 = $y
/*6471*/            OPC_CheckType, MVT::i32,
/*6473*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6475*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*6485*/          /*Scope*/ 22, /*->6508*/
/*6486*/            OPC_CheckCondCode, ISD::SETNE,
/*6488*/            OPC_MoveParent,
/*6489*/            OPC_CheckType, MVT::i32,
/*6491*/            OPC_MoveParent,
/*6492*/            OPC_RecordChild1, // #1 = $x
/*6493*/            OPC_RecordChild2, // #2 = $y
/*6494*/            OPC_CheckType, MVT::i32,
/*6496*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6498*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*6508*/          0, /*End of Scope*/
/*6509*/        /*Scope*/ 18|128,7/*914*/, /*->7425*/
/*6511*/          OPC_RecordChild1, // #1 = $b
/*6512*/          OPC_Scope, 78|128,2/*334*/, /*->6849*/ // 2 children in Scope
/*6515*/            OPC_MoveChild, 1,
/*6517*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6520*/            OPC_Scope, 30, /*->6552*/ // 6 children in Scope
/*6522*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6524*/              OPC_MoveParent,
/*6525*/              OPC_MoveChild, 2,
/*6527*/              OPC_CheckCondCode, ISD::SETLT,
/*6529*/              OPC_MoveParent,
/*6530*/              OPC_CheckType, MVT::i32,
/*6532*/              OPC_MoveParent,
/*6533*/              OPC_RecordChild1, // #2 = $x
/*6534*/              OPC_RecordChild2, // #3 = $y
/*6535*/              OPC_CheckType, MVT::i32,
/*6537*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6539*/              OPC_EmitConvertToTarget, 1,
/*6541*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*6552*/            /*Scope*/ 65, /*->6618*/
/*6553*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6555*/              OPC_MoveParent,
/*6556*/              OPC_MoveChild, 2,
/*6558*/              OPC_Scope, 28, /*->6588*/ // 2 children in Scope
/*6560*/                OPC_CheckCondCode, ISD::SETEQ,
/*6562*/                OPC_MoveParent,
/*6563*/                OPC_CheckType, MVT::i32,
/*6565*/                OPC_MoveParent,
/*6566*/                OPC_RecordChild1, // #2 = $x
/*6567*/                OPC_RecordChild2, // #3 = $y
/*6568*/                OPC_CheckType, MVT::i32,
/*6570*/                OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6572*/                OPC_EmitConvertToTarget, 1,
/*6574*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*6577*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*6588*/              /*Scope*/ 28, /*->6617*/
/*6589*/                OPC_CheckCondCode, ISD::SETNE,
/*6591*/                OPC_MoveParent,
/*6592*/                OPC_CheckType, MVT::i32,
/*6594*/                OPC_MoveParent,
/*6595*/                OPC_RecordChild1, // #2 = $x
/*6596*/                OPC_RecordChild2, // #3 = $y
/*6597*/                OPC_CheckType, MVT::i32,
/*6599*/                OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6601*/                OPC_EmitConvertToTarget, 1,
/*6603*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*6606*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*6617*/              0, /*End of Scope*/
/*6618*/            /*Scope*/ 75, /*->6694*/
/*6619*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6621*/              OPC_MoveParent,
/*6622*/              OPC_MoveChild, 2,
/*6624*/              OPC_Scope, 33, /*->6659*/ // 2 children in Scope
/*6626*/                OPC_CheckCondCode, ISD::SETGE,
/*6628*/                OPC_MoveParent,
/*6629*/                OPC_CheckType, MVT::i32,
/*6631*/                OPC_MoveParent,
/*6632*/                OPC_RecordChild1, // #2 = $T
/*6633*/                OPC_RecordChild2, // #3 = $F
/*6634*/                OPC_CheckType, MVT::i32,
/*6636*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6638*/                OPC_EmitConvertToTarget, 1,
/*6640*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6649*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*6659*/              /*Scope*/ 33, /*->6693*/
/*6660*/                OPC_CheckCondCode, ISD::SETUGE,
/*6662*/                OPC_MoveParent,
/*6663*/                OPC_CheckType, MVT::i32,
/*6665*/                OPC_MoveParent,
/*6666*/                OPC_RecordChild1, // #2 = $T
/*6667*/                OPC_RecordChild2, // #3 = $F
/*6668*/                OPC_CheckType, MVT::i32,
/*6670*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6672*/                OPC_EmitConvertToTarget, 1,
/*6674*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6683*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*6693*/              0, /*End of Scope*/
/*6694*/            /*Scope*/ 38, /*->6733*/
/*6695*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6697*/              OPC_MoveParent,
/*6698*/              OPC_MoveChild, 2,
/*6700*/              OPC_CheckCondCode, ISD::SETEQ,
/*6702*/              OPC_MoveParent,
/*6703*/              OPC_CheckType, MVT::i32,
/*6705*/              OPC_MoveParent,
/*6706*/              OPC_RecordChild1, // #2 = $T
/*6707*/              OPC_RecordChild2, // #3 = $F
/*6708*/              OPC_CheckType, MVT::i32,
/*6710*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6712*/              OPC_EmitConvertToTarget, 1,
/*6714*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6723*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
/*6733*/            /*Scope*/ 75, /*->6809*/
/*6734*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6736*/              OPC_MoveParent,
/*6737*/              OPC_MoveChild, 2,
/*6739*/              OPC_Scope, 33, /*->6774*/ // 2 children in Scope
/*6741*/                OPC_CheckCondCode, ISD::SETGE,
/*6743*/                OPC_MoveParent,
/*6744*/                OPC_CheckType, MVT::i32,
/*6746*/                OPC_MoveParent,
/*6747*/                OPC_RecordChild1, // #2 = $T
/*6748*/                OPC_RecordChild2, // #3 = $F
/*6749*/                OPC_CheckType, MVT::i64,
/*6751*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6753*/                OPC_EmitConvertToTarget, 1,
/*6755*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6764*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*6774*/              /*Scope*/ 33, /*->6808*/
/*6775*/                OPC_CheckCondCode, ISD::SETUGE,
/*6777*/                OPC_MoveParent,
/*6778*/                OPC_CheckType, MVT::i32,
/*6780*/                OPC_MoveParent,
/*6781*/                OPC_RecordChild1, // #2 = $T
/*6782*/                OPC_RecordChild2, // #3 = $F
/*6783*/                OPC_CheckType, MVT::i64,
/*6785*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6787*/                OPC_EmitConvertToTarget, 1,
/*6789*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6798*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*6808*/              0, /*End of Scope*/
/*6809*/            /*Scope*/ 38, /*->6848*/
/*6810*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6812*/              OPC_MoveParent,
/*6813*/              OPC_MoveChild, 2,
/*6815*/              OPC_CheckCondCode, ISD::SETEQ,
/*6817*/              OPC_MoveParent,
/*6818*/              OPC_CheckType, MVT::i32,
/*6820*/              OPC_MoveParent,
/*6821*/              OPC_RecordChild1, // #2 = $T
/*6822*/              OPC_RecordChild2, // #3 = $F
/*6823*/              OPC_CheckType, MVT::i64,
/*6825*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6827*/              OPC_EmitConvertToTarget, 1,
/*6829*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6838*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
/*6848*/            0, /*End of Scope*/
/*6849*/          /*Scope*/ 61|128,4/*573*/, /*->7424*/
/*6851*/            OPC_MoveChild, 2,
/*6853*/            OPC_Scope, 23, /*->6878*/ // 19 children in Scope
/*6855*/              OPC_CheckCondCode, ISD::SETGE,
/*6857*/              OPC_MoveParent,
/*6858*/              OPC_CheckType, MVT::i32,
/*6860*/              OPC_MoveParent,
/*6861*/              OPC_RecordChild1, // #2 = $x
/*6862*/              OPC_RecordChild2, // #3 = $y
/*6863*/              OPC_CheckType, MVT::i32,
/*6865*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6867*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*6878*/            /*Scope*/ 23, /*->6902*/
/*6879*/              OPC_CheckCondCode, ISD::SETGT,
/*6881*/              OPC_MoveParent,
/*6882*/              OPC_CheckType, MVT::i32,
/*6884*/              OPC_MoveParent,
/*6885*/              OPC_RecordChild1, // #2 = $x
/*6886*/              OPC_RecordChild2, // #3 = $y
/*6887*/              OPC_CheckType, MVT::i32,
/*6889*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6891*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*6902*/            /*Scope*/ 23, /*->6926*/
/*6903*/              OPC_CheckCondCode, ISD::SETUGE,
/*6905*/              OPC_MoveParent,
/*6906*/              OPC_CheckType, MVT::i32,
/*6908*/              OPC_MoveParent,
/*6909*/              OPC_RecordChild1, // #2 = $x
/*6910*/              OPC_RecordChild2, // #3 = $y
/*6911*/              OPC_CheckType, MVT::i32,
/*6913*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6915*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*6926*/            /*Scope*/ 23, /*->6950*/
/*6927*/              OPC_CheckCondCode, ISD::SETUGT,
/*6929*/              OPC_MoveParent,
/*6930*/              OPC_CheckType, MVT::i32,
/*6932*/              OPC_MoveParent,
/*6933*/              OPC_RecordChild1, // #2 = $x
/*6934*/              OPC_RecordChild2, // #3 = $y
/*6935*/              OPC_CheckType, MVT::i32,
/*6937*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6939*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*6950*/            /*Scope*/ 23, /*->6974*/
/*6951*/              OPC_CheckCondCode, ISD::SETLE,
/*6953*/              OPC_MoveParent,
/*6954*/              OPC_CheckType, MVT::i32,
/*6956*/              OPC_MoveParent,
/*6957*/              OPC_RecordChild1, // #2 = $x
/*6958*/              OPC_RecordChild2, // #3 = $y
/*6959*/              OPC_CheckType, MVT::i32,
/*6961*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6963*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*6974*/            /*Scope*/ 23, /*->6998*/
/*6975*/              OPC_CheckCondCode, ISD::SETULE,
/*6977*/              OPC_MoveParent,
/*6978*/              OPC_CheckType, MVT::i32,
/*6980*/              OPC_MoveParent,
/*6981*/              OPC_RecordChild1, // #2 = $x
/*6982*/              OPC_RecordChild2, // #3 = $y
/*6983*/              OPC_CheckType, MVT::i32,
/*6985*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6987*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*6998*/            /*Scope*/ 23, /*->7022*/
/*6999*/              OPC_CheckCondCode, ISD::SETEQ,
/*7001*/              OPC_MoveParent,
/*7002*/              OPC_CheckType, MVT::i32,
/*7004*/              OPC_MoveParent,
/*7005*/              OPC_RecordChild1, // #2 = $x
/*7006*/              OPC_RecordChild2, // #3 = $y
/*7007*/              OPC_CheckType, MVT::i32,
/*7009*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*7011*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*7022*/            /*Scope*/ 23, /*->7046*/
/*7023*/              OPC_CheckCondCode, ISD::SETNE,
/*7025*/              OPC_MoveParent,
/*7026*/              OPC_CheckType, MVT::i32,
/*7028*/              OPC_MoveParent,
/*7029*/              OPC_RecordChild1, // #2 = $x
/*7030*/              OPC_RecordChild2, // #3 = $y
/*7031*/              OPC_CheckType, MVT::i32,
/*7033*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*7035*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*7046*/            /*Scope*/ 31, /*->7078*/
/*7047*/              OPC_CheckCondCode, ISD::SETGE,
/*7049*/              OPC_MoveParent,
/*7050*/              OPC_CheckType, MVT::i32,
/*7052*/              OPC_MoveParent,
/*7053*/              OPC_RecordChild1, // #2 = $T
/*7054*/              OPC_RecordChild2, // #3 = $F
/*7055*/              OPC_CheckType, MVT::i32,
/*7057*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7059*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7068*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7078*/            /*Scope*/ 31, /*->7110*/
/*7079*/              OPC_CheckCondCode, ISD::SETUGE,
/*7081*/              OPC_MoveParent,
/*7082*/              OPC_CheckType, MVT::i32,
/*7084*/              OPC_MoveParent,
/*7085*/              OPC_RecordChild1, // #2 = $T
/*7086*/              OPC_RecordChild2, // #3 = $F
/*7087*/              OPC_CheckType, MVT::i32,
/*7089*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7091*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7100*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7110*/            /*Scope*/ 31, /*->7142*/
/*7111*/              OPC_CheckCondCode, ISD::SETLE,
/*7113*/              OPC_MoveParent,
/*7114*/              OPC_CheckType, MVT::i32,
/*7116*/              OPC_MoveParent,
/*7117*/              OPC_RecordChild1, // #2 = $T
/*7118*/              OPC_RecordChild2, // #3 = $F
/*7119*/              OPC_CheckType, MVT::i32,
/*7121*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7123*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7132*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*7142*/            /*Scope*/ 31, /*->7174*/
/*7143*/              OPC_CheckCondCode, ISD::SETULE,
/*7145*/              OPC_MoveParent,
/*7146*/              OPC_CheckType, MVT::i32,
/*7148*/              OPC_MoveParent,
/*7149*/              OPC_RecordChild1, // #2 = $T
/*7150*/              OPC_RecordChild2, // #3 = $F
/*7151*/              OPC_CheckType, MVT::i32,
/*7153*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7155*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7164*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*7174*/            /*Scope*/ 31, /*->7206*/
/*7175*/              OPC_CheckCondCode, ISD::SETEQ,
/*7177*/              OPC_MoveParent,
/*7178*/              OPC_CheckType, MVT::i32,
/*7180*/              OPC_MoveParent,
/*7181*/              OPC_RecordChild1, // #2 = $T
/*7182*/              OPC_RecordChild2, // #3 = $F
/*7183*/              OPC_CheckType, MVT::i32,
/*7185*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7187*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7196*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*7206*/            /*Scope*/ 31, /*->7238*/
/*7207*/              OPC_CheckCondCode, ISD::SETGE,
/*7209*/              OPC_MoveParent,
/*7210*/              OPC_CheckType, MVT::i32,
/*7212*/              OPC_MoveParent,
/*7213*/              OPC_RecordChild1, // #2 = $T
/*7214*/              OPC_RecordChild2, // #3 = $F
/*7215*/              OPC_CheckType, MVT::i64,
/*7217*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7219*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7228*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*7238*/            /*Scope*/ 31, /*->7270*/
/*7239*/              OPC_CheckCondCode, ISD::SETUGE,
/*7241*/              OPC_MoveParent,
/*7242*/              OPC_CheckType, MVT::i32,
/*7244*/              OPC_MoveParent,
/*7245*/              OPC_RecordChild1, // #2 = $T
/*7246*/              OPC_RecordChild2, // #3 = $F
/*7247*/              OPC_CheckType, MVT::i64,
/*7249*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7251*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7260*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*7270*/            /*Scope*/ 31, /*->7302*/
/*7271*/              OPC_CheckCondCode, ISD::SETLE,
/*7273*/              OPC_MoveParent,
/*7274*/              OPC_CheckType, MVT::i32,
/*7276*/              OPC_MoveParent,
/*7277*/              OPC_RecordChild1, // #2 = $T
/*7278*/              OPC_RecordChild2, // #3 = $F
/*7279*/              OPC_CheckType, MVT::i64,
/*7281*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7283*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7292*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*7302*/            /*Scope*/ 31, /*->7334*/
/*7303*/              OPC_CheckCondCode, ISD::SETULE,
/*7305*/              OPC_MoveParent,
/*7306*/              OPC_CheckType, MVT::i32,
/*7308*/              OPC_MoveParent,
/*7309*/              OPC_RecordChild1, // #2 = $T
/*7310*/              OPC_RecordChild2, // #3 = $F
/*7311*/              OPC_CheckType, MVT::i64,
/*7313*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7315*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7324*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*7334*/            /*Scope*/ 31, /*->7366*/
/*7335*/              OPC_CheckCondCode, ISD::SETEQ,
/*7337*/              OPC_MoveParent,
/*7338*/              OPC_CheckType, MVT::i32,
/*7340*/              OPC_MoveParent,
/*7341*/              OPC_RecordChild1, // #2 = $T
/*7342*/              OPC_RecordChild2, // #3 = $F
/*7343*/              OPC_CheckType, MVT::i64,
/*7345*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7347*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7356*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*7366*/            /*Scope*/ 56, /*->7423*/
/*7367*/              OPC_CheckCondCode, ISD::SETNE,
/*7369*/              OPC_MoveParent,
/*7370*/              OPC_CheckType, MVT::i32,
/*7372*/              OPC_MoveParent,
/*7373*/              OPC_RecordChild1, // #2 = $T
/*7374*/              OPC_RecordChild2, // #3 = $F
/*7375*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7399
/*7378*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7380*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7389*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->7422
/*7401*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7403*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7412*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*7423*/            0, /*End of Scope*/
/*7424*/          0, /*End of Scope*/
/*7425*/        0, /*End of Scope*/
/*7426*/      /*Scope*/ 53|128,5/*693*/, /*->8121*/
/*7428*/        OPC_CheckChild0Type, MVT::i64,
/*7430*/        OPC_Scope, 87, /*->7519*/ // 2 children in Scope
/*7432*/          OPC_MoveChild, 1,
/*7434*/          OPC_CheckInteger, 0, 
/*7436*/          OPC_MoveParent,
/*7437*/          OPC_MoveChild, 2,
/*7439*/          OPC_Scope, 38, /*->7479*/ // 2 children in Scope
/*7441*/            OPC_CheckCondCode, ISD::SETEQ,
/*7443*/            OPC_MoveParent,
/*7444*/            OPC_CheckType, MVT::i32,
/*7446*/            OPC_MoveParent,
/*7447*/            OPC_RecordChild1, // #1 = $T
/*7448*/            OPC_RecordChild2, // #2 = $F
/*7449*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7464
/*7452*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7454*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7478
/*7466*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7468*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7479*/          /*Scope*/ 38, /*->7518*/
/*7480*/            OPC_CheckCondCode, ISD::SETNE,
/*7482*/            OPC_MoveParent,
/*7483*/            OPC_CheckType, MVT::i32,
/*7485*/            OPC_MoveParent,
/*7486*/            OPC_RecordChild1, // #1 = $T
/*7487*/            OPC_RecordChild2, // #2 = $F
/*7488*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7503
/*7491*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7493*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7517
/*7505*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7507*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7518*/          0, /*End of Scope*/
/*7519*/        /*Scope*/ 87|128,4/*599*/, /*->8120*/
/*7521*/          OPC_RecordChild1, // #1 = $rhs
/*7522*/          OPC_Scope, 90|128,1/*218*/, /*->7743*/ // 2 children in Scope
/*7525*/            OPC_MoveChild, 1,
/*7527*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7530*/            OPC_Scope, 15|128,1/*143*/, /*->7676*/ // 2 children in Scope
/*7533*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7535*/              OPC_MoveParent,
/*7536*/              OPC_MoveChild, 2,
/*7538*/              OPC_Scope, 33, /*->7573*/ // 4 children in Scope
/*7540*/                OPC_CheckCondCode, ISD::SETGE,
/*7542*/                OPC_MoveParent,
/*7543*/                OPC_CheckType, MVT::i32,
/*7545*/                OPC_MoveParent,
/*7546*/                OPC_RecordChild1, // #2 = $T
/*7547*/                OPC_RecordChild2, // #3 = $F
/*7548*/                OPC_CheckType, MVT::i32,
/*7550*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7552*/                OPC_EmitConvertToTarget, 1,
/*7554*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7563*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*7573*/              /*Scope*/ 33, /*->7607*/
/*7574*/                OPC_CheckCondCode, ISD::SETUGE,
/*7576*/                OPC_MoveParent,
/*7577*/                OPC_CheckType, MVT::i32,
/*7579*/                OPC_MoveParent,
/*7580*/                OPC_RecordChild1, // #2 = $T
/*7581*/                OPC_RecordChild2, // #3 = $F
/*7582*/                OPC_CheckType, MVT::i32,
/*7584*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7586*/                OPC_EmitConvertToTarget, 1,
/*7588*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7597*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*7607*/              /*Scope*/ 33, /*->7641*/
/*7608*/                OPC_CheckCondCode, ISD::SETGE,
/*7610*/                OPC_MoveParent,
/*7611*/                OPC_CheckType, MVT::i32,
/*7613*/                OPC_MoveParent,
/*7614*/                OPC_RecordChild1, // #2 = $T
/*7615*/                OPC_RecordChild2, // #3 = $F
/*7616*/                OPC_CheckType, MVT::i64,
/*7618*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7620*/                OPC_EmitConvertToTarget, 1,
/*7622*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7631*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*7641*/              /*Scope*/ 33, /*->7675*/
/*7642*/                OPC_CheckCondCode, ISD::SETUGE,
/*7644*/                OPC_MoveParent,
/*7645*/                OPC_CheckType, MVT::i32,
/*7647*/                OPC_MoveParent,
/*7648*/                OPC_RecordChild1, // #2 = $T
/*7649*/                OPC_RecordChild2, // #3 = $F
/*7650*/                OPC_CheckType, MVT::i64,
/*7652*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7654*/                OPC_EmitConvertToTarget, 1,
/*7656*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7665*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*7675*/              0, /*End of Scope*/
/*7676*/            /*Scope*/ 65, /*->7742*/
/*7677*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7679*/              OPC_MoveParent,
/*7680*/              OPC_MoveChild, 2,
/*7682*/              OPC_CheckCondCode, ISD::SETEQ,
/*7684*/              OPC_MoveParent,
/*7685*/              OPC_CheckType, MVT::i32,
/*7687*/              OPC_MoveParent,
/*7688*/              OPC_RecordChild1, // #2 = $T
/*7689*/              OPC_RecordChild2, // #3 = $F
/*7690*/              OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->7716
/*7693*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7695*/                OPC_EmitConvertToTarget, 1,
/*7697*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*7706*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->7741
/*7718*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7720*/                OPC_EmitConvertToTarget, 1,
/*7722*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*7731*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*7742*/            0, /*End of Scope*/
/*7743*/          /*Scope*/ 118|128,2/*374*/, /*->8119*/
/*7745*/            OPC_MoveChild, 2,
/*7747*/            OPC_Scope, 31, /*->7780*/ // 10 children in Scope
/*7749*/              OPC_CheckCondCode, ISD::SETGE,
/*7751*/              OPC_MoveParent,
/*7752*/              OPC_CheckType, MVT::i32,
/*7754*/              OPC_MoveParent,
/*7755*/              OPC_RecordChild1, // #2 = $T
/*7756*/              OPC_RecordChild2, // #3 = $F
/*7757*/              OPC_CheckType, MVT::i32,
/*7759*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7761*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7770*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*7780*/            /*Scope*/ 31, /*->7812*/
/*7781*/              OPC_CheckCondCode, ISD::SETUGE,
/*7783*/              OPC_MoveParent,
/*7784*/              OPC_CheckType, MVT::i32,
/*7786*/              OPC_MoveParent,
/*7787*/              OPC_RecordChild1, // #2 = $T
/*7788*/              OPC_RecordChild2, // #3 = $F
/*7789*/              OPC_CheckType, MVT::i32,
/*7791*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7793*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7802*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*7812*/            /*Scope*/ 31, /*->7844*/
/*7813*/              OPC_CheckCondCode, ISD::SETLE,
/*7815*/              OPC_MoveParent,
/*7816*/              OPC_CheckType, MVT::i32,
/*7818*/              OPC_MoveParent,
/*7819*/              OPC_RecordChild1, // #2 = $T
/*7820*/              OPC_RecordChild2, // #3 = $F
/*7821*/              OPC_CheckType, MVT::i32,
/*7823*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7825*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7834*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*7844*/            /*Scope*/ 31, /*->7876*/
/*7845*/              OPC_CheckCondCode, ISD::SETULE,
/*7847*/              OPC_MoveParent,
/*7848*/              OPC_CheckType, MVT::i32,
/*7850*/              OPC_MoveParent,
/*7851*/              OPC_RecordChild1, // #2 = $T
/*7852*/              OPC_RecordChild2, // #3 = $F
/*7853*/              OPC_CheckType, MVT::i32,
/*7855*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7857*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7866*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*7876*/            /*Scope*/ 31, /*->7908*/
/*7877*/              OPC_CheckCondCode, ISD::SETGE,
/*7879*/              OPC_MoveParent,
/*7880*/              OPC_CheckType, MVT::i32,
/*7882*/              OPC_MoveParent,
/*7883*/              OPC_RecordChild1, // #2 = $T
/*7884*/              OPC_RecordChild2, // #3 = $F
/*7885*/              OPC_CheckType, MVT::i64,
/*7887*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7889*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7898*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*7908*/            /*Scope*/ 31, /*->7940*/
/*7909*/              OPC_CheckCondCode, ISD::SETUGE,
/*7911*/              OPC_MoveParent,
/*7912*/              OPC_CheckType, MVT::i32,
/*7914*/              OPC_MoveParent,
/*7915*/              OPC_RecordChild1, // #2 = $T
/*7916*/              OPC_RecordChild2, // #3 = $F
/*7917*/              OPC_CheckType, MVT::i64,
/*7919*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7921*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7930*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*7940*/            /*Scope*/ 31, /*->7972*/
/*7941*/              OPC_CheckCondCode, ISD::SETLE,
/*7943*/              OPC_MoveParent,
/*7944*/              OPC_CheckType, MVT::i32,
/*7946*/              OPC_MoveParent,
/*7947*/              OPC_RecordChild1, // #2 = $T
/*7948*/              OPC_RecordChild2, // #3 = $F
/*7949*/              OPC_CheckType, MVT::i64,
/*7951*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7953*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7962*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*7972*/            /*Scope*/ 31, /*->8004*/
/*7973*/              OPC_CheckCondCode, ISD::SETULE,
/*7975*/              OPC_MoveParent,
/*7976*/              OPC_CheckType, MVT::i32,
/*7978*/              OPC_MoveParent,
/*7979*/              OPC_RecordChild1, // #2 = $T
/*7980*/              OPC_RecordChild2, // #3 = $F
/*7981*/              OPC_CheckType, MVT::i64,
/*7983*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7985*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7994*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*8004*/            /*Scope*/ 56, /*->8061*/
/*8005*/              OPC_CheckCondCode, ISD::SETEQ,
/*8007*/              OPC_MoveParent,
/*8008*/              OPC_CheckType, MVT::i32,
/*8010*/              OPC_MoveParent,
/*8011*/              OPC_RecordChild1, // #2 = $T
/*8012*/              OPC_RecordChild2, // #3 = $F
/*8013*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8037
/*8016*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8018*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8027*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8060
/*8039*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8041*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8050*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*8061*/            /*Scope*/ 56, /*->8118*/
/*8062*/              OPC_CheckCondCode, ISD::SETNE,
/*8064*/              OPC_MoveParent,
/*8065*/              OPC_CheckType, MVT::i32,
/*8067*/              OPC_MoveParent,
/*8068*/              OPC_RecordChild1, // #2 = $T
/*8069*/              OPC_RecordChild2, // #3 = $F
/*8070*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8094
/*8073*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8075*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8084*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8117
/*8096*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8098*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8107*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*8118*/            0, /*End of Scope*/
/*8119*/          0, /*End of Scope*/
/*8120*/        0, /*End of Scope*/
/*8121*/      0, /*End of Scope*/
/*8122*/    /*Scope*/ 89, /*->8212*/
/*8123*/      OPC_RecordChild0, // #0 = $cond
/*8124*/      OPC_Scope, 50, /*->8176*/ // 2 children in Scope
/*8126*/        OPC_CheckChild0Type, MVT::i32,
/*8128*/        OPC_RecordChild1, // #1 = $T
/*8129*/        OPC_RecordChild2, // #2 = $F
/*8130*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->8161
/*8133*/          OPC_Scope, 12, /*->8147*/ // 2 children in Scope
/*8135*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8137*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
/*8147*/          /*Scope*/ 12, /*->8160*/
/*8148*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*8150*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*8160*/          0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->8175
/*8163*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8165*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPURegs:i32:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*8176*/      /*Scope*/ 34, /*->8211*/
/*8177*/        OPC_CheckChild0Type, MVT::i64,
/*8179*/        OPC_RecordChild1, // #1 = $T
/*8180*/        OPC_RecordChild2, // #2 = $F
/*8181*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8196
/*8184*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8186*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPU64Regs:i64:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->8210
/*8198*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8200*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPU64Regs:i64:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*8211*/      0, /*End of Scope*/
/*8212*/    /*Scope*/ 85|128,12/*1621*/, /*->9835*/
/*8214*/      OPC_MoveChild, 0,
/*8216*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*8219*/      OPC_RecordChild0, // #0 = $lhs
/*8220*/      OPC_Scope, 62|128,7/*958*/, /*->9181*/ // 2 children in Scope
/*8223*/        OPC_CheckChild0Type, MVT::i32,
/*8225*/        OPC_Scope, 19|128,1/*147*/, /*->8375*/ // 2 children in Scope
/*8228*/          OPC_MoveChild, 1,
/*8230*/          OPC_CheckInteger, 0, 
/*8232*/          OPC_MoveParent,
/*8233*/          OPC_MoveChild, 2,
/*8235*/          OPC_Scope, 22, /*->8259*/ // 6 children in Scope
/*8237*/            OPC_CheckCondCode, ISD::SETEQ,
/*8239*/            OPC_MoveParent,
/*8240*/            OPC_CheckType, MVT::i32,
/*8242*/            OPC_MoveParent,
/*8243*/            OPC_RecordChild1, // #1 = $T
/*8244*/            OPC_RecordChild2, // #2 = $F
/*8245*/            OPC_CheckType, MVT::f32,
/*8247*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*8259*/          /*Scope*/ 22, /*->8282*/
/*8260*/            OPC_CheckCondCode, ISD::SETNE,
/*8262*/            OPC_MoveParent,
/*8263*/            OPC_CheckType, MVT::i32,
/*8265*/            OPC_MoveParent,
/*8266*/            OPC_RecordChild1, // #1 = $T
/*8267*/            OPC_RecordChild2, // #2 = $F
/*8268*/            OPC_CheckType, MVT::f32,
/*8270*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8272*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*8282*/          /*Scope*/ 22, /*->8305*/
/*8283*/            OPC_CheckCondCode, ISD::SETEQ,
/*8285*/            OPC_MoveParent,
/*8286*/            OPC_CheckType, MVT::i32,
/*8288*/            OPC_MoveParent,
/*8289*/            OPC_RecordChild1, // #1 = $T
/*8290*/            OPC_RecordChild2, // #2 = $F
/*8291*/            OPC_CheckType, MVT::f64,
/*8293*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8295*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*8305*/          /*Scope*/ 22, /*->8328*/
/*8306*/            OPC_CheckCondCode, ISD::SETNE,
/*8308*/            OPC_MoveParent,
/*8309*/            OPC_CheckType, MVT::i32,
/*8311*/            OPC_MoveParent,
/*8312*/            OPC_RecordChild1, // #1 = $T
/*8313*/            OPC_RecordChild2, // #2 = $F
/*8314*/            OPC_CheckType, MVT::f64,
/*8316*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8318*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*8328*/          /*Scope*/ 22, /*->8351*/
/*8329*/            OPC_CheckCondCode, ISD::SETEQ,
/*8331*/            OPC_MoveParent,
/*8332*/            OPC_CheckType, MVT::i32,
/*8334*/            OPC_MoveParent,
/*8335*/            OPC_RecordChild1, // #1 = $T
/*8336*/            OPC_RecordChild2, // #2 = $F
/*8337*/            OPC_CheckType, MVT::f64,
/*8339*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8341*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*8351*/          /*Scope*/ 22, /*->8374*/
/*8352*/            OPC_CheckCondCode, ISD::SETNE,
/*8354*/            OPC_MoveParent,
/*8355*/            OPC_CheckType, MVT::i32,
/*8357*/            OPC_MoveParent,
/*8358*/            OPC_RecordChild1, // #1 = $T
/*8359*/            OPC_RecordChild2, // #2 = $F
/*8360*/            OPC_CheckType, MVT::f64,
/*8362*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8364*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*8374*/          0, /*End of Scope*/
/*8375*/        /*Scope*/ 35|128,6/*803*/, /*->9180*/
/*8377*/          OPC_RecordChild1, // #1 = $rhs
/*8378*/          OPC_Scope, 88|128,1/*216*/, /*->8597*/ // 2 children in Scope
/*8381*/            OPC_MoveChild, 1,
/*8383*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8386*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8388*/            OPC_MoveParent,
/*8389*/            OPC_MoveChild, 2,
/*8391*/            OPC_Scope, 33, /*->8426*/ // 6 children in Scope
/*8393*/              OPC_CheckCondCode, ISD::SETGE,
/*8395*/              OPC_MoveParent,
/*8396*/              OPC_CheckType, MVT::i32,
/*8398*/              OPC_MoveParent,
/*8399*/              OPC_RecordChild1, // #2 = $T
/*8400*/              OPC_RecordChild2, // #3 = $F
/*8401*/              OPC_CheckType, MVT::f32,
/*8403*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8405*/              OPC_EmitConvertToTarget, 1,
/*8407*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8416*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*8426*/            /*Scope*/ 33, /*->8460*/
/*8427*/              OPC_CheckCondCode, ISD::SETUGE,
/*8429*/              OPC_MoveParent,
/*8430*/              OPC_CheckType, MVT::i32,
/*8432*/              OPC_MoveParent,
/*8433*/              OPC_RecordChild1, // #2 = $T
/*8434*/              OPC_RecordChild2, // #3 = $F
/*8435*/              OPC_CheckType, MVT::f32,
/*8437*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8439*/              OPC_EmitConvertToTarget, 1,
/*8441*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8450*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*8460*/            /*Scope*/ 33, /*->8494*/
/*8461*/              OPC_CheckCondCode, ISD::SETGE,
/*8463*/              OPC_MoveParent,
/*8464*/              OPC_CheckType, MVT::i32,
/*8466*/              OPC_MoveParent,
/*8467*/              OPC_RecordChild1, // #2 = $T
/*8468*/              OPC_RecordChild2, // #3 = $F
/*8469*/              OPC_CheckType, MVT::f64,
/*8471*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8473*/              OPC_EmitConvertToTarget, 1,
/*8475*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8484*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*8494*/            /*Scope*/ 33, /*->8528*/
/*8495*/              OPC_CheckCondCode, ISD::SETUGE,
/*8497*/              OPC_MoveParent,
/*8498*/              OPC_CheckType, MVT::i32,
/*8500*/              OPC_MoveParent,
/*8501*/              OPC_RecordChild1, // #2 = $T
/*8502*/              OPC_RecordChild2, // #3 = $F
/*8503*/              OPC_CheckType, MVT::f64,
/*8505*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8507*/              OPC_EmitConvertToTarget, 1,
/*8509*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8518*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*8528*/            /*Scope*/ 33, /*->8562*/
/*8529*/              OPC_CheckCondCode, ISD::SETGE,
/*8531*/              OPC_MoveParent,
/*8532*/              OPC_CheckType, MVT::i32,
/*8534*/              OPC_MoveParent,
/*8535*/              OPC_RecordChild1, // #2 = $T
/*8536*/              OPC_RecordChild2, // #3 = $F
/*8537*/              OPC_CheckType, MVT::f64,
/*8539*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8541*/              OPC_EmitConvertToTarget, 1,
/*8543*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8552*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*8562*/            /*Scope*/ 33, /*->8596*/
/*8563*/              OPC_CheckCondCode, ISD::SETUGE,
/*8565*/              OPC_MoveParent,
/*8566*/              OPC_CheckType, MVT::i32,
/*8568*/              OPC_MoveParent,
/*8569*/              OPC_RecordChild1, // #2 = $T
/*8570*/              OPC_RecordChild2, // #3 = $F
/*8571*/              OPC_CheckType, MVT::f64,
/*8573*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8575*/              OPC_EmitConvertToTarget, 1,
/*8577*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8586*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*8596*/            0, /*End of Scope*/
/*8597*/          /*Scope*/ 68|128,4/*580*/, /*->9179*/
/*8599*/            OPC_MoveChild, 2,
/*8601*/            OPC_Scope, 31, /*->8634*/ // 18 children in Scope
/*8603*/              OPC_CheckCondCode, ISD::SETGE,
/*8605*/              OPC_MoveParent,
/*8606*/              OPC_CheckType, MVT::i32,
/*8608*/              OPC_MoveParent,
/*8609*/              OPC_RecordChild1, // #2 = $T
/*8610*/              OPC_RecordChild2, // #3 = $F
/*8611*/              OPC_CheckType, MVT::f32,
/*8613*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8615*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8624*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*8634*/            /*Scope*/ 31, /*->8666*/
/*8635*/              OPC_CheckCondCode, ISD::SETUGE,
/*8637*/              OPC_MoveParent,
/*8638*/              OPC_CheckType, MVT::i32,
/*8640*/              OPC_MoveParent,
/*8641*/              OPC_RecordChild1, // #2 = $T
/*8642*/              OPC_RecordChild2, // #3 = $F
/*8643*/              OPC_CheckType, MVT::f32,
/*8645*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8647*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8656*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*8666*/            /*Scope*/ 31, /*->8698*/
/*8667*/              OPC_CheckCondCode, ISD::SETLE,
/*8669*/              OPC_MoveParent,
/*8670*/              OPC_CheckType, MVT::i32,
/*8672*/              OPC_MoveParent,
/*8673*/              OPC_RecordChild1, // #2 = $T
/*8674*/              OPC_RecordChild2, // #3 = $F
/*8675*/              OPC_CheckType, MVT::f32,
/*8677*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8679*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8688*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*8698*/            /*Scope*/ 31, /*->8730*/
/*8699*/              OPC_CheckCondCode, ISD::SETULE,
/*8701*/              OPC_MoveParent,
/*8702*/              OPC_CheckType, MVT::i32,
/*8704*/              OPC_MoveParent,
/*8705*/              OPC_RecordChild1, // #2 = $T
/*8706*/              OPC_RecordChild2, // #3 = $F
/*8707*/              OPC_CheckType, MVT::f32,
/*8709*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8711*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8720*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*8730*/            /*Scope*/ 31, /*->8762*/
/*8731*/              OPC_CheckCondCode, ISD::SETEQ,
/*8733*/              OPC_MoveParent,
/*8734*/              OPC_CheckType, MVT::i32,
/*8736*/              OPC_MoveParent,
/*8737*/              OPC_RecordChild1, // #2 = $T
/*8738*/              OPC_RecordChild2, // #3 = $F
/*8739*/              OPC_CheckType, MVT::f32,
/*8741*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8743*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8752*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*8762*/            /*Scope*/ 31, /*->8794*/
/*8763*/              OPC_CheckCondCode, ISD::SETNE,
/*8765*/              OPC_MoveParent,
/*8766*/              OPC_CheckType, MVT::i32,
/*8768*/              OPC_MoveParent,
/*8769*/              OPC_RecordChild1, // #2 = $T
/*8770*/              OPC_RecordChild2, // #3 = $F
/*8771*/              OPC_CheckType, MVT::f32,
/*8773*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8775*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8784*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*8794*/            /*Scope*/ 31, /*->8826*/
/*8795*/              OPC_CheckCondCode, ISD::SETGE,
/*8797*/              OPC_MoveParent,
/*8798*/              OPC_CheckType, MVT::i32,
/*8800*/              OPC_MoveParent,
/*8801*/              OPC_RecordChild1, // #2 = $T
/*8802*/              OPC_RecordChild2, // #3 = $F
/*8803*/              OPC_CheckType, MVT::f64,
/*8805*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8807*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8816*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*8826*/            /*Scope*/ 31, /*->8858*/
/*8827*/              OPC_CheckCondCode, ISD::SETUGE,
/*8829*/              OPC_MoveParent,
/*8830*/              OPC_CheckType, MVT::i32,
/*8832*/              OPC_MoveParent,
/*8833*/              OPC_RecordChild1, // #2 = $T
/*8834*/              OPC_RecordChild2, // #3 = $F
/*8835*/              OPC_CheckType, MVT::f64,
/*8837*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8839*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8848*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*8858*/            /*Scope*/ 31, /*->8890*/
/*8859*/              OPC_CheckCondCode, ISD::SETLE,
/*8861*/              OPC_MoveParent,
/*8862*/              OPC_CheckType, MVT::i32,
/*8864*/              OPC_MoveParent,
/*8865*/              OPC_RecordChild1, // #2 = $T
/*8866*/              OPC_RecordChild2, // #3 = $F
/*8867*/              OPC_CheckType, MVT::f64,
/*8869*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8871*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8880*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*8890*/            /*Scope*/ 31, /*->8922*/
/*8891*/              OPC_CheckCondCode, ISD::SETULE,
/*8893*/              OPC_MoveParent,
/*8894*/              OPC_CheckType, MVT::i32,
/*8896*/              OPC_MoveParent,
/*8897*/              OPC_RecordChild1, // #2 = $T
/*8898*/              OPC_RecordChild2, // #3 = $F
/*8899*/              OPC_CheckType, MVT::f64,
/*8901*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8903*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8912*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*8922*/            /*Scope*/ 31, /*->8954*/
/*8923*/              OPC_CheckCondCode, ISD::SETEQ,
/*8925*/              OPC_MoveParent,
/*8926*/              OPC_CheckType, MVT::i32,
/*8928*/              OPC_MoveParent,
/*8929*/              OPC_RecordChild1, // #2 = $T
/*8930*/              OPC_RecordChild2, // #3 = $F
/*8931*/              OPC_CheckType, MVT::f64,
/*8933*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8935*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8944*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*8954*/            /*Scope*/ 31, /*->8986*/
/*8955*/              OPC_CheckCondCode, ISD::SETNE,
/*8957*/              OPC_MoveParent,
/*8958*/              OPC_CheckType, MVT::i32,
/*8960*/              OPC_MoveParent,
/*8961*/              OPC_RecordChild1, // #2 = $T
/*8962*/              OPC_RecordChild2, // #3 = $F
/*8963*/              OPC_CheckType, MVT::f64,
/*8965*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8967*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8976*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*8986*/            /*Scope*/ 31, /*->9018*/
/*8987*/              OPC_CheckCondCode, ISD::SETGE,
/*8989*/              OPC_MoveParent,
/*8990*/              OPC_CheckType, MVT::i32,
/*8992*/              OPC_MoveParent,
/*8993*/              OPC_RecordChild1, // #2 = $T
/*8994*/              OPC_RecordChild2, // #3 = $F
/*8995*/              OPC_CheckType, MVT::f64,
/*8997*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8999*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9008*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9018*/            /*Scope*/ 31, /*->9050*/
/*9019*/              OPC_CheckCondCode, ISD::SETUGE,
/*9021*/              OPC_MoveParent,
/*9022*/              OPC_CheckType, MVT::i32,
/*9024*/              OPC_MoveParent,
/*9025*/              OPC_RecordChild1, // #2 = $T
/*9026*/              OPC_RecordChild2, // #3 = $F
/*9027*/              OPC_CheckType, MVT::f64,
/*9029*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9031*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9040*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9050*/            /*Scope*/ 31, /*->9082*/
/*9051*/              OPC_CheckCondCode, ISD::SETLE,
/*9053*/              OPC_MoveParent,
/*9054*/              OPC_CheckType, MVT::i32,
/*9056*/              OPC_MoveParent,
/*9057*/              OPC_RecordChild1, // #2 = $T
/*9058*/              OPC_RecordChild2, // #3 = $F
/*9059*/              OPC_CheckType, MVT::f64,
/*9061*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9063*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9072*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*9082*/            /*Scope*/ 31, /*->9114*/
/*9083*/              OPC_CheckCondCode, ISD::SETULE,
/*9085*/              OPC_MoveParent,
/*9086*/              OPC_CheckType, MVT::i32,
/*9088*/              OPC_MoveParent,
/*9089*/              OPC_RecordChild1, // #2 = $T
/*9090*/              OPC_RecordChild2, // #3 = $F
/*9091*/              OPC_CheckType, MVT::f64,
/*9093*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9095*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9104*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*9114*/            /*Scope*/ 31, /*->9146*/
/*9115*/              OPC_CheckCondCode, ISD::SETEQ,
/*9117*/              OPC_MoveParent,
/*9118*/              OPC_CheckType, MVT::i32,
/*9120*/              OPC_MoveParent,
/*9121*/              OPC_RecordChild1, // #2 = $T
/*9122*/              OPC_RecordChild2, // #3 = $F
/*9123*/              OPC_CheckType, MVT::f64,
/*9125*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9127*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9136*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9146*/            /*Scope*/ 31, /*->9178*/
/*9147*/              OPC_CheckCondCode, ISD::SETNE,
/*9149*/              OPC_MoveParent,
/*9150*/              OPC_CheckType, MVT::i32,
/*9152*/              OPC_MoveParent,
/*9153*/              OPC_RecordChild1, // #2 = $T
/*9154*/              OPC_RecordChild2, // #3 = $F
/*9155*/              OPC_CheckType, MVT::f64,
/*9157*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9159*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9168*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*9178*/            0, /*End of Scope*/
/*9179*/          0, /*End of Scope*/
/*9180*/        0, /*End of Scope*/
/*9181*/      /*Scope*/ 11|128,5/*651*/, /*->9834*/
/*9183*/        OPC_CheckChild0Type, MVT::i64,
/*9185*/        OPC_Scope, 101, /*->9288*/ // 2 children in Scope
/*9187*/          OPC_MoveChild, 1,
/*9189*/          OPC_CheckInteger, 0, 
/*9191*/          OPC_MoveParent,
/*9192*/          OPC_MoveChild, 2,
/*9194*/          OPC_Scope, 22, /*->9218*/ // 4 children in Scope
/*9196*/            OPC_CheckCondCode, ISD::SETEQ,
/*9198*/            OPC_MoveParent,
/*9199*/            OPC_CheckType, MVT::i32,
/*9201*/            OPC_MoveParent,
/*9202*/            OPC_RecordChild1, // #1 = $T
/*9203*/            OPC_RecordChild2, // #2 = $F
/*9204*/            OPC_CheckType, MVT::f32,
/*9206*/            OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9208*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*9218*/          /*Scope*/ 22, /*->9241*/
/*9219*/            OPC_CheckCondCode, ISD::SETNE,
/*9221*/            OPC_MoveParent,
/*9222*/            OPC_CheckType, MVT::i32,
/*9224*/            OPC_MoveParent,
/*9225*/            OPC_RecordChild1, // #1 = $T
/*9226*/            OPC_RecordChild2, // #2 = $F
/*9227*/            OPC_CheckType, MVT::f32,
/*9229*/            OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9231*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*9241*/          /*Scope*/ 22, /*->9264*/
/*9242*/            OPC_CheckCondCode, ISD::SETEQ,
/*9244*/            OPC_MoveParent,
/*9245*/            OPC_CheckType, MVT::i32,
/*9247*/            OPC_MoveParent,
/*9248*/            OPC_RecordChild1, // #1 = $T
/*9249*/            OPC_RecordChild2, // #2 = $F
/*9250*/            OPC_CheckType, MVT::f64,
/*9252*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9254*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*9264*/          /*Scope*/ 22, /*->9287*/
/*9265*/            OPC_CheckCondCode, ISD::SETNE,
/*9267*/            OPC_MoveParent,
/*9268*/            OPC_CheckType, MVT::i32,
/*9270*/            OPC_MoveParent,
/*9271*/            OPC_RecordChild1, // #1 = $T
/*9272*/            OPC_RecordChild2, // #2 = $F
/*9273*/            OPC_CheckType, MVT::f64,
/*9275*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9277*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*9287*/          0, /*End of Scope*/
/*9288*/        /*Scope*/ 31|128,4/*543*/, /*->9833*/
/*9290*/          OPC_RecordChild1, // #1 = $rhs
/*9291*/          OPC_Scope, 20|128,1/*148*/, /*->9442*/ // 2 children in Scope
/*9294*/            OPC_MoveChild, 1,
/*9296*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9299*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9301*/            OPC_MoveParent,
/*9302*/            OPC_MoveChild, 2,
/*9304*/            OPC_Scope, 33, /*->9339*/ // 4 children in Scope
/*9306*/              OPC_CheckCondCode, ISD::SETGE,
/*9308*/              OPC_MoveParent,
/*9309*/              OPC_CheckType, MVT::i32,
/*9311*/              OPC_MoveParent,
/*9312*/              OPC_RecordChild1, // #2 = $T
/*9313*/              OPC_RecordChild2, // #3 = $F
/*9314*/              OPC_CheckType, MVT::f32,
/*9316*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9318*/              OPC_EmitConvertToTarget, 1,
/*9320*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9329*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*9339*/            /*Scope*/ 33, /*->9373*/
/*9340*/              OPC_CheckCondCode, ISD::SETUGE,
/*9342*/              OPC_MoveParent,
/*9343*/              OPC_CheckType, MVT::i32,
/*9345*/              OPC_MoveParent,
/*9346*/              OPC_RecordChild1, // #2 = $T
/*9347*/              OPC_RecordChild2, // #3 = $F
/*9348*/              OPC_CheckType, MVT::f32,
/*9350*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9352*/              OPC_EmitConvertToTarget, 1,
/*9354*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9363*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*9373*/            /*Scope*/ 33, /*->9407*/
/*9374*/              OPC_CheckCondCode, ISD::SETGE,
/*9376*/              OPC_MoveParent,
/*9377*/              OPC_CheckType, MVT::i32,
/*9379*/              OPC_MoveParent,
/*9380*/              OPC_RecordChild1, // #2 = $T
/*9381*/              OPC_RecordChild2, // #3 = $F
/*9382*/              OPC_CheckType, MVT::f64,
/*9384*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9386*/              OPC_EmitConvertToTarget, 1,
/*9388*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9397*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*9407*/            /*Scope*/ 33, /*->9441*/
/*9408*/              OPC_CheckCondCode, ISD::SETUGE,
/*9410*/              OPC_MoveParent,
/*9411*/              OPC_CheckType, MVT::i32,
/*9413*/              OPC_MoveParent,
/*9414*/              OPC_RecordChild1, // #2 = $T
/*9415*/              OPC_RecordChild2, // #3 = $F
/*9416*/              OPC_CheckType, MVT::f64,
/*9418*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9420*/              OPC_EmitConvertToTarget, 1,
/*9422*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9431*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*9441*/            0, /*End of Scope*/
/*9442*/          /*Scope*/ 4|128,3/*388*/, /*->9832*/
/*9444*/            OPC_MoveChild, 2,
/*9446*/            OPC_Scope, 31, /*->9479*/ // 12 children in Scope
/*9448*/              OPC_CheckCondCode, ISD::SETGE,
/*9450*/              OPC_MoveParent,
/*9451*/              OPC_CheckType, MVT::i32,
/*9453*/              OPC_MoveParent,
/*9454*/              OPC_RecordChild1, // #2 = $T
/*9455*/              OPC_RecordChild2, // #3 = $F
/*9456*/              OPC_CheckType, MVT::f32,
/*9458*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9460*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9469*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*9479*/            /*Scope*/ 31, /*->9511*/
/*9480*/              OPC_CheckCondCode, ISD::SETUGE,
/*9482*/              OPC_MoveParent,
/*9483*/              OPC_CheckType, MVT::i32,
/*9485*/              OPC_MoveParent,
/*9486*/              OPC_RecordChild1, // #2 = $T
/*9487*/              OPC_RecordChild2, // #3 = $F
/*9488*/              OPC_CheckType, MVT::f32,
/*9490*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9492*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9501*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*9511*/            /*Scope*/ 31, /*->9543*/
/*9512*/              OPC_CheckCondCode, ISD::SETLE,
/*9514*/              OPC_MoveParent,
/*9515*/              OPC_CheckType, MVT::i32,
/*9517*/              OPC_MoveParent,
/*9518*/              OPC_RecordChild1, // #2 = $T
/*9519*/              OPC_RecordChild2, // #3 = $F
/*9520*/              OPC_CheckType, MVT::f32,
/*9522*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9524*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9533*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*9543*/            /*Scope*/ 31, /*->9575*/
/*9544*/              OPC_CheckCondCode, ISD::SETULE,
/*9546*/              OPC_MoveParent,
/*9547*/              OPC_CheckType, MVT::i32,
/*9549*/              OPC_MoveParent,
/*9550*/              OPC_RecordChild1, // #2 = $T
/*9551*/              OPC_RecordChild2, // #3 = $F
/*9552*/              OPC_CheckType, MVT::f32,
/*9554*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9556*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9565*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*9575*/            /*Scope*/ 31, /*->9607*/
/*9576*/              OPC_CheckCondCode, ISD::SETEQ,
/*9578*/              OPC_MoveParent,
/*9579*/              OPC_CheckType, MVT::i32,
/*9581*/              OPC_MoveParent,
/*9582*/              OPC_RecordChild1, // #2 = $T
/*9583*/              OPC_RecordChild2, // #3 = $F
/*9584*/              OPC_CheckType, MVT::f32,
/*9586*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9588*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9597*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*9607*/            /*Scope*/ 31, /*->9639*/
/*9608*/              OPC_CheckCondCode, ISD::SETNE,
/*9610*/              OPC_MoveParent,
/*9611*/              OPC_CheckType, MVT::i32,
/*9613*/              OPC_MoveParent,
/*9614*/              OPC_RecordChild1, // #2 = $T
/*9615*/              OPC_RecordChild2, // #3 = $F
/*9616*/              OPC_CheckType, MVT::f32,
/*9618*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9620*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9629*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*9639*/            /*Scope*/ 31, /*->9671*/
/*9640*/              OPC_CheckCondCode, ISD::SETGE,
/*9642*/              OPC_MoveParent,
/*9643*/              OPC_CheckType, MVT::i32,
/*9645*/              OPC_MoveParent,
/*9646*/              OPC_RecordChild1, // #2 = $T
/*9647*/              OPC_RecordChild2, // #3 = $F
/*9648*/              OPC_CheckType, MVT::f64,
/*9650*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9652*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9661*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*9671*/            /*Scope*/ 31, /*->9703*/
/*9672*/              OPC_CheckCondCode, ISD::SETUGE,
/*9674*/              OPC_MoveParent,
/*9675*/              OPC_CheckType, MVT::i32,
/*9677*/              OPC_MoveParent,
/*9678*/              OPC_RecordChild1, // #2 = $T
/*9679*/              OPC_RecordChild2, // #3 = $F
/*9680*/              OPC_CheckType, MVT::f64,
/*9682*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9684*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9693*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*9703*/            /*Scope*/ 31, /*->9735*/
/*9704*/              OPC_CheckCondCode, ISD::SETLE,
/*9706*/              OPC_MoveParent,
/*9707*/              OPC_CheckType, MVT::i32,
/*9709*/              OPC_MoveParent,
/*9710*/              OPC_RecordChild1, // #2 = $T
/*9711*/              OPC_RecordChild2, // #3 = $F
/*9712*/              OPC_CheckType, MVT::f64,
/*9714*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9716*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9725*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*9735*/            /*Scope*/ 31, /*->9767*/
/*9736*/              OPC_CheckCondCode, ISD::SETULE,
/*9738*/              OPC_MoveParent,
/*9739*/              OPC_CheckType, MVT::i32,
/*9741*/              OPC_MoveParent,
/*9742*/              OPC_RecordChild1, // #2 = $T
/*9743*/              OPC_RecordChild2, // #3 = $F
/*9744*/              OPC_CheckType, MVT::f64,
/*9746*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9748*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9757*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*9767*/            /*Scope*/ 31, /*->9799*/
/*9768*/              OPC_CheckCondCode, ISD::SETEQ,
/*9770*/              OPC_MoveParent,
/*9771*/              OPC_CheckType, MVT::i32,
/*9773*/              OPC_MoveParent,
/*9774*/              OPC_RecordChild1, // #2 = $T
/*9775*/              OPC_RecordChild2, // #3 = $F
/*9776*/              OPC_CheckType, MVT::f64,
/*9778*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9780*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9789*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*9799*/            /*Scope*/ 31, /*->9831*/
/*9800*/              OPC_CheckCondCode, ISD::SETNE,
/*9802*/              OPC_MoveParent,
/*9803*/              OPC_CheckType, MVT::i32,
/*9805*/              OPC_MoveParent,
/*9806*/              OPC_RecordChild1, // #2 = $T
/*9807*/              OPC_RecordChild2, // #3 = $F
/*9808*/              OPC_CheckType, MVT::f64,
/*9810*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9812*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9821*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*9831*/            0, /*End of Scope*/
/*9832*/          0, /*End of Scope*/
/*9833*/        0, /*End of Scope*/
/*9834*/      0, /*End of Scope*/
/*9835*/    /*Scope*/ 89, /*->9925*/
/*9836*/      OPC_RecordChild0, // #0 = $cond
/*9837*/      OPC_Scope, 50, /*->9889*/ // 2 children in Scope
/*9839*/        OPC_CheckChild0Type, MVT::i32,
/*9841*/        OPC_RecordChild1, // #1 = $T
/*9842*/        OPC_RecordChild2, // #2 = $F
/*9843*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->9858
/*9846*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9848*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->9888
/*9860*/          OPC_Scope, 12, /*->9874*/ // 2 children in Scope
/*9862*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9864*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
/*9874*/          /*Scope*/ 12, /*->9887*/
/*9875*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9877*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$cond, FGR64:f64:$F)
/*9887*/          0, /*End of Scope*/
                0, // EndSwitchType
/*9889*/      /*Scope*/ 34, /*->9924*/
/*9890*/        OPC_CheckChild0Type, MVT::i64,
/*9892*/        OPC_RecordChild1, // #1 = $T
/*9893*/        OPC_RecordChild2, // #2 = $F
/*9894*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->9909
/*9897*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9899*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPU64Regs:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->9923
/*9911*/          OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9913*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 CPU64Regs:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*9924*/      0, /*End of Scope*/
/*9925*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->9954
/*9929*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*9930*/    OPC_CaptureGlueInput,
/*9931*/    OPC_RecordChild1, // #1 = $amt1
/*9932*/    OPC_MoveChild, 1,
/*9934*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9937*/    OPC_MoveParent,
/*9938*/    OPC_RecordChild2, // #2 = $amt2
/*9939*/    OPC_MoveChild, 2,
/*9941*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9944*/    OPC_MoveParent,
/*9945*/    OPC_EmitMergeInputChains1_0,
/*9946*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->10010
/*9957*/    OPC_RecordChild0, // #0 = $rs
/*9958*/    OPC_RecordChild1, // #1 = $pos
/*9959*/    OPC_MoveChild, 1,
/*9961*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9964*/    OPC_MoveParent,
/*9965*/    OPC_RecordChild2, // #2 = $size
/*9966*/    OPC_MoveChild, 2,
/*9968*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9971*/    OPC_MoveParent,
/*9972*/    OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->9991
/*9975*/      OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*9977*/      OPC_EmitConvertToTarget, 1,
/*9979*/      OPC_EmitConvertToTarget, 2,
/*9981*/      OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (EXT:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size)
            /*SwitchType*/ 16,  MVT::i64,// ->10009
/*9993*/      OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*9995*/      OPC_EmitConvertToTarget, 1,
/*9997*/      OPC_EmitConvertToTarget, 2,
/*9999*/      OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (DEXT:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->10069
/*10013*/   OPC_RecordChild0, // #0 = $rs
/*10014*/   OPC_RecordChild1, // #1 = $pos
/*10015*/   OPC_MoveChild, 1,
/*10017*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10020*/   OPC_MoveParent,
/*10021*/   OPC_RecordChild2, // #2 = $size
/*10022*/   OPC_MoveChild, 2,
/*10024*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10027*/   OPC_MoveParent,
/*10028*/   OPC_RecordChild3, // #3 = $src
/*10029*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->10049
/*10032*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*10034*/     OPC_EmitConvertToTarget, 1,
/*10036*/     OPC_EmitConvertToTarget, 2,
/*10038*/     OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src) - Complexity = 9
              // Dst: (INS:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->10068
/*10051*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*10053*/     OPC_EmitConvertToTarget, 1,
/*10055*/     OPC_EmitConvertToTarget, 2,
/*10057*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 107|128,4/*619*/,  TARGET_VAL(ISD::ADD),// ->10692
/*10073*/   OPC_Scope, 110|128,1/*238*/, /*->10314*/ // 3 children in Scope
/*10076*/     OPC_RecordChild0, // #0 = $hi
/*10077*/     OPC_MoveChild, 1,
/*10079*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->10269
/*10084*/       OPC_RecordChild0, // #1 = $lo
/*10085*/       OPC_MoveChild, 0,
/*10087*/       OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10136
/*10091*/         OPC_MoveParent,
/*10092*/         OPC_MoveParent,
/*10093*/         OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->10122
/*10096*/           OPC_Scope, 11, /*->10109*/ // 2 children in Scope
/*10098*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10100*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*10109*/           /*Scope*/ 11, /*->10121*/
/*10110*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10112*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*10121*/           0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->10135
/*10124*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10126*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->10169
/*10139*/         OPC_MoveParent,
/*10140*/         OPC_MoveParent,
/*10141*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->10155
/*10144*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10146*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->10168
/*10157*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10159*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->10202
/*10172*/         OPC_MoveParent,
/*10173*/         OPC_MoveParent,
/*10174*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->10188
/*10177*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10179*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->10201
/*10190*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10192*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->10235
/*10205*/         OPC_MoveParent,
/*10206*/         OPC_MoveParent,
/*10207*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->10221
/*10210*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10212*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->10234
/*10223*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10225*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->10268
/*10238*/         OPC_MoveParent,
/*10239*/         OPC_MoveParent,
/*10240*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->10254
/*10243*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10245*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->10267
/*10256*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10258*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->10313
/*10272*/       OPC_RecordChild0, // #1 = $in
/*10273*/       OPC_MoveChild, 0,
/*10275*/       OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10294
/*10279*/         OPC_MoveParent,
/*10280*/         OPC_MoveParent,
/*10281*/         OPC_CheckType, MVT::i32,
/*10283*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10285*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->10312
/*10297*/         OPC_MoveParent,
/*10298*/         OPC_MoveParent,
/*10299*/         OPC_CheckType, MVT::i32,
/*10301*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10303*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*10314*/   /*Scope*/ 116|128,1/*244*/, /*->10560*/
/*10316*/     OPC_MoveChild, 0,
/*10318*/     OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->10513
/*10323*/       OPC_RecordChild0, // #0 = $lo
/*10324*/       OPC_MoveChild, 0,
/*10326*/       OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10376
/*10330*/         OPC_MoveParent,
/*10331*/         OPC_MoveParent,
/*10332*/         OPC_RecordChild1, // #1 = $hi
/*10333*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->10347
/*10336*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10338*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->10375
/*10349*/           OPC_Scope, 11, /*->10362*/ // 2 children in Scope
/*10351*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10353*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*10362*/           /*Scope*/ 11, /*->10374*/
/*10363*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10365*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*10374*/           0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->10410
/*10379*/         OPC_MoveParent,
/*10380*/         OPC_MoveParent,
/*10381*/         OPC_RecordChild1, // #1 = $hi
/*10382*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->10396
/*10385*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10387*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->10409
/*10398*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10400*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->10444
/*10413*/         OPC_MoveParent,
/*10414*/         OPC_MoveParent,
/*10415*/         OPC_RecordChild1, // #1 = $hi
/*10416*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->10430
/*10419*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10421*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->10443
/*10432*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->10478
/*10447*/         OPC_MoveParent,
/*10448*/         OPC_MoveParent,
/*10449*/         OPC_RecordChild1, // #1 = $hi
/*10450*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->10464
/*10453*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10455*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->10477
/*10466*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10468*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->10512
/*10481*/         OPC_MoveParent,
/*10482*/         OPC_MoveParent,
/*10483*/         OPC_RecordChild1, // #1 = $hi
/*10484*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->10498
/*10487*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10489*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->10511
/*10500*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10502*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->10559
/*10516*/       OPC_RecordChild0, // #0 = $in
/*10517*/       OPC_MoveChild, 0,
/*10519*/       OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10539
/*10523*/         OPC_MoveParent,
/*10524*/         OPC_MoveParent,
/*10525*/         OPC_RecordChild1, // #1 = $gp
/*10526*/         OPC_CheckType, MVT::i32,
/*10528*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10530*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->10558
/*10542*/         OPC_MoveParent,
/*10543*/         OPC_MoveParent,
/*10544*/         OPC_RecordChild1, // #1 = $gp
/*10545*/         OPC_CheckType, MVT::i32,
/*10547*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10549*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*10560*/   /*Scope*/ 1|128,1/*129*/, /*->10691*/
/*10562*/     OPC_RecordChild0, // #0 = $rs
/*10563*/     OPC_RecordChild1, // #1 = $imm16
/*10564*/     OPC_Scope, 81, /*->10647*/ // 3 children in Scope
/*10566*/       OPC_MoveChild, 1,
/*10568*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10571*/       OPC_Scope, 35, /*->10608*/ // 3 children in Scope
/*10573*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10575*/         OPC_MoveParent,
/*10576*/         OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->10592
/*10579*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10581*/           OPC_EmitConvertToTarget, 1,
/*10583*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 CPURegsOpnd:i32:$rs, (imm:i32):$imm16)
                  /*SwitchType*/ 13,  MVT::i64,// ->10607
/*10594*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10596*/           OPC_EmitConvertToTarget, 1,
/*10598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (DADDiu:i64 CPU64RegsOpnd:i64:$rs, (imm:i64):$imm16)
                  0, // EndSwitchType
/*10608*/       /*Scope*/ 18, /*->10627*/
/*10609*/         OPC_CheckPredicate, 29, // Predicate_immSExt8
/*10611*/         OPC_MoveParent,
/*10612*/         OPC_CheckType, MVT::i32,
/*10614*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10616*/         OPC_EmitConvertToTarget, 1,
/*10618*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImm16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImm16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm)
/*10627*/       /*Scope*/ 18, /*->10646*/
/*10628*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10630*/         OPC_MoveParent,
/*10631*/         OPC_CheckType, MVT::i32,
/*10633*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10635*/         OPC_EmitConvertToTarget, 1,
/*10637*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*10646*/       0, /*End of Scope*/
/*10647*/     /*Scope*/ 28, /*->10676*/
/*10648*/       OPC_CheckType, MVT::i32,
/*10650*/       OPC_Scope, 11, /*->10663*/ // 2 children in Scope
/*10652*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10654*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*10663*/       /*Scope*/ 11, /*->10675*/
/*10664*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10666*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*10675*/       0, /*End of Scope*/
/*10676*/     /*Scope*/ 13, /*->10690*/
/*10677*/       OPC_CheckType, MVT::i64,
/*10679*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10681*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*10690*/     0, /*End of Scope*/
/*10691*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(MipsISD::FPBrcond),// ->10745
/*10695*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*10696*/   OPC_CaptureGlueInput,
/*10697*/   OPC_MoveChild, 1,
/*10699*/   OPC_CheckType, MVT::i32,
/*10701*/   OPC_Scope, 20, /*->10723*/ // 2 children in Scope
/*10703*/     OPC_CheckInteger, 0, 
/*10705*/     OPC_MoveParent,
/*10706*/     OPC_RecordChild2, // #1 = $offset
/*10707*/     OPC_MoveChild, 2,
/*10709*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*10712*/     OPC_MoveParent,
/*10713*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10715*/     OPC_EmitMergeInputChains1_0,
/*10716*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1F (bb:Other):$offset)
/*10723*/   /*Scope*/ 20, /*->10744*/
/*10724*/     OPC_CheckInteger, 1, 
/*10726*/     OPC_MoveParent,
/*10727*/     OPC_RecordChild2, // #1 = $offset
/*10728*/     OPC_MoveChild, 2,
/*10730*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*10733*/     OPC_MoveParent,
/*10734*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10736*/     OPC_EmitMergeInputChains1_0,
/*10737*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1T (bb:Other):$offset)
/*10744*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::SUB),// ->10815
/*10748*/   OPC_Scope, 18, /*->10768*/ // 2 children in Scope
/*10750*/     OPC_MoveChild, 0,
/*10752*/     OPC_CheckInteger, 0, 
/*10754*/     OPC_MoveParent,
/*10755*/     OPC_RecordChild1, // #0 = $r
/*10756*/     OPC_CheckType, MVT::i32,
/*10758*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10760*/     OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*10768*/   /*Scope*/ 45, /*->10814*/
/*10769*/     OPC_RecordChild0, // #0 = $rs
/*10770*/     OPC_RecordChild1, // #1 = $rt
/*10771*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->10800
/*10774*/       OPC_Scope, 11, /*->10787*/ // 2 children in Scope
/*10776*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10778*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*10787*/       /*Scope*/ 11, /*->10799*/
/*10788*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10790*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*10799*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->10813
/*10802*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10804*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*10814*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,9/*1157*/,  TARGET_VAL(ISD::SETCC),// ->11976
/*10819*/   OPC_RecordChild0, // #0 = $lhs
/*10820*/   OPC_Scope, 16|128,6/*784*/, /*->11607*/ // 2 children in Scope
/*10823*/     OPC_CheckChild0Type, MVT::i32,
/*10825*/     OPC_Scope, 92, /*->10919*/ // 2 children in Scope
/*10827*/       OPC_MoveChild, 1,
/*10829*/       OPC_Scope, 24, /*->10855*/ // 2 children in Scope
/*10831*/         OPC_CheckInteger, 0, 
/*10833*/         OPC_MoveParent,
/*10834*/         OPC_MoveChild, 2,
/*10836*/         OPC_CheckCondCode, ISD::SETEQ,
/*10838*/         OPC_MoveParent,
/*10839*/         OPC_CheckType, MVT::i32,
/*10841*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10843*/         OPC_EmitInteger, MVT::i32, 1, 
/*10846*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                  // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*10855*/       /*Scope*/ 62, /*->10918*/
/*10856*/         OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*10867*/         OPC_MoveParent,
/*10868*/         OPC_MoveChild, 2,
/*10870*/         OPC_CheckCondCode, ISD::SETGT,
/*10872*/         OPC_MoveParent,
/*10873*/         OPC_CheckType, MVT::i32,
/*10875*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10877*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*10889*/         OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10898*/         OPC_EmitInteger, MVT::i32, 1, 
/*10901*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*10909*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*10918*/       0, /*End of Scope*/
/*10919*/     /*Scope*/ 45|128,5/*685*/, /*->11606*/
/*10921*/       OPC_RecordChild1, // #1 = $imm16
/*10922*/       OPC_Scope, 22|128,1/*150*/, /*->11075*/ // 2 children in Scope
/*10925*/         OPC_MoveChild, 1,
/*10927*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10930*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10932*/         OPC_MoveParent,
/*10933*/         OPC_MoveChild, 2,
/*10935*/         OPC_Scope, 18, /*->10955*/ // 6 children in Scope
/*10937*/           OPC_CheckCondCode, ISD::SETLT,
/*10939*/           OPC_MoveParent,
/*10940*/           OPC_CheckType, MVT::i32,
/*10942*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10944*/           OPC_EmitConvertToTarget, 1,
/*10946*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*10955*/         /*Scope*/ 18, /*->10974*/
/*10956*/           OPC_CheckCondCode, ISD::SETULT,
/*10958*/           OPC_MoveParent,
/*10959*/           OPC_CheckType, MVT::i32,
/*10961*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10963*/           OPC_EmitConvertToTarget, 1,
/*10965*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*10974*/         /*Scope*/ 18, /*->10993*/
/*10975*/           OPC_CheckCondCode, ISD::SETLT,
/*10977*/           OPC_MoveParent,
/*10978*/           OPC_CheckType, MVT::i32,
/*10980*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10982*/           OPC_EmitConvertToTarget, 1,
/*10984*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*10993*/         /*Scope*/ 18, /*->11012*/
/*10994*/           OPC_CheckCondCode, ISD::SETULT,
/*10996*/           OPC_MoveParent,
/*10997*/           OPC_CheckType, MVT::i32,
/*10999*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11001*/           OPC_EmitConvertToTarget, 1,
/*11003*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*11012*/         /*Scope*/ 30, /*->11043*/
/*11013*/           OPC_CheckCondCode, ISD::SETGE,
/*11015*/           OPC_MoveParent,
/*11016*/           OPC_CheckType, MVT::i32,
/*11018*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11020*/           OPC_EmitConvertToTarget, 1,
/*11022*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*11031*/           OPC_EmitInteger, MVT::i32, 1, 
/*11034*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*11043*/         /*Scope*/ 30, /*->11074*/
/*11044*/           OPC_CheckCondCode, ISD::SETUGE,
/*11046*/           OPC_MoveParent,
/*11047*/           OPC_CheckType, MVT::i32,
/*11049*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11051*/           OPC_EmitConvertToTarget, 1,
/*11053*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*11062*/           OPC_EmitInteger, MVT::i32, 1, 
/*11065*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*11074*/         0, /*End of Scope*/
/*11075*/       /*Scope*/ 16|128,4/*528*/, /*->11605*/
/*11077*/         OPC_MoveChild, 2,
/*11079*/         OPC_Scope, 16, /*->11097*/ // 20 children in Scope
/*11081*/           OPC_CheckCondCode, ISD::SETLT,
/*11083*/           OPC_MoveParent,
/*11084*/           OPC_CheckType, MVT::i32,
/*11086*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11088*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*11097*/         /*Scope*/ 16, /*->11114*/
/*11098*/           OPC_CheckCondCode, ISD::SETULT,
/*11100*/           OPC_MoveParent,
/*11101*/           OPC_CheckType, MVT::i32,
/*11103*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11105*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*11114*/         /*Scope*/ 16, /*->11131*/
/*11115*/           OPC_CheckCondCode, ISD::SETGT,
/*11117*/           OPC_MoveParent,
/*11118*/           OPC_CheckType, MVT::i32,
/*11120*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11122*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*11131*/         /*Scope*/ 16, /*->11148*/
/*11132*/           OPC_CheckCondCode, ISD::SETUGT,
/*11134*/           OPC_MoveParent,
/*11135*/           OPC_CheckType, MVT::i32,
/*11137*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11139*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*11148*/         /*Scope*/ 16, /*->11165*/
/*11149*/           OPC_CheckCondCode, ISD::SETGT,
/*11151*/           OPC_MoveParent,
/*11152*/           OPC_CheckType, MVT::i32,
/*11154*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11156*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*11165*/         /*Scope*/ 16, /*->11182*/
/*11166*/           OPC_CheckCondCode, ISD::SETLT,
/*11168*/           OPC_MoveParent,
/*11169*/           OPC_CheckType, MVT::i32,
/*11171*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11173*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*11182*/         /*Scope*/ 16, /*->11199*/
/*11183*/           OPC_CheckCondCode, ISD::SETUGT,
/*11185*/           OPC_MoveParent,
/*11186*/           OPC_CheckType, MVT::i32,
/*11188*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11190*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*11199*/         /*Scope*/ 16, /*->11216*/
/*11200*/           OPC_CheckCondCode, ISD::SETULT,
/*11202*/           OPC_MoveParent,
/*11203*/           OPC_CheckType, MVT::i32,
/*11205*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11207*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*11216*/         /*Scope*/ 28, /*->11245*/
/*11217*/           OPC_CheckCondCode, ISD::SETEQ,
/*11219*/           OPC_MoveParent,
/*11220*/           OPC_CheckType, MVT::i32,
/*11222*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11224*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11233*/           OPC_EmitInteger, MVT::i32, 1, 
/*11236*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*11245*/         /*Scope*/ 28, /*->11274*/
/*11246*/           OPC_CheckCondCode, ISD::SETNE,
/*11248*/           OPC_MoveParent,
/*11249*/           OPC_CheckType, MVT::i32,
/*11251*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11253*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*11256*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*11265*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*11274*/         /*Scope*/ 28, /*->11303*/
/*11275*/           OPC_CheckCondCode, ISD::SETLE,
/*11277*/           OPC_MoveParent,
/*11278*/           OPC_CheckType, MVT::i32,
/*11280*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11282*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*11291*/           OPC_EmitInteger, MVT::i32, 1, 
/*11294*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*11303*/         /*Scope*/ 28, /*->11332*/
/*11304*/           OPC_CheckCondCode, ISD::SETULE,
/*11306*/           OPC_MoveParent,
/*11307*/           OPC_CheckType, MVT::i32,
/*11309*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11311*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*11320*/           OPC_EmitInteger, MVT::i32, 1, 
/*11323*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*11332*/         /*Scope*/ 28, /*->11361*/
/*11333*/           OPC_CheckCondCode, ISD::SETGE,
/*11335*/           OPC_MoveParent,
/*11336*/           OPC_CheckType, MVT::i32,
/*11338*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11340*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11349*/           OPC_EmitInteger, MVT::i32, 1, 
/*11352*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*11361*/         /*Scope*/ 28, /*->11390*/
/*11362*/           OPC_CheckCondCode, ISD::SETUGE,
/*11364*/           OPC_MoveParent,
/*11365*/           OPC_CheckType, MVT::i32,
/*11367*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11369*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11378*/           OPC_EmitInteger, MVT::i32, 1, 
/*11381*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*11390*/         /*Scope*/ 28, /*->11419*/
/*11391*/           OPC_CheckCondCode, ISD::SETEQ,
/*11393*/           OPC_MoveParent,
/*11394*/           OPC_CheckType, MVT::i32,
/*11396*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11398*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11407*/           OPC_EmitInteger, MVT::i32, 1, 
/*11410*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*11419*/         /*Scope*/ 36, /*->11456*/
/*11420*/           OPC_CheckCondCode, ISD::SETGE,
/*11422*/           OPC_MoveParent,
/*11423*/           OPC_CheckType, MVT::i32,
/*11425*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11427*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11436*/           OPC_EmitInteger, MVT::i32, 1, 
/*11439*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*11447*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*11456*/         /*Scope*/ 36, /*->11493*/
/*11457*/           OPC_CheckCondCode, ISD::SETLE,
/*11459*/           OPC_MoveParent,
/*11460*/           OPC_CheckType, MVT::i32,
/*11462*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11464*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*11473*/           OPC_EmitInteger, MVT::i32, 1, 
/*11476*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*11484*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*11493*/         /*Scope*/ 36, /*->11530*/
/*11494*/           OPC_CheckCondCode, ISD::SETNE,
/*11496*/           OPC_MoveParent,
/*11497*/           OPC_CheckType, MVT::i32,
/*11499*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11501*/           OPC_EmitInteger, MVT::i32, 0, 
/*11504*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*11512*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11521*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*11530*/         /*Scope*/ 36, /*->11567*/
/*11531*/           OPC_CheckCondCode, ISD::SETUGE,
/*11533*/           OPC_MoveParent,
/*11534*/           OPC_CheckType, MVT::i32,
/*11536*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11538*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11547*/           OPC_EmitInteger, MVT::i32, 1, 
/*11550*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*11558*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*11567*/         /*Scope*/ 36, /*->11604*/
/*11568*/           OPC_CheckCondCode, ISD::SETULE,
/*11570*/           OPC_MoveParent,
/*11571*/           OPC_CheckType, MVT::i32,
/*11573*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11575*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*11584*/           OPC_EmitInteger, MVT::i32, 1, 
/*11587*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*11595*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*11604*/         0, /*End of Scope*/
/*11605*/       0, /*End of Scope*/
/*11606*/     0, /*End of Scope*/
/*11607*/   /*Scope*/ 110|128,2/*366*/, /*->11975*/
/*11609*/     OPC_CheckChild0Type, MVT::i64,
/*11611*/     OPC_RecordChild1, // #1 = $imm16
/*11612*/     OPC_Scope, 112, /*->11726*/ // 2 children in Scope
/*11614*/       OPC_MoveChild, 1,
/*11616*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11619*/       OPC_CheckPredicate, 28, // Predicate_immSExt16
/*11621*/       OPC_MoveParent,
/*11622*/       OPC_MoveChild, 2,
/*11624*/       OPC_Scope, 18, /*->11644*/ // 4 children in Scope
/*11626*/         OPC_CheckCondCode, ISD::SETLT,
/*11628*/         OPC_MoveParent,
/*11629*/         OPC_CheckType, MVT::i32,
/*11631*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11633*/         OPC_EmitConvertToTarget, 1,
/*11635*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                  // Dst: (SLTi64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*11644*/       /*Scope*/ 18, /*->11663*/
/*11645*/         OPC_CheckCondCode, ISD::SETULT,
/*11647*/         OPC_MoveParent,
/*11648*/         OPC_CheckType, MVT::i32,
/*11650*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11652*/         OPC_EmitConvertToTarget, 1,
/*11654*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                  // Dst: (SLTiu64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*11663*/       /*Scope*/ 30, /*->11694*/
/*11664*/         OPC_CheckCondCode, ISD::SETGE,
/*11666*/         OPC_MoveParent,
/*11667*/         OPC_CheckType, MVT::i32,
/*11669*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11671*/         OPC_EmitConvertToTarget, 1,
/*11673*/         OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*11682*/         OPC_EmitInteger, MVT::i32, 1, 
/*11685*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*11694*/       /*Scope*/ 30, /*->11725*/
/*11695*/         OPC_CheckCondCode, ISD::SETUGE,
/*11697*/         OPC_MoveParent,
/*11698*/         OPC_CheckType, MVT::i32,
/*11700*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11702*/         OPC_EmitConvertToTarget, 1,
/*11704*/         OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*11713*/         OPC_EmitInteger, MVT::i32, 1, 
/*11716*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*11725*/       0, /*End of Scope*/
/*11726*/     /*Scope*/ 118|128,1/*246*/, /*->11974*/
/*11728*/       OPC_MoveChild, 2,
/*11730*/       OPC_Scope, 16, /*->11748*/ // 10 children in Scope
/*11732*/         OPC_CheckCondCode, ISD::SETLT,
/*11734*/         OPC_MoveParent,
/*11735*/         OPC_CheckType, MVT::i32,
/*11737*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11739*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETLT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*11748*/       /*Scope*/ 16, /*->11765*/
/*11749*/         OPC_CheckCondCode, ISD::SETULT,
/*11751*/         OPC_MoveParent,
/*11752*/         OPC_CheckType, MVT::i32,
/*11754*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11756*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETULT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*11765*/       /*Scope*/ 16, /*->11782*/
/*11766*/         OPC_CheckCondCode, ISD::SETGT,
/*11768*/         OPC_MoveParent,
/*11769*/         OPC_CheckType, MVT::i32,
/*11771*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11773*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*11782*/       /*Scope*/ 16, /*->11799*/
/*11783*/         OPC_CheckCondCode, ISD::SETUGT,
/*11785*/         OPC_MoveParent,
/*11786*/         OPC_CheckType, MVT::i32,
/*11788*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11790*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*11799*/       /*Scope*/ 28, /*->11828*/
/*11800*/         OPC_CheckCondCode, ISD::SETEQ,
/*11802*/         OPC_MoveParent,
/*11803*/         OPC_CheckType, MVT::i32,
/*11805*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11807*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*11816*/         OPC_EmitInteger, MVT::i64, 1, 
/*11819*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (SLTiu64:i32 (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i64)
/*11828*/       /*Scope*/ 28, /*->11857*/
/*11829*/         OPC_CheckCondCode, ISD::SETNE,
/*11831*/         OPC_MoveParent,
/*11832*/         OPC_CheckType, MVT::i32,
/*11834*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11836*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*11839*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*11848*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs))
/*11857*/       /*Scope*/ 28, /*->11886*/
/*11858*/         OPC_CheckCondCode, ISD::SETLE,
/*11860*/         OPC_MoveParent,
/*11861*/         OPC_CheckType, MVT::i32,
/*11863*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11865*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*11874*/         OPC_EmitInteger, MVT::i32, 1, 
/*11877*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*11886*/       /*Scope*/ 28, /*->11915*/
/*11887*/         OPC_CheckCondCode, ISD::SETULE,
/*11889*/         OPC_MoveParent,
/*11890*/         OPC_CheckType, MVT::i32,
/*11892*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11894*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*11903*/         OPC_EmitInteger, MVT::i32, 1, 
/*11906*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*11915*/       /*Scope*/ 28, /*->11944*/
/*11916*/         OPC_CheckCondCode, ISD::SETGE,
/*11918*/         OPC_MoveParent,
/*11919*/         OPC_CheckType, MVT::i32,
/*11921*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11923*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11932*/         OPC_EmitInteger, MVT::i32, 1, 
/*11935*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*11944*/       /*Scope*/ 28, /*->11973*/
/*11945*/         OPC_CheckCondCode, ISD::SETUGE,
/*11947*/         OPC_MoveParent,
/*11948*/         OPC_CheckType, MVT::i32,
/*11950*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11952*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*11961*/         OPC_EmitInteger, MVT::i32, 1, 
/*11964*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*11973*/       0, /*End of Scope*/
/*11974*/     0, /*End of Scope*/
/*11975*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->12073
/*11979*/   OPC_RecordChild0, // #0 = $rs
/*11980*/   OPC_RecordChild1, // #1 = $imm16
/*11981*/   OPC_Scope, 46, /*->12029*/ // 3 children in Scope
/*11983*/     OPC_MoveChild, 1,
/*11985*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11988*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*11990*/     OPC_MoveParent,
/*11991*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->12010
/*11994*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11996*/       OPC_EmitConvertToTarget, 1,
/*11998*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*12001*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->12028
/*12012*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12014*/       OPC_EmitConvertToTarget, 1,
/*12016*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*12019*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DANDi), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (DANDi:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*12029*/   /*Scope*/ 28, /*->12058*/
/*12030*/     OPC_CheckType, MVT::i32,
/*12032*/     OPC_Scope, 11, /*->12045*/ // 2 children in Scope
/*12034*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12036*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12045*/     /*Scope*/ 11, /*->12057*/
/*12046*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12048*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12057*/     0, /*End of Scope*/
/*12058*/   /*Scope*/ 13, /*->12072*/
/*12059*/     OPC_CheckType, MVT::i64,
/*12061*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12063*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*12072*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->12170
/*12076*/   OPC_RecordChild0, // #0 = $rs
/*12077*/   OPC_RecordChild1, // #1 = $imm16
/*12078*/   OPC_Scope, 46, /*->12126*/ // 3 children in Scope
/*12080*/     OPC_MoveChild, 1,
/*12082*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12085*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*12087*/     OPC_MoveParent,
/*12088*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->12107
/*12091*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12093*/       OPC_EmitConvertToTarget, 1,
/*12095*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*12098*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->12125
/*12109*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12111*/       OPC_EmitConvertToTarget, 1,
/*12113*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*12116*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*12126*/   /*Scope*/ 28, /*->12155*/
/*12127*/     OPC_CheckType, MVT::i32,
/*12129*/     OPC_Scope, 11, /*->12142*/ // 2 children in Scope
/*12131*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12133*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12142*/     /*Scope*/ 11, /*->12154*/
/*12143*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12145*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12154*/     0, /*End of Scope*/
/*12155*/   /*Scope*/ 13, /*->12169*/
/*12156*/     OPC_CheckType, MVT::i64,
/*12158*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12160*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*12169*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->12290
/*12173*/   OPC_RecordChild0, // #0 = $rt
/*12174*/   OPC_RecordChild1, // #1 = $shamt
/*12175*/   OPC_Scope, 66, /*->12243*/ // 2 children in Scope
/*12177*/     OPC_MoveChild, 1,
/*12179*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12182*/     OPC_CheckType, MVT::i32,
/*12184*/     OPC_Scope, 18, /*->12204*/ // 3 children in Scope
/*12186*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12188*/       OPC_MoveParent,
/*12189*/       OPC_CheckType, MVT::i32,
/*12191*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12193*/       OPC_EmitConvertToTarget, 1,
/*12195*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*12204*/     /*Scope*/ 18, /*->12223*/
/*12205*/       OPC_CheckPredicate, 30, // Predicate_immZExt6
/*12207*/       OPC_MoveParent,
/*12208*/       OPC_CheckType, MVT::i64,
/*12210*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12212*/       OPC_EmitConvertToTarget, 1,
/*12214*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*12223*/     /*Scope*/ 18, /*->12242*/
/*12224*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12226*/       OPC_MoveParent,
/*12227*/       OPC_CheckType, MVT::i32,
/*12229*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12231*/       OPC_EmitConvertToTarget, 1,
/*12233*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*12242*/     0, /*End of Scope*/
/*12243*/   /*Scope*/ 45, /*->12289*/
/*12244*/     OPC_CheckChild1Type, MVT::i32,
/*12246*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->12275
/*12249*/       OPC_Scope, 11, /*->12262*/ // 2 children in Scope
/*12251*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12253*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (shl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12262*/       /*Scope*/ 11, /*->12274*/
/*12263*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12265*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*12274*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12288
/*12277*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12279*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*12289*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->12410
/*12293*/   OPC_RecordChild0, // #0 = $rt
/*12294*/   OPC_RecordChild1, // #1 = $shamt
/*12295*/   OPC_Scope, 66, /*->12363*/ // 2 children in Scope
/*12297*/     OPC_MoveChild, 1,
/*12299*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12302*/     OPC_CheckType, MVT::i32,
/*12304*/     OPC_Scope, 18, /*->12324*/ // 3 children in Scope
/*12306*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12308*/       OPC_MoveParent,
/*12309*/       OPC_CheckType, MVT::i32,
/*12311*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12313*/       OPC_EmitConvertToTarget, 1,
/*12315*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*12324*/     /*Scope*/ 18, /*->12343*/
/*12325*/       OPC_CheckPredicate, 30, // Predicate_immZExt6
/*12327*/       OPC_MoveParent,
/*12328*/       OPC_CheckType, MVT::i64,
/*12330*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12332*/       OPC_EmitConvertToTarget, 1,
/*12334*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*12343*/     /*Scope*/ 18, /*->12362*/
/*12344*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12346*/       OPC_MoveParent,
/*12347*/       OPC_CheckType, MVT::i32,
/*12349*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12351*/       OPC_EmitConvertToTarget, 1,
/*12353*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*12362*/     0, /*End of Scope*/
/*12363*/   /*Scope*/ 45, /*->12409*/
/*12364*/     OPC_CheckChild1Type, MVT::i32,
/*12366*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->12395
/*12369*/       OPC_Scope, 11, /*->12382*/ // 2 children in Scope
/*12371*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12373*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (srl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12382*/       /*Scope*/ 11, /*->12394*/
/*12383*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12385*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*12394*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12408
/*12397*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12399*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*12409*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->12530
/*12413*/   OPC_RecordChild0, // #0 = $rt
/*12414*/   OPC_RecordChild1, // #1 = $shamt
/*12415*/   OPC_Scope, 66, /*->12483*/ // 2 children in Scope
/*12417*/     OPC_MoveChild, 1,
/*12419*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12422*/     OPC_CheckType, MVT::i32,
/*12424*/     OPC_Scope, 18, /*->12444*/ // 3 children in Scope
/*12426*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12428*/       OPC_MoveParent,
/*12429*/       OPC_CheckType, MVT::i32,
/*12431*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12433*/       OPC_EmitConvertToTarget, 1,
/*12435*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*12444*/     /*Scope*/ 18, /*->12463*/
/*12445*/       OPC_CheckPredicate, 30, // Predicate_immZExt6
/*12447*/       OPC_MoveParent,
/*12448*/       OPC_CheckType, MVT::i64,
/*12450*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12452*/       OPC_EmitConvertToTarget, 1,
/*12454*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*12463*/     /*Scope*/ 18, /*->12482*/
/*12464*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12466*/       OPC_MoveParent,
/*12467*/       OPC_CheckType, MVT::i32,
/*12469*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12471*/       OPC_EmitConvertToTarget, 1,
/*12473*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*12482*/     0, /*End of Scope*/
/*12483*/   /*Scope*/ 45, /*->12529*/
/*12484*/     OPC_CheckChild1Type, MVT::i32,
/*12486*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->12515
/*12489*/       OPC_Scope, 11, /*->12502*/ // 2 children in Scope
/*12491*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12493*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sra:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12502*/       /*Scope*/ 11, /*->12514*/
/*12503*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12505*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*12514*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12528
/*12517*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12519*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*12529*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->12616
/*12533*/   OPC_RecordChild0, // #0 = $rt
/*12534*/   OPC_RecordChild1, // #1 = $shamt
/*12535*/   OPC_Scope, 47, /*->12584*/ // 2 children in Scope
/*12537*/     OPC_MoveChild, 1,
/*12539*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12542*/     OPC_CheckType, MVT::i32,
/*12544*/     OPC_Scope, 18, /*->12564*/ // 2 children in Scope
/*12546*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12548*/       OPC_MoveParent,
/*12549*/       OPC_CheckType, MVT::i32,
/*12551*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*12553*/       OPC_EmitConvertToTarget, 1,
/*12555*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*12564*/     /*Scope*/ 18, /*->12583*/
/*12565*/       OPC_CheckPredicate, 30, // Predicate_immZExt6
/*12567*/       OPC_MoveParent,
/*12568*/       OPC_CheckType, MVT::i64,
/*12570*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*12572*/       OPC_EmitConvertToTarget, 1,
/*12574*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*12583*/     0, /*End of Scope*/
/*12584*/   /*Scope*/ 30, /*->12615*/
/*12585*/     OPC_CheckChild1Type, MVT::i32,
/*12587*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12601
/*12590*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*12592*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->12614
/*12603*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*12605*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*12615*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 74,  TARGET_VAL(ISD::ADDC),// ->12693
/*12619*/   OPC_RecordChild0, // #0 = $src
/*12620*/   OPC_RecordChild1, // #1 = $imm
/*12621*/   OPC_Scope, 40, /*->12663*/ // 2 children in Scope
/*12623*/     OPC_MoveChild, 1,
/*12625*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12628*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12630*/     OPC_MoveParent,
/*12631*/     OPC_CheckType, MVT::i32,
/*12633*/     OPC_Scope, 13, /*->12648*/ // 2 children in Scope
/*12635*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12637*/       OPC_EmitConvertToTarget, 1,
/*12639*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*12648*/     /*Scope*/ 13, /*->12662*/
/*12649*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12651*/       OPC_EmitConvertToTarget, 1,
/*12653*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*12662*/     0, /*End of Scope*/
/*12663*/   /*Scope*/ 28, /*->12692*/
/*12664*/     OPC_CheckType, MVT::i32,
/*12666*/     OPC_Scope, 11, /*->12679*/ // 2 children in Scope
/*12668*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12670*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*12679*/     /*Scope*/ 11, /*->12691*/
/*12680*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12682*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*12691*/     0, /*End of Scope*/
/*12692*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTP),// ->12743
/*12696*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*12697*/   OPC_CaptureGlueInput,
/*12698*/   OPC_RecordChild1, // #1 = $shift
/*12699*/   OPC_Scope, 25, /*->12726*/ // 2 children in Scope
/*12701*/     OPC_MoveChild, 1,
/*12703*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12706*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12708*/     OPC_MoveParent,
/*12709*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12711*/     OPC_EmitMergeInputChains1_0,
/*12712*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12715*/     OPC_EmitConvertToTarget, 1,
/*12717*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTP:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*12726*/   /*Scope*/ 15, /*->12742*/
/*12727*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12729*/     OPC_EmitMergeInputChains1_0,
/*12730*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12733*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTPV:i32 AC0:i64, CPURegs:i32:$rs)
/*12742*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTPDP),// ->12793
/*12746*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*12747*/   OPC_CaptureGlueInput,
/*12748*/   OPC_RecordChild1, // #1 = $shift
/*12749*/   OPC_Scope, 25, /*->12776*/ // 2 children in Scope
/*12751*/     OPC_MoveChild, 1,
/*12753*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12756*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12758*/     OPC_MoveParent,
/*12759*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12761*/     OPC_EmitMergeInputChains1_0,
/*12762*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12765*/     OPC_EmitConvertToTarget, 1,
/*12767*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTPDP:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*12776*/   /*Scope*/ 15, /*->12792*/
/*12777*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12779*/     OPC_EmitMergeInputChains1_0,
/*12780*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12783*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTPDPV:i32 AC0:i64, CPURegs:i32:$rs)
/*12792*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_W),// ->12843
/*12796*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*12797*/   OPC_CaptureGlueInput,
/*12798*/   OPC_RecordChild1, // #1 = $shift
/*12799*/   OPC_Scope, 25, /*->12826*/ // 2 children in Scope
/*12801*/     OPC_MoveChild, 1,
/*12803*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12806*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12808*/     OPC_MoveParent,
/*12809*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12811*/     OPC_EmitMergeInputChains1_0,
/*12812*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12815*/     OPC_EmitConvertToTarget, 1,
/*12817*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_W:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*12826*/   /*Scope*/ 15, /*->12842*/
/*12827*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12829*/     OPC_EmitMergeInputChains1_0,
/*12830*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12833*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_W:i32 AC0:i64, CPURegs:i32:$rs)
/*12842*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_R_W),// ->12893
/*12846*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*12847*/   OPC_CaptureGlueInput,
/*12848*/   OPC_RecordChild1, // #1 = $shift
/*12849*/   OPC_Scope, 25, /*->12876*/ // 2 children in Scope
/*12851*/     OPC_MoveChild, 1,
/*12853*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12856*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12858*/     OPC_MoveParent,
/*12859*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12861*/     OPC_EmitMergeInputChains1_0,
/*12862*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12865*/     OPC_EmitConvertToTarget, 1,
/*12867*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_R_W:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*12876*/   /*Scope*/ 15, /*->12892*/
/*12877*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12879*/     OPC_EmitMergeInputChains1_0,
/*12880*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12883*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 AC0:i64, CPURegs:i32:$rs)
/*12892*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->12943
/*12896*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*12897*/   OPC_CaptureGlueInput,
/*12898*/   OPC_RecordChild1, // #1 = $shift
/*12899*/   OPC_Scope, 25, /*->12926*/ // 2 children in Scope
/*12901*/     OPC_MoveChild, 1,
/*12903*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12906*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12908*/     OPC_MoveParent,
/*12909*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12911*/     OPC_EmitMergeInputChains1_0,
/*12912*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12915*/     OPC_EmitConvertToTarget, 1,
/*12917*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*12926*/   /*Scope*/ 15, /*->12942*/
/*12927*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12929*/     OPC_EmitMergeInputChains1_0,
/*12930*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12933*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 AC0:i64, CPURegs:i32:$rs)
/*12942*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_S_H),// ->12993
/*12946*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*12947*/   OPC_CaptureGlueInput,
/*12948*/   OPC_RecordChild1, // #1 = $shift
/*12949*/   OPC_Scope, 25, /*->12976*/ // 2 children in Scope
/*12951*/     OPC_MoveChild, 1,
/*12953*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12956*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*12958*/     OPC_MoveParent,
/*12959*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12961*/     OPC_EmitMergeInputChains1_0,
/*12962*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12965*/     OPC_EmitConvertToTarget, 1,
/*12967*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_S_H:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*12976*/   /*Scope*/ 15, /*->12992*/
/*12977*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*12979*/     OPC_EmitMergeInputChains1_0,
/*12980*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*12983*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 AC0:i64, CPURegs:i32:$rs)
/*12992*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(MipsISD::Hi),// ->13234
/*12997*/   OPC_RecordChild0, // #0 = $in
/*12998*/   OPC_MoveChild, 0,
/*13000*/   OPC_SwitchOpcode /*6 cases */, 53,  TARGET_VAL(ISD::TargetGlobalAddress),// ->13057
/*13004*/     OPC_MoveParent,
/*13005*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->13044
/*13008*/       OPC_Scope, 10, /*->13020*/ // 2 children in Scope
/*13010*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13012*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaladdr:i32):$in)
/*13020*/       /*Scope*/ 22, /*->13043*/
/*13021*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13023*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*13031*/         OPC_EmitInteger, MVT::i32, 16, 
/*13034*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaladdr:i32):$in), 16:i32)
/*13043*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->13056
/*13046*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13048*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->13087
/*13060*/     OPC_MoveParent,
/*13061*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->13074
/*13064*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13066*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->13086
/*13076*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13078*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetJumpTable),// ->13117
/*13090*/     OPC_MoveParent,
/*13091*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->13104
/*13094*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13096*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->13116
/*13106*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13108*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->13147
/*13120*/     OPC_MoveParent,
/*13121*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->13134
/*13124*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13126*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->13146
/*13136*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13138*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->13203
/*13150*/     OPC_MoveParent,
/*13151*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->13190
/*13154*/       OPC_Scope, 10, /*->13166*/ // 2 children in Scope
/*13156*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13158*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*13166*/       /*Scope*/ 22, /*->13189*/
/*13167*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13169*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*13177*/         OPC_EmitInteger, MVT::i32, 16, 
/*13180*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*13189*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->13202
/*13192*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13194*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->13233
/*13206*/     OPC_MoveParent,
/*13207*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->13220
/*13210*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13212*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->13232
/*13222*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13224*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->13471
/*13238*/   OPC_RecordChild0, // #0 = $in
/*13239*/   OPC_MoveChild, 0,
/*13241*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->13280
/*13245*/     OPC_MoveParent,
/*13246*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->13263
/*13249*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13251*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13254*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->13279
/*13265*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13267*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13270*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->13318
/*13283*/     OPC_MoveParent,
/*13284*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->13301
/*13287*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13289*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13292*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->13317
/*13303*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13305*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13308*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->13356
/*13321*/     OPC_MoveParent,
/*13322*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->13339
/*13325*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13327*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13330*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->13355
/*13341*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13343*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13346*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->13394
/*13359*/     OPC_MoveParent,
/*13360*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->13377
/*13363*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13365*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13368*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->13393
/*13379*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13381*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13384*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->13432
/*13397*/     OPC_MoveParent,
/*13398*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->13415
/*13401*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13403*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13406*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->13431
/*13417*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13419*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13422*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->13470
/*13435*/     OPC_MoveParent,
/*13436*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->13453
/*13439*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13441*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13444*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->13469
/*13455*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13457*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13460*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->13703
/*13475*/   OPC_RecordChild0, // #0 = $gp
/*13476*/   OPC_RecordChild1, // #1 = $in
/*13477*/   OPC_MoveChild, 1,
/*13479*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->13527
/*13483*/     OPC_MoveParent,
/*13484*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->13513
/*13487*/       OPC_Scope, 11, /*->13500*/ // 2 children in Scope
/*13489*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13491*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*13500*/       /*Scope*/ 11, /*->13512*/
/*13501*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13503*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*13512*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->13526
/*13515*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13517*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->13559
/*13530*/     OPC_MoveParent,
/*13531*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->13545
/*13534*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13536*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->13558
/*13547*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13549*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->13591
/*13562*/     OPC_MoveParent,
/*13563*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->13577
/*13566*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13568*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->13590
/*13579*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13581*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->13623
/*13594*/     OPC_MoveParent,
/*13595*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->13609
/*13598*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13600*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->13622
/*13611*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13613*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->13655
/*13626*/     OPC_MoveParent,
/*13627*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->13641
/*13630*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13632*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->13654
/*13643*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13645*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->13702
/*13658*/     OPC_MoveParent,
/*13659*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->13688
/*13662*/       OPC_Scope, 11, /*->13675*/ // 2 children in Scope
/*13664*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13666*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*13675*/       /*Scope*/ 11, /*->13687*/
/*13676*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13678*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*13687*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->13701
/*13690*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13692*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->13727
/*13706*/   OPC_RecordChild0, // #0 = $src
/*13707*/   OPC_RecordChild1, // #1 = $n
/*13708*/   OPC_MoveChild, 1,
/*13710*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13713*/   OPC_MoveParent,
/*13714*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13716*/   OPC_EmitConvertToTarget, 1,
/*13718*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->13920
/*13731*/   OPC_RecordNode,   // #0 = $in
/*13732*/   OPC_CheckType, MVT::i32,
/*13734*/   OPC_Scope, 18, /*->13754*/ // 6 children in Scope
/*13736*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13738*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13740*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13743*/     OPC_EmitConvertToTarget, 0,
/*13745*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*13754*/   /*Scope*/ 18, /*->13773*/
/*13755*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13757*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13759*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13762*/     OPC_EmitConvertToTarget, 0,
/*13764*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*13773*/   /*Scope*/ 17, /*->13791*/
/*13774*/     OPC_CheckPredicate, 31, // Predicate_immLow16Zero
/*13776*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13778*/     OPC_EmitConvertToTarget, 0,
/*13780*/     OPC_EmitNodeXForm, 1, 1, // HI16
/*13783*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*13791*/   /*Scope*/ 17, /*->13809*/
/*13792*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13794*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13796*/     OPC_EmitConvertToTarget, 0,
/*13798*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*13801*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*13809*/   /*Scope*/ 26, /*->13836*/
/*13810*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13812*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13814*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13817*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*13825*/     OPC_EmitConvertToTarget, 0,
/*13827*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*13836*/   /*Scope*/ 82, /*->13919*/
/*13837*/     OPC_Scope, 29, /*->13868*/ // 2 children in Scope
/*13839*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13841*/       OPC_EmitConvertToTarget, 0,
/*13843*/       OPC_EmitNodeXForm, 1, 1, // HI16
/*13846*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13854*/       OPC_EmitConvertToTarget, 0,
/*13856*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*13859*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*13868*/     /*Scope*/ 49, /*->13918*/
/*13869*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13871*/       OPC_EmitConvertToTarget, 0,
/*13873*/       OPC_EmitNodeXForm, 1, 1, // HI16
/*13876*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13884*/       OPC_EmitInteger, MVT::i32, 16, 
/*13887*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*13896*/       OPC_EmitConvertToTarget, 0,
/*13898*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*13901*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*13909*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*13918*/     0, /*End of Scope*/
/*13919*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->14071
/*13924*/   OPC_RecordMemRef,
/*13925*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*13926*/   OPC_RecordChild1, // #1 = $ptr
/*13927*/   OPC_Scope, 70, /*->13999*/ // 2 children in Scope
/*13929*/     OPC_CheckChild1Type, MVT::i32,
/*13931*/     OPC_RecordChild2, // #2 = $incr
/*13932*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13982
/*13935*/       OPC_Scope, 14, /*->13951*/ // 3 children in Scope
/*13937*/         OPC_CheckPredicate, 32, // Predicate_atomic_load_add_8
/*13939*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13941*/         OPC_EmitMergeInputChains1_0,
/*13942*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13951*/       /*Scope*/ 14, /*->13966*/
/*13952*/         OPC_CheckPredicate, 33, // Predicate_atomic_load_add_16
/*13954*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13956*/         OPC_EmitMergeInputChains1_0,
/*13957*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13966*/       /*Scope*/ 14, /*->13981*/
/*13967*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_32
/*13969*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13971*/         OPC_EmitMergeInputChains1_0,
/*13972*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13981*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13998
/*13984*/       OPC_CheckPredicate, 35, // Predicate_atomic_load_add_64
/*13986*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13988*/       OPC_EmitMergeInputChains1_0,
/*13989*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13999*/   /*Scope*/ 70, /*->14070*/
/*14000*/     OPC_CheckChild1Type, MVT::i64,
/*14002*/     OPC_RecordChild2, // #2 = $incr
/*14003*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14053
/*14006*/       OPC_Scope, 14, /*->14022*/ // 3 children in Scope
/*14008*/         OPC_CheckPredicate, 32, // Predicate_atomic_load_add_8
/*14010*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14012*/         OPC_EmitMergeInputChains1_0,
/*14013*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14022*/       /*Scope*/ 14, /*->14037*/
/*14023*/         OPC_CheckPredicate, 33, // Predicate_atomic_load_add_16
/*14025*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14027*/         OPC_EmitMergeInputChains1_0,
/*14028*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14037*/       /*Scope*/ 14, /*->14052*/
/*14038*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_32
/*14040*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14042*/         OPC_EmitMergeInputChains1_0,
/*14043*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14052*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14069
/*14055*/       OPC_CheckPredicate, 35, // Predicate_atomic_load_add_64
/*14057*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14059*/       OPC_EmitMergeInputChains1_0,
/*14060*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14070*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->14222
/*14075*/   OPC_RecordMemRef,
/*14076*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*14077*/   OPC_RecordChild1, // #1 = $ptr
/*14078*/   OPC_Scope, 70, /*->14150*/ // 2 children in Scope
/*14080*/     OPC_CheckChild1Type, MVT::i32,
/*14082*/     OPC_RecordChild2, // #2 = $incr
/*14083*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14133
/*14086*/       OPC_Scope, 14, /*->14102*/ // 3 children in Scope
/*14088*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_8
/*14090*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14092*/         OPC_EmitMergeInputChains1_0,
/*14093*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14102*/       /*Scope*/ 14, /*->14117*/
/*14103*/         OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_16
/*14105*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14107*/         OPC_EmitMergeInputChains1_0,
/*14108*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14117*/       /*Scope*/ 14, /*->14132*/
/*14118*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_32
/*14120*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14122*/         OPC_EmitMergeInputChains1_0,
/*14123*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14132*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14149
/*14135*/       OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_64
/*14137*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14139*/       OPC_EmitMergeInputChains1_0,
/*14140*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14150*/   /*Scope*/ 70, /*->14221*/
/*14151*/     OPC_CheckChild1Type, MVT::i64,
/*14153*/     OPC_RecordChild2, // #2 = $incr
/*14154*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14204
/*14157*/       OPC_Scope, 14, /*->14173*/ // 3 children in Scope
/*14159*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_8
/*14161*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14163*/         OPC_EmitMergeInputChains1_0,
/*14164*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14173*/       /*Scope*/ 14, /*->14188*/
/*14174*/         OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_16
/*14176*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14178*/         OPC_EmitMergeInputChains1_0,
/*14179*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14188*/       /*Scope*/ 14, /*->14203*/
/*14189*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_32
/*14191*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14193*/         OPC_EmitMergeInputChains1_0,
/*14194*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14203*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14220
/*14206*/       OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_64
/*14208*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14210*/       OPC_EmitMergeInputChains1_0,
/*14211*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14221*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->14373
/*14226*/   OPC_RecordMemRef,
/*14227*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*14228*/   OPC_RecordChild1, // #1 = $ptr
/*14229*/   OPC_Scope, 70, /*->14301*/ // 2 children in Scope
/*14231*/     OPC_CheckChild1Type, MVT::i32,
/*14233*/     OPC_RecordChild2, // #2 = $incr
/*14234*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14284
/*14237*/       OPC_Scope, 14, /*->14253*/ // 3 children in Scope
/*14239*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_and_8
/*14241*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14243*/         OPC_EmitMergeInputChains1_0,
/*14244*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14253*/       /*Scope*/ 14, /*->14268*/
/*14254*/         OPC_CheckPredicate, 41, // Predicate_atomic_load_and_16
/*14256*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14258*/         OPC_EmitMergeInputChains1_0,
/*14259*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14268*/       /*Scope*/ 14, /*->14283*/
/*14269*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_32
/*14271*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14273*/         OPC_EmitMergeInputChains1_0,
/*14274*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14283*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14300
/*14286*/       OPC_CheckPredicate, 43, // Predicate_atomic_load_and_64
/*14288*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14290*/       OPC_EmitMergeInputChains1_0,
/*14291*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14301*/   /*Scope*/ 70, /*->14372*/
/*14302*/     OPC_CheckChild1Type, MVT::i64,
/*14304*/     OPC_RecordChild2, // #2 = $incr
/*14305*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14355
/*14308*/       OPC_Scope, 14, /*->14324*/ // 3 children in Scope
/*14310*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_and_8
/*14312*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14314*/         OPC_EmitMergeInputChains1_0,
/*14315*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14324*/       /*Scope*/ 14, /*->14339*/
/*14325*/         OPC_CheckPredicate, 41, // Predicate_atomic_load_and_16
/*14327*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14329*/         OPC_EmitMergeInputChains1_0,
/*14330*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14339*/       /*Scope*/ 14, /*->14354*/
/*14340*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_32
/*14342*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14344*/         OPC_EmitMergeInputChains1_0,
/*14345*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14354*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14371
/*14357*/       OPC_CheckPredicate, 43, // Predicate_atomic_load_and_64
/*14359*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14361*/       OPC_EmitMergeInputChains1_0,
/*14362*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14372*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->14524
/*14377*/   OPC_RecordMemRef,
/*14378*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*14379*/   OPC_RecordChild1, // #1 = $ptr
/*14380*/   OPC_Scope, 70, /*->14452*/ // 2 children in Scope
/*14382*/     OPC_CheckChild1Type, MVT::i32,
/*14384*/     OPC_RecordChild2, // #2 = $incr
/*14385*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14435
/*14388*/       OPC_Scope, 14, /*->14404*/ // 3 children in Scope
/*14390*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_or_8
/*14392*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14394*/         OPC_EmitMergeInputChains1_0,
/*14395*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14404*/       /*Scope*/ 14, /*->14419*/
/*14405*/         OPC_CheckPredicate, 45, // Predicate_atomic_load_or_16
/*14407*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14409*/         OPC_EmitMergeInputChains1_0,
/*14410*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14419*/       /*Scope*/ 14, /*->14434*/
/*14420*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_32
/*14422*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14424*/         OPC_EmitMergeInputChains1_0,
/*14425*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14434*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14451
/*14437*/       OPC_CheckPredicate, 47, // Predicate_atomic_load_or_64
/*14439*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14441*/       OPC_EmitMergeInputChains1_0,
/*14442*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14452*/   /*Scope*/ 70, /*->14523*/
/*14453*/     OPC_CheckChild1Type, MVT::i64,
/*14455*/     OPC_RecordChild2, // #2 = $incr
/*14456*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14506
/*14459*/       OPC_Scope, 14, /*->14475*/ // 3 children in Scope
/*14461*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_or_8
/*14463*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14465*/         OPC_EmitMergeInputChains1_0,
/*14466*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14475*/       /*Scope*/ 14, /*->14490*/
/*14476*/         OPC_CheckPredicate, 45, // Predicate_atomic_load_or_16
/*14478*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14480*/         OPC_EmitMergeInputChains1_0,
/*14481*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14490*/       /*Scope*/ 14, /*->14505*/
/*14491*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_32
/*14493*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14495*/         OPC_EmitMergeInputChains1_0,
/*14496*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14505*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14522
/*14508*/       OPC_CheckPredicate, 47, // Predicate_atomic_load_or_64
/*14510*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14512*/       OPC_EmitMergeInputChains1_0,
/*14513*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14523*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->14675
/*14528*/   OPC_RecordMemRef,
/*14529*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*14530*/   OPC_RecordChild1, // #1 = $ptr
/*14531*/   OPC_Scope, 70, /*->14603*/ // 2 children in Scope
/*14533*/     OPC_CheckChild1Type, MVT::i32,
/*14535*/     OPC_RecordChild2, // #2 = $incr
/*14536*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14586
/*14539*/       OPC_Scope, 14, /*->14555*/ // 3 children in Scope
/*14541*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_8
/*14543*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14545*/         OPC_EmitMergeInputChains1_0,
/*14546*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14555*/       /*Scope*/ 14, /*->14570*/
/*14556*/         OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_16
/*14558*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14560*/         OPC_EmitMergeInputChains1_0,
/*14561*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14570*/       /*Scope*/ 14, /*->14585*/
/*14571*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_32
/*14573*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14575*/         OPC_EmitMergeInputChains1_0,
/*14576*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14585*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14602
/*14588*/       OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_64
/*14590*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14592*/       OPC_EmitMergeInputChains1_0,
/*14593*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14603*/   /*Scope*/ 70, /*->14674*/
/*14604*/     OPC_CheckChild1Type, MVT::i64,
/*14606*/     OPC_RecordChild2, // #2 = $incr
/*14607*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14657
/*14610*/       OPC_Scope, 14, /*->14626*/ // 3 children in Scope
/*14612*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_8
/*14614*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14616*/         OPC_EmitMergeInputChains1_0,
/*14617*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14626*/       /*Scope*/ 14, /*->14641*/
/*14627*/         OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_16
/*14629*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14631*/         OPC_EmitMergeInputChains1_0,
/*14632*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14641*/       /*Scope*/ 14, /*->14656*/
/*14642*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_32
/*14644*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14646*/         OPC_EmitMergeInputChains1_0,
/*14647*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14656*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14673
/*14659*/       OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_64
/*14661*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14663*/       OPC_EmitMergeInputChains1_0,
/*14664*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14674*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->14826
/*14679*/   OPC_RecordMemRef,
/*14680*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*14681*/   OPC_RecordChild1, // #1 = $ptr
/*14682*/   OPC_Scope, 70, /*->14754*/ // 2 children in Scope
/*14684*/     OPC_CheckChild1Type, MVT::i32,
/*14686*/     OPC_RecordChild2, // #2 = $incr
/*14687*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14737
/*14690*/       OPC_Scope, 14, /*->14706*/ // 3 children in Scope
/*14692*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_8
/*14694*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14696*/         OPC_EmitMergeInputChains1_0,
/*14697*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14706*/       /*Scope*/ 14, /*->14721*/
/*14707*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_16
/*14709*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14711*/         OPC_EmitMergeInputChains1_0,
/*14712*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14721*/       /*Scope*/ 14, /*->14736*/
/*14722*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_32
/*14724*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14726*/         OPC_EmitMergeInputChains1_0,
/*14727*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14736*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14753
/*14739*/       OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_64
/*14741*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14743*/       OPC_EmitMergeInputChains1_0,
/*14744*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14754*/   /*Scope*/ 70, /*->14825*/
/*14755*/     OPC_CheckChild1Type, MVT::i64,
/*14757*/     OPC_RecordChild2, // #2 = $incr
/*14758*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14808
/*14761*/       OPC_Scope, 14, /*->14777*/ // 3 children in Scope
/*14763*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_8
/*14765*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14767*/         OPC_EmitMergeInputChains1_0,
/*14768*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14777*/       /*Scope*/ 14, /*->14792*/
/*14778*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_16
/*14780*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14782*/         OPC_EmitMergeInputChains1_0,
/*14783*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14792*/       /*Scope*/ 14, /*->14807*/
/*14793*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_32
/*14795*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14797*/         OPC_EmitMergeInputChains1_0,
/*14798*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14807*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14824
/*14810*/       OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_64
/*14812*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14814*/       OPC_EmitMergeInputChains1_0,
/*14815*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14825*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->14977
/*14830*/   OPC_RecordMemRef,
/*14831*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*14832*/   OPC_RecordChild1, // #1 = $ptr
/*14833*/   OPC_Scope, 70, /*->14905*/ // 2 children in Scope
/*14835*/     OPC_CheckChild1Type, MVT::i32,
/*14837*/     OPC_RecordChild2, // #2 = $incr
/*14838*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14888
/*14841*/       OPC_Scope, 14, /*->14857*/ // 3 children in Scope
/*14843*/         OPC_CheckPredicate, 56, // Predicate_atomic_swap_8
/*14845*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14847*/         OPC_EmitMergeInputChains1_0,
/*14848*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14857*/       /*Scope*/ 14, /*->14872*/
/*14858*/         OPC_CheckPredicate, 57, // Predicate_atomic_swap_16
/*14860*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14862*/         OPC_EmitMergeInputChains1_0,
/*14863*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14872*/       /*Scope*/ 14, /*->14887*/
/*14873*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_32
/*14875*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14877*/         OPC_EmitMergeInputChains1_0,
/*14878*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*14887*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14904
/*14890*/       OPC_CheckPredicate, 59, // Predicate_atomic_swap_64
/*14892*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14894*/       OPC_EmitMergeInputChains1_0,
/*14895*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14905*/   /*Scope*/ 70, /*->14976*/
/*14906*/     OPC_CheckChild1Type, MVT::i64,
/*14908*/     OPC_RecordChild2, // #2 = $incr
/*14909*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->14959
/*14912*/       OPC_Scope, 14, /*->14928*/ // 3 children in Scope
/*14914*/         OPC_CheckPredicate, 56, // Predicate_atomic_swap_8
/*14916*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14918*/         OPC_EmitMergeInputChains1_0,
/*14919*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14928*/       /*Scope*/ 14, /*->14943*/
/*14929*/         OPC_CheckPredicate, 57, // Predicate_atomic_swap_16
/*14931*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14933*/         OPC_EmitMergeInputChains1_0,
/*14934*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14943*/       /*Scope*/ 14, /*->14958*/
/*14944*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_32
/*14946*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14948*/         OPC_EmitMergeInputChains1_0,
/*14949*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*14958*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->14975
/*14961*/       OPC_CheckPredicate, 59, // Predicate_atomic_swap_64
/*14963*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14965*/       OPC_EmitMergeInputChains1_0,
/*14966*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*14976*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->15138
/*14981*/   OPC_RecordMemRef,
/*14982*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*14983*/   OPC_RecordChild1, // #1 = $ptr
/*14984*/   OPC_Scope, 75, /*->15061*/ // 2 children in Scope
/*14986*/     OPC_CheckChild1Type, MVT::i32,
/*14988*/     OPC_RecordChild2, // #2 = $cmp
/*14989*/     OPC_RecordChild3, // #3 = $swap
/*14990*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->15043
/*14993*/       OPC_Scope, 15, /*->15010*/ // 3 children in Scope
/*14995*/         OPC_CheckPredicate, 60, // Predicate_atomic_cmp_swap_8
/*14997*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14999*/         OPC_EmitMergeInputChains1_0,
/*15000*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*15010*/       /*Scope*/ 15, /*->15026*/
/*15011*/         OPC_CheckPredicate, 61, // Predicate_atomic_cmp_swap_16
/*15013*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15015*/         OPC_EmitMergeInputChains1_0,
/*15016*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*15026*/       /*Scope*/ 15, /*->15042*/
/*15027*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_32
/*15029*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15031*/         OPC_EmitMergeInputChains1_0,
/*15032*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*15042*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->15060
/*15045*/       OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_64
/*15047*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15049*/       OPC_EmitMergeInputChains1_0,
/*15050*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*15061*/   /*Scope*/ 75, /*->15137*/
/*15062*/     OPC_CheckChild1Type, MVT::i64,
/*15064*/     OPC_RecordChild2, // #2 = $cmp
/*15065*/     OPC_RecordChild3, // #3 = $swap
/*15066*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->15119
/*15069*/       OPC_Scope, 15, /*->15086*/ // 3 children in Scope
/*15071*/         OPC_CheckPredicate, 60, // Predicate_atomic_cmp_swap_8
/*15073*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15075*/         OPC_EmitMergeInputChains1_0,
/*15076*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*15086*/       /*Scope*/ 15, /*->15102*/
/*15087*/         OPC_CheckPredicate, 61, // Predicate_atomic_cmp_swap_16
/*15089*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15091*/         OPC_EmitMergeInputChains1_0,
/*15092*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*15102*/       /*Scope*/ 15, /*->15118*/
/*15103*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_32
/*15105*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15107*/         OPC_EmitMergeInputChains1_0,
/*15108*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*15118*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->15136
/*15121*/       OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_64
/*15123*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15125*/       OPC_EmitMergeInputChains1_0,
/*15126*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*15137*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::MUL),// ->15172
/*15141*/   OPC_RecordChild0, // #0 = $rs
/*15142*/   OPC_RecordChild1, // #1 = $rt
/*15143*/   OPC_CheckType, MVT::i32,
/*15145*/   OPC_Scope, 11, /*->15158*/ // 2 children in Scope
/*15147*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15149*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (MUL:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*15158*/   /*Scope*/ 12, /*->15171*/
/*15159*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15161*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
              // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*15171*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->15254
/*15175*/   OPC_RecordChild0, // #0 = $rt
/*15176*/   OPC_MoveChild, 1,
/*15178*/   OPC_Scope, 29, /*->15209*/ // 3 children in Scope
/*15180*/     OPC_CheckValueType, MVT::i8,
/*15182*/     OPC_MoveParent,
/*15183*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15196
/*15186*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*15188*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->15208
/*15198*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*15200*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*15209*/   /*Scope*/ 29, /*->15239*/
/*15210*/     OPC_CheckValueType, MVT::i16,
/*15212*/     OPC_MoveParent,
/*15213*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15226
/*15216*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*15218*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->15238
/*15228*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*15230*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*15239*/   /*Scope*/ 13, /*->15253*/
/*15240*/     OPC_CheckValueType, MVT::i32,
/*15242*/     OPC_MoveParent,
/*15243*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15245*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 CPU64Regs:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 CPU64Regs:i64:$src)
/*15253*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->15287
/*15257*/   OPC_RecordChild0, // #0 = $lhs
/*15258*/   OPC_RecordChild1, // #1 = $rhs
/*15259*/   OPC_CheckType, MVT::i32,
/*15261*/   OPC_Scope, 11, /*->15274*/ // 2 children in Scope
/*15263*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15265*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*15274*/   /*Scope*/ 11, /*->15286*/
/*15275*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15277*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*15286*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->15426
/*15291*/   OPC_RecordChild0, // #0 = $fs
/*15292*/   OPC_Scope, 14, /*->15308*/ // 6 children in Scope
/*15294*/     OPC_CheckChild0Type, MVT::f32,
/*15296*/     OPC_CheckType, MVT::i32,
/*15298*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15300*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$fs)
/*15308*/   /*Scope*/ 14, /*->15323*/
/*15309*/     OPC_CheckChild0Type, MVT::f64,
/*15311*/     OPC_CheckType, MVT::i64,
/*15313*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15315*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64:f64:$fs)
/*15323*/   /*Scope*/ 18, /*->15342*/
/*15324*/     OPC_CheckChild0Type, MVT::v2i16,
/*15326*/     OPC_CheckType, MVT::i32,
/*15328*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*15330*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*15333*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$src, CPURegs:i32)
/*15342*/   /*Scope*/ 18, /*->15361*/
/*15343*/     OPC_CheckChild0Type, MVT::v4i8,
/*15345*/     OPC_CheckType, MVT::i32,
/*15347*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*15349*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*15352*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$src, CPURegs:i32)
/*15361*/   /*Scope*/ 48, /*->15410*/
/*15362*/     OPC_CheckChild0Type, MVT::i32,
/*15364*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->15377
/*15367*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15369*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 CPURegs:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 CPURegs:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->15393
/*15379*/       OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*15381*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*15384*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 CPURegs:i32:$src, DSPRegs:v4i8)
              /*SwitchType*/ 14,  MVT::v4i8,// ->15409
/*15395*/       OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*15397*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*15400*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 CPURegs:i32:$src, DSPRegs:v4i8)
              0, // EndSwitchType
/*15410*/   /*Scope*/ 14, /*->15425*/
/*15411*/     OPC_CheckChild0Type, MVT::i64,
/*15413*/     OPC_CheckType, MVT::f64,
/*15415*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15417*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 CPU64Regs:i64:$rt)
/*15425*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->15444
/*15429*/   OPC_RecordChild0, // #0 = $src
/*15430*/   OPC_CheckChild0Type, MVT::i32,
/*15432*/   OPC_CheckType, MVT::i64,
/*15434*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15436*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->15462
/*15447*/   OPC_RecordChild0, // #0 = $src
/*15448*/   OPC_CheckChild0Type, MVT::i32,
/*15450*/   OPC_CheckType, MVT::i64,
/*15452*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15454*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_T),// ->15537
/*15465*/   OPC_CaptureGlueInput,
/*15466*/   OPC_RecordChild0, // #0 = $rs
/*15467*/   OPC_RecordChild1, // #1 = $F
/*15468*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->15482
/*15471*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15473*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->15495
/*15484*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*15486*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->15508
/*15497*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15499*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->15536
/*15510*/     OPC_Scope, 11, /*->15523*/ // 2 children in Scope
/*15512*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15514*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*15523*/     /*Scope*/ 11, /*->15535*/
/*15524*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15526*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*15535*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_F),// ->15612
/*15540*/   OPC_CaptureGlueInput,
/*15541*/   OPC_RecordChild0, // #0 = $rs
/*15542*/   OPC_RecordChild1, // #1 = $F
/*15543*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->15557
/*15546*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15548*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->15570
/*15559*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*15561*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->15583
/*15572*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15574*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->15611
/*15585*/     OPC_Scope, 11, /*->15598*/ // 2 children in Scope
/*15587*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15589*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*15598*/     /*Scope*/ 11, /*->15610*/
/*15599*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15601*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*15610*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->15662
/*15615*/   OPC_RecordChild0, // #0 = $rt
/*15616*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->15641
/*15619*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15621*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15629*/     OPC_EmitInteger, MVT::i32, 16, 
/*15632*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 CPURegs:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->15661
/*15643*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15645*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*15653*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 CPU64Regs:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::FP_TO_SINT),// ->15780
/*15665*/   OPC_RecordChild0, // #0 = $src
/*15666*/   OPC_Scope, 44, /*->15712*/ // 2 children in Scope
/*15668*/     OPC_CheckChild0Type, MVT::f32,
/*15670*/     OPC_SwitchType /*2 cases */, 18,  MVT::i32,// ->15691
/*15673*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15675*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*15683*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
                // Dst: (MFC1:i32 (TRUNC_W_S:f32 FGR32:f32:$src))
              /*SwitchType*/ 18,  MVT::i64,// ->15711
/*15693*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15695*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*15703*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR32:f32:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_S:f64 FGR32:f32:$src))
              0, // EndSwitchType
/*15712*/   /*Scope*/ 66, /*->15779*/
/*15713*/     OPC_CheckChild0Type, MVT::f64,
/*15715*/     OPC_SwitchType /*2 cases */, 40,  MVT::i32,// ->15758
/*15718*/       OPC_Scope, 18, /*->15738*/ // 2 children in Scope
/*15720*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15722*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*15730*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 AFGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D32:f32 AFGR64:f64:$src))
/*15738*/       /*Scope*/ 18, /*->15757*/
/*15739*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15741*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*15749*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 FGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D64:f32 FGR64:f64:$src))
/*15757*/       0, /*End of Scope*/
              /*SwitchType*/ 18,  MVT::i64,// ->15778
/*15760*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15762*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*15770*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR64:f64:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_D64:f64 FGR64:f64:$src))
              0, // EndSwitchType
/*15779*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->15812
/*15783*/   OPC_RecordChild0, // #0 = $src
/*15784*/   OPC_CheckType, MVT::i32,
/*15786*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*15788*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*15791*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*15800*/   OPC_EmitInteger, MVT::i32, 0, 
/*15803*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 CPU64Regs:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 CPU64Regs:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->15842
/*15815*/   OPC_RecordChild0, // #0 = $src
/*15816*/   OPC_CheckChild0Type, MVT::i32,
/*15818*/   OPC_CheckType, MVT::i64,
/*15820*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15822*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*15830*/   OPC_EmitInteger, MVT::i32, 32, 
/*15833*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 CPURegs:i32:$src), 32:i32)
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->16142
/*15846*/   OPC_Scope, 118|128,1/*246*/, /*->16095*/ // 2 children in Scope
/*15849*/     OPC_MoveChild, 0,
/*15851*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->16041
/*15856*/       OPC_CheckPredicate, 64, // Predicate_fpimm0
/*15858*/       OPC_MoveParent,
/*15859*/       OPC_MoveChild, 1,
/*15861*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->15981
/*15865*/         OPC_Scope, 56, /*->15923*/ // 2 children in Scope
/*15867*/           OPC_MoveChild, 0,
/*15869*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*15872*/           OPC_RecordChild0, // #0 = $fs
/*15873*/           OPC_RecordChild1, // #1 = $ft
/*15874*/           OPC_MoveParent,
/*15875*/           OPC_RecordChild1, // #2 = $fr
/*15876*/           OPC_MoveParent,
/*15877*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->15892
/*15880*/             OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15882*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->15922
/*15894*/             OPC_Scope, 12, /*->15908*/ // 2 children in Scope
/*15896*/               OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15898*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*15908*/             /*Scope*/ 12, /*->15921*/
/*15909*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15911*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*15921*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*15923*/         /*Scope*/ 56, /*->15980*/
/*15924*/           OPC_RecordChild0, // #0 = $fr
/*15925*/           OPC_MoveChild, 1,
/*15927*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*15930*/           OPC_RecordChild0, // #1 = $fs
/*15931*/           OPC_RecordChild1, // #2 = $ft
/*15932*/           OPC_MoveParent,
/*15933*/           OPC_MoveParent,
/*15934*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->15949
/*15937*/             OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15939*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->15979
/*15951*/             OPC_Scope, 12, /*->15965*/ // 2 children in Scope
/*15953*/               OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15955*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*15965*/             /*Scope*/ 12, /*->15978*/
/*15966*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15968*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*15978*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*15980*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->16040
/*15984*/         OPC_MoveChild, 0,
/*15986*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*15989*/         OPC_RecordChild0, // #0 = $fs
/*15990*/         OPC_RecordChild1, // #1 = $ft
/*15991*/         OPC_MoveParent,
/*15992*/         OPC_RecordChild1, // #2 = $fr
/*15993*/         OPC_MoveParent,
/*15994*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->16009
/*15997*/           OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->16039
/*16011*/           OPC_Scope, 12, /*->16025*/ // 2 children in Scope
/*16013*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16015*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16025*/           /*Scope*/ 12, /*->16038*/
/*16026*/             OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16028*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*16038*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->16094
/*16044*/       OPC_RecordChild0, // #0 = $fs
/*16045*/       OPC_RecordChild1, // #1 = $ft
/*16046*/       OPC_MoveParent,
/*16047*/       OPC_RecordChild1, // #2 = $fr
/*16048*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->16063
/*16051*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*16053*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->16093
/*16065*/         OPC_Scope, 12, /*->16079*/ // 2 children in Scope
/*16067*/           OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16069*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16079*/         /*Scope*/ 12, /*->16092*/
/*16080*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16082*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*16092*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*16095*/   /*Scope*/ 45, /*->16141*/
/*16096*/     OPC_RecordChild0, // #0 = $fs
/*16097*/     OPC_RecordChild1, // #1 = $ft
/*16098*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->16112
/*16101*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16103*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->16140
/*16114*/       OPC_Scope, 11, /*->16127*/ // 2 children in Scope
/*16116*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16118*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16127*/       /*Scope*/ 11, /*->16139*/
/*16128*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16130*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*16139*/       0, /*End of Scope*/
              0, // EndSwitchType
/*16141*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->16308
/*16146*/   OPC_Scope, 55, /*->16203*/ // 2 children in Scope
/*16148*/     OPC_MoveChild, 0,
/*16150*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*16153*/     OPC_RecordChild0, // #0 = $fs
/*16154*/     OPC_RecordChild1, // #1 = $ft
/*16155*/     OPC_MoveParent,
/*16156*/     OPC_RecordChild1, // #2 = $fr
/*16157*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->16172
/*16160*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*16162*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->16202
/*16174*/       OPC_Scope, 12, /*->16188*/ // 2 children in Scope
/*16176*/         OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16178*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16188*/       /*Scope*/ 12, /*->16201*/
/*16189*/         OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16191*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*16201*/       0, /*End of Scope*/
              0, // EndSwitchType
/*16203*/   /*Scope*/ 103, /*->16307*/
/*16204*/     OPC_RecordChild0, // #0 = $fr
/*16205*/     OPC_Scope, 54, /*->16261*/ // 2 children in Scope
/*16207*/       OPC_MoveChild, 1,
/*16209*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*16212*/       OPC_RecordChild0, // #1 = $fs
/*16213*/       OPC_RecordChild1, // #2 = $ft
/*16214*/       OPC_MoveParent,
/*16215*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->16230
/*16218*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*16220*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->16260
/*16232*/         OPC_Scope, 12, /*->16246*/ // 2 children in Scope
/*16234*/           OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16236*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16246*/         /*Scope*/ 12, /*->16259*/
/*16247*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16249*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*16259*/         0, /*End of Scope*/
                0, // EndSwitchType
/*16261*/     /*Scope*/ 44, /*->16306*/
/*16262*/       OPC_RecordChild1, // #1 = $ft
/*16263*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->16277
/*16266*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16268*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->16305
/*16279*/         OPC_Scope, 11, /*->16292*/ // 2 children in Scope
/*16281*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16283*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16292*/         /*Scope*/ 11, /*->16304*/
/*16293*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16295*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*16304*/         0, /*End of Scope*/
                0, // EndSwitchType
/*16306*/     0, /*End of Scope*/
/*16307*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->16399
/*16311*/   OPC_Scope, 34, /*->16347*/ // 2 children in Scope
/*16313*/     OPC_CheckPredicate, 64, // Predicate_fpimm0
/*16315*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->16331
/*16318*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16320*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16323*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->16346
/*16333*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16335*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*16338*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*16347*/   /*Scope*/ 50, /*->16398*/
/*16348*/     OPC_CheckPredicate, 65, // Predicate_fpimm0neg
/*16350*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->16374
/*16353*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16355*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16358*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*16366*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->16397
/*16376*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16378*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*16381*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*16389*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*16398*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->16441
/*16402*/   OPC_RecordChild0, // #0 = $fs
/*16403*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->16416
/*16406*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16408*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->16440
/*16418*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16420*/     OPC_Scope, 8, /*->16430*/ // 2 children in Scope
/*16422*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
/*16430*/     /*Scope*/ 8, /*->16439*/
/*16431*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64:f64:$fs)
/*16439*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->16483
/*16444*/   OPC_RecordChild0, // #0 = $fs
/*16445*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->16458
/*16448*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16450*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->16482
/*16460*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*16462*/     OPC_Scope, 8, /*->16472*/ // 2 children in Scope
/*16464*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
/*16472*/     /*Scope*/ 8, /*->16481*/
/*16473*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64:f64:$fs)
/*16481*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->16527
/*16486*/   OPC_RecordChild0, // #0 = $fs
/*16487*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->16500
/*16490*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16492*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->16526
/*16502*/     OPC_Scope, 10, /*->16514*/ // 2 children in Scope
/*16504*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16506*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
/*16514*/     /*Scope*/ 10, /*->16525*/
/*16515*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16517*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64:f64:$fs)
/*16525*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->16575
/*16530*/   OPC_RecordChild0, // #0 = $fs
/*16531*/   OPC_RecordChild1, // #1 = $ft
/*16532*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->16546
/*16535*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16537*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->16574
/*16548*/     OPC_Scope, 11, /*->16561*/ // 2 children in Scope
/*16550*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16552*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16561*/     /*Scope*/ 11, /*->16573*/
/*16562*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16564*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*16573*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->16623
/*16578*/   OPC_RecordChild0, // #0 = $fs
/*16579*/   OPC_RecordChild1, // #1 = $ft
/*16580*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->16594
/*16583*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16585*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->16622
/*16596*/     OPC_Scope, 11, /*->16609*/ // 2 children in Scope
/*16598*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16600*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*16609*/     /*Scope*/ 11, /*->16621*/
/*16610*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16612*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*16621*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->16639
/*16626*/   OPC_RecordChild0, // #0 = $lo
/*16627*/   OPC_RecordChild1, // #1 = $hi
/*16628*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16630*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->16667
/*16642*/   OPC_RecordChild0, // #0 = $src
/*16643*/   OPC_Scope, 10, /*->16655*/ // 2 children in Scope
/*16645*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16647*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64:f64:$src)
/*16655*/   /*Scope*/ 10, /*->16666*/
/*16656*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16658*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64:f64:$src)
/*16666*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->16695
/*16670*/   OPC_RecordChild0, // #0 = $src
/*16671*/   OPC_Scope, 10, /*->16683*/ // 2 children in Scope
/*16673*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16675*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32:f32:$src)
/*16683*/   /*Scope*/ 10, /*->16694*/
/*16684*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16686*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32:f32:$src)
/*16694*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::SINT_TO_FP),// ->16813
/*16698*/   OPC_RecordChild0, // #0 = $src
/*16699*/   OPC_Scope, 66, /*->16767*/ // 2 children in Scope
/*16701*/     OPC_CheckChild0Type, MVT::i32,
/*16703*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->16724
/*16706*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16708*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*16716*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
                // Dst: (CVT_S_W:f32 (MTC1:f32 CPURegs:i32:$src))
              /*SwitchType*/ 40,  MVT::f64,// ->16766
/*16726*/       OPC_Scope, 18, /*->16746*/ // 2 children in Scope
/*16728*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16730*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*16738*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D32_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*16746*/       /*Scope*/ 18, /*->16765*/
/*16747*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16749*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*16757*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D64_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*16765*/       0, /*End of Scope*/
              0, // EndSwitchType
/*16767*/   /*Scope*/ 44, /*->16812*/
/*16768*/     OPC_CheckChild0Type, MVT::i64,
/*16770*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->16791
/*16773*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16775*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*16783*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_L), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_S_L:f32 (DMTC1:f64 CPU64Regs:i64:$src))
              /*SwitchType*/ 18,  MVT::f64,// ->16811
/*16793*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16795*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*16803*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f64 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_D64_L:f64 (DMTC1:f64 CPU64Regs:i64:$src))
              0, // EndSwitchType
/*16812*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(MipsISD::SHILO),// ->16853
/*16816*/   OPC_RecordNode,   // #0 = 'MipsSHILO' chained node
/*16817*/   OPC_CaptureGlueInput,
/*16818*/   OPC_RecordChild1, // #1 = $shift
/*16819*/   OPC_Scope, 20, /*->16841*/ // 2 children in Scope
/*16821*/     OPC_MoveChild, 1,
/*16823*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16826*/     OPC_CheckPredicate, 66, // Predicate_immSExt6
/*16828*/     OPC_MoveParent,
/*16829*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*16831*/     OPC_EmitMergeInputChains1_0,
/*16832*/     OPC_EmitConvertToTarget, 1,
/*16834*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (MipsSHILO (imm:i32)<<P:Predicate_immSExt6>>:$shift) - Complexity = 7
              // Dst: (SHILO_PSEUDO (imm:i32):$shift)
/*16841*/   /*Scope*/ 10, /*->16852*/
/*16842*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*16844*/     OPC_EmitMergeInputChains1_0,
/*16845*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsSHILO CPURegs:i32:$rs) - Complexity = 3
              // Dst: (SHILOV_PSEUDO CPURegs:i32:$rs)
/*16852*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->16872
/*16856*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*16857*/   OPC_RecordChild1, // #1 = $amt
/*16858*/   OPC_MoveChild, 1,
/*16860*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*16863*/   OPC_MoveParent,
/*16864*/   OPC_EmitMergeInputChains1_0,
/*16865*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->16895
/*16875*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*16876*/   OPC_RecordChild1, // #1 = $stype
/*16877*/   OPC_MoveChild, 1,
/*16879*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16882*/   OPC_MoveParent,
/*16883*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16885*/   OPC_EmitMergeInputChains1_0,
/*16886*/   OPC_EmitConvertToTarget, 1,
/*16888*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 126,  TARGET_VAL(MipsISD::JmpLink),// ->17024
/*16898*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*16899*/   OPC_CaptureGlueInput,
/*16900*/   OPC_RecordChild1, // #1 = $target
/*16901*/   OPC_Scope, 80, /*->16983*/ // 3 children in Scope
/*16903*/     OPC_MoveChild, 1,
/*16905*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->16922
/*16909*/       OPC_MoveParent,
/*16910*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16912*/       OPC_EmitMergeInputChains1_0,
/*16913*/       OPC_EmitConvertToTarget, 1,
/*16915*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->16952
/*16925*/       OPC_CheckType, MVT::i32,
/*16927*/       OPC_MoveParent,
/*16928*/       OPC_Scope, 10, /*->16940*/ // 2 children in Scope
/*16930*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16932*/         OPC_EmitMergeInputChains1_0,
/*16933*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (JAL (tglobaladdr:i32):$dst)
/*16940*/       /*Scope*/ 10, /*->16951*/
/*16941*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*16943*/         OPC_EmitMergeInputChains1_0,
/*16944*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (tglobaladdr:i32):$dst)
/*16951*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->16982
/*16955*/       OPC_CheckType, MVT::i32,
/*16957*/       OPC_MoveParent,
/*16958*/       OPC_Scope, 10, /*->16970*/ // 2 children in Scope
/*16960*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16962*/         OPC_EmitMergeInputChains1_0,
/*16963*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (JAL (texternalsym:i32):$dst)
/*16970*/       /*Scope*/ 10, /*->16981*/
/*16971*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*16973*/         OPC_EmitMergeInputChains1_0,
/*16974*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (texternalsym:i32):$dst)
/*16981*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*16983*/   /*Scope*/ 26, /*->17010*/
/*16984*/     OPC_CheckChild1Type, MVT::i32,
/*16986*/     OPC_Scope, 10, /*->16998*/ // 2 children in Scope
/*16988*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16990*/       OPC_EmitMergeInputChains1_0,
/*16991*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALRPseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JALRPseudo CPURegs:i32:$rs)
/*16998*/     /*Scope*/ 10, /*->17009*/
/*16999*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17001*/       OPC_EmitMergeInputChains1_0,
/*17002*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*17009*/     0, /*End of Scope*/
/*17010*/   /*Scope*/ 12, /*->17023*/
/*17011*/     OPC_CheckChild1Type, MVT::i64,
/*17013*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17015*/     OPC_EmitMergeInputChains1_0,
/*17016*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64Pseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JALR64Pseudo CPU64Regs:i64:$rs)
/*17023*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->17107
/*17027*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*17028*/   OPC_CaptureGlueInput,
/*17029*/   OPC_RecordChild1, // #1 = $target
/*17030*/   OPC_Scope, 48, /*->17080*/ // 3 children in Scope
/*17032*/     OPC_MoveChild, 1,
/*17034*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->17051
/*17038*/       OPC_MoveParent,
/*17039*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17041*/       OPC_EmitMergeInputChains1_0,
/*17042*/       OPC_EmitConvertToTarget, 1,
/*17044*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->17065
/*17054*/       OPC_MoveParent,
/*17055*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17057*/       OPC_EmitMergeInputChains1_0,
/*17058*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->17079
/*17068*/       OPC_MoveParent,
/*17069*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17071*/       OPC_EmitMergeInputChains1_0,
/*17072*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*17080*/   /*Scope*/ 12, /*->17093*/
/*17081*/     OPC_CheckChild1Type, MVT::i32,
/*17083*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17085*/     OPC_EmitMergeInputChains1_0,
/*17086*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPURegs:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R CPURegs:i32:$rs)
/*17093*/   /*Scope*/ 12, /*->17106*/
/*17094*/     OPC_CheckChild1Type, MVT::i64,
/*17096*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17098*/     OPC_EmitMergeInputChains1_0,
/*17099*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R CPU64Regs:i64:$rs)
/*17106*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->17181
/*17110*/   OPC_RecordChild0, // #0 = $fs
/*17111*/   OPC_Scope, 24, /*->17137*/ // 2 children in Scope
/*17113*/     OPC_CheckChild0Type, MVT::f32,
/*17115*/     OPC_RecordChild1, // #1 = $ft
/*17116*/     OPC_RecordChild2, // #2 = $cond
/*17117*/     OPC_MoveChild, 2,
/*17119*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17122*/     OPC_MoveParent,
/*17123*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17125*/     OPC_EmitConvertToTarget, 2,
/*17127*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond)
/*17137*/   /*Scope*/ 42, /*->17180*/
/*17138*/     OPC_CheckChild0Type, MVT::f64,
/*17140*/     OPC_RecordChild1, // #1 = $ft
/*17141*/     OPC_RecordChild2, // #2 = $cond
/*17142*/     OPC_MoveChild, 2,
/*17144*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17147*/     OPC_MoveParent,
/*17148*/     OPC_Scope, 14, /*->17164*/ // 2 children in Scope
/*17150*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17152*/       OPC_EmitConvertToTarget, 2,
/*17154*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond)
/*17164*/     /*Scope*/ 14, /*->17179*/
/*17165*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17167*/       OPC_EmitConvertToTarget, 2,
/*17169*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond)
/*17179*/     0, /*End of Scope*/
/*17180*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->17208
/*17184*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*17185*/   OPC_CaptureGlueInput,
/*17186*/   OPC_Scope, 9, /*->17197*/ // 2 children in Scope
/*17188*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17190*/     OPC_EmitMergeInputChains1_0,
/*17191*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*17197*/   /*Scope*/ 9, /*->17207*/
/*17198*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17200*/     OPC_EmitMergeInputChains1_0,
/*17201*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*17207*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->17254
/*17211*/   OPC_RecordNode,   // #0 = 'br' chained node
/*17212*/   OPC_RecordChild1, // #1 = $target
/*17213*/   OPC_MoveChild, 1,
/*17215*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*17218*/   OPC_MoveParent,
/*17219*/   OPC_Scope, 10, /*->17231*/ // 3 children in Scope
/*17221*/     OPC_CheckPatternPredicate, 24, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*17223*/     OPC_EmitMergeInputChains1_0,
/*17224*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*17231*/   /*Scope*/ 10, /*->17242*/
/*17232*/     OPC_CheckPatternPredicate, 25, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*17234*/     OPC_EmitMergeInputChains1_0,
/*17235*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$offset) - Complexity = 3
              // Dst: (B (bb:Other):$offset)
/*17242*/   /*Scope*/ 10, /*->17253*/
/*17243*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17245*/     OPC_EmitMergeInputChains1_0,
/*17246*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*17253*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->17301
/*17257*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*17258*/   OPC_RecordChild1, // #1 = $rs
/*17259*/   OPC_Scope, 26, /*->17287*/ // 2 children in Scope
/*17261*/     OPC_CheckChild1Type, MVT::i32,
/*17263*/     OPC_Scope, 10, /*->17275*/ // 2 children in Scope
/*17265*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17267*/       OPC_EmitMergeInputChains1_0,
/*17268*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JR CPURegs:i32:$rs)
/*17275*/     /*Scope*/ 10, /*->17286*/
/*17276*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17278*/       OPC_EmitMergeInputChains1_0,
/*17279*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*17286*/     0, /*End of Scope*/
/*17287*/   /*Scope*/ 12, /*->17300*/
/*17288*/     OPC_CheckChild1Type, MVT::i64,
/*17290*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17292*/     OPC_EmitMergeInputChains1_0,
/*17293*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JR64 CPU64Regs:i64:$rs)
/*17300*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::EH_RETURN),// ->17339
/*17304*/   OPC_RecordNode,   // #0 = 'MIPSehret' chained node
/*17305*/   OPC_CaptureGlueInput,
/*17306*/   OPC_RecordChild1, // #1 = $spoff
/*17307*/   OPC_Scope, 14, /*->17323*/ // 2 children in Scope
/*17309*/     OPC_CheckChild1Type, MVT::i32,
/*17311*/     OPC_RecordChild2, // #2 = $dst
/*17312*/     OPC_CheckChild2Type, MVT::i32,
/*17314*/     OPC_EmitMergeInputChains1_0,
/*17315*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPURegs:i32:$spoff, CPURegs:i32:$dst) - Complexity = 3
              // Dst: (MIPSeh_return32 CPURegs:i32:$spoff, CPURegs:i32:$dst)
/*17323*/   /*Scope*/ 14, /*->17338*/
/*17324*/     OPC_CheckChild1Type, MVT::i64,
/*17326*/     OPC_RecordChild2, // #2 = $dst
/*17327*/     OPC_CheckChild2Type, MVT::i64,
/*17329*/     OPC_EmitMergeInputChains1_0,
/*17330*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst) - Complexity = 3
              // Dst: (MIPSeh_return64 CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst)
/*17338*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::DivRem),// ->17390
/*17342*/   OPC_RecordChild0, // #0 = $rs
/*17343*/   OPC_Scope, 29, /*->17374*/ // 2 children in Scope
/*17345*/     OPC_CheckChild0Type, MVT::i32,
/*17347*/     OPC_RecordChild1, // #1 = $rt
/*17348*/     OPC_Scope, 11, /*->17361*/ // 2 children in Scope
/*17350*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17352*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SDIV), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRem CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (SDIV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17361*/     /*Scope*/ 11, /*->17373*/
/*17362*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17364*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRem CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
                // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*17373*/     0, /*End of Scope*/
/*17374*/   /*Scope*/ 14, /*->17389*/
/*17375*/     OPC_CheckChild0Type, MVT::i64,
/*17377*/     OPC_RecordChild1, // #1 = $rt
/*17378*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17380*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (DSDIV:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*17389*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::DivRemU),// ->17441
/*17393*/   OPC_RecordChild0, // #0 = $rs
/*17394*/   OPC_Scope, 29, /*->17425*/ // 2 children in Scope
/*17396*/     OPC_CheckChild0Type, MVT::i32,
/*17398*/     OPC_RecordChild1, // #1 = $rt
/*17399*/     OPC_Scope, 11, /*->17412*/ // 2 children in Scope
/*17401*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17403*/       OPC_MorphNodeTo, TARGET_VAL(Mips::UDIV), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRemU CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (UDIV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17412*/     /*Scope*/ 11, /*->17424*/
/*17413*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17415*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRemU CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
                // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*17424*/     0, /*End of Scope*/
/*17425*/   /*Scope*/ 14, /*->17440*/
/*17426*/     OPC_CheckChild0Type, MVT::i64,
/*17428*/     OPC_RecordChild1, // #1 = $rt
/*17429*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17431*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DUDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (DUDIV:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*17440*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MAdd),// ->17466
/*17444*/   OPC_CaptureGlueInput,
/*17445*/   OPC_RecordChild0, // #0 = $rs
/*17446*/   OPC_RecordChild1, // #1 = $rt
/*17447*/   OPC_RecordChild2, // #2 = physreg input LO
/*17448*/   OPC_RecordChild3, // #3 = physreg input HI
/*17449*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17451*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17454*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17457*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADD), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAdd CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADD:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MAddu),// ->17491
/*17469*/   OPC_CaptureGlueInput,
/*17470*/   OPC_RecordChild0, // #0 = $rs
/*17471*/   OPC_RecordChild1, // #1 = $rt
/*17472*/   OPC_RecordChild2, // #2 = physreg input LO
/*17473*/   OPC_RecordChild3, // #3 = physreg input HI
/*17474*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17476*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17479*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17482*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAddu CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADDU:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MSub),// ->17516
/*17494*/   OPC_CaptureGlueInput,
/*17495*/   OPC_RecordChild0, // #0 = $rs
/*17496*/   OPC_RecordChild1, // #1 = $rt
/*17497*/   OPC_RecordChild2, // #2 = physreg input LO
/*17498*/   OPC_RecordChild3, // #3 = physreg input HI
/*17499*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17501*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17504*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17507*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSub CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUB:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MSubu),// ->17541
/*17519*/   OPC_CaptureGlueInput,
/*17520*/   OPC_RecordChild0, // #0 = $rs
/*17521*/   OPC_RecordChild1, // #1 = $rt
/*17522*/   OPC_RecordChild2, // #2 = physreg input LO
/*17523*/   OPC_RecordChild3, // #3 = physreg input HI
/*17524*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17526*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17529*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17532*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSubu CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUBU:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->17559
/*17544*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*17545*/   OPC_CaptureGlueInput,
/*17546*/   OPC_RecordChild1, // #1 = $rs
/*17547*/   OPC_RecordChild2, // #2 = $rt
/*17548*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17550*/   OPC_EmitMergeInputChains1_0,
/*17551*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULSAQ_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->17577
/*17562*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*17563*/   OPC_CaptureGlueInput,
/*17564*/   OPC_RecordChild1, // #1 = $rs
/*17565*/   OPC_RecordChild2, // #2 = $rt
/*17566*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17568*/   OPC_EmitMergeInputChains1_0,
/*17569*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_S_W_PHL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_S_W_PHL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->17595
/*17580*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*17581*/   OPC_CaptureGlueInput,
/*17582*/   OPC_RecordChild1, // #1 = $rs
/*17583*/   OPC_RecordChild2, // #2 = $rt
/*17584*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17586*/   OPC_EmitMergeInputChains1_0,
/*17587*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_S_W_PHR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_S_W_PHR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->17613
/*17598*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*17599*/   OPC_CaptureGlueInput,
/*17600*/   OPC_RecordChild1, // #1 = $rs
/*17601*/   OPC_RecordChild2, // #2 = $rt
/*17602*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17604*/   OPC_EmitMergeInputChains1_0,
/*17605*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_SA_W_PHL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->17631
/*17616*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*17617*/   OPC_CaptureGlueInput,
/*17618*/   OPC_RecordChild1, // #1 = $rs
/*17619*/   OPC_RecordChild2, // #2 = $rt
/*17620*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17622*/   OPC_EmitMergeInputChains1_0,
/*17623*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_SA_W_PHR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->17649
/*17634*/   OPC_RecordNode,   // #0 = 'MipsDPAU_H_QBL' chained node
/*17635*/   OPC_CaptureGlueInput,
/*17636*/   OPC_RecordChild1, // #1 = $rs
/*17637*/   OPC_RecordChild2, // #2 = $rt
/*17638*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17640*/   OPC_EmitMergeInputChains1_0,
/*17641*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAU_H_QBL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAU_H_QBL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->17667
/*17652*/   OPC_RecordNode,   // #0 = 'MipsDPAU_H_QBR' chained node
/*17653*/   OPC_CaptureGlueInput,
/*17654*/   OPC_RecordChild1, // #1 = $rs
/*17655*/   OPC_RecordChild2, // #2 = $rt
/*17656*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17658*/   OPC_EmitMergeInputChains1_0,
/*17659*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAU_H_QBR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAU_H_QBR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->17685
/*17670*/   OPC_RecordNode,   // #0 = 'MipsDPSU_H_QBL' chained node
/*17671*/   OPC_CaptureGlueInput,
/*17672*/   OPC_RecordChild1, // #1 = $rs
/*17673*/   OPC_RecordChild2, // #2 = $rt
/*17674*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17676*/   OPC_EmitMergeInputChains1_0,
/*17677*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSU_H_QBL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSU_H_QBL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->17703
/*17688*/   OPC_RecordNode,   // #0 = 'MipsDPSU_H_QBR' chained node
/*17689*/   OPC_CaptureGlueInput,
/*17690*/   OPC_RecordChild1, // #1 = $rs
/*17691*/   OPC_RecordChild2, // #2 = $rt
/*17692*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17694*/   OPC_EmitMergeInputChains1_0,
/*17695*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSU_H_QBR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSU_H_QBR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->17721
/*17706*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*17707*/   OPC_CaptureGlueInput,
/*17708*/   OPC_RecordChild1, // #1 = $rs
/*17709*/   OPC_RecordChild2, // #2 = $rt
/*17710*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17712*/   OPC_EmitMergeInputChains1_0,
/*17713*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQ_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQ_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->17739
/*17724*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*17725*/   OPC_CaptureGlueInput,
/*17726*/   OPC_RecordChild1, // #1 = $rs
/*17727*/   OPC_RecordChild2, // #2 = $rt
/*17728*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17730*/   OPC_EmitMergeInputChains1_0,
/*17731*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQ_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQ_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->17757
/*17742*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*17743*/   OPC_CaptureGlueInput,
/*17744*/   OPC_RecordChild1, // #1 = $rs
/*17745*/   OPC_RecordChild2, // #2 = $rt
/*17746*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17748*/   OPC_EmitMergeInputChains1_0,
/*17749*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQ_SA_L_W CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQ_SA_L_W_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->17775
/*17760*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*17761*/   OPC_CaptureGlueInput,
/*17762*/   OPC_RecordChild1, // #1 = $rs
/*17763*/   OPC_RecordChild2, // #2 = $rt
/*17764*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17766*/   OPC_EmitMergeInputChains1_0,
/*17767*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQ_SA_L_W CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQ_SA_L_W_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULT),// ->17793
/*17778*/   OPC_RecordNode,   // #0 = 'MipsMULT' chained node
/*17779*/   OPC_CaptureGlueInput,
/*17780*/   OPC_RecordChild1, // #1 = $rs
/*17781*/   OPC_RecordChild2, // #2 = $rt
/*17782*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17784*/   OPC_EmitMergeInputChains1_0,
/*17785*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULT CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULT_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULTU),// ->17811
/*17796*/   OPC_RecordNode,   // #0 = 'MipsMULTU' chained node
/*17797*/   OPC_CaptureGlueInput,
/*17798*/   OPC_RecordChild1, // #1 = $rs
/*17799*/   OPC_RecordChild2, // #2 = $rt
/*17800*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17802*/   OPC_EmitMergeInputChains1_0,
/*17803*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULTU CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULTU_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MADD_DSP),// ->17829
/*17814*/   OPC_RecordNode,   // #0 = 'MipsMADD_DSP' chained node
/*17815*/   OPC_CaptureGlueInput,
/*17816*/   OPC_RecordChild1, // #1 = $rs
/*17817*/   OPC_RecordChild2, // #2 = $rt
/*17818*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17820*/   OPC_EmitMergeInputChains1_0,
/*17821*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMADD_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MADD_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MADDU_DSP),// ->17847
/*17832*/   OPC_RecordNode,   // #0 = 'MipsMADDU_DSP' chained node
/*17833*/   OPC_CaptureGlueInput,
/*17834*/   OPC_RecordChild1, // #1 = $rs
/*17835*/   OPC_RecordChild2, // #2 = $rt
/*17836*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17838*/   OPC_EmitMergeInputChains1_0,
/*17839*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMADDU_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MADDU_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MSUB_DSP),// ->17865
/*17850*/   OPC_RecordNode,   // #0 = 'MipsMSUB_DSP' chained node
/*17851*/   OPC_CaptureGlueInput,
/*17852*/   OPC_RecordChild1, // #1 = $rs
/*17853*/   OPC_RecordChild2, // #2 = $rt
/*17854*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17856*/   OPC_EmitMergeInputChains1_0,
/*17857*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMSUB_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MSUB_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MSUBU_DSP),// ->17883
/*17868*/   OPC_RecordNode,   // #0 = 'MipsMSUBU_DSP' chained node
/*17869*/   OPC_CaptureGlueInput,
/*17870*/   OPC_RecordChild1, // #1 = $rs
/*17871*/   OPC_RecordChild2, // #2 = $rt
/*17872*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17874*/   OPC_EmitMergeInputChains1_0,
/*17875*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMSUBU_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MSUBU_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::MTHLIP),// ->17899
/*17886*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*17887*/   OPC_CaptureGlueInput,
/*17888*/   OPC_RecordChild1, // #1 = $rs
/*17889*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17891*/   OPC_EmitMergeInputChains1_0,
/*17892*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (MipsMTHLIP CPURegs:i32:$rs) - Complexity = 3
            // Dst: (MTHLIP_PSEUDO CPURegs:i32:$rs)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->17917
/*17902*/   OPC_RecordNode,   // #0 = 'MipsDPA_W_PH' chained node
/*17903*/   OPC_CaptureGlueInput,
/*17904*/   OPC_RecordChild1, // #1 = $rs
/*17905*/   OPC_RecordChild2, // #2 = $rt
/*17906*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17908*/   OPC_EmitMergeInputChains1_0,
/*17909*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->17935
/*17920*/   OPC_RecordNode,   // #0 = 'MipsDPS_W_PH' chained node
/*17921*/   OPC_CaptureGlueInput,
/*17922*/   OPC_RecordChild1, // #1 = $rs
/*17923*/   OPC_RecordChild2, // #2 = $rt
/*17924*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17926*/   OPC_EmitMergeInputChains1_0,
/*17927*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPS_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPS_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->17953
/*17938*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*17939*/   OPC_CaptureGlueInput,
/*17940*/   OPC_RecordChild1, // #1 = $rs
/*17941*/   OPC_RecordChild2, // #2 = $rt
/*17942*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17944*/   OPC_EmitMergeInputChains1_0,
/*17945*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQX_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQX_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->17971
/*17956*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*17957*/   OPC_CaptureGlueInput,
/*17958*/   OPC_RecordChild1, // #1 = $rs
/*17959*/   OPC_RecordChild2, // #2 = $rt
/*17960*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17962*/   OPC_EmitMergeInputChains1_0,
/*17963*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQX_SA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->17989
/*17974*/   OPC_RecordNode,   // #0 = 'MipsDPAX_W_PH' chained node
/*17975*/   OPC_CaptureGlueInput,
/*17976*/   OPC_RecordChild1, // #1 = $rs
/*17977*/   OPC_RecordChild2, // #2 = $rt
/*17978*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17980*/   OPC_EmitMergeInputChains1_0,
/*17981*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAX_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAX_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->18007
/*17992*/   OPC_RecordNode,   // #0 = 'MipsDPSX_W_PH' chained node
/*17993*/   OPC_CaptureGlueInput,
/*17994*/   OPC_RecordChild1, // #1 = $rs
/*17995*/   OPC_RecordChild2, // #2 = $rt
/*17996*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17998*/   OPC_EmitMergeInputChains1_0,
/*17999*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSX_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSX_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->18025
/*18010*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*18011*/   OPC_CaptureGlueInput,
/*18012*/   OPC_RecordChild1, // #1 = $rs
/*18013*/   OPC_RecordChild2, // #2 = $rt
/*18014*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18016*/   OPC_EmitMergeInputChains1_0,
/*18017*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQX_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQX_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->18043
/*18028*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*18029*/   OPC_CaptureGlueInput,
/*18030*/   OPC_RecordChild1, // #1 = $rs
/*18031*/   OPC_RecordChild2, // #2 = $rt
/*18032*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18034*/   OPC_EmitMergeInputChains1_0,
/*18035*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQX_SA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->18061
/*18046*/   OPC_RecordNode,   // #0 = 'MipsMULSA_W_PH' chained node
/*18047*/   OPC_CaptureGlueInput,
/*18048*/   OPC_RecordChild1, // #1 = $rs
/*18049*/   OPC_RecordChild2, // #2 = $rt
/*18050*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18052*/   OPC_EmitMergeInputChains1_0,
/*18053*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULSA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULSA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 18063 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 244
  // #OPC_RecordNode                     = 69
  // #OPC_RecordChild                    = 708
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 48
  // #OPC_MoveChild                      = 175
  // #OPC_MoveParent                     = 622
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 799
  // #OPC_CheckPredicate                 = 225
  // #OPC_CheckOpcode                    = 112
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 342
  // #OPC_SwitchType                     = 105
  // #OPC_CheckChildType                 = 78
  // #OPC_CheckInteger                   = 114
  // #OPC_CheckCondCode                  = 180
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 105
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 29
  // #OPC_EmitStringInteger              = 9
  // #OPC_EmitRegister                   = 54
  // #OPC_EmitConvertToTarget            = 117
  // #OPC_EmitMergeInputChains           = 351
  // #OPC_EmitCopyToReg                  = 8
  // #OPC_EmitNode                       = 144
  // #OPC_EmitNodeXForm                  = 14
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 806

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.inMips16Mode());
  case 3: return (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasDSP());
  case 9: return (Subtarget.hasStandardEncoding());
  case 10: return (Subtarget.hasDSPR2());
  case 11: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 12: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 13: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 14: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 16: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 18: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 21: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 23: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 24: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 25: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 7: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 8: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 9: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 10: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 15: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 17: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 18: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 19: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 24: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<8>(N->getSExtValue()); 
  }
  case 30: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 31: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 32: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 33: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 34: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 35: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 36: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 37: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 38: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 39: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 40: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 41: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 42: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 43: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 44: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 45: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 46: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 47: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 48: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 49: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 50: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 51: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 52: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 53: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 54: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 55: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 56: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 57: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 58: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 59: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 60: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 61: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 62: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 63: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 64: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 65: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

  }
  case 66: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
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
    return SelectAddr(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return SelectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

