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
static const char *ng0 = "C:/Users/HP/Desktop/University/Academics/Capstone/XXTEA/XXTEA/key_RAM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1958850193_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1352U);
    t7 = *((char **)t3);
    t8 = (127 - 31);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 5568);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 32U);
    xsi_driver_first_trans_delta(t11, 0U, 32U, 0LL);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t8 = (127 - 63);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t4 = (t0 + 5568);
    t7 = (t4 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 32U);
    xsi_driver_first_trans_delta(t4, 32U, 32U, 0LL);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t8 = (127 - 95);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t4 = (t0 + 5568);
    t7 = (t4 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 32U);
    xsi_driver_first_trans_delta(t4, 64U, 32U, 0LL);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t8 = (127 - 127);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t3 + t10);
    t4 = (t0 + 5568);
    t7 = (t4 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 32U);
    xsi_driver_first_trans_delta(t4, 96U, 32U, 0LL);
    goto LAB6;

}

static void work_a_1958850193_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(71, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 9084U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5632);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5440);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1958850193_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 9100U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5696);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5456);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1958850193_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(73, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 9116U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5760);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5472);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1958850193_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(74, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 9132U);
    t4 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 5824);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 5488);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1958850193_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1958850193_3212880686_p_0,(void *)work_a_1958850193_3212880686_p_1,(void *)work_a_1958850193_3212880686_p_2,(void *)work_a_1958850193_3212880686_p_3,(void *)work_a_1958850193_3212880686_p_4};
	xsi_register_didat("work_a_1958850193_3212880686", "isim/key_module_isim_beh.exe.sim/work/a_1958850193_3212880686.didat");
	xsi_register_executes(pe);
}
