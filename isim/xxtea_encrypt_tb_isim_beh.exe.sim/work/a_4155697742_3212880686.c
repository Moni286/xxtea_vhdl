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
static const char *ng0 = "C:/Users/Lucas Futch/Documents/xxtea_vhdl/key_module.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_4155697742_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    static char *nl0[] = {&&LAB6, &&LAB6, &&LAB5, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6};

LAB0:    t1 = (t0 + 4592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(86, ng0);

LAB11:    t2 = (t0 + 6648);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t7 = (31 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t5 = (t6 + t9);
    t10 = (t0 + 6840);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 2U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB6:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = (31 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t5 = (t0 + 10388U);
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t15, t2, t5);
    t10 = (t15 + 12U);
    t16 = *((unsigned int *)t10);
    t17 = (1U * t16);
    t4 = (2U != t17);
    if (t4 == 1)
        goto LAB7;

LAB8:    t11 = (t0 + 6840);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t6, 2U);
    xsi_driver_first_trans_fast(t11);
    goto LAB4;

LAB7:    xsi_size_not_matching(2U, t17, 0);
    goto LAB8;

LAB9:    t3 = (t0 + 6648);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_4155697742_3212880686_p_1(char *t0)
{
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    static char *nl0[] = {&&LAB6, &&LAB6, &&LAB5, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6};

LAB0:    t1 = (t0 + 4840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(90, ng0);

LAB13:    t2 = (t0 + 6664);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t7 = (31 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t5 = (t6 + t9);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t14 = (t5 + t13);
    t15 = *((unsigned char *)t14);
    t16 = (t0 + 1672U);
    t17 = *((char **)t16);
    t18 = (31 - 3);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t16 = (t17 + t20);
    t21 = (0 - 1);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t25 = (t16 + t24);
    t26 = *((unsigned char *)t25);
    t27 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t26);
    t30 = ((IEEE_P_2592010699) + 4024);
    t28 = xsi_base_array_concat(t28, t29, t30, (char)99, t15, (char)99, t27, (char)101);
    t31 = (1U + 1U);
    t32 = (2U != t31);
    if (t32 == 1)
        goto LAB7;

LAB8:    t33 = (t0 + 6904);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 2U);
    xsi_driver_first_trans_fast(t33);
    goto LAB4;

LAB6:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t7 = (31 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t5 = (t2 + t13);
    t4 = *((unsigned char *)t5);
    t15 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t6 = (t0 + 1672U);
    t14 = *((char **)t6);
    t18 = (31 - 3);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t6 = (t14 + t20);
    t21 = (0 - 1);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t16 = (t6 + t24);
    t26 = *((unsigned char *)t16);
    t25 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t29, t25, (char)99, t15, (char)99, t26, (char)101);
    t31 = (1U + 1U);
    t27 = (2U != t31);
    if (t27 == 1)
        goto LAB9;

LAB10:    t28 = (t0 + 6904);
    t30 = (t28 + 56U);
    t33 = *((char **)t30);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t17, 2U);
    xsi_driver_first_trans_fast(t28);
    goto LAB4;

LAB7:    xsi_size_not_matching(2U, t31, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(2U, t31, 0);
    goto LAB10;

LAB11:    t3 = (t0 + 6664);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}

static void work_a_4155697742_3212880686_p_2(char *t0)
{
    char t29[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    static char *nl0[] = {&&LAB6, &&LAB6, &&LAB5, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6};

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(94, ng0);

LAB13:    t2 = (t0 + 6680);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t7 = (31 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t5 = (t6 + t9);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t14 = (t5 + t13);
    t15 = *((unsigned char *)t14);
    t16 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t15);
    t17 = (t0 + 1832U);
    t18 = *((char **)t17);
    t19 = (31 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t17 = (t18 + t21);
    t22 = (0 - 1);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t26 = (t17 + t25);
    t27 = *((unsigned char *)t26);
    t30 = ((IEEE_P_2592010699) + 4024);
    t28 = xsi_base_array_concat(t28, t29, t30, (char)99, t16, (char)99, t27, (char)101);
    t31 = (1U + 1U);
    t32 = (2U != t31);
    if (t32 == 1)
        goto LAB7;

LAB8:    t33 = (t0 + 6968);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t28, 2U);
    xsi_driver_first_trans_fast(t33);
    goto LAB4;

LAB6:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t7 = (31 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t5 = (t2 + t13);
    t4 = *((unsigned char *)t5);
    t6 = (t0 + 1832U);
    t14 = *((char **)t6);
    t19 = (31 - 3);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t6 = (t14 + t21);
    t22 = (0 - 1);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t17 = (t6 + t25);
    t15 = *((unsigned char *)t17);
    t16 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t15);
    t26 = ((IEEE_P_2592010699) + 4024);
    t18 = xsi_base_array_concat(t18, t29, t26, (char)99, t4, (char)99, t16, (char)101);
    t31 = (1U + 1U);
    t27 = (2U != t31);
    if (t27 == 1)
        goto LAB9;

LAB10:    t28 = (t0 + 6968);
    t30 = (t28 + 56U);
    t33 = *((char **)t30);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t18, 2U);
    xsi_driver_first_trans_fast(t28);
    goto LAB4;

LAB7:    xsi_size_not_matching(2U, t31, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(2U, t31, 0);
    goto LAB10;

LAB11:    t3 = (t0 + 6680);
    *((int *)t3) = 0;
    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}

static void work_a_4155697742_3212880686_p_3(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    static char *nl0[] = {&&LAB6, &&LAB6, &&LAB5, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6, &&LAB6};

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(98, ng0);

LAB11:    t2 = (t0 + 6696);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(99, ng0);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t8 = (31 - 3);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    t11 = (t0 + 10436U);
    t12 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t5, t6, t11);
    t13 = (t5 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (2U != t15);
    if (t16 == 1)
        goto LAB7;

LAB8:    t17 = (t0 + 7032);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 2U);
    xsi_driver_first_trans_fast(t17);
    goto LAB4;

LAB6:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t8 = (31 - 3);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t2 = (t3 + t10);
    t6 = (t0 + 7032);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB4;

LAB7:    xsi_size_not_matching(2U, t15, 0);
    goto LAB8;

LAB9:    t3 = (t0 + 6696);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_4155697742_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 10791);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 10793);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 10795);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 127);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7096);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(102, ng0);

LAB15:    t2 = (t0 + 6712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(103, ng0);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t14 = (127 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 7096);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 32U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB4;

LAB6:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 63);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7096);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 95);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7096);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 6712);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_4155697742_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 10797);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 10799);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 10801);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 127);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7160);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(108, ng0);

LAB15:    t2 = (t0 + 6728);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(109, ng0);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t14 = (127 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 7160);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 32U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB4;

LAB6:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 63);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7160);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 95);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7160);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 6728);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_4155697742_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 10803);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 10805);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 10807);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 127);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(114, ng0);

LAB15:    t2 = (t0 + 6744);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(115, ng0);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t14 = (127 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 7224);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 32U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB4;

LAB6:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 63);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 95);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7224);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 6744);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}

static void work_a_4155697742_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 10809);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 10811);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 10813);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 127);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7288);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(120, ng0);

LAB15:    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(121, ng0);
    t12 = (t0 + 1352U);
    t13 = *((char **)t12);
    t14 = (127 - 31);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t17 = (t0 + 7288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 32U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB4;

LAB6:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 63);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7288);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t14 = (127 - 95);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t4 = (t0 + 7288);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 32U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:;
LAB13:    t3 = (t0 + 6760);
    *((int *)t3) = 0;
    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}


extern void work_a_4155697742_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4155697742_3212880686_p_0,(void *)work_a_4155697742_3212880686_p_1,(void *)work_a_4155697742_3212880686_p_2,(void *)work_a_4155697742_3212880686_p_3,(void *)work_a_4155697742_3212880686_p_4,(void *)work_a_4155697742_3212880686_p_5,(void *)work_a_4155697742_3212880686_p_6,(void *)work_a_4155697742_3212880686_p_7};
	xsi_register_didat("work_a_4155697742_3212880686", "isim/xxtea_encrypt_tb_isim_beh.exe.sim/work/a_4155697742_3212880686.didat");
	xsi_register_executes(pe);
}
