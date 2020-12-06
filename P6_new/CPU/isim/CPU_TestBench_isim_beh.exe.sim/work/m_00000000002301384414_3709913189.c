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
static const char *ng0 = "F:/Course/CO/P6_new/CPU/MultDivModule.v";
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



static void Cont_35_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
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
    t16 = (t0 + 5216);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5104);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
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

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
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
    t16 = (t0 + 5280);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5120);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Always_40_2(char *t0)
{
    char t13[8];
    char t20[16];
    char t21[16];
    char t23[16];
    char t24[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char t29[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t22;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5136);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
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

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(89, ng0);
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
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(90, ng0);
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
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(92, ng0);

LAB52:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB51:
LAB48:
LAB40:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
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
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(59, ng0);
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
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(65, ng0);
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
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(72, ng0);
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
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB24:
LAB20:    goto LAB12;

LAB14:    xsi_set_current_line(54, ng0);

LAB17:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t20, 64, t12, 32);
    t11 = (t0 + 1368U);
    t22 = *((char **)t11);
    xsi_vlogtype_sign_extend(t21, 64, t22, 32);
    xsi_vlog_signed_multiply(t23, 64, t20, 64, t21, 64);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t23, 0, 0, 64, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(60, ng0);

LAB21:    xsi_set_current_line(61, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t22 = *((char **)t11);
    xsi_vlog_unsigned_multiply(t20, 64, t12, 32, t22, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t20, 0, 0, 64, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(66, ng0);

LAB25:    xsi_set_current_line(67, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t22 = *((char **)t11);
    memset(t26, 0, 8);
    xsi_vlog_signed_divide(t26, 32, t12, 32, t22, 32);
    t11 = (t0 + 3048);
    t30 = (t0 + 3048);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng7)));
    t34 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t27, t28, t29, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t28 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    t42 = (t29 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t25, 0, 8);
    xsi_vlog_signed_mod(t25, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    t5 = (t0 + 3048);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t22 = ((char*)((ng9)));
    t30 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t26, t27, t28, ((int*)(t12)), 2, t22, 32, 1, t30, 32, 1);
    t31 = (t26 + 4);
    t6 = *((unsigned int *)t31);
    t37 = (!(t6));
    t32 = (t27 + 4);
    t7 = *((unsigned int *)t32);
    t40 = (!(t7));
    t41 = (t37 && t40);
    t33 = (t28 + 4);
    t8 = *((unsigned int *)t33);
    t44 = (!(t8));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB24;

LAB26:    t46 = *((unsigned int *)t29);
    t47 = (t46 + 0);
    t48 = *((unsigned int *)t27);
    t49 = *((unsigned int *)t28);
    t50 = (t48 - t49);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t11, t26, t47, *((unsigned int *)t28), t51, 0LL);
    goto LAB27;

LAB28:    t9 = *((unsigned int *)t28);
    t47 = (t9 + 0);
    t10 = *((unsigned int *)t26);
    t14 = *((unsigned int *)t27);
    t50 = (t10 - t14);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t2, t25, t47, *((unsigned int *)t27), t51, 0LL);
    goto LAB29;

LAB30:    xsi_set_current_line(73, ng0);

LAB33:    xsi_set_current_line(74, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t22 = *((char **)t11);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_divide(t24, 32, t12, 32, t22, 32);
    t11 = (t0 + 3048);
    t30 = (t0 + 3048);
    t31 = (t30 + 72U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng7)));
    t34 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t25, t26, t27, ((int*)(t32)), 2, t33, 32, 1, t34, 32, 1);
    t35 = (t25 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t26 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    t42 = (t27 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    t5 = (t0 + 3048);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t22 = ((char*)((ng9)));
    t30 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t24, t25, t26, ((int*)(t12)), 2, t22, 32, 1, t30, 32, 1);
    t31 = (t24 + 4);
    t6 = *((unsigned int *)t31);
    t37 = (!(t6));
    t32 = (t25 + 4);
    t7 = *((unsigned int *)t32);
    t40 = (!(t7));
    t41 = (t37 && t40);
    t33 = (t26 + 4);
    t8 = *((unsigned int *)t33);
    t44 = (!(t8));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB32;

LAB34:    t46 = *((unsigned int *)t27);
    t47 = (t46 + 0);
    t48 = *((unsigned int *)t25);
    t49 = *((unsigned int *)t26);
    t50 = (t48 - t49);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t11, t24, t47, *((unsigned int *)t26), t51, 0LL);
    goto LAB35;

LAB36:    t9 = *((unsigned int *)t26);
    t47 = (t9 + 0);
    t10 = *((unsigned int *)t24);
    t14 = *((unsigned int *)t25);
    t50 = (t10 - t14);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t2, t13, t47, *((unsigned int *)t25), t51, 0LL);
    goto LAB37;

LAB38:    xsi_set_current_line(81, ng0);

LAB41:    xsi_set_current_line(82, ng0);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t22 = *((char **)t12);
    t30 = (t0 + 3368);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t22, 32, t32, 32);
    t33 = (t13 + 4);
    t14 = *((unsigned int *)t33);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB40;

LAB42:    xsi_set_current_line(83, ng0);

LAB45:    xsi_set_current_line(84, ng0);
    t34 = ((char*)((ng8)));
    t35 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t4, 32, 0, 32, 0LL);
    goto LAB44;

LAB46:    xsi_set_current_line(89, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB48;

LAB49:    xsi_set_current_line(90, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB51;

}


extern void work_m_00000000002301384414_3709913189_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Always_40_2};
	xsi_register_didat("work_m_00000000002301384414_3709913189", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000002301384414_3709913189.didat");
	xsi_register_executes(pe);
}
