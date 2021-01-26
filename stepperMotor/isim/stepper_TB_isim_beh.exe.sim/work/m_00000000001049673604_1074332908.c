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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/_/Desktop/VERILOG LAB/stepperMotor/stepper.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {100, 0};



static void Always_32_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1104);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 16, t7, 32);
    t9 = (t0 + 1104);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 16);
    goto LAB2;

}

static void Always_35_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t100[8];
    char t101[8];
    char t116[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t23;
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
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
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
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t62, t22, 8);

LAB16:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t8) != 0)
        goto LAB42;

LAB43:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB44;

LAB45:    memcpy(t62, t22, 8);

LAB46:    t76 = (t62 + 4);
    t95 = *((unsigned int *)t76);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 1012);
    t35 = (t34 + 36U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB20;

LAB17:    if (t50 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t38) = 1;

LAB20:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t55) != 0)
        goto LAB23;

LAB24:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB23:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB27;

LAB28:    xsi_set_current_line(38, ng0);

LAB31:    xsi_set_current_line(39, ng0);
    t102 = (t0 + 1196);
    t103 = (t102 + 36U);
    t104 = *((char **)t103);
    memset(t101, 0, 8);
    t105 = (t101 + 4);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 1);
    *((unsigned int *)t101) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 1);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t111 & 7U);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & 7U);
    t113 = (t0 + 1196);
    t114 = (t113 + 36U);
    t115 = *((char **)t114);
    memset(t116, 0, 8);
    t117 = (t116 + 4);
    t118 = (t115 + 4);
    t119 = *((unsigned int *)t115);
    t120 = (t119 >> 0);
    t121 = (t120 & 1);
    *((unsigned int *)t116) = t121;
    t122 = *((unsigned int *)t118);
    t123 = (t122 >> 0);
    t124 = (t123 & 1);
    *((unsigned int *)t117) = t124;
    xsi_vlogtype_concat(t100, 4, 4, 2U, t116, 1, t101, 3);
    t125 = (t0 + 1196);
    xsi_vlogvar_assign_value(t125, t100, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB30;

LAB32:    xsi_set_current_line(43, ng0);

LAB35:    xsi_set_current_line(44, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 1288);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB34;

LAB38:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t22) = 1;
    goto LAB43;

LAB42:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    t29 = (t0 + 1012);
    t30 = (t29 + 36U);
    t34 = *((char **)t30);
    t35 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t36 = (t34 + 4);
    t37 = (t35 + 4);
    t41 = *((unsigned int *)t34);
    t42 = *((unsigned int *)t35);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t37);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t37);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB50;

LAB47:    if (t50 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t38) = 1;

LAB50:    memset(t54, 0, 8);
    t40 = (t38 + 4);
    t56 = *((unsigned int *)t40);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t40) != 0)
        goto LAB53;

LAB54:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t55 = (t22 + 4);
    t61 = (t54 + 4);
    t66 = (t62 + 4);
    t69 = *((unsigned int *)t55);
    t70 = *((unsigned int *)t61);
    t71 = (t69 | t70);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t66);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t54) = 1;
    goto LAB54;

LAB53:    t53 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB54;

LAB55:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t66);
    *((unsigned int *)t62) = (t74 | t75);
    t67 = (t22 + 4);
    t68 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t67);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t68);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t90 & t88);
    t91 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB57;

LAB58:    xsi_set_current_line(50, ng0);

LAB61:    xsi_set_current_line(51, ng0);
    t77 = (t0 + 1196);
    t94 = (t77 + 36U);
    t102 = *((char **)t94);
    memset(t101, 0, 8);
    t103 = (t101 + 4);
    t104 = (t102 + 4);
    t107 = *((unsigned int *)t102);
    t108 = (t107 >> 3);
    t109 = (t108 & 1);
    *((unsigned int *)t101) = t109;
    t110 = *((unsigned int *)t104);
    t111 = (t110 >> 3);
    t112 = (t111 & 1);
    *((unsigned int *)t103) = t112;
    t105 = (t0 + 1196);
    t106 = (t105 + 36U);
    t113 = *((char **)t106);
    memset(t116, 0, 8);
    t114 = (t116 + 4);
    t115 = (t113 + 4);
    t119 = *((unsigned int *)t113);
    t120 = (t119 >> 0);
    *((unsigned int *)t116) = t120;
    t121 = *((unsigned int *)t115);
    t122 = (t121 >> 0);
    *((unsigned int *)t114) = t122;
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t123 & 7U);
    t124 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t124 & 7U);
    xsi_vlogtype_concat(t100, 4, 4, 2U, t116, 3, t101, 1);
    t117 = (t0 + 1196);
    xsi_vlogvar_assign_value(t117, t100, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB62;

LAB63:
LAB64:    goto LAB60;

LAB62:    xsi_set_current_line(55, ng0);

LAB65:    xsi_set_current_line(56, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 1288);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB64;

}


extern void work_m_00000000001049673604_1074332908_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Always_35_1};
	xsi_register_didat("work_m_00000000001049673604_1074332908", "isim/stepper_TB_isim_beh.exe.sim/work/m_00000000001049673604_1074332908.didat");
	xsi_register_executes(pe);
}
