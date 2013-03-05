/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Machine Code Emitter                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t AArch64MCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(973078528),	// ADCSwww
    UINT64_C(3120562176),	// ADCSxxx
    UINT64_C(436207616),	// ADCwww
    UINT64_C(2583691264),	// ADCxxx
    UINT64_C(729808896),	// ADDSwww_asr
    UINT64_C(721420288),	// ADDSwww_lsl
    UINT64_C(725614592),	// ADDSwww_lsr
    UINT64_C(723550208),	// ADDSwww_sxtb
    UINT64_C(723558400),	// ADDSwww_sxth
    UINT64_C(723566592),	// ADDSwww_sxtw
    UINT64_C(723574784),	// ADDSwww_sxtx
    UINT64_C(723517440),	// ADDSwww_uxtb
    UINT64_C(723525632),	// ADDSwww_uxth
    UINT64_C(723533824),	// ADDSwww_uxtw
    UINT64_C(723542016),	// ADDSwww_uxtx
    UINT64_C(2871033856),	// ADDSxxw_sxtb
    UINT64_C(2871042048),	// ADDSxxw_sxth
    UINT64_C(2871050240),	// ADDSxxw_sxtw
    UINT64_C(2871001088),	// ADDSxxw_uxtb
    UINT64_C(2871009280),	// ADDSxxw_uxth
    UINT64_C(2871017472),	// ADDSxxw_uxtw
    UINT64_C(2877292544),	// ADDSxxx_asr
    UINT64_C(2868903936),	// ADDSxxx_lsl
    UINT64_C(2873098240),	// ADDSxxx_lsr
    UINT64_C(2871058432),	// ADDSxxx_sxtx
    UINT64_C(2871025664),	// ADDSxxx_uxtx
    UINT64_C(822083584),	// ADDwwi_lsl0_S
    UINT64_C(822083615),	// ADDwwi_lsl0_cmp
    UINT64_C(285212672),	// ADDwwi_lsl0_s
    UINT64_C(826277888),	// ADDwwi_lsl12_S
    UINT64_C(826277919),	// ADDwwi_lsl12_cmp
    UINT64_C(289406976),	// ADDwwi_lsl12_s
    UINT64_C(192937984),	// ADDwww_asr
    UINT64_C(184549376),	// ADDwww_lsl
    UINT64_C(188743680),	// ADDwww_lsr
    UINT64_C(186679296),	// ADDwww_sxtb
    UINT64_C(186687488),	// ADDwww_sxth
    UINT64_C(186695680),	// ADDwww_sxtw
    UINT64_C(186703872),	// ADDwww_sxtx
    UINT64_C(186646528),	// ADDwww_uxtb
    UINT64_C(186654720),	// ADDwww_uxth
    UINT64_C(186662912),	// ADDwww_uxtw
    UINT64_C(186671104),	// ADDwww_uxtx
    UINT64_C(2969567232),	// ADDxxi_lsl0_S
    UINT64_C(2969567263),	// ADDxxi_lsl0_cmp
    UINT64_C(2432696320),	// ADDxxi_lsl0_s
    UINT64_C(2973761536),	// ADDxxi_lsl12_S
    UINT64_C(2973761567),	// ADDxxi_lsl12_cmp
    UINT64_C(2436890624),	// ADDxxi_lsl12_s
    UINT64_C(2334162944),	// ADDxxw_sxtb
    UINT64_C(2334171136),	// ADDxxw_sxth
    UINT64_C(2334179328),	// ADDxxw_sxtw
    UINT64_C(2334130176),	// ADDxxw_uxtb
    UINT64_C(2334138368),	// ADDxxw_uxth
    UINT64_C(2334146560),	// ADDxxw_uxtw
    UINT64_C(2340421632),	// ADDxxx_asr
    UINT64_C(2332033024),	// ADDxxx_lsl
    UINT64_C(2336227328),	// ADDxxx_lsr
    UINT64_C(2334187520),	// ADDxxx_sxtx
    UINT64_C(2334154752),	// ADDxxx_uxtx
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(2415919104),	// ADRPxi
    UINT64_C(268435456),	// ADRxi
    UINT64_C(1912602624),	// ANDSwwi
    UINT64_C(1786773504),	// ANDSwww_asr
    UINT64_C(1778384896),	// ANDSwww_lsl
    UINT64_C(1782579200),	// ANDSwww_lsr
    UINT64_C(1790967808),	// ANDSwww_ror
    UINT64_C(4060086272),	// ANDSxxi
    UINT64_C(3934257152),	// ANDSxxx_asr
    UINT64_C(3925868544),	// ANDSxxx_lsl
    UINT64_C(3930062848),	// ANDSxxx_lsr
    UINT64_C(3938451456),	// ANDSxxx_ror
    UINT64_C(301989888),	// ANDwwi
    UINT64_C(176160768),	// ANDwww_asr
    UINT64_C(167772160),	// ANDwww_lsl
    UINT64_C(171966464),	// ANDwww_lsr
    UINT64_C(180355072),	// ANDwww_ror
    UINT64_C(2449473536),	// ANDxxi
    UINT64_C(2323644416),	// ANDxxx_asr
    UINT64_C(2315255808),	// ANDxxx_lsl
    UINT64_C(2319450112),	// ANDxxx_lsr
    UINT64_C(2327838720),	// ANDxxx_ror
    UINT64_C(448800768),	// ASRVwww
    UINT64_C(2596284416),	// ASRVxxx
    UINT64_C(318798848),	// ASRwwi
    UINT64_C(2470509568),	// ASRxxi
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(3574071296),	// ATix
    UINT64_C(855638016),	// BFIwwii
    UINT64_C(3007315968),	// BFIxxii
    UINT64_C(855638016),	// BFMwwii
    UINT64_C(3007315968),	// BFMxxii
    UINT64_C(855638016),	// BFXILwwii
    UINT64_C(3007315968),	// BFXILxxii
    UINT64_C(1788870656),	// BICSwww_asr
    UINT64_C(1780482048),	// BICSwww_lsl
    UINT64_C(1784676352),	// BICSwww_lsr
    UINT64_C(1793064960),	// BICSwww_ror
    UINT64_C(3936354304),	// BICSxxx_asr
    UINT64_C(3927965696),	// BICSxxx_lsl
    UINT64_C(3932160000),	// BICSxxx_lsr
    UINT64_C(3940548608),	// BICSxxx_ror
    UINT64_C(178257920),	// BICwww_asr
    UINT64_C(169869312),	// BICwww_lsl
    UINT64_C(174063616),	// BICwww_lsr
    UINT64_C(182452224),	// BICwww_ror
    UINT64_C(2325741568),	// BICxxx_asr
    UINT64_C(2317352960),	// BICxxx_lsl
    UINT64_C(2321547264),	// BICxxx_lsr
    UINT64_C(2329935872),	// BICxxx_ror
    UINT64_C(3594452992),	// BLRx
    UINT64_C(2483027968),	// BLimm
    UINT64_C(3558866944),	// BRKi
    UINT64_C(3592355840),	// BRx
    UINT64_C(1409286144),	// Bcc
    UINT64_C(335544320),	// Bimm
    UINT64_C(889192448),	// CBNZw
    UINT64_C(3036676096),	// CBNZx
    UINT64_C(872415232),	// CBZw
    UINT64_C(3019898880),	// CBZx
    UINT64_C(977274880),	// CCMNwi
    UINT64_C(977272832),	// CCMNww
    UINT64_C(3124758528),	// CCMNxi
    UINT64_C(3124756480),	// CCMNxx
    UINT64_C(2051016704),	// CCMPwi
    UINT64_C(2051014656),	// CCMPww
    UINT64_C(4198500352),	// CCMPxi
    UINT64_C(4198498304),	// CCMPxx
    UINT64_C(3573755999),	// CLREXi
    UINT64_C(1522537472),	// CLSww
    UINT64_C(3670021120),	// CLSxx
    UINT64_C(1522536448),	// CLZww
    UINT64_C(3670020096),	// CLZxx
    UINT64_C(729808927),	// CMNww_asr
    UINT64_C(721420319),	// CMNww_lsl
    UINT64_C(725614623),	// CMNww_lsr
    UINT64_C(723550239),	// CMNww_sxtb
    UINT64_C(723558431),	// CMNww_sxth
    UINT64_C(723566623),	// CMNww_sxtw
    UINT64_C(723574815),	// CMNww_sxtx
    UINT64_C(723517471),	// CMNww_uxtb
    UINT64_C(723525663),	// CMNww_uxth
    UINT64_C(723533855),	// CMNww_uxtw
    UINT64_C(723542047),	// CMNww_uxtx
    UINT64_C(2871033887),	// CMNxw_sxtb
    UINT64_C(2871042079),	// CMNxw_sxth
    UINT64_C(2871050271),	// CMNxw_sxtw
    UINT64_C(2871001119),	// CMNxw_uxtb
    UINT64_C(2871009311),	// CMNxw_uxth
    UINT64_C(2871017503),	// CMNxw_uxtw
    UINT64_C(2877292575),	// CMNxx_asr
    UINT64_C(2868903967),	// CMNxx_lsl
    UINT64_C(2873098271),	// CMNxx_lsr
    UINT64_C(2871058463),	// CMNxx_sxtx
    UINT64_C(2871025695),	// CMNxx_uxtx
    UINT64_C(1803550751),	// CMPww_asr
    UINT64_C(1795162143),	// CMPww_lsl
    UINT64_C(1799356447),	// CMPww_lsr
    UINT64_C(1797292063),	// CMPww_sxtb
    UINT64_C(1797300255),	// CMPww_sxth
    UINT64_C(1797308447),	// CMPww_sxtw
    UINT64_C(1797316639),	// CMPww_sxtx
    UINT64_C(1797259295),	// CMPww_uxtb
    UINT64_C(1797267487),	// CMPww_uxth
    UINT64_C(1797275679),	// CMPww_uxtw
    UINT64_C(1797283871),	// CMPww_uxtx
    UINT64_C(3944775711),	// CMPxw_sxtb
    UINT64_C(3944783903),	// CMPxw_sxth
    UINT64_C(3944792095),	// CMPxw_sxtw
    UINT64_C(3944742943),	// CMPxw_uxtb
    UINT64_C(3944751135),	// CMPxw_uxth
    UINT64_C(3944759327),	// CMPxw_uxtw
    UINT64_C(3951034399),	// CMPxx_asr
    UINT64_C(3942645791),	// CMPxx_lsl
    UINT64_C(3946840095),	// CMPxx_lsr
    UINT64_C(3944800287),	// CMPxx_sxtx
    UINT64_C(3944767519),	// CMPxx_uxtx
    UINT64_C(0),
    UINT64_C(448806912),	// CRC32B_www
    UINT64_C(448811008),	// CRC32CB_www
    UINT64_C(448812032),	// CRC32CH_www
    UINT64_C(448813056),	// CRC32CW_www
    UINT64_C(2596297728),	// CRC32CX_wwx
    UINT64_C(448807936),	// CRC32H_www
    UINT64_C(448808960),	// CRC32W_www
    UINT64_C(2596293632),	// CRC32X_wwx
    UINT64_C(444596224),	// CSELwwwc
    UINT64_C(2592079872),	// CSELxxxc
    UINT64_C(444597248),	// CSINCwwwc
    UINT64_C(2592080896),	// CSINCxxxc
    UINT64_C(1518338048),	// CSINVwwwc
    UINT64_C(3665821696),	// CSINVxxxc
    UINT64_C(1518339072),	// CSNEGwwwc
    UINT64_C(3665822720),	// CSNEGxxxc
    UINT64_C(3567255553),	// DCPS1i
    UINT64_C(3567255554),	// DCPS2i
    UINT64_C(3567255555),	// DCPS3i
    UINT64_C(3574071296),	// DCix
    UINT64_C(3573756095),	// DMBi
    UINT64_C(3602842592),	// DRPS
    UINT64_C(3573756063),	// DSBi
    UINT64_C(1251999744),	// EONwww_asr
    UINT64_C(1243611136),	// EONwww_lsl
    UINT64_C(1247805440),	// EONwww_lsr
    UINT64_C(1256194048),	// EONwww_ror
    UINT64_C(3399483392),	// EONxxx_asr
    UINT64_C(3391094784),	// EONxxx_lsl
    UINT64_C(3395289088),	// EONxxx_lsr
    UINT64_C(3403677696),	// EONxxx_ror
    UINT64_C(1375731712),	// EORwwi
    UINT64_C(1249902592),	// EORwww_asr
    UINT64_C(1241513984),	// EORwww_lsl
    UINT64_C(1245708288),	// EORwww_lsr
    UINT64_C(1254096896),	// EORwww_ror
    UINT64_C(3523215360),	// EORxxi
    UINT64_C(3397386240),	// EORxxx_asr
    UINT64_C(3388997632),	// EORxxx_lsl
    UINT64_C(3393191936),	// EORxxx_lsr
    UINT64_C(3401580544),	// EORxxx_ror
    UINT64_C(3600745440),	// ERET
    UINT64_C(327155712),	// EXTRwwwi
    UINT64_C(2478833664),	// EXTRxxxi
    UINT64_C(0),
    UINT64_C(509657088),	// FABSdd
    UINT64_C(505462784),	// FABSss
    UINT64_C(509618176),	// FADDddd
    UINT64_C(505423872),	// FADDsss
    UINT64_C(509608976),	// FCCMPEdd
    UINT64_C(505414672),	// FCCMPEss
    UINT64_C(509608960),	// FCCMPdd
    UINT64_C(505414656),	// FCCMPss
    UINT64_C(509616128),	// FCMPdd_quiet
    UINT64_C(509616144),	// FCMPdd_sig
    UINT64_C(509616136),	// FCMPdi_quiet
    UINT64_C(509616152),	// FCMPdi_sig
    UINT64_C(505421832),	// FCMPsi_quiet
    UINT64_C(505421848),	// FCMPsi_sig
    UINT64_C(505421824),	// FCMPss_quiet
    UINT64_C(505421840),	// FCMPss_sig
    UINT64_C(509611008),	// FCSELdddc
    UINT64_C(505416704),	// FCSELsssc
    UINT64_C(509870080),	// FCVTASwd
    UINT64_C(505675776),	// FCVTASws
    UINT64_C(2657353728),	// FCVTASxd
    UINT64_C(2653159424),	// FCVTASxs
    UINT64_C(509935616),	// FCVTAUwd
    UINT64_C(505741312),	// FCVTAUws
    UINT64_C(2657419264),	// FCVTAUxd
    UINT64_C(2653224960),	// FCVTAUxs
    UINT64_C(510656512),	// FCVTMSwd
    UINT64_C(506462208),	// FCVTMSws
    UINT64_C(2658140160),	// FCVTMSxd
    UINT64_C(2653945856),	// FCVTMSxs
    UINT64_C(510722048),	// FCVTMUwd
    UINT64_C(506527744),	// FCVTMUws
    UINT64_C(2658205696),	// FCVTMUxd
    UINT64_C(2654011392),	// FCVTMUxs
    UINT64_C(509607936),	// FCVTNSwd
    UINT64_C(505413632),	// FCVTNSws
    UINT64_C(2657091584),	// FCVTNSxd
    UINT64_C(2652897280),	// FCVTNSxs
    UINT64_C(509673472),	// FCVTNUwd
    UINT64_C(505479168),	// FCVTNUws
    UINT64_C(2657157120),	// FCVTNUxd
    UINT64_C(2652962816),	// FCVTNUxs
    UINT64_C(510132224),	// FCVTPSwd
    UINT64_C(505937920),	// FCVTPSws
    UINT64_C(2657615872),	// FCVTPSxd
    UINT64_C(2653421568),	// FCVTPSxs
    UINT64_C(510197760),	// FCVTPUwd
    UINT64_C(506003456),	// FCVTPUws
    UINT64_C(2657681408),	// FCVTPUxd
    UINT64_C(2653487104),	// FCVTPUxs
    UINT64_C(511180800),	// FCVTZSwd
    UINT64_C(509083648),	// FCVTZSwdi
    UINT64_C(506986496),	// FCVTZSws
    UINT64_C(504889344),	// FCVTZSwsi
    UINT64_C(2658664448),	// FCVTZSxd
    UINT64_C(2656567296),	// FCVTZSxdi
    UINT64_C(2654470144),	// FCVTZSxs
    UINT64_C(2652372992),	// FCVTZSxsi
    UINT64_C(511246336),	// FCVTZUwd
    UINT64_C(509149184),	// FCVTZUwdi
    UINT64_C(507052032),	// FCVTZUws
    UINT64_C(504954880),	// FCVTZUwsi
    UINT64_C(2658729984),	// FCVTZUxd
    UINT64_C(2656632832),	// FCVTZUxdi
    UINT64_C(2654535680),	// FCVTZUxs
    UINT64_C(2652438528),	// FCVTZUxsi
    UINT64_C(518176768),	// FCVTdh
    UINT64_C(505593856),	// FCVTds
    UINT64_C(509853696),	// FCVThd
    UINT64_C(505659392),	// FCVThs
    UINT64_C(509755392),	// FCVTsd
    UINT64_C(518144000),	// FCVTsh
    UINT64_C(509614080),	// FDIVddd
    UINT64_C(505419776),	// FDIVsss
    UINT64_C(524288000),	// FMADDdddd
    UINT64_C(520093696),	// FMADDssss
    UINT64_C(509634560),	// FMAXNMddd
    UINT64_C(505440256),	// FMAXNMsss
    UINT64_C(509626368),	// FMAXddd
    UINT64_C(505432064),	// FMAXsss
    UINT64_C(509638656),	// FMINNMddd
    UINT64_C(505444352),	// FMINNMsss
    UINT64_C(509630464),	// FMINddd
    UINT64_C(505436160),	// FMINsss
    UINT64_C(509624320),	// FMOVdd
    UINT64_C(509612032),	// FMOVdi
    UINT64_C(2657550336),	// FMOVdx
    UINT64_C(505417728),	// FMOVsi
    UINT64_C(505430016),	// FMOVss
    UINT64_C(505872384),	// FMOVsw
    UINT64_C(2662268928),	// FMOVvx
    UINT64_C(505806848),	// FMOVws
    UINT64_C(2657484800),	// FMOVxd
    UINT64_C(2662203392),	// FMOVxv
    UINT64_C(524320768),	// FMSUBdddd
    UINT64_C(520126464),	// FMSUBssss
    UINT64_C(509609984),	// FMULddd
    UINT64_C(505415680),	// FMULsss
    UINT64_C(509689856),	// FNEGdd
    UINT64_C(505495552),	// FNEGss
    UINT64_C(526385152),	// FNMADDdddd
    UINT64_C(522190848),	// FNMADDssss
    UINT64_C(526417920),	// FNMSUBdddd
    UINT64_C(522223616),	// FNMSUBssss
    UINT64_C(509642752),	// FNMULddd
    UINT64_C(505448448),	// FNMULsss
    UINT64_C(510017536),	// FRINTAdd
    UINT64_C(505823232),	// FRINTAss
    UINT64_C(510115840),	// FRINTIdd
    UINT64_C(505921536),	// FRINTIss
    UINT64_C(509952000),	// FRINTMdd
    UINT64_C(505757696),	// FRINTMss
    UINT64_C(509886464),	// FRINTNdd
    UINT64_C(505692160),	// FRINTNss
    UINT64_C(509919232),	// FRINTPdd
    UINT64_C(505724928),	// FRINTPss
    UINT64_C(510083072),	// FRINTXdd
    UINT64_C(505888768),	// FRINTXss
    UINT64_C(509984768),	// FRINTZdd
    UINT64_C(505790464),	// FRINTZss
    UINT64_C(509722624),	// FSQRTdd
    UINT64_C(505528320),	// FSQRTss
    UINT64_C(509622272),	// FSUBddd
    UINT64_C(505427968),	// FSUBsss
    UINT64_C(3573751839),	// HINTi
    UINT64_C(3560964096),	// HLTi
    UINT64_C(3556769794),	// HVCi
    UINT64_C(3574071327),	// ICi
    UINT64_C(3574071296),	// ICix
    UINT64_C(3573756127),	// ISBi
    UINT64_C(146833408),	// LDAR_byte
    UINT64_C(3368058880),	// LDAR_dword
    UINT64_C(1220575232),	// LDAR_hword
    UINT64_C(2294317056),	// LDAR_word
    UINT64_C(3361767424),	// LDAXP_dword
    UINT64_C(2288025600),	// LDAXP_word
    UINT64_C(138444800),	// LDAXR_byte
    UINT64_C(3359670272),	// LDAXR_dword
    UINT64_C(1212186624),	// LDAXR_hword
    UINT64_C(2285928448),	// LDAXR_word
    UINT64_C(1765801984),	// LDPSWx
    UINT64_C(1757413376),	// LDPSWx_PostInd
    UINT64_C(1774190592),	// LDPSWx_PreInd
    UINT64_C(968884224),	// LDRSBw
    UINT64_C(952108032),	// LDRSBw_PostInd
    UINT64_C(952110080),	// LDRSBw_PreInd
    UINT64_C(952107008),	// LDRSBw_U
    UINT64_C(954206208),	// LDRSBw_Wm_RegOffset
    UINT64_C(954214400),	// LDRSBw_Xm_RegOffset
    UINT64_C(964689920),	// LDRSBx
    UINT64_C(947913728),	// LDRSBx_PostInd
    UINT64_C(947915776),	// LDRSBx_PreInd
    UINT64_C(947912704),	// LDRSBx_U
    UINT64_C(950011904),	// LDRSBx_Wm_RegOffset
    UINT64_C(950020096),	// LDRSBx_Xm_RegOffset
    UINT64_C(2042626048),	// LDRSHw
    UINT64_C(2025849856),	// LDRSHw_PostInd
    UINT64_C(2025851904),	// LDRSHw_PreInd
    UINT64_C(2025848832),	// LDRSHw_U
    UINT64_C(2027948032),	// LDRSHw_Wm_RegOffset
    UINT64_C(2027956224),	// LDRSHw_Xm_RegOffset
    UINT64_C(2038431744),	// LDRSHx
    UINT64_C(2021655552),	// LDRSHx_PostInd
    UINT64_C(2021657600),	// LDRSHx_PreInd
    UINT64_C(2021654528),	// LDRSHx_U
    UINT64_C(2023753728),	// LDRSHx_Wm_RegOffset
    UINT64_C(2023761920),	// LDRSHx_Xm_RegOffset
    UINT64_C(3112173568),	// LDRSWx
    UINT64_C(3095397376),	// LDRSWx_PostInd
    UINT64_C(3095399424),	// LDRSWx_PreInd
    UINT64_C(3097495552),	// LDRSWx_Wm_RegOffset
    UINT64_C(3097503744),	// LDRSWx_Xm_RegOffset
    UINT64_C(2550136832),	// LDRSWx_lit
    UINT64_C(1543503872),	// LDRd_lit
    UINT64_C(2617245696),	// LDRq_lit
    UINT64_C(469762048),	// LDRs_lit
    UINT64_C(402653184),	// LDRw_lit
    UINT64_C(1476395008),	// LDRx_lit
    UINT64_C(952109056),	// LDTRSBw
    UINT64_C(947914752),	// LDTRSBx
    UINT64_C(2025850880),	// LDTRSHw
    UINT64_C(2021656576),	// LDTRSHx
    UINT64_C(3095398400),	// LDTRSWx
    UINT64_C(3095396352),	// LDURSWx
    UINT64_C(3361734656),	// LDXP_dword
    UINT64_C(2287992832),	// LDXP_word
    UINT64_C(138412032),	// LDXR_byte
    UINT64_C(3359637504),	// LDXR_dword
    UINT64_C(1212153856),	// LDXR_hword
    UINT64_C(2285895680),	// LDXR_word
    UINT64_C(2034237440),	// LS16_LDR
    UINT64_C(2017460224),	// LS16_LDUR
    UINT64_C(2017461248),	// LS16_PostInd_LDR
    UINT64_C(2013266944),	// LS16_PostInd_STR
    UINT64_C(2017463296),	// LS16_PreInd_LDR
    UINT64_C(2013268992),	// LS16_PreInd_STR
    UINT64_C(2030043136),	// LS16_STR
    UINT64_C(2013265920),	// LS16_STUR
    UINT64_C(2017462272),	// LS16_UnPriv_LDR
    UINT64_C(2013267968),	// LS16_UnPriv_STR
    UINT64_C(2019559424),	// LS16_Wm_RegOffset_LDR
    UINT64_C(2015365120),	// LS16_Wm_RegOffset_STR
    UINT64_C(2019567616),	// LS16_Xm_RegOffset_LDR
    UINT64_C(2015373312),	// LS16_Xm_RegOffset_STR
    UINT64_C(3107979264),	// LS32_LDR
    UINT64_C(3091202048),	// LS32_LDUR
    UINT64_C(3091203072),	// LS32_PostInd_LDR
    UINT64_C(3087008768),	// LS32_PostInd_STR
    UINT64_C(3091205120),	// LS32_PreInd_LDR
    UINT64_C(3087010816),	// LS32_PreInd_STR
    UINT64_C(3103784960),	// LS32_STR
    UINT64_C(3087007744),	// LS32_STUR
    UINT64_C(3091204096),	// LS32_UnPriv_LDR
    UINT64_C(3087009792),	// LS32_UnPriv_STR
    UINT64_C(3093301248),	// LS32_Wm_RegOffset_LDR
    UINT64_C(3089106944),	// LS32_Wm_RegOffset_STR
    UINT64_C(3093309440),	// LS32_Xm_RegOffset_LDR
    UINT64_C(3089115136),	// LS32_Xm_RegOffset_STR
    UINT64_C(4181721088),	// LS64_LDR
    UINT64_C(4164943872),	// LS64_LDUR
    UINT64_C(4164944896),	// LS64_PostInd_LDR
    UINT64_C(4160750592),	// LS64_PostInd_STR
    UINT64_C(4164946944),	// LS64_PreInd_LDR
    UINT64_C(4160752640),	// LS64_PreInd_STR
    UINT64_C(4177526784),	// LS64_STR
    UINT64_C(4160749568),	// LS64_STUR
    UINT64_C(4164945920),	// LS64_UnPriv_LDR
    UINT64_C(4160751616),	// LS64_UnPriv_STR
    UINT64_C(4167043072),	// LS64_Wm_RegOffset_LDR
    UINT64_C(4162848768),	// LS64_Wm_RegOffset_STR
    UINT64_C(4167051264),	// LS64_Xm_RegOffset_LDR
    UINT64_C(4162856960),	// LS64_Xm_RegOffset_STR
    UINT64_C(960495616),	// LS8_LDR
    UINT64_C(943718400),	// LS8_LDUR
    UINT64_C(943719424),	// LS8_PostInd_LDR
    UINT64_C(939525120),	// LS8_PostInd_STR
    UINT64_C(943721472),	// LS8_PreInd_LDR
    UINT64_C(939527168),	// LS8_PreInd_STR
    UINT64_C(956301312),	// LS8_STR
    UINT64_C(939524096),	// LS8_STUR
    UINT64_C(943720448),	// LS8_UnPriv_LDR
    UINT64_C(939526144),	// LS8_UnPriv_STR
    UINT64_C(945817600),	// LS8_Wm_RegOffset_LDR
    UINT64_C(941623296),	// LS8_Wm_RegOffset_STR
    UINT64_C(945825792),	// LS8_Xm_RegOffset_LDR
    UINT64_C(941631488),	// LS8_Xm_RegOffset_STR
    UINT64_C(1035993088),	// LSFP128_LDR
    UINT64_C(1019215872),	// LSFP128_LDUR
    UINT64_C(1019216896),	// LSFP128_PostInd_LDR
    UINT64_C(1015022592),	// LSFP128_PostInd_STR
    UINT64_C(1019218944),	// LSFP128_PreInd_LDR
    UINT64_C(1015024640),	// LSFP128_PreInd_STR
    UINT64_C(1031798784),	// LSFP128_STR
    UINT64_C(1015021568),	// LSFP128_STUR
    UINT64_C(1021315072),	// LSFP128_Wm_RegOffset_LDR
    UINT64_C(1017120768),	// LSFP128_Wm_RegOffset_STR
    UINT64_C(1021323264),	// LSFP128_Xm_RegOffset_LDR
    UINT64_C(1017128960),	// LSFP128_Xm_RegOffset_STR
    UINT64_C(2101346304),	// LSFP16_LDR
    UINT64_C(2084569088),	// LSFP16_LDUR
    UINT64_C(2084570112),	// LSFP16_PostInd_LDR
    UINT64_C(2080375808),	// LSFP16_PostInd_STR
    UINT64_C(2084572160),	// LSFP16_PreInd_LDR
    UINT64_C(2080377856),	// LSFP16_PreInd_STR
    UINT64_C(2097152000),	// LSFP16_STR
    UINT64_C(2080374784),	// LSFP16_STUR
    UINT64_C(2086668288),	// LSFP16_Wm_RegOffset_LDR
    UINT64_C(2082473984),	// LSFP16_Wm_RegOffset_STR
    UINT64_C(2086676480),	// LSFP16_Xm_RegOffset_LDR
    UINT64_C(2082482176),	// LSFP16_Xm_RegOffset_STR
    UINT64_C(3175088128),	// LSFP32_LDR
    UINT64_C(3158310912),	// LSFP32_LDUR
    UINT64_C(3158311936),	// LSFP32_PostInd_LDR
    UINT64_C(3154117632),	// LSFP32_PostInd_STR
    UINT64_C(3158313984),	// LSFP32_PreInd_LDR
    UINT64_C(3154119680),	// LSFP32_PreInd_STR
    UINT64_C(3170893824),	// LSFP32_STR
    UINT64_C(3154116608),	// LSFP32_STUR
    UINT64_C(3160410112),	// LSFP32_Wm_RegOffset_LDR
    UINT64_C(3156215808),	// LSFP32_Wm_RegOffset_STR
    UINT64_C(3160418304),	// LSFP32_Xm_RegOffset_LDR
    UINT64_C(3156224000),	// LSFP32_Xm_RegOffset_STR
    UINT64_C(4248829952),	// LSFP64_LDR
    UINT64_C(4232052736),	// LSFP64_LDUR
    UINT64_C(4232053760),	// LSFP64_PostInd_LDR
    UINT64_C(4227859456),	// LSFP64_PostInd_STR
    UINT64_C(4232055808),	// LSFP64_PreInd_LDR
    UINT64_C(4227861504),	// LSFP64_PreInd_STR
    UINT64_C(4244635648),	// LSFP64_STR
    UINT64_C(4227858432),	// LSFP64_STUR
    UINT64_C(4234151936),	// LSFP64_Wm_RegOffset_LDR
    UINT64_C(4229957632),	// LSFP64_Wm_RegOffset_STR
    UINT64_C(4234160128),	// LSFP64_Xm_RegOffset_LDR
    UINT64_C(4229965824),	// LSFP64_Xm_RegOffset_STR
    UINT64_C(1027604480),	// LSFP8_LDR
    UINT64_C(1010827264),	// LSFP8_LDUR
    UINT64_C(1010828288),	// LSFP8_PostInd_LDR
    UINT64_C(1006633984),	// LSFP8_PostInd_STR
    UINT64_C(1010830336),	// LSFP8_PreInd_LDR
    UINT64_C(1006636032),	// LSFP8_PreInd_STR
    UINT64_C(1023410176),	// LSFP8_STR
    UINT64_C(1006632960),	// LSFP8_STUR
    UINT64_C(1012926464),	// LSFP8_Wm_RegOffset_LDR
    UINT64_C(1008732160),	// LSFP8_Wm_RegOffset_STR
    UINT64_C(1012934656),	// LSFP8_Xm_RegOffset_LDR
    UINT64_C(1008740352),	// LSFP8_Xm_RegOffset_STR
    UINT64_C(2906652672),	// LSFPPair128_LDR
    UINT64_C(2889875456),	// LSFPPair128_NonTemp_LDR
    UINT64_C(2885681152),	// LSFPPair128_NonTemp_STR
    UINT64_C(2898264064),	// LSFPPair128_PostInd_LDR
    UINT64_C(2894069760),	// LSFPPair128_PostInd_STR
    UINT64_C(2915041280),	// LSFPPair128_PreInd_LDR
    UINT64_C(2910846976),	// LSFPPair128_PreInd_STR
    UINT64_C(2902458368),	// LSFPPair128_STR
    UINT64_C(759169024),	// LSFPPair32_LDR
    UINT64_C(742391808),	// LSFPPair32_NonTemp_LDR
    UINT64_C(738197504),	// LSFPPair32_NonTemp_STR
    UINT64_C(750780416),	// LSFPPair32_PostInd_LDR
    UINT64_C(746586112),	// LSFPPair32_PostInd_STR
    UINT64_C(767557632),	// LSFPPair32_PreInd_LDR
    UINT64_C(763363328),	// LSFPPair32_PreInd_STR
    UINT64_C(754974720),	// LSFPPair32_STR
    UINT64_C(1832910848),	// LSFPPair64_LDR
    UINT64_C(1816133632),	// LSFPPair64_NonTemp_LDR
    UINT64_C(1811939328),	// LSFPPair64_NonTemp_STR
    UINT64_C(1824522240),	// LSFPPair64_PostInd_LDR
    UINT64_C(1820327936),	// LSFPPair64_PostInd_STR
    UINT64_C(1841299456),	// LSFPPair64_PreInd_LDR
    UINT64_C(1837105152),	// LSFPPair64_PreInd_STR
    UINT64_C(1828716544),	// LSFPPair64_STR
    UINT64_C(448798720),	// LSLVwww
    UINT64_C(2596282368),	// LSLVxxx
    UINT64_C(1392508928),	// LSLwwi
    UINT64_C(3544186880),	// LSLxxi
    UINT64_C(692060160),	// LSPair32_LDR
    UINT64_C(675282944),	// LSPair32_NonTemp_LDR
    UINT64_C(671088640),	// LSPair32_NonTemp_STR
    UINT64_C(683671552),	// LSPair32_PostInd_LDR
    UINT64_C(679477248),	// LSPair32_PostInd_STR
    UINT64_C(700448768),	// LSPair32_PreInd_LDR
    UINT64_C(696254464),	// LSPair32_PreInd_STR
    UINT64_C(687865856),	// LSPair32_STR
    UINT64_C(2839543808),	// LSPair64_LDR
    UINT64_C(2822766592),	// LSPair64_NonTemp_LDR
    UINT64_C(2818572288),	// LSPair64_NonTemp_STR
    UINT64_C(2831155200),	// LSPair64_PostInd_LDR
    UINT64_C(2826960896),	// LSPair64_PostInd_STR
    UINT64_C(2847932416),	// LSPair64_PreInd_LDR
    UINT64_C(2843738112),	// LSPair64_PreInd_STR
    UINT64_C(2835349504),	// LSPair64_STR
    UINT64_C(448799744),	// LSRVwww
    UINT64_C(2596283392),	// LSRVxxx
    UINT64_C(1392540672),	// LSRwwi
    UINT64_C(3544251392),	// LSRxxi
    UINT64_C(452984832),	// MADDwwww
    UINT64_C(2600468480),	// MADDxxxx
    UINT64_C(1920991232),	// MOVKwii
    UINT64_C(4068474880),	// MOVKxii
    UINT64_C(310378496),	// MOVNwii
    UINT64_C(2457862144),	// MOVNxii
    UINT64_C(1384120320),	// MOVZwii
    UINT64_C(3531603968),	// MOVZxii
    UINT64_C(3575644160),	// MRSxi
    UINT64_C(3573563423),	// MSRii
    UINT64_C(3573547008),	// MSRix
    UINT64_C(453017600),	// MSUBwwww
    UINT64_C(2600501248),	// MSUBxxxx
    UINT64_C(715129824),	// MVNww_asr
    UINT64_C(706741216),	// MVNww_lsl
    UINT64_C(710935520),	// MVNww_lsr
    UINT64_C(719324128),	// MVNww_ror
    UINT64_C(2862613472),	// MVNxx_asr
    UINT64_C(2854224864),	// MVNxx_lsl
    UINT64_C(2858419168),	// MVNxx_lsr
    UINT64_C(2866807776),	// MVNxx_ror
    UINT64_C(715128832),	// ORNwww_asr
    UINT64_C(706740224),	// ORNwww_lsl
    UINT64_C(710934528),	// ORNwww_lsr
    UINT64_C(719323136),	// ORNwww_ror
    UINT64_C(2862612480),	// ORNxxx_asr
    UINT64_C(2854223872),	// ORNxxx_lsl
    UINT64_C(2858418176),	// ORNxxx_lsr
    UINT64_C(2866806784),	// ORNxxx_ror
    UINT64_C(838860800),	// ORRwwi
    UINT64_C(713031680),	// ORRwww_asr
    UINT64_C(704643072),	// ORRwww_lsl
    UINT64_C(708837376),	// ORRwww_lsr
    UINT64_C(717225984),	// ORRwww_ror
    UINT64_C(2986344448),	// ORRxxi
    UINT64_C(2860515328),	// ORRxxx_asr
    UINT64_C(2852126720),	// ORRxxx_lsl
    UINT64_C(2856321024),	// ORRxxx_lsr
    UINT64_C(2864709632),	// ORRxxx_ror
    UINT64_C(4185915392),	// PRFM
    UINT64_C(4171237376),	// PRFM_Wm_RegOffset
    UINT64_C(4171245568),	// PRFM_Xm_RegOffset
    UINT64_C(3623878656),	// PRFM_lit
    UINT64_C(4169138176),	// PRFUM
    UINT64_C(1522532352),	// RBITww
    UINT64_C(3670016000),	// RBITxx
    UINT64_C(0),
    UINT64_C(3596550144),	// RETx
    UINT64_C(1522533376),	// REV16ww
    UINT64_C(3670017024),	// REV16xx
    UINT64_C(3670018048),	// REV32xx
    UINT64_C(1522534400),	// REVww
    UINT64_C(3670019072),	// REVxx
    UINT64_C(448801792),	// RORVwww
    UINT64_C(2596285440),	// RORVxxx
    UINT64_C(2046820352),	// SBCSwww
    UINT64_C(4194304000),	// SBCSxxx
    UINT64_C(1509949440),	// SBCwww
    UINT64_C(3657433088),	// SBCxxx
    UINT64_C(318767104),	// SBFIZwwii
    UINT64_C(2470445056),	// SBFIZxxii
    UINT64_C(318767104),	// SBFMwwii
    UINT64_C(2470445056),	// SBFMxxii
    UINT64_C(318767104),	// SBFXwwii
    UINT64_C(2470445056),	// SBFXxxii
    UINT64_C(509739008),	// SCVTFdw
    UINT64_C(507641856),	// SCVTFdwi
    UINT64_C(2657222656),	// SCVTFdx
    UINT64_C(2655125504),	// SCVTFdxi
    UINT64_C(505544704),	// SCVTFsw
    UINT64_C(503447552),	// SCVTFswi
    UINT64_C(2653028352),	// SCVTFsx
    UINT64_C(2650931200),	// SCVTFsxi
    UINT64_C(448793600),	// SDIVwww
    UINT64_C(2596277248),	// SDIVxxx
    UINT64_C(2602565632),	// SMADDLxwwx
    UINT64_C(3556769795),	// SMCi
    UINT64_C(2602598400),	// SMSUBLxwwx
    UINT64_C(2604662784),	// SMULHxxx
    UINT64_C(142639104),	// STLR_byte
    UINT64_C(3363864576),	// STLR_dword
    UINT64_C(1216380928),	// STLR_hword
    UINT64_C(2290122752),	// STLR_word
    UINT64_C(3357573120),	// STLXP_dword
    UINT64_C(2283831296),	// STLXP_word
    UINT64_C(134250496),	// STLXR_byte
    UINT64_C(3355475968),	// STLXR_dword
    UINT64_C(1207992320),	// STLXR_hword
    UINT64_C(2281734144),	// STLXR_word
    UINT64_C(3357540352),	// STXP_dword
    UINT64_C(2283798528),	// STXP_word
    UINT64_C(134217728),	// STXR_byte
    UINT64_C(3355443200),	// STXR_dword
    UINT64_C(1207959552),	// STXR_hword
    UINT64_C(2281701376),	// STXR_word
    UINT64_C(1803550720),	// SUBSwww_asr
    UINT64_C(1795162112),	// SUBSwww_lsl
    UINT64_C(1799356416),	// SUBSwww_lsr
    UINT64_C(1797292032),	// SUBSwww_sxtb
    UINT64_C(1797300224),	// SUBSwww_sxth
    UINT64_C(1797308416),	// SUBSwww_sxtw
    UINT64_C(1797316608),	// SUBSwww_sxtx
    UINT64_C(1797259264),	// SUBSwww_uxtb
    UINT64_C(1797267456),	// SUBSwww_uxth
    UINT64_C(1797275648),	// SUBSwww_uxtw
    UINT64_C(1797283840),	// SUBSwww_uxtx
    UINT64_C(3944775680),	// SUBSxxw_sxtb
    UINT64_C(3944783872),	// SUBSxxw_sxth
    UINT64_C(3944792064),	// SUBSxxw_sxtw
    UINT64_C(3944742912),	// SUBSxxw_uxtb
    UINT64_C(3944751104),	// SUBSxxw_uxth
    UINT64_C(3944759296),	// SUBSxxw_uxtw
    UINT64_C(3951034368),	// SUBSxxx_asr
    UINT64_C(3942645760),	// SUBSxxx_lsl
    UINT64_C(3946840064),	// SUBSxxx_lsr
    UINT64_C(3944800256),	// SUBSxxx_sxtx
    UINT64_C(3944767488),	// SUBSxxx_uxtx
    UINT64_C(1895825408),	// SUBwwi_lsl0_S
    UINT64_C(1895825439),	// SUBwwi_lsl0_cmp
    UINT64_C(1358954496),	// SUBwwi_lsl0_s
    UINT64_C(1900019712),	// SUBwwi_lsl12_S
    UINT64_C(1900019743),	// SUBwwi_lsl12_cmp
    UINT64_C(1363148800),	// SUBwwi_lsl12_s
    UINT64_C(1266679808),	// SUBwww_asr
    UINT64_C(1258291200),	// SUBwww_lsl
    UINT64_C(1262485504),	// SUBwww_lsr
    UINT64_C(1260421120),	// SUBwww_sxtb
    UINT64_C(1260429312),	// SUBwww_sxth
    UINT64_C(1260437504),	// SUBwww_sxtw
    UINT64_C(1260445696),	// SUBwww_sxtx
    UINT64_C(1260388352),	// SUBwww_uxtb
    UINT64_C(1260396544),	// SUBwww_uxth
    UINT64_C(1260404736),	// SUBwww_uxtw
    UINT64_C(1260412928),	// SUBwww_uxtx
    UINT64_C(4043309056),	// SUBxxi_lsl0_S
    UINT64_C(4043309087),	// SUBxxi_lsl0_cmp
    UINT64_C(3506438144),	// SUBxxi_lsl0_s
    UINT64_C(4047503360),	// SUBxxi_lsl12_S
    UINT64_C(4047503391),	// SUBxxi_lsl12_cmp
    UINT64_C(3510632448),	// SUBxxi_lsl12_s
    UINT64_C(3407904768),	// SUBxxw_sxtb
    UINT64_C(3407912960),	// SUBxxw_sxth
    UINT64_C(3407921152),	// SUBxxw_sxtw
    UINT64_C(3407872000),	// SUBxxw_uxtb
    UINT64_C(3407880192),	// SUBxxw_uxth
    UINT64_C(3407888384),	// SUBxxw_uxtw
    UINT64_C(3414163456),	// SUBxxx_asr
    UINT64_C(3405774848),	// SUBxxx_lsl
    UINT64_C(3409969152),	// SUBxxx_lsr
    UINT64_C(3407929344),	// SUBxxx_sxtx
    UINT64_C(3407896576),	// SUBxxx_uxtx
    UINT64_C(3556769793),	// SVCi
    UINT64_C(318774272),	// SXTBww
    UINT64_C(2470452224),	// SXTBxw
    UINT64_C(318782464),	// SXTHww
    UINT64_C(2470460416),	// SXTHxw
    UINT64_C(2470476800),	// SXTWxw
    UINT64_C(3576168448),	// SYSLxicci
    UINT64_C(3574071296),	// SYSiccix
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(922746880),	// TBNZwii
    UINT64_C(922746880),	// TBNZxii
    UINT64_C(905969664),	// TBZwii
    UINT64_C(905969664),	// TBZxii
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(3574071327),	// TLBIi
    UINT64_C(3574071296),	// TLBIix
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(1786773535),	// TSTww_asr
    UINT64_C(1778384927),	// TSTww_lsl
    UINT64_C(1782579231),	// TSTww_lsr
    UINT64_C(1790967839),	// TSTww_ror
    UINT64_C(3934257183),	// TSTxx_asr
    UINT64_C(3925868575),	// TSTxx_lsl
    UINT64_C(3930062879),	// TSTxx_lsr
    UINT64_C(3938451487),	// TSTxx_ror
    UINT64_C(1392508928),	// UBFIZwwii
    UINT64_C(3544186880),	// UBFIZxxii
    UINT64_C(1392508928),	// UBFMwwii
    UINT64_C(3544186880),	// UBFMxxii
    UINT64_C(1392508928),	// UBFXwwii
    UINT64_C(3544186880),	// UBFXxxii
    UINT64_C(509804544),	// UCVTFdw
    UINT64_C(507707392),	// UCVTFdwi
    UINT64_C(2657288192),	// UCVTFdx
    UINT64_C(2655191040),	// UCVTFdxi
    UINT64_C(505610240),	// UCVTFsw
    UINT64_C(503513088),	// UCVTFswi
    UINT64_C(2653093888),	// UCVTFsx
    UINT64_C(2650996736),	// UCVTFsxi
    UINT64_C(448792576),	// UDIVwww
    UINT64_C(2596276224),	// UDIVxxx
    UINT64_C(2610954240),	// UMADDLxwwx
    UINT64_C(2610987008),	// UMSUBLxwwx
    UINT64_C(2613051392),	// UMULHxxx
    UINT64_C(1392516096),	// UXTBww
    UINT64_C(1392516096),	// UXTBxw
    UINT64_C(1392524288),	// UXTHww
    UINT64_C(1392524288),	// UXTHxw
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case AArch64::DRPS:
    case AArch64::ERET: {
      break;
    }
    case AArch64::CLREXi:
    case AArch64::DMBi:
    case AArch64::DSBi:
    case AArch64::ISBi: {
      // op: CRm
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case AArch64::MSRii: {
      // op: CRm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(15)) << 8;
      // op: PState
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(56)) << 13;
      Value |= (op & UINT64_C(7)) << 5;
      break;
    }
    case AArch64::BLimm: {
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_call>(MI, 0, Fixups);
      Value |= op & UINT64_C(67108863);
      break;
    }
    case AArch64::Bcc: {
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_condbr>(MI, 1, Fixups);
      Value |= (op & UINT64_C(524287)) << 5;
      // op: Cond
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(15);
      break;
    }
    case AArch64::Bimm: {
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_uncondbr>(MI, 0, Fixups);
      Value |= op & UINT64_C(67108863);
      break;
    }
    case AArch64::SYSiccix: {
      // op: Op1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(7)) << 16;
      // op: CRn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: CRm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 8;
      // op: Op2
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= op & UINT64_C(31);
      break;
    }
    case AArch64::SYSLxicci: {
      // op: Op1
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(7)) << 16;
      // op: CRn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      // op: CRm
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 8;
      // op: Op2
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(7)) << 5;
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      break;
    }
    case AArch64::MOVNwii:
    case AArch64::MOVNxii: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: FullImm
      op = getMoveWideImmOpValue(MI, 1, Fixups);
      Value |= (op & UINT64_C(262143)) << 5;
      break;
    }
    case AArch64::MOVZwii:
    case AArch64::MOVZxii: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: FullImm
      op = getMoveWideImmOpValue(MI, 1, Fixups);
      Value |= (op & UINT64_C(262143)) << 5;
      Value = fixMOVZ(MI, Value);
      break;
    }
    case AArch64::MOVKwii:
    case AArch64::MOVKxii: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: FullImm
      op = getMoveWideImmOpValue(MI, 2, Fixups);
      Value |= (op & UINT64_C(262143)) << 5;
      break;
    }
    case AArch64::FMOVdi:
    case AArch64::FMOVsi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Imm8
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(255)) << 13;
      break;
    }
    case AArch64::ADRPxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Label
      op = getAdrpLabelOpValue(MI, 1, Fixups);
      Value |= (op & UINT64_C(3)) << 29;
      Value |= (op & UINT64_C(2097148)) << 3;
      break;
    }
    case AArch64::ADRxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_adr_prel>(MI, 1, Fixups);
      Value |= (op & UINT64_C(3)) << 29;
      Value |= (op & UINT64_C(2097148)) << 3;
      break;
    }
    case AArch64::MVNww_asr:
    case AArch64::MVNww_lsl:
    case AArch64::MVNww_lsr:
    case AArch64::MVNww_ror:
    case AArch64::MVNxx_asr:
    case AArch64::MVNxx_lsl:
    case AArch64::MVNxx_lsr:
    case AArch64::MVNxx_ror: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Imm6
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::CLSww:
    case AArch64::CLSxx:
    case AArch64::CLZww:
    case AArch64::CLZxx:
    case AArch64::FABSdd:
    case AArch64::FABSss:
    case AArch64::FCVTASwd:
    case AArch64::FCVTASws:
    case AArch64::FCVTASxd:
    case AArch64::FCVTASxs:
    case AArch64::FCVTAUwd:
    case AArch64::FCVTAUws:
    case AArch64::FCVTAUxd:
    case AArch64::FCVTAUxs:
    case AArch64::FCVTMSwd:
    case AArch64::FCVTMSws:
    case AArch64::FCVTMSxd:
    case AArch64::FCVTMSxs:
    case AArch64::FCVTMUwd:
    case AArch64::FCVTMUws:
    case AArch64::FCVTMUxd:
    case AArch64::FCVTMUxs:
    case AArch64::FCVTNSwd:
    case AArch64::FCVTNSws:
    case AArch64::FCVTNSxd:
    case AArch64::FCVTNSxs:
    case AArch64::FCVTNUwd:
    case AArch64::FCVTNUws:
    case AArch64::FCVTNUxd:
    case AArch64::FCVTNUxs:
    case AArch64::FCVTPSwd:
    case AArch64::FCVTPSws:
    case AArch64::FCVTPSxd:
    case AArch64::FCVTPSxs:
    case AArch64::FCVTPUwd:
    case AArch64::FCVTPUws:
    case AArch64::FCVTPUxd:
    case AArch64::FCVTPUxs:
    case AArch64::FCVTZSwd:
    case AArch64::FCVTZSws:
    case AArch64::FCVTZSxd:
    case AArch64::FCVTZSxs:
    case AArch64::FCVTZUwd:
    case AArch64::FCVTZUws:
    case AArch64::FCVTZUxd:
    case AArch64::FCVTZUxs:
    case AArch64::FCVTdh:
    case AArch64::FCVTds:
    case AArch64::FCVThd:
    case AArch64::FCVThs:
    case AArch64::FCVTsd:
    case AArch64::FCVTsh:
    case AArch64::FMOVdd:
    case AArch64::FMOVdx:
    case AArch64::FMOVss:
    case AArch64::FMOVsw:
    case AArch64::FMOVvx:
    case AArch64::FMOVws:
    case AArch64::FMOVxd:
    case AArch64::FMOVxv:
    case AArch64::FNEGdd:
    case AArch64::FNEGss:
    case AArch64::FRINTAdd:
    case AArch64::FRINTAss:
    case AArch64::FRINTIdd:
    case AArch64::FRINTIss:
    case AArch64::FRINTMdd:
    case AArch64::FRINTMss:
    case AArch64::FRINTNdd:
    case AArch64::FRINTNss:
    case AArch64::FRINTPdd:
    case AArch64::FRINTPss:
    case AArch64::FRINTXdd:
    case AArch64::FRINTXss:
    case AArch64::FRINTZdd:
    case AArch64::FRINTZss:
    case AArch64::FSQRTdd:
    case AArch64::FSQRTss:
    case AArch64::RBITww:
    case AArch64::RBITxx:
    case AArch64::REV16ww:
    case AArch64::REV16xx:
    case AArch64::REV32xx:
    case AArch64::REVww:
    case AArch64::REVxx:
    case AArch64::SCVTFdw:
    case AArch64::SCVTFdx:
    case AArch64::SCVTFsw:
    case AArch64::SCVTFsx:
    case AArch64::SXTBww:
    case AArch64::SXTBxw:
    case AArch64::SXTHww:
    case AArch64::SXTHxw:
    case AArch64::SXTWxw:
    case AArch64::UCVTFdw:
    case AArch64::UCVTFdx:
    case AArch64::UCVTFsw:
    case AArch64::UCVTFsx:
    case AArch64::UXTBww:
    case AArch64::UXTBxw:
    case AArch64::UXTHww:
    case AArch64::UXTHxw: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      break;
    }
    case AArch64::LSLwwi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: FullImm
      op = getBitfield32LSLOpValue(MI, 2, Fixups);
      Value |= (op & UINT64_C(63)) << 16;
      Value |= (op & UINT64_C(4032)) << 4;
      break;
    }
    case AArch64::LSLxxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: FullImm
      op = getBitfield64LSLOpValue(MI, 2, Fixups);
      Value |= (op & UINT64_C(63)) << 16;
      Value |= (op & UINT64_C(4032)) << 4;
      break;
    }
    case AArch64::ANDSwwi:
    case AArch64::ANDSxxi:
    case AArch64::ANDwwi:
    case AArch64::ANDxxi:
    case AArch64::EORwwi:
    case AArch64::EORxxi:
    case AArch64::ORRwwi:
    case AArch64::ORRxxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(8191)) << 10;
      break;
    }
    case AArch64::ADDwwi_lsl0_S:
    case AArch64::ADDwwi_lsl0_s:
    case AArch64::ADDwwi_lsl12_S:
    case AArch64::ADDwwi_lsl12_s:
    case AArch64::ADDxxi_lsl0_S:
    case AArch64::ADDxxi_lsl0_s:
    case AArch64::ADDxxi_lsl12_S:
    case AArch64::ADDxxi_lsl12_s:
    case AArch64::SUBwwi_lsl0_S:
    case AArch64::SUBwwi_lsl0_s:
    case AArch64::SUBwwi_lsl12_S:
    case AArch64::SUBwwi_lsl12_s:
    case AArch64::SUBxxi_lsl0_S:
    case AArch64::SUBxxi_lsl0_s:
    case AArch64::SUBxxi_lsl12_S:
    case AArch64::SUBxxi_lsl12_s: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Imm12
      op = getAddSubImmOpValue(MI, 2, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::ASRwwi:
    case AArch64::ASRxxi:
    case AArch64::LSRwwi:
    case AArch64::LSRxxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: ImmR
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(63)) << 16;
      break;
    }
    case AArch64::SBFIZwwii:
    case AArch64::SBFIZxxii:
    case AArch64::SBFMwwii:
    case AArch64::SBFMxxii:
    case AArch64::SBFXwwii:
    case AArch64::SBFXxxii:
    case AArch64::UBFIZwwii:
    case AArch64::UBFIZxxii:
    case AArch64::UBFMwwii:
    case AArch64::UBFMxxii:
    case AArch64::UBFXwwii:
    case AArch64::UBFXxxii: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: ImmR
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(63)) << 16;
      // op: ImmS
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::ADCSwww:
    case AArch64::ADCSxxx:
    case AArch64::ADCwww:
    case AArch64::ADCxxx:
    case AArch64::ASRVwww:
    case AArch64::ASRVxxx:
    case AArch64::CRC32B_www:
    case AArch64::CRC32CB_www:
    case AArch64::CRC32CH_www:
    case AArch64::CRC32CW_www:
    case AArch64::CRC32CX_wwx:
    case AArch64::CRC32H_www:
    case AArch64::CRC32W_www:
    case AArch64::CRC32X_wwx:
    case AArch64::FADDddd:
    case AArch64::FADDsss:
    case AArch64::FDIVddd:
    case AArch64::FDIVsss:
    case AArch64::FMAXNMddd:
    case AArch64::FMAXNMsss:
    case AArch64::FMAXddd:
    case AArch64::FMAXsss:
    case AArch64::FMINNMddd:
    case AArch64::FMINNMsss:
    case AArch64::FMINddd:
    case AArch64::FMINsss:
    case AArch64::FMULddd:
    case AArch64::FMULsss:
    case AArch64::FNMULddd:
    case AArch64::FNMULsss:
    case AArch64::FSUBddd:
    case AArch64::FSUBsss:
    case AArch64::LSLVwww:
    case AArch64::LSLVxxx:
    case AArch64::LSRVwww:
    case AArch64::LSRVxxx:
    case AArch64::RORVwww:
    case AArch64::RORVxxx:
    case AArch64::SBCSwww:
    case AArch64::SBCSxxx:
    case AArch64::SBCwww:
    case AArch64::SBCxxx:
    case AArch64::SDIVwww:
    case AArch64::SDIVxxx:
    case AArch64::UDIVwww:
    case AArch64::UDIVxxx: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case AArch64::CSELwwwc:
    case AArch64::CSELxxxc:
    case AArch64::CSINCwwwc:
    case AArch64::CSINCxxxc:
    case AArch64::CSINVwwwc:
    case AArch64::CSINVxxxc:
    case AArch64::CSNEGwwwc:
    case AArch64::CSNEGxxxc:
    case AArch64::FCSELdddc:
    case AArch64::FCSELsssc: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Cond
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      break;
    }
    case AArch64::ADDSwww_sxtb:
    case AArch64::ADDSwww_sxth:
    case AArch64::ADDSwww_sxtw:
    case AArch64::ADDSwww_sxtx:
    case AArch64::ADDSwww_uxtb:
    case AArch64::ADDSwww_uxth:
    case AArch64::ADDSwww_uxtw:
    case AArch64::ADDSwww_uxtx:
    case AArch64::ADDSxxw_sxtb:
    case AArch64::ADDSxxw_sxth:
    case AArch64::ADDSxxw_sxtw:
    case AArch64::ADDSxxw_uxtb:
    case AArch64::ADDSxxw_uxth:
    case AArch64::ADDSxxw_uxtw:
    case AArch64::ADDSxxx_sxtx:
    case AArch64::ADDSxxx_uxtx:
    case AArch64::ADDwww_sxtb:
    case AArch64::ADDwww_sxth:
    case AArch64::ADDwww_sxtw:
    case AArch64::ADDwww_sxtx:
    case AArch64::ADDwww_uxtb:
    case AArch64::ADDwww_uxth:
    case AArch64::ADDwww_uxtw:
    case AArch64::ADDwww_uxtx:
    case AArch64::ADDxxw_sxtb:
    case AArch64::ADDxxw_sxth:
    case AArch64::ADDxxw_sxtw:
    case AArch64::ADDxxw_uxtb:
    case AArch64::ADDxxw_uxth:
    case AArch64::ADDxxw_uxtw:
    case AArch64::ADDxxx_sxtx:
    case AArch64::ADDxxx_uxtx:
    case AArch64::SUBSwww_sxtb:
    case AArch64::SUBSwww_sxth:
    case AArch64::SUBSwww_sxtw:
    case AArch64::SUBSwww_sxtx:
    case AArch64::SUBSwww_uxtb:
    case AArch64::SUBSwww_uxth:
    case AArch64::SUBSwww_uxtw:
    case AArch64::SUBSwww_uxtx:
    case AArch64::SUBSxxw_sxtb:
    case AArch64::SUBSxxw_sxth:
    case AArch64::SUBSxxw_sxtw:
    case AArch64::SUBSxxw_uxtb:
    case AArch64::SUBSxxw_uxth:
    case AArch64::SUBSxxw_uxtw:
    case AArch64::SUBSxxx_sxtx:
    case AArch64::SUBSxxx_uxtx:
    case AArch64::SUBwww_sxtb:
    case AArch64::SUBwww_sxth:
    case AArch64::SUBwww_sxtw:
    case AArch64::SUBwww_sxtx:
    case AArch64::SUBwww_uxtb:
    case AArch64::SUBwww_uxth:
    case AArch64::SUBwww_uxtw:
    case AArch64::SUBwww_uxtx:
    case AArch64::SUBxxw_sxtb:
    case AArch64::SUBxxw_sxth:
    case AArch64::SUBxxw_sxtw:
    case AArch64::SUBxxw_uxtb:
    case AArch64::SUBxxw_uxth:
    case AArch64::SUBxxw_uxtw:
    case AArch64::SUBxxx_sxtx:
    case AArch64::SUBxxx_uxtx: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Imm3
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(7)) << 10;
      break;
    }
    case AArch64::ADDSwww_asr:
    case AArch64::ADDSwww_lsl:
    case AArch64::ADDSwww_lsr:
    case AArch64::ADDSxxx_asr:
    case AArch64::ADDSxxx_lsl:
    case AArch64::ADDSxxx_lsr:
    case AArch64::ADDwww_asr:
    case AArch64::ADDwww_lsl:
    case AArch64::ADDwww_lsr:
    case AArch64::ADDxxx_asr:
    case AArch64::ADDxxx_lsl:
    case AArch64::ADDxxx_lsr:
    case AArch64::ANDSwww_asr:
    case AArch64::ANDSwww_lsl:
    case AArch64::ANDSwww_lsr:
    case AArch64::ANDSwww_ror:
    case AArch64::ANDSxxx_asr:
    case AArch64::ANDSxxx_lsl:
    case AArch64::ANDSxxx_lsr:
    case AArch64::ANDSxxx_ror:
    case AArch64::ANDwww_asr:
    case AArch64::ANDwww_lsl:
    case AArch64::ANDwww_lsr:
    case AArch64::ANDwww_ror:
    case AArch64::ANDxxx_asr:
    case AArch64::ANDxxx_lsl:
    case AArch64::ANDxxx_lsr:
    case AArch64::ANDxxx_ror:
    case AArch64::BICSwww_asr:
    case AArch64::BICSwww_lsl:
    case AArch64::BICSwww_lsr:
    case AArch64::BICSwww_ror:
    case AArch64::BICSxxx_asr:
    case AArch64::BICSxxx_lsl:
    case AArch64::BICSxxx_lsr:
    case AArch64::BICSxxx_ror:
    case AArch64::BICwww_asr:
    case AArch64::BICwww_lsl:
    case AArch64::BICwww_lsr:
    case AArch64::BICwww_ror:
    case AArch64::BICxxx_asr:
    case AArch64::BICxxx_lsl:
    case AArch64::BICxxx_lsr:
    case AArch64::BICxxx_ror:
    case AArch64::EONwww_asr:
    case AArch64::EONwww_lsl:
    case AArch64::EONwww_lsr:
    case AArch64::EONwww_ror:
    case AArch64::EONxxx_asr:
    case AArch64::EONxxx_lsl:
    case AArch64::EONxxx_lsr:
    case AArch64::EONxxx_ror:
    case AArch64::EORwww_asr:
    case AArch64::EORwww_lsl:
    case AArch64::EORwww_lsr:
    case AArch64::EORwww_ror:
    case AArch64::EORxxx_asr:
    case AArch64::EORxxx_lsl:
    case AArch64::EORxxx_lsr:
    case AArch64::EORxxx_ror:
    case AArch64::ORNwww_asr:
    case AArch64::ORNwww_lsl:
    case AArch64::ORNwww_lsr:
    case AArch64::ORNwww_ror:
    case AArch64::ORNxxx_asr:
    case AArch64::ORNxxx_lsl:
    case AArch64::ORNxxx_lsr:
    case AArch64::ORNxxx_ror:
    case AArch64::ORRwww_asr:
    case AArch64::ORRwww_lsl:
    case AArch64::ORRwww_lsr:
    case AArch64::ORRwww_ror:
    case AArch64::ORRxxx_asr:
    case AArch64::ORRxxx_lsl:
    case AArch64::ORRxxx_lsr:
    case AArch64::ORRxxx_ror:
    case AArch64::SUBSwww_asr:
    case AArch64::SUBSwww_lsl:
    case AArch64::SUBSwww_lsr:
    case AArch64::SUBSxxx_asr:
    case AArch64::SUBSxxx_lsl:
    case AArch64::SUBSxxx_lsr:
    case AArch64::SUBwww_asr:
    case AArch64::SUBwww_lsl:
    case AArch64::SUBwww_lsr:
    case AArch64::SUBxxx_asr:
    case AArch64::SUBxxx_lsl:
    case AArch64::SUBxxx_lsr: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Imm6
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::EXTRwwwi:
    case AArch64::EXTRxxxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: LSB
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::SMULHxxx:
    case AArch64::UMULHxxx: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Ra
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      Value = fixMulHigh(MI, Value);
      break;
    }
    case AArch64::FMADDdddd:
    case AArch64::FMADDssss:
    case AArch64::FMSUBdddd:
    case AArch64::FMSUBssss:
    case AArch64::FNMADDdddd:
    case AArch64::FNMADDssss:
    case AArch64::FNMSUBdddd:
    case AArch64::FNMSUBssss:
    case AArch64::MADDwwww:
    case AArch64::MADDxxxx:
    case AArch64::MSUBwwww:
    case AArch64::MSUBxxxx:
    case AArch64::SMADDLxwwx:
    case AArch64::SMSUBLxwwx:
    case AArch64::UMADDLxwwx:
    case AArch64::UMSUBLxwwx: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Ra
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      break;
    }
    case AArch64::FCVTZSwdi:
    case AArch64::FCVTZSwsi:
    case AArch64::FCVTZSxdi:
    case AArch64::FCVTZSxsi:
    case AArch64::FCVTZUwdi:
    case AArch64::FCVTZUwsi:
    case AArch64::FCVTZUxdi:
    case AArch64::FCVTZUxsi:
    case AArch64::SCVTFdwi:
    case AArch64::SCVTFdxi:
    case AArch64::SCVTFswi:
    case AArch64::SCVTFsxi:
    case AArch64::UCVTFdwi:
    case AArch64::UCVTFdxi:
    case AArch64::UCVTFswi:
    case AArch64::UCVTFsxi: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Scale
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::BFIwwii:
    case AArch64::BFIxxii:
    case AArch64::BFMwwii:
    case AArch64::BFMxxii:
    case AArch64::BFXILwwii:
    case AArch64::BFXILxxii: {
      // op: Rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: ImmR
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(63)) << 16;
      // op: ImmS
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::BLRx:
    case AArch64::BRx:
    case AArch64::RETx: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      break;
    }
    case AArch64::ADDwwi_lsl0_cmp:
    case AArch64::ADDwwi_lsl12_cmp:
    case AArch64::ADDxxi_lsl0_cmp:
    case AArch64::ADDxxi_lsl12_cmp:
    case AArch64::SUBwwi_lsl0_cmp:
    case AArch64::SUBwwi_lsl12_cmp:
    case AArch64::SUBxxi_lsl0_cmp:
    case AArch64::SUBxxi_lsl12_cmp: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Imm12
      op = getAddSubImmOpValue(MI, 1, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::FCMPdi_quiet:
    case AArch64::FCMPdi_sig:
    case AArch64::FCMPsi_quiet:
    case AArch64::FCMPsi_sig: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      Value = fixFCMPImm(MI, Value);
      break;
    }
    case AArch64::FCMPdd_quiet:
    case AArch64::FCMPdd_sig:
    case AArch64::FCMPss_quiet:
    case AArch64::FCMPss_sig: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case AArch64::CMNww_sxtb:
    case AArch64::CMNww_sxth:
    case AArch64::CMNww_sxtw:
    case AArch64::CMNww_sxtx:
    case AArch64::CMNww_uxtb:
    case AArch64::CMNww_uxth:
    case AArch64::CMNww_uxtw:
    case AArch64::CMNww_uxtx:
    case AArch64::CMNxw_sxtb:
    case AArch64::CMNxw_sxth:
    case AArch64::CMNxw_sxtw:
    case AArch64::CMNxw_uxtb:
    case AArch64::CMNxw_uxth:
    case AArch64::CMNxw_uxtw:
    case AArch64::CMNxx_sxtx:
    case AArch64::CMNxx_uxtx:
    case AArch64::CMPww_sxtb:
    case AArch64::CMPww_sxth:
    case AArch64::CMPww_sxtw:
    case AArch64::CMPww_sxtx:
    case AArch64::CMPww_uxtb:
    case AArch64::CMPww_uxth:
    case AArch64::CMPww_uxtw:
    case AArch64::CMPww_uxtx:
    case AArch64::CMPxw_sxtb:
    case AArch64::CMPxw_sxth:
    case AArch64::CMPxw_sxtw:
    case AArch64::CMPxw_uxtb:
    case AArch64::CMPxw_uxth:
    case AArch64::CMPxw_uxtw:
    case AArch64::CMPxx_sxtx:
    case AArch64::CMPxx_uxtx: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Imm3
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(7)) << 10;
      break;
    }
    case AArch64::CMNww_asr:
    case AArch64::CMNww_lsl:
    case AArch64::CMNww_lsr:
    case AArch64::CMNxx_asr:
    case AArch64::CMNxx_lsl:
    case AArch64::CMNxx_lsr:
    case AArch64::CMPww_asr:
    case AArch64::CMPww_lsl:
    case AArch64::CMPww_lsr:
    case AArch64::CMPxx_asr:
    case AArch64::CMPxx_lsl:
    case AArch64::CMPxx_lsr:
    case AArch64::TSTww_asr:
    case AArch64::TSTww_lsl:
    case AArch64::TSTww_lsr:
    case AArch64::TSTww_ror:
    case AArch64::TSTxx_asr:
    case AArch64::TSTxx_lsl:
    case AArch64::TSTxx_lsr:
    case AArch64::TSTxx_ror: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Imm6
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(63)) << 10;
      break;
    }
    case AArch64::CCMNww:
    case AArch64::CCMNxx:
    case AArch64::CCMPww:
    case AArch64::CCMPxx:
    case AArch64::FCCMPEdd:
    case AArch64::FCCMPEss:
    case AArch64::FCCMPdd:
    case AArch64::FCCMPss: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: NZCVImm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(15);
      // op: Cond
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      break;
    }
    case AArch64::CCMNwi:
    case AArch64::CCMNxi:
    case AArch64::CCMPwi:
    case AArch64::CCMPxi: {
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: UImm5
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: NZCVImm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= op & UINT64_C(15);
      // op: Cond
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(15)) << 12;
      break;
    }
    case AArch64::TBNZwii:
    case AArch64::TBZwii: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 19;
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_tstbr>(MI, 2, Fixups);
      Value |= (op & UINT64_C(16383)) << 5;
      break;
    }
    case AArch64::TBNZxii:
    case AArch64::TBZxii: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(32)) << 26;
      Value |= (op & UINT64_C(31)) << 19;
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_tstbr>(MI, 2, Fixups);
      Value |= (op & UINT64_C(16383)) << 5;
      break;
    }
    case AArch64::LDRSWx_lit:
    case AArch64::LDRd_lit:
    case AArch64::LDRq_lit:
    case AArch64::LDRs_lit:
    case AArch64::LDRw_lit:
    case AArch64::LDRx_lit:
    case AArch64::PRFM_lit: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Imm19
      op = getLoadLitLabelOpValue(MI, 1, Fixups);
      Value |= (op & UINT64_C(524287)) << 5;
      break;
    }
    case AArch64::CBNZw:
    case AArch64::CBNZx:
    case AArch64::CBZw:
    case AArch64::CBZx: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Label
      op = getLabelOpValue<AArch64::fixup_a64_condbr>(MI, 1, Fixups);
      Value |= (op & UINT64_C(524287)) << 5;
      break;
    }
    case AArch64::LDRSBw_Wm_RegOffset:
    case AArch64::LDRSBw_Xm_RegOffset:
    case AArch64::LDRSBx_Wm_RegOffset:
    case AArch64::LDRSBx_Xm_RegOffset:
    case AArch64::LDRSHw_Wm_RegOffset:
    case AArch64::LDRSHw_Xm_RegOffset:
    case AArch64::LDRSHx_Wm_RegOffset:
    case AArch64::LDRSHx_Xm_RegOffset:
    case AArch64::LDRSWx_Wm_RegOffset:
    case AArch64::LDRSWx_Xm_RegOffset:
    case AArch64::LS16_Wm_RegOffset_LDR:
    case AArch64::LS16_Wm_RegOffset_STR:
    case AArch64::LS16_Xm_RegOffset_LDR:
    case AArch64::LS16_Xm_RegOffset_STR:
    case AArch64::LS32_Wm_RegOffset_LDR:
    case AArch64::LS32_Wm_RegOffset_STR:
    case AArch64::LS32_Xm_RegOffset_LDR:
    case AArch64::LS32_Xm_RegOffset_STR:
    case AArch64::LS64_Wm_RegOffset_LDR:
    case AArch64::LS64_Wm_RegOffset_STR:
    case AArch64::LS64_Xm_RegOffset_LDR:
    case AArch64::LS64_Xm_RegOffset_STR:
    case AArch64::LS8_Wm_RegOffset_LDR:
    case AArch64::LS8_Wm_RegOffset_STR:
    case AArch64::LS8_Xm_RegOffset_LDR:
    case AArch64::LS8_Xm_RegOffset_STR:
    case AArch64::LSFP128_Wm_RegOffset_LDR:
    case AArch64::LSFP128_Wm_RegOffset_STR:
    case AArch64::LSFP128_Xm_RegOffset_LDR:
    case AArch64::LSFP128_Xm_RegOffset_STR:
    case AArch64::LSFP16_Wm_RegOffset_LDR:
    case AArch64::LSFP16_Wm_RegOffset_STR:
    case AArch64::LSFP16_Xm_RegOffset_LDR:
    case AArch64::LSFP16_Xm_RegOffset_STR:
    case AArch64::LSFP32_Wm_RegOffset_LDR:
    case AArch64::LSFP32_Wm_RegOffset_STR:
    case AArch64::LSFP32_Xm_RegOffset_LDR:
    case AArch64::LSFP32_Xm_RegOffset_STR:
    case AArch64::LSFP64_Wm_RegOffset_LDR:
    case AArch64::LSFP64_Wm_RegOffset_STR:
    case AArch64::LSFP64_Xm_RegOffset_LDR:
    case AArch64::LSFP64_Xm_RegOffset_STR:
    case AArch64::LSFP8_Wm_RegOffset_LDR:
    case AArch64::LSFP8_Wm_RegOffset_STR:
    case AArch64::LSFP8_Xm_RegOffset_LDR:
    case AArch64::LSFP8_Xm_RegOffset_STR:
    case AArch64::PRFM_Wm_RegOffset:
    case AArch64::PRFM_Xm_RegOffset: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Ext
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(6)) << 13;
      Value |= (op & UINT64_C(1)) << 12;
      break;
    }
    case AArch64::LDRSBw_U:
    case AArch64::LDRSBx_U:
    case AArch64::LDRSHw_U:
    case AArch64::LDRSHx_U:
    case AArch64::LDTRSBw:
    case AArch64::LDTRSBx:
    case AArch64::LDTRSHw:
    case AArch64::LDTRSHx:
    case AArch64::LDTRSWx:
    case AArch64::LDURSWx:
    case AArch64::LS16_LDUR:
    case AArch64::LS16_STUR:
    case AArch64::LS16_UnPriv_LDR:
    case AArch64::LS16_UnPriv_STR:
    case AArch64::LS32_LDUR:
    case AArch64::LS32_STUR:
    case AArch64::LS32_UnPriv_LDR:
    case AArch64::LS32_UnPriv_STR:
    case AArch64::LS64_LDUR:
    case AArch64::LS64_STUR:
    case AArch64::LS64_UnPriv_LDR:
    case AArch64::LS64_UnPriv_STR:
    case AArch64::LS8_LDUR:
    case AArch64::LS8_STUR:
    case AArch64::LS8_UnPriv_LDR:
    case AArch64::LS8_UnPriv_STR:
    case AArch64::LSFP128_LDUR:
    case AArch64::LSFP128_STUR:
    case AArch64::LSFP16_LDUR:
    case AArch64::LSFP16_STUR:
    case AArch64::LSFP32_LDUR:
    case AArch64::LSFP32_STUR:
    case AArch64::LSFP64_LDUR:
    case AArch64::LSFP64_STUR:
    case AArch64::LSFP8_LDUR:
    case AArch64::LSFP8_STUR:
    case AArch64::PRFUM: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: SImm9
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(511)) << 12;
      break;
    }
    case AArch64::LSFP128_LDR:
    case AArch64::LSFP128_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: UImm12
      op = getOffsetUImm12OpValue<16>(MI, 2, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::LDRSBw:
    case AArch64::LDRSBx:
    case AArch64::LS8_LDR:
    case AArch64::LS8_STR:
    case AArch64::LSFP8_LDR:
    case AArch64::LSFP8_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: UImm12
      op = getOffsetUImm12OpValue<1>(MI, 2, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::LDRSHw:
    case AArch64::LDRSHx:
    case AArch64::LS16_LDR:
    case AArch64::LS16_STR:
    case AArch64::LSFP16_LDR:
    case AArch64::LSFP16_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: UImm12
      op = getOffsetUImm12OpValue<2>(MI, 2, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::LDRSWx:
    case AArch64::LS32_LDR:
    case AArch64::LS32_STR:
    case AArch64::LSFP32_LDR:
    case AArch64::LSFP32_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: UImm12
      op = getOffsetUImm12OpValue<4>(MI, 2, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::LS64_LDR:
    case AArch64::LS64_STR:
    case AArch64::LSFP64_LDR:
    case AArch64::LSFP64_STR:
    case AArch64::PRFM: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: UImm12
      op = getOffsetUImm12OpValue<8>(MI, 2, Fixups);
      Value |= (op & UINT64_C(4095)) << 10;
      break;
    }
    case AArch64::LDAR_byte:
    case AArch64::LDAR_dword:
    case AArch64::LDAR_hword:
    case AArch64::LDAR_word:
    case AArch64::LDAXR_byte:
    case AArch64::LDAXR_dword:
    case AArch64::LDAXR_hword:
    case AArch64::LDAXR_word:
    case AArch64::LDXR_byte:
    case AArch64::LDXR_dword:
    case AArch64::LDXR_hword:
    case AArch64::LDXR_word:
    case AArch64::STLR_byte:
    case AArch64::STLR_dword:
    case AArch64::STLR_hword:
    case AArch64::STLR_word: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      Value = fixLoadStoreExclusive<0,0>(MI, Value);
      break;
    }
    case AArch64::LDPSWx:
    case AArch64::LSFPPair128_LDR:
    case AArch64::LSFPPair128_NonTemp_LDR:
    case AArch64::LSFPPair128_NonTemp_STR:
    case AArch64::LSFPPair128_STR:
    case AArch64::LSFPPair32_LDR:
    case AArch64::LSFPPair32_NonTemp_LDR:
    case AArch64::LSFPPair32_NonTemp_STR:
    case AArch64::LSFPPair32_STR:
    case AArch64::LSFPPair64_LDR:
    case AArch64::LSFPPair64_NonTemp_LDR:
    case AArch64::LSFPPair64_NonTemp_STR:
    case AArch64::LSFPPair64_STR:
    case AArch64::LSPair32_LDR:
    case AArch64::LSPair32_NonTemp_LDR:
    case AArch64::LSPair32_NonTemp_STR:
    case AArch64::LSPair32_STR:
    case AArch64::LSPair64_LDR:
    case AArch64::LSPair64_NonTemp_LDR:
    case AArch64::LSPair64_NonTemp_STR:
    case AArch64::LSPair64_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rt2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      // op: SImm7
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(127)) << 15;
      break;
    }
    case AArch64::LDAXP_dword:
    case AArch64::LDAXP_word:
    case AArch64::LDXP_dword:
    case AArch64::LDXP_word: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rt2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      Value = fixLoadStoreExclusive<0,1>(MI, Value);
      break;
    }
    case AArch64::LDRSBw_PostInd:
    case AArch64::LDRSBw_PreInd:
    case AArch64::LDRSBx_PostInd:
    case AArch64::LDRSBx_PreInd:
    case AArch64::LDRSHw_PostInd:
    case AArch64::LDRSHw_PreInd:
    case AArch64::LDRSHx_PostInd:
    case AArch64::LDRSHx_PreInd:
    case AArch64::LDRSWx_PostInd:
    case AArch64::LDRSWx_PreInd:
    case AArch64::LS16_PostInd_LDR:
    case AArch64::LS16_PreInd_LDR:
    case AArch64::LS32_PostInd_LDR:
    case AArch64::LS32_PreInd_LDR:
    case AArch64::LS64_PostInd_LDR:
    case AArch64::LS64_PreInd_LDR:
    case AArch64::LS8_PostInd_LDR:
    case AArch64::LS8_PreInd_LDR:
    case AArch64::LSFP128_PostInd_LDR:
    case AArch64::LSFP128_PreInd_LDR:
    case AArch64::LSFP16_PostInd_LDR:
    case AArch64::LSFP16_PreInd_LDR:
    case AArch64::LSFP32_PostInd_LDR:
    case AArch64::LSFP32_PreInd_LDR:
    case AArch64::LSFP64_PostInd_LDR:
    case AArch64::LSFP64_PreInd_LDR:
    case AArch64::LSFP8_PostInd_LDR:
    case AArch64::LSFP8_PreInd_LDR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: SImm9
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(511)) << 12;
      break;
    }
    case AArch64::LDPSWx_PostInd:
    case AArch64::LDPSWx_PreInd:
    case AArch64::LSFPPair128_PostInd_LDR:
    case AArch64::LSFPPair128_PreInd_LDR:
    case AArch64::LSFPPair32_PostInd_LDR:
    case AArch64::LSFPPair32_PreInd_LDR:
    case AArch64::LSFPPair64_PostInd_LDR:
    case AArch64::LSFPPair64_PreInd_LDR:
    case AArch64::LSPair32_PostInd_LDR:
    case AArch64::LSPair32_PreInd_LDR:
    case AArch64::LSPair64_PostInd_LDR:
    case AArch64::LSPair64_PreInd_LDR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rt2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      // op: SImm7
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(127)) << 15;
      break;
    }
    case AArch64::MRSxi: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= op & UINT64_C(31);
      // op: SysReg
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= (op & UINT64_C(65535)) << 5;
      break;
    }
    case AArch64::STLXR_byte:
    case AArch64::STLXR_dword:
    case AArch64::STLXR_hword:
    case AArch64::STLXR_word:
    case AArch64::STXR_byte:
    case AArch64::STXR_dword:
    case AArch64::STXR_hword:
    case AArch64::STXR_word: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      Value = fixLoadStoreExclusive<1,0>(MI, Value);
      break;
    }
    case AArch64::LS16_PostInd_STR:
    case AArch64::LS16_PreInd_STR:
    case AArch64::LS32_PostInd_STR:
    case AArch64::LS32_PreInd_STR:
    case AArch64::LS64_PostInd_STR:
    case AArch64::LS64_PreInd_STR:
    case AArch64::LS8_PostInd_STR:
    case AArch64::LS8_PreInd_STR:
    case AArch64::LSFP128_PostInd_STR:
    case AArch64::LSFP128_PreInd_STR:
    case AArch64::LSFP16_PostInd_STR:
    case AArch64::LSFP16_PreInd_STR:
    case AArch64::LSFP32_PostInd_STR:
    case AArch64::LSFP32_PreInd_STR:
    case AArch64::LSFP64_PostInd_STR:
    case AArch64::LSFP64_PreInd_STR:
    case AArch64::LSFP8_PostInd_STR:
    case AArch64::LSFP8_PreInd_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: SImm9
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(511)) << 12;
      break;
    }
    case AArch64::STLXP_dword:
    case AArch64::STLXP_word:
    case AArch64::STXP_dword:
    case AArch64::STXP_word: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(31)) << 16;
      // op: Rt2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      break;
    }
    case AArch64::LSFPPair128_PostInd_STR:
    case AArch64::LSFPPair128_PreInd_STR:
    case AArch64::LSFPPair32_PostInd_STR:
    case AArch64::LSFPPair32_PreInd_STR:
    case AArch64::LSFPPair64_PostInd_STR:
    case AArch64::LSFPPair64_PreInd_STR:
    case AArch64::LSPair32_PostInd_STR:
    case AArch64::LSPair32_PreInd_STR:
    case AArch64::LSPair64_PostInd_STR:
    case AArch64::LSPair64_PreInd_STR: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(31);
      // op: Rn
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups);
      Value |= (op & UINT64_C(31)) << 5;
      // op: Rt2
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups);
      Value |= (op & UINT64_C(31)) << 10;
      // op: SImm7
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups);
      Value |= (op & UINT64_C(127)) << 15;
      break;
    }
    case AArch64::ATix:
    case AArch64::DCix:
    case AArch64::ICix:
    case AArch64::TLBIix: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(31);
      // op: SysOp
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(16383)) << 5;
      break;
    }
    case AArch64::MSRix: {
      // op: Rt
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups);
      Value |= op & UINT64_C(31);
      // op: SysReg
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(65535)) << 5;
      break;
    }
    case AArch64::ICi:
    case AArch64::TLBIi: {
      // op: SysOp
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(16383)) << 5;
      break;
    }
    case AArch64::BRKi:
    case AArch64::DCPS1i:
    case AArch64::DCPS2i:
    case AArch64::DCPS3i:
    case AArch64::HLTi:
    case AArch64::HVCi:
    case AArch64::SMCi:
    case AArch64::SVCi: {
      // op: UImm16
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(65535)) << 5;
      break;
    }
    case AArch64::HINTi: {
      // op: UImm7
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups);
      Value |= (op & UINT64_C(127)) << 5;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

