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
static const char *ng0 = "C:/Users/HP/Desktop/University/Academics/Capstone/XXTEA/XXTEA/mx.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2506585928_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 6536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 128U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6440);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2506585928_3212880686_p_1(char *t0)
{
    char t13[16];
    char t16[16];
    char t28[16];
    char t29[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6456);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 4232U);
    t7 = *((char **)t3);
    t3 = (t0 + 1352U);
    t8 = *((char **)t3);
    t9 = (127 - 95);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t3 = (t8 + t11);
    t14 = ((IEEE_P_2592010699) + 4024);
    t15 = (t0 + 11028U);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 95;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 95);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t12 = xsi_base_array_concat(t12, t13, t14, (char)97, t7, t15, (char)97, t3, t16, (char)101);
    t20 = (32U + 96U);
    t21 = (128U != t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    t18 = (t0 + 6600);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t12, 128U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t9 = (127 - 127);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t0 + 4392U);
    t7 = *((char **)t4);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t16 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 127;
    t14 = (t12 + 4U);
    *((int *)t14) = 96;
    t14 = (t12 + 8U);
    *((int *)t14) = -1;
    t19 = (96 - 127);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t20;
    t14 = (t0 + 11044U);
    t4 = xsi_base_array_concat(t4, t13, t8, (char)97, t1, t16, (char)97, t7, t14, (char)101);
    t15 = (t0 + 3592U);
    t17 = *((char **)t15);
    t20 = (127 - 63);
    t26 = (t20 * 1U);
    t27 = (0 + t26);
    t15 = (t17 + t27);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t29 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 63;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t30 = (0 - 63);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t31;
    t18 = xsi_base_array_concat(t18, t28, t22, (char)97, t4, t13, (char)97, t15, t29, (char)101);
    t31 = (32U + 32U);
    t32 = (t31 + 64U);
    t2 = (128U != t32);
    if (t2 == 1)
        goto LAB10;

LAB11:    t24 = (t0 + 6664);
    t25 = (t24 + 56U);
    t33 = *((char **)t25);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t18, 128U);
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t9 = (127 - 127);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t0 + 4552U);
    t7 = *((char **)t4);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t16 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 127;
    t14 = (t12 + 4U);
    *((int *)t14) = 64;
    t14 = (t12 + 8U);
    *((int *)t14) = -1;
    t19 = (64 - 127);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t20;
    t14 = (t0 + 11060U);
    t4 = xsi_base_array_concat(t4, t13, t8, (char)97, t1, t16, (char)97, t7, t14, (char)101);
    t15 = (t0 + 3752U);
    t17 = *((char **)t15);
    t20 = (127 - 31);
    t26 = (t20 * 1U);
    t27 = (0 + t26);
    t15 = (t17 + t27);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t29 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 31;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t30 = (0 - 31);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t31;
    t18 = xsi_base_array_concat(t18, t28, t22, (char)97, t4, t13, (char)97, t15, t29, (char)101);
    t31 = (64U + 32U);
    t32 = (t31 + 32U);
    t2 = (128U != t32);
    if (t2 == 1)
        goto LAB12;

LAB13:    t24 = (t0 + 6728);
    t25 = (t24 + 56U);
    t33 = *((char **)t25);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t18, 128U);
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t9 = (127 - 127);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t3 + t11);
    t4 = (t0 + 4712U);
    t7 = *((char **)t4);
    t8 = ((IEEE_P_2592010699) + 4024);
    t12 = (t16 + 0U);
    t14 = (t12 + 0U);
    *((int *)t14) = 127;
    t14 = (t12 + 4U);
    *((int *)t14) = 32;
    t14 = (t12 + 8U);
    *((int *)t14) = -1;
    t19 = (32 - 127);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t14 = (t12 + 12U);
    *((unsigned int *)t14) = t20;
    t14 = (t0 + 11076U);
    t4 = xsi_base_array_concat(t4, t13, t8, (char)97, t1, t16, (char)97, t7, t14, (char)101);
    t20 = (96U + 32U);
    t2 = (128U != t20);
    if (t2 == 1)
        goto LAB14;

LAB15:    t15 = (t0 + 6792);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t4, 128U);
    xsi_driver_first_trans_fast(t15);
    goto LAB6;

LAB8:    xsi_size_not_matching(128U, t20, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(128U, t32, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(128U, t32, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(128U, t20, 0);
    goto LAB15;

}


extern void work_a_2506585928_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2506585928_3212880686_p_0,(void *)work_a_2506585928_3212880686_p_1};
	xsi_register_didat("work_a_2506585928_3212880686", "isim/xxtea_encrypt_tb_isim_beh.exe.sim/work/a_2506585928_3212880686.didat");
	xsi_register_executes(pe);
}
