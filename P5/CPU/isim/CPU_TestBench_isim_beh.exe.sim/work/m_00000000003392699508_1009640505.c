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
static const char *ng0 = "D:/BUAACO/P5/CPU/ALUOpDecoder.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {0U, 0U};



static void Cont_27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t29[8];
    char t37[8];
    char t45[8];
    char t73[8];
    char t88[8];
    char t96[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
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
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
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
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t14, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (!(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB8;

LAB9:    memcpy(t45, t14, 8);

LAB10:    memset(t73, 0, 8);
    t74 = (t45 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t45);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t74) != 0)
        goto LAB20;

LAB21:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = (!(t82));
    t84 = *((unsigned int *)t81);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB22;

LAB23:    memcpy(t104, t73, 8);

LAB24:    memset(t4, 0, 8);
    t132 = (t104 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t104);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t132) != 0)
        goto LAB34;

LAB35:    t139 = (t4 + 4);
    t140 = *((unsigned int *)t4);
    t141 = *((unsigned int *)t139);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB36;

LAB37:    t144 = *((unsigned int *)t4);
    t145 = (~(t144));
    t146 = *((unsigned int *)t139);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t139) > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t4) > 0)
        goto LAB42;

LAB43:    memcpy(t3, t148, 8);

LAB44:    t149 = (t0 + 3192);
    t150 = (t149 + 56U);
    t151 = *((char **)t150);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    memset(t153, 0, 8);
    t154 = 1U;
    t155 = t154;
    t156 = (t3 + 4);
    t157 = *((unsigned int *)t3);
    t154 = (t154 & t157);
    t158 = *((unsigned int *)t156);
    t155 = (t155 & t158);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t160 | t154);
    t161 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t161 | t155);
    xsi_driver_vfirst_trans(t149, 0, 0);
    t162 = (t0 + 3096);
    *((int *)t162) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB6:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t29 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 3);
    t33 = (t32 & 1);
    *((unsigned int *)t29) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 3);
    t36 = (t35 & 1);
    *((unsigned int *)t27) = t36;
    memset(t37, 0, 8);
    t38 = (t29 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t29);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t38) != 0)
        goto LAB13;

LAB14:    t46 = *((unsigned int *)t14);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t14 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t37) = 1;
    goto LAB14;

LAB13:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB14;

LAB15:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t14 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t14);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB17;

LAB18:    *((unsigned int *)t73) = 1;
    goto LAB21;

LAB20:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB21;

LAB22:    t86 = (t0 + 1048U);
    t87 = *((char **)t86);
    memset(t88, 0, 8);
    t86 = (t88 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (t90 >> 4);
    t92 = (t91 & 1);
    *((unsigned int *)t88) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 >> 4);
    t95 = (t94 & 1);
    *((unsigned int *)t86) = t95;
    memset(t96, 0, 8);
    t97 = (t88 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t88);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t97) != 0)
        goto LAB27;

LAB28:    t105 = *((unsigned int *)t73);
    t106 = *((unsigned int *)t96);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = (t73 + 4);
    t109 = (t96 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t96) = 1;
    goto LAB28;

LAB27:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB28;

LAB29:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t73 + 4);
    t119 = (t96 + 4);
    t120 = *((unsigned int *)t118);
    t121 = (~(t120));
    t122 = *((unsigned int *)t73);
    t123 = (t122 & t121);
    t124 = *((unsigned int *)t119);
    t125 = (~(t124));
    t126 = *((unsigned int *)t96);
    t127 = (t126 & t125);
    t128 = (~(t123));
    t129 = (~(t127));
    t130 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t130 & t128);
    t131 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t131 & t129);
    goto LAB31;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB34:    t138 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB35;

LAB36:    t143 = ((char*)((ng1)));
    goto LAB37;

LAB38:    t148 = ((char*)((ng2)));
    goto LAB39;

LAB40:    xsi_vlog_unsigned_bit_combine(t3, 32, t143, 32, t148, 32);
    goto LAB44;

LAB42:    memcpy(t3, t143, 8);
    goto LAB44;

}

static void Cont_29_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t30[8];
    char t31[8];
    char t34[8];
    char t58[8];
    char t59[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t60;
    char *t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t30, 8);

LAB16:    t87 = (t0 + 3256);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 7U;
    t93 = t92;
    t94 = (t3 + 4);
    t95 = *((unsigned int *)t3);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans(t87, 0, 2);
    t100 = (t0 + 3112);
    *((int *)t100) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t32 = (t0 + 1048U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t32 = (t34 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 2);
    t38 = (t37 & 1);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 2);
    t41 = (t40 & 1);
    *((unsigned int *)t32) = t41;
    memset(t31, 0, 8);
    t42 = (t34 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t34);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t42) != 0)
        goto LAB19;

LAB20:    t49 = (t31 + 4);
    t50 = *((unsigned int *)t31);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB21;

LAB22:    t54 = *((unsigned int *)t31);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t49) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t31) > 0)
        goto LAB27;

LAB28:    memcpy(t30, t58, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t25, 3, t30, 3);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    t48 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB20;

LAB21:    t53 = ((char*)((ng4)));
    goto LAB22;

LAB23:    t60 = (t0 + 1048U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t60 = (t62 + 4);
    t63 = (t61 + 4);
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 1);
    t66 = (t65 & 1);
    *((unsigned int *)t62) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 >> 1);
    t69 = (t68 & 1);
    *((unsigned int *)t60) = t69;
    memset(t59, 0, 8);
    t70 = (t62 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t62);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t70) != 0)
        goto LAB32;

LAB33:    t77 = (t59 + 4);
    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t77);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB34;

LAB35:    t82 = *((unsigned int *)t59);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t77) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t59) > 0)
        goto LAB40;

LAB41:    memcpy(t58, t86, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t30, 3, t53, 3, t58, 3);
    goto LAB29;

LAB27:    memcpy(t30, t53, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t59) = 1;
    goto LAB33;

LAB32:    t76 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB33;

LAB34:    t81 = ((char*)((ng5)));
    goto LAB35;

LAB36:    t86 = ((char*)((ng6)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t58, 3, t81, 3, t86, 3);
    goto LAB42;

LAB40:    memcpy(t58, t81, 8);
    goto LAB42;

}


extern void work_m_00000000003392699508_1009640505_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Cont_29_1};
	xsi_register_didat("work_m_00000000003392699508_1009640505", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000003392699508_1009640505.didat");
	xsi_register_executes(pe);
}
