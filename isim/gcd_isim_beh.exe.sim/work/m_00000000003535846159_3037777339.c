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
static const char *ng0 = "D:/gcd/control.v";
static int ng1[] = {0, 0};
static const char *ng2 = "during reset";
static const char *ng3 = "next state is test";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "update1";
static int ng7[] = {1, 0};



static void Always_25_0(char *t0)
{
    char t14[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3028);
    *((int *)t2) = 1;
    t3 = (t0 + 2860);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1252U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2308);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB10:    t5 = (t0 + 264);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t11, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 504);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 664);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 584);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 344);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:
LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t11 = (t0 + 264);
    t12 = *((char **)t11);
    t11 = (t0 + 2216);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 264);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    goto LAB8;

LAB11:    xsi_set_current_line(36, ng0);

LAB26:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 344);
    t12 = *((char **)t5);
    t5 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t5, t12, 0, 0, 4, 0LL);
    xsi_set_current_line(38, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    goto LAB25;

LAB13:    xsi_set_current_line(40, ng0);

LAB27:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 1940);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 504);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(50, ng0);

LAB28:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 1940);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB32;

LAB29:    if (t19 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t14) = 1;

LAB32:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1436U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB39;

LAB36:    if (t19 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t14) = 1;

LAB39:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 664);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB42:
LAB35:    goto LAB25;

LAB17:    xsi_set_current_line(63, ng0);

LAB43:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 1756);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1940);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(68, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    goto LAB25;

LAB19:    xsi_set_current_line(70, ng0);

LAB44:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 1848);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(76, ng0);

LAB45:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 1940);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1756);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB49;

LAB46:    if (t19 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t14) = 1;

LAB49:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 424);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB52:    goto LAB25;

LAB23:    xsi_set_current_line(84, ng0);

LAB53:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 2124);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB25;

LAB31:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 744);
    t29 = *((char **)t28);
    t28 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    goto LAB35;

LAB38:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);
    t28 = (t0 + 584);
    t29 = *((char **)t28);
    t28 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    goto LAB42;

LAB48:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(80, ng0);
    t28 = (t0 + 744);
    t29 = *((char **)t28);
    t28 = (t0 + 2308);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 4, 0LL);
    goto LAB52;

}


extern void work_m_00000000003535846159_3037777339_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000003535846159_3037777339", "isim/gcd_isim_beh.exe.sim/work/m_00000000003535846159_3037777339.didat");
	xsi_register_executes(pe);
}
