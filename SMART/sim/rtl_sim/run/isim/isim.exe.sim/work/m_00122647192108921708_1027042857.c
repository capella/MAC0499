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
static const char *ng0 = "/home/ise/TCC/SMART/rtl/verilog/io_mux.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static int sp_mux(char *t1, char *t2)
{
    char t8[8];
    char t14[8];
    char t15[8];
    char t18[8];
    char t38[8];
    char t52[8];
    char t60[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    int t69;

LAB0:    t0 = 1;
    xsi_set_current_line(97, ng0);

LAB2:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 3936);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 4096);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 4096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 472);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(100, ng0);
    t16 = (t1 + 3056U);
    t17 = *((char **)t16);
    t16 = (t1 + 3016U);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 4096);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t18, 1, t17, t20, 2, t23, 32, 1);
    memset(t15, 0, 8);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t18);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t24) != 0)
        goto LAB8;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB10;

LAB11:    t45 = *((unsigned int *)t15);
    t46 = (~(t45));
    t47 = *((unsigned int *)t31);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t31) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t15) > 0)
        goto LAB16;

LAB17:    memcpy(t14, t52, 8);

LAB18:    t59 = (t1 + 3936);
    t61 = (t1 + 3936);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t1 + 4096);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    xsi_vlog_generic_convert_bit_index(t60, t63, 2, t66, 32, 1);
    t67 = (t60 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (!(t68));
    if (t69 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(99, ng0);
    t3 = (t1 + 4096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 4096);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB3;

LAB6:    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    t35 = (t1 + 3616);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t39 = (t1 + 3616);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t1 + 4096);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_index_select_value(t38, 1, t37, t41, 2, t44, 32, 1);
    goto LAB11;

LAB12:    t49 = (t1 + 3456);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t53 = (t1 + 3456);
    t54 = (t53 + 72U);
    t55 = *((char **)t54);
    t56 = (t1 + 4096);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_generic_get_index_select_value(t52, 1, t51, t55, 2, t58, 32, 1);
    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t14, 1, t38, 1, t52, 1);
    goto LAB18;

LAB16:    memcpy(t14, t38, 8);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t59, t14, 0, *((unsigned int *)t60), 1);
    goto LAB20;

}

static void Cont_105_0(char *t0)
{
    char t23[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2576U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3056U);
    t5 = *((char **)t4);
    t4 = (t0 + 4816);
    t6 = (t0 + 984);
    t7 = xsi_create_subprogram_invocation(t4, 0, t0, t6, 0, 0);
    t8 = (t0 + 3456);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);
    t9 = (t0 + 3616);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3776);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB4:    t11 = (t0 + 4912);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 4912);
    t20 = *((char **)t12);
    t12 = (t0 + 3936);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 984);
    t25 = (t0 + 4816);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 6200);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 255U;
    t33 = t32;
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 7);
    t40 = (t0 + 6072);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 5008U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}

static void Cont_106_1(char *t0)
{
    char t23[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2576U);
    t4 = *((char **)t3);
    t3 = (t0 + 3056U);
    t5 = *((char **)t3);
    t3 = (t0 + 5064);
    t6 = (t0 + 984);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    t8 = (t0 + 3456);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 8);
    t9 = (t0 + 3616);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 3776);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB4:    t11 = (t0 + 5160);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 5160);
    t20 = *((char **)t12);
    t12 = (t0 + 3936);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 984);
    t25 = (t0 + 5064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 6264);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 255U;
    t33 = t32;
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 7);
    t40 = (t0 + 6088);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 5256U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}

static void Cont_107_2(char *t0)
{
    char t23[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 5504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = (t0 + 3056U);
    t5 = *((char **)t2);
    t2 = (t0 + 5312);
    t6 = (t0 + 984);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 3456);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);
    t9 = (t0 + 3616);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 3776);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB4:    t11 = (t0 + 5408);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 5408);
    t20 = *((char **)t12);
    t12 = (t0 + 3936);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 984);
    t25 = (t0 + 5312);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 6328);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 255U;
    t33 = t32;
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 7);
    t40 = (t0 + 6104);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 5504U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}

static void Cont_108_3(char *t0)
{
    char t23[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t2 = (t0 + 3056U);
    t5 = *((char **)t2);
    t2 = (t0 + 5560);
    t6 = (t0 + 984);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 3456);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);
    t9 = (t0 + 3616);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 8);
    t10 = (t0 + 3776);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 8);

LAB4:    t11 = (t0 + 5656);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 5656);
    t20 = *((char **)t12);
    t12 = (t0 + 3936);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 984);
    t25 = (t0 + 5560);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 6392);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 255U;
    t33 = t32;
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 7);
    t40 = (t0 + 6120);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 5752U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}


extern void work_m_00122647192108921708_1027042857_init()
{
	static char *pe[] = {(void *)Cont_105_0,(void *)Cont_106_1,(void *)Cont_107_2,(void *)Cont_108_3};
	static char *se[] = {(void *)sp_mux};
	xsi_register_didat("work_m_00122647192108921708_1027042857", "isim/isim.exe.sim/work/m_00122647192108921708_1027042857.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
