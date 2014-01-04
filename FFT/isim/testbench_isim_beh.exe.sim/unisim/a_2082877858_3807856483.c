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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *UNISIM_P_3222816464;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
int unisim_p_3222816464_sub_1852110656102734653_279109243(char *, char *, char *);


static void unisim_a_2082877858_3807856483_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t7;
    t2 = (t2 + 1U);
    t3 = (t0 + 1672U);
    t8 = *((char **)t3);
    t9 = *((unsigned char *)t8);
    *((unsigned char *)t2) = t9;
    t2 = (t2 + 1U);
    t3 = (t0 + 1512U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    *((unsigned char *)t2) = t11;
    t2 = (t2 + 1U);
    t3 = (t0 + 1352U);
    t12 = *((char **)t3);
    t13 = *((unsigned char *)t12);
    *((unsigned char *)t2) = t13;
    t2 = (t2 + 1U);
    t3 = (t0 + 1192U);
    t14 = *((char **)t3);
    t15 = *((unsigned char *)t14);
    *((unsigned char *)t2) = t15;
    t3 = (t0 + 3168U);
    t16 = *((char **)t3);
    t3 = (t16 + 0);
    memcpy(t3, t1, 6U);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 7816U);
    t17 = unisim_p_3222816464_sub_1852110656102734653_279109243(UNISIM_P_3222816464, t2, t1);
    t3 = (t0 + 3048U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((int *)t3) = t17;
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 3048U);
    t3 = *((char **)t1);
    t17 = *((int *)t3);
    t18 = (t17 - 64);
    t19 = (t18 * -1);
    xsi_vhdl_check_range_of_index(64, 0, -1, t17);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t5 = *((unsigned char *)t1);
    t4 = (t0 + 5048);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t5;
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 4952);
    *((int *)t1) = 1;

LAB1:    return;
}

static void unisim_a_2082877858_3807856483_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    char *t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    char *t21;
    int t22;
    int64 t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 2272U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    t3 = xsi_get_transient_memory(6U);
    memset(t3, 0, 6U);
    t7 = t3;
    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    *((unsigned char *)t7) = t10;
    t7 = (t7 + 1U);
    t8 = (t0 + 1832U);
    t11 = *((char **)t8);
    t12 = *((unsigned char *)t11);
    *((unsigned char *)t7) = t12;
    t7 = (t7 + 1U);
    t8 = (t0 + 1672U);
    t13 = *((char **)t8);
    t14 = *((unsigned char *)t13);
    *((unsigned char *)t7) = t14;
    t7 = (t7 + 1U);
    t8 = (t0 + 1512U);
    t15 = *((char **)t8);
    t16 = *((unsigned char *)t15);
    *((unsigned char *)t7) = t16;
    t7 = (t7 + 1U);
    t8 = (t0 + 1352U);
    t17 = *((char **)t8);
    t18 = *((unsigned char *)t17);
    *((unsigned char *)t7) = t18;
    t7 = (t7 + 1U);
    t8 = (t0 + 1192U);
    t19 = *((char **)t8);
    t20 = *((unsigned char *)t19);
    *((unsigned char *)t7) = t20;
    t8 = (t0 + 3408U);
    t21 = *((char **)t8);
    t8 = (t21 + 0);
    memcpy(t8, t3, 6U);
    t1 = (t0 + 3408U);
    t3 = *((char **)t1);
    t1 = (t0 + 7832U);
    t22 = unisim_p_3222816464_sub_1852110656102734653_279109243(UNISIM_P_3222816464, t3, t1);
    t4 = (t0 + 3288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((int *)t4) = t22;
    t23 = (100 * 1LL);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t22 = *((int *)t4);
    t24 = (t22 - 64);
    t25 = (t24 * -1);
    t26 = (1 * t25);
    t27 = (0U + t26);
    t1 = (t0 + 5112);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_delta(t1, t27, 1, t23);
    t13 = (t0 + 3288U);
    t15 = *((char **)t13);
    t28 = *((int *)t15);
    t29 = (t28 - 64);
    t30 = (t29 * -1);
    t31 = (1 * t30);
    t32 = (0U + t31);
    t13 = (t0 + 5112);
    xsi_driver_intertial_reject(t13, t23, t23);
    goto LAB6;

}


extern void unisim_a_2082877858_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_2082877858_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_2082877858_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_0883067041_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_0883067041_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_0883067041_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_4196644161_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_4196644161_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_4196644161_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_4186041202_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_4186041202_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_4186041202_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_0460829680_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_0460829680_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_0460829680_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_2533872854_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_2533872854_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_2533872854_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_4008827666_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_4008827666_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_4008827666_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_3499343047_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_3499343047_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_3499343047_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_1263670937_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_1263670937_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_1263670937_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_3117740802_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_3117740802_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_3117740802_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_0780269725_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_0780269725_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_0780269725_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_2697825650_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_2697825650_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_2697825650_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_0543228503_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_0543228503_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_0543228503_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_3712692829_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_3712692829_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_3712692829_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_2635145926_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_2635145926_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_2635145926_3807856483.didat");
	xsi_register_executes(pe);
}

extern void unisim_a_3430580998_3807856483_init()
{
	static char *pe[] = {(void *)unisim_a_2082877858_3807856483_p_0,(void *)unisim_a_2082877858_3807856483_p_1};
	xsi_register_didat("unisim_a_3430580998_3807856483", "isim/testbench_isim_beh.exe.sim/unisim/a_3430580998_3807856483.didat");
	xsi_register_executes(pe);
}
