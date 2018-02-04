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
static const char *ng0 = "C:/Users/HP/Desktop/University/Academics/Capstone/XXTEA/XXTEA/mx_add.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_3830039543_3212880686_p_0(char *t0)
{
    char t1[16];
    char t10[16];
    char t12[16];
    char t17[16];
    char t26[16];
    char t28[16];
    char t33[16];
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t18;
    int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t2 = (t0 + 10464);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = (31 - 31);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 4;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (4 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t17 + 0U);
    t18 = (t14 + 0U);
    *((int *)t18) = 31;
    t18 = (t14 + 4U);
    *((int *)t18) = 5;
    t18 = (t14 + 8U);
    *((int *)t18) = -1;
    t19 = (5 - 31);
    t16 = (t19 * -1);
    t16 = (t16 + 1);
    t18 = (t14 + 12U);
    *((unsigned int *)t18) = t16;
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t4, t17, (char)101);
    t18 = (t0 + 1192U);
    t20 = *((char **)t18);
    t16 = (31 - 29);
    t21 = (t16 * 1U);
    t22 = (0 + t21);
    t18 = (t20 + t22);
    t23 = (t0 + 10469);
    t27 = ((IEEE_P_2592010699) + 4024);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 29;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 29);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 1;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (1 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t34 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t9, t10, t25, t26);
    t36 = (t1 + 12U);
    t32 = *((unsigned int *)t36);
    t37 = (1U * t32);
    t38 = (32U != t37);
    if (t38 == 1)
        goto LAB5;

LAB6:    t39 = (t0 + 6360);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t34, 32U);
    xsi_driver_first_trans_fast(t39);

LAB2:    t44 = (t0 + 6168);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t37, 0);
    goto LAB6;

}

static void work_a_3830039543_3212880686_p_1(char *t0)
{
    char t1[16];
    char t10[16];
    char t12[16];
    char t17[16];
    char t26[16];
    char t28[16];
    char t33[16];
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t18;
    int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t34;
    int t35;
    char *t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t2 = (t0 + 10471);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = (31 - 31);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 2;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (2 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t17 + 0U);
    t18 = (t14 + 0U);
    *((int *)t18) = 31;
    t18 = (t14 + 4U);
    *((int *)t18) = 3;
    t18 = (t14 + 8U);
    *((int *)t18) = -1;
    t19 = (3 - 31);
    t16 = (t19 * -1);
    t16 = (t16 + 1);
    t18 = (t14 + 12U);
    *((unsigned int *)t18) = t16;
    t9 = xsi_base_array_concat(t9, t10, t11, (char)97, t2, t12, (char)97, t4, t17, (char)101);
    t18 = (t0 + 1032U);
    t20 = *((char **)t18);
    t16 = (31 - 27);
    t21 = (t16 * 1U);
    t22 = (0 + t21);
    t18 = (t20 + t22);
    t23 = (t0 + 10474);
    t27 = ((IEEE_P_2592010699) + 4024);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 27;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 27);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t30 = (t33 + 0U);
    t34 = (t30 + 0U);
    *((int *)t34) = 0;
    t34 = (t30 + 4U);
    *((int *)t34) = 3;
    t34 = (t30 + 8U);
    *((int *)t34) = 1;
    t35 = (3 - 0);
    t32 = (t35 * 1);
    t32 = (t32 + 1);
    t34 = (t30 + 12U);
    *((unsigned int *)t34) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t18, t28, (char)97, t23, t33, (char)101);
    t34 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t9, t10, t25, t26);
    t36 = (t1 + 12U);
    t32 = *((unsigned int *)t36);
    t37 = (1U * t32);
    t38 = (32U != t37);
    if (t38 == 1)
        goto LAB5;

LAB6:    t39 = (t0 + 6424);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t34, 32U);
    xsi_driver_first_trans_fast(t39);

LAB2:    t44 = (t0 + 6184);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t37, 0);
    goto LAB6;

}

static void work_a_3830039543_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 9912U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 9880U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6488);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 6200);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_3830039543_3212880686_p_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 9928U);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 9864U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6552);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 6216);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_3830039543_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 9960U);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 9976U);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t0 + 6616);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 32U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 6232);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3830039543_3212880686_p_5(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 9992U);
    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t4 = (t0 + 10008U);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t0 + 6680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 32U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 6248);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3830039543_3212880686_p_6(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 10024U);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t4 = (t0 + 10040U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6744);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 6264);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_3830039543_3212880686_p_7(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(67, ng0);

LAB3:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 9896U);
    t4 = (t0 + 2952U);
    t5 = *((char **)t4);
    t4 = (t0 + 10056U);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t0 + 6808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 6280);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3830039543_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3830039543_3212880686_p_0,(void *)work_a_3830039543_3212880686_p_1,(void *)work_a_3830039543_3212880686_p_2,(void *)work_a_3830039543_3212880686_p_3,(void *)work_a_3830039543_3212880686_p_4,(void *)work_a_3830039543_3212880686_p_5,(void *)work_a_3830039543_3212880686_p_6,(void *)work_a_3830039543_3212880686_p_7};
	xsi_register_didat("work_a_3830039543_3212880686", "isim/xxtea_encrypt_tb_isim_beh.exe.sim/work/a_3830039543_3212880686.didat");
	xsi_register_executes(pe);
}
