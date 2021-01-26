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
static const char *ng0 = "C:/Users/_/Desktop/VERILOG LAB/eight_three_encoder_with_priority/eight_three_encoder_with_priority.v";
static unsigned int ng1[] = {0U, 7U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 1U};
static unsigned int ng5[] = {7U, 3U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {15U, 7U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {31U, 15U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {63U, 31U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {127U, 63U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {255U, 127U};
static unsigned int ng16[] = {7U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
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

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1640);
    *((int *)t2) = 1;
    t3 = (t0 + 1472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
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

LAB11:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);

LAB13:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng15)));
    t21 = xsi_vlog_unsigned_case_xcompare(t3, 8, t2, 8);
    if (t21 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB32:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 920);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 3);
    goto LAB12;

LAB14:    xsi_set_current_line(34, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB16:    xsi_set_current_line(35, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB18:    xsi_set_current_line(36, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB20:    xsi_set_current_line(37, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB22:    xsi_set_current_line(39, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB24:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB26:    xsi_set_current_line(41, ng0);
    t5 = ((char*)((ng14)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

LAB28:    xsi_set_current_line(42, ng0);
    t5 = ((char*)((ng16)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB32;

}


extern void work_m_00000000002746884409_2666622776_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002746884409_2666622776", "isim/eight_three_encoder_with_priority_TB_isim_beh.exe.sim/work/m_00000000002746884409_2666622776.didat");
	xsi_register_executes(pe);
}
