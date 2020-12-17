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
static const char *ng0 = "D:/BUAACO/P7/CPU_P7/NPC.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {16768U, 0U};



static void Cont_35_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4376);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t23[8];
    char t40[8];
    char t41[8];
    char t60[8];
    char t61[8];
    char t79[8];
    char t80[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1528U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t92 = (t0 + 4536);
    t99 = (t92 + 56U);
    t100 = *((char **)t99);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    memcpy(t102, t3, 8);
    xsi_driver_vfirst_trans(t92, 0, 31);
    t103 = (t0 + 4392);
    *((int *)t103) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 2328U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t16) != 0)
        goto LAB19;

LAB20:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t23);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t23) > 0)
        goto LAB27;

LAB28:    memcpy(t22, t40, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = ((char*)((ng2)));
    goto LAB22;

LAB23:    t42 = (t0 + 2488U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t43 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t42) != 0)
        goto LAB32;

LAB33:    t50 = (t41 + 4);
    t51 = *((unsigned int *)t41);
    t52 = *((unsigned int *)t50);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB34;

LAB35:    t56 = *((unsigned int *)t41);
    t57 = (~(t56));
    t58 = *((unsigned int *)t50);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t50) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t41) > 0)
        goto LAB40;

LAB41:    memcpy(t40, t60, 8);

LAB42:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t22, 32, t35, 32, t40, 32);
    goto LAB29;

LAB27:    memcpy(t22, t35, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t41) = 1;
    goto LAB33;

LAB32:    t49 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB33;

LAB34:    t54 = (t0 + 2648U);
    t55 = *((char **)t54);
    goto LAB35;

LAB36:    t54 = (t0 + 1368U);
    t62 = *((char **)t54);
    memset(t61, 0, 8);
    t54 = (t62 + 4);
    t63 = *((unsigned int *)t54);
    t64 = (~(t63));
    t65 = *((unsigned int *)t62);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t54) != 0)
        goto LAB45;

LAB46:    t69 = (t61 + 4);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB47;

LAB48:    t75 = *((unsigned int *)t61);
    t76 = (~(t75));
    t77 = *((unsigned int *)t69);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t69) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t61) > 0)
        goto LAB53;

LAB54:    memcpy(t60, t79, 8);

LAB55:    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t40, 32, t55, 32, t60, 32);
    goto LAB42;

LAB40:    memcpy(t40, t55, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t61) = 1;
    goto LAB46;

LAB45:    t68 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB46;

LAB47:    t73 = (t0 + 1848U);
    t74 = *((char **)t73);
    goto LAB48;

LAB49:    t73 = (t0 + 1208U);
    t81 = *((char **)t73);
    memset(t80, 0, 8);
    t73 = (t81 + 4);
    t82 = *((unsigned int *)t73);
    t83 = (~(t82));
    t84 = *((unsigned int *)t81);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t73) != 0)
        goto LAB58;

LAB59:    t88 = (t80 + 4);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t88);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB60;

LAB61:    t94 = *((unsigned int *)t80);
    t95 = (~(t94));
    t96 = *((unsigned int *)t88);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t88) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t80) > 0)
        goto LAB66;

LAB67:    memcpy(t79, t98, 8);

LAB68:    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t60, 32, t74, 32, t79, 32);
    goto LAB55;

LAB53:    memcpy(t60, t74, 8);
    goto LAB55;

LAB56:    *((unsigned int *)t80) = 1;
    goto LAB59;

LAB58:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB59;

LAB60:    t92 = (t0 + 1688U);
    t93 = *((char **)t92);
    goto LAB61;

LAB62:    t92 = (t0 + 2168U);
    t98 = *((char **)t92);
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t79, 32, t93, 32, t98, 32);
    goto LAB68;

LAB66:    memcpy(t79, t93, 8);
    goto LAB68;

}


extern void work_m_00000000000780638906_0757879789_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000000780638906_0757879789", "isim/CPU_TestBench_isim_beh.exe.sim/work/m_00000000000780638906_0757879789.didat");
	xsi_register_executes(pe);
}
