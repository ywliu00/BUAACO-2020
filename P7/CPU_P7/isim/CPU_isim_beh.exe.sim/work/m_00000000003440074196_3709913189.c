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
static const char *ng0 = "F:/Course/CO/P7/CPU_P7/MultDivModule.v";
static int ng1[] = {32, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {268435455U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {5, 0};
static int ng6[] = {1, 0};
static int ng7[] = {31, 0};
static int ng8[] = {0, 0};
static int ng9[] = {63, 0};
static int ng10[] = {10, 0};



static void Cont_36_0(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 32, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 64, 64, 2U, t5, 32, t4, 32);
    t16 = (t0 + 5376);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5264);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1368U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 32, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 64, 64, 2U, t5, 32, t4, 32);
    t16 = (t0 + 5440);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5280);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Always_41_2(char *t0)
{
    char t13[8];
    char t17[8];
    char t24[8];
    char t32[8];
    char t72[16];
    char t73[16];
    char t74[16];
    char t75[8];
    char t76[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5296);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB14;

LAB15:    memcpy(t32, t13, 8);

LAB16:    t64 = (t32 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t32);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 19);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 19);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t16);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t5) != 0)
        goto LAB66;

LAB67:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t26 = (t21 || t22);
    if (t26 > 0)
        goto LAB68;

LAB69:    memcpy(t75, t17, 8);

LAB70:    t71 = (t75 + 4);
    t85 = *((unsigned int *)t71);
    t86 = (~(t85));
    t87 = *((unsigned int *)t75);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 20);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 20);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    memset(t17, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t16);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t5) != 0)
        goto LAB87;

LAB88:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t26 = (t21 || t22);
    if (t26 > 0)
        goto LAB89;

LAB90:    memcpy(t75, t17, 8);

LAB91:    t71 = (t75 + 4);
    t85 = *((unsigned int *)t71);
    t86 = (~(t85));
    t87 = *((unsigned int *)t75);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(93, ng0);

LAB106:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB105:
LAB84:
LAB58:
LAB30:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    memset(t17, 0, 8);
    t11 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t11) == 0)
        goto LAB17;

LAB19:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;

LAB20:    memset(t24, 0, 8);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t17);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t25) != 0)
        goto LAB23;

LAB24:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t24);
    t35 = (t33 & t34);
    *((unsigned int *)t32) = t35;
    t36 = (t13 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB23:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB24;

LAB25:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t13 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t24);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t58);
    t63 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t63 & t59);
    goto LAB27;

LAB28:    xsi_set_current_line(52, ng0);

LAB31:    xsi_set_current_line(53, ng0);
    t70 = ((char*)((ng4)));
    t71 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 13);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 13);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t16);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 14);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 14);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t16);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 15);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 15);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t16);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t16);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB48;

LAB49:
LAB50:
LAB42:
LAB38:    goto LAB30;

LAB32:    xsi_set_current_line(55, ng0);

LAB35:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t72, 64, t12, 32);
    t11 = (t0 + 1368U);
    t23 = *((char **)t11);
    xsi_vlogtype_sign_extend(t73, 64, t23, 32);
    xsi_vlog_signed_multiply(t74, 64, t72, 64, t73, 64);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t74, 0, 0, 64, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(61, ng0);

LAB39:    xsi_set_current_line(62, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t23 = *((char **)t11);
    xsi_vlog_unsigned_multiply(t72, 64, t12, 32, t23, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB38;

LAB40:    xsi_set_current_line(67, ng0);

LAB43:    xsi_set_current_line(68, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t23 = *((char **)t11);
    memset(t32, 0, 8);
    xsi_vlog_signed_divide(t32, 32, t12, 32, t23, 32);
    t11 = (t0 + 3208);
    t25 = (t0 + 3208);
    t31 = (t25 + 72U);
    t36 = *((char **)t31);
    t37 = ((char*)((ng7)));
    t38 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t75, t76, t77, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t46 = (t75 + 4);
    t21 = *((unsigned int *)t46);
    t56 = (!(t21));
    t47 = (t76 + 4);
    t22 = *((unsigned int *)t47);
    t57 = (!(t22));
    t78 = (t56 && t57);
    t64 = (t77 + 4);
    t26 = *((unsigned int *)t64);
    t79 = (!(t26));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t24, 0, 8);
    xsi_vlog_signed_mod(t24, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t23 = ((char*)((ng9)));
    t25 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t32, t75, t76, ((int*)(t12)), 2, t23, 32, 1, t25, 32, 1);
    t31 = (t32 + 4);
    t6 = *((unsigned int *)t31);
    t56 = (!(t6));
    t36 = (t75 + 4);
    t7 = *((unsigned int *)t36);
    t57 = (!(t7));
    t78 = (t56 && t57);
    t37 = (t76 + 4);
    t8 = *((unsigned int *)t37);
    t79 = (!(t8));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB42;

LAB44:    t27 = *((unsigned int *)t77);
    t81 = (t27 + 0);
    t28 = *((unsigned int *)t75);
    t29 = *((unsigned int *)t76);
    t82 = (t28 - t29);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t11, t32, t81, *((unsigned int *)t76), t83, 0LL);
    goto LAB45;

LAB46:    t9 = *((unsigned int *)t76);
    t81 = (t9 + 0);
    t10 = *((unsigned int *)t32);
    t14 = *((unsigned int *)t75);
    t82 = (t10 - t14);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t2, t24, t81, *((unsigned int *)t75), t83, 0LL);
    goto LAB47;

LAB48:    xsi_set_current_line(74, ng0);

LAB51:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t23 = *((char **)t11);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t12, 32, t23, 32);
    t11 = (t0 + 3208);
    t25 = (t0 + 3208);
    t31 = (t25 + 72U);
    t36 = *((char **)t31);
    t37 = ((char*)((ng7)));
    t38 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t24, t32, t75, ((int*)(t36)), 2, t37, 32, 1, t38, 32, 1);
    t46 = (t24 + 4);
    t21 = *((unsigned int *)t46);
    t56 = (!(t21));
    t47 = (t32 + 4);
    t22 = *((unsigned int *)t47);
    t57 = (!(t22));
    t78 = (t56 && t57);
    t64 = (t75 + 4);
    t26 = *((unsigned int *)t64);
    t79 = (!(t26));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t23 = ((char*)((ng9)));
    t25 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t17, t24, t32, ((int*)(t12)), 2, t23, 32, 1, t25, 32, 1);
    t31 = (t17 + 4);
    t6 = *((unsigned int *)t31);
    t56 = (!(t6));
    t36 = (t24 + 4);
    t7 = *((unsigned int *)t36);
    t57 = (!(t7));
    t78 = (t56 && t57);
    t37 = (t32 + 4);
    t8 = *((unsigned int *)t37);
    t79 = (!(t8));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB50;

LAB52:    t27 = *((unsigned int *)t75);
    t81 = (t27 + 0);
    t28 = *((unsigned int *)t24);
    t29 = *((unsigned int *)t32);
    t82 = (t28 - t29);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t11, t17, t81, *((unsigned int *)t32), t83, 0LL);
    goto LAB53;

LAB54:    t9 = *((unsigned int *)t32);
    t81 = (t9 + 0);
    t10 = *((unsigned int *)t17);
    t14 = *((unsigned int *)t24);
    t82 = (t10 - t14);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t2, t13, t81, *((unsigned int *)t24), t83, 0LL);
    goto LAB55;

LAB56:    xsi_set_current_line(82, ng0);

LAB59:    xsi_set_current_line(83, ng0);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t23 = *((char **)t12);
    t25 = (t0 + 3528);
    t31 = (t25 + 56U);
    t36 = *((char **)t31);
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t23, 32, t36, 32);
    t37 = (t13 + 4);
    t14 = *((unsigned int *)t37);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t18 = (t16 & t15);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB60;

LAB61:
LAB62:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(84, ng0);

LAB63:    xsi_set_current_line(85, ng0);
    t38 = ((char*)((ng8)));
    t46 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t46, t38, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t4, 32, 0, 32, 0LL);
    goto LAB62;

LAB64:    *((unsigned int *)t17) = 1;
    goto LAB67;

LAB66:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB67;

LAB68:    t23 = (t0 + 2008U);
    t25 = *((char **)t23);
    memset(t24, 0, 8);
    t23 = (t25 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t33 = (t30 & 1U);
    if (t33 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t23) == 0)
        goto LAB71;

LAB73:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;

LAB74:    memset(t32, 0, 8);
    t36 = (t24 + 4);
    t34 = *((unsigned int *)t36);
    t35 = (~(t34));
    t39 = *((unsigned int *)t24);
    t40 = (t39 & t35);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t36) != 0)
        goto LAB77;

LAB78:    t42 = *((unsigned int *)t17);
    t43 = *((unsigned int *)t32);
    t44 = (t42 & t43);
    *((unsigned int *)t75) = t44;
    t38 = (t17 + 4);
    t46 = (t32 + 4);
    t47 = (t75 + 4);
    t45 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t46);
    t49 = (t45 | t48);
    *((unsigned int *)t47) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB70;

LAB71:    *((unsigned int *)t24) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t32) = 1;
    goto LAB78;

LAB77:    t37 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB78;

LAB79:    t52 = *((unsigned int *)t75);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t75) = (t52 | t53);
    t64 = (t17 + 4);
    t70 = (t32 + 4);
    t54 = *((unsigned int *)t17);
    t55 = (~(t54));
    t58 = *((unsigned int *)t64);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t70);
    t63 = (~(t62));
    t56 = (t55 & t59);
    t57 = (t61 & t63);
    t65 = (~(t56));
    t66 = (~(t57));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    t69 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t69 & t65);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & t66);
    goto LAB81;

LAB82:    xsi_set_current_line(90, ng0);
    t90 = (t0 + 1208U);
    t91 = *((char **)t90);
    t90 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t90, t91, 0, 0, 32, 0LL);
    goto LAB84;

LAB85:    *((unsigned int *)t17) = 1;
    goto LAB88;

LAB87:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB88;

LAB89:    t23 = (t0 + 2008U);
    t25 = *((char **)t23);
    memset(t24, 0, 8);
    t23 = (t25 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t33 = (t30 & 1U);
    if (t33 != 0)
        goto LAB95;

LAB93:    if (*((unsigned int *)t23) == 0)
        goto LAB92;

LAB94:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;

LAB95:    memset(t32, 0, 8);
    t36 = (t24 + 4);
    t34 = *((unsigned int *)t36);
    t35 = (~(t34));
    t39 = *((unsigned int *)t24);
    t40 = (t39 & t35);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t36) != 0)
        goto LAB98;

LAB99:    t42 = *((unsigned int *)t17);
    t43 = *((unsigned int *)t32);
    t44 = (t42 & t43);
    *((unsigned int *)t75) = t44;
    t38 = (t17 + 4);
    t46 = (t32 + 4);
    t47 = (t75 + 4);
    t45 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t46);
    t49 = (t45 | t48);
    *((unsigned int *)t47) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB92:    *((unsigned int *)t24) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t32) = 1;
    goto LAB99;

LAB98:    t37 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB99;

LAB100:    t52 = *((unsigned int *)t75);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t75) = (t52 | t53);
    t64 = (t17 + 4);
    t70 = (t32 + 4);
    t54 = *((unsigned int *)t17);
    t55 = (~(t54));
    t58 = *((unsigned int *)t64);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t70);
    t63 = (~(t62));
    t56 = (t55 & t59);
    t57 = (t61 & t63);
    t65 = (~(t56));
    t66 = (~(t57));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    t69 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t69 & t65);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & t66);
    goto LAB102;

LAB103:    xsi_set_current_line(91, ng0);
    t90 = (t0 + 1208U);
    t91 = *((char **)t90);
    t90 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t90, t91, 0, 0, 32, 0LL);
    goto LAB105;

}


extern void work_m_00000000003440074196_3709913189_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Always_41_2};
	xsi_register_didat("work_m_00000000003440074196_3709913189", "isim/CPU_isim_beh.exe.sim/work/m_00000000003440074196_3709913189.didat");
	xsi_register_executes(pe);
}
