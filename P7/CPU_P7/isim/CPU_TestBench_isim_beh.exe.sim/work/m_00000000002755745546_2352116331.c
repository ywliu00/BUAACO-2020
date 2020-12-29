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
static const char *ng0 = "F:/Course/CO/P7/CPU_P7/IF.v";
static unsigned int ng1[] = {12288U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {20476U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {31U, 0U};
static unsigned int ng9[] = {16772U, 0U};
static unsigned int ng10[] = {12292U, 0U};
static unsigned int ng11[] = {16768U, 0U};



static void Cont_43_0(char *t0)
{
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 6760);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 6632);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_69_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t46[8];
    char t50[8];
    char t58[8];
    char t86[8];
    char t101[8];
    char t105[8];
    char t113[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2648U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB5;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    memcpy(t58, t31, 8);

LAB14:    memset(t86, 0, 8);
    t87 = (t58 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t58);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t87) != 0)
        goto LAB29;

LAB30:    t94 = (t86 + 4);
    t95 = *((unsigned int *)t86);
    t96 = (!(t95));
    t97 = *((unsigned int *)t94);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB31;

LAB32:    memcpy(t113, t86, 8);

LAB33:    memset(t4, 0, 8);
    t141 = (t113 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t113);
    t145 = (t144 & t143);
    t146 = (t145 & 1U);
    if (t146 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t141) != 0)
        goto LAB48;

LAB49:    t148 = (t4 + 4);
    t149 = *((unsigned int *)t4);
    t150 = *((unsigned int *)t148);
    t151 = (t149 || t150);
    if (t151 > 0)
        goto LAB50;

LAB51:    t153 = *((unsigned int *)t4);
    t154 = (~(t153));
    t155 = *((unsigned int *)t148);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t148) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t4) > 0)
        goto LAB56;

LAB57:    memcpy(t3, t157, 8);

LAB58:    t158 = (t0 + 6824);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t3 + 4);
    t166 = *((unsigned int *)t3);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans(t158, 0, 0);
    t171 = (t0 + 6648);
    *((int *)t171) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 2648U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng4)));
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    if (*((unsigned int *)t47) != 0)
        goto LAB16;

LAB15:    t48 = (t44 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t45) > *((unsigned int *)t44))
        goto LAB17;

LAB18:    memset(t50, 0, 8);
    t51 = (t46 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t46);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t51) != 0)
        goto LAB22;

LAB23:    t59 = *((unsigned int *)t31);
    t60 = *((unsigned int *)t50);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = (t31 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t49 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t46) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t50) = 1;
    goto LAB23;

LAB22:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB23;

LAB24:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t31 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t31);
    t77 = (t76 & t75);
    t78 = *((unsigned int *)t73);
    t79 = (~(t78));
    t80 = *((unsigned int *)t50);
    t81 = (t80 & t79);
    t82 = (~(t77));
    t83 = (~(t81));
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t82);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t83);
    goto LAB26;

LAB27:    *((unsigned int *)t86) = 1;
    goto LAB30;

LAB29:    t93 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB30;

LAB31:    t99 = (t0 + 2648U);
    t100 = *((char **)t99);
    t99 = ((char*)((ng1)));
    memset(t101, 0, 8);
    t102 = (t100 + 4);
    if (*((unsigned int *)t102) != 0)
        goto LAB35;

LAB34:    t103 = (t99 + 4);
    if (*((unsigned int *)t103) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t100) < *((unsigned int *)t99))
        goto LAB36;

LAB37:    memset(t105, 0, 8);
    t106 = (t101 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t101);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t106) != 0)
        goto LAB41;

LAB42:    t114 = *((unsigned int *)t86);
    t115 = *((unsigned int *)t105);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = (t86 + 4);
    t118 = (t105 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t104 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t101) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t105) = 1;
    goto LAB42;

LAB41:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB42;

LAB43:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t86 + 4);
    t128 = (t105 + 4);
    t129 = *((unsigned int *)t127);
    t130 = (~(t129));
    t131 = *((unsigned int *)t86);
    t132 = (t131 & t130);
    t133 = *((unsigned int *)t128);
    t134 = (~(t133));
    t135 = *((unsigned int *)t105);
    t136 = (t135 & t134);
    t137 = (~(t132));
    t138 = (~(t136));
    t139 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t139 & t137);
    t140 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t140 & t138);
    goto LAB45;

LAB46:    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB48:    t147 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB49;

LAB50:    t152 = ((char*)((ng5)));
    goto LAB51;

LAB52:    t157 = ((char*)((ng6)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t3, 32, t152, 32, t157, 32);
    goto LAB58;

LAB56:    memcpy(t3, t152, 8);
    goto LAB58;

}

static void Cont_70_2(char *t0)
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3608U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t22 = (t0 + 6888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 31U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 4);
    t35 = (t0 + 6664);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng7)));
    goto LAB9;

LAB10:    t21 = ((char*)((ng8)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 5, t16, 5, t21, 5);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Always_73_3(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t55[8];
    char t70[8];
    char t77[8];
    char t111[8];
    char t112[8];
    char t130[8];
    char t131[8];
    char t146[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6680);
    *((int *)t2) = 1;
    t3 = (t0 + 6344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    memset(t55, 0, 8);
    t56 = (t27 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t27);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB23:    t63 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = (!(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB24;

LAB25:    memcpy(t77, t55, 8);

LAB26:    t105 = (t77 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t77);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(92, ng0);

LAB94:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t2) != 0)
        goto LAB97;

LAB98:    t5 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB99;

LAB100:    t17 = *((unsigned int *)t20);
    t21 = (~(t17));
    t22 = *((unsigned int *)t5);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t5) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t20) > 0)
        goto LAB105;

LAB106:    memcpy(t6, t18, 8);

LAB107:    t13 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t13, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 2);
    *((unsigned int *)t20) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t11 & 1073741823U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t20, 30, t2, 2);
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB92:
LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2168U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    *((unsigned int *)t55) = 1;
    goto LAB23;

LAB22:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t68 = (t0 + 2328U);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t68 = (t69 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t68) != 0)
        goto LAB29;

LAB30:    t78 = *((unsigned int *)t55);
    t79 = *((unsigned int *)t70);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = (t55 + 4);
    t82 = (t70 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB29:    t76 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB30;

LAB31:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t55 + 4);
    t92 = (t70 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t55);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t70);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB33;

LAB34:    xsi_set_current_line(76, ng0);

LAB37:    xsi_set_current_line(77, ng0);
    t113 = (t0 + 2168U);
    t114 = *((char **)t113);
    memset(t112, 0, 8);
    t113 = (t114 + 4);
    t115 = *((unsigned int *)t113);
    t116 = (~(t115));
    t117 = *((unsigned int *)t114);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t113) != 0)
        goto LAB40;

LAB41:    t121 = (t112 + 4);
    t122 = *((unsigned int *)t112);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB42;

LAB43:    t126 = *((unsigned int *)t112);
    t127 = (~(t126));
    t128 = *((unsigned int *)t121);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t121) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t112) > 0)
        goto LAB48;

LAB49:    memcpy(t111, t130, 8);

LAB50:    t152 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t152, t111, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t2) != 0)
        goto LAB66;

LAB67:    t5 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB68;

LAB69:    t17 = *((unsigned int *)t20);
    t21 = (~(t17));
    t22 = *((unsigned int *)t5);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t5) > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t20) > 0)
        goto LAB74;

LAB75:    memcpy(t6, t27, 8);

LAB76:    t33 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t33, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB36;

LAB38:    *((unsigned int *)t112) = 1;
    goto LAB41;

LAB40:    t120 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB41;

LAB42:    t125 = ((char*)((ng9)));
    goto LAB43;

LAB44:    t132 = (t0 + 2328U);
    t133 = *((char **)t132);
    memset(t131, 0, 8);
    t132 = (t133 + 4);
    t134 = *((unsigned int *)t132);
    t135 = (~(t134));
    t136 = *((unsigned int *)t133);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t132) != 0)
        goto LAB53;

LAB54:    t140 = (t131 + 4);
    t141 = *((unsigned int *)t131);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB55;

LAB56:    t147 = *((unsigned int *)t131);
    t148 = (~(t147));
    t149 = *((unsigned int *)t140);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t140) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t131) > 0)
        goto LAB61;

LAB62:    memcpy(t130, t151, 8);

LAB63:    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t111, 32, t125, 32, t130, 32);
    goto LAB50;

LAB48:    memcpy(t111, t125, 8);
    goto LAB50;

LAB51:    *((unsigned int *)t131) = 1;
    goto LAB54;

LAB53:    t139 = (t131 + 4);
    *((unsigned int *)t131) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB54;

LAB55:    t144 = (t0 + 2488U);
    t145 = *((char **)t144);
    t144 = ((char*)((ng7)));
    memset(t146, 0, 8);
    xsi_vlog_unsigned_add(t146, 32, t145, 32, t144, 32);
    goto LAB56;

LAB57:    t151 = ((char*)((ng10)));
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t130, 32, t146, 32, t151, 32);
    goto LAB63;

LAB61:    memcpy(t130, t146, 8);
    goto LAB63;

LAB64:    *((unsigned int *)t20) = 1;
    goto LAB67;

LAB66:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB67;

LAB68:    t12 = ((char*)((ng11)));
    goto LAB69;

LAB70:    t13 = (t0 + 2328U);
    t18 = *((char **)t13);
    memset(t55, 0, 8);
    t13 = (t18 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t25);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t13) != 0)
        goto LAB79;

LAB80:    t26 = (t55 + 4);
    t34 = *((unsigned int *)t55);
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB81;

LAB82:    t37 = *((unsigned int *)t55);
    t38 = (~(t37));
    t39 = *((unsigned int *)t26);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t26) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t55) > 0)
        goto LAB87;

LAB88:    memcpy(t27, t31, 8);

LAB89:    goto LAB71;

LAB72:    xsi_vlog_unsigned_bit_combine(t6, 32, t12, 32, t27, 32);
    goto LAB76;

LAB74:    memcpy(t6, t12, 8);
    goto LAB76;

LAB77:    *((unsigned int *)t55) = 1;
    goto LAB80;

LAB79:    t19 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB80;

LAB81:    t31 = (t0 + 2488U);
    t32 = *((char **)t31);
    goto LAB82;

LAB83:    t31 = ((char*)((ng1)));
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t27, 32, t32, 32, t31, 32);
    goto LAB89;

LAB87:    memcpy(t27, t32, 8);
    goto LAB89;

LAB90:    xsi_set_current_line(84, ng0);

LAB93:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB92;

LAB95:    *((unsigned int *)t20) = 1;
    goto LAB98;

LAB97:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB98;

LAB99:    t12 = ((char*)((ng3)));
    goto LAB100;

LAB101:    t13 = (t0 + 3128U);
    t18 = *((char **)t13);
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t6, 32, t12, 32, t18, 32);
    goto LAB107;

LAB105:    memcpy(t6, t12, 8);
    goto LAB107;

}


extern void work_m_00000000002755745546_2352116331_init()
{
	static char *pe[] = {(void *)Cont_43_0,(void *)Cont_69_1,(void *)Cont_70_2,(void *)Always_73_3};
	xsi_register_didat("work_m_00000000002755745546_2352116331", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000002755745546_2352116331.didat");
	xsi_register_executes(pe);
}
