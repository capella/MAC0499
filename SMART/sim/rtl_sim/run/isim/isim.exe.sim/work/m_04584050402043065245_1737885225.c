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
static const char *ng0 = "/home/ise/TCC/SMART/sim/rtl_sim/run/stimulus.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static int ng4[] = {8, 0};
static int ng5[] = {1, 0};
static const char *ng6 = "%s";
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {10, 0};
static const char *ng10 = "/home/ise/TCC/SMART/bench/verilog/tb_openMSP430_fpga.v";
static const char *ng11 = "ERROR: %s %t";
static const char *ng12 = "/home/ise/TCC/SMART/bench/verilog/registers.v";
static int ng13[] = {12, 0};
static int ng14[] = {4, 0};
static int ng15[] = {5, 0};
static int ng16[] = {6, 0};
static int ng17[] = {7, 0};
static int ng18[] = {9, 0};
static int ng19[] = {11, 0};
static int ng20[] = {13, 0};
static int ng21[] = {14, 0};
static int ng22[] = {15, 0};
static int ng23[] = {16, 0};
static const char *ng24 = "================= START SIMULATION ==============";
static int ng25[] = {500, 0};
static int ng26[] = {66, 0};
static int ng27[] = {111, 0};
static int ng28[] = {110, 0};
static int ng29[] = {106, 0};
static int ng30[] = {117, 0};
static int ng31[] = {114, 0};
static int ng32[] = {32, 0};
static int ng33[] = {58, 0};
static int ng34[] = {45, 0};
static int ng35[] = {41, 0};
static int ng36[] = {2000, 0};
static const char *ng37 = "================== END SIMULATION ===============";
static const char *ng38 = "%h %h SAFE (%h < %h)";
static int ng39[] = {65536, 0};
static int ng40[] = {8192, 0};
static int ng41[] = {3952, 0};
static int ng42[] = {4079, 0};
static const char *ng43 = "tb_openMSP430_fpga.vcd";
static const char *ng44 = " ===============================================";
static const char *ng45 = "|               SIMULATION FAILED               |";
static const char *ng46 = "|              (simulation Timeout)             |";
static const char *ng47 = "|     (some verilog stimulus checks failed)     |";
static const char *ng48 = "|     (the verilog stimulus didn't complete)    |";
static const char *ng49 = "|               SIMULATION PASSED               |";
static unsigned int ng50[] = {65535U, 0U};



static int sp_uart_rx(char *t1, char *t2)
{
    char t8[8];
    char t10[8];
    char t20[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    double t11;
    double t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(20, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 14560);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(21, ng0);
    t4 = (t1 + 14400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t7, 32);
    t9 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_divide(t10, 32, t8, 32, t9, 32);
    t11 = xsi_vlog_convert_to_real(t10, 32, 1);
    t11 = (t11 * 10.000000000000000);
    t12 = (t11 < 0.0000000000000000);
    if (t12 == 1)
        goto LAB7;

LAB8:    t11 = (t11 + 0.50000000000000000);
    t11 = ((int64)(t11));

LAB9:    t11 = (t11 * 100.00000000000000);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_process_wait(t14, t11);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB7:    t11 = 0.0000000000000000;
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);
    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 14720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB11:    t4 = (t1 + 14720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(27, ng0);
    t4 = (t1 + 14560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 984);
    xsi_vlogfile_write(0, 0, 1, ng6, 2, t7, (char)118, t6, 8);
    xsi_set_current_line(28, ng0);
    xsi_vlogfile_fflush(1, 0);
    goto LAB4;

LAB12:    xsi_set_current_line(23, ng0);

LAB14:    xsi_set_current_line(24, ng0);
    t13 = (t1 + 14560);
    t14 = (t13 + 56U);
    t21 = *((char **)t14);
    memset(t20, 0, 8);
    t22 = (t20 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 1);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 1);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 127U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 127U);
    t30 = (t1 + 3760U);
    t31 = *((char **)t30);
    xsi_vlogtype_concat(t10, 8, 8, 2U, t31, 1, t20, 7);
    t30 = (t1 + 14560);
    xsi_vlogvar_assign_value(t30, t10, 0, 0, 8);
    xsi_set_current_line(25, ng0);
    t4 = (t1 + 14400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = xsi_vlog_convert_to_real(t6, 32, 1);
    t11 = (t11 * 10.000000000000000);
    t12 = (t11 < 0.0000000000000000);
    if (t12 == 1)
        goto LAB15;

LAB16:    t11 = (t11 + 0.50000000000000000);
    t11 = ((int64)(t11));

LAB17:    t11 = (t11 * 100.00000000000000);
    t7 = (t2 + 56U);
    t9 = *((char **)t7);
    xsi_process_wait(t9, t11);
    *((char **)t3) = &&LAB18;
    t0 = 1;
    goto LAB1;

LAB15:    t11 = 0.0000000000000000;
    goto LAB17;

LAB18:    xsi_set_current_line(22, ng0);
    t4 = (t1 + 14720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 14720);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB11;

}

static int sp_uart_tx(char *t1, char *t2)
{
    char t7[8];
    char t20[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    double t11;
    double t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1416);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t1 + 13600);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 14880);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng7)));
    xsi_vlogtype_concat(t7, 10, 10, 3U, t9, 1, t8, 8, t4, 1);
    t10 = (t1 + 15040);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 10);
    xsi_set_current_line(40, ng0);
    t4 = (t1 + 14400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = xsi_vlog_convert_to_real(t6, 32, 1);
    t11 = (t11 * 10.000000000000000);
    t12 = (t11 < 0.0000000000000000);
    if (t12 == 1)
        goto LAB6;

LAB7:    t11 = (t11 + 0.50000000000000000);
    t11 = ((int64)(t11));

LAB8:    t11 = (t11 * 100.00000000000000);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_process_wait(t9, t11);
    *((char **)t3) = &&LAB9;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    t11 = 0.0000000000000000;
    goto LAB8;

LAB9:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 15200);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB10:    t4 = (t1 + 15200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng9)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t8, 32);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    goto LAB4;

LAB11:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t10 = (t1 + 15040);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 15040);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 15200);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_index_select_value(t20, 1, t19, t23, 2, t26, 32, 1);
    t27 = (t1 + 13600);
    xsi_vlogvar_assign_value(t27, t20, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t4 = (t1 + 14400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = xsi_vlog_convert_to_real(t6, 32, 1);
    t11 = (t11 * 10.000000000000000);
    t12 = (t11 < 0.0000000000000000);
    if (t12 == 1)
        goto LAB14;

LAB15:    t11 = (t11 + 0.50000000000000000);
    t11 = ((int64)(t11));

LAB16:    t11 = (t11 * 100.00000000000000);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    xsi_process_wait(t9, t11);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB14:    t11 = 0.0000000000000000;
    goto LAB16;

LAB17:    xsi_set_current_line(41, ng0);
    t4 = (t1 + 15200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 15200);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB10;

}

static int sp_tb_error(char *t1, char *t2)
{
    char t8[16];
    char t11[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(297, ng10);

LAB5:    xsi_set_current_line(298, ng10);
    t5 = (t1 + 15520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = xsi_vlog_time(t8, 1000.0000000000000, 10.000000000000000);
    t10 = (t1 + 1848);
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t10, (char)118, t7, 521, (char)118, t8, 64);
    xsi_set_current_line(299, ng10);
    t4 = (t1 + 13920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t6, 32, t7, 32);
    t9 = (t1 + 13920);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static void NetDecl_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng12);
    t2 = (t0 + 37496);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 29456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 15U);
    t18 = (t0 + 28656);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_44_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 16680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng12);
    t2 = (t0 + 37560);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28672);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_45_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 16928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng12);
    t2 = (t0 + 37624);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29584);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28688);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_46_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng12);
    t2 = (t0 + 37688);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28704);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_47_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng12);
    t2 = (t0 + 37752);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29712);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28720);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_48_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng12);
    t2 = (t0 + 37816);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29776);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28736);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_49_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng12);
    t2 = (t0 + 37880);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29840);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28752);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_50_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 18168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng12);
    t2 = (t0 + 37944);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28768);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_51_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 18416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng12);
    t2 = (t0 + 38008);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 29968);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28784);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_52_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 18664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng12);
    t2 = (t0 + 38072);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30032);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28800);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_53_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 18912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng12);
    t2 = (t0 + 38136);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28816);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_54_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 19160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng12);
    t2 = (t0 + 38200);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28832);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_55_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 19408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng12);
    t2 = (t0 + 38264);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30224);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28848);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_56_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 19656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng12);
    t2 = (t0 + 38328);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30288);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28864);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_57_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 19904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng12);
    t2 = (t0 + 38392);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30352);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28880);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_58_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 20152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng12);
    t2 = (t0 + 38456);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 30416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 65535U;
    t12 = t11;
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t6, 0, 15U);
    t19 = (t0 + 28896);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_136_16(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 20400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30480);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 28912);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_137_17(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 20648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30544);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 28928);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_138_18(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 20896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30608);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 28944);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_139_19(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 21144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng14)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30672);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 28960);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_140_20(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 21392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng15)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30736);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 28976);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_141_21(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 21640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng16)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30800);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 28992);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_142_22(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 21888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng17)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30864);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29008);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_143_23(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 22136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30928);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29024);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_144_24(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 22384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng18)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 30992);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29040);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_145_25(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 22632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng9)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31056);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29056);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_146_26(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 22880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng19)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31120);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29072);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_147_27(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 23128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng13)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31184);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29088);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_148_28(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 23376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(148, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng20)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29104);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_149_29(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 23624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng21)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31312);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29120);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_150_30(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 23872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng22)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31376);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29136);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_151_31(char *t0)
{
    char t5[8];
    char t15[8];
    char t17[8];
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 24120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng12);
    t2 = (t0 + 14240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14240);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 14240);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng13)));
    t14 = ((char*)((ng5)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    memset(t18, 0, 8);
    xsi_vlog_signed_lshift(t18, 32, t12, 32, t17, 32);
    t19 = ((char*)((ng23)));
    memset(t20, 0, 8);
    xsi_vlog_signed_minus(t20, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t20, 32, 1);
    t21 = (t0 + 31440);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 65535U;
    t27 = t26;
    t28 = (t5 + 4);
    t29 = *((unsigned int *)t5);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 15U);
    t34 = (t0 + 29152);
    *((int *)t34) = 1;

LAB1:    return;
}

static void NetDecl_155_32(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 24368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng12);
    t2 = (t0 + 38504);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31504);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29168);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_156_33(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 24616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng12);
    t2 = (t0 + 38552);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31568);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29184);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_159_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 24864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng12);
    t2 = (t0 + 38584);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31632);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29200);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_160_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 25112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng12);
    t2 = (t0 + 38632);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31696);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29216);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_161_36(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 25360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng12);
    t2 = (t0 + 38680);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31760);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29232);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_167_37(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 25608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(167, ng12);
    t2 = (t0 + 38712);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31824);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29248);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_168_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 25856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(168, ng12);
    t2 = (t0 + 38752);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 31888);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 29264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_49_39(char *t0)
{
    char *t1;
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
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 26104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);

LAB4:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 25912);
    t3 = (t0 + 984);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 26008);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 26008);
    t15 = *((char **)t14);
    t14 = (t0 + 984);
    t16 = (t0 + 25912);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB4;

LAB8:;
LAB10:    t5 = (t0 + 26104U);
    *((char **)t5) = &&LAB7;

LAB1:    return;
LAB11:    goto LAB1;

}

static void Initial_52_40(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 26352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 38760);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 38760);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 13600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 12800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 12960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 38764);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 38764);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB15:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB17:    if (t7 != 0)
        goto LAB18;

LAB13:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB14:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB21:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB23:    if (t7 != 0)
        goto LAB24;

LAB19:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB20:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB27:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB29:    if (t7 != 0)
        goto LAB30;

LAB25:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB26:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB33:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB35:    if (t7 != 0)
        goto LAB36;

LAB31:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB32:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB39:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB41:    if (t7 != 0)
        goto LAB42;

LAB37:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB38:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB45:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB47:    if (t7 != 0)
        goto LAB48;

LAB43:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB44:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB51:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB53:    if (t7 != 0)
        goto LAB54;

LAB49:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB50:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB57:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB59:    if (t7 != 0)
        goto LAB60;

LAB55:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB56:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB63:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB65:    if (t7 != 0)
        goto LAB66;

LAB61:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB62:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB69:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB71:    if (t7 != 0)
        goto LAB72;

LAB67:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB68:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB75:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB77:    if (t7 != 0)
        goto LAB78;

LAB73:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB74:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 26160);
    t8 = (t0 + 1416);
    t9 = xsi_create_subprogram_invocation(t3, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 14880);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 8);

LAB81:    t11 = (t0 + 26256);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t7 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB83:    if (t7 != 0)
        goto LAB84;

LAB79:    t12 = (t0 + 1416);
    xsi_vlog_subprogram_popinvocation(t12);

LAB80:    t19 = (t0 + 26256);
    t20 = *((char **)t19);
    t19 = (t0 + 1416);
    t21 = (t0 + 26160);
    t22 = 0;
    xsi_delete_subprogram_invocation(t19, t20, t0, t21, t22);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 38768);
    *((int *)t8) = t7;

LAB85:    t9 = (t0 + 38768);
    if (*((int *)t9) > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    xsi_set_current_line(83, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(54, ng0);
    t10 = (t0 + 29296);
    *((int *)t10) = 1;
    t11 = (t0 + 26384);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 38760);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(65, ng0);
    t10 = (t0 + 29312);
    *((int *)t10) = 1;
    t11 = (t0 + 26384);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 38764);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

LAB16:;
LAB18:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB39;
    goto LAB1;

LAB46:;
LAB48:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB45;
    goto LAB1;

LAB52:;
LAB54:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB51;
    goto LAB1;

LAB58:;
LAB60:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB57;
    goto LAB1;

LAB64:;
LAB66:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB63;
    goto LAB1;

LAB70:;
LAB72:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB69;
    goto LAB1;

LAB76:;
LAB78:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB75;
    goto LAB1;

LAB82:;
LAB84:    t11 = (t0 + 26352U);
    *((char **)t11) = &&LAB81;
    goto LAB1;

LAB86:    xsi_set_current_line(80, ng0);
    t10 = (t0 + 29328);
    *((int *)t10) = 1;
    t11 = (t0 + 26384);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB88:    t2 = (t0 + 38768);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB85;

}

static void Always_91_41(char *t0)
{
    char t11[8];
    char t13[8];
    char t15[8];
    char t18[8];
    char t20[8];
    char t22[8];
    char t25[8];
    char t27[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    char *t26;
    char *t28;

LAB0:    t1 = (t0 + 26600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 29344);
    *((int *)t2) = 1;
    t3 = (t0 + 26632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 38800);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 40U);
    t7 = *((char **)t6);
    t6 = (t0 + 38832);
    t8 = *((char **)t6);
    t9 = ((((char*)(t8))) + 40U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t10, 12, t9, 32);
    t12 = ((char*)((ng39)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 32, t12, 32);
    t14 = ((char*)((ng40)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng41)));
    t17 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_signed_multiply(t18, 32, t16, 32, t17, 32);
    t19 = ((char*)((ng39)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t18, 32, t19, 32);
    t21 = ((char*)((ng40)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t20, 32, t21, 32);
    t23 = ((char*)((ng42)));
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t23, 32, t24, 32);
    t26 = ((char*)((ng39)));
    memset(t27, 0, 8);
    xsi_vlog_signed_add(t27, 32, t25, 32, t26, 32);
    t28 = ((char*)((ng40)));
    memset(t29, 0, 8);
    xsi_vlog_signed_minus(t29, 32, t27, 32, t28, 32);
    xsi_vlogfile_write(1, 0, 0, ng38, 5, t0, (char)118, t7, 16, (char)118, t15, 32, (char)119, t22, 32, (char)119, t29, 32);
    goto LAB2;

}

static void Initial_127_42(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 26848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng10);

LAB4:    xsi_set_current_line(129, ng10);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 11520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(130, ng10);

LAB5:    xsi_set_current_line(130, ng10);
    t2 = (t0 + 26656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(130, ng10);
    t3 = (t0 + 11520);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 11520);
    xsi_vlogvar_wait_assign_value(t24, t4, 0, 0, 1, 0LL);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_133_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 27096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng10);

LAB4:    xsi_set_current_line(135, ng10);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 11680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng10);
    t2 = (t0 + 26904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(136, ng10);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 11680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(137, ng10);
    t2 = (t0 + 26904);
    xsi_process_wait(t2, 600000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(137, ng10);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 11680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_143_44(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(144, ng10);

LAB2:    xsi_set_current_line(145, ng10);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 13920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(146, ng10);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 14080);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(147, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 11840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(148, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(149, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(150, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(151, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12480);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(152, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12640);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(153, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12800);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(154, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 12960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(155, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 13120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(156, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 13280);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(157, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 13440);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(158, ng10);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 13600);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_226_45(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(227, ng10);

LAB2:    xsi_set_current_line(236, ng10);
    xsi_vcd_dumpfile(ng43);
    xsi_set_current_line(237, ng10);
    t1 = ((char*)((ng1)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}

static void Initial_246_46(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 27840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(247, ng10);

LAB4:    xsi_set_current_line(251, ng10);
    t2 = (t0 + 27648);
    xsi_process_wait(t2, 500000000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(259, ng10);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    xsi_set_current_line(260, ng10);
    xsi_vlogfile_write(1, 0, 0, ng45, 1, t0);
    xsi_set_current_line(261, ng10);
    xsi_vlogfile_write(1, 0, 0, ng46, 1, t0);
    xsi_set_current_line(262, ng10);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    xsi_set_current_line(263, ng10);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_267_47(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 28088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(268, ng10);

LAB4:    xsi_set_current_line(269, ng10);
    t2 = (t0 + 27896);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(270, ng10);
    t3 = (t0 + 29360);
    *((int *)t3) = 1;
    t4 = (t0 + 28120);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(271, ng10);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    xsi_set_current_line(272, ng10);
    t2 = (t0 + 13920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_not_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(277, ng10);
    t2 = (t0 + 14080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB14:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB16;

LAB15:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(283, ng10);

LAB21:    xsi_set_current_line(284, ng10);
    xsi_vlogfile_write(1, 0, 0, ng49, 1, t0);

LAB19:
LAB9:    xsi_set_current_line(286, ng10);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    xsi_set_current_line(287, ng10);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(273, ng10);

LAB10:    xsi_set_current_line(274, ng10);
    xsi_vlogfile_write(1, 0, 0, ng45, 1, t0);
    xsi_set_current_line(275, ng10);
    xsi_vlogfile_write(1, 0, 0, ng47, 1, t0);
    goto LAB9;

LAB11:    *((unsigned int *)t6) = 1;
    goto LAB14;

LAB16:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB15;

LAB17:    xsi_set_current_line(278, ng10);

LAB20:    xsi_set_current_line(279, ng10);
    xsi_vlogfile_write(1, 0, 0, ng45, 1, t0);
    xsi_set_current_line(280, ng10);
    xsi_vlogfile_write(1, 0, 0, ng48, 1, t0);
    goto LAB19;

}

static void impl1_execute(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 28336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 29376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 15360);
    t4 = (t0 + 4720U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng50)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB7;

LAB5:    t7 = (t5 + 4);
    t8 = (t4 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB7:    xsi_vlogimplicitvar_assign_value(t3, t6, 1);
    goto LAB2;

}


extern void work_m_04584050402043065245_1737885225_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)NetDecl_44_1,(void *)NetDecl_45_2,(void *)NetDecl_46_3,(void *)NetDecl_47_4,(void *)NetDecl_48_5,(void *)NetDecl_49_6,(void *)NetDecl_50_7,(void *)NetDecl_51_8,(void *)NetDecl_52_9,(void *)NetDecl_53_10,(void *)NetDecl_54_11,(void *)NetDecl_55_12,(void *)NetDecl_56_13,(void *)NetDecl_57_14,(void *)NetDecl_58_15,(void *)NetDecl_136_16,(void *)NetDecl_137_17,(void *)NetDecl_138_18,(void *)NetDecl_139_19,(void *)NetDecl_140_20,(void *)NetDecl_141_21,(void *)NetDecl_142_22,(void *)NetDecl_143_23,(void *)NetDecl_144_24,(void *)NetDecl_145_25,(void *)NetDecl_146_26,(void *)NetDecl_147_27,(void *)NetDecl_148_28,(void *)NetDecl_149_29,(void *)NetDecl_150_30,(void *)NetDecl_151_31,(void *)NetDecl_155_32,(void *)NetDecl_156_33,(void *)NetDecl_159_34,(void *)NetDecl_160_35,(void *)NetDecl_161_36,(void *)NetDecl_167_37,(void *)NetDecl_168_38,(void *)Initial_49_39,(void *)Initial_52_40,(void *)Always_91_41,(void *)Initial_127_42,(void *)Initial_133_43,(void *)Initial_143_44,(void *)Initial_226_45,(void *)Initial_246_46,(void *)Initial_267_47,(void *)impl1_execute};
	static char *se[] = {(void *)sp_uart_rx,(void *)sp_uart_tx,(void *)sp_tb_error};
	xsi_register_didat("work_m_04584050402043065245_1737885225", "isim/isim.exe.sim/work/m_04584050402043065245_1737885225.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
