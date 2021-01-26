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
static const char *ng0 = "C:/Users/_/Desktop/VERILOG LAB/alu_thirty_two_bit/alu32_bit.v";
static unsigned int ng1[] = {0U, 4294967295U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Always_30_0(char *t0)
{
    char t4[8];
    char t22[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
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
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t21 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 32);

LAB33:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1104);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    goto LAB12;

LAB15:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    t5 = (t0 + 784U);
    t12 = *((char **)t5);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t12, 32);
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB33;

LAB17:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    t5 = (t0 + 784U);
    t12 = *((char **)t5);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t6, 32, t12, 32);
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB33;

LAB19:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t5, 32);
    t12 = (t0 + 1104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t6, 32, t5, 32);
    t12 = (t0 + 1104);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB35;

LAB34:    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4294967295U);
    t13 = (t0 + 1104);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(46, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t5) != 0)
        goto LAB38;

LAB39:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB40;

LAB41:    memcpy(t27, t4, 8);

LAB42:    t59 = (t0 + 1104);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t5) != 0)
        goto LAB52;

LAB53:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB54;

LAB55:    memcpy(t27, t4, 8);

LAB56:    t59 = (t0 + 1104);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 32);
    goto LAB33;

LAB35:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t11 | t14);
    goto LAB34;

LAB36:    *((unsigned int *)t4) = 1;
    goto LAB39;

LAB38:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB39;

LAB40:    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t20 + 4);
    t17 = *((unsigned int *)t19);
    t18 = (~(t17));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t18);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t19) != 0)
        goto LAB45;

LAB46:    t28 = *((unsigned int *)t4);
    t29 = *((unsigned int *)t22);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t4 + 4);
    t32 = (t22 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t22) = 1;
    goto LAB46;

LAB45:    t26 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB46;

LAB47:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t4 + 4);
    t42 = (t22 + 4);
    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t22);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB49;

LAB50:    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB52:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB53;

LAB54:    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t19 = (t20 + 4);
    t18 = *((unsigned int *)t19);
    t23 = (~(t18));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t28 = (t25 & 4294967295U);
    if (t28 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t19) != 0)
        goto LAB59;

LAB60:    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t22);
    t34 = (t29 | t30);
    *((unsigned int *)t27) = t34;
    t31 = (t4 + 4);
    t32 = (t22 + 4);
    t33 = (t27 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t32);
    t37 = (t35 | t36);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB56;

LAB57:    *((unsigned int *)t22) = 1;
    goto LAB60;

LAB59:    t26 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB60;

LAB61:    t40 = *((unsigned int *)t27);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t40 | t43);
    t41 = (t4 + 4);
    t42 = (t22 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t51 = (t46 & t45);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t22);
    t52 = (t49 & t48);
    t50 = (~(t51));
    t53 = (~(t52));
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t50);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    goto LAB63;

}


extern void work_m_00000000000419156470_3167392336_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000000419156470_3167392336", "isim/alu32_bit_TB_isim_beh.exe.sim/work/m_00000000000419156470_3167392336.didat");
	xsi_register_executes(pe);
}
