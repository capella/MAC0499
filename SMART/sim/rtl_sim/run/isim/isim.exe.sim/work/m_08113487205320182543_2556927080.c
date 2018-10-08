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
static const char *ng0 = "/home/ise/TCC/SMART/bench/verilog/msp_debug.v";
static int ng1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {8, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {1163150152, 0, 1381064518, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {1146048069, 0, 1230131551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {4474179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng12[] = {3U, 0U};
static int ng13[] = {1163416625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {1163416626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng16[] = {5U, 0U};
static int ng17[] = {1229212741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng18[] = {1482184792, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng19[] = {1381064496, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng20[] = {1381064497, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng21[] = {1381064498, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng22[] = {1381064499, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng23[] = {1381064500, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng24[] = {1130316100, 0, 21330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng25[] = {6U, 0U};
static int ng26[] = {1130320452, 0, 21330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng27[] = {7U, 0U};
static int ng28[] = {1130321746, 0, 21330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng29[] = {8U, 0U};
static int ng30[] = {1415528772, 0, 17491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng31[] = {9U, 0U};
static int ng32[] = {1415533124, 0, 17491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng33[] = {10U, 0U};
static int ng34[] = {1415534418, 0, 17491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng35[] = {11U, 0U};
static int ng36[] = {1163412803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng37[] = {12U, 0U};
static int ng38[] = {1247104336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng39[] = {13U, 0U};
static int ng40[] = {2021161080, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng41[] = {4805201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng42[] = {1194151760, 0, 21321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng43[] = {1328369488, 0, 21591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng44[] = {1381048368, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng45[] = {1381048369, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng46[] = {1381048370, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng47[] = {1381048371, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng48[] = {1381048372, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng49[] = {1381048373, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng50[] = {1381048374, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng51[] = {1381048375, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng52[] = {1381048376, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng53[] = {1381048377, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng54[] = {1361064240, 0, 18770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng55[] = {1361064241, 0, 18770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng56[] = {1361064242, 0, 18770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng57[] = {1361064243, 0, 18770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng58[] = {14U, 0U};
static int ng59[] = {5131593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng60[] = {1163085140, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng61[] = {32U, 0U};
static int ng62[] = {5395011, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng63[] = {33U, 0U};
static int ng64[] = {1398231106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng65[] = {34U, 0U};
static int ng66[] = {5395009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng67[] = {35U, 0U};
static int ng68[] = {5462100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng69[] = {36U, 0U};
static int ng70[] = {1347769160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng71[] = {37U, 0U};
static int ng72[] = {1128352844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng73[] = {38U, 0U};
static int ng74[] = {1380275273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng75[] = {4869701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng76[] = {4867409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng77[] = {4869699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng78[] = {19011, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng79[] = {19022, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng80[] = {4867909, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng81[] = {19020, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng82[] = {15U, 0U};
static int ng83[] = {4869456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng84[] = {5066582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng85[] = {4277316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng86[] = {1094992963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng87[] = {1398096451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng88[] = {5461314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng89[] = {4410704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng90[] = {1145128004, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng91[] = {4344148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng92[] = {4344131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng93[] = {4344147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng94[] = {5787474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng95[] = {4279876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng96[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng97[] = {11842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng98[] = {29232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng99[] = {29233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng100[] = {29234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng101[] = {29235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng102[] = {29236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng103[] = {29237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng104[] = {29238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng105[] = {29239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng106[] = {29240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng107[] = {29241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng108[] = {7483696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng109[] = {7483697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng110[] = {7483698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng111[] = {7483699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng112[] = {7483700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng113[] = {7483701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng114[] = {2305329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng115[] = {9010, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng116[] = {9009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng117[] = {9008, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng118[] = {9016, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng119[] = {9012, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng120[] = {642073669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng121[] = {9038, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng122[] = {64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng123[] = {4539461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng124[] = {43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng125[] = {30760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng126[] = {41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng127[] = {7, 0};
static int ng128[] = {44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng129[] = {17155U, 0U};
static int ng130[] = {5132112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng131[] = {17219U, 0U};
static int ng132[] = {1380270411, 0, 21314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



static int sp_myFormat(char *t1, char *t2)
{
    char t7[8];
    char t14[8];
    char t25[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char t38[8];
    char t106[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    char *t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;

LAB0:    t0 = 1;
    xsi_set_current_line(89, ng0);

LAB2:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 512);
    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 6680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 6520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 6520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB30:    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6360);
    t8 = (t6 + 56U);
    t15 = *((char **)t8);
    memset(t7, 0, 8);
    t16 = (t5 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB32;

LAB31:    t17 = (t15 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t5) < *((unsigned int *)t15))
        goto LAB33;

LAB34:    t19 = (t7 + 4);
    t9 = *((unsigned int *)t19);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(102, ng0);
    t3 = (t1 + 6680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6360);
    t8 = (t6 + 56U);
    t15 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t15, 4);
    t16 = (t1 + 6680);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 6520);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB40:    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB41;

LAB42:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(95, ng0);

LAB6:    xsi_set_current_line(96, ng0);
    t15 = (t1 + 6200);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6200);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    t22 = (t1 + 6520);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t21, 32, t24, 32);
    t26 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t14, 8, t17, ((int*)(t20)), 2, t25, 32, 1, t26, 32, 1, 1);
    t27 = (t1 + 5880);
    t31 = (t1 + 5880);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    t35 = (t1 + 6520);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    xsi_vlog_signed_multiply(t38, 32, t34, 32, t37, 32);
    t39 = ((char*)((ng4)));
    xsi_vlog_convert_indexed_partindices(t28, t29, t30, ((int*)(t33)), 2, t38, 32, 1, t39, 32, 1, 1);
    t40 = (t28 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t29 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    t47 = (t30 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (!(t48));
    t50 = (t46 && t49);
    if (t50 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(97, ng0);
    t3 = (t1 + 6200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6200);
    t8 = (t6 + 72U);
    t15 = *((char **)t8);
    t16 = ((char*)((ng4)));
    t17 = (t1 + 6520);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t14, 0, 8);
    xsi_vlog_signed_multiply(t14, 32, t16, 32, t19, 32);
    t20 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t7, 32, t5, ((int*)(t15)), 2, t14, 32, 1, t20, 32, 1, 1);
    t21 = ((char*)((ng2)));
    memset(t25, 0, 8);
    t22 = (t7 + 4);
    t23 = (t21 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t21);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t23);
    t41 = (t12 ^ t13);
    t44 = (t11 | t41);
    t48 = *((unsigned int *)t22);
    t51 = *((unsigned int *)t23);
    t53 = (t48 | t51);
    t54 = (~(t53));
    t57 = (t44 & t54);
    if (t57 != 0)
        goto LAB12;

LAB9:    if (t53 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t25) = 1;

LAB12:    memset(t28, 0, 8);
    t26 = (t25 + 4);
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t25);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t26) != 0)
        goto LAB15;

LAB16:    t31 = (t28 + 4);
    t63 = *((unsigned int *)t28);
    t64 = *((unsigned int *)t31);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB17;

LAB18:    memcpy(t38, t28, 8);

LAB19:    t96 = (t38 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t38);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(94, ng0);
    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 6520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB3;

LAB7:    t51 = *((unsigned int *)t30);
    t52 = (t51 + 0);
    t53 = *((unsigned int *)t28);
    t54 = *((unsigned int *)t29);
    t55 = (t53 - t54);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t27, t14, t52, *((unsigned int *)t29), t56);
    goto LAB8;

LAB11:    t24 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB15:    t27 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB16;

LAB17:    t32 = (t1 + 6680);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_signed_equal(t29, 32, t34, 32, t35, 32);
    memset(t30, 0, 8);
    t36 = (t29 + 4);
    t66 = *((unsigned int *)t36);
    t67 = (~(t66));
    t68 = *((unsigned int *)t29);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t36) != 0)
        goto LAB22;

LAB23:    t71 = *((unsigned int *)t28);
    t72 = *((unsigned int *)t30);
    t73 = (t71 & t72);
    *((unsigned int *)t38) = t73;
    t39 = (t28 + 4);
    t40 = (t30 + 4);
    t43 = (t38 + 4);
    t74 = *((unsigned int *)t39);
    t75 = *((unsigned int *)t40);
    t76 = (t74 | t75);
    *((unsigned int *)t43) = t76;
    t77 = *((unsigned int *)t43);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB20:    *((unsigned int *)t30) = 1;
    goto LAB23;

LAB22:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB23;

LAB24:    t79 = *((unsigned int *)t38);
    t80 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t79 | t80);
    t47 = (t28 + 4);
    t81 = (t30 + 4);
    t82 = *((unsigned int *)t28);
    t83 = (~(t82));
    t84 = *((unsigned int *)t47);
    t85 = (~(t84));
    t86 = *((unsigned int *)t30);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (~(t88));
    t42 = (t83 & t85);
    t45 = (t87 & t89);
    t90 = (~(t42));
    t91 = (~(t45));
    t92 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t92 & t90);
    t93 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t93 & t91);
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t90);
    t95 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t95 & t91);
    goto LAB26;

LAB27:    xsi_set_current_line(97, ng0);
    t102 = (t1 + 6520);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t1 + 6680);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 32);
    goto LAB29;

LAB32:    t18 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(101, ng0);
    t20 = ((char*)((ng3)));
    t21 = (t1 + 5880);
    t22 = (t1 + 5880);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng4)));
    t27 = (t1 + 6680);
    t31 = (t27 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 6520);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t29, 0, 8);
    xsi_vlog_signed_add(t29, 32, t32, 32, t35, 32);
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t26, 32, t29, 32);
    t36 = ((char*)((ng4)));
    xsi_vlog_convert_indexed_partindices(t14, t25, t28, ((int*)(t24)), 2, t30, 32, 1, t36, 32, 1, 1);
    t37 = (t14 + 4);
    t41 = *((unsigned int *)t37);
    t42 = (!(t41));
    t39 = (t25 + 4);
    t44 = *((unsigned int *)t39);
    t45 = (!(t44));
    t46 = (t42 && t45);
    t40 = (t28 + 4);
    t48 = *((unsigned int *)t40);
    t49 = (!(t48));
    t50 = (t46 && t49);
    if (t50 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(100, ng0);
    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 6520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB30;

LAB38:    t51 = *((unsigned int *)t28);
    t52 = (t51 + 0);
    t53 = *((unsigned int *)t14);
    t54 = *((unsigned int *)t25);
    t55 = (t53 - t54);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t21, t20, t52, *((unsigned int *)t25), t56);
    goto LAB39;

LAB41:    xsi_set_current_line(105, ng0);
    t15 = (t1 + 6040);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6040);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    t22 = (t1 + 6520);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t21, 32, t24, 32);
    t26 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t14, 8, t17, ((int*)(t20)), 2, t25, 32, 1, t26, 32, 1, 1);
    t27 = (t1 + 5880);
    t31 = (t1 + 5880);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    t35 = (t1 + 6680);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t39 = (t1 + 6520);
    t40 = (t39 + 56U);
    t43 = *((char **)t40);
    memset(t38, 0, 8);
    xsi_vlog_signed_add(t38, 32, t37, 32, t43, 32);
    memset(t106, 0, 8);
    xsi_vlog_signed_multiply(t106, 32, t34, 32, t38, 32);
    t47 = ((char*)((ng4)));
    xsi_vlog_convert_indexed_partindices(t28, t29, t30, ((int*)(t33)), 2, t106, 32, 1, t47, 32, 1, 1);
    t81 = (t28 + 4);
    t41 = *((unsigned int *)t81);
    t42 = (!(t41));
    t96 = (t29 + 4);
    t44 = *((unsigned int *)t96);
    t45 = (!(t44));
    t46 = (t42 && t45);
    t102 = (t30 + 4);
    t48 = *((unsigned int *)t102);
    t49 = (!(t48));
    t50 = (t46 && t49);
    if (t50 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(104, ng0);
    t3 = (t1 + 6520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 6520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB40;

LAB43:    t51 = *((unsigned int *)t30);
    t52 = (t51 + 0);
    t53 = *((unsigned int *)t28);
    t54 = *((unsigned int *)t29);
    t55 = (t53 - t54);
    t56 = (t55 + 1);
    xsi_vlogvar_assign_value(t27, t14, t52, *((unsigned int *)t29), t56);
    goto LAB44;

}

static void NetDecl_115_0(char *t0)
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

LAB0:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 18152);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 14064);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 7U;
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
    xsi_driver_vfirst_trans(t6, 0, 2U);
    t19 = (t0 + 13616);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_116_1(char *t0)
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

LAB0:    t1 = (t0 + 7840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 18216);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 14128);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 15U;
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
    xsi_driver_vfirst_trans(t6, 0, 3U);
    t19 = (t0 + 13632);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_118_2(char *t0)
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

LAB0:    t1 = (t0 + 8088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 18280);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 14192);
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
    t18 = (t0 + 13648);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_119_3(char *t0)
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

LAB0:    t1 = (t0 + 8336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 18344);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 14256);
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
    t18 = (t0 + 13664);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_120_4(char *t0)
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

LAB0:    t1 = (t0 + 8584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 18416);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 14320);
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
    t18 = (t0 + 13680);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_121_5(char *t0)
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

LAB0:    t1 = (t0 + 8832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 18480);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 14384);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 15U;
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
    xsi_driver_vfirst_trans(t6, 0, 3U);
    t19 = (t0 + 13696);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_122_6(char *t0)
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

LAB0:    t1 = (t0 + 9080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 18544);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 14448);
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
    t19 = (t0 + 13712);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Always_133_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 9328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 13728);
    *((int *)t2) = 1;
    t3 = (t0 + 9360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB20:    goto LAB2;

LAB6:    xsi_set_current_line(135, ng0);
    t7 = ((char*)((ng7)));
    t8 = (t0 + 3640);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 256);
    goto LAB20;

LAB8:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB20;

LAB10:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB20;

LAB12:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB20;

LAB14:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB20;

LAB16:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB20;

}

static void Always_150_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 9576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 13744);
    *((int *)t2) = 1;
    t3 = (t0 + 9608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB36:    goto LAB2;

LAB6:    xsi_set_current_line(152, ng0);
    t7 = ((char*)((ng19)));
    t8 = (t0 + 3480);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 256);
    goto LAB36;

LAB8:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB10:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB12:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB14:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB16:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB18:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB20:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB22:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB24:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB26:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB28:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB30:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

LAB32:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB36;

}

static void Always_174_9(char *t0)
{
    char t13[8];
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
    char *t14;

LAB0:    t1 = (t0 + 9824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 13760);
    *((int *)t2) = 1;
    t3 = (t0 + 9856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(175, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(175, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(176, ng0);
    t4 = (t0 + 4120);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 32, t12, 32);
    t14 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB10;

}

static void Always_179_10(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 10072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 13776);
    *((int *)t2) = 1;
    t3 = (t0 + 10104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(180, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(180, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(181, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB10;

}

static void Always_190_11(char *t0)
{
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

LAB0:    t1 = (t0 + 10320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 13792);
    *((int *)t2) = 1;
    t3 = (t0 + 10352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(191, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 2440U);
    t5 = *((char **)t4);
    t4 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 16, 0LL);
    goto LAB10;

}

static void Always_196_12(char *t0)
{
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

LAB0:    t1 = (t0 + 10568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 13808);
    *((int *)t2) = 1;
    t3 = (t0 + 10600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(197, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(197, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(198, ng0);
    t4 = (t0 + 2600U);
    t5 = *((char **)t4);
    t4 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB10;

}

static void Always_202_13(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t16;
    int t17;

LAB0:    t1 = (t0 + 10816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 13824);
    *((int *)t2) = 1;
    t3 = (t0 + 10848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(203, ng0);
    t4 = (t0 + 4600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 13);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 13);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 7U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 7U);

LAB8:    t7 = ((char*)((ng6)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 3, t7, 3);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t15, 3, t2, 3);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng43)));
    t3 = (t0 + 4760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB15:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(204, ng0);
    t13 = ((char*)((ng41)));
    t14 = (t0 + 4760);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 256);
    goto LAB7;

LAB9:    xsi_set_current_line(207, ng0);
    t13 = ((char*)((ng42)));
    t14 = (t0 + 4760);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 256);
    goto LAB15;

LAB11:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 4760);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB15;

}

static void Always_215_14(char *t0)
{
    char t8[64];
    char t15[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 11064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 13840);
    *((int *)t2) = 1;
    t3 = (t0 + 11096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(216, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng41)));
    xsi_vlog_unsigned_equal(t8, 256, t6, 256, t7, 256);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng42)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng43)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB86;

LAB87:
LAB88:
LAB65:
LAB44:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(217, ng0);
    t16 = (t0 + 2760U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 15U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 15U);

LAB8:    t25 = ((char*)((ng6)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t25, 4);
    if (t26 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng25)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng27)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng29)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng31)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng33)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng35)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng37)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng39)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng58)));
    t26 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 4);
    if (t26 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng60)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB41:    goto LAB7;

LAB9:    xsi_set_current_line(218, ng0);
    t27 = ((char*)((ng44)));
    t28 = (t0 + 4920);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 256);
    goto LAB41;

LAB11:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng45)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB13:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB15:    xsi_set_current_line(221, ng0);
    t3 = ((char*)((ng47)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB17:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB19:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng49)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB21:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng50)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB23:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng51)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB25:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng52)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB27:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng53)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB29:    xsi_set_current_line(228, ng0);
    t3 = ((char*)((ng54)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB31:    xsi_set_current_line(229, ng0);
    t3 = ((char*)((ng55)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB33:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng56)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB35:    xsi_set_current_line(231, ng0);
    t3 = ((char*)((ng57)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB37:    xsi_set_current_line(232, ng0);
    t3 = ((char*)((ng59)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB41;

LAB42:    xsi_set_current_line(236, ng0);
    t7 = (t0 + 4440);
    t9 = (t7 + 56U);
    t16 = *((char **)t9);
    memset(t29, 0, 8);
    t17 = (t29 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 7);
    *((unsigned int *)t29) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 7);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t23 & 511U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 511U);

LAB45:    t25 = ((char*)((ng61)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t25, 9);
    if (t26 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng63)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t2, 9);
    if (t26 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng65)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t2, 9);
    if (t26 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng67)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t2, 9);
    if (t26 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng69)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t2, 9);
    if (t26 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng71)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t2, 9);
    if (t26 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng73)));
    t26 = xsi_vlog_unsigned_case_compare(t29, 9, t2, 9);
    if (t26 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB62:    goto LAB44;

LAB46:    xsi_set_current_line(237, ng0);
    t27 = ((char*)((ng62)));
    t28 = (t0 + 4920);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 256);
    goto LAB62;

LAB48:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng64)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB50:    xsi_set_current_line(239, ng0);
    t3 = ((char*)((ng66)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB52:    xsi_set_current_line(240, ng0);
    t3 = ((char*)((ng68)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB54:    xsi_set_current_line(241, ng0);
    t3 = ((char*)((ng70)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB56:    xsi_set_current_line(242, ng0);
    t3 = ((char*)((ng72)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB58:    xsi_set_current_line(243, ng0);
    t3 = ((char*)((ng74)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB63:    xsi_set_current_line(247, ng0);
    t7 = (t0 + 4440);
    t9 = (t7 + 56U);
    t16 = *((char **)t9);
    memset(t30, 0, 8);
    t17 = (t30 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 10);
    *((unsigned int *)t30) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 10);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t23 & 63U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 63U);

LAB66:    t25 = ((char*)((ng29)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t25, 6);
    if (t26 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng31)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng33)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng35)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng37)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng39)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng58)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng82)));
    t26 = xsi_vlog_unsigned_case_compare(t30, 6, t2, 6);
    if (t26 == 1)
        goto LAB81;

LAB82:
LAB84:
LAB83:    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB85:    goto LAB65;

LAB67:    xsi_set_current_line(248, ng0);
    t27 = ((char*)((ng75)));
    t28 = (t0 + 4920);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 256);
    goto LAB85;

LAB69:    xsi_set_current_line(249, ng0);
    t3 = ((char*)((ng76)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB71:    xsi_set_current_line(250, ng0);
    t3 = ((char*)((ng77)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB73:    xsi_set_current_line(251, ng0);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB75:    xsi_set_current_line(252, ng0);
    t3 = ((char*)((ng79)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB77:    xsi_set_current_line(253, ng0);
    t3 = ((char*)((ng80)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB79:    xsi_set_current_line(254, ng0);
    t3 = ((char*)((ng81)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB81:    xsi_set_current_line(255, ng0);
    t3 = ((char*)((ng83)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB85;

LAB86:    xsi_set_current_line(259, ng0);
    t7 = (t0 + 4440);
    t9 = (t7 + 56U);
    t16 = *((char **)t9);
    memset(t31, 0, 8);
    t17 = (t31 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 12);
    *((unsigned int *)t31) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 12);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t23 & 15U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 15U);

LAB89:    t25 = ((char*)((ng14)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t25, 4);
    if (t26 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng16)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng25)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng27)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng29)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng31)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng33)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng35)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng37)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng39)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng58)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng82)));
    t26 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t26 == 1)
        goto LAB112;

LAB113:
LAB115:
LAB114:    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB116:    goto LAB88;

LAB90:    xsi_set_current_line(260, ng0);
    t27 = ((char*)((ng84)));
    t28 = (t0 + 4920);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 256);
    goto LAB116;

LAB92:    xsi_set_current_line(261, ng0);
    t3 = ((char*)((ng85)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB94:    xsi_set_current_line(262, ng0);
    t3 = ((char*)((ng86)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB96:    xsi_set_current_line(263, ng0);
    t3 = ((char*)((ng87)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB98:    xsi_set_current_line(264, ng0);
    t3 = ((char*)((ng88)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB100:    xsi_set_current_line(265, ng0);
    t3 = ((char*)((ng89)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB102:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng90)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB104:    xsi_set_current_line(267, ng0);
    t3 = ((char*)((ng91)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB106:    xsi_set_current_line(268, ng0);
    t3 = ((char*)((ng92)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB108:    xsi_set_current_line(269, ng0);
    t3 = ((char*)((ng93)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB110:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng94)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

LAB112:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng95)));
    t4 = (t0 + 4920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB116;

}

static void Always_277_15(char *t0)
{
    char t8[64];
    char t17[64];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 11312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 13856);
    *((int *)t2) = 1;
    t3 = (t0 + 11344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(278, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng41)));
    xsi_vlog_unsigned_equal(t8, 256, t6, 256, t7, 256);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(280, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng42)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(282, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng43)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB26:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(279, ng0);
    t15 = ((char*)((ng96)));
    t16 = (t0 + 5080);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 256);
    goto LAB7;

LAB8:    xsi_set_current_line(281, ng0);
    t7 = (t0 + 4440);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t19, 0, 8);
    t16 = (t19 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 6);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 6);
    t26 = (t25 & 1);
    *((unsigned int *)t16) = t26;
    memset(t18, 0, 8);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t27) != 0)
        goto LAB13;

LAB14:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB15;

LAB16:    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t34) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t18) > 0)
        goto LAB21;

LAB22:    memcpy(t17, t43, 64);

LAB23:    t44 = (t0 + 5080);
    xsi_vlogvar_assign_value(t44, t17, 0, 0, 256);
    goto LAB10;

LAB11:    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB13:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB14;

LAB15:    t38 = ((char*)((ng97)));
    goto LAB16;

LAB17:    t43 = ((char*)((ng96)));
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t17, 256, t38, 256, t43, 256);
    goto LAB23;

LAB21:    memcpy(t17, t38, 64);
    goto LAB23;

LAB24:    xsi_set_current_line(283, ng0);
    t7 = ((char*)((ng96)));
    t9 = (t0 + 5080);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 256);
    goto LAB26;

LAB27:    xsi_set_current_line(285, ng0);
    t7 = (t0 + 4440);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t19, 0, 8);
    t16 = (t19 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 6);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 6);
    t26 = (t25 & 1);
    *((unsigned int *)t16) = t26;
    memset(t18, 0, 8);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t27) != 0)
        goto LAB32;

LAB33:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t18);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB34;

LAB35:    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t34) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t18) > 0)
        goto LAB40;

LAB41:    memcpy(t17, t43, 64);

LAB42:    t44 = (t0 + 5080);
    xsi_vlogvar_assign_value(t44, t17, 0, 0, 256);
    goto LAB29;

LAB30:    *((unsigned int *)t18) = 1;
    goto LAB33;

LAB32:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB33;

LAB34:    t38 = ((char*)((ng97)));
    goto LAB35;

LAB36:    t43 = ((char*)((ng96)));
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t17, 256, t38, 256, t43, 256);
    goto LAB42;

LAB40:    memcpy(t17, t38, 64);
    goto LAB42;

}

static void NetDecl_289_16(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[64];
    char t20[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 11560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(289, ng0);
    t2 = (t0 + 4760);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng42)));
    xsi_vlog_unsigned_equal(t8, 256, t6, 256, t7, 256);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t32 = *((unsigned int *)t4);
    t33 = (~(t32));
    t34 = *((unsigned int *)t16);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t36, 8);

LAB16:    t48 = (t0 + 14512);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 15U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 0, 3U);
    t61 = (t0 + 13872);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t21 = (t0 + 4440);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memset(t20, 0, 8);
    t24 = (t20 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t20) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t30 & 15U);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 15U);
    goto LAB9;

LAB10:    t37 = (t0 + 4440);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t36 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 8);
    *((unsigned int *)t36) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 8);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t46 & 15U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 15U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t20, 4, t36, 4);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_291_17(char *t0)
{
    char t8[64];
    char t17[8];
    char t24[64];
    char t25[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    int t69;
    char *t70;
    char *t71;

LAB0:    t1 = (t0 + 11808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(291, ng0);
    t2 = (t0 + 13888);
    *((int *)t2) = 1;
    t3 = (t0 + 11840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng41)));
    xsi_vlog_unsigned_equal(t8, 256, t6, 256, t7, 256);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(294, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng42)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    memset(t17, 0, 8);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t6) != 0)
        goto LAB13;

LAB14:    t9 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = *((unsigned int *)t9);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB15;

LAB16:    memcpy(t33, t17, 8);

LAB17:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(293, ng0);
    t15 = ((char*)((ng96)));
    t16 = (t0 + 5240);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 256);
    goto LAB7;

LAB8:    xsi_set_current_line(295, ng0);
    t7 = ((char*)((ng96)));
    t9 = (t0 + 5240);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 256);
    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t7 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB14;

LAB15:    t15 = (t0 + 4760);
    t16 = (t15 + 56U);
    t22 = *((char **)t16);
    t23 = ((char*)((ng43)));
    xsi_vlog_unsigned_equal(t24, 256, t22, 256, t23, 256);
    memset(t25, 0, 8);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t24);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t26) != 0)
        goto LAB20;

LAB21:    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t17 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB20:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB22:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t17 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t17);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB24;

LAB25:    xsi_set_current_line(297, ng0);
    t67 = (t0 + 3080U);
    t68 = *((char **)t67);

LAB28:    t67 = ((char*)((ng6)));
    t69 = xsi_vlog_unsigned_case_compare(t68, 4, t67, 4);
    if (t69 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng8)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng16)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng25)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng27)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng29)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng31)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng33)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng35)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng37)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng39)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng58)));
    t52 = xsi_vlog_unsigned_case_compare(t68, 4, t2, 4);
    if (t52 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng113)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB61:    goto LAB27;

LAB29:    xsi_set_current_line(298, ng0);
    t70 = ((char*)((ng98)));
    t71 = (t0 + 5240);
    xsi_vlogvar_assign_value(t71, t70, 0, 0, 256);
    goto LAB61;

LAB31:    xsi_set_current_line(299, ng0);
    t3 = ((char*)((ng99)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB33:    xsi_set_current_line(300, ng0);
    t3 = ((char*)((ng100)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB35:    xsi_set_current_line(301, ng0);
    t3 = ((char*)((ng101)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB37:    xsi_set_current_line(302, ng0);
    t3 = ((char*)((ng102)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB39:    xsi_set_current_line(303, ng0);
    t3 = ((char*)((ng103)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB41:    xsi_set_current_line(304, ng0);
    t3 = ((char*)((ng104)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB43:    xsi_set_current_line(305, ng0);
    t3 = ((char*)((ng105)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB45:    xsi_set_current_line(306, ng0);
    t3 = ((char*)((ng106)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB47:    xsi_set_current_line(307, ng0);
    t3 = ((char*)((ng107)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB49:    xsi_set_current_line(308, ng0);
    t3 = ((char*)((ng108)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB51:    xsi_set_current_line(309, ng0);
    t3 = ((char*)((ng109)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB53:    xsi_set_current_line(310, ng0);
    t3 = ((char*)((ng110)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB55:    xsi_set_current_line(311, ng0);
    t3 = ((char*)((ng111)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

LAB57:    xsi_set_current_line(312, ng0);
    t3 = ((char*)((ng112)));
    t4 = (t0 + 5240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB61;

}

static void Always_318_18(char *t0)
{
    char t8[64];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 12056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 13904);
    *((int *)t2) = 1;
    t3 = (t0 + 12088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(319, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng41)));
    xsi_vlog_unsigned_equal(t8, 256, t6, 256, t7, 256);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng42)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(325, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng43)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB13:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(320, ng0);
    t15 = ((char*)((ng96)));
    t16 = (t0 + 5400);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 256);
    goto LAB7;

LAB8:    xsi_set_current_line(322, ng0);
    t7 = ((char*)((ng96)));
    t9 = (t0 + 5400);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 256);
    goto LAB10;

LAB11:    xsi_set_current_line(324, ng0);
    t7 = ((char*)((ng96)));
    t9 = (t0 + 5400);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 256);
    goto LAB13;

LAB14:    xsi_set_current_line(326, ng0);
    t7 = (t0 + 4440);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    memset(t17, 0, 8);
    t16 = (t17 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t23 & 15U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 15U);

LAB17:    t25 = ((char*)((ng6)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t25, 4);
    if (t26 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng12)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng14)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng16)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng25)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng27)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng29)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng31)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng33)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng35)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng37)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng39)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng58)));
    t26 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t26 == 1)
        goto LAB46;

LAB47:
LAB49:
LAB48:    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng113)));
    t3 = (t0 + 5400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB50:    goto LAB16;

LAB18:    xsi_set_current_line(327, ng0);
    t27 = ((char*)((ng98)));
    t28 = (t0 + 5400);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 256);
    goto LAB50;

LAB20:    xsi_set_current_line(328, ng0);
    t3 = ((char*)((ng99)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB22:    xsi_set_current_line(329, ng0);
    t3 = ((char*)((ng100)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB24:    xsi_set_current_line(330, ng0);
    t3 = ((char*)((ng101)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB26:    xsi_set_current_line(331, ng0);
    t3 = ((char*)((ng102)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB28:    xsi_set_current_line(332, ng0);
    t3 = ((char*)((ng103)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB30:    xsi_set_current_line(333, ng0);
    t3 = ((char*)((ng104)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB32:    xsi_set_current_line(334, ng0);
    t3 = ((char*)((ng105)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB34:    xsi_set_current_line(335, ng0);
    t3 = ((char*)((ng106)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB36:    xsi_set_current_line(336, ng0);
    t3 = ((char*)((ng107)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB38:    xsi_set_current_line(337, ng0);
    t3 = ((char*)((ng108)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB40:    xsi_set_current_line(338, ng0);
    t3 = ((char*)((ng109)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB42:    xsi_set_current_line(339, ng0);
    t3 = ((char*)((ng110)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB44:    xsi_set_current_line(340, ng0);
    t3 = ((char*)((ng111)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

LAB46:    xsi_set_current_line(341, ng0);
    t3 = ((char*)((ng112)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB50;

}

static void Always_347_19(char *t0)
{
    char t8[64];
    char t17[8];
    char t30[8];
    char t43[8];
    char t44[8];
    char t55[128];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    int t40;
    char *t41;
    char *t42;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 12304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 13920);
    *((int *)t2) = 1;
    t3 = (t0 + 12336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(348, ng0);

LAB5:    xsi_set_current_line(349, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng41)));
    xsi_vlog_unsigned_equal(t8, 256, t6, 256, t7, 256);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    xsi_vlog_unsigned_equal(t8, 256, t4, 256, t5, 256);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(353, ng0);
    t2 = (t0 + 3080U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB15;

LAB12:    if (t22 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t17) = 1;

LAB15:    t7 = (t17 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(360, ng0);
    t2 = (t0 + 3080U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB32;

LAB29:    if (t22 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t17) = 1;

LAB32:    t7 = (t17 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(367, ng0);
    t2 = (t0 + 3080U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t18 = (t13 ^ t14);
    t19 = (t12 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB49;

LAB46:    if (t22 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t17) = 1;

LAB49:    t7 = (t17 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(375, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 4);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 4);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 3U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 3U);

LAB66:    t7 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t17, 2, t7, 2);
    if (t40 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t40 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng8)));
    t40 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t40 == 1)
        goto LAB71;

LAB72:
LAB74:
LAB73:    xsi_set_current_line(385, ng0);
    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5560);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);

LAB75:
LAB52:
LAB35:
LAB18:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(350, ng0);
    t15 = ((char*)((ng96)));
    t16 = (t0 + 5560);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 256);
    goto LAB8;

LAB9:    xsi_set_current_line(352, ng0);
    t7 = ((char*)((ng96)));
    t9 = (t0 + 5560);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 256);
    goto LAB11;

LAB14:    t6 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(354, ng0);
    t9 = (t0 + 4440);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (t33 >> 4);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 4);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 3U);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 & 3U);

LAB19:    t39 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t30, 2, t39, 2);
    if (t40 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t40 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t40 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t40 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng117)));
    t3 = (t0 + 5560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 256);

LAB28:    goto LAB18;

LAB20:    xsi_set_current_line(355, ng0);
    t41 = ((char*)((ng114)));
    t42 = (t0 + 5560);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 256);
    goto LAB28;

LAB22:    xsi_set_current_line(356, ng0);
    t3 = ((char*)((ng115)));
    t4 = (t0 + 5560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB28;

LAB24:    xsi_set_current_line(357, ng0);
    t3 = ((char*)((ng116)));
    t4 = (t0 + 5560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB28;

LAB31:    t6 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(361, ng0);
    t9 = (t0 + 4440);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    memset(t43, 0, 8);
    t31 = (t43 + 4);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (t33 >> 4);
    *((unsigned int *)t43) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 4);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t37 & 3U);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 & 3U);

LAB36:    t39 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t43, 2, t39, 2);
    if (t40 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t40 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng8)));
    t40 = xsi_vlog_unsigned_case_compare(t43, 2, t2, 2);
    if (t40 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5560);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);

LAB45:    goto LAB35;

LAB37:    xsi_set_current_line(362, ng0);
    t41 = ((char*)((ng118)));
    t42 = (t0 + 5560);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 256);
    goto LAB45;

LAB39:    xsi_set_current_line(363, ng0);
    t3 = ((char*)((ng119)));
    t4 = (t0 + 5560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB45;

LAB41:    xsi_set_current_line(364, ng0);
    t3 = ((char*)((ng120)));
    t4 = (t0 + 5560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB45;

LAB48:    t6 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(368, ng0);
    t9 = (t0 + 4440);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    memset(t44, 0, 8);
    t31 = (t44 + 4);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (t33 >> 4);
    *((unsigned int *)t44) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 4);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t37 & 3U);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 & 3U);

LAB53:    t39 = ((char*)((ng12)));
    t40 = xsi_vlog_unsigned_case_compare(t44, 2, t39, 2);
    if (t40 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng10)));
    t40 = xsi_vlog_unsigned_case_compare(t44, 2, t2, 2);
    if (t40 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng8)));
    t40 = xsi_vlog_unsigned_case_compare(t44, 2, t2, 2);
    if (t40 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(372, ng0);
    t2 = (t0 + 5240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5560);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);

LAB62:    goto LAB52;

LAB54:    xsi_set_current_line(369, ng0);
    t41 = ((char*)((ng121)));
    t42 = (t0 + 5560);
    xsi_vlogvar_assign_value(t42, t41, 0, 0, 256);
    goto LAB62;

LAB56:    xsi_set_current_line(370, ng0);
    t3 = ((char*)((ng122)));
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 12112);
    t15 = (t0 + 848);
    t16 = xsi_create_subprogram_invocation(t9, 0, t0, t15, 0, 0);
    t31 = (t0 + 6040);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 256);
    t32 = (t0 + 6200);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 256);
    t39 = (t0 + 6360);
    xsi_vlogvar_assign_value(t39, t7, 0, 0, 4);

LAB63:    t41 = (t0 + 12208);
    t42 = *((char **)t41);
    t45 = (t42 + 80U);
    t46 = *((char **)t45);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t51 = ((int  (*)(char *, char *))t50)(t0, t42);
    if (t51 != 0)
        goto LAB65;

LAB64:    t42 = (t0 + 12208);
    t52 = *((char **)t42);
    t42 = (t0 + 5880);
    t53 = (t42 + 56U);
    t54 = *((char **)t53);
    memcpy(t55, t54, 128);
    t56 = (t0 + 848);
    t57 = (t0 + 12112);
    t58 = 0;
    xsi_delete_subprogram_invocation(t56, t52, t0, t57, t58);
    t59 = (t0 + 5560);
    xsi_vlogvar_assign_value(t59, t55, 0, 0, 256);
    goto LAB62;

LAB58:    xsi_set_current_line(371, ng0);
    t3 = ((char*)((ng123)));
    t4 = (t0 + 5560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 256);
    goto LAB62;

LAB65:    t41 = (t0 + 12304U);
    *((char **)t41) = &&LAB63;
    goto LAB1;

LAB67:    xsi_set_current_line(376, ng0);

LAB76:    xsi_set_current_line(377, ng0);
    t9 = ((char*)((ng122)));
    t15 = (t0 + 5240);
    t16 = (t15 + 56U);
    t31 = *((char **)t16);
    t32 = ((char*)((ng2)));
    t39 = (t0 + 12112);
    t41 = (t0 + 848);
    t42 = xsi_create_subprogram_invocation(t39, 0, t0, t41, 0, 0);
    t45 = (t0 + 6040);
    xsi_vlogvar_assign_value(t45, t9, 0, 0, 256);
    t46 = (t0 + 6200);
    xsi_vlogvar_assign_value(t46, t31, 0, 0, 256);
    t47 = (t0 + 6360);
    xsi_vlogvar_assign_value(t47, t32, 0, 0, 4);

LAB77:    t48 = (t0 + 12208);
    t49 = *((char **)t48);
    t50 = (t49 + 80U);
    t52 = *((char **)t50);
    t53 = (t52 + 272U);
    t54 = *((char **)t53);
    t56 = (t54 + 0U);
    t57 = *((char **)t56);
    t51 = ((int  (*)(char *, char *))t57)(t0, t49);
    if (t51 != 0)
        goto LAB79;

LAB78:    t49 = (t0 + 12208);
    t58 = *((char **)t49);
    t49 = (t0 + 5880);
    t59 = (t49 + 56U);
    t60 = *((char **)t59);
    memcpy(t55, t60, 128);
    t61 = (t0 + 848);
    t62 = (t0 + 12112);
    t63 = 0;
    xsi_delete_subprogram_invocation(t61, t58, t0, t62, t63);
    t64 = (t0 + 5560);
    xsi_vlogvar_assign_value(t64, t55, 0, 0, 256);
    xsi_set_current_line(378, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng124)));
    t6 = ((char*)((ng2)));
    t7 = (t0 + 12112);
    t9 = (t0 + 848);
    t15 = xsi_create_subprogram_invocation(t7, 0, t0, t9, 0, 0);
    t16 = (t0 + 6040);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 256);
    t31 = (t0 + 6200);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 256);
    t32 = (t0 + 6360);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 4);

LAB80:    t39 = (t0 + 12208);
    t41 = *((char **)t39);
    t42 = (t41 + 80U);
    t45 = *((char **)t42);
    t46 = (t45 + 272U);
    t47 = *((char **)t46);
    t48 = (t47 + 0U);
    t49 = *((char **)t48);
    t40 = ((int  (*)(char *, char *))t49)(t0, t41);
    if (t40 != 0)
        goto LAB82;

LAB81:    t41 = (t0 + 12208);
    t50 = *((char **)t41);
    t41 = (t0 + 5880);
    t52 = (t41 + 56U);
    t53 = *((char **)t52);
    memcpy(t55, t53, 128);
    t54 = (t0 + 848);
    t56 = (t0 + 12112);
    t57 = 0;
    xsi_delete_subprogram_invocation(t54, t50, t0, t56, t57);
    t58 = (t0 + 5560);
    xsi_vlogvar_assign_value(t58, t55, 0, 0, 256);
    goto LAB75;

LAB69:    xsi_set_current_line(380, ng0);
    t3 = ((char*)((ng122)));
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 12112);
    t15 = (t0 + 848);
    t16 = xsi_create_subprogram_invocation(t9, 0, t0, t15, 0, 0);
    t31 = (t0 + 6040);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 256);
    t32 = (t0 + 6200);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 256);
    t39 = (t0 + 6360);
    xsi_vlogvar_assign_value(t39, t7, 0, 0, 4);

LAB83:    t41 = (t0 + 12208);
    t42 = *((char **)t41);
    t45 = (t42 + 80U);
    t46 = *((char **)t45);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t51 = ((int  (*)(char *, char *))t50)(t0, t42);
    if (t51 != 0)
        goto LAB85;

LAB84:    t42 = (t0 + 12208);
    t52 = *((char **)t42);
    t42 = (t0 + 5880);
    t53 = (t42 + 56U);
    t54 = *((char **)t53);
    memcpy(t55, t54, 128);
    t56 = (t0 + 848);
    t57 = (t0 + 12112);
    t58 = 0;
    xsi_delete_subprogram_invocation(t56, t52, t0, t57, t58);
    t59 = (t0 + 5560);
    xsi_vlogvar_assign_value(t59, t55, 0, 0, 256);
    goto LAB75;

LAB71:    xsi_set_current_line(381, ng0);

LAB86:    xsi_set_current_line(382, ng0);
    t3 = ((char*)((ng125)));
    t4 = (t0 + 5240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 12112);
    t15 = (t0 + 848);
    t16 = xsi_create_subprogram_invocation(t9, 0, t0, t15, 0, 0);
    t31 = (t0 + 6040);
    xsi_vlogvar_assign_value(t31, t3, 0, 0, 256);
    t32 = (t0 + 6200);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 256);
    t39 = (t0 + 6360);
    xsi_vlogvar_assign_value(t39, t7, 0, 0, 4);

LAB87:    t41 = (t0 + 12208);
    t42 = *((char **)t41);
    t45 = (t42 + 80U);
    t46 = *((char **)t45);
    t47 = (t46 + 272U);
    t48 = *((char **)t47);
    t49 = (t48 + 0U);
    t50 = *((char **)t49);
    t51 = ((int  (*)(char *, char *))t50)(t0, t42);
    if (t51 != 0)
        goto LAB89;

LAB88:    t42 = (t0 + 12208);
    t52 = *((char **)t42);
    t42 = (t0 + 5880);
    t53 = (t42 + 56U);
    t54 = *((char **)t53);
    memcpy(t55, t54, 128);
    t56 = (t0 + 848);
    t57 = (t0 + 12112);
    t58 = 0;
    xsi_delete_subprogram_invocation(t56, t52, t0, t57, t58);
    t59 = (t0 + 5560);
    xsi_vlogvar_assign_value(t59, t55, 0, 0, 256);
    xsi_set_current_line(383, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng126)));
    t6 = ((char*)((ng2)));
    t7 = (t0 + 12112);
    t9 = (t0 + 848);
    t15 = xsi_create_subprogram_invocation(t7, 0, t0, t9, 0, 0);
    t16 = (t0 + 6040);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 256);
    t31 = (t0 + 6200);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 256);
    t32 = (t0 + 6360);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 4);

LAB90:    t39 = (t0 + 12208);
    t41 = *((char **)t39);
    t42 = (t41 + 80U);
    t45 = *((char **)t42);
    t46 = (t45 + 272U);
    t47 = *((char **)t46);
    t48 = (t47 + 0U);
    t49 = *((char **)t48);
    t40 = ((int  (*)(char *, char *))t49)(t0, t41);
    if (t40 != 0)
        goto LAB92;

LAB91:    t41 = (t0 + 12208);
    t50 = *((char **)t41);
    t41 = (t0 + 5880);
    t52 = (t41 + 56U);
    t53 = *((char **)t52);
    memcpy(t55, t53, 128);
    t54 = (t0 + 848);
    t56 = (t0 + 12112);
    t57 = 0;
    xsi_delete_subprogram_invocation(t54, t50, t0, t56, t57);
    t58 = (t0 + 5560);
    xsi_vlogvar_assign_value(t58, t55, 0, 0, 256);
    goto LAB75;

LAB79:    t48 = (t0 + 12304U);
    *((char **)t48) = &&LAB77;
    goto LAB1;

LAB82:    t39 = (t0 + 12304U);
    *((char **)t39) = &&LAB80;
    goto LAB1;

LAB85:    t41 = (t0 + 12304U);
    *((char **)t41) = &&LAB83;
    goto LAB1;

LAB89:    t41 = (t0 + 12304U);
    *((char **)t41) = &&LAB87;
    goto LAB1;

LAB92:    t39 = (t0 + 12304U);
    *((char **)t39) = &&LAB90;
    goto LAB1;

}

static void Always_391_20(char *t0)
{
    char t8[64];
    char t17[8];
    char t19[8];
    char t41[8];
    char t54[8];
    char t68[128];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    int t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 12552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(391, ng0);
    t2 = (t0 + 13936);
    *((int *)t2) = 1;
    t3 = (t0 + 12584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(392, ng0);

LAB5:    xsi_set_current_line(393, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng43)));
    xsi_vlog_unsigned_not_equal(t8, 256, t6, 256, t7, 256);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(395, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 15U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 15U);
    t7 = ((char*)((ng10)));
    memset(t19, 0, 8);
    t9 = (t17 + 4);
    t15 = (t7 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t15);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t15);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB9:    if (t29 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t19) = 1;

LAB12:    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t19);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 15U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 15U);
    t7 = ((char*)((ng6)));
    memset(t19, 0, 8);
    t9 = (t17 + 4);
    t15 = (t7 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t15);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t15);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB25;

LAB22:    if (t29 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t19) = 1;

LAB25:    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t19);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(406, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4440);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t9 = ((char*)((ng127)));
    xsi_vlog_generic_get_index_select_value(t17, 2, t4, t7, 2, t9, 32, 1);

LAB35:    t15 = ((char*)((ng8)));
    t51 = xsi_vlog_unsigned_case_compare(t17, 2, t15, 2);
    if (t51 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);

LAB40:
LAB28:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(394, ng0);
    t15 = ((char*)((ng96)));
    t16 = (t0 + 5720);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 256);
    goto LAB8;

LAB11:    t16 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(396, ng0);
    t38 = (t0 + 4440);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 7);
    t46 = (t45 & 1);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 7);
    t49 = (t48 & 1);
    *((unsigned int *)t42) = t49;

LAB16:    t50 = ((char*)((ng8)));
    t51 = xsi_vlog_unsigned_case_compare(t41, 1, t50, 1);
    if (t51 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(398, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);

LAB21:    goto LAB15;

LAB17:    xsi_set_current_line(397, ng0);
    t52 = ((char*)((ng120)));
    t53 = (t0 + 5720);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 256);
    goto LAB21;

LAB24:    t16 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(401, ng0);
    t38 = (t0 + 4440);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 4440);
    t43 = (t42 + 72U);
    t50 = *((char **)t43);
    t52 = ((char*)((ng127)));
    xsi_vlog_generic_get_index_select_value(t54, 2, t40, t50, 2, t52, 32, 1);

LAB29:    t53 = ((char*)((ng8)));
    t51 = xsi_vlog_unsigned_case_compare(t54, 2, t53, 2);
    if (t51 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(403, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);

LAB34:    goto LAB28;

LAB30:    xsi_set_current_line(402, ng0);
    t55 = ((char*)((ng123)));
    t56 = (t0 + 5720);
    xsi_vlogvar_assign_value(t56, t55, 0, 0, 256);
    goto LAB34;

LAB36:    xsi_set_current_line(407, ng0);

LAB41:    xsi_set_current_line(408, ng0);
    t16 = ((char*)((ng125)));
    t32 = (t0 + 5400);
    t38 = (t32 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng2)));
    t42 = (t0 + 12360);
    t43 = (t0 + 848);
    t50 = xsi_create_subprogram_invocation(t42, 0, t0, t43, 0, 0);
    t52 = (t0 + 6040);
    xsi_vlogvar_assign_value(t52, t16, 0, 0, 256);
    t53 = (t0 + 6200);
    xsi_vlogvar_assign_value(t53, t39, 0, 0, 256);
    t55 = (t0 + 6360);
    xsi_vlogvar_assign_value(t55, t40, 0, 0, 4);

LAB42:    t56 = (t0 + 12456);
    t57 = *((char **)t56);
    t58 = (t57 + 80U);
    t59 = *((char **)t58);
    t60 = (t59 + 272U);
    t61 = *((char **)t60);
    t62 = (t61 + 0U);
    t63 = *((char **)t62);
    t64 = ((int  (*)(char *, char *))t63)(t0, t57);
    if (t64 != 0)
        goto LAB44;

LAB43:    t57 = (t0 + 12456);
    t65 = *((char **)t57);
    t57 = (t0 + 5880);
    t66 = (t57 + 56U);
    t67 = *((char **)t66);
    memcpy(t68, t67, 128);
    t69 = (t0 + 848);
    t70 = (t0 + 12360);
    t71 = 0;
    xsi_delete_subprogram_invocation(t69, t65, t0, t70, t71);
    t72 = (t0 + 5720);
    xsi_vlogvar_assign_value(t72, t68, 0, 0, 256);
    xsi_set_current_line(409, ng0);
    t2 = (t0 + 5720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng126)));
    t6 = ((char*)((ng2)));
    t7 = (t0 + 12360);
    t9 = (t0 + 848);
    t15 = xsi_create_subprogram_invocation(t7, 0, t0, t9, 0, 0);
    t16 = (t0 + 6040);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 256);
    t32 = (t0 + 6200);
    xsi_vlogvar_assign_value(t32, t5, 0, 0, 256);
    t38 = (t0 + 6360);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 4);

LAB45:    t39 = (t0 + 12456);
    t40 = *((char **)t39);
    t42 = (t40 + 80U);
    t43 = *((char **)t42);
    t50 = (t43 + 272U);
    t52 = *((char **)t50);
    t53 = (t52 + 0U);
    t55 = *((char **)t53);
    t51 = ((int  (*)(char *, char *))t55)(t0, t40);
    if (t51 != 0)
        goto LAB47;

LAB46:    t40 = (t0 + 12456);
    t56 = *((char **)t40);
    t40 = (t0 + 5880);
    t57 = (t40 + 56U);
    t58 = *((char **)t57);
    memcpy(t68, t58, 128);
    t59 = (t0 + 848);
    t60 = (t0 + 12360);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t56, t0, t60, t61);
    t62 = (t0 + 5720);
    xsi_vlogvar_assign_value(t62, t68, 0, 0, 256);
    goto LAB40;

LAB44:    t56 = (t0 + 12552U);
    *((char **)t56) = &&LAB42;
    goto LAB1;

LAB47:    t39 = (t0 + 12552U);
    *((char **)t39) = &&LAB45;
    goto LAB1;

}

static void NetDecl_419_21(char *t0)
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

LAB0:    t1 = (t0 + 12800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 256);
    xsi_driver_vfirst_trans(t5, 0, 255U);
    t10 = (t0 + 13952);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_422_22(char *t0)
{
    char t29[128];
    char t34[64];
    char t41[8];
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;

LAB0:    t1 = (t0 + 13048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(422, ng0);
    t2 = (t0 + 13968);
    *((int *)t2) = 1;
    t3 = (t0 + 13080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(423, ng0);

LAB5:    xsi_set_current_line(424, ng0);
    t4 = (t0 + 4920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5080);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 12856);
    t12 = (t0 + 848);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    t14 = (t0 + 6040);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 256);
    t15 = (t0 + 6200);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 256);
    t16 = (t0 + 6360);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 4);

LAB6:    t17 = (t0 + 12952);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t25 != 0)
        goto LAB8;

LAB7:    t18 = (t0 + 12952);
    t26 = *((char **)t18);
    t18 = (t0 + 5880);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    memcpy(t29, t28, 128);
    t30 = (t0 + 848);
    t31 = (t0 + 12856);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = (t0 + 3960);
    xsi_vlogvar_assign_value(t33, t29, 0, 0, 256);
    xsi_set_current_line(425, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    t9 = (t0 + 12856);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    t12 = (t0 + 6040);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 256);
    t13 = (t0 + 6200);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 256);
    t14 = (t0 + 6360);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 4);

LAB9:    t15 = (t0 + 12952);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB11;

LAB10:    t16 = (t0 + 12952);
    t23 = *((char **)t16);
    t16 = (t0 + 5880);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 128);
    t27 = (t0 + 848);
    t28 = (t0 + 12856);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = (t0 + 3960);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 256);
    xsi_set_current_line(426, ng0);
    t2 = (t0 + 4760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng43)));
    xsi_vlog_unsigned_equal(t34, 256, t4, 256, t5, 256);
    t6 = (t34 + 4);
    t35 = *((unsigned int *)t6);
    t36 = (~(t35));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(428, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    t9 = (t0 + 12856);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    t12 = (t0 + 6040);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 256);
    t13 = (t0 + 6200);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 256);
    t14 = (t0 + 6360);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 4);

LAB18:    t15 = (t0 + 12952);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t25 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t25 != 0)
        goto LAB20;

LAB19:    t16 = (t0 + 12952);
    t23 = *((char **)t16);
    t16 = (t0 + 5880);
    t24 = (t16 + 56U);
    t26 = *((char **)t24);
    memcpy(t29, t26, 128);
    t27 = (t0 + 848);
    t28 = (t0 + 12856);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t30);
    t31 = (t0 + 3960);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 256);
    xsi_set_current_line(429, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng129)));
    memset(t41, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t5);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t7);
    t42 = (t38 ^ t39);
    t43 = (t37 | t42);
    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t7);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB24;

LAB21:    if (t46 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t41) = 1;

LAB24:    t9 = (t41 + 4);
    t49 = *((unsigned int *)t9);
    t50 = (~(t49));
    t51 = *((unsigned int *)t41);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(431, ng0);
    t2 = (t0 + 4440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng131)));
    memset(t41, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t5);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t6);
    t39 = *((unsigned int *)t7);
    t42 = (t38 ^ t39);
    t43 = (t37 | t42);
    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t7);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB31;

LAB28:    if (t46 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t41) = 1;

LAB31:    t9 = (t41 + 4);
    t49 = *((unsigned int *)t9);
    t50 = (~(t49));
    t51 = *((unsigned int *)t41);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB2;

LAB8:    t17 = (t0 + 13048U);
    *((char **)t17) = &&LAB6;
    goto LAB1;

LAB11:    t15 = (t0 + 13048U);
    *((char **)t15) = &&LAB9;
    goto LAB1;

LAB12:    xsi_set_current_line(427, ng0);
    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng128)));
    t11 = ((char*)((ng2)));
    t12 = (t0 + 12856);
    t13 = (t0 + 848);
    t14 = xsi_create_subprogram_invocation(t12, 0, t0, t13, 0, 0);
    t15 = (t0 + 6040);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 256);
    t16 = (t0 + 6200);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 256);
    t17 = (t0 + 6360);
    xsi_vlogvar_assign_value(t17, t11, 0, 0, 4);

LAB15:    t18 = (t0 + 12952);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t26 = *((char **)t24);
    t25 = ((int  (*)(char *, char *))t26)(t0, t19);
    if (t25 != 0)
        goto LAB17;

LAB16:    t19 = (t0 + 12952);
    t27 = *((char **)t19);
    t19 = (t0 + 5880);
    t28 = (t19 + 56U);
    t30 = *((char **)t28);
    memcpy(t29, t30, 128);
    t31 = (t0 + 848);
    t32 = (t0 + 12856);
    t33 = 0;
    xsi_delete_subprogram_invocation(t31, t27, t0, t32, t33);
    t40 = (t0 + 3960);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 256);
    goto LAB14;

LAB17:    t18 = (t0 + 13048U);
    *((char **)t18) = &&LAB15;
    goto LAB1;

LAB20:    t15 = (t0 + 13048U);
    *((char **)t15) = &&LAB18;
    goto LAB1;

LAB23:    t8 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(430, ng0);
    t10 = ((char*)((ng130)));
    t11 = (t0 + 3960);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 256);
    goto LAB27;

LAB30:    t8 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(432, ng0);
    t10 = ((char*)((ng132)));
    t11 = (t0 + 3960);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 256);
    goto LAB34;

}

static void Always_441_23(char *t0)
{
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

LAB0:    t1 = (t0 + 13296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(441, ng0);
    t2 = (t0 + 13984);
    *((int *)t2) = 1;
    t3 = (t0 + 13328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(442, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(443, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(442, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(443, ng0);
    t4 = (t0 + 2920U);
    t5 = *((char **)t4);
    t4 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 16, 0LL);
    goto LAB10;

}


extern void work_m_08113487205320182543_2556927080_init()
{
	static char *pe[] = {(void *)NetDecl_115_0,(void *)NetDecl_116_1,(void *)NetDecl_118_2,(void *)NetDecl_119_3,(void *)NetDecl_120_4,(void *)NetDecl_121_5,(void *)NetDecl_122_6,(void *)Always_133_7,(void *)Always_150_8,(void *)Always_174_9,(void *)Always_179_10,(void *)Always_190_11,(void *)Always_196_12,(void *)Always_202_13,(void *)Always_215_14,(void *)Always_277_15,(void *)NetDecl_289_16,(void *)Always_291_17,(void *)Always_318_18,(void *)Always_347_19,(void *)Always_391_20,(void *)NetDecl_419_21,(void *)Always_422_22,(void *)Always_441_23};
	static char *se[] = {(void *)sp_myFormat};
	xsi_register_didat("work_m_08113487205320182543_2556927080", "isim/isim.exe.sim/work/m_08113487205320182543_2556927080.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
