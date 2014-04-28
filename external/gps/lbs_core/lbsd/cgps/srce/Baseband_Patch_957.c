/****************************************************************************
 GPS IP Centre, ST-Ericsson (UK) Ltd.
 Copyright (c) 2009 ST-Ericsson (UK) Ltd.
 15-16 Cottesbrooke Park, Heartlands Business Park, Daventry, NN11 8YL, UK.
 All rights reserved.
 Author: Saswata Roy [194997]
 Filename Baseband_Patch_957.c

 $Header: $
 $Locker: $
****************************************************************************/



//PG 2.0

#define PatchCheckSum_957             0x972E
#define PatchFileName_957     "E957C012.972E"
#define PatchRomVersion_957              957

static const U1 vg_CG2900_Patch_957[]= {
"HEAD Rom957 patch: Patches the  chip\x0D\x0A\
{D6>8\\ool0}C6\x0D\x0A\
{D1P;NjIL^J=80}9A\x0D\x0A\
{D1P;NjIL^J=80}9A\x0D\x0A\
{D6LGF}53\x0D\x0A\
{D6LGF}53\x0D\x0A\
{D1R3Nk_h0oP3n04ORSN:E?E0AAH1NAUi1GPI=Fd70h2;D^>98c0I@8T70h3IN6>1T<@I1`9Ga471N600P@0GLQEiQGVH0}59\x0D\x0A\
{D1R3O3TF0e;SRHY0JAH8aP<aoMfIN6TejGQ80X470a[Y5P5i6GT5N@bl4@L3P]d70gnLQ0D70[5A1`9AGGPI=FehJool0}23\x0D\x0A\
{D1R3O;]Blhi]1`=o\\D280TeK<GP;R?YdRDD9N6VP:GQ_Q9D70ZSC62470ZSAN0TgNGQSoj1]:cPHKBR436dYWT1]:8@H0}C2\x0D\x0A\
{D1R3OCS44@L2nG5iSGV5NITF0e;SSVU0A4e11`:4L8@e1`9I5P\\003mBlhiY5P5iJGT5N0DfA7VV3lol0<H23TIo1PK<0}5E\x0D\x0A\
{D1R3OKUkkUoXCL9i3UodC@86bWT>G`1<0PK9JFh?00?n2h@3oPH4KJI?oPl00P8;Q0821PA]aFd4a0T70UQaNHEijAH00}E5\x0D\x0A\
{D1R3OSUi1F3Y2`T;TPl00@86h8@aN4P1PPk91`9IY@\\M2iH?00421^248GQ80`8>b@L2FJEiQAH1NFX;003n3`007D@40}07\x0D\x0A\
{D1R3O[\\d3D8K<0e34``=@XHbiMoK1151Pc3a@A\\hoIi2<^GOfGWY5P5h1hg`O@E328DTKBB4V6dTQPS5^GP;SS5`=gll0}8B\x0D\x0A\
{D1R3OcQ]96fYN0N=lGP8_55`MgmLOBA]:AH11`>2g4;0<2@00GP9P>h;R00<Q0D70[5A1P:WlGP9TH83R0055P24l@L00}05\x0D\x0A\
{D1R3OkYI5`V1@TR4m@L2FAH;007o<1e15c7Q@8b41AH0Q04F0e;SR?YhJAH17hXgRXDa@DHgRXFM1PMmSAH3D^>98c0H0}19\x0D\x0A\
{D1R3P3TF2GP?PF5]3<@I1`9H]8B51`:`n@L2QKXOS00J=hn1TEb9NHT60XE`E\\4F1GQP09=Bl;leN6QHTg8]5P1D@AH40}E1\x0D\x0A\
{D1R3P;UhH02GD_2o=GQXF9Mb;AH1N6PP4g8AN6PXZg8EN6R1Kg91N6R:Pg95N6RCfg99N6RH1g9=N6RSWg9AN6RX1g9D0}19\x0D\x0A\
{D1R3PCUhJ;0?LUUhJ74kLSUhJ7[;LSdF08:XRS2@k9P8Xj2X180`R]2@a9P8XiBX1C0@Da3bEIP=\\]fk_@L3OoT61U7\\0}0A\x0D\x0A\
{D1R3PKT70h;M1`9AkD\\3D^60bRoX804F1@L3OoTF1GT3D^2o>DN7D^6@FROX00U0bGQP0950PGQP09MFh;lf<^e41F1X0}DF\x0D\x0A\
{D1R3PST70h=E@`EhP03mK824;@L2FJE\\0e;`_c@`D000@85iPAH11`=onAH5N@d70U\\T<1@00GP=P<83S@00<1@00GP<0}EA\x0D\x0A\
{D1R3P[V0cP><00EhH007D_2o>GV=5P470goi5PFMPe;`_cUh2H32N8U4bGP9P<h;R005N0V@UGQP00QlRSH9GdXf2En40}62\x0D\x0A\
{D1R3PcVOPEi9N0V0`P^9004F0GT=N0f0cP^<00MBhH3CDoV0dEk:9nP01D?6;nP06D<5N0f0`P^=000`50011`9K>GV<0}49\x0D\x0A\
{D1R3PkUhH0055P5iSIf15P5i1GP4_55h2hga1`=oDGV51`=onDR51`;UJAn:=hP:nAH8O0D70Wca1`9k>U1YA8H3PP000}8D\x0D\x0A\
{D1R3Q3Uh2H3:0hP80GP;R?Y`RD851`>2g@L3Oieh2H3^2hP03GV91P0;C@L2iFT60gnOooo3`0?l0oiLJD3;E^>:QAH80}4D\x0D\x0A\
{D1P?Q;T60]0D00000}0B\x0D\x0A\
{D1P7NiU;2}75\x0D\x0A\
{D1P7Njn4`}B6\x0D\x0A\
{D1P7Njn4`}B6\x0D\x0A\
{D6>:d00l0}52\x0D\x0A\
{D6>:d00l0}52\x0D\x0A\
{D1Qcn1=k\\hC3NkNhdg>SO7Md\\gmWNVmkagYY1P=fJh6[L]>3dgLCQ:Mh]gl3N;460gYWP0]jH@H3Mf]mE}ED\x0D\x0A\
{D1P7n0_hO}B0\x0D\x0A\
{D1PSn8>7g0JKReP00h]L00C9S00<0}D2\x0D\x0A\
{D1P7n0ohW}C8\x0D\x0A\
{D1P7n:;U7}6B\x0D\x0A\
{D1P7n0OhX}A9\x0D\x0A\
{D1P7n02MW}70\x0D\x0A\
{D6LJ2}42\x0D\x0A\
{D1Qcn1=k\\hC3NkNhdg>SO7Md\\gmWNVmkagYY1P=fJh6[L]>3dgLCQ:Mh]gl3N;460gYWP0]jH@H3Mf]mE}ED\x0D\x0A\
{D1P7n0_hO}B0\x0D\x0A\
{D1PSn8>7g0JKReP00h]L00C9S00<0}D2\x0D\x0A\
{D1P7n0ohW}C8\x0D\x0A\
{D1P7n:;U7}6B\x0D\x0A\
{D1P7n0OhX}A9\x0D\x0A\
{D1P7n02MW}70\x0D\x0A\
{D6LJ2}42\x0D\x0A\
{D1R3Q<0110480?`0^02h0;P000200A@0i03D0=`130300<@0b0200800P0200800001P020OL00d04@0iAH1Wh460WPX0}D1\x0D\x0A\
{D1R3QD6OP@H0LOT7010Xa1Jl8Mf=ghMGk<X9Kni_n[i3Nh:N@?911`21HN@:O`HO0hm9HFi_ng^2ERY>26k8KHTF04700}E7\x0D\x0A\
{D1R3QL56R@H0LjQ0`DF91P1b<L@YA0MFhCTA@d]FhhO]@XWXHc`Q@MNd900Y@A?7lD24Q04F08@55P4607:=7iHgU:UD0}CF\x0D\x0A\
{D1R3QT50AAH3`mDF2k@P0354EM0>7iBkE7`F7i@0>Vl66^I]0eKPbPhnhMfDO1EiU@H0ZHeiUAH3D^>5bGU[D^>AMD240}C9\x0D\x0A\
{D1R3Q\\14PD211`0L;e;SQLYJlGW^=^4F1e;SR9VOPNAF:H3PE8@0h6DF0k@L07e0ThO`00G9lGQ^m08biAHAN0^80GQP0}24\x0D\x0A\
{D1R3Qd>7C@H076@3800400@0100400P0300@01P0800\\0400HAn:=hPP@D155P=FhCTCEn>7kDK9i0lehD2G=RU5VVol0}10\x0D\x0A\
{D1R3Ql747Im2WEFNESkPlEFP2Qn;SXimgP\\00oa]2k@L07e1El?a@<EiR@H0895iRAH1N6N8UG0KR4`1hMm1NFd70UTD0}25\x0D\x0A\
{D1R3R4470`meNN`00@L3Ok461YSCD^>AM@L34P4F0An:=hSFfD251P:M<<LQG`00k03`0?@0U02H0=00eAoV=`0@JD240}D8\x0D\x0A\
{D1R3R<5\\JAH1N0VAPP>800DF0AoR<`245D56<`20oDB51P2NIGT1N0;d0Qn005EhH004KB2406dPKB5iPGQ<0635DE^00}23\x0D\x0A\
{D1R3RD<e=E\\9NAUh6_@3D^5;UVdR6`000aXmH>UYQ7>5N6P5XPEYK2i]`g:YN6>>Se?]BiEPj7`7LZmBhD^FK@HK0hm80}72\x0D\x0A\
{D1R3RL5PjGTR3j0047dVBTEiXVgQHnUhJ1An1FU\\;VdY9`9]Xg:aN6000GTR3j0046dTK@EiXGVIN4`0]@H3R?UiP@H00}24\x0D\x0A\
{D1R3RT08=eKSR=5iKjCD0P50bMf3E_>8dkOD00E1Rk@D04ehI007E_>=OLP;>853UGP9;4d70]<:2^E21@L2d^5h1hG00}6C\x0D\x0A\
{D1R3R\\249@L0[lU0P@L0[dEikeKcR=4F0AnB=i2b6@H7R`4F0GVA_H7WQF7]AdMCoh]YWICPHc11@IMCoh]\\h6<l2MfD0}83\x0D\x0A\
{D1R3Rd3cQm3E@H]Cnh]U@I^<e011@T=Cnh]Q@Hn4e013Don;MIfDh6?@eD5;Do^;ID2KS=@0@SN<00D63;<?<1464;<<0}F7\x0D\x0A\
{D1R3Rl75o[7]1PBc3Q\\0a<EQJ7`;Fl8ji@H0\\^eij@L2Ri4615cK]5P0JD6=X0hORhnmN6@016f9bhW[SJ0>7h^?mQX80}87\x0D\x0A\
{D1R3S4603Qn3T2hN0V[YK2iZkQZ]Nf77R7f8K@XjiNN<L@1]PSj:J^U\\;V[^6Zm;`Vgo]XP00D:7]5P0\\D7>>^E1DJ0<0}51\x0D\x0A\
{D1R3S<8ORD^N6hP01MTfdCT7062?]lP02@H8G=W4?P\\000Eh70nR0FWT@Qj^=`0JY@H?SjMk@Im11`:1Y>8AiQ53Q`al0}73\x0D\x0A\
{D1R3SD532FbVOb<NSYhEH6gI=]4hKR1]0LHG60SR5NHC=ED625cI1P1MTGUYH>XOQ00F2h@@0Sn401An9U8VJmIO`GQP0}1D\x0D\x0A\
{D1R3SL03oc@1ALLd>D67=3e11GWY1`1RHAH1N6000k@X00U2UGU]f3[@?@L2RWYooa`5NHXfRIf5NHTF0f_15PEik@H00}68\x0D\x0A\
{D1R3ST>?YGWYK0D70hf?<0462hnUK:Io8akMHFhOR00Ia0a]2J0>7h^?_7`91P^?Y8@<hm^d:009BY5Pb7hVDPIYeTo00}10\x0D\x0A\
{D1R3S\\<d1DS9gH90BMm4o7X1KF`^Coh?003lo?81KQZ^CnH?001mN1`h@P5^6ZcP?>PiN6002>0Ya4470X6W=2U0cQl00}52\x0D\x0A\
{D1R3Sd0JTD227`0J@?10Q0SSfJ0>7hU;W7`9Wd3Q:LAK<7U2FLSR<`3l0D5G]2P02D2DQ0cP:GQP006P3Qn9Bia]2J0<0}43\x0D\x0A\
{D1R3Sl8ORhnlK@SR5>8@hCCQ>@H0G=^d3021@<nf300E5QD705C]5P77eAH5al\\`2D37]2P02AHE1P0b@AoQ5P=SoAH00}AD\x0D\x0A\
{D1R3T4=Bh;mi5PWT3cGQ@=Lf:D1=5P5iOLWaN6kd0S;UA1GT7D>6OoC`7e;SR:3PEhcD08246NWbOod70gEe1P>C^Mf00}D1\x0D\x0A\
{D1R3T<>d:009geNgb009gHG7eP[UWT5_jN@EN600CSKQBHg4:DC5N600Cf\\2=^57aGQP02M[0SKQAXEhH00B=^55Q<A<0}BD\x0D\x0A\
{D1R3TD=kP?0E1P>C^GQP03m[0SKQ@`EhH00OJ`8fhD77=0e1A<@oNh3`5@H3Tk^Te021@DW4Ee?kR9T65i?3E^4\\OkOD0}7F\x0D\x0A\
{D1R3TL001D2;E^4\\QL@G<CgL4c2Mg1<`9D5?]m@01D29g87O@L@N<^D63i>ei6<d:D5G=5T63i<e1P>C`N@?=N54DNOD0}36\x0D\x0A\
{D1R3TT50ak@X00U35N@EN600?SKQ@M9o1Mm0l1D70gDe1P>C^eKQ;7nge005@8]FhBb5a1La?M`C<9gL4c0U@Dnge0040}47\x0D\x0A\
{D1R3T\\50RMb1gd747S;UCXI]1Im0h1hbiDc7]6006D`>K@FO@>0O]2P00DZ6<^E:1kAP0159CVd5Wd3P7DQ1a1e21Vgl0}03\x0D\x0A\
{D1R3Td7THcAmW1<d]I`@h1e5`GQP02EhI00C]m@01Io9i1HfhD?JOoc`5L@]NFVN@Vglh2d70gDeNNSP;D10l1n4e0040}8F\x0D\x0A\
{D1R3Tl5ioAH1N6>3CGQT0KUhPiCa1`=cIAH1NAUhH003D_2leGQP005SJGQP0;b\\0;`1N6@00In1M6^D_e9P0m\\`2DN80}65\x0D\x0A\
{D1R3U402:In3DW03fg]1AP]BH0;NKMH;000mHN\\`1D@;DV02geIP0^9]@U;^KMH;03onKo8?00?R>^I_4SkRO`HOV0@00}11\x0D\x0A\
{D1R3U<5]3e;`_<e]2e;`_=Eh2;cHKJQ^RGVI5P470i?_D^2leAH51P2;EeKSRQ462iIU1`=`mGQSWG470`ngD^2ld@L00}46\x0D\x0A\
{D1R3UD<B38@51`<B0e9P0BUPVQn40_AlQIf51`<B0g]11P2<be;P_=DF1GQSPdehI08aN8>E\\@L3LfDF0GTKD^5;Ue;`0}46\x0D\x0A\
{D1R3UL2ldGPL1081JGQP008J[F=X00=BH0?K<0E228@3DW03f521NIUi6@L2WHUiVe;QBiFO@e;aBiHc002m5PR40e;`0}5F\x0D\x0A\
{D1R3UT5;UAH3DoSU7AH8Q0=BlD^E5P25k6dQN@5h0_@3D^2ld6dPQ0A]8e9P0BUPVQn40_AlQIf4KB1]X@H0SUNge0040}8D\x0D\x0A\
{D1R3U\\53BL@C<0U0Qc0I@PUi2J0>7hU;WGQP001]2GV91`03nAH11`1g2@L3UaTF0e;Qd64F2In3D_2nWAH3D^3SRVdP0}BF\x0D\x0A\
{D1R3Ud8K000360eQJe;Phhhb2D>67hP017`;<0e2AeKPi2e1R8@7D_3SPe;`hhDF0GP8hmT709Y[E_3SPGP8hnT709YX0}AE\x0D\x0A\
{D1R3Ul=Fl>>55P4OhS<0nld62<0_D^4ace;cTF]BhC4cD_>AKe;Q<7MBli5a1`30;@L3[=DF0SN80@E15SN80CT66;l`0}55\x0D\x0A\
{D1R3V4460;lWHol`OAHKInIo@@GR=`0I0DPCHl9]@@6oEnd\\XWlBOo8biD3?IoXfSDDIN64@<AWAHFX;R00QN6D[RAgl0}A1\x0D\x0A\
{D1R3V<5QKF2H0TH;RoooHolhPGP9;4d70];eNHT609M[D^4`LGU[D^4`MGUY1`4a8GW[D_4`MGW[D_4`LAH3D^>8^GUX0}74\x0D\x0A\
{D1R3VD12PD38Q0=BlhRi1`48cGW[D_>8^AH0[2e1@GP81_U0PGP83b8OR?[<a2am2D667hP0MMn1GXR40D10QodF0GP80}E6\x0D\x0A\
{D1R3VL4b38@1L3NIe7bYWdTF0c@Q1QNKM8`IN0^;DGTLLhX5KFb]NIioaS[UWITF6G]PQ4EPJd]2<^E>5Mb2<^E55Qn00}39\x0D\x0A\
{D1R3VT006Mb2<^E3UQn001WLPS;U@QHOP00Ig88biD3F7h006Mb00T02@M`00R028WWfE\\XbiEkB?\\XjiVe0`QP`73XH0}71\x0D\x0A\
{D1R3V\\9JleKSRdik8WoR7X5PKMn2Ob8JiFc>On8JiSN00=E7DSN001U5fAH00R5kiQn3onWL0S;U@eMK`Qn001P2@SN00}88\x0D\x0A\
{D1R3Vd006D8JNOIVbS;UGQXNbEC00T5M08`I0b4F08cE0b4F0L@=1`9`X>?EKAX;0o`26`00HF1YamA]0@L05IDF0e;P0}73\x0D\x0A\
{D1R3Vl2lDkOD00DF2GT1P0hOP;]DO@5iPAH1bP7Z1RV1jPXYPF3Y1`>K_@L0Jc5]QRV1HFWZ0]H6ePXnhSkR?^7MU?3`0}4B\x0D\x0A\
{D1R3W4=Bh;mm5PUh0d\\ijP11`GP3BiWZ1431N0=;nNX:IXTF6G1OW9Am0S[UWIA]8AH15P4ORSN8ln55Rc0aA@Uh2C;l0}EB\x0D\x0A\
{D1R3W<8cR009@mEh2BaV<hP00D:5N0TaeQn8018cR001@<EiR@H0n6T70ZS15P75C>5@Q03QCAH3]T@01@LHKAdF0AoP0}25\x0D\x0A\
{D1R3WD8c02jiG8Hc02mYG@DF0GWQ1`2:g@H0;n4M<@dP005hIhCMN6=?6@L2Smb4<e;cC_]Blh\\YN8006GQWQAUhHh\\\\0}E0\x0D\x0A\
{D1R3WL470Xlm1`>MeAH11`>5<AH1NAUS=Qngoo@00GTMN@5i1GT=NA5i5GPA<7Ab4F7[D^4cPF2CLohOQBg[E^4b_F?\\0}E3\x0D\x0A\
{D1R3WT1bQ@L3VKmcnGP1<Pe\\0e?]<[eQJF`<O8]gm@L0<PMSoe?m<h5\\JDFIK9=FlC1dO8HfUD@5H@Ek4In1NdU0f0980}A8\x0D\x0A\
{D1R3W\\8ob005K6U0f7b:=YEMBFa;D_4`M@L3VKmWnSkYK6e6FFbOE_4b_FfN7X5kkF5<O8TemD?5NafOPG]9@<@2BSo80}90\x0D\x0A\
{D1R3Wd001FaY@=QlRCGeGDU\\Be;a<[aa372X0RXgQ07]@hEQ308XO0U9aF5Z<hP0PD480RXcR021G`Aa2D10L@XgR0580}27\x0D\x0A\
{D1R3Wl56B7b3EndaeF3_D^>>KD9=K>e11<@LQ<D70UUWD^>>KD65K0E12<@LQ<D70UT]K8MFlhi]NIEiTGV=NHEiPGVL0}70\x0D\x0A\
{D1R3X45VV001NITF0GTIHcHO]ooh005i0GT5N@ePJ@L0?S1`P76T0RHgS07]@\\EQ008YK9Ql2Mn11`02LFaY1PNQkD200}07\x0D\x0A\
{D1R3X<1l9g?oHol`[@H;XNhgS07]B0HOP009H9XOQoohO08OPooiK8D701e1K6U=AQn000e\\Q7`27h?om@L07D5\\JD[40}36\x0D\x0A\
{D1R3XD8OP00AK8Al0@L07D5\\JDS5@@8OQ008O0Mcnf?i@d]BhJ8J2`?`0e;aXQ]BhJ7N2`?goe;aXMe3`SOX00E32e;P0}A8\x0D\x0A\
{D1R3XL6R6POX3omBlJ8KD^6QgPOX20=BlJ7MNHeiQGV1IYP00GVI5P5i6F<f7kOoo001NAei0GT5N@ei4GTEWH5kje;`0}81\x0D\x0A\
{D1R3XT3Tge;Q;7]Bl>CSD^4\\Pe;`i>B4OGP@n_Uh3?[QN1N8V7:EN04@<GP4n\\e_ce;`i>UScG]=N6CjfSNL02e1BGP80}8E\x0D\x0A\
{D1R3X\\06IFf67XSl>SNL06E1BGQP3`5]QQkXo8@PMF`_Loe\\4AWmHFXcR00E@dU\\3AWmHFQm2WZE@MEQKQo<00Am2W[80}8B\x0D\x0A\
{D1R3Xd50FV<887E\\;QZ1HFY<RD2:7o`01QnL00LLMF`O<:eC6Fa;D_3TgG]9A\\EhIomCEncTgFc]gIE\\kWomK6l`7D1H0}B0\x0D\x0A\
{D1R3Xl347GP:2_E]KQZ9gd01Je;`i>=Bl>CUKFhJR05[D_3Tje;Pi=iJlc35@MUhHoo?DncTge;a;<U0`8BGD_4\\bFal0}4B\x0D\x0A\
{D1R3Y4<`5D4HQ0MBlBb=@L9]4Vgc<150cIf3D_4\\SFa?D_4\\aGVENI5iSGV5NH5iWFJH005iVAH1NAUS=Qngoo`00GTL0}FE\x0D\x0A\
{D1R3Y<5i0GT5H6Q`P@L0:]Qa908V=hP1kD38O0McoD91H@02:FbHO0WOP@L07D5\\JDB7HomBl>D=1`;iZe;PiA5Sj21<0}07\x0D\x0A\
{D1R3YD5\\;F5Z7hSV77`;<2E0S9`XH8UiQGV1NIeVV001NITF0GTMN@MBh>DAHnPPCF`]HFXOR>HXL8T70?31K0MBl>BP0}30\x0D\x0A\
{D1R3YL5iQGVM5P5i6F<f7kOok001NAei0GT5N@ei4GTDg08gU00]@4SL>SND06E0B=b7D^>=DD45K1L`W@H?ZOUSU21d0}43\x0D\x0A\
{D1R3YT5\\[F5^7hSjnGP<n_Ql2c0=1Q^YnF5^7hSjeF8D0S1l2e;`i@e\\4GP0n]L`^@H?ZO]BhheA@TD70;f6=nP01D480}FB\x0D\x0A\
{D1R3Y\\8gT02Q@4S<\\F>@87E\\;G_YKLhNSF5\\O0\\`3@HKZNE]CQZ1HFQlReOhi@d62jWUWH=clg?]HiC4521eK2mgmG]X0}E4\x0D\x0A\
{D1R3Yd5h1?[QKLXNQF5]KLhNQ7`9HFmco7`;Lo]FhhRKHoiJlW[]@9B41g?cHoYJlW[]@9C41gO]N0CjfFe:6XEQJFg<0}C2\x0D\x0A\
{D1R3Yl8NQ7>9HFeh1?[aKDXJQ7n9HFU]cQj4N@UQKTd0OHXjiOf2KA9]lS<3ok50VGb000I]4VgaWUI]4Vgb<`0X0DAH0}D9\x0D\x0A\
{D1R3Z45hJ2kN3j?00PnW`08fhD7JC`8?Xl023jO00SKQ@8b49g?eN6?ooe;a;AMWlDQ7Hne;AFam6OE\\WSKY@AU\\4e;`0}82\x0D\x0A\
{D1R3Z<4]5Da1K1dImFcn=^U16F`GD_4]5DX3HoL`5Dk=Nle11FbCE_4]5DO1K1MBlBdEA\\=WkD<7Hoe2QeKSR:=SoU[`0}95\x0D\x0A\
{D1R3ZD9jkDAAK9MFlBdE@d=SlD;7IoU2AeKSR:=SnU[bN^e0dF`CD_4]5e;Q;AE4eeKPi3<d1D4;E^3SRSKY@\\B4;e;`0}A0\x0D\x0A\
{D1R3ZL4]6F`EK9=BlBdOE_4]8@L3ZS@2<F`C<;T66jJP0SE\\5c2]1Q^UoGVENI5iSGV5NH5iWFJH005iVAH11`5;kGQP0}81\x0D\x0A\
{D1R3ZT4Z0e?];AEQJ8@4K@TF0e;SSDd72>^_D^>=DDE51`2mQSOX00E42@L3\\1Uh2BZ5_H34Q7`Z6\\UkJMm1K6l`WEiH0}68\x0D\x0A\
{D1R3Z\\5kB@L4j5TF0GT1N@Ei3GTANAEh1?[hS02l3F44O0\\`5D1HHHP28Qn807E\\0c2iGIR<PGPE2EHOQ0j11`39WF`00}B5\x0D\x0A\
{D1R3Zd470C8YHNU\\0@L1<WeRJ8@R=h`0=@L4_GU\\Jc05@8e\\4D<8O0E2V7bG?@E]Kc0e@DeQKQn9<TR416d80R8OU01d0}F2\x0D\x0A\
{D1R3Zl8OQ01eK0<`^EJINIEiTGV=NHEiPAH3D^3TcDC;D^3TVc0U@QUh2>BLO0\\`7D:HQ1a]2D71N0STW7`;<3e0V8@l0}81\x0D\x0A\
{D1R3[41]2AH11`>@<SOXmgU7Be;Q;8e11GP8i:8;R00SD^3TcDC;D^3TVc0U@QUh2>BLO0\\`7D:HQ1a]2D71N0STW7`80}D1\x0D\x0A\
{D1R3[<<`?D2HQ3a]2AH11`>@>eKPi<e7BeKQ<b5kKDM;E^4\\SDF6=nP0;DC5N6OooeO\\i@iNmcAm@`lh6Fg[61\\d2D7H0}83\x0D\x0A\
{D1R3[D5\\beK`i@mFhi5cE_4`MeKQ<b461jkOE^4\\S@H7[]hgj00]1PN^geKSRk5kKFg;=0D63jkMoH5\\ceKa<b5hIocl0}48\x0D\x0A\
{D1R3[L=Gk>D>G_Ld4D=>=nP0:D3:=lP01D79K<mFl>D?E^>AJeKa<LehIohSEncU3Ukg=4U3SSOX02E12eKSRk<d1D780}F2\x0D\x0A\
{D1R3[T7MPeK`i@mFhi5_E_4a<GQWoomGk>D>G_LdODI?E^>;\\D;;>1YJlc09A9]Bhi5cE_3U3e;a<7E2`cPNF_<`1D7H0}EE\x0D\x0A\
{D1R3[\\6MPe;`i@mBhi5cD_4`MAH11`5WYe;Pi@e5ae?kSWE32e;Q<_mCnhia@LYJlc09@@eh2C;n6hP01e;Pi@mBlhid0}06\x0D\x0A\
{D1R3[d=BhC;oD_>>LAH3D^>;FDC7D^>>Qc05@lEh2CH8Q0MBlhj4O0X;R00OD_>>R8@F0PQ]2@L2IAd70:VkD^>;FD880}CF\x0D\x0A\
{D1R3[l=Blhj7D^>>Re;a=PT70VDM5P5h2>C6<hP07D79N0STX7`;<0E0V8@4K@TF0GTIHcHO]ool005i7GT1N@Ei3GT@0}3E\x0D\x0A\
{D1R3\\45i5GQSooc47G_Xc8Eh1@W9H6eQce;cSW]BlhioE_>>PGPM<MIS1Qn407EkBDAH0T5Q71OmgH5\\BS8Y@4U_kMm00}CE\x0D\x0A\
{D1R3\\<5\\Kc0eGQU\\OS;=@9UQTG_l0S5\\4c2MFIU\\3e;cSWe\\Ce;cSWU\\0e;cSX5\\J@H?]45h3?[EN60>PQn<3X5h0@Vd0}79\x0D\x0A\
{D1R3\\D5h1@Uho8=coS>401D62k@0O05h4?\\f<`?nM@HK]08c0ooU1Q>d0e;SSWUh2C7FH``D>Mf1NnU\\BS8Y@4U_kMm00}5B\x0D\x0A\
{D1R3\\L5\\Kc0eGQU\\OS;=A]=BhhioD_4]58A?D_4]6F`OD_4]7F`A6OeQJ7`9WT=BlBdQ1`>Z=F`OD_4]5Gd3]45h<jXd0}B4\x0D\x0A\
{D1R3\\T000SNL08462k@3D^49IU[bKM<`5@H;]05h2BclO0VOPU[c<<50cGP@0TaR2Gb0n]EhP?[Pc8Eh2@W>7l`>mQo80}C3\x0D\x0A\
{D1R3\\\\0>mF;:7lP0M7bEK6l`GDB=K1=BlBdDQ5=BlBdKD^49]Ii3E_4]7e;a;B5m0kA1N3>Z=001H\\mBh@UF<QE:27b80}46\x0D\x0A\
{D1R3\\d5\\Kc2=A8e\\4e;a;AB4Ee;a;A]Bh@VeWT=FlBdOD_4]8Gd3]45h<jXd0024Pe;a;AB4Fe;a;A]Bh@VeWT=FlBdL0}80\x0D\x0A\
{D1R3\\l=BlBdQO@>d@GPcZS@0008b7hP0MQo<07E\\4c2M1Q^baGQP1UTIog?n7i`0>Qn<1UXOP0IJ7h@6FF`O<;T66k5@0}1D\x0D\x0A\
{D1R3]45iUGVANHeiQGV1NIeVV001NITF0GT5oH5\\CGP9<MMBl>D<O0U71F29KlmFhC;1KFhJQF5Ygd8Oc006H`U\\Kc0d0}D2\x0D\x0A\
{D1R3]<50FFcmNdU0BFc9K4l`7D2=NdUKAFa;D_3U3eKa<\\5iQAH1NAUS=Qngoo`00GTMN@5i1GT=NA5i5e;SSE461kRD0}17\x0D\x0A\
{D1R3]D=BhC;nF_<`1@HK^9Eh1BaTL8HgQ0051P^hUe;Q<ND61kREN0T9N7`91P^hUGP9:X5QR7`;Loe\\J@H;^9D70kAX0}CC\x0D\x0A\
{D1R3]L=Bh>D=1Q^hU@L3LaMFh>D?D^4\\bF:5HnekjGR008Eh0@WIN0D9cGP92L]Bh@W]N6D:HFaYA5U\\7S89@hQl1S;<0}D8\x0D\x0A\
{D1R3]T50ef?mH^U7P7`2F_9]dU[c<1U0S=`1AH8Ob0067h00MQn407HOR01eK4\\`WD;=HVlLM7`AG5U\\7S89FhQl1S;<0}7B\x0D\x0A\
{D1R3]\\5He=`2=i@01@H;^9Eh0>B91`=d76:0Q3=Bl>B?D^3U3e;`i9BL0Fb4Q1mFl>BCD_3TVF`GE^3U4e;`i9eSk21<0}2F\x0D\x0A\
{D1R3]d5\\;G]YHDXOR>HLLhTkOQZMHnU\\7S<029E0SGPL29]Bh>CkDncTmMo2G_IoaQ[]HFTCOF59gl8OR>Gn?YhJWeK`0}9A\x0D\x0A\
{D1R3]l3TYe;`i:Ql2e;`i:am:TY:KL=Bl>Ba1`=bO@L3L_B7oe;`i<E\\0@L3MeMBh>CgD_4WQe;Pi?Uh2BSoD_4X@6280}0A\x0D\x0A\
{D1R3^45h2BViK01PR@L0_L1RS8@=N0T9Je;a2GQPRe;Pi@mBl@UEN6500e;a2FEiUGVANHeiQGV1NIeVV001NITF0@L00}68\x0D\x0A\
{D1PG^<5AZ@L3]@DF00000}4C\x0D\x0A\
{D1P7Nj6g9}8A\x0D\x0A\
{D1P7K0MI0}3D\x0D\x0A\
{D1P7K0460}11\x0D\x0A\
{D64h<0000}12\x0D\x0A\
{D1R3n1=hYieoN:460gR_6XmhZ@H3M<^PDg^GQSMkT@H3KV>5_g?kXP]d^jB[Mnn:>gOY1P=e@hY7N1N;lgPA1P=e\\hf<0}FA\x0D\x0A\
{D1R3n9=h9hi7N2460g:3YH=`2i0;KE^@@ffCTl]]\\iF3KW^F^gPOSS=h6@H3Lj^UcgK;ZSM`<iL7KU^G=g7cR=md`igP0}A2\x0D\x0A\
{D1R3nA=kAhPONd460g=[R7Mc8iO?M9T6fgBSZUmdTBVCLV4L3gAcZ]=bJiTgNGN[kgUa1P=iKja;NFT60g<3[^=bhiSh0}07\x0D\x0A\
{D1R3nI=eBiWOMlN:jgO11P=b0i^3KF^KkgSOPLmhf@H3NJnHBgVY1P=gmhN3Mo460gFk[eMgWibOMiT60g4;QDmjojoT0}B2\x0D\x0A\
{D1QCnQ=jn@H3Le^h_fnSW:=^^hJ[Ka^?ig40]J]\\YiPWK>Bo5fd@0@=]30400}EC\x0D\x0A\
{D1P7n0_jG}AA\x0D\x0A\
{D1P[nV6D6;lEU4P10IA00@4h<000bH`07}BD\x0D\x0A\
{D1P7n0ojQ}C4\x0D\x0A\
{D1P;nX^MOaZ<0}E7\x0D\x0A\
{D1P7n0OjS}A6\x0D\x0A\
{D1P7n07XE}6E\x0D\x0A\
{D6LJH}58\x0D\x0A\
{D1R3n1=hYieoN:460gR_6XmhZ@H3M<^PDg^GQSMkT@H3KV>5_g?kXP]d^jB[Mnn:>gOY1P=e@hY7N1N;lgPA1P=e\\hf<0}FA\x0D\x0A\
{D1R3n9=h9hi7N2460g:3YH=`2i0;KE^@@ffCTl]]\\iF3KW^F^gPOSS=h6@H3Lj^UcgK;ZSM`<iL7KU^G=g7cR=md`igP0}A2\x0D\x0A\
{D1R3nA=kAhPONd460g=[R7Mc8iO?M9T6fgBSZUmdTBVCLV4L3gAcZ]=bJiTgNGN[kgUa1P=iKja;NFT60g<3[^=bhiSh0}07\x0D\x0A\
{D1R3nI=eBiWOMlN:jgO11P=b0i^3KF^KkgSOPLmhf@H3NJnHBgVY1P=gmhN3Mo460gFk[eMgWibOMiT60g4;QDmjojoT0}B2\x0D\x0A\
{D1QCnQ=jn@H3Le^h_fnSW:=^^hJ[Ka^?ig40]J]\\YiPWK>Bo5fd@0@=]30400}EC\x0D\x0A\
{D1P7n0_jG}AA\x0D\x0A\
{D1P[nV6D6;lEU4P10IA00@4h<000bH`07}BD\x0D\x0A\
{D1P7n0ojQ}C4\x0D\x0A\
{D1P;nX^MOaZ<0}E7\x0D\x0A\
{D1P7n0OjS}A6\x0D\x0A\
{D1P7n07XE}6E\x0D\x0A\
{D6LJH}58\x0D\x0A\
{D6>8\\ool0}C6\x0D\x0A"
};


