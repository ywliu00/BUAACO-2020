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
static const char *ng0 = "F:/Course/CO/P6_new/CPU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 4520);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 4392);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_32_1(char *t0)
{
    char t3[16];
    char t7[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t19 = (t5 + 4);
    t20 = (t7 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    xsi_vlogtype_concat(t3, 33, 33, 2U, t15, 1, t4, 32);
    t47 = (t0 + 4584);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    xsi_vlog_bit_copy(t51, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t47, 0, 32);
    t52 = (t0 + 4408);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t27 | t28);
    t29 = (t5 + 4);
    t30 = (t7 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = (t32 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t41);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t42);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t42);
    goto LAB6;

}

static void Cont_33_2(char *t0)
{
    char t3[16];
    char t7[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t19 = (t5 + 4);
    t20 = (t7 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    xsi_vlogtype_concat(t3, 33, 33, 2U, t15, 1, t4, 32);
    t47 = (t0 + 4648);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    xsi_vlog_bit_copy(t51, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t47, 0, 32);
    t52 = (t0 + 4424);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t15) = (t27 | t28);
    t29 = (t5 + 4);
    t30 = (t7 + 4);
    t31 = *((unsigned int *)t5);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t7);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = (t32 & t34);
    t40 = (t36 & t38);
    t41 = (~(t39));
    t42 = (~(t40));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t41);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t42);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t42);
    goto LAB6;

}

static void Cont_35_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t41[8];
    char t42[8];
    char t44[8];
    char t74[8];
    char t79[8];
    char t80[8];
    char t82[8];
    char t112[8];
    char t143[8];
    char t144[8];
    char t147[8];
    char t177[8];
    char t182[8];
    char t183[8];
    char t185[8];
    char t215[8];
    char t250[8];
    char t251[8];
    char t254[8];
    char t284[8];
    char t301[8];
    char t302[8];
    char t305[8];
    char t335[8];
    char t357[8];
    char t358[8];
    char t361[8];
    char t391[8];
    char t396[8];
    char t397[8];
    char t399[8];
    char t429[8];
    char t434[8];
    char t435[8];
    char t437[8];
    char t464[8];
    char t465[8];
    char t471[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t145;
    char *t146;
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
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t184;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    int t238;
    int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t252;
    char *t253;
    char *t255;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    char *t281;
    char *t282;
    char *t283;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t288;
    char *t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t303;
    char *t304;
    char *t306;
    char *t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    char *t320;
    char *t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    char *t327;
    char *t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    char *t332;
    char *t333;
    char *t334;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    char *t339;
    char *t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    char *t359;
    char *t360;
    char *t362;
    char *t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    char *t376;
    char *t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    char *t383;
    char *t384;
    unsigned int t385;
    unsigned int t386;
    unsigned int t387;
    char *t388;
    char *t389;
    char *t390;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    char *t398;
    char *t400;
    char *t401;
    unsigned int t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    unsigned int t413;
    char *t414;
    char *t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    char *t421;
    char *t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    char *t426;
    char *t427;
    char *t428;
    unsigned int t430;
    unsigned int t431;
    unsigned int t432;
    unsigned int t433;
    char *t436;
    char *t438;
    char *t439;
    unsigned int t440;
    unsigned int t441;
    unsigned int t442;
    unsigned int t443;
    unsigned int t444;
    unsigned int t445;
    unsigned int t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    char *t452;
    char *t453;
    unsigned int t454;
    unsigned int t455;
    unsigned int t456;
    unsigned int t457;
    unsigned int t458;
    char *t459;
    char *t460;
    unsigned int t461;
    unsigned int t462;
    unsigned int t463;
    char *t467;
    char *t468;
    char *t470;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    char *t477;
    char *t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    char *t482;
    unsigned int t483;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    char *t487;
    unsigned int t488;
    unsigned int t489;
    unsigned int t490;
    unsigned int t491;
    char *t492;
    char *t493;
    char *t494;
    char *t495;
    char *t496;
    char *t497;
    char *t498;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t493 = (t0 + 4712);
    t494 = (t493 + 56U);
    t495 = *((char **)t494);
    t496 = (t495 + 56U);
    t497 = *((char **)t496);
    memcpy(t497, t3, 8);
    xsi_driver_vfirst_trans(t493, 0, 31);
    t498 = (t0 + 4440);
    *((int *)t498) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = (t0 + 1208U);
    t35 = *((char **)t33);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 32, t35, 32);
    goto LAB13;

LAB14:    t33 = (t0 + 1368U);
    t43 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t33 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t33);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t42, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t42 + 4);
    t68 = *((unsigned int *)t42);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t42);
    t76 = (~(t75));
    t77 = *((unsigned int *)t67);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t42) > 0)
        goto LAB35;

LAB36:    memcpy(t41, t79, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB27:    t66 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 1048U);
    t72 = *((char **)t71);
    t71 = (t0 + 1208U);
    t73 = *((char **)t71);
    memset(t74, 0, 8);
    xsi_vlog_unsigned_minus(t74, 32, t72, 32, t73, 32);
    goto LAB30;

LAB31:    t71 = (t0 + 1368U);
    t81 = *((char **)t71);
    t71 = ((char*)((ng3)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t71 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t71);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t80, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t80 + 4);
    t106 = *((unsigned int *)t80);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t139 = *((unsigned int *)t80);
    t140 = (~(t139));
    t141 = *((unsigned int *)t105);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t80) > 0)
        goto LAB52;

LAB53:    memcpy(t79, t143, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t41, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t41, t74, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t80) = 1;
    goto LAB45;

LAB44:    t104 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 1048U);
    t110 = *((char **)t109);
    t109 = (t0 + 1208U);
    t111 = *((char **)t109);
    t113 = *((unsigned int *)t110);
    t114 = *((unsigned int *)t111);
    t115 = (t113 | t114);
    *((unsigned int *)t112) = t115;
    t109 = (t110 + 4);
    t116 = (t111 + 4);
    t117 = (t112 + 4);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB47;

LAB48:    t145 = (t0 + 1368U);
    t146 = *((char **)t145);
    t145 = ((char*)((ng4)));
    memset(t147, 0, 8);
    t148 = (t146 + 4);
    t149 = (t145 + 4);
    t150 = *((unsigned int *)t146);
    t151 = *((unsigned int *)t145);
    t152 = (t150 ^ t151);
    t153 = *((unsigned int *)t148);
    t154 = *((unsigned int *)t149);
    t155 = (t153 ^ t154);
    t156 = (t152 | t155);
    t157 = *((unsigned int *)t148);
    t158 = *((unsigned int *)t149);
    t159 = (t157 | t158);
    t160 = (~(t159));
    t161 = (t156 & t160);
    if (t161 != 0)
        goto LAB61;

LAB58:    if (t159 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t147) = 1;

LAB61:    memset(t144, 0, 8);
    t163 = (t147 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t147);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t163) != 0)
        goto LAB64;

LAB65:    t170 = (t144 + 4);
    t171 = *((unsigned int *)t144);
    t172 = *((unsigned int *)t170);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB66;

LAB67:    t178 = *((unsigned int *)t144);
    t179 = (~(t178));
    t180 = *((unsigned int *)t170);
    t181 = (t179 || t180);
    if (t181 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t170) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t144) > 0)
        goto LAB72;

LAB73:    memcpy(t143, t182, 8);

LAB74:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t79, 32, t112, 32, t143, 32);
    goto LAB54;

LAB52:    memcpy(t79, t112, 8);
    goto LAB54;

LAB55:    t123 = *((unsigned int *)t112);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t112) = (t123 | t124);
    t125 = (t110 + 4);
    t126 = (t111 + 4);
    t127 = *((unsigned int *)t125);
    t128 = (~(t127));
    t129 = *((unsigned int *)t110);
    t130 = (t129 & t128);
    t131 = *((unsigned int *)t126);
    t132 = (~(t131));
    t133 = *((unsigned int *)t111);
    t134 = (t133 & t132);
    t135 = (~(t130));
    t136 = (~(t134));
    t137 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t137 & t135);
    t138 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t138 & t136);
    goto LAB57;

LAB60:    t162 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t144) = 1;
    goto LAB65;

LAB64:    t169 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB65;

LAB66:    t174 = (t0 + 1208U);
    t175 = *((char **)t174);
    t174 = (t0 + 1848U);
    t176 = *((char **)t174);
    memset(t177, 0, 8);
    xsi_vlog_unsigned_lshift(t177, 32, t175, 32, t176, 5);
    goto LAB67;

LAB68:    t174 = (t0 + 1368U);
    t184 = *((char **)t174);
    t174 = ((char*)((ng5)));
    memset(t185, 0, 8);
    t186 = (t184 + 4);
    t187 = (t174 + 4);
    t188 = *((unsigned int *)t184);
    t189 = *((unsigned int *)t174);
    t190 = (t188 ^ t189);
    t191 = *((unsigned int *)t186);
    t192 = *((unsigned int *)t187);
    t193 = (t191 ^ t192);
    t194 = (t190 | t193);
    t195 = *((unsigned int *)t186);
    t196 = *((unsigned int *)t187);
    t197 = (t195 | t196);
    t198 = (~(t197));
    t199 = (t194 & t198);
    if (t199 != 0)
        goto LAB78;

LAB75:    if (t197 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t185) = 1;

LAB78:    memset(t183, 0, 8);
    t201 = (t185 + 4);
    t202 = *((unsigned int *)t201);
    t203 = (~(t202));
    t204 = *((unsigned int *)t185);
    t205 = (t204 & t203);
    t206 = (t205 & 1U);
    if (t206 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t201) != 0)
        goto LAB81;

LAB82:    t208 = (t183 + 4);
    t209 = *((unsigned int *)t183);
    t210 = *((unsigned int *)t208);
    t211 = (t209 || t210);
    if (t211 > 0)
        goto LAB83;

LAB84:    t246 = *((unsigned int *)t183);
    t247 = (~(t246));
    t248 = *((unsigned int *)t208);
    t249 = (t247 || t248);
    if (t249 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t208) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t183) > 0)
        goto LAB89;

LAB90:    memcpy(t182, t250, 8);

LAB91:    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t143, 32, t177, 32, t182, 32);
    goto LAB74;

LAB72:    memcpy(t143, t177, 8);
    goto LAB74;

LAB77:    t200 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t183) = 1;
    goto LAB82;

LAB81:    t207 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t207) = 1;
    goto LAB82;

LAB83:    t212 = (t0 + 1048U);
    t213 = *((char **)t212);
    t212 = (t0 + 1208U);
    t214 = *((char **)t212);
    t216 = *((unsigned int *)t213);
    t217 = *((unsigned int *)t214);
    t218 = (t216 & t217);
    *((unsigned int *)t215) = t218;
    t212 = (t213 + 4);
    t219 = (t214 + 4);
    t220 = (t215 + 4);
    t221 = *((unsigned int *)t212);
    t222 = *((unsigned int *)t219);
    t223 = (t221 | t222);
    *((unsigned int *)t220) = t223;
    t224 = *((unsigned int *)t220);
    t225 = (t224 != 0);
    if (t225 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB84;

LAB85:    t252 = (t0 + 1368U);
    t253 = *((char **)t252);
    t252 = ((char*)((ng6)));
    memset(t254, 0, 8);
    t255 = (t253 + 4);
    t256 = (t252 + 4);
    t257 = *((unsigned int *)t253);
    t258 = *((unsigned int *)t252);
    t259 = (t257 ^ t258);
    t260 = *((unsigned int *)t255);
    t261 = *((unsigned int *)t256);
    t262 = (t260 ^ t261);
    t263 = (t259 | t262);
    t264 = *((unsigned int *)t255);
    t265 = *((unsigned int *)t256);
    t266 = (t264 | t265);
    t267 = (~(t266));
    t268 = (t263 & t267);
    if (t268 != 0)
        goto LAB98;

LAB95:    if (t266 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t254) = 1;

LAB98:    memset(t251, 0, 8);
    t270 = (t254 + 4);
    t271 = *((unsigned int *)t270);
    t272 = (~(t271));
    t273 = *((unsigned int *)t254);
    t274 = (t273 & t272);
    t275 = (t274 & 1U);
    if (t275 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t270) != 0)
        goto LAB101;

LAB102:    t277 = (t251 + 4);
    t278 = *((unsigned int *)t251);
    t279 = *((unsigned int *)t277);
    t280 = (t278 || t279);
    if (t280 > 0)
        goto LAB103;

LAB104:    t297 = *((unsigned int *)t251);
    t298 = (~(t297));
    t299 = *((unsigned int *)t277);
    t300 = (t298 || t299);
    if (t300 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t277) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t251) > 0)
        goto LAB109;

LAB110:    memcpy(t250, t301, 8);

LAB111:    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t182, 32, t215, 32, t250, 32);
    goto LAB91;

LAB89:    memcpy(t182, t215, 8);
    goto LAB91;

LAB92:    t226 = *((unsigned int *)t215);
    t227 = *((unsigned int *)t220);
    *((unsigned int *)t215) = (t226 | t227);
    t228 = (t213 + 4);
    t229 = (t214 + 4);
    t230 = *((unsigned int *)t213);
    t231 = (~(t230));
    t232 = *((unsigned int *)t228);
    t233 = (~(t232));
    t234 = *((unsigned int *)t214);
    t235 = (~(t234));
    t236 = *((unsigned int *)t229);
    t237 = (~(t236));
    t238 = (t231 & t233);
    t239 = (t235 & t237);
    t240 = (~(t238));
    t241 = (~(t239));
    t242 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t242 & t240);
    t243 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t243 & t241);
    t244 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t244 & t240);
    t245 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t245 & t241);
    goto LAB94;

LAB97:    t269 = (t254 + 4);
    *((unsigned int *)t254) = 1;
    *((unsigned int *)t269) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t251) = 1;
    goto LAB102;

LAB101:    t276 = (t251 + 4);
    *((unsigned int *)t251) = 1;
    *((unsigned int *)t276) = 1;
    goto LAB102;

LAB103:    t281 = (t0 + 1048U);
    t282 = *((char **)t281);
    t281 = (t0 + 1208U);
    t283 = *((char **)t281);
    t285 = *((unsigned int *)t282);
    t286 = *((unsigned int *)t283);
    t287 = (t285 ^ t286);
    *((unsigned int *)t284) = t287;
    t281 = (t282 + 4);
    t288 = (t283 + 4);
    t289 = (t284 + 4);
    t290 = *((unsigned int *)t281);
    t291 = *((unsigned int *)t288);
    t292 = (t290 | t291);
    *((unsigned int *)t289) = t292;
    t293 = *((unsigned int *)t289);
    t294 = (t293 != 0);
    if (t294 == 1)
        goto LAB112;

LAB113:
LAB114:    goto LAB104;

LAB105:    t303 = (t0 + 1368U);
    t304 = *((char **)t303);
    t303 = ((char*)((ng7)));
    memset(t305, 0, 8);
    t306 = (t304 + 4);
    t307 = (t303 + 4);
    t308 = *((unsigned int *)t304);
    t309 = *((unsigned int *)t303);
    t310 = (t308 ^ t309);
    t311 = *((unsigned int *)t306);
    t312 = *((unsigned int *)t307);
    t313 = (t311 ^ t312);
    t314 = (t310 | t313);
    t315 = *((unsigned int *)t306);
    t316 = *((unsigned int *)t307);
    t317 = (t315 | t316);
    t318 = (~(t317));
    t319 = (t314 & t318);
    if (t319 != 0)
        goto LAB118;

LAB115:    if (t317 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t305) = 1;

LAB118:    memset(t302, 0, 8);
    t321 = (t305 + 4);
    t322 = *((unsigned int *)t321);
    t323 = (~(t322));
    t324 = *((unsigned int *)t305);
    t325 = (t324 & t323);
    t326 = (t325 & 1U);
    if (t326 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t321) != 0)
        goto LAB121;

LAB122:    t328 = (t302 + 4);
    t329 = *((unsigned int *)t302);
    t330 = *((unsigned int *)t328);
    t331 = (t329 || t330);
    if (t331 > 0)
        goto LAB123;

LAB124:    t353 = *((unsigned int *)t302);
    t354 = (~(t353));
    t355 = *((unsigned int *)t328);
    t356 = (t354 || t355);
    if (t356 > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t328) > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t302) > 0)
        goto LAB129;

LAB130:    memcpy(t301, t357, 8);

LAB131:    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t250, 32, t284, 32, t301, 32);
    goto LAB111;

LAB109:    memcpy(t250, t284, 8);
    goto LAB111;

LAB112:    t295 = *((unsigned int *)t284);
    t296 = *((unsigned int *)t289);
    *((unsigned int *)t284) = (t295 | t296);
    goto LAB114;

LAB117:    t320 = (t305 + 4);
    *((unsigned int *)t305) = 1;
    *((unsigned int *)t320) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t302) = 1;
    goto LAB122;

LAB121:    t327 = (t302 + 4);
    *((unsigned int *)t302) = 1;
    *((unsigned int *)t327) = 1;
    goto LAB122;

LAB123:    t332 = (t0 + 1048U);
    t333 = *((char **)t332);
    t332 = (t0 + 1208U);
    t334 = *((char **)t332);
    t336 = *((unsigned int *)t333);
    t337 = *((unsigned int *)t334);
    t338 = (t336 ^ t337);
    *((unsigned int *)t335) = t338;
    t332 = (t333 + 4);
    t339 = (t334 + 4);
    t340 = (t335 + 4);
    t341 = *((unsigned int *)t332);
    t342 = *((unsigned int *)t339);
    t343 = (t341 | t342);
    *((unsigned int *)t340) = t343;
    t344 = *((unsigned int *)t335);
    t345 = (~(t344));
    *((unsigned int *)t335) = t345;
    t346 = *((unsigned int *)t340);
    t347 = (t346 != 0);
    if (t347 == 1)
        goto LAB132;

LAB133:
LAB134:    t350 = *((unsigned int *)t335);
    *((unsigned int *)t335) = (t350 & 4294967295U);
    t351 = (t335 + 4);
    t352 = *((unsigned int *)t351);
    *((unsigned int *)t351) = (t352 & 4294967295U);
    goto LAB124;

LAB125:    t359 = (t0 + 1368U);
    t360 = *((char **)t359);
    t359 = ((char*)((ng8)));
    memset(t361, 0, 8);
    t362 = (t360 + 4);
    t363 = (t359 + 4);
    t364 = *((unsigned int *)t360);
    t365 = *((unsigned int *)t359);
    t366 = (t364 ^ t365);
    t367 = *((unsigned int *)t362);
    t368 = *((unsigned int *)t363);
    t369 = (t367 ^ t368);
    t370 = (t366 | t369);
    t371 = *((unsigned int *)t362);
    t372 = *((unsigned int *)t363);
    t373 = (t371 | t372);
    t374 = (~(t373));
    t375 = (t370 & t374);
    if (t375 != 0)
        goto LAB138;

LAB135:    if (t373 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t361) = 1;

LAB138:    memset(t358, 0, 8);
    t377 = (t361 + 4);
    t378 = *((unsigned int *)t377);
    t379 = (~(t378));
    t380 = *((unsigned int *)t361);
    t381 = (t380 & t379);
    t382 = (t381 & 1U);
    if (t382 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t377) != 0)
        goto LAB141;

LAB142:    t384 = (t358 + 4);
    t385 = *((unsigned int *)t358);
    t386 = *((unsigned int *)t384);
    t387 = (t385 || t386);
    if (t387 > 0)
        goto LAB143;

LAB144:    t392 = *((unsigned int *)t358);
    t393 = (~(t392));
    t394 = *((unsigned int *)t384);
    t395 = (t393 || t394);
    if (t395 > 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t384) > 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t358) > 0)
        goto LAB149;

LAB150:    memcpy(t357, t396, 8);

LAB151:    goto LAB126;

LAB127:    xsi_vlog_unsigned_bit_combine(t301, 32, t335, 32, t357, 32);
    goto LAB131;

LAB129:    memcpy(t301, t335, 8);
    goto LAB131;

LAB132:    t348 = *((unsigned int *)t335);
    t349 = *((unsigned int *)t340);
    *((unsigned int *)t335) = (t348 | t349);
    goto LAB134;

LAB137:    t376 = (t361 + 4);
    *((unsigned int *)t361) = 1;
    *((unsigned int *)t376) = 1;
    goto LAB138;

LAB139:    *((unsigned int *)t358) = 1;
    goto LAB142;

LAB141:    t383 = (t358 + 4);
    *((unsigned int *)t358) = 1;
    *((unsigned int *)t383) = 1;
    goto LAB142;

LAB143:    t388 = (t0 + 1208U);
    t389 = *((char **)t388);
    t388 = (t0 + 1848U);
    t390 = *((char **)t388);
    memset(t391, 0, 8);
    xsi_vlog_unsigned_rshift(t391, 32, t389, 32, t390, 5);
    goto LAB144;

LAB145:    t388 = (t0 + 1368U);
    t398 = *((char **)t388);
    t388 = ((char*)((ng9)));
    memset(t399, 0, 8);
    t400 = (t398 + 4);
    t401 = (t388 + 4);
    t402 = *((unsigned int *)t398);
    t403 = *((unsigned int *)t388);
    t404 = (t402 ^ t403);
    t405 = *((unsigned int *)t400);
    t406 = *((unsigned int *)t401);
    t407 = (t405 ^ t406);
    t408 = (t404 | t407);
    t409 = *((unsigned int *)t400);
    t410 = *((unsigned int *)t401);
    t411 = (t409 | t410);
    t412 = (~(t411));
    t413 = (t408 & t412);
    if (t413 != 0)
        goto LAB155;

LAB152:    if (t411 != 0)
        goto LAB154;

LAB153:    *((unsigned int *)t399) = 1;

LAB155:    memset(t397, 0, 8);
    t415 = (t399 + 4);
    t416 = *((unsigned int *)t415);
    t417 = (~(t416));
    t418 = *((unsigned int *)t399);
    t419 = (t418 & t417);
    t420 = (t419 & 1U);
    if (t420 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t415) != 0)
        goto LAB158;

LAB159:    t422 = (t397 + 4);
    t423 = *((unsigned int *)t397);
    t424 = *((unsigned int *)t422);
    t425 = (t423 || t424);
    if (t425 > 0)
        goto LAB160;

LAB161:    t430 = *((unsigned int *)t397);
    t431 = (~(t430));
    t432 = *((unsigned int *)t422);
    t433 = (t431 || t432);
    if (t433 > 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t422) > 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t397) > 0)
        goto LAB166;

LAB167:    memcpy(t396, t434, 8);

LAB168:    goto LAB146;

LAB147:    xsi_vlog_unsigned_bit_combine(t357, 32, t391, 32, t396, 32);
    goto LAB151;

LAB149:    memcpy(t357, t391, 8);
    goto LAB151;

LAB154:    t414 = (t399 + 4);
    *((unsigned int *)t399) = 1;
    *((unsigned int *)t414) = 1;
    goto LAB155;

LAB156:    *((unsigned int *)t397) = 1;
    goto LAB159;

LAB158:    t421 = (t397 + 4);
    *((unsigned int *)t397) = 1;
    *((unsigned int *)t421) = 1;
    goto LAB159;

LAB160:    t426 = (t0 + 1208U);
    t427 = *((char **)t426);
    t426 = (t0 + 1848U);
    t428 = *((char **)t426);
    memset(t429, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t429, 32, t427, 32, t428, 5);
    goto LAB161;

LAB162:    t426 = (t0 + 1368U);
    t436 = *((char **)t426);
    t426 = ((char*)((ng10)));
    memset(t437, 0, 8);
    t438 = (t436 + 4);
    t439 = (t426 + 4);
    t440 = *((unsigned int *)t436);
    t441 = *((unsigned int *)t426);
    t442 = (t440 ^ t441);
    t443 = *((unsigned int *)t438);
    t444 = *((unsigned int *)t439);
    t445 = (t443 ^ t444);
    t446 = (t442 | t445);
    t447 = *((unsigned int *)t438);
    t448 = *((unsigned int *)t439);
    t449 = (t447 | t448);
    t450 = (~(t449));
    t451 = (t446 & t450);
    if (t451 != 0)
        goto LAB172;

LAB169:    if (t449 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t437) = 1;

LAB172:    memset(t435, 0, 8);
    t453 = (t437 + 4);
    t454 = *((unsigned int *)t453);
    t455 = (~(t454));
    t456 = *((unsigned int *)t437);
    t457 = (t456 & t455);
    t458 = (t457 & 1U);
    if (t458 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t453) != 0)
        goto LAB175;

LAB176:    t460 = (t435 + 4);
    t461 = *((unsigned int *)t435);
    t462 = *((unsigned int *)t460);
    t463 = (t461 || t462);
    if (t463 > 0)
        goto LAB177;

LAB178:    t488 = *((unsigned int *)t435);
    t489 = (~(t488));
    t490 = *((unsigned int *)t460);
    t491 = (t489 || t490);
    if (t491 > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t460) > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t435) > 0)
        goto LAB183;

LAB184:    memcpy(t434, t492, 8);

LAB185:    goto LAB163;

LAB164:    xsi_vlog_unsigned_bit_combine(t396, 32, t429, 32, t434, 32);
    goto LAB168;

LAB166:    memcpy(t396, t429, 8);
    goto LAB168;

LAB171:    t452 = (t437 + 4);
    *((unsigned int *)t437) = 1;
    *((unsigned int *)t452) = 1;
    goto LAB172;

LAB173:    *((unsigned int *)t435) = 1;
    goto LAB176;

LAB175:    t459 = (t435 + 4);
    *((unsigned int *)t435) = 1;
    *((unsigned int *)t459) = 1;
    goto LAB176;

LAB177:    t467 = (t0 + 2008U);
    t468 = *((char **)t467);
    t467 = (t0 + 2168U);
    t470 = *((char **)t467);
    xsi_vlog_signed_less(t471, 33, t468, 33, t470, 33);
    memset(t465, 0, 8);
    t467 = (t471 + 4);
    t472 = *((unsigned int *)t467);
    t473 = (~(t472));
    t474 = *((unsigned int *)t471);
    t475 = (t474 & t473);
    t476 = (t475 & 1U);
    if (t476 != 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t467) != 0)
        goto LAB188;

LAB189:    t478 = (t465 + 4);
    t479 = *((unsigned int *)t465);
    t480 = *((unsigned int *)t478);
    t481 = (t479 || t480);
    if (t481 > 0)
        goto LAB190;

LAB191:    t483 = *((unsigned int *)t465);
    t484 = (~(t483));
    t485 = *((unsigned int *)t478);
    t486 = (t484 || t485);
    if (t486 > 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t478) > 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t465) > 0)
        goto LAB196;

LAB197:    memcpy(t464, t487, 8);

LAB198:    goto LAB178;

LAB179:    t492 = ((char*)((ng1)));
    goto LAB180;

LAB181:    xsi_vlog_unsigned_bit_combine(t434, 32, t464, 32, t492, 32);
    goto LAB185;

LAB183:    memcpy(t434, t464, 8);
    goto LAB185;

LAB186:    *((unsigned int *)t465) = 1;
    goto LAB189;

LAB188:    t477 = (t465 + 4);
    *((unsigned int *)t465) = 1;
    *((unsigned int *)t477) = 1;
    goto LAB189;

LAB190:    t482 = ((char*)((ng2)));
    goto LAB191;

LAB192:    t487 = ((char*)((ng1)));
    goto LAB193;

LAB194:    xsi_vlog_unsigned_bit_combine(t464, 32, t482, 32, t487, 32);
    goto LAB198;

LAB196:    memcpy(t464, t482, 8);
    goto LAB198;

}


extern void work_m_00000000003867980094_0886308060_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Cont_32_1,(void *)Cont_33_2,(void *)Cont_35_3};
	xsi_register_didat("work_m_00000000003867980094_0886308060", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000003867980094_0886308060.didat");
	xsi_register_executes(pe);
}
