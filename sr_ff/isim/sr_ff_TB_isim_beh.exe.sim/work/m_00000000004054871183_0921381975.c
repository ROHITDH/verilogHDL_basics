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
static const char *ng0 = "C:/Users/_/Desktop/VERILOG LAB/sr_ff/srff.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {0U, 1U};



static void Always_27_0(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    t5 = (t0 + 600U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t6) == 0)
        goto LAB16;

LAB18:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;

LAB19:    t9 = (t13 + 4);
    t10 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB21;

LAB20:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t11 = (t0 + 1104);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t9 = (t0 + 1012);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1012);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB15;

LAB16:    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB21:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t23 | t24);
    goto LAB20;

}


extern void work_m_00000000004054871183_0921381975_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000004054871183_0921381975", "isim/sr_ff_TB_isim_beh.exe.sim/work/m_00000000004054871183_0921381975.didat");
	xsi_register_executes(pe);
}
