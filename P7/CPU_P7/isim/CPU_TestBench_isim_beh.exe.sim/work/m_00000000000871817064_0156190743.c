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
static const char *ng0 = "F:/Course/CO/P7/CPU_P7/Bridge.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {32512U, 0U};
static unsigned int ng3[] = {32523U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {32528U, 0U};
static unsigned int ng7[] = {32539U, 0U};
static unsigned int ng8[] = {305441741U, 0U};



static void Cont_46_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 6856);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1073741823U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 29);
    t16 = (t0 + 6664);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_47_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 6920);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1073741823U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 29);
    t16 = (t0 + 6680);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_48_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t8[8];
    char t12[8];
    char t24[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t86[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t7, 30, t2, 2);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB7:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB13;

LAB14:    memcpy(t40, t12, 8);

LAB15:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t73) != 0)
        goto LAB30;

LAB31:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB32;

LAB33:    memcpy(t93, t72, 8);

LAB34:    memset(t4, 0, 8);
    t125 = (t93 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t125) != 0)
        goto LAB44;

LAB45:    t132 = (t4 + 4);
    t133 = *((unsigned int *)t4);
    t134 = *((unsigned int *)t132);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB46;

LAB47:    t137 = *((unsigned int *)t4);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t132) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t4) > 0)
        goto LAB52;

LAB53:    memcpy(t3, t141, 8);

LAB54:    t142 = (t0 + 6984);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    memset(t146, 0, 8);
    t147 = 1U;
    t148 = t147;
    t149 = (t3 + 4);
    t150 = *((unsigned int *)t3);
    t147 = (t147 & t150);
    t151 = *((unsigned int *)t149);
    t148 = (t148 & t151);
    t152 = (t146 + 4);
    t153 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t153 | t147);
    t154 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t154 | t148);
    xsi_driver_vfirst_trans(t142, 0, 0);
    t155 = (t0 + 6696);
    *((int *)t155) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t25 = ((char*)((ng1)));
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t27, 30, t25, 2);
    t26 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t24 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB17;

LAB16:    t30 = (t26 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) > *((unsigned int *)t26))
        goto LAB19;

LAB18:    *((unsigned int *)t28) = 1;

LAB19:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t33) != 0)
        goto LAB23;

LAB24:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB23:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB25:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB27;

LAB28:    *((unsigned int *)t72) = 1;
    goto LAB31;

LAB30:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB31;

LAB32:    t84 = (t0 + 1528U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t84 = (t85 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t84) != 0)
        goto LAB37;

LAB38:    t94 = *((unsigned int *)t72);
    t95 = *((unsigned int *)t86);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t72 + 4);
    t98 = (t86 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t86) = 1;
    goto LAB38;

LAB37:    t92 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB38;

LAB39:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t72 + 4);
    t108 = (t86 + 4);
    t109 = *((unsigned int *)t72);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t86);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB41;

LAB42:    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB44:    t131 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB45;

LAB46:    t136 = ((char*)((ng4)));
    goto LAB47;

LAB48:    t141 = ((char*)((ng5)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t3, 32, t136, 32, t141, 32);
    goto LAB54;

LAB52:    memcpy(t3, t136, 8);
    goto LAB54;

}

static void Cont_49_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t8[8];
    char t12[8];
    char t24[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t86[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t7, 30, t2, 2);
    t6 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB7:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB13;

LAB14:    memcpy(t40, t12, 8);

LAB15:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t73) != 0)
        goto LAB30;

LAB31:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB32;

LAB33:    memcpy(t93, t72, 8);

LAB34:    memset(t4, 0, 8);
    t125 = (t93 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t93);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t125) != 0)
        goto LAB44;

LAB45:    t132 = (t4 + 4);
    t133 = *((unsigned int *)t4);
    t134 = *((unsigned int *)t132);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB46;

LAB47:    t137 = *((unsigned int *)t4);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t132) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t4) > 0)
        goto LAB52;

LAB53:    memcpy(t3, t141, 8);

LAB54:    t142 = (t0 + 7048);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    memset(t146, 0, 8);
    t147 = 1U;
    t148 = t147;
    t149 = (t3 + 4);
    t150 = *((unsigned int *)t3);
    t147 = (t147 & t150);
    t151 = *((unsigned int *)t149);
    t148 = (t148 & t151);
    t152 = (t146 + 4);
    t153 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t153 | t147);
    t154 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t154 | t148);
    xsi_driver_vfirst_trans(t142, 0, 0);
    t155 = (t0 + 6712);
    *((int *)t155) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t25 = ((char*)((ng1)));
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t27, 30, t25, 2);
    t26 = ((char*)((ng7)));
    memset(t28, 0, 8);
    t29 = (t24 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB17;

LAB16:    t30 = (t26 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) > *((unsigned int *)t26))
        goto LAB19;

LAB18:    *((unsigned int *)t28) = 1;

LAB19:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t33) != 0)
        goto LAB23;

LAB24:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB23:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB25:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB27;

LAB28:    *((unsigned int *)t72) = 1;
    goto LAB31;

LAB30:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB31;

LAB32:    t84 = (t0 + 1528U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    t84 = (t85 + 4);
    t87 = *((unsigned int *)t84);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t84) != 0)
        goto LAB37;

LAB38:    t94 = *((unsigned int *)t72);
    t95 = *((unsigned int *)t86);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t72 + 4);
    t98 = (t86 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t86) = 1;
    goto LAB38;

LAB37:    t92 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB38;

LAB39:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t72 + 4);
    t108 = (t86 + 4);
    t109 = *((unsigned int *)t72);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t86);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB41;

LAB42:    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB44:    t131 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB45;

LAB46:    t136 = ((char*)((ng4)));
    goto LAB47;

LAB48:    t141 = ((char*)((ng5)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t3, 32, t136, 32, t141, 32);
    goto LAB54;

LAB52:    memcpy(t3, t136, 8);
    goto LAB54;

}

static void Cont_50_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 7112);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 6728);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_51_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 7176);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 6744);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_52_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t8[8];
    char t12[8];
    char t24[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char t89[8];
    char t90[8];
    char t91[8];
    char t94[8];
    char t98[8];
    char t110[8];
    char t114[8];
    char t118[8];
    char t126[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;

LAB0:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t7, 30, t2, 2);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t6 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB7:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB13;

LAB14:    memcpy(t40, t12, 8);

LAB15:    memset(t4, 0, 8);
    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t72) != 0)
        goto LAB30;

LAB31:    t79 = (t4 + 4);
    t80 = *((unsigned int *)t4);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB32;

LAB33:    t85 = *((unsigned int *)t4);
    t86 = (~(t85));
    t87 = *((unsigned int *)t79);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t79) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t4) > 0)
        goto LAB38;

LAB39:    memcpy(t3, t89, 8);

LAB40:    t175 = (t0 + 7240);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    t178 = (t177 + 56U);
    t179 = *((char **)t178);
    memcpy(t179, t3, 8);
    xsi_driver_vfirst_trans(t175, 0, 31);
    t180 = (t0 + 6760);
    *((int *)t180) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t25 = ((char*)((ng1)));
    t26 = (t0 + 1048U);
    t27 = *((char **)t26);
    xsi_vlogtype_concat(t24, 32, 32, 2U, t27, 30, t25, 2);
    t26 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t24 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB17;

LAB16:    t30 = (t26 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t24) > *((unsigned int *)t26))
        goto LAB19;

LAB18:    *((unsigned int *)t28) = 1;

LAB19:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t33) != 0)
        goto LAB23;

LAB24:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB17:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB19;

LAB21:    *((unsigned int *)t32) = 1;
    goto LAB24;

LAB23:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB24;

LAB25:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB27;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB30:    t78 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB31;

LAB32:    t83 = (t0 + 2328U);
    t84 = *((char **)t83);
    goto LAB33;

LAB34:    t83 = ((char*)((ng1)));
    t92 = (t0 + 1048U);
    t93 = *((char **)t92);
    xsi_vlogtype_concat(t91, 32, 32, 2U, t93, 30, t83, 2);
    t92 = ((char*)((ng6)));
    memset(t94, 0, 8);
    t95 = (t91 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB42;

LAB41:    t96 = (t92 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t91) < *((unsigned int *)t92))
        goto LAB44;

LAB43:    *((unsigned int *)t94) = 1;

LAB44:    memset(t98, 0, 8);
    t99 = (t94 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t94);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t99) != 0)
        goto LAB48;

LAB49:    t106 = (t98 + 4);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t106);
    t109 = (t107 || t108);
    if (t109 > 0)
        goto LAB50;

LAB51:    memcpy(t126, t98, 8);

LAB52:    memset(t90, 0, 8);
    t158 = (t126 + 4);
    t159 = *((unsigned int *)t158);
    t160 = (~(t159));
    t161 = *((unsigned int *)t126);
    t162 = (t161 & t160);
    t163 = (t162 & 1U);
    if (t163 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t158) != 0)
        goto LAB67;

LAB68:    t165 = (t90 + 4);
    t166 = *((unsigned int *)t90);
    t167 = *((unsigned int *)t165);
    t168 = (t166 || t167);
    if (t168 > 0)
        goto LAB69;

LAB70:    t171 = *((unsigned int *)t90);
    t172 = (~(t171));
    t173 = *((unsigned int *)t165);
    t174 = (t172 || t173);
    if (t174 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t165) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t90) > 0)
        goto LAB75;

LAB76:    memcpy(t89, t169, 8);

LAB77:    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t3, 32, t84, 32, t89, 32);
    goto LAB40;

LAB38:    memcpy(t3, t84, 8);
    goto LAB40;

LAB42:    t97 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB44;

LAB46:    *((unsigned int *)t98) = 1;
    goto LAB49;

LAB48:    t105 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB49;

LAB50:    t111 = ((char*)((ng1)));
    t112 = (t0 + 1048U);
    t113 = *((char **)t112);
    xsi_vlogtype_concat(t110, 32, 32, 2U, t113, 30, t111, 2);
    t112 = ((char*)((ng7)));
    memset(t114, 0, 8);
    t115 = (t110 + 4);
    if (*((unsigned int *)t115) != 0)
        goto LAB54;

LAB53:    t116 = (t112 + 4);
    if (*((unsigned int *)t116) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t110) > *((unsigned int *)t112))
        goto LAB56;

LAB55:    *((unsigned int *)t114) = 1;

LAB56:    memset(t118, 0, 8);
    t119 = (t114 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t114);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t119) != 0)
        goto LAB60;

LAB61:    t127 = *((unsigned int *)t98);
    t128 = *((unsigned int *)t118);
    t129 = (t127 & t128);
    *((unsigned int *)t126) = t129;
    t130 = (t98 + 4);
    t131 = (t118 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB52;

LAB54:    t117 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB56;

LAB58:    *((unsigned int *)t118) = 1;
    goto LAB61;

LAB60:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB61;

LAB62:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t98 + 4);
    t141 = (t118 + 4);
    t142 = *((unsigned int *)t98);
    t143 = (~(t142));
    t144 = *((unsigned int *)t140);
    t145 = (~(t144));
    t146 = *((unsigned int *)t118);
    t147 = (~(t146));
    t148 = *((unsigned int *)t141);
    t149 = (~(t148));
    t150 = (t143 & t145);
    t151 = (t147 & t149);
    t152 = (~(t150));
    t153 = (~(t151));
    t154 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t154 & t152);
    t155 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t155 & t153);
    t156 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t156 & t152);
    t157 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t157 & t153);
    goto LAB64;

LAB65:    *((unsigned int *)t90) = 1;
    goto LAB68;

LAB67:    t164 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB68;

LAB69:    t169 = (t0 + 3128U);
    t170 = *((char **)t169);
    goto LAB70;

LAB71:    t169 = ((char*)((ng8)));
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t89, 32, t170, 32, t169, 32);
    goto LAB77;

LAB75:    memcpy(t89, t170, 8);
    goto LAB77;

}

static void Cont_54_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    t2 = (t0 + 3448U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 6, 6, 4U, t2, 3, t6, 1, t5, 1, t4, 1);
    t7 = (t0 + 7304);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 63U;
    t13 = t12;
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 5);
    t20 = (t0 + 6776);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000000871817064_0156190743_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Cont_47_1,(void *)Cont_48_2,(void *)Cont_49_3,(void *)Cont_50_4,(void *)Cont_51_5,(void *)Cont_52_6,(void *)Cont_54_7};
	xsi_register_didat("work_m_00000000000871817064_0156190743", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000000871817064_0156190743.didat");
	xsi_register_executes(pe);
}
