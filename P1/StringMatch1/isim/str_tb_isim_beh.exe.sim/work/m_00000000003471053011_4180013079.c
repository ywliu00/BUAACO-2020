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
static const char *ng0 = "F:/Course/CO/P1/StringMatch1/string.v";
static int ng1[] = {0, 0};
static int ng2[] = {48, 0};
static int ng3[] = {57, 0};
static int ng4[] = {1, 0};
static int ng5[] = {3, 0};
static int ng6[] = {43, 0};
static int ng7[] = {42, 0};
static int ng8[] = {2, 0};



static void Always_10_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t16[8];
    char t20[8];
    char t29[8];
    char t33[8];
    char t41[8];
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
    int t13;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
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
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(15, ng0);

LAB9:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(13, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(21, ng0);

LAB20:    xsi_set_current_line(22, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t17 = (t12 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB22;

LAB21:    t18 = (t11 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB24;

LAB23:    *((unsigned int *)t16) = 1;

LAB24:    memset(t20, 0, 8);
    t21 = (t16 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t21) != 0)
        goto LAB28;

LAB29:    t23 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB30;

LAB31:    memcpy(t41, t20, 8);

LAB32:    memset(t15, 0, 8);
    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t73) != 0)
        goto LAB47;

LAB48:    t80 = (t15 + 4);
    t81 = *((unsigned int *)t15);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB49;

LAB50:    t85 = *((unsigned int *)t15);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t80) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t15) > 0)
        goto LAB55;

LAB56:    memcpy(t14, t89, 8);

LAB57:    t90 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t90, t14, 0, 0, 32, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(24, ng0);

LAB58:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t24 = (t9 ^ t10);
    t25 = (t8 | t24);
    t26 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t12);
    t36 = (t26 | t35);
    t37 = (~(t36));
    t38 = (t25 & t37);
    if (t38 != 0)
        goto LAB62;

LAB59:    if (t36 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t16) = 1;

LAB62:    memset(t20, 0, 8);
    t18 = (t16 + 4);
    t39 = *((unsigned int *)t18);
    t42 = (~(t39));
    t43 = *((unsigned int *)t16);
    t44 = (t43 & t42);
    t48 = (t44 & 1U);
    if (t48 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t18) != 0)
        goto LAB65;

LAB66:    t21 = (t20 + 4);
    t49 = *((unsigned int *)t20);
    t50 = (!(t49));
    t51 = *((unsigned int *)t21);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB67;

LAB68:    memcpy(t41, t20, 8);

LAB69:    memset(t15, 0, 8);
    t55 = (t41 + 4);
    t100 = *((unsigned int *)t55);
    t101 = (~(t100));
    t102 = *((unsigned int *)t41);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t55) != 0)
        goto LAB83;

LAB84:    t73 = (t15 + 4);
    t105 = *((unsigned int *)t15);
    t106 = *((unsigned int *)t73);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB85;

LAB86:    t108 = *((unsigned int *)t15);
    t109 = (~(t108));
    t110 = *((unsigned int *)t73);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t73) > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t15) > 0)
        goto LAB91;

LAB92:    memcpy(t14, t80, 8);

LAB93:    t84 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t84, t14, 0, 0, 32, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(27, ng0);

LAB94:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB96;

LAB95:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB96;

LAB99:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB98;

LAB97:    *((unsigned int *)t16) = 1;

LAB98:    memset(t20, 0, 8);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t18) != 0)
        goto LAB102;

LAB103:    t21 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t21);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB104;

LAB105:    memcpy(t41, t20, 8);

LAB106:    memset(t15, 0, 8);
    t55 = (t41 + 4);
    t74 = *((unsigned int *)t55);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t55) != 0)
        goto LAB121;

LAB122:    t73 = (t15 + 4);
    t81 = *((unsigned int *)t15);
    t82 = *((unsigned int *)t73);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB123;

LAB124:    t85 = *((unsigned int *)t15);
    t86 = (~(t85));
    t87 = *((unsigned int *)t73);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t73) > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t15) > 0)
        goto LAB129;

LAB130:    memcpy(t14, t80, 8);

LAB131:    t84 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t84, t14, 0, 0, 32, 0LL);
    goto LAB19;

LAB22:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB26:    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB28:    t22 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB29;

LAB30:    t27 = (t0 + 1368U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB34;

LAB33:    t31 = (t27 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t28) > *((unsigned int *)t27))
        goto LAB36;

LAB35:    *((unsigned int *)t29) = 1;

LAB36:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t34) != 0)
        goto LAB40;

LAB41:    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t20 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB32;

LAB34:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB36;

LAB38:    *((unsigned int *)t33) = 1;
    goto LAB41;

LAB40:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB41;

LAB42:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t20 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t20);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB44;

LAB45:    *((unsigned int *)t15) = 1;
    goto LAB48;

LAB47:    t79 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB48;

LAB49:    t84 = ((char*)((ng4)));
    goto LAB50;

LAB51:    t89 = ((char*)((ng5)));
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t14, 32, t84, 32, t89, 32);
    goto LAB57;

LAB55:    memcpy(t14, t84, 8);
    goto LAB57;

LAB61:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t20) = 1;
    goto LAB66;

LAB65:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB66;

LAB67:    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng7)));
    memset(t29, 0, 8);
    t27 = (t23 + 4);
    t28 = (t22 + 4);
    t53 = *((unsigned int *)t23);
    t54 = *((unsigned int *)t22);
    t57 = (t53 ^ t54);
    t58 = *((unsigned int *)t27);
    t59 = *((unsigned int *)t28);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t27);
    t63 = *((unsigned int *)t28);
    t64 = (t62 | t63);
    t67 = (~(t64));
    t68 = (t61 & t67);
    if (t68 != 0)
        goto LAB73;

LAB70:    if (t64 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t29) = 1;

LAB73:    memset(t33, 0, 8);
    t31 = (t29 + 4);
    t69 = *((unsigned int *)t31);
    t70 = (~(t69));
    t71 = *((unsigned int *)t29);
    t72 = (t71 & t70);
    t74 = (t72 & 1U);
    if (t74 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t31) != 0)
        goto LAB76;

LAB77:    t75 = *((unsigned int *)t20);
    t76 = *((unsigned int *)t33);
    t77 = (t75 | t76);
    *((unsigned int *)t41) = t77;
    t34 = (t20 + 4);
    t40 = (t33 + 4);
    t45 = (t41 + 4);
    t78 = *((unsigned int *)t34);
    t81 = *((unsigned int *)t40);
    t82 = (t78 | t81);
    *((unsigned int *)t45) = t82;
    t83 = *((unsigned int *)t45);
    t85 = (t83 != 0);
    if (t85 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB72:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t33) = 1;
    goto LAB77;

LAB76:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB77;

LAB78:    t86 = *((unsigned int *)t41);
    t87 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t86 | t87);
    t46 = (t20 + 4);
    t47 = (t33 + 4);
    t88 = *((unsigned int *)t46);
    t91 = (~(t88));
    t92 = *((unsigned int *)t20);
    t65 = (t92 & t91);
    t93 = *((unsigned int *)t47);
    t94 = (~(t93));
    t95 = *((unsigned int *)t33);
    t66 = (t95 & t94);
    t96 = (~(t65));
    t97 = (~(t66));
    t98 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t98 & t96);
    t99 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t99 & t97);
    goto LAB80;

LAB81:    *((unsigned int *)t15) = 1;
    goto LAB84;

LAB83:    t56 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB84;

LAB85:    t79 = ((char*)((ng8)));
    goto LAB86;

LAB87:    t80 = ((char*)((ng5)));
    goto LAB88;

LAB89:    xsi_vlog_unsigned_bit_combine(t14, 32, t79, 32, t80, 32);
    goto LAB93;

LAB91:    memcpy(t14, t79, 8);
    goto LAB93;

LAB96:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB98;

LAB100:    *((unsigned int *)t20) = 1;
    goto LAB103;

LAB102:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB103;

LAB104:    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t27 = (t23 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB108;

LAB107:    t28 = (t22 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB108;

LAB111:    if (*((unsigned int *)t23) > *((unsigned int *)t22))
        goto LAB110;

LAB109:    *((unsigned int *)t29) = 1;

LAB110:    memset(t33, 0, 8);
    t31 = (t29 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t31) != 0)
        goto LAB114;

LAB115:    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t34 = (t20 + 4);
    t40 = (t33 + 4);
    t45 = (t41 + 4);
    t48 = *((unsigned int *)t34);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t45);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB116;

LAB117:
LAB118:    goto LAB106;

LAB108:    t30 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB110;

LAB112:    *((unsigned int *)t33) = 1;
    goto LAB115;

LAB114:    t32 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB115;

LAB116:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t41) = (t53 | t54);
    t46 = (t20 + 4);
    t47 = (t33 + 4);
    t57 = *((unsigned int *)t20);
    t58 = (~(t57));
    t59 = *((unsigned int *)t46);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t47);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t69 & t67);
    t70 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB118;

LAB119:    *((unsigned int *)t15) = 1;
    goto LAB122;

LAB121:    t56 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB122;

LAB123:    t79 = ((char*)((ng4)));
    goto LAB124;

LAB125:    t80 = ((char*)((ng5)));
    goto LAB126;

LAB127:    xsi_vlog_unsigned_bit_combine(t14, 32, t79, 32, t80, 32);
    goto LAB131;

LAB129:    memcpy(t14, t79, 8);
    goto LAB131;

}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 3672);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 3592);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}


extern void work_m_00000000003471053011_4180013079_init()
{
	static char *pe[] = {(void *)Always_10_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000003471053011_4180013079", "isim/str_tb_isim_beh.exe.sim/work/m_00000000003471053011_4180013079.didat");
	xsi_register_executes(pe);
}
