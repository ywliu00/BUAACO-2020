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
static const char *ng0 = "D:/BUAACO/P7/CPU_P7/MultDivModule.v";
static int ng1[] = {32, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {268435455U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U, 0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {5, 0};
static int ng8[] = {1, 0};
static int ng9[] = {31, 0};
static int ng10[] = {63, 0};
static int ng11[] = {10, 0};



static void Cont_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
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
    t16 = (t0 + 5696);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5584);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
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
    t16 = (t0 + 5760);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5600);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Always_42_2(char *t0)
{
    char t13[8];
    char t19[8];
    char t26[8];
    char t66[8];
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
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
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5616);
    *((int *)t2) = 1;
    t3 = (t0 + 5296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
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

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t5) != 0)
        goto LAB12;

LAB13:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB14;

LAB15:    memcpy(t26, t13, 8);

LAB16:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);
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
        goto LAB28;

LAB29:    if (*((unsigned int *)t2) != 0)
        goto LAB30;

LAB31:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB32;

LAB33:    memcpy(t66, t13, 8);

LAB34:    t58 = (t66 + 4);
    t67 = *((unsigned int *)t58);
    t68 = (~(t67));
    t69 = *((unsigned int *)t66);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(91, ng0);
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
        goto LAB74;

LAB75:    xsi_set_current_line(101, ng0);
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
    memset(t19, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t16);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t5) != 0)
        goto LAB84;

LAB85:    t12 = (t19 + 4);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t12);
    t27 = (t23 || t24);
    if (t27 > 0)
        goto LAB86;

LAB87:    memcpy(t75, t19, 8);

LAB88:    t65 = (t75 + 4);
    t85 = *((unsigned int *)t65);
    t86 = (~(t85));
    t87 = *((unsigned int *)t75);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(107, ng0);
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
    memset(t19, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t16);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t5) != 0)
        goto LAB106;

LAB107:    t12 = (t19 + 4);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t12);
    t27 = (t23 || t24);
    if (t27 > 0)
        goto LAB108;

LAB109:    memcpy(t75, t19, 8);

LAB110:    t65 = (t75 + 4);
    t85 = *((unsigned int *)t65);
    t86 = (~(t85));
    t87 = *((unsigned int *)t75);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(114, ng0);

LAB126:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB124:
LAB102:
LAB76:
LAB48:
LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    t17 = (t0 + 2008U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t17) != 0)
        goto LAB19;

LAB20:    t27 = *((unsigned int *)t13);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t13 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB19:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t13 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t13);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB23;

LAB24:    xsi_set_current_line(55, ng0);

LAB27:    xsi_set_current_line(56, ng0);
    t64 = ((char*)((ng4)));
    t65 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t65, t64, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t4, 32, 0, 32, 0LL);
    goto LAB26;

LAB28:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB30:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    memset(t19, 0, 8);
    t11 = (t12 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t11) == 0)
        goto LAB35;

LAB37:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;

LAB38:    memset(t26, 0, 8);
    t18 = (t19 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t33 = (t29 & t28);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t18) != 0)
        goto LAB41;

LAB42:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t66) = t37;
    t30 = (t13 + 4);
    t31 = (t26 + 4);
    t32 = (t66 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t42 = (t38 | t39);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t32);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB35:    *((unsigned int *)t19) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t26) = 1;
    goto LAB42;

LAB41:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB42;

LAB43:    t45 = *((unsigned int *)t66);
    t46 = *((unsigned int *)t32);
    *((unsigned int *)t66) = (t45 | t46);
    t40 = (t13 + 4);
    t41 = (t26 + 4);
    t47 = *((unsigned int *)t13);
    t48 = (~(t47));
    t49 = *((unsigned int *)t40);
    t52 = (~(t49));
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t41);
    t56 = (~(t55));
    t50 = (t48 & t52);
    t51 = (t54 & t56);
    t57 = (~(t50));
    t59 = (~(t51));
    t60 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t60 & t57);
    t61 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t61 & t59);
    t62 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t62 & t57);
    t63 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t63 & t59);
    goto LAB45;

LAB46:    xsi_set_current_line(60, ng0);

LAB49:    xsi_set_current_line(61, ng0);
    t64 = ((char*)((ng6)));
    t65 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t65, t64, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlogtype_concat(t72, 64, 64, 2U, t12, 32, t4, 32);
    t17 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t17, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(64, ng0);
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
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(70, ng0);
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
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(76, ng0);
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
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(83, ng0);
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
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB60:
LAB56:    goto LAB48;

LAB50:    xsi_set_current_line(65, ng0);

LAB53:    xsi_set_current_line(66, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t72, 64, t12, 32);
    t11 = (t0 + 1368U);
    t17 = *((char **)t11);
    xsi_vlogtype_sign_extend(t73, 64, t17, 32);
    xsi_vlog_signed_multiply(t74, 64, t72, 64, t73, 64);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t74, 0, 0, 64, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB52;

LAB54:    xsi_set_current_line(71, ng0);

LAB57:    xsi_set_current_line(72, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t17 = *((char **)t11);
    xsi_vlog_unsigned_multiply(t72, 64, t12, 32, t17, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t11, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB56;

LAB58:    xsi_set_current_line(77, ng0);

LAB61:    xsi_set_current_line(78, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t17 = *((char **)t11);
    memset(t66, 0, 8);
    xsi_vlog_signed_divide(t66, 32, t12, 32, t17, 32);
    t11 = (t0 + 3208);
    t18 = (t0 + 3208);
    t25 = (t18 + 72U);
    t30 = *((char **)t25);
    t31 = ((char*)((ng9)));
    t32 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t75, t76, t77, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t40 = (t75 + 4);
    t23 = *((unsigned int *)t40);
    t50 = (!(t23));
    t41 = (t76 + 4);
    t24 = *((unsigned int *)t41);
    t51 = (!(t24));
    t78 = (t50 && t51);
    t58 = (t77 + 4);
    t27 = *((unsigned int *)t58);
    t79 = (!(t27));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t26, 0, 8);
    xsi_vlog_signed_mod(t26, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    t5 = (t0 + 3208);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t17 = ((char*)((ng10)));
    t18 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t66, t75, t76, ((int*)(t12)), 2, t17, 32, 1, t18, 32, 1);
    t25 = (t66 + 4);
    t6 = *((unsigned int *)t25);
    t50 = (!(t6));
    t30 = (t75 + 4);
    t7 = *((unsigned int *)t30);
    t51 = (!(t7));
    t78 = (t50 && t51);
    t31 = (t76 + 4);
    t8 = *((unsigned int *)t31);
    t79 = (!(t8));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB60;

LAB62:    t28 = *((unsigned int *)t77);
    t81 = (t28 + 0);
    t29 = *((unsigned int *)t75);
    t33 = *((unsigned int *)t76);
    t82 = (t29 - t33);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t11, t66, t81, *((unsigned int *)t76), t83, 0LL);
    goto LAB63;

LAB64:    t9 = *((unsigned int *)t76);
    t81 = (t9 + 0);
    t10 = *((unsigned int *)t66);
    t14 = *((unsigned int *)t75);
    t82 = (t10 - t14);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t2, t26, t81, *((unsigned int *)t75), t83, 0LL);
    goto LAB65;

LAB66:    xsi_set_current_line(84, ng0);

LAB69:    xsi_set_current_line(85, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    t11 = (t0 + 1368U);
    t17 = *((char **)t11);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_divide(t19, 32, t12, 32, t17, 32);
    t11 = (t0 + 3208);
    t18 = (t0 + 3208);
    t25 = (t18 + 72U);
    t30 = *((char **)t25);
    t31 = ((char*)((ng9)));
    t32 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t26, t66, t75, ((int*)(t30)), 2, t31, 32, 1, t32, 32, 1);
    t40 = (t26 + 4);
    t23 = *((unsigned int *)t40);
    t50 = (!(t23));
    t41 = (t66 + 4);
    t24 = *((unsigned int *)t41);
    t51 = (!(t24));
    t78 = (t50 && t51);
    t58 = (t75 + 4);
    t27 = *((unsigned int *)t58);
    t79 = (!(t27));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(86, ng0);
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
    t17 = ((char*)((ng10)));
    t18 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t19, t26, t66, ((int*)(t12)), 2, t17, 32, 1, t18, 32, 1);
    t25 = (t19 + 4);
    t6 = *((unsigned int *)t25);
    t50 = (!(t6));
    t30 = (t26 + 4);
    t7 = *((unsigned int *)t30);
    t51 = (!(t7));
    t78 = (t50 && t51);
    t31 = (t66 + 4);
    t8 = *((unsigned int *)t31);
    t79 = (!(t8));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB72;

LAB73:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB68;

LAB70:    t28 = *((unsigned int *)t75);
    t81 = (t28 + 0);
    t29 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t66);
    t82 = (t29 - t33);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t11, t19, t81, *((unsigned int *)t66), t83, 0LL);
    goto LAB71;

LAB72:    t9 = *((unsigned int *)t66);
    t81 = (t9 + 0);
    t10 = *((unsigned int *)t19);
    t14 = *((unsigned int *)t26);
    t82 = (t10 - t14);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t2, t13, t81, *((unsigned int *)t26), t83, 0LL);
    goto LAB73;

LAB74:    xsi_set_current_line(92, ng0);

LAB77:    xsi_set_current_line(93, ng0);
    t11 = (t0 + 3688);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    t18 = (t0 + 3848);
    t25 = (t18 + 56U);
    t30 = *((char **)t25);
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t17, 32, t30, 32);
    t31 = (t13 + 4);
    t14 = *((unsigned int *)t31);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB76;

LAB78:    xsi_set_current_line(94, ng0);

LAB81:    xsi_set_current_line(95, ng0);
    t32 = ((char*)((ng4)));
    t40 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t40, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t4, 32, 0, 32, 0LL);
    goto LAB80;

LAB82:    *((unsigned int *)t19) = 1;
    goto LAB85;

LAB84:    t11 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB85;

LAB86:    t17 = (t0 + 2008U);
    t18 = *((char **)t17);
    memset(t26, 0, 8);
    t17 = (t18 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t33 = *((unsigned int *)t18);
    t34 = (t33 & t29);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t17) == 0)
        goto LAB89;

LAB91:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;

LAB92:    memset(t66, 0, 8);
    t30 = (t26 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t39 = (t38 & t37);
    t42 = (t39 & 1U);
    if (t42 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t30) != 0)
        goto LAB95;

LAB96:    t43 = *((unsigned int *)t19);
    t44 = *((unsigned int *)t66);
    t45 = (t43 & t44);
    *((unsigned int *)t75) = t45;
    t32 = (t19 + 4);
    t40 = (t66 + 4);
    t41 = (t75 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t41);
    t52 = (t49 != 0);
    if (t52 == 1)
        goto LAB97;

LAB98:
LAB99:    goto LAB88;

LAB89:    *((unsigned int *)t26) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t66) = 1;
    goto LAB96;

LAB95:    t31 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB96;

LAB97:    t53 = *((unsigned int *)t75);
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t75) = (t53 | t54);
    t58 = (t19 + 4);
    t64 = (t66 + 4);
    t55 = *((unsigned int *)t19);
    t56 = (~(t55));
    t57 = *((unsigned int *)t58);
    t59 = (~(t57));
    t60 = *((unsigned int *)t66);
    t61 = (~(t60));
    t62 = *((unsigned int *)t64);
    t63 = (~(t62));
    t50 = (t56 & t59);
    t51 = (t61 & t63);
    t67 = (~(t50));
    t68 = (~(t51));
    t69 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t68);
    t71 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t71 & t67);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & t68);
    goto LAB99;

LAB100:    xsi_set_current_line(102, ng0);

LAB103:    xsi_set_current_line(103, ng0);
    t90 = (t0 + 3048);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t0 + 2888);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    xsi_vlogtype_concat(t72, 64, 64, 2U, t95, 32, t92, 32);
    t96 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t96, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB102;

LAB104:    *((unsigned int *)t19) = 1;
    goto LAB107;

LAB106:    t11 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB107;

LAB108:    t17 = (t0 + 2008U);
    t18 = *((char **)t17);
    memset(t26, 0, 8);
    t17 = (t18 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t33 = *((unsigned int *)t18);
    t34 = (t33 & t29);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB114;

LAB112:    if (*((unsigned int *)t17) == 0)
        goto LAB111;

LAB113:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;

LAB114:    memset(t66, 0, 8);
    t30 = (t26 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t38 = *((unsigned int *)t26);
    t39 = (t38 & t37);
    t42 = (t39 & 1U);
    if (t42 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t30) != 0)
        goto LAB117;

LAB118:    t43 = *((unsigned int *)t19);
    t44 = *((unsigned int *)t66);
    t45 = (t43 & t44);
    *((unsigned int *)t75) = t45;
    t32 = (t19 + 4);
    t40 = (t66 + 4);
    t41 = (t75 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t40);
    t48 = (t46 | t47);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t41);
    t52 = (t49 != 0);
    if (t52 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB111:    *((unsigned int *)t26) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t66) = 1;
    goto LAB118;

LAB117:    t31 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB118;

LAB119:    t53 = *((unsigned int *)t75);
    t54 = *((unsigned int *)t41);
    *((unsigned int *)t75) = (t53 | t54);
    t58 = (t19 + 4);
    t64 = (t66 + 4);
    t55 = *((unsigned int *)t19);
    t56 = (~(t55));
    t57 = *((unsigned int *)t58);
    t59 = (~(t57));
    t60 = *((unsigned int *)t66);
    t61 = (~(t60));
    t62 = *((unsigned int *)t64);
    t63 = (~(t62));
    t50 = (t56 & t59);
    t51 = (t61 & t63);
    t67 = (~(t50));
    t68 = (~(t51));
    t69 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t69 & t67);
    t70 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t70 & t68);
    t71 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t71 & t67);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & t68);
    goto LAB121;

LAB122:    xsi_set_current_line(108, ng0);

LAB125:    xsi_set_current_line(109, ng0);
    t90 = (t0 + 3048);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t0 + 2888);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    xsi_vlogtype_concat(t72, 64, 64, 2U, t95, 32, t92, 32);
    t96 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t96, t72, 0, 0, 64, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB124;

}


extern void work_m_00000000002122197233_3709913189_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Always_42_2};
	xsi_register_didat("work_m_00000000002122197233_3709913189", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000002122197233_3709913189.didat");
	xsi_register_executes(pe);
}
