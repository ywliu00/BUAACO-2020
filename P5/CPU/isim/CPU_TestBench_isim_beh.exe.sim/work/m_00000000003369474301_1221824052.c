/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/BUAACO/P5/CPU/InstrDecoder.v";
static unsigned int ng1[] = {33U, 0U};
static unsigned int ng2[] = {1U, 0U, 0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {35U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {13U, 0U};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {43U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {15U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {2U, 0U};
static int ng16[] = {7, 0};
static unsigned int ng17[] = {3U, 0U};
static int ng18[] = {8, 0};
static unsigned int ng19[] = {8U, 0U};
static int ng20[] = {9, 0};
static unsigned int ng21[] = {0U, 0U};
static int ng22[] = {10, 0};
static unsigned int ng23[] = {0U, 0U, 0U, 0U};



static void Cont_29_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 26);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 26);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 63U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 63U);
    xsi_vlogtype_concat(t3, 12, 12, 2U, t13, 6, t4, 6);
    t23 = (t0 + 3840);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 63U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 5);
    t36 = (t0 + 3776);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t40, 0, 8);
    t41 = 4032U;
    t42 = t41;
    t43 = (t3 + 4);
    t44 = *((unsigned int *)t3);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t41 = (t41 >> 6);
    t42 = (t42 >> 6);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 | t41);
    t48 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t48 | t42);
    xsi_driver_vfirst_trans(t36, 0, 5);
    t49 = (t0 + 3664);
    *((int *)t49) = 1;

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 63U);
    if (t10 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    memset(t3, 0, 8);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 | t14);
    if (t15 != 1U)
        goto LAB9;

LAB8:    if (*((unsigned int *)t12) == 0)
        goto LAB10;

LAB11:    t16 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t16) = 1;

LAB9:    t17 = (t0 + 3904);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t21, 0, 8);
    t22 = 1U;
    t23 = t22;
    t24 = (t3 + 4);
    t25 = *((unsigned int *)t3);
    t22 = (t22 & t25);
    t26 = *((unsigned int *)t24);
    t23 = (t23 & t26);
    t27 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 | t22);
    t29 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t29 | t23);
    xsi_driver_vfirst_trans(t17, 0, 0);
    t30 = (t0 + 3680);
    *((int *)t30) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB10:    *((unsigned int *)t3) = 1;
    goto LAB9;

}

static void Cont_32_2(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t19[8];
    char t35[8];
    char t43[8];
    char t88[16];
    char t93[16];
    char t94[8];
    char t97[8];
    char t110[8];
    char t126[8];
    char t134[8];
    char t179[16];
    char t184[16];
    char t185[8];
    char t188[8];
    char t217[16];
    char t222[16];
    char t223[8];
    char t226[8];
    char t255[16];
    char t260[16];
    char t261[8];
    char t264[8];
    char t293[16];
    char t298[16];
    char t299[8];
    char t302[8];
    char t331[16];
    char t336[16];
    char t337[8];
    char t340[8];
    char t369[16];
    char t374[16];
    char t375[8];
    char t378[8];
    char t407[16];
    char t412[16];
    char t413[8];
    char t416[8];
    char t445[16];
    char t450[16];
    char t451[8];
    char t454[8];
    char t467[8];
    char t483[8];
    char t491[8];
    char t536[16];
    char t541[16];
    char t542[8];
    char t545[8];
    char t558[8];
    char t574[8];
    char t582[8];
    char t627[16];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t95;
    char *t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    int t158;
    int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t186;
    char *t187;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t216;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t224;
    char *t225;
    char *t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    char *t253;
    char *t254;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t262;
    char *t263;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    char *t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    char *t291;
    char *t292;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t300;
    char *t301;
    char *t303;
    char *t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    char *t317;
    char *t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    char *t324;
    char *t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t329;
    char *t330;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    char *t338;
    char *t339;
    char *t341;
    char *t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    char *t355;
    char *t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    char *t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    char *t367;
    char *t368;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    char *t376;
    char *t377;
    char *t379;
    char *t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    char *t393;
    char *t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    char *t400;
    char *t401;
    unsigned int t402;
    unsigned int t403;
    unsigned int t404;
    char *t405;
    char *t406;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    char *t414;
    char *t415;
    char *t417;
    char *t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    char *t431;
    char *t432;
    unsigned int t433;
    unsigned int t434;
    unsigned int t435;
    unsigned int t436;
    unsigned int t437;
    char *t438;
    char *t439;
    unsigned int t440;
    unsigned int t441;
    unsigned int t442;
    char *t443;
    char *t444;
    unsigned int t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    char *t452;
    char *t453;
    unsigned int t455;
    unsigned int t456;
    unsigned int t457;
    unsigned int t458;
    unsigned int t459;
    char *t460;
    char *t461;
    unsigned int t462;
    unsigned int t463;
    unsigned int t464;
    char *t465;
    char *t466;
    char *t468;
    char *t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    char *t482;
    char *t484;
    unsigned int t485;
    unsigned int t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    char *t490;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    char *t495;
    char *t496;
    char *t497;
    unsigned int t498;
    unsigned int t499;
    unsigned int t500;
    unsigned int t501;
    unsigned int t502;
    unsigned int t503;
    unsigned int t504;
    char *t505;
    char *t506;
    unsigned int t507;
    unsigned int t508;
    unsigned int t509;
    unsigned int t510;
    unsigned int t511;
    unsigned int t512;
    unsigned int t513;
    unsigned int t514;
    int t515;
    int t516;
    unsigned int t517;
    unsigned int t518;
    unsigned int t519;
    unsigned int t520;
    unsigned int t521;
    unsigned int t522;
    char *t523;
    unsigned int t524;
    unsigned int t525;
    unsigned int t526;
    unsigned int t527;
    unsigned int t528;
    char *t529;
    char *t530;
    unsigned int t531;
    unsigned int t532;
    unsigned int t533;
    char *t534;
    char *t535;
    unsigned int t537;
    unsigned int t538;
    unsigned int t539;
    unsigned int t540;
    char *t543;
    char *t544;
    unsigned int t546;
    unsigned int t547;
    unsigned int t548;
    unsigned int t549;
    unsigned int t550;
    char *t551;
    char *t552;
    unsigned int t553;
    unsigned int t554;
    unsigned int t555;
    char *t556;
    char *t557;
    char *t559;
    char *t560;
    unsigned int t561;
    unsigned int t562;
    unsigned int t563;
    unsigned int t564;
    unsigned int t565;
    unsigned int t566;
    unsigned int t567;
    unsigned int t568;
    unsigned int t569;
    unsigned int t570;
    unsigned int t571;
    unsigned int t572;
    char *t573;
    char *t575;
    unsigned int t576;
    unsigned int t577;
    unsigned int t578;
    unsigned int t579;
    unsigned int t580;
    char *t581;
    unsigned int t583;
    unsigned int t584;
    unsigned int t585;
    char *t586;
    char *t587;
    char *t588;
    unsigned int t589;
    unsigned int t590;
    unsigned int t591;
    unsigned int t592;
    unsigned int t593;
    unsigned int t594;
    unsigned int t595;
    char *t596;
    char *t597;
    unsigned int t598;
    unsigned int t599;
    unsigned int t600;
    unsigned int t601;
    unsigned int t602;
    unsigned int t603;
    unsigned int t604;
    unsigned int t605;
    int t606;
    int t607;
    unsigned int t608;
    unsigned int t609;
    unsigned int t610;
    unsigned int t611;
    unsigned int t612;
    unsigned int t613;
    char *t614;
    unsigned int t615;
    unsigned int t616;
    unsigned int t617;
    unsigned int t618;
    unsigned int t619;
    char *t620;
    char *t621;
    unsigned int t622;
    unsigned int t623;
    unsigned int t624;
    char *t625;
    char *t626;
    unsigned int t628;
    unsigned int t629;
    unsigned int t630;
    unsigned int t631;
    char *t632;
    char *t633;
    char *t634;
    char *t635;
    char *t636;
    char *t637;
    char *t638;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t43, t6, 8);

LAB10:    memset(t4, 0, 8);
    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t75) != 0)
        goto LAB24;

LAB25:    t82 = (t4 + 4);
    t83 = *((unsigned int *)t4);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB26;

LAB27:    t89 = *((unsigned int *)t4);
    t90 = (~(t89));
    t91 = *((unsigned int *)t82);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t82) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t93, 16);

LAB34:    t633 = (t0 + 3968);
    t634 = (t633 + 56U);
    t635 = *((char **)t634);
    t636 = (t635 + 56U);
    t637 = *((char **)t636);
    xsi_vlog_bit_copy(t637, 0, t3, 0, 60);
    xsi_driver_vfirst_trans(t633, 0, 59);
    t638 = (t0 + 3696);
    *((int *)t638) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1528U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = (t17 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB14;

LAB11:    if (t31 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t19) = 1;

LAB14:    memset(t35, 0, 8);
    t36 = (t19 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t36) != 0)
        goto LAB17;

LAB18:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t6 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB13:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t35) = 1;
    goto LAB18;

LAB17:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB18;

LAB19:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t6 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t81 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB25;

LAB26:    t86 = ((char*)((ng2)));
    t87 = ((char*)((ng3)));
    xsi_vlog_unsigned_lshift(t88, 60, t86, 60, t87, 32);
    goto LAB27;

LAB28:    t95 = (t0 + 1688U);
    t96 = *((char **)t95);
    memset(t97, 0, 8);
    t95 = (t96 + 4);
    t98 = *((unsigned int *)t95);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t95) != 0)
        goto LAB37;

LAB38:    t104 = (t97 + 4);
    t105 = *((unsigned int *)t97);
    t106 = *((unsigned int *)t104);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB39;

LAB40:    memcpy(t134, t97, 8);

LAB41:    memset(t94, 0, 8);
    t166 = (t134 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t134);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t166) != 0)
        goto LAB55;

LAB56:    t173 = (t94 + 4);
    t174 = *((unsigned int *)t94);
    t175 = *((unsigned int *)t173);
    t176 = (t174 || t175);
    if (t176 > 0)
        goto LAB57;

LAB58:    t180 = *((unsigned int *)t94);
    t181 = (~(t180));
    t182 = *((unsigned int *)t173);
    t183 = (t181 || t182);
    if (t183 > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t173) > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t94) > 0)
        goto LAB63;

LAB64:    memcpy(t93, t184, 16);

LAB65:    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 60, t88, 60, t93, 60);
    goto LAB34;

LAB32:    memcpy(t3, t88, 16);
    goto LAB34;

LAB35:    *((unsigned int *)t97) = 1;
    goto LAB38;

LAB37:    t103 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB38;

LAB39:    t108 = (t0 + 1528U);
    t109 = *((char **)t108);
    t108 = ((char*)((ng4)));
    memset(t110, 0, 8);
    t111 = (t109 + 4);
    t112 = (t108 + 4);
    t113 = *((unsigned int *)t109);
    t114 = *((unsigned int *)t108);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t111);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t111);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB45;

LAB42:    if (t122 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t110) = 1;

LAB45:    memset(t126, 0, 8);
    t127 = (t110 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t110);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t127) != 0)
        goto LAB48;

LAB49:    t135 = *((unsigned int *)t97);
    t136 = *((unsigned int *)t126);
    t137 = (t135 & t136);
    *((unsigned int *)t134) = t137;
    t138 = (t97 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t125 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t126) = 1;
    goto LAB49;

LAB48:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB49;

LAB50:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t97 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t97);
    t151 = (~(t150));
    t152 = *((unsigned int *)t148);
    t153 = (~(t152));
    t154 = *((unsigned int *)t126);
    t155 = (~(t154));
    t156 = *((unsigned int *)t149);
    t157 = (~(t156));
    t158 = (t151 & t153);
    t159 = (t155 & t157);
    t160 = (~(t158));
    t161 = (~(t159));
    t162 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t162 & t160);
    t163 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t163 & t161);
    t164 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t164 & t160);
    t165 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t165 & t161);
    goto LAB52;

LAB53:    *((unsigned int *)t94) = 1;
    goto LAB56;

LAB55:    t172 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB56;

LAB57:    t177 = ((char*)((ng2)));
    t178 = ((char*)((ng5)));
    xsi_vlog_unsigned_lshift(t179, 60, t177, 60, t178, 32);
    goto LAB58;

LAB59:    t186 = (t0 + 1368U);
    t187 = *((char **)t186);
    t186 = ((char*)((ng6)));
    memset(t188, 0, 8);
    t189 = (t187 + 4);
    t190 = (t186 + 4);
    t191 = *((unsigned int *)t187);
    t192 = *((unsigned int *)t186);
    t193 = (t191 ^ t192);
    t194 = *((unsigned int *)t189);
    t195 = *((unsigned int *)t190);
    t196 = (t194 ^ t195);
    t197 = (t193 | t196);
    t198 = *((unsigned int *)t189);
    t199 = *((unsigned int *)t190);
    t200 = (t198 | t199);
    t201 = (~(t200));
    t202 = (t197 & t201);
    if (t202 != 0)
        goto LAB69;

LAB66:    if (t200 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t188) = 1;

LAB69:    memset(t185, 0, 8);
    t204 = (t188 + 4);
    t205 = *((unsigned int *)t204);
    t206 = (~(t205));
    t207 = *((unsigned int *)t188);
    t208 = (t207 & t206);
    t209 = (t208 & 1U);
    if (t209 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t204) != 0)
        goto LAB72;

LAB73:    t211 = (t185 + 4);
    t212 = *((unsigned int *)t185);
    t213 = *((unsigned int *)t211);
    t214 = (t212 || t213);
    if (t214 > 0)
        goto LAB74;

LAB75:    t218 = *((unsigned int *)t185);
    t219 = (~(t218));
    t220 = *((unsigned int *)t211);
    t221 = (t219 || t220);
    if (t221 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t211) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t185) > 0)
        goto LAB80;

LAB81:    memcpy(t184, t222, 16);

LAB82:    goto LAB60;

LAB61:    xsi_vlog_unsigned_bit_combine(t93, 60, t179, 60, t184, 60);
    goto LAB65;

LAB63:    memcpy(t93, t179, 16);
    goto LAB65;

LAB68:    t203 = (t188 + 4);
    *((unsigned int *)t188) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t185) = 1;
    goto LAB73;

LAB72:    t210 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t210) = 1;
    goto LAB73;

LAB74:    t215 = ((char*)((ng2)));
    t216 = ((char*)((ng7)));
    xsi_vlog_unsigned_lshift(t217, 60, t215, 60, t216, 32);
    goto LAB75;

LAB76:    t224 = (t0 + 1368U);
    t225 = *((char **)t224);
    t224 = ((char*)((ng4)));
    memset(t226, 0, 8);
    t227 = (t225 + 4);
    t228 = (t224 + 4);
    t229 = *((unsigned int *)t225);
    t230 = *((unsigned int *)t224);
    t231 = (t229 ^ t230);
    t232 = *((unsigned int *)t227);
    t233 = *((unsigned int *)t228);
    t234 = (t232 ^ t233);
    t235 = (t231 | t234);
    t236 = *((unsigned int *)t227);
    t237 = *((unsigned int *)t228);
    t238 = (t236 | t237);
    t239 = (~(t238));
    t240 = (t235 & t239);
    if (t240 != 0)
        goto LAB86;

LAB83:    if (t238 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t226) = 1;

LAB86:    memset(t223, 0, 8);
    t242 = (t226 + 4);
    t243 = *((unsigned int *)t242);
    t244 = (~(t243));
    t245 = *((unsigned int *)t226);
    t246 = (t245 & t244);
    t247 = (t246 & 1U);
    if (t247 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t242) != 0)
        goto LAB89;

LAB90:    t249 = (t223 + 4);
    t250 = *((unsigned int *)t223);
    t251 = *((unsigned int *)t249);
    t252 = (t250 || t251);
    if (t252 > 0)
        goto LAB91;

LAB92:    t256 = *((unsigned int *)t223);
    t257 = (~(t256));
    t258 = *((unsigned int *)t249);
    t259 = (t257 || t258);
    if (t259 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t249) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t223) > 0)
        goto LAB97;

LAB98:    memcpy(t222, t260, 16);

LAB99:    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t184, 60, t217, 60, t222, 60);
    goto LAB82;

LAB80:    memcpy(t184, t217, 16);
    goto LAB82;

LAB85:    t241 = (t226 + 4);
    *((unsigned int *)t226) = 1;
    *((unsigned int *)t241) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t223) = 1;
    goto LAB90;

LAB89:    t248 = (t223 + 4);
    *((unsigned int *)t223) = 1;
    *((unsigned int *)t248) = 1;
    goto LAB90;

LAB91:    t253 = ((char*)((ng2)));
    t254 = ((char*)((ng8)));
    xsi_vlog_unsigned_lshift(t255, 60, t253, 60, t254, 32);
    goto LAB92;

LAB93:    t262 = (t0 + 1368U);
    t263 = *((char **)t262);
    t262 = ((char*)((ng9)));
    memset(t264, 0, 8);
    t265 = (t263 + 4);
    t266 = (t262 + 4);
    t267 = *((unsigned int *)t263);
    t268 = *((unsigned int *)t262);
    t269 = (t267 ^ t268);
    t270 = *((unsigned int *)t265);
    t271 = *((unsigned int *)t266);
    t272 = (t270 ^ t271);
    t273 = (t269 | t272);
    t274 = *((unsigned int *)t265);
    t275 = *((unsigned int *)t266);
    t276 = (t274 | t275);
    t277 = (~(t276));
    t278 = (t273 & t277);
    if (t278 != 0)
        goto LAB103;

LAB100:    if (t276 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t264) = 1;

LAB103:    memset(t261, 0, 8);
    t280 = (t264 + 4);
    t281 = *((unsigned int *)t280);
    t282 = (~(t281));
    t283 = *((unsigned int *)t264);
    t284 = (t283 & t282);
    t285 = (t284 & 1U);
    if (t285 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t280) != 0)
        goto LAB106;

LAB107:    t287 = (t261 + 4);
    t288 = *((unsigned int *)t261);
    t289 = *((unsigned int *)t287);
    t290 = (t288 || t289);
    if (t290 > 0)
        goto LAB108;

LAB109:    t294 = *((unsigned int *)t261);
    t295 = (~(t294));
    t296 = *((unsigned int *)t287);
    t297 = (t295 || t296);
    if (t297 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t287) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t261) > 0)
        goto LAB114;

LAB115:    memcpy(t260, t298, 16);

LAB116:    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t222, 60, t255, 60, t260, 60);
    goto LAB99;

LAB97:    memcpy(t222, t255, 16);
    goto LAB99;

LAB102:    t279 = (t264 + 4);
    *((unsigned int *)t264) = 1;
    *((unsigned int *)t279) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t261) = 1;
    goto LAB107;

LAB106:    t286 = (t261 + 4);
    *((unsigned int *)t261) = 1;
    *((unsigned int *)t286) = 1;
    goto LAB107;

LAB108:    t291 = ((char*)((ng2)));
    t292 = ((char*)((ng10)));
    xsi_vlog_unsigned_lshift(t293, 60, t291, 60, t292, 32);
    goto LAB109;

LAB110:    t300 = (t0 + 1368U);
    t301 = *((char **)t300);
    t300 = ((char*)((ng11)));
    memset(t302, 0, 8);
    t303 = (t301 + 4);
    t304 = (t300 + 4);
    t305 = *((unsigned int *)t301);
    t306 = *((unsigned int *)t300);
    t307 = (t305 ^ t306);
    t308 = *((unsigned int *)t303);
    t309 = *((unsigned int *)t304);
    t310 = (t308 ^ t309);
    t311 = (t307 | t310);
    t312 = *((unsigned int *)t303);
    t313 = *((unsigned int *)t304);
    t314 = (t312 | t313);
    t315 = (~(t314));
    t316 = (t311 & t315);
    if (t316 != 0)
        goto LAB120;

LAB117:    if (t314 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t302) = 1;

LAB120:    memset(t299, 0, 8);
    t318 = (t302 + 4);
    t319 = *((unsigned int *)t318);
    t320 = (~(t319));
    t321 = *((unsigned int *)t302);
    t322 = (t321 & t320);
    t323 = (t322 & 1U);
    if (t323 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t318) != 0)
        goto LAB123;

LAB124:    t325 = (t299 + 4);
    t326 = *((unsigned int *)t299);
    t327 = *((unsigned int *)t325);
    t328 = (t326 || t327);
    if (t328 > 0)
        goto LAB125;

LAB126:    t332 = *((unsigned int *)t299);
    t333 = (~(t332));
    t334 = *((unsigned int *)t325);
    t335 = (t333 || t334);
    if (t335 > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t325) > 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t299) > 0)
        goto LAB131;

LAB132:    memcpy(t298, t336, 16);

LAB133:    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t260, 60, t293, 60, t298, 60);
    goto LAB116;

LAB114:    memcpy(t260, t293, 16);
    goto LAB116;

LAB119:    t317 = (t302 + 4);
    *((unsigned int *)t302) = 1;
    *((unsigned int *)t317) = 1;
    goto LAB120;

LAB121:    *((unsigned int *)t299) = 1;
    goto LAB124;

LAB123:    t324 = (t299 + 4);
    *((unsigned int *)t299) = 1;
    *((unsigned int *)t324) = 1;
    goto LAB124;

LAB125:    t329 = ((char*)((ng2)));
    t330 = ((char*)((ng12)));
    xsi_vlog_unsigned_lshift(t331, 60, t329, 60, t330, 32);
    goto LAB126;

LAB127:    t338 = (t0 + 1368U);
    t339 = *((char **)t338);
    t338 = ((char*)((ng13)));
    memset(t340, 0, 8);
    t341 = (t339 + 4);
    t342 = (t338 + 4);
    t343 = *((unsigned int *)t339);
    t344 = *((unsigned int *)t338);
    t345 = (t343 ^ t344);
    t346 = *((unsigned int *)t341);
    t347 = *((unsigned int *)t342);
    t348 = (t346 ^ t347);
    t349 = (t345 | t348);
    t350 = *((unsigned int *)t341);
    t351 = *((unsigned int *)t342);
    t352 = (t350 | t351);
    t353 = (~(t352));
    t354 = (t349 & t353);
    if (t354 != 0)
        goto LAB137;

LAB134:    if (t352 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t340) = 1;

LAB137:    memset(t337, 0, 8);
    t356 = (t340 + 4);
    t357 = *((unsigned int *)t356);
    t358 = (~(t357));
    t359 = *((unsigned int *)t340);
    t360 = (t359 & t358);
    t361 = (t360 & 1U);
    if (t361 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t356) != 0)
        goto LAB140;

LAB141:    t363 = (t337 + 4);
    t364 = *((unsigned int *)t337);
    t365 = *((unsigned int *)t363);
    t366 = (t364 || t365);
    if (t366 > 0)
        goto LAB142;

LAB143:    t370 = *((unsigned int *)t337);
    t371 = (~(t370));
    t372 = *((unsigned int *)t363);
    t373 = (t371 || t372);
    if (t373 > 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t363) > 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t337) > 0)
        goto LAB148;

LAB149:    memcpy(t336, t374, 16);

LAB150:    goto LAB128;

LAB129:    xsi_vlog_unsigned_bit_combine(t298, 60, t331, 60, t336, 60);
    goto LAB133;

LAB131:    memcpy(t298, t331, 16);
    goto LAB133;

LAB136:    t355 = (t340 + 4);
    *((unsigned int *)t340) = 1;
    *((unsigned int *)t355) = 1;
    goto LAB137;

LAB138:    *((unsigned int *)t337) = 1;
    goto LAB141;

LAB140:    t362 = (t337 + 4);
    *((unsigned int *)t337) = 1;
    *((unsigned int *)t362) = 1;
    goto LAB141;

LAB142:    t367 = ((char*)((ng2)));
    t368 = ((char*)((ng14)));
    xsi_vlog_unsigned_lshift(t369, 60, t367, 60, t368, 32);
    goto LAB143;

LAB144:    t376 = (t0 + 1368U);
    t377 = *((char **)t376);
    t376 = ((char*)((ng15)));
    memset(t378, 0, 8);
    t379 = (t377 + 4);
    t380 = (t376 + 4);
    t381 = *((unsigned int *)t377);
    t382 = *((unsigned int *)t376);
    t383 = (t381 ^ t382);
    t384 = *((unsigned int *)t379);
    t385 = *((unsigned int *)t380);
    t386 = (t384 ^ t385);
    t387 = (t383 | t386);
    t388 = *((unsigned int *)t379);
    t389 = *((unsigned int *)t380);
    t390 = (t388 | t389);
    t391 = (~(t390));
    t392 = (t387 & t391);
    if (t392 != 0)
        goto LAB154;

LAB151:    if (t390 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t378) = 1;

LAB154:    memset(t375, 0, 8);
    t394 = (t378 + 4);
    t395 = *((unsigned int *)t394);
    t396 = (~(t395));
    t397 = *((unsigned int *)t378);
    t398 = (t397 & t396);
    t399 = (t398 & 1U);
    if (t399 != 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t394) != 0)
        goto LAB157;

LAB158:    t401 = (t375 + 4);
    t402 = *((unsigned int *)t375);
    t403 = *((unsigned int *)t401);
    t404 = (t402 || t403);
    if (t404 > 0)
        goto LAB159;

LAB160:    t408 = *((unsigned int *)t375);
    t409 = (~(t408));
    t410 = *((unsigned int *)t401);
    t411 = (t409 || t410);
    if (t411 > 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t401) > 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t375) > 0)
        goto LAB165;

LAB166:    memcpy(t374, t412, 16);

LAB167:    goto LAB145;

LAB146:    xsi_vlog_unsigned_bit_combine(t336, 60, t369, 60, t374, 60);
    goto LAB150;

LAB148:    memcpy(t336, t369, 16);
    goto LAB150;

LAB153:    t393 = (t378 + 4);
    *((unsigned int *)t378) = 1;
    *((unsigned int *)t393) = 1;
    goto LAB154;

LAB155:    *((unsigned int *)t375) = 1;
    goto LAB158;

LAB157:    t400 = (t375 + 4);
    *((unsigned int *)t375) = 1;
    *((unsigned int *)t400) = 1;
    goto LAB158;

LAB159:    t405 = ((char*)((ng2)));
    t406 = ((char*)((ng16)));
    xsi_vlog_unsigned_lshift(t407, 60, t405, 60, t406, 32);
    goto LAB160;

LAB161:    t414 = (t0 + 1368U);
    t415 = *((char **)t414);
    t414 = ((char*)((ng17)));
    memset(t416, 0, 8);
    t417 = (t415 + 4);
    t418 = (t414 + 4);
    t419 = *((unsigned int *)t415);
    t420 = *((unsigned int *)t414);
    t421 = (t419 ^ t420);
    t422 = *((unsigned int *)t417);
    t423 = *((unsigned int *)t418);
    t424 = (t422 ^ t423);
    t425 = (t421 | t424);
    t426 = *((unsigned int *)t417);
    t427 = *((unsigned int *)t418);
    t428 = (t426 | t427);
    t429 = (~(t428));
    t430 = (t425 & t429);
    if (t430 != 0)
        goto LAB171;

LAB168:    if (t428 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t416) = 1;

LAB171:    memset(t413, 0, 8);
    t432 = (t416 + 4);
    t433 = *((unsigned int *)t432);
    t434 = (~(t433));
    t435 = *((unsigned int *)t416);
    t436 = (t435 & t434);
    t437 = (t436 & 1U);
    if (t437 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t432) != 0)
        goto LAB174;

LAB175:    t439 = (t413 + 4);
    t440 = *((unsigned int *)t413);
    t441 = *((unsigned int *)t439);
    t442 = (t440 || t441);
    if (t442 > 0)
        goto LAB176;

LAB177:    t446 = *((unsigned int *)t413);
    t447 = (~(t446));
    t448 = *((unsigned int *)t439);
    t449 = (t447 || t448);
    if (t449 > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t439) > 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t413) > 0)
        goto LAB182;

LAB183:    memcpy(t412, t450, 16);

LAB184:    goto LAB162;

LAB163:    xsi_vlog_unsigned_bit_combine(t374, 60, t407, 60, t412, 60);
    goto LAB167;

LAB165:    memcpy(t374, t407, 16);
    goto LAB167;

LAB170:    t431 = (t416 + 4);
    *((unsigned int *)t416) = 1;
    *((unsigned int *)t431) = 1;
    goto LAB171;

LAB172:    *((unsigned int *)t413) = 1;
    goto LAB175;

LAB174:    t438 = (t413 + 4);
    *((unsigned int *)t413) = 1;
    *((unsigned int *)t438) = 1;
    goto LAB175;

LAB176:    t443 = ((char*)((ng2)));
    t444 = ((char*)((ng18)));
    xsi_vlog_unsigned_lshift(t445, 60, t443, 60, t444, 32);
    goto LAB177;

LAB178:    t452 = (t0 + 1688U);
    t453 = *((char **)t452);
    memset(t454, 0, 8);
    t452 = (t453 + 4);
    t455 = *((unsigned int *)t452);
    t456 = (~(t455));
    t457 = *((unsigned int *)t453);
    t458 = (t457 & t456);
    t459 = (t458 & 1U);
    if (t459 != 0)
        goto LAB185;

LAB186:    if (*((unsigned int *)t452) != 0)
        goto LAB187;

LAB188:    t461 = (t454 + 4);
    t462 = *((unsigned int *)t454);
    t463 = *((unsigned int *)t461);
    t464 = (t462 || t463);
    if (t464 > 0)
        goto LAB189;

LAB190:    memcpy(t491, t454, 8);

LAB191:    memset(t451, 0, 8);
    t523 = (t491 + 4);
    t524 = *((unsigned int *)t523);
    t525 = (~(t524));
    t526 = *((unsigned int *)t491);
    t527 = (t526 & t525);
    t528 = (t527 & 1U);
    if (t528 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t523) != 0)
        goto LAB205;

LAB206:    t530 = (t451 + 4);
    t531 = *((unsigned int *)t451);
    t532 = *((unsigned int *)t530);
    t533 = (t531 || t532);
    if (t533 > 0)
        goto LAB207;

LAB208:    t537 = *((unsigned int *)t451);
    t538 = (~(t537));
    t539 = *((unsigned int *)t530);
    t540 = (t538 || t539);
    if (t540 > 0)
        goto LAB209;

LAB210:    if (*((unsigned int *)t530) > 0)
        goto LAB211;

LAB212:    if (*((unsigned int *)t451) > 0)
        goto LAB213;

LAB214:    memcpy(t450, t541, 16);

LAB215:    goto LAB179;

LAB180:    xsi_vlog_unsigned_bit_combine(t412, 60, t445, 60, t450, 60);
    goto LAB184;

LAB182:    memcpy(t412, t445, 16);
    goto LAB184;

LAB185:    *((unsigned int *)t454) = 1;
    goto LAB188;

LAB187:    t460 = (t454 + 4);
    *((unsigned int *)t454) = 1;
    *((unsigned int *)t460) = 1;
    goto LAB188;

LAB189:    t465 = (t0 + 1528U);
    t466 = *((char **)t465);
    t465 = ((char*)((ng19)));
    memset(t467, 0, 8);
    t468 = (t466 + 4);
    t469 = (t465 + 4);
    t470 = *((unsigned int *)t466);
    t471 = *((unsigned int *)t465);
    t472 = (t470 ^ t471);
    t473 = *((unsigned int *)t468);
    t474 = *((unsigned int *)t469);
    t475 = (t473 ^ t474);
    t476 = (t472 | t475);
    t477 = *((unsigned int *)t468);
    t478 = *((unsigned int *)t469);
    t479 = (t477 | t478);
    t480 = (~(t479));
    t481 = (t476 & t480);
    if (t481 != 0)
        goto LAB195;

LAB192:    if (t479 != 0)
        goto LAB194;

LAB193:    *((unsigned int *)t467) = 1;

LAB195:    memset(t483, 0, 8);
    t484 = (t467 + 4);
    t485 = *((unsigned int *)t484);
    t486 = (~(t485));
    t487 = *((unsigned int *)t467);
    t488 = (t487 & t486);
    t489 = (t488 & 1U);
    if (t489 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t484) != 0)
        goto LAB198;

LAB199:    t492 = *((unsigned int *)t454);
    t493 = *((unsigned int *)t483);
    t494 = (t492 & t493);
    *((unsigned int *)t491) = t494;
    t495 = (t454 + 4);
    t496 = (t483 + 4);
    t497 = (t491 + 4);
    t498 = *((unsigned int *)t495);
    t499 = *((unsigned int *)t496);
    t500 = (t498 | t499);
    *((unsigned int *)t497) = t500;
    t501 = *((unsigned int *)t497);
    t502 = (t501 != 0);
    if (t502 == 1)
        goto LAB200;

LAB201:
LAB202:    goto LAB191;

LAB194:    t482 = (t467 + 4);
    *((unsigned int *)t467) = 1;
    *((unsigned int *)t482) = 1;
    goto LAB195;

LAB196:    *((unsigned int *)t483) = 1;
    goto LAB199;

LAB198:    t490 = (t483 + 4);
    *((unsigned int *)t483) = 1;
    *((unsigned int *)t490) = 1;
    goto LAB199;

LAB200:    t503 = *((unsigned int *)t491);
    t504 = *((unsigned int *)t497);
    *((unsigned int *)t491) = (t503 | t504);
    t505 = (t454 + 4);
    t506 = (t483 + 4);
    t507 = *((unsigned int *)t454);
    t508 = (~(t507));
    t509 = *((unsigned int *)t505);
    t510 = (~(t509));
    t511 = *((unsigned int *)t483);
    t512 = (~(t511));
    t513 = *((unsigned int *)t506);
    t514 = (~(t513));
    t515 = (t508 & t510);
    t516 = (t512 & t514);
    t517 = (~(t515));
    t518 = (~(t516));
    t519 = *((unsigned int *)t497);
    *((unsigned int *)t497) = (t519 & t517);
    t520 = *((unsigned int *)t497);
    *((unsigned int *)t497) = (t520 & t518);
    t521 = *((unsigned int *)t491);
    *((unsigned int *)t491) = (t521 & t517);
    t522 = *((unsigned int *)t491);
    *((unsigned int *)t491) = (t522 & t518);
    goto LAB202;

LAB203:    *((unsigned int *)t451) = 1;
    goto LAB206;

LAB205:    t529 = (t451 + 4);
    *((unsigned int *)t451) = 1;
    *((unsigned int *)t529) = 1;
    goto LAB206;

LAB207:    t534 = ((char*)((ng2)));
    t535 = ((char*)((ng20)));
    xsi_vlog_unsigned_lshift(t536, 60, t534, 60, t535, 32);
    goto LAB208;

LAB209:    t543 = (t0 + 1688U);
    t544 = *((char **)t543);
    memset(t545, 0, 8);
    t543 = (t544 + 4);
    t546 = *((unsigned int *)t543);
    t547 = (~(t546));
    t548 = *((unsigned int *)t544);
    t549 = (t548 & t547);
    t550 = (t549 & 1U);
    if (t550 != 0)
        goto LAB216;

LAB217:    if (*((unsigned int *)t543) != 0)
        goto LAB218;

LAB219:    t552 = (t545 + 4);
    t553 = *((unsigned int *)t545);
    t554 = *((unsigned int *)t552);
    t555 = (t553 || t554);
    if (t555 > 0)
        goto LAB220;

LAB221:    memcpy(t582, t545, 8);

LAB222:    memset(t542, 0, 8);
    t614 = (t582 + 4);
    t615 = *((unsigned int *)t614);
    t616 = (~(t615));
    t617 = *((unsigned int *)t582);
    t618 = (t617 & t616);
    t619 = (t618 & 1U);
    if (t619 != 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t614) != 0)
        goto LAB236;

LAB237:    t621 = (t542 + 4);
    t622 = *((unsigned int *)t542);
    t623 = *((unsigned int *)t621);
    t624 = (t622 || t623);
    if (t624 > 0)
        goto LAB238;

LAB239:    t628 = *((unsigned int *)t542);
    t629 = (~(t628));
    t630 = *((unsigned int *)t621);
    t631 = (t629 || t630);
    if (t631 > 0)
        goto LAB240;

LAB241:    if (*((unsigned int *)t621) > 0)
        goto LAB242;

LAB243:    if (*((unsigned int *)t542) > 0)
        goto LAB244;

LAB245:    memcpy(t541, t632, 16);

LAB246:    goto LAB210;

LAB211:    xsi_vlog_unsigned_bit_combine(t450, 60, t536, 60, t541, 60);
    goto LAB215;

LAB213:    memcpy(t450, t536, 16);
    goto LAB215;

LAB216:    *((unsigned int *)t545) = 1;
    goto LAB219;

LAB218:    t551 = (t545 + 4);
    *((unsigned int *)t545) = 1;
    *((unsigned int *)t551) = 1;
    goto LAB219;

LAB220:    t556 = (t0 + 1528U);
    t557 = *((char **)t556);
    t556 = ((char*)((ng21)));
    memset(t558, 0, 8);
    t559 = (t557 + 4);
    t560 = (t556 + 4);
    t561 = *((unsigned int *)t557);
    t562 = *((unsigned int *)t556);
    t563 = (t561 ^ t562);
    t564 = *((unsigned int *)t559);
    t565 = *((unsigned int *)t560);
    t566 = (t564 ^ t565);
    t567 = (t563 | t566);
    t568 = *((unsigned int *)t559);
    t569 = *((unsigned int *)t560);
    t570 = (t568 | t569);
    t571 = (~(t570));
    t572 = (t567 & t571);
    if (t572 != 0)
        goto LAB226;

LAB223:    if (t570 != 0)
        goto LAB225;

LAB224:    *((unsigned int *)t558) = 1;

LAB226:    memset(t574, 0, 8);
    t575 = (t558 + 4);
    t576 = *((unsigned int *)t575);
    t577 = (~(t576));
    t578 = *((unsigned int *)t558);
    t579 = (t578 & t577);
    t580 = (t579 & 1U);
    if (t580 != 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t575) != 0)
        goto LAB229;

LAB230:    t583 = *((unsigned int *)t545);
    t584 = *((unsigned int *)t574);
    t585 = (t583 & t584);
    *((unsigned int *)t582) = t585;
    t586 = (t545 + 4);
    t587 = (t574 + 4);
    t588 = (t582 + 4);
    t589 = *((unsigned int *)t586);
    t590 = *((unsigned int *)t587);
    t591 = (t589 | t590);
    *((unsigned int *)t588) = t591;
    t592 = *((unsigned int *)t588);
    t593 = (t592 != 0);
    if (t593 == 1)
        goto LAB231;

LAB232:
LAB233:    goto LAB222;

LAB225:    t573 = (t558 + 4);
    *((unsigned int *)t558) = 1;
    *((unsigned int *)t573) = 1;
    goto LAB226;

LAB227:    *((unsigned int *)t574) = 1;
    goto LAB230;

LAB229:    t581 = (t574 + 4);
    *((unsigned int *)t574) = 1;
    *((unsigned int *)t581) = 1;
    goto LAB230;

LAB231:    t594 = *((unsigned int *)t582);
    t595 = *((unsigned int *)t588);
    *((unsigned int *)t582) = (t594 | t595);
    t596 = (t545 + 4);
    t597 = (t574 + 4);
    t598 = *((unsigned int *)t545);
    t599 = (~(t598));
    t600 = *((unsigned int *)t596);
    t601 = (~(t600));
    t602 = *((unsigned int *)t574);
    t603 = (~(t602));
    t604 = *((unsigned int *)t597);
    t605 = (~(t604));
    t606 = (t599 & t601);
    t607 = (t603 & t605);
    t608 = (~(t606));
    t609 = (~(t607));
    t610 = *((unsigned int *)t588);
    *((unsigned int *)t588) = (t610 & t608);
    t611 = *((unsigned int *)t588);
    *((unsigned int *)t588) = (t611 & t609);
    t612 = *((unsigned int *)t582);
    *((unsigned int *)t582) = (t612 & t608);
    t613 = *((unsigned int *)t582);
    *((unsigned int *)t582) = (t613 & t609);
    goto LAB233;

LAB234:    *((unsigned int *)t542) = 1;
    goto LAB237;

LAB236:    t620 = (t542 + 4);
    *((unsigned int *)t542) = 1;
    *((unsigned int *)t620) = 1;
    goto LAB237;

LAB238:    t625 = ((char*)((ng2)));
    t626 = ((char*)((ng22)));
    xsi_vlog_unsigned_lshift(t627, 60, t625, 60, t626, 32);
    goto LAB239;

LAB240:    t632 = ((char*)((ng23)));
    goto LAB241;

LAB242:    xsi_vlog_unsigned_bit_combine(t541, 60, t627, 60, t632, 60);
    goto LAB246;

LAB244:    memcpy(t541, t627, 16);
    goto LAB246;

}


extern void work_m_00000000003369474301_1221824052_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Cont_30_1,(void *)Cont_32_2};
	xsi_register_didat("work_m_00000000003369474301_1221824052", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000003369474301_1221824052.didat");
	xsi_register_executes(pe);
}
