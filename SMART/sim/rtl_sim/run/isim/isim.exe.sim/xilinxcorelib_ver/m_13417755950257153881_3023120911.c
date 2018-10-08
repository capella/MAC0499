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
static unsigned int ng0[] = {2147483649U, 0U};
static const char *ng1 = "%0s WARNING: Address %0h is outside range for A Write";
static int ng2[] = {1983078195, 0, 1734700639, 0, 1835363679, 0, 1651272543, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {16, 0};
static int ng6[] = {8, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {1952542262, 0, 1936744818, 0};
static int ng11[] = {1952806966, 0, 7760242, 0};
static int ng12[] = {1702377068, 0, 1986622068, 0};
static const char *ng13 = "%0s WARNING: Address %0h is outside range for B Write";
static const char *ng14 = "%0s WARNING: Address %0h is outside range for A Read";
static unsigned int ng15[] = {4294967295U, 4294967295U};
static unsigned int ng16[] = {0U, 0U};
static const char *ng17 = "%0s WARNING: Address %0h is outside range for B Read";
static unsigned int ng18[] = {1U, 1U};
static const char *ng19 = " Block Memory Generator CORE Generator module loading initial data...";
static int ng20[] = {0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng21 = "%0s ERROR: C_DEFAULT_DATA is empty!";
static const char *ng22 = "%h";
static const char *ng23 = "";
static int ng24[] = {539308147, 0, 1096040762, 0, 1280597828, 0, 1162232149, 0, 541286212, 0, 1718775661, 0, 1919246692, 0, 1835101216, 0, 1684366185, 0, 1751480417, 0, 1718971424, 0, 1667593075, 0, 1853060451, 0, 1379541077, 0, 1163022927, 0, 623932192, 0};
static int ng25[] = {48, 0};
static unsigned int ng26[] = {3U, 0U};
static int ng27[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static const char *ng28 = "%0s ERROR: C_INIT_FILE_NAME is empty!";
static const char *ng29 = "r";
static int ng30[] = {623932193, 0, 1296382496, 0, 1163873857, 0, 1598441804, 0, 1229867348, 0, 1852261215, 0, 1885695593, 0, 1701650543, 0, 1919902316, 0, 1379541072, 0, 1163022927, 0, 812854304, 0, 37, 0};
static const char *ng31 = "%b";
static const char *ng32 = " Block Memory Generator data initialization complete.";
static const char *ng33 = "Block Memory Generator CORE Generator module %m is using a behavioral model for simulation which will not precisely model memory collision behavior.";
static int ng34[] = {1952542262, 0, 1936744818, 0, 0, 0};
static int ng35[] = {1634612844, 0, 1885434484, 0, 115, 0};
static int ng36[] = {1952542262, 0, 1936744818, 0, 97, 0};
static int ng37[] = {17221, 0};
static int ng38[] = {21330, 0};
static const char *ng39 = "%0s collision detected at time: %0d, ";
static const char *ng40 = "A %0s address: %0h, B write address: %0h\n";
static int ng41[] = {1919513701, 0, 119, 0};
static int ng42[] = {1919246692, 0, 0, 0};
static const char *ng43 = "A write address: %0h, B %s address: %0h\n";



static int sp_write_a(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t40[8];
    char t43[8];
    char t45[8];
    char t46[8];
    char t47[8];
    char t55[8];
    char t117[8];
    char t123[8];
    char t153[8];
    char t154[8];
    char t171[8];
    char t178[16];
    char t179[16];
    char t212[8];
    char t213[8];
    char t229[8];
    char t245[8];
    char t253[8];
    char t283[8];
    char t299[8];
    char t315[8];
    char t323[8];
    char t355[8];
    char t363[8];
    char t399[8];
    char t400[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    char *t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
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
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    char *t211;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    char *t227;
    char *t228;
    char *t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    char *t257;
    char *t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    char *t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    char *t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    char *t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    char *t295;
    char *t296;
    char *t297;
    char *t298;
    char *t300;
    char *t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    char *t322;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    char *t327;
    char *t328;
    char *t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    char *t337;
    char *t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    int t347;
    int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    char *t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    char *t362;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    char *t367;
    char *t368;
    char *t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    char *t377;
    char *t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    int t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    char *t397;
    char *t398;
    char *t401;
    char *t402;
    char *t403;
    char *t404;
    char *t405;
    char *t406;
    char *t407;
    char *t408;
    char *t409;
    char *t410;
    unsigned int t411;
    int t412;
    char *t413;
    unsigned int t414;
    int t415;
    int t416;
    unsigned int t417;
    unsigned int t418;
    int t419;
    int t420;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 12000);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 27208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9312);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 32, t7, 12, t9, 32);
    t8 = (t1 + 28168);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 12);
    t4 = (t1 + 28168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3600);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;

LAB9:    t12 = (t10 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB23:    t4 = (t1 + 2920);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB24;

LAB25:
LAB58:    t4 = (t1 + 27528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 28008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);

LAB26:    t4 = (t1 + 6592);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t5, 32, t4, 32);
    t6 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB59;

LAB60:
LAB61:    t4 = (t1 + 8768);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t5, 32, t4, 32);
    t6 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB111;

LAB112:
LAB117:    t4 = ((char*)((ng4)));
    t5 = (t1 + 28328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB118:    t4 = (t1 + 28328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8768);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB119;

LAB120:
LAB113:    t4 = ((char*)((ng10)));
    t5 = ((char*)((ng11)));
    xsi_vlog_unsigned_equal(t178, 64, t4, 64, t5, 64);
    memset(t10, 0, 8);
    t6 = (t178 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t178);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t6) != 0)
        goto LAB126;

LAB127:    t8 = (t10 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (!(t21));
    t23 = *((unsigned int *)t8);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB128;

LAB129:    memcpy(t40, t10, 8);

LAB130:    memset(t43, 0, 8);
    t35 = (t40 + 4);
    t92 = *((unsigned int *)t35);
    t93 = (~(t92));
    t94 = *((unsigned int *)t40);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t35) != 0)
        goto LAB140;

LAB141:    t37 = (t43 + 4);
    t97 = *((unsigned int *)t43);
    t98 = *((unsigned int *)t37);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB142;

LAB143:    memcpy(t47, t43, 8);

LAB144:    t52 = (t47 + 4);
    t131 = *((unsigned int *)t52);
    t132 = (~(t131));
    t133 = *((unsigned int *)t47);
    t134 = (t133 & t132);
    t135 = (t134 != 0);
    if (t135 > 0)
        goto LAB152;

LAB153:
LAB154:
LAB13:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:
LAB14:    t19 = (t1 + 7272);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t19) == 0)
        goto LAB15;

LAB17:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB18:    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB13;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB19:
LAB22:    t33 = ((char*)((ng0)));
    t34 = ((char*)((ng2)));
    t35 = (t1 + 27208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 12000);
    xsi_vlogfile_fwrite(*((unsigned int *)t33), 1, 0, 0, ng1, 3, t38, (char)118, t34, 128, (char)118, t37, 12);
    goto LAB21;

LAB24:
LAB27:    t6 = (t1 + 8768);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t7, 32, t6, 32);
    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t23 = *((unsigned int *)t10);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB28;

LAB29:
LAB32:    t4 = ((char*)((ng4)));
    t5 = (t1 + 28328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB33:    t4 = (t1 + 28328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8768);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB34;

LAB35:
LAB30:    t4 = (t1 + 3056);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t5, 32, t4, 32);
    t6 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB39;

LAB40:
LAB47:    t4 = ((char*)((ng4)));
    t5 = (t1 + 28328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB48:    t4 = (t1 + 28328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3056);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB49;

LAB50:
LAB41:    goto LAB26;

LAB28:
LAB31:    t9 = (t1 + 22888);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 22888);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 22888);
    t33 = (t27 + 64U);
    t34 = *((char **)t33);
    t35 = (t1 + 28168);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t18, 16, t12, t26, t34, 2, 1, t37, 12, 2);
    t38 = (t1 + 28008);
    xsi_vlogvar_assign_value(t38, t18, 0, 0, 16);
    goto LAB30;

LAB34:
LAB36:    t9 = (t1 + 22888);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 22888);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 22888);
    t33 = (t27 + 64U);
    t34 = *((char **)t33);
    t35 = (t1 + 28168);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 8768);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_multiply(t40, 32, t37, 12, t39, 32);
    t38 = (t1 + 28328);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t40, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t18, 16, t12, t26, t34, 2, 1, t43, 32, 2);
    t44 = (t1 + 28008);
    t48 = (t1 + 28008);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t1 + 8224);
    t52 = *((char **)t51);
    t51 = (t1 + 28328);
    t53 = (t51 + 56U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t52, 32, t54, 32);
    t56 = ((char*)((ng5)));
    xsi_vlog_convert_indexed_partindices(t45, t46, t47, ((int*)(t50)), 2, t55, 32, 1, t56, 32, 1, 1);
    t57 = (t45 + 4);
    t21 = *((unsigned int *)t57);
    t58 = (!(t21));
    t59 = (t46 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t58 && t60);
    t62 = (t47 + 4);
    t23 = *((unsigned int *)t62);
    t63 = (!(t23));
    t64 = (t61 && t63);
    if (t64 == 1)
        goto LAB37;

LAB38:    t4 = (t1 + 28328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 28328);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB33;

LAB37:    t24 = *((unsigned int *)t47);
    t65 = (t24 + 0);
    t25 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t46);
    t66 = (t25 - t28);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t44, t18, t65, *((unsigned int *)t46), t67);
    goto LAB38;

LAB39:
LAB42:    t7 = (t1 + 27368);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t12);
    t25 = (t24 >> 0);
    t28 = (t25 & 1);
    *((unsigned int *)t11) = t28;
    t19 = (t18 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t68 = (t32 != 0);
    if (t68 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB41;

LAB43:
LAB46:    t20 = (t1 + 27528);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t33 = (t1 + 28008);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 16);
    goto LAB45;

LAB49:
LAB51:    t9 = (t1 + 27368);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 27368);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 28328);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t18, 1, t12, t26, 2, t34, 32, 1);
    t35 = (t18 + 4);
    t21 = *((unsigned int *)t35);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB52;

LAB53:
LAB54:    t4 = (t1 + 28328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 28328);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB48;

LAB52:
LAB55:    t36 = (t1 + 27528);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 27528);
    t41 = (t39 + 72U);
    t42 = *((char **)t41);
    t44 = (t1 + 9856);
    t48 = *((char **)t44);
    t44 = (t1 + 28328);
    t49 = (t44 + 56U);
    t50 = *((char **)t49);
    memset(t43, 0, 8);
    xsi_vlog_signed_multiply(t43, 32, t48, 32, t50, 32);
    t51 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t40, 8, t38, ((int*)(t42)), 2, t43, 32, 1, t51, 32, 1, 1);
    t52 = (t1 + 28008);
    t53 = (t1 + 28008);
    t54 = (t53 + 72U);
    t56 = *((char **)t54);
    t57 = (t1 + 9856);
    t59 = *((char **)t57);
    t57 = (t1 + 28328);
    t62 = (t57 + 56U);
    t69 = *((char **)t62);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t59, 32, t69, 32);
    t70 = ((char*)((ng6)));
    xsi_vlog_convert_indexed_partindices(t45, t46, t47, ((int*)(t56)), 2, t55, 32, 1, t70, 32, 1, 1);
    t71 = (t45 + 4);
    t28 = *((unsigned int *)t71);
    t58 = (!(t28));
    t72 = (t46 + 4);
    t29 = *((unsigned int *)t72);
    t60 = (!(t29));
    t61 = (t58 && t60);
    t73 = (t47 + 4);
    t30 = *((unsigned int *)t73);
    t63 = (!(t30));
    t64 = (t61 && t63);
    if (t64 == 1)
        goto LAB56;

LAB57:    goto LAB54;

LAB56:    t31 = *((unsigned int *)t47);
    t65 = (t31 + 0);
    t32 = *((unsigned int *)t45);
    t68 = *((unsigned int *)t46);
    t66 = (t32 - t68);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t52, t40, t65, *((unsigned int *)t46), t67);
    goto LAB57;

LAB59:
LAB62:    t7 = (t1 + 6728);
    t8 = *((char **)t7);
    t7 = ((char*)((ng7)));
    memset(t18, 0, 8);
    xsi_vlog_signed_equal(t18, 32, t8, 32, t7, 32);
    memset(t40, 0, 8);
    t9 = (t18 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t9) != 0)
        goto LAB65;

LAB66:    t12 = (t40 + 4);
    t28 = *((unsigned int *)t40);
    t29 = (!(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB67;

LAB68:    memcpy(t46, t40, 8);

LAB69:    memset(t47, 0, 8);
    t38 = (t46 + 4);
    t97 = *((unsigned int *)t38);
    t98 = (~(t97));
    t99 = *((unsigned int *)t46);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t38) != 0)
        goto LAB79;

LAB80:    t41 = (t47 + 4);
    t102 = *((unsigned int *)t47);
    t103 = *((unsigned int *)t41);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB81;

LAB82:    memcpy(t123, t47, 8);

LAB83:    t70 = (t123 + 4);
    t148 = *((unsigned int *)t70);
    t149 = (~(t148));
    t150 = *((unsigned int *)t123);
    t151 = (t150 & t149);
    t152 = (t151 != 0);
    if (t152 > 0)
        goto LAB95;

LAB96:
LAB97:    goto LAB61;

LAB63:    *((unsigned int *)t40) = 1;
    goto LAB66;

LAB65:    t11 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB66;

LAB67:    t19 = (t1 + 6728);
    t20 = *((char **)t19);
    t19 = ((char*)((ng8)));
    memset(t43, 0, 8);
    xsi_vlog_signed_equal(t43, 32, t20, 32, t19, 32);
    memset(t45, 0, 8);
    t26 = (t43 + 4);
    t32 = *((unsigned int *)t26);
    t68 = (~(t32));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t68);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t26) != 0)
        goto LAB72;

LAB73:    t77 = *((unsigned int *)t40);
    t78 = *((unsigned int *)t45);
    t79 = (t77 | t78);
    *((unsigned int *)t46) = t79;
    t33 = (t40 + 4);
    t34 = (t45 + 4);
    t35 = (t46 + 4);
    t80 = *((unsigned int *)t33);
    t81 = *((unsigned int *)t34);
    t82 = (t80 | t81);
    *((unsigned int *)t35) = t82;
    t83 = *((unsigned int *)t35);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB69;

LAB70:    *((unsigned int *)t45) = 1;
    goto LAB73;

LAB72:    t27 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB73;

LAB74:    t85 = *((unsigned int *)t46);
    t86 = *((unsigned int *)t35);
    *((unsigned int *)t46) = (t85 | t86);
    t36 = (t40 + 4);
    t37 = (t45 + 4);
    t87 = *((unsigned int *)t36);
    t88 = (~(t87));
    t89 = *((unsigned int *)t40);
    t58 = (t89 & t88);
    t90 = *((unsigned int *)t37);
    t91 = (~(t90));
    t92 = *((unsigned int *)t45);
    t60 = (t92 & t91);
    t93 = (~(t58));
    t94 = (~(t60));
    t95 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t95 & t93);
    t96 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t96 & t94);
    goto LAB76;

LAB77:    *((unsigned int *)t47) = 1;
    goto LAB80;

LAB79:    t39 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB80;

LAB81:    t42 = (t1 + 27848);
    t44 = (t42 + 56U);
    t48 = *((char **)t44);
    t49 = ((char*)((ng9)));
    memset(t55, 0, 8);
    t50 = (t48 + 4);
    t51 = (t49 + 4);
    t105 = *((unsigned int *)t48);
    t106 = *((unsigned int *)t49);
    t107 = (t105 ^ t106);
    t108 = *((unsigned int *)t50);
    t109 = *((unsigned int *)t51);
    t110 = (t108 ^ t109);
    t111 = (t107 | t110);
    t112 = *((unsigned int *)t50);
    t113 = *((unsigned int *)t51);
    t114 = (t112 | t113);
    t115 = (~(t114));
    t116 = (t111 & t115);
    if (t116 != 0)
        goto LAB87;

LAB84:    if (t114 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t55) = 1;

LAB87:    memset(t117, 0, 8);
    t53 = (t55 + 4);
    t118 = *((unsigned int *)t53);
    t119 = (~(t118));
    t120 = *((unsigned int *)t55);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t53) != 0)
        goto LAB90;

LAB91:    t124 = *((unsigned int *)t47);
    t125 = *((unsigned int *)t117);
    t126 = (t124 & t125);
    *((unsigned int *)t123) = t126;
    t56 = (t47 + 4);
    t57 = (t117 + 4);
    t59 = (t123 + 4);
    t127 = *((unsigned int *)t56);
    t128 = *((unsigned int *)t57);
    t129 = (t127 | t128);
    *((unsigned int *)t59) = t129;
    t130 = *((unsigned int *)t59);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB83;

LAB86:    t52 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t117) = 1;
    goto LAB91;

LAB90:    t54 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB91;

LAB92:    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t59);
    *((unsigned int *)t123) = (t132 | t133);
    t62 = (t47 + 4);
    t69 = (t117 + 4);
    t134 = *((unsigned int *)t47);
    t135 = (~(t134));
    t136 = *((unsigned int *)t62);
    t137 = (~(t136));
    t138 = *((unsigned int *)t117);
    t139 = (~(t138));
    t140 = *((unsigned int *)t69);
    t141 = (~(t140));
    t61 = (t135 & t137);
    t63 = (t139 & t141);
    t142 = (~(t61));
    t143 = (~(t63));
    t144 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t144 & t142);
    t145 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t145 & t143);
    t146 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t146 & t142);
    t147 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t147 & t143);
    goto LAB94;

LAB95:
LAB98:    t71 = (t1 + 28008);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t154, 0, 8);
    t155 = (t154 + 4);
    t156 = (t73 + 4);
    t157 = *((unsigned int *)t73);
    t158 = (t157 >> 0);
    t159 = (t158 & 1);
    *((unsigned int *)t154) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 >> 0);
    t162 = (t161 & 1);
    *((unsigned int *)t155) = t162;
    memset(t153, 0, 8);
    t163 = (t154 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t154);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB102;

LAB100:    if (*((unsigned int *)t163) == 0)
        goto LAB99;

LAB101:    t169 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t169) = 1;

LAB102:    t170 = (t1 + 28008);
    t172 = (t1 + 28008);
    t173 = (t172 + 72U);
    t174 = *((char **)t173);
    t175 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t171, t174, 2, t175, 32, 1);
    t176 = (t171 + 4);
    t177 = *((unsigned int *)t176);
    t64 = (!(t177));
    if (t64 == 1)
        goto LAB103;

LAB104:    t4 = (t1 + 28008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t8 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t18) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 1);
    t21 = (t17 & 1);
    *((unsigned int *)t7) = t21;
    memset(t10, 0, 8);
    t9 = (t18 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t18);
    t25 = (t24 & t23);
    t28 = (t25 & 1U);
    if (t28 != 0)
        goto LAB108;

LAB106:    if (*((unsigned int *)t9) == 0)
        goto LAB105;

LAB107:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;

LAB108:    t12 = (t1 + 28008);
    t19 = (t1 + 28008);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t40, t26, 2, t27, 32, 1);
    t33 = (t40 + 4);
    t29 = *((unsigned int *)t33);
    t58 = (!(t29));
    if (t58 == 1)
        goto LAB109;

LAB110:    goto LAB97;

LAB99:    *((unsigned int *)t153) = 1;
    goto LAB102;

LAB103:    xsi_vlogvar_assign_value(t170, t153, 0, *((unsigned int *)t171), 1);
    goto LAB104;

LAB105:    *((unsigned int *)t10) = 1;
    goto LAB108;

LAB109:    xsi_vlogvar_assign_value(t12, t10, 0, *((unsigned int *)t40), 1);
    goto LAB110;

LAB111:
LAB114:    t7 = (t1 + 28008);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 22888);
    t12 = (t1 + 22888);
    t19 = (t12 + 72U);
    t20 = *((char **)t19);
    t26 = (t1 + 22888);
    t27 = (t26 + 64U);
    t33 = *((char **)t27);
    t34 = (t1 + 28168);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 8768);
    t38 = *((char **)t37);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_multiply(t43, 32, t36, 12, t38, 32);
    xsi_vlog_generic_convert_array_indices(t18, t40, t20, t33, 2, 1, t43, 32, 2);
    t37 = (t18 + 4);
    t21 = *((unsigned int *)t37);
    t58 = (!(t21));
    t39 = (t40 + 4);
    t22 = *((unsigned int *)t39);
    t60 = (!(t22));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB115;

LAB116:    goto LAB113;

LAB115:    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t40);
    t63 = (t23 - t24);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t11, t9, 0, *((unsigned int *)t40), t64);
    goto LAB116;

LAB119:
LAB121:    t9 = (t1 + 28008);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 28008);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 8224);
    t33 = *((char **)t27);
    t27 = (t1 + 28328);
    t34 = (t27 + 56U);
    t35 = *((char **)t34);
    memset(t40, 0, 8);
    xsi_vlog_signed_multiply(t40, 32, t33, 32, t35, 32);
    t36 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t18, 16, t12, ((int*)(t26)), 2, t40, 32, 1, t36, 32, 1, 1);
    t37 = (t1 + 22888);
    t38 = (t1 + 22888);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t42 = (t1 + 22888);
    t44 = (t42 + 64U);
    t48 = *((char **)t44);
    t49 = (t1 + 28168);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t1 + 8768);
    t53 = *((char **)t52);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_multiply(t46, 32, t51, 12, t53, 32);
    t52 = (t1 + 28328);
    t54 = (t52 + 56U);
    t56 = *((char **)t54);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t46, 32, t56, 32);
    xsi_vlog_generic_convert_array_indices(t43, t45, t41, t48, 2, 1, t47, 32, 2);
    t57 = (t43 + 4);
    t21 = *((unsigned int *)t57);
    t58 = (!(t21));
    t59 = (t45 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB122;

LAB123:    t4 = (t1 + 28328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 28328);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB118;

LAB122:    t23 = *((unsigned int *)t43);
    t24 = *((unsigned int *)t45);
    t63 = (t23 - t24);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t37, t18, 0, *((unsigned int *)t45), t64);
    goto LAB123;

LAB124:    *((unsigned int *)t10) = 1;
    goto LAB127;

LAB126:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB127;

LAB128:    t9 = ((char*)((ng10)));
    t11 = ((char*)((ng12)));
    xsi_vlog_unsigned_equal(t179, 64, t9, 64, t11, 64);
    memset(t18, 0, 8);
    t12 = (t179 + 4);
    t25 = *((unsigned int *)t12);
    t28 = (~(t25));
    t29 = *((unsigned int *)t179);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t12) != 0)
        goto LAB133;

LAB134:    t32 = *((unsigned int *)t10);
    t68 = *((unsigned int *)t18);
    t74 = (t32 | t68);
    *((unsigned int *)t40) = t74;
    t20 = (t10 + 4);
    t26 = (t18 + 4);
    t27 = (t40 + 4);
    t75 = *((unsigned int *)t20);
    t76 = *((unsigned int *)t26);
    t77 = (t75 | t76);
    *((unsigned int *)t27) = t77;
    t78 = *((unsigned int *)t27);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB135;

LAB136:
LAB137:    goto LAB130;

LAB131:    *((unsigned int *)t18) = 1;
    goto LAB134;

LAB133:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB134;

LAB135:    t80 = *((unsigned int *)t40);
    t81 = *((unsigned int *)t27);
    *((unsigned int *)t40) = (t80 | t81);
    t33 = (t10 + 4);
    t34 = (t18 + 4);
    t82 = *((unsigned int *)t33);
    t83 = (~(t82));
    t84 = *((unsigned int *)t10);
    t58 = (t84 & t83);
    t85 = *((unsigned int *)t34);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t60 = (t87 & t86);
    t88 = (~(t58));
    t89 = (~(t60));
    t90 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t90 & t88);
    t91 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t91 & t89);
    goto LAB137;

LAB138:    *((unsigned int *)t43) = 1;
    goto LAB141;

LAB140:    t36 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB141;

LAB142:    t38 = (t1 + 6592);
    t39 = *((char **)t38);
    t38 = ((char*)((ng3)));
    memset(t45, 0, 8);
    xsi_vlog_signed_equal(t45, 32, t39, 32, t38, 32);
    memset(t46, 0, 8);
    t41 = (t45 + 4);
    t100 = *((unsigned int *)t41);
    t101 = (~(t100));
    t102 = *((unsigned int *)t45);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t41) != 0)
        goto LAB147;

LAB148:    t105 = *((unsigned int *)t43);
    t106 = *((unsigned int *)t46);
    t107 = (t105 & t106);
    *((unsigned int *)t47) = t107;
    t44 = (t43 + 4);
    t48 = (t46 + 4);
    t49 = (t47 + 4);
    t108 = *((unsigned int *)t44);
    t109 = *((unsigned int *)t48);
    t110 = (t108 | t109);
    *((unsigned int *)t49) = t110;
    t111 = *((unsigned int *)t49);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB149;

LAB150:
LAB151:    goto LAB144;

LAB145:    *((unsigned int *)t46) = 1;
    goto LAB148;

LAB147:    t42 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB148;

LAB149:    t113 = *((unsigned int *)t47);
    t114 = *((unsigned int *)t49);
    *((unsigned int *)t47) = (t113 | t114);
    t50 = (t43 + 4);
    t51 = (t46 + 4);
    t115 = *((unsigned int *)t43);
    t116 = (~(t115));
    t118 = *((unsigned int *)t50);
    t119 = (~(t118));
    t120 = *((unsigned int *)t46);
    t121 = (~(t120));
    t122 = *((unsigned int *)t51);
    t124 = (~(t122));
    t61 = (t116 & t119);
    t63 = (t121 & t124);
    t125 = (~(t61));
    t126 = (~(t63));
    t127 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t127 & t125);
    t128 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t128 & t126);
    t129 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t129 & t125);
    t130 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t130 & t126);
    goto LAB151;

LAB152:
LAB155:    t53 = (t1 + 6728);
    t54 = *((char **)t53);
    t53 = ((char*)((ng3)));
    memset(t55, 0, 8);
    xsi_vlog_signed_equal(t55, 32, t54, 32, t53, 32);
    memset(t117, 0, 8);
    t56 = (t55 + 4);
    t136 = *((unsigned int *)t56);
    t137 = (~(t136));
    t138 = *((unsigned int *)t55);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t56) != 0)
        goto LAB158;

LAB159:    t59 = (t117 + 4);
    t141 = *((unsigned int *)t117);
    t142 = *((unsigned int *)t59);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB160;

LAB161:    memcpy(t154, t117, 8);

LAB162:    memset(t171, 0, 8);
    t175 = (t154 + 4);
    t200 = *((unsigned int *)t175);
    t201 = (~(t200));
    t202 = *((unsigned int *)t154);
    t203 = (t202 & t201);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t175) != 0)
        goto LAB176;

LAB177:    t205 = (t171 + 4);
    t206 = *((unsigned int *)t171);
    t207 = (!(t206));
    t208 = *((unsigned int *)t205);
    t209 = (t207 || t208);
    if (t209 > 0)
        goto LAB178;

LAB179:    memcpy(t363, t171, 8);

LAB180:    t391 = (t363 + 4);
    t392 = *((unsigned int *)t391);
    t393 = (~(t392));
    t394 = *((unsigned int *)t363);
    t395 = (t394 & t393);
    t396 = (t395 != 0);
    if (t396 > 0)
        goto LAB224;

LAB225:
LAB230:    t4 = ((char*)((ng4)));
    t5 = (t1 + 23048);
    t6 = (t1 + 23048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t1 + 23048);
    t11 = (t9 + 64U);
    t12 = *((char **)t11);
    t19 = (t1 + 27208);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t10, t18, t8, t12, 2, 1, t26, 12, 2);
    t27 = (t10 + 4);
    t13 = *((unsigned int *)t27);
    t58 = (!(t13));
    t33 = (t18 + 4);
    t14 = *((unsigned int *)t33);
    t60 = (!(t14));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB231;

LAB232:
LAB226:    t4 = (t1 + 6728);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t5, 32, t4, 32);
    memset(t18, 0, 8);
    t6 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB233;

LAB234:    if (*((unsigned int *)t6) != 0)
        goto LAB235;

LAB236:    t8 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    t23 = *((unsigned int *)t8);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB237;

LAB238:    memcpy(t45, t18, 8);

LAB239:    memset(t46, 0, 8);
    t35 = (t45 + 4);
    t92 = *((unsigned int *)t35);
    t93 = (~(t92));
    t94 = *((unsigned int *)t45);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB247;

LAB248:    if (*((unsigned int *)t35) != 0)
        goto LAB249;

LAB250:    t37 = (t46 + 4);
    t97 = *((unsigned int *)t46);
    t98 = *((unsigned int *)t37);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB251;

LAB252:    memcpy(t117, t46, 8);

LAB253:    t59 = (t117 + 4);
    t143 = *((unsigned int *)t59);
    t144 = (~(t143));
    t145 = *((unsigned int *)t117);
    t146 = (t145 & t144);
    t147 = (t146 != 0);
    if (t147 > 0)
        goto LAB265;

LAB266:
LAB271:    t4 = ((char*)((ng4)));
    t5 = (t1 + 23208);
    t6 = (t1 + 23208);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t1 + 23208);
    t11 = (t9 + 64U);
    t12 = *((char **)t11);
    t19 = (t1 + 27208);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t10, t18, t8, t12, 2, 1, t26, 12, 2);
    t27 = (t10 + 4);
    t13 = *((unsigned int *)t27);
    t58 = (!(t13));
    t33 = (t18 + 4);
    t14 = *((unsigned int *)t33);
    t60 = (!(t14));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB272;

LAB273:
LAB267:    goto LAB154;

LAB156:    *((unsigned int *)t117) = 1;
    goto LAB159;

LAB158:    t57 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB159;

LAB160:    t62 = (t1 + 27688);
    t69 = (t62 + 56U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng9)));
    memset(t123, 0, 8);
    t72 = (t70 + 4);
    t73 = (t71 + 4);
    t144 = *((unsigned int *)t70);
    t145 = *((unsigned int *)t71);
    t146 = (t144 ^ t145);
    t147 = *((unsigned int *)t72);
    t148 = *((unsigned int *)t73);
    t149 = (t147 ^ t148);
    t150 = (t146 | t149);
    t151 = *((unsigned int *)t72);
    t152 = *((unsigned int *)t73);
    t157 = (t151 | t152);
    t158 = (~(t157));
    t159 = (t150 & t158);
    if (t159 != 0)
        goto LAB166;

LAB163:    if (t157 != 0)
        goto LAB165;

LAB164:    *((unsigned int *)t123) = 1;

LAB166:    memset(t153, 0, 8);
    t156 = (t123 + 4);
    t160 = *((unsigned int *)t156);
    t161 = (~(t160));
    t162 = *((unsigned int *)t123);
    t164 = (t162 & t161);
    t165 = (t164 & 1U);
    if (t165 != 0)
        goto LAB167;

LAB168:    if (*((unsigned int *)t156) != 0)
        goto LAB169;

LAB170:    t166 = *((unsigned int *)t117);
    t167 = *((unsigned int *)t153);
    t168 = (t166 & t167);
    *((unsigned int *)t154) = t168;
    t169 = (t117 + 4);
    t170 = (t153 + 4);
    t172 = (t154 + 4);
    t177 = *((unsigned int *)t169);
    t180 = *((unsigned int *)t170);
    t181 = (t177 | t180);
    *((unsigned int *)t172) = t181;
    t182 = *((unsigned int *)t172);
    t183 = (t182 != 0);
    if (t183 == 1)
        goto LAB171;

LAB172:
LAB173:    goto LAB162;

LAB165:    t155 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB166;

LAB167:    *((unsigned int *)t153) = 1;
    goto LAB170;

LAB169:    t163 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t163) = 1;
    goto LAB170;

LAB171:    t184 = *((unsigned int *)t154);
    t185 = *((unsigned int *)t172);
    *((unsigned int *)t154) = (t184 | t185);
    t173 = (t117 + 4);
    t174 = (t153 + 4);
    t186 = *((unsigned int *)t117);
    t187 = (~(t186));
    t188 = *((unsigned int *)t173);
    t189 = (~(t188));
    t190 = *((unsigned int *)t153);
    t191 = (~(t190));
    t192 = *((unsigned int *)t174);
    t193 = (~(t192));
    t64 = (t187 & t189);
    t65 = (t191 & t193);
    t194 = (~(t64));
    t195 = (~(t65));
    t196 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t196 & t194);
    t197 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t197 & t195);
    t198 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t198 & t194);
    t199 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t199 & t195);
    goto LAB173;

LAB174:    *((unsigned int *)t171) = 1;
    goto LAB177;

LAB176:    t176 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB177;

LAB178:    t210 = (t1 + 6728);
    t211 = *((char **)t210);
    t210 = ((char*)((ng8)));
    memset(t212, 0, 8);
    xsi_vlog_signed_equal(t212, 32, t211, 32, t210, 32);
    memset(t213, 0, 8);
    t214 = (t212 + 4);
    t215 = *((unsigned int *)t214);
    t216 = (~(t215));
    t217 = *((unsigned int *)t212);
    t218 = (t217 & t216);
    t219 = (t218 & 1U);
    if (t219 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t214) != 0)
        goto LAB183;

LAB184:    t221 = (t213 + 4);
    t222 = *((unsigned int *)t213);
    t223 = *((unsigned int *)t221);
    t224 = (t222 || t223);
    if (t224 > 0)
        goto LAB185;

LAB186:    memcpy(t253, t213, 8);

LAB187:    memset(t283, 0, 8);
    t284 = (t253 + 4);
    t285 = *((unsigned int *)t284);
    t286 = (~(t285));
    t287 = *((unsigned int *)t253);
    t288 = (t287 & t286);
    t289 = (t288 & 1U);
    if (t289 != 0)
        goto LAB199;

LAB200:    if (*((unsigned int *)t284) != 0)
        goto LAB201;

LAB202:    t291 = (t283 + 4);
    t292 = *((unsigned int *)t283);
    t293 = *((unsigned int *)t291);
    t294 = (t292 || t293);
    if (t294 > 0)
        goto LAB203;

LAB204:    memcpy(t323, t283, 8);

LAB205:    memset(t355, 0, 8);
    t356 = (t323 + 4);
    t357 = *((unsigned int *)t356);
    t358 = (~(t357));
    t359 = *((unsigned int *)t323);
    t360 = (t359 & t358);
    t361 = (t360 & 1U);
    if (t361 != 0)
        goto LAB217;

LAB218:    if (*((unsigned int *)t356) != 0)
        goto LAB219;

LAB220:    t364 = *((unsigned int *)t171);
    t365 = *((unsigned int *)t355);
    t366 = (t364 | t365);
    *((unsigned int *)t363) = t366;
    t367 = (t171 + 4);
    t368 = (t355 + 4);
    t369 = (t363 + 4);
    t370 = *((unsigned int *)t367);
    t371 = *((unsigned int *)t368);
    t372 = (t370 | t371);
    *((unsigned int *)t369) = t372;
    t373 = *((unsigned int *)t369);
    t374 = (t373 != 0);
    if (t374 == 1)
        goto LAB221;

LAB222:
LAB223:    goto LAB180;

LAB181:    *((unsigned int *)t213) = 1;
    goto LAB184;

LAB183:    t220 = (t213 + 4);
    *((unsigned int *)t213) = 1;
    *((unsigned int *)t220) = 1;
    goto LAB184;

LAB185:    t225 = (t1 + 27688);
    t226 = (t225 + 56U);
    t227 = *((char **)t226);
    t228 = ((char*)((ng9)));
    memset(t229, 0, 8);
    t230 = (t227 + 4);
    t231 = (t228 + 4);
    t232 = *((unsigned int *)t227);
    t233 = *((unsigned int *)t228);
    t234 = (t232 ^ t233);
    t235 = *((unsigned int *)t230);
    t236 = *((unsigned int *)t231);
    t237 = (t235 ^ t236);
    t238 = (t234 | t237);
    t239 = *((unsigned int *)t230);
    t240 = *((unsigned int *)t231);
    t241 = (t239 | t240);
    t242 = (~(t241));
    t243 = (t238 & t242);
    if (t243 != 0)
        goto LAB191;

LAB188:    if (t241 != 0)
        goto LAB190;

LAB189:    *((unsigned int *)t229) = 1;

LAB191:    memset(t245, 0, 8);
    t246 = (t229 + 4);
    t247 = *((unsigned int *)t246);
    t248 = (~(t247));
    t249 = *((unsigned int *)t229);
    t250 = (t249 & t248);
    t251 = (t250 & 1U);
    if (t251 != 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t246) != 0)
        goto LAB194;

LAB195:    t254 = *((unsigned int *)t213);
    t255 = *((unsigned int *)t245);
    t256 = (t254 & t255);
    *((unsigned int *)t253) = t256;
    t257 = (t213 + 4);
    t258 = (t245 + 4);
    t259 = (t253 + 4);
    t260 = *((unsigned int *)t257);
    t261 = *((unsigned int *)t258);
    t262 = (t260 | t261);
    *((unsigned int *)t259) = t262;
    t263 = *((unsigned int *)t259);
    t264 = (t263 != 0);
    if (t264 == 1)
        goto LAB196;

LAB197:
LAB198:    goto LAB187;

LAB190:    t244 = (t229 + 4);
    *((unsigned int *)t229) = 1;
    *((unsigned int *)t244) = 1;
    goto LAB191;

LAB192:    *((unsigned int *)t245) = 1;
    goto LAB195;

LAB194:    t252 = (t245 + 4);
    *((unsigned int *)t245) = 1;
    *((unsigned int *)t252) = 1;
    goto LAB195;

LAB196:    t265 = *((unsigned int *)t253);
    t266 = *((unsigned int *)t259);
    *((unsigned int *)t253) = (t265 | t266);
    t267 = (t213 + 4);
    t268 = (t245 + 4);
    t269 = *((unsigned int *)t213);
    t270 = (~(t269));
    t271 = *((unsigned int *)t267);
    t272 = (~(t271));
    t273 = *((unsigned int *)t245);
    t274 = (~(t273));
    t275 = *((unsigned int *)t268);
    t276 = (~(t275));
    t66 = (t270 & t272);
    t67 = (t274 & t276);
    t277 = (~(t66));
    t278 = (~(t67));
    t279 = *((unsigned int *)t259);
    *((unsigned int *)t259) = (t279 & t277);
    t280 = *((unsigned int *)t259);
    *((unsigned int *)t259) = (t280 & t278);
    t281 = *((unsigned int *)t253);
    *((unsigned int *)t253) = (t281 & t277);
    t282 = *((unsigned int *)t253);
    *((unsigned int *)t253) = (t282 & t278);
    goto LAB198;

LAB199:    *((unsigned int *)t283) = 1;
    goto LAB202;

LAB201:    t290 = (t283 + 4);
    *((unsigned int *)t283) = 1;
    *((unsigned int *)t290) = 1;
    goto LAB202;

LAB203:    t295 = (t1 + 27848);
    t296 = (t295 + 56U);
    t297 = *((char **)t296);
    t298 = ((char*)((ng9)));
    memset(t299, 0, 8);
    t300 = (t297 + 4);
    t301 = (t298 + 4);
    t302 = *((unsigned int *)t297);
    t303 = *((unsigned int *)t298);
    t304 = (t302 ^ t303);
    t305 = *((unsigned int *)t300);
    t306 = *((unsigned int *)t301);
    t307 = (t305 ^ t306);
    t308 = (t304 | t307);
    t309 = *((unsigned int *)t300);
    t310 = *((unsigned int *)t301);
    t311 = (t309 | t310);
    t312 = (~(t311));
    t313 = (t308 & t312);
    if (t313 != 0)
        goto LAB207;

LAB206:    if (t311 != 0)
        goto LAB208;

LAB209:    memset(t315, 0, 8);
    t316 = (t299 + 4);
    t317 = *((unsigned int *)t316);
    t318 = (~(t317));
    t319 = *((unsigned int *)t299);
    t320 = (t319 & t318);
    t321 = (t320 & 1U);
    if (t321 != 0)
        goto LAB210;

LAB211:    if (*((unsigned int *)t316) != 0)
        goto LAB212;

LAB213:    t324 = *((unsigned int *)t283);
    t325 = *((unsigned int *)t315);
    t326 = (t324 & t325);
    *((unsigned int *)t323) = t326;
    t327 = (t283 + 4);
    t328 = (t315 + 4);
    t329 = (t323 + 4);
    t330 = *((unsigned int *)t327);
    t331 = *((unsigned int *)t328);
    t332 = (t330 | t331);
    *((unsigned int *)t329) = t332;
    t333 = *((unsigned int *)t329);
    t334 = (t333 != 0);
    if (t334 == 1)
        goto LAB214;

LAB215:
LAB216:    goto LAB205;

LAB207:    *((unsigned int *)t299) = 1;
    goto LAB209;

LAB208:    t314 = (t299 + 4);
    *((unsigned int *)t299) = 1;
    *((unsigned int *)t314) = 1;
    goto LAB209;

LAB210:    *((unsigned int *)t315) = 1;
    goto LAB213;

LAB212:    t322 = (t315 + 4);
    *((unsigned int *)t315) = 1;
    *((unsigned int *)t322) = 1;
    goto LAB213;

LAB214:    t335 = *((unsigned int *)t323);
    t336 = *((unsigned int *)t329);
    *((unsigned int *)t323) = (t335 | t336);
    t337 = (t283 + 4);
    t338 = (t315 + 4);
    t339 = *((unsigned int *)t283);
    t340 = (~(t339));
    t341 = *((unsigned int *)t337);
    t342 = (~(t341));
    t343 = *((unsigned int *)t315);
    t344 = (~(t343));
    t345 = *((unsigned int *)t338);
    t346 = (~(t345));
    t347 = (t340 & t342);
    t348 = (t344 & t346);
    t349 = (~(t347));
    t350 = (~(t348));
    t351 = *((unsigned int *)t329);
    *((unsigned int *)t329) = (t351 & t349);
    t352 = *((unsigned int *)t329);
    *((unsigned int *)t329) = (t352 & t350);
    t353 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t353 & t349);
    t354 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t354 & t350);
    goto LAB216;

LAB217:    *((unsigned int *)t355) = 1;
    goto LAB220;

LAB219:    t362 = (t355 + 4);
    *((unsigned int *)t355) = 1;
    *((unsigned int *)t362) = 1;
    goto LAB220;

LAB221:    t375 = *((unsigned int *)t363);
    t376 = *((unsigned int *)t369);
    *((unsigned int *)t363) = (t375 | t376);
    t377 = (t171 + 4);
    t378 = (t355 + 4);
    t379 = *((unsigned int *)t377);
    t380 = (~(t379));
    t381 = *((unsigned int *)t171);
    t382 = (t381 & t380);
    t383 = *((unsigned int *)t378);
    t384 = (~(t383));
    t385 = *((unsigned int *)t355);
    t386 = (t385 & t384);
    t387 = (~(t382));
    t388 = (~(t386));
    t389 = *((unsigned int *)t369);
    *((unsigned int *)t369) = (t389 & t387);
    t390 = *((unsigned int *)t369);
    *((unsigned int *)t369) = (t390 & t388);
    goto LAB223;

LAB224:
LAB227:    t397 = ((char*)((ng3)));
    t398 = (t1 + 23048);
    t401 = (t1 + 23048);
    t402 = (t401 + 72U);
    t403 = *((char **)t402);
    t404 = (t1 + 23048);
    t405 = (t404 + 64U);
    t406 = *((char **)t405);
    t407 = (t1 + 27208);
    t408 = (t407 + 56U);
    t409 = *((char **)t408);
    xsi_vlog_generic_convert_array_indices(t399, t400, t403, t406, 2, 1, t409, 12, 2);
    t410 = (t399 + 4);
    t411 = *((unsigned int *)t410);
    t412 = (!(t411));
    t413 = (t400 + 4);
    t414 = *((unsigned int *)t413);
    t415 = (!(t414));
    t416 = (t412 && t415);
    if (t416 == 1)
        goto LAB228;

LAB229:    goto LAB226;

LAB228:    t417 = *((unsigned int *)t399);
    t418 = *((unsigned int *)t400);
    t419 = (t417 - t418);
    t420 = (t419 + 1);
    xsi_vlogvar_assign_value(t398, t397, 0, *((unsigned int *)t400), t420);
    goto LAB229;

LAB231:    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t18);
    t63 = (t15 - t16);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t18), t64);
    goto LAB232;

LAB233:    *((unsigned int *)t18) = 1;
    goto LAB236;

LAB235:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB236;

LAB237:    t9 = (t1 + 6728);
    t11 = *((char **)t9);
    t9 = ((char*)((ng8)));
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t11, 32, t9, 32);
    memset(t43, 0, 8);
    t12 = (t40 + 4);
    t25 = *((unsigned int *)t12);
    t28 = (~(t25));
    t29 = *((unsigned int *)t40);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB240;

LAB241:    if (*((unsigned int *)t12) != 0)
        goto LAB242;

LAB243:    t32 = *((unsigned int *)t18);
    t68 = *((unsigned int *)t43);
    t74 = (t32 | t68);
    *((unsigned int *)t45) = t74;
    t20 = (t18 + 4);
    t26 = (t43 + 4);
    t27 = (t45 + 4);
    t75 = *((unsigned int *)t20);
    t76 = *((unsigned int *)t26);
    t77 = (t75 | t76);
    *((unsigned int *)t27) = t77;
    t78 = *((unsigned int *)t27);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB244;

LAB245:
LAB246:    goto LAB239;

LAB240:    *((unsigned int *)t43) = 1;
    goto LAB243;

LAB242:    t19 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB243;

LAB244:    t80 = *((unsigned int *)t45);
    t81 = *((unsigned int *)t27);
    *((unsigned int *)t45) = (t80 | t81);
    t33 = (t18 + 4);
    t34 = (t43 + 4);
    t82 = *((unsigned int *)t33);
    t83 = (~(t82));
    t84 = *((unsigned int *)t18);
    t58 = (t84 & t83);
    t85 = *((unsigned int *)t34);
    t86 = (~(t85));
    t87 = *((unsigned int *)t43);
    t60 = (t87 & t86);
    t88 = (~(t58));
    t89 = (~(t60));
    t90 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t90 & t88);
    t91 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t91 & t89);
    goto LAB246;

LAB247:    *((unsigned int *)t46) = 1;
    goto LAB250;

LAB249:    t36 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB250;

LAB251:    t38 = (t1 + 27848);
    t39 = (t38 + 56U);
    t41 = *((char **)t39);
    t42 = ((char*)((ng9)));
    memset(t47, 0, 8);
    t44 = (t41 + 4);
    t48 = (t42 + 4);
    t100 = *((unsigned int *)t41);
    t101 = *((unsigned int *)t42);
    t102 = (t100 ^ t101);
    t103 = *((unsigned int *)t44);
    t104 = *((unsigned int *)t48);
    t105 = (t103 ^ t104);
    t106 = (t102 | t105);
    t107 = *((unsigned int *)t44);
    t108 = *((unsigned int *)t48);
    t109 = (t107 | t108);
    t110 = (~(t109));
    t111 = (t106 & t110);
    if (t111 != 0)
        goto LAB257;

LAB254:    if (t109 != 0)
        goto LAB256;

LAB255:    *((unsigned int *)t47) = 1;

LAB257:    memset(t55, 0, 8);
    t50 = (t47 + 4);
    t112 = *((unsigned int *)t50);
    t113 = (~(t112));
    t114 = *((unsigned int *)t47);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB258;

LAB259:    if (*((unsigned int *)t50) != 0)
        goto LAB260;

LAB261:    t118 = *((unsigned int *)t46);
    t119 = *((unsigned int *)t55);
    t120 = (t118 & t119);
    *((unsigned int *)t117) = t120;
    t52 = (t46 + 4);
    t53 = (t55 + 4);
    t54 = (t117 + 4);
    t121 = *((unsigned int *)t52);
    t122 = *((unsigned int *)t53);
    t124 = (t121 | t122);
    *((unsigned int *)t54) = t124;
    t125 = *((unsigned int *)t54);
    t126 = (t125 != 0);
    if (t126 == 1)
        goto LAB262;

LAB263:
LAB264:    goto LAB253;

LAB256:    t49 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB257;

LAB258:    *((unsigned int *)t55) = 1;
    goto LAB261;

LAB260:    t51 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB261;

LAB262:    t127 = *((unsigned int *)t117);
    t128 = *((unsigned int *)t54);
    *((unsigned int *)t117) = (t127 | t128);
    t56 = (t46 + 4);
    t57 = (t55 + 4);
    t129 = *((unsigned int *)t46);
    t130 = (~(t129));
    t131 = *((unsigned int *)t56);
    t132 = (~(t131));
    t133 = *((unsigned int *)t55);
    t134 = (~(t133));
    t135 = *((unsigned int *)t57);
    t136 = (~(t135));
    t61 = (t130 & t132);
    t63 = (t134 & t136);
    t137 = (~(t61));
    t138 = (~(t63));
    t139 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t139 & t137);
    t140 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t140 & t138);
    t141 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t141 & t137);
    t142 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t142 & t138);
    goto LAB264;

LAB265:
LAB268:    t62 = ((char*)((ng3)));
    t69 = (t1 + 23208);
    t70 = (t1 + 23208);
    t71 = (t70 + 72U);
    t72 = *((char **)t71);
    t73 = (t1 + 23208);
    t155 = (t73 + 64U);
    t156 = *((char **)t155);
    t163 = (t1 + 27208);
    t169 = (t163 + 56U);
    t170 = *((char **)t169);
    xsi_vlog_generic_convert_array_indices(t123, t153, t72, t156, 2, 1, t170, 12, 2);
    t172 = (t123 + 4);
    t148 = *((unsigned int *)t172);
    t64 = (!(t148));
    t173 = (t153 + 4);
    t149 = *((unsigned int *)t173);
    t65 = (!(t149));
    t66 = (t64 && t65);
    if (t66 == 1)
        goto LAB269;

LAB270:    goto LAB267;

LAB269:    t150 = *((unsigned int *)t123);
    t151 = *((unsigned int *)t153);
    t67 = (t150 - t151);
    t347 = (t67 + 1);
    xsi_vlogvar_assign_value(t69, t62, 0, *((unsigned int *)t153), t347);
    goto LAB270;

LAB272:    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t18);
    t63 = (t15 - t16);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t18), t64);
    goto LAB273;

}

static int sp_write_b(char *t1, char *t2)
{
    char t10[8];
    char t18[8];
    char t40[8];
    char t43[8];
    char t45[8];
    char t46[8];
    char t47[8];
    char t55[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t44;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    char *t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 12432);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 28488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9584);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 32, t7, 12, t9, 32);
    t8 = (t1 + 29128);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 12);
    t4 = (t1 + 29128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5504);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB9;

LAB8:    *((unsigned int *)t10) = 1;

LAB9:    t12 = (t10 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:
LAB23:    t4 = (t1 + 4824);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB24;

LAB25:
LAB58:    t4 = (t1 + 28808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 28968);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);

LAB26:    t4 = (t1 + 9040);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t5, 32, t4, 32);
    t6 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB59;

LAB60:
LAB65:    t4 = ((char*)((ng4)));
    t5 = (t1 + 29288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB66:    t4 = (t1 + 29288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9040);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB67;

LAB68:
LAB61:
LAB13:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:
LAB14:    t19 = (t1 + 7272);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t19) == 0)
        goto LAB15;

LAB17:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB18:    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB13;

LAB15:    *((unsigned int *)t18) = 1;
    goto LAB18;

LAB19:
LAB22:    t33 = ((char*)((ng0)));
    t34 = ((char*)((ng2)));
    t35 = (t1 + 28488);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 12432);
    xsi_vlogfile_fwrite(*((unsigned int *)t33), 1, 0, 0, ng13, 3, t38, (char)118, t34, 128, (char)118, t37, 12);
    goto LAB21;

LAB24:
LAB27:    t6 = (t1 + 9040);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t7, 32, t6, 32);
    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (~(t21));
    t23 = *((unsigned int *)t10);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB28;

LAB29:
LAB32:    t4 = ((char*)((ng4)));
    t5 = (t1 + 29288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB33:    t4 = (t1 + 29288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9040);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB34;

LAB35:
LAB30:    t4 = (t1 + 4960);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t5, 32, t4, 32);
    t6 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB39;

LAB40:
LAB47:    t4 = ((char*)((ng4)));
    t5 = (t1 + 29288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB48:    t4 = (t1 + 29288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4960);
    t8 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t8, 32);
    t7 = (t10 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t10);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB49;

LAB50:
LAB41:    goto LAB26;

LAB28:
LAB31:    t9 = (t1 + 22888);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 22888);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 22888);
    t33 = (t27 + 64U);
    t34 = *((char **)t33);
    t35 = (t1 + 29128);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t18, 16, t12, t26, t34, 2, 1, t37, 12, 2);
    t38 = (t1 + 28968);
    xsi_vlogvar_assign_value(t38, t18, 0, 0, 16);
    goto LAB30;

LAB34:
LAB36:    t9 = (t1 + 22888);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 22888);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 22888);
    t33 = (t27 + 64U);
    t34 = *((char **)t33);
    t35 = (t1 + 29128);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 9040);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_multiply(t40, 32, t37, 12, t39, 32);
    t38 = (t1 + 29288);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t40, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t18, 16, t12, t26, t34, 2, 1, t43, 32, 2);
    t44 = (t1 + 28968);
    t48 = (t1 + 28968);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t1 + 8224);
    t52 = *((char **)t51);
    t51 = (t1 + 29288);
    t53 = (t51 + 56U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t52, 32, t54, 32);
    t56 = ((char*)((ng5)));
    xsi_vlog_convert_indexed_partindices(t45, t46, t47, ((int*)(t50)), 2, t55, 32, 1, t56, 32, 1, 1);
    t57 = (t45 + 4);
    t21 = *((unsigned int *)t57);
    t58 = (!(t21));
    t59 = (t46 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t58 && t60);
    t62 = (t47 + 4);
    t23 = *((unsigned int *)t62);
    t63 = (!(t23));
    t64 = (t61 && t63);
    if (t64 == 1)
        goto LAB37;

LAB38:    t4 = (t1 + 29288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 29288);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB33;

LAB37:    t24 = *((unsigned int *)t47);
    t65 = (t24 + 0);
    t25 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t46);
    t66 = (t25 - t28);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t44, t18, t65, *((unsigned int *)t46), t67);
    goto LAB38;

LAB39:
LAB42:    t7 = (t1 + 28648);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t12);
    t25 = (t24 >> 0);
    t28 = (t25 & 1);
    *((unsigned int *)t11) = t28;
    t19 = (t18 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t18);
    t32 = (t31 & t30);
    t68 = (t32 != 0);
    if (t68 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB41;

LAB43:
LAB46:    t20 = (t1 + 28808);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t33 = (t1 + 28968);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 16);
    goto LAB45;

LAB49:
LAB51:    t9 = (t1 + 28648);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 28648);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 29288);
    t33 = (t27 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t18, 1, t12, t26, 2, t34, 32, 1);
    t35 = (t18 + 4);
    t21 = *((unsigned int *)t35);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB52;

LAB53:
LAB54:    t4 = (t1 + 29288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 29288);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB48;

LAB52:
LAB55:    t36 = (t1 + 28808);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 28808);
    t41 = (t39 + 72U);
    t42 = *((char **)t41);
    t44 = (t1 + 9856);
    t48 = *((char **)t44);
    t44 = (t1 + 29288);
    t49 = (t44 + 56U);
    t50 = *((char **)t49);
    memset(t43, 0, 8);
    xsi_vlog_signed_multiply(t43, 32, t48, 32, t50, 32);
    t51 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t40, 8, t38, ((int*)(t42)), 2, t43, 32, 1, t51, 32, 1, 1);
    t52 = (t1 + 28968);
    t53 = (t1 + 28968);
    t54 = (t53 + 72U);
    t56 = *((char **)t54);
    t57 = (t1 + 9856);
    t59 = *((char **)t57);
    t57 = (t1 + 29288);
    t62 = (t57 + 56U);
    t69 = *((char **)t62);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t59, 32, t69, 32);
    t70 = ((char*)((ng6)));
    xsi_vlog_convert_indexed_partindices(t45, t46, t47, ((int*)(t56)), 2, t55, 32, 1, t70, 32, 1, 1);
    t71 = (t45 + 4);
    t28 = *((unsigned int *)t71);
    t58 = (!(t28));
    t72 = (t46 + 4);
    t29 = *((unsigned int *)t72);
    t60 = (!(t29));
    t61 = (t58 && t60);
    t73 = (t47 + 4);
    t30 = *((unsigned int *)t73);
    t63 = (!(t30));
    t64 = (t61 && t63);
    if (t64 == 1)
        goto LAB56;

LAB57:    goto LAB54;

LAB56:    t31 = *((unsigned int *)t47);
    t65 = (t31 + 0);
    t32 = *((unsigned int *)t45);
    t68 = *((unsigned int *)t46);
    t66 = (t32 - t68);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t52, t40, t65, *((unsigned int *)t46), t67);
    goto LAB57;

LAB59:
LAB62:    t7 = (t1 + 28968);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 22888);
    t12 = (t1 + 22888);
    t19 = (t12 + 72U);
    t20 = *((char **)t19);
    t26 = (t1 + 22888);
    t27 = (t26 + 64U);
    t33 = *((char **)t27);
    t34 = (t1 + 29128);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 9040);
    t38 = *((char **)t37);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_multiply(t43, 32, t36, 12, t38, 32);
    xsi_vlog_generic_convert_array_indices(t18, t40, t20, t33, 2, 1, t43, 32, 2);
    t37 = (t18 + 4);
    t21 = *((unsigned int *)t37);
    t58 = (!(t21));
    t39 = (t40 + 4);
    t22 = *((unsigned int *)t39);
    t60 = (!(t22));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB63;

LAB64:    goto LAB61;

LAB63:    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t40);
    t63 = (t23 - t24);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t11, t9, 0, *((unsigned int *)t40), t64);
    goto LAB64;

LAB67:
LAB69:    t9 = (t1 + 28968);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 28968);
    t20 = (t19 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 8224);
    t33 = *((char **)t27);
    t27 = (t1 + 29288);
    t34 = (t27 + 56U);
    t35 = *((char **)t34);
    memset(t40, 0, 8);
    xsi_vlog_signed_multiply(t40, 32, t33, 32, t35, 32);
    t36 = ((char*)((ng5)));
    xsi_vlog_get_indexed_partselect(t18, 16, t12, ((int*)(t26)), 2, t40, 32, 1, t36, 32, 1, 1);
    t37 = (t1 + 22888);
    t38 = (t1 + 22888);
    t39 = (t38 + 72U);
    t41 = *((char **)t39);
    t42 = (t1 + 22888);
    t44 = (t42 + 64U);
    t48 = *((char **)t44);
    t49 = (t1 + 29128);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = (t1 + 9040);
    t53 = *((char **)t52);
    memset(t46, 0, 8);
    xsi_vlog_unsigned_multiply(t46, 32, t51, 12, t53, 32);
    t52 = (t1 + 29288);
    t54 = (t52 + 56U);
    t56 = *((char **)t54);
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t46, 32, t56, 32);
    xsi_vlog_generic_convert_array_indices(t43, t45, t41, t48, 2, 1, t47, 32, 2);
    t57 = (t43 + 4);
    t21 = *((unsigned int *)t57);
    t58 = (!(t21));
    t59 = (t45 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t58 && t60);
    if (t61 == 1)
        goto LAB70;

LAB71:    t4 = (t1 + 29288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 29288);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB66;

LAB70:    t23 = *((unsigned int *)t43);
    t24 = *((unsigned int *)t45);
    t63 = (t23 - t24);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t37, t18, 0, *((unsigned int *)t45), t64);
    goto LAB71;

}

static int sp_read_a(char *t1, char *t2)
{
    char t18[8];
    char t19[8];
    char t39[8];
    char t43[8];
    char t45[8];
    char t46[8];
    char t47[8];
    char t55[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    char *t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 12864);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 29608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB10:    t4 = (t1 + 29448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9448);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_divide(t18, 32, t6, 12, t8, 32);
    t7 = (t1 + 29768);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 12);
    t4 = (t1 + 29768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3736);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB12;

LAB11:    t14 = (t8 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB14;

LAB13:    *((unsigned int *)t18) = 1;

LAB14:    t16 = (t18 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t18);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB16;

LAB17:
LAB28:    t4 = (t1 + 8904);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_signed_equal(t18, 32, t5, 32, t4, 32);
    t6 = (t18 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t18);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:
LAB33:    t4 = ((char*)((ng4)));
    t5 = (t1 + 29928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB34:    t4 = (t1 + 29928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8904);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t6, 32, t8, 32);
    t7 = (t18 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t18);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB35;

LAB36:
LAB31:
LAB18:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:
LAB9:    t14 = (t1 + 24168);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 23368);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 16, 100LL);
    goto LAB8;

LAB12:    t15 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:
LAB19:    t17 = (t1 + 7272);
    t20 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t20 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t17) == 0)
        goto LAB20;

LAB22:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;

LAB23:    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB24;

LAB25:
LAB26:    t4 = ((char*)((ng15)));
    t5 = (t1 + 23368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 100LL);
    goto LAB18;

LAB20:    *((unsigned int *)t19) = 1;
    goto LAB23;

LAB24:
LAB27:    t33 = ((char*)((ng0)));
    t34 = ((char*)((ng2)));
    t35 = (t1 + 29448);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 12864);
    xsi_vlogfile_fwrite(*((unsigned int *)t33), 1, 0, 0, ng14, 3, t38, (char)118, t34, 128, (char)118, t37, 12);
    goto LAB26;

LAB29:
LAB32:    t7 = (t1 + 22888);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t1 + 22888);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t20 = (t1 + 22888);
    t26 = (t20 + 64U);
    t27 = *((char **)t26);
    t33 = (t1 + 29768);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 8904);
    t37 = *((char **)t36);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t35, 12, t37, 32);
    xsi_vlog_generic_get_array_select_value(t19, 16, t14, t17, t27, 2, 1, t39, 32, 2);
    t36 = (t1 + 23368);
    xsi_vlogvar_wait_assign_value(t36, t19, 0, 0, 16, 100LL);
    goto LAB31;

LAB35:
LAB37:    t14 = (t1 + 22888);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 22888);
    t20 = (t17 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 22888);
    t33 = (t27 + 64U);
    t34 = *((char **)t33);
    t35 = (t1 + 29768);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 8904);
    t40 = *((char **)t38);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t37, 12, t40, 32);
    t38 = (t1 + 29928);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t39, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t19, 16, t16, t26, t34, 2, 1, t43, 32, 2);
    t44 = (t1 + 23368);
    t48 = (t1 + 23368);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t1 + 8224);
    t52 = *((char **)t51);
    t51 = (t1 + 29928);
    t53 = (t51 + 56U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t52, 32, t54, 32);
    t56 = ((char*)((ng5)));
    xsi_vlog_convert_indexed_partindices(t45, t46, t47, ((int*)(t50)), 2, t55, 32, 1, t56, 32, 1, 1);
    t57 = (t45 + 4);
    t21 = *((unsigned int *)t57);
    t58 = (!(t21));
    t59 = (t46 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t58 && t60);
    t62 = (t47 + 4);
    t23 = *((unsigned int *)t62);
    t63 = (!(t23));
    t64 = (t61 && t63);
    if (t64 == 1)
        goto LAB38;

LAB39:    t4 = (t1 + 29928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_signed_add(t18, 32, t6, 32, t7, 32);
    t8 = (t1 + 29928);
    xsi_vlogvar_assign_value(t8, t18, 0, 0, 32);
    goto LAB34;

LAB38:    t24 = *((unsigned int *)t47);
    t65 = (t24 + 0);
    t25 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t46);
    t66 = (t25 - t28);
    t67 = (t66 + 1);
    xsi_vlogvar_wait_assign_value(t44, t19, t65, *((unsigned int *)t46), t67, 100LL);
    goto LAB39;

}

static int sp_read_b(char *t1, char *t2)
{
    char t18[8];
    char t19[8];
    char t39[8];
    char t43[8];
    char t45[8];
    char t46[8];
    char t47[8];
    char t55[8];
    char t68[16];
    char t69[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    char *t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
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
    unsigned int t81;
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
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 13296);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 30248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB10:    t4 = (t1 + 30088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9720);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_divide(t18, 32, t6, 12, t8, 32);
    t7 = (t1 + 30408);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 12);
    t4 = (t1 + 30408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5640);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB12;

LAB11:    t14 = (t8 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB14;

LAB13:    *((unsigned int *)t18) = 1;

LAB14:    t16 = (t18 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t18);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB16;

LAB17:
LAB28:    t4 = (t1 + 9176);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_signed_equal(t18, 32, t5, 32, t4, 32);
    t6 = (t18 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t18);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:
LAB33:    t4 = ((char*)((ng4)));
    t5 = (t1 + 30568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB34:    t4 = (t1 + 30568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9176);
    t8 = *((char **)t7);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t6, 32, t8, 32);
    t7 = (t18 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t18);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB35;

LAB36:
LAB31:    t4 = ((char*)((ng10)));
    t5 = ((char*)((ng11)));
    xsi_vlog_unsigned_equal(t68, 64, t4, 64, t5, 64);
    memset(t18, 0, 8);
    t6 = (t68 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t68);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t6) != 0)
        goto LAB42;

LAB43:    t8 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    t23 = *((unsigned int *)t8);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB44;

LAB45:    memcpy(t39, t18, 8);

LAB46:    memset(t43, 0, 8);
    t35 = (t39 + 4);
    t89 = *((unsigned int *)t35);
    t90 = (~(t89));
    t91 = *((unsigned int *)t39);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t35) != 0)
        goto LAB56;

LAB57:    t37 = (t43 + 4);
    t94 = *((unsigned int *)t43);
    t95 = *((unsigned int *)t37);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB58;

LAB59:    memcpy(t47, t43, 8);

LAB60:    t52 = (t47 + 4);
    t126 = *((unsigned int *)t52);
    t127 = (~(t126));
    t128 = *((unsigned int *)t47);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB68;

LAB69:
LAB90:    t4 = ((char*)((ng4)));
    t5 = (t1 + 24008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 100LL);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 23848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 23688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB70:
LAB18:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:
LAB9:    t14 = (t1 + 24328);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 23528);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 16, 100LL);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 23688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    t4 = ((char*)((ng16)));
    t5 = (t1 + 23848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 24008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 100LL);
    goto LAB8;

LAB12:    t15 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB16:
LAB19:    t17 = (t1 + 7272);
    t20 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t20 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t17) == 0)
        goto LAB20;

LAB22:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;

LAB23:    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB24;

LAB25:
LAB26:    t4 = ((char*)((ng15)));
    t5 = (t1 + 23528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 100LL);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 23688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    t4 = ((char*)((ng18)));
    t5 = (t1 + 23848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);
    t4 = ((char*)((ng15)));
    t5 = (t1 + 24008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 100LL);
    goto LAB18;

LAB20:    *((unsigned int *)t19) = 1;
    goto LAB23;

LAB24:
LAB27:    t33 = ((char*)((ng0)));
    t34 = ((char*)((ng2)));
    t35 = (t1 + 30088);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 13296);
    xsi_vlogfile_fwrite(*((unsigned int *)t33), 1, 0, 0, ng17, 3, t38, (char)118, t34, 128, (char)118, t37, 12);
    goto LAB26;

LAB29:
LAB32:    t7 = (t1 + 22888);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t1 + 22888);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t20 = (t1 + 22888);
    t26 = (t20 + 64U);
    t27 = *((char **)t26);
    t33 = (t1 + 30408);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 9176);
    t37 = *((char **)t36);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t35, 12, t37, 32);
    xsi_vlog_generic_get_array_select_value(t19, 16, t14, t17, t27, 2, 1, t39, 32, 2);
    t36 = (t1 + 23528);
    xsi_vlogvar_wait_assign_value(t36, t19, 0, 0, 16, 100LL);
    goto LAB31;

LAB35:
LAB37:    t14 = (t1 + 22888);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 22888);
    t20 = (t17 + 72U);
    t26 = *((char **)t20);
    t27 = (t1 + 22888);
    t33 = (t27 + 64U);
    t34 = *((char **)t33);
    t35 = (t1 + 30408);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 9176);
    t40 = *((char **)t38);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t37, 12, t40, 32);
    t38 = (t1 + 30568);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t39, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t19, 16, t16, t26, t34, 2, 1, t43, 32, 2);
    t44 = (t1 + 23528);
    t48 = (t1 + 23528);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t1 + 8224);
    t52 = *((char **)t51);
    t51 = (t1 + 30568);
    t53 = (t51 + 56U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    xsi_vlog_signed_multiply(t55, 32, t52, 32, t54, 32);
    t56 = ((char*)((ng5)));
    xsi_vlog_convert_indexed_partindices(t45, t46, t47, ((int*)(t50)), 2, t55, 32, 1, t56, 32, 1, 1);
    t57 = (t45 + 4);
    t21 = *((unsigned int *)t57);
    t58 = (!(t21));
    t59 = (t46 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t58 && t60);
    t62 = (t47 + 4);
    t23 = *((unsigned int *)t62);
    t63 = (!(t23));
    t64 = (t61 && t63);
    if (t64 == 1)
        goto LAB38;

LAB39:    t4 = (t1 + 30568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_signed_add(t18, 32, t6, 32, t7, 32);
    t8 = (t1 + 30568);
    xsi_vlogvar_assign_value(t8, t18, 0, 0, 32);
    goto LAB34;

LAB38:    t24 = *((unsigned int *)t47);
    t65 = (t24 + 0);
    t25 = *((unsigned int *)t45);
    t28 = *((unsigned int *)t46);
    t66 = (t25 - t28);
    t67 = (t66 + 1);
    xsi_vlogvar_wait_assign_value(t44, t19, t65, *((unsigned int *)t46), t67, 100LL);
    goto LAB39;

LAB40:    *((unsigned int *)t18) = 1;
    goto LAB43;

LAB42:    t7 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    t14 = ((char*)((ng10)));
    t15 = ((char*)((ng12)));
    xsi_vlog_unsigned_equal(t69, 64, t14, 64, t15, 64);
    memset(t19, 0, 8);
    t16 = (t69 + 4);
    t25 = *((unsigned int *)t16);
    t28 = (~(t25));
    t29 = *((unsigned int *)t69);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t16) != 0)
        goto LAB49;

LAB50:    t32 = *((unsigned int *)t18);
    t70 = *((unsigned int *)t19);
    t71 = (t32 | t70);
    *((unsigned int *)t39) = t71;
    t20 = (t18 + 4);
    t26 = (t19 + 4);
    t27 = (t39 + 4);
    t72 = *((unsigned int *)t20);
    t73 = *((unsigned int *)t26);
    t74 = (t72 | t73);
    *((unsigned int *)t27) = t74;
    t75 = *((unsigned int *)t27);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t19) = 1;
    goto LAB50;

LAB49:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB50;

LAB51:    t77 = *((unsigned int *)t39);
    t78 = *((unsigned int *)t27);
    *((unsigned int *)t39) = (t77 | t78);
    t33 = (t18 + 4);
    t34 = (t19 + 4);
    t79 = *((unsigned int *)t33);
    t80 = (~(t79));
    t81 = *((unsigned int *)t18);
    t58 = (t81 & t80);
    t82 = *((unsigned int *)t34);
    t83 = (~(t82));
    t84 = *((unsigned int *)t19);
    t60 = (t84 & t83);
    t85 = (~(t58));
    t86 = (~(t60));
    t87 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t87 & t85);
    t88 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t88 & t86);
    goto LAB53;

LAB54:    *((unsigned int *)t43) = 1;
    goto LAB57;

LAB56:    t36 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB57;

LAB58:    t38 = (t1 + 6592);
    t40 = *((char **)t38);
    t38 = ((char*)((ng3)));
    memset(t45, 0, 8);
    xsi_vlog_signed_equal(t45, 32, t40, 32, t38, 32);
    memset(t46, 0, 8);
    t41 = (t45 + 4);
    t97 = *((unsigned int *)t41);
    t98 = (~(t97));
    t99 = *((unsigned int *)t45);
    t100 = (t99 & t98);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t41) != 0)
        goto LAB63;

LAB64:    t102 = *((unsigned int *)t43);
    t103 = *((unsigned int *)t46);
    t104 = (t102 & t103);
    *((unsigned int *)t47) = t104;
    t44 = (t43 + 4);
    t48 = (t46 + 4);
    t49 = (t47 + 4);
    t105 = *((unsigned int *)t44);
    t106 = *((unsigned int *)t48);
    t107 = (t105 | t106);
    *((unsigned int *)t49) = t107;
    t108 = *((unsigned int *)t49);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB60;

LAB61:    *((unsigned int *)t46) = 1;
    goto LAB64;

LAB63:    t42 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB64;

LAB65:    t110 = *((unsigned int *)t47);
    t111 = *((unsigned int *)t49);
    *((unsigned int *)t47) = (t110 | t111);
    t50 = (t43 + 4);
    t51 = (t46 + 4);
    t112 = *((unsigned int *)t43);
    t113 = (~(t112));
    t114 = *((unsigned int *)t50);
    t115 = (~(t114));
    t116 = *((unsigned int *)t46);
    t117 = (~(t116));
    t118 = *((unsigned int *)t51);
    t119 = (~(t118));
    t61 = (t113 & t115);
    t63 = (t117 & t119);
    t120 = (~(t61));
    t121 = (~(t63));
    t122 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t122 & t120);
    t123 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t123 & t121);
    t124 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t124 & t120);
    t125 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t125 & t121);
    goto LAB67;

LAB68:
LAB71:    t53 = (t1 + 30088);
    t54 = (t53 + 56U);
    t56 = *((char **)t54);
    t57 = (t1 + 24008);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 12, 0LL);
    t4 = (t1 + 23048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 23048);
    t8 = (t7 + 72U);
    t14 = *((char **)t8);
    t15 = (t1 + 23048);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t20 = (t1 + 30088);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 32, t6, t14, t17, 2, 1, t27, 12, 2);
    t33 = ((char*)((ng3)));
    memset(t19, 0, 8);
    t34 = (t18 + 4);
    t35 = (t33 + 4);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t33);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t34);
    t13 = *((unsigned int *)t35);
    t21 = (t12 ^ t13);
    t22 = (t11 | t21);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t35);
    t25 = (t23 | t24);
    t28 = (~(t25));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB75;

LAB72:    if (t25 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t19) = 1;

LAB75:    t37 = (t19 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t70 = (t32 & t31);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB76;

LAB77:
LAB80:    t4 = ((char*)((ng16)));
    t5 = (t1 + 23688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB78:    t4 = (t1 + 23208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 23208);
    t8 = (t7 + 72U);
    t14 = *((char **)t8);
    t15 = (t1 + 23208);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t20 = (t1 + 30088);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t18, 32, t6, t14, t17, 2, 1, t27, 12, 2);
    t33 = ((char*)((ng3)));
    memset(t19, 0, 8);
    t34 = (t18 + 4);
    t35 = (t33 + 4);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t33);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t34);
    t13 = *((unsigned int *)t35);
    t21 = (t12 ^ t13);
    t22 = (t11 | t21);
    t23 = *((unsigned int *)t34);
    t24 = *((unsigned int *)t35);
    t25 = (t23 | t24);
    t28 = (~(t25));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB84;

LAB81:    if (t25 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t19) = 1;

LAB84:    t37 = (t19 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t70 = (t32 & t31);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB85;

LAB86:
LAB89:    t4 = ((char*)((ng16)));
    t5 = (t1 + 23848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 100LL);

LAB87:    goto LAB70;

LAB74:    t36 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB75;

LAB76:
LAB79:    t38 = ((char*)((ng9)));
    t40 = (t1 + 23688);
    xsi_vlogvar_wait_assign_value(t40, t38, 0, 0, 1, 100LL);
    goto LAB78;

LAB83:    t36 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB84;

LAB85:
LAB88:    t38 = ((char*)((ng9)));
    t40 = (t1 + 23848);
    xsi_vlogvar_wait_assign_value(t40, t38, 0, 0, 1, 100LL);
    goto LAB87;

}

static int sp_reset_a(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 13728);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 30728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t14 = (t1 + 24168);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 23368);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 16, 100LL);
    goto LAB8;

}

static int sp_reset_b(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 14160);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = (t1 + 30888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:
LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t14 = (t1 + 24328);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 23528);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 16, 100LL);
    goto LAB8;

}

static int sp_init_memory(char *t1, char *t2)
{
    char t7[8];
    char t20[8];
    char t27[8];
    char t62[32];
    char t91[2048];
    char t92[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 14592);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);

LAB5:    t5 = ((char*)((ng4)));
    t6 = (t1 + 31528);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 16);
    t4 = (t1 + 1696);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t7, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:
LAB22:    t4 = (t1 + 1696);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:
LAB25:    t4 = (t1 + 9312);
    t5 = *((char **)t4);
    t4 = (t1 + 31208);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 31048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB36:    t4 = (t1 + 31048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = (t1 + 3600);
    t18 = *((char **)t13);
    t13 = (t1 + 31208);
    t19 = (t13 + 56U);
    t26 = *((char **)t19);
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t18, 32, t26, 32);
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t6, 32, t7, 32);
    t31 = (t20 + 4);
    t8 = *((unsigned int *)t31);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB37;

LAB38:    t4 = (t1 + 1424);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB46;

LAB47:
LAB48:    t4 = (t1 + 1696);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t5);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t4) != 0)
        goto LAB76;

LAB77:    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB78;

LAB79:    memcpy(t27, t7, 8);

LAB80:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB88;

LAB89:
LAB90:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    t18 = (t1 + 1424);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t7 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t7 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    t61 = (t1 + 14592);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t61);
    goto LAB22;

LAB23:
LAB26:    t6 = (t1 + 26088);
    t13 = (t6 + 56U);
    t18 = *((char **)t13);
    t19 = ((char*)((ng20)));
    xsi_vlog_unsigned_equal(t62, 128, t18, 128, t19, 128);
    t26 = (t62 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (~(t14));
    t16 = *((unsigned int *)t62);
    t17 = (t16 & t15);
    t21 = (t17 != 0);
    if (t21 > 0)
        goto LAB27;

LAB28:
LAB31:    t4 = (t1 + 26088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = (t1 + 31528);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t7, 0, t19, 0, 16);
    *((int *)t20) = xsi_vlogfile_sscanf(t6, 128, ng22, 2, t1, (char)118, t7, 16);
    t26 = (t20 + 4);
    *((int *)t26) = 0;
    t31 = (t1 + 31528);
    xsi_vlogvar_assign_value(t31, t7, 0, 0, 16);
    t32 = (t1 + 31368);
    xsi_vlogvar_assign_value(t32, t20, 0, 0, 32);
    t4 = (t1 + 31368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t13, 32);
    t18 = (t7 + 4);
    t8 = *((unsigned int *)t18);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB29:    goto LAB25;

LAB27:
LAB30:    t31 = ((char*)((ng0)));
    t32 = ((char*)((ng2)));
    t33 = (t1 + 14592);
    xsi_vlogfile_fwrite(*((unsigned int *)t31), 1, 0, 0, ng21, 2, t33, (char)118, t32, 128);
    xsi_vlog_finish(1);
    goto LAB29;

LAB32:
LAB35:    t19 = ((char*)((ng0)));
    t26 = ((char*)((ng24)));
    t31 = ((char*)((ng2)));
    t32 = ((char*)((ng25)));
    t33 = (t1 + 14592);
    xsi_vlogfile_fwrite(*((unsigned int *)t19), 1, 0, 0, ng23, 4, t33, (char)118, t26, 512, (char)118, t31, 128, (char)118, t32, 8);
    xsi_vlog_finish(1);
    goto LAB34;

LAB37:
LAB39:    t32 = (t1 + 31048);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    t42 = ((char*)((ng26)));
    t55 = (t1 + 31528);
    t61 = (t55 + 56U);
    t63 = *((char **)t61);
    t64 = ((char*)((ng16)));
    t65 = ((char*)((ng16)));
    t66 = (t2 + 56U);
    t67 = *((char **)t66);
    t68 = (t2 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t69, &&LAB40);
    t70 = (t2 + 56U);
    t71 = *((char **)t70);
    t72 = (t1 + 12000);
    t73 = xsi_create_subprogram_invocation(t71, 0, t1, t72, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t72, t73);
    t74 = (t1 + 27208);
    xsi_vlogvar_assign_value(t74, t41, 0, 0, 12);
    t75 = (t1 + 27368);
    xsi_vlogvar_assign_value(t75, t42, 0, 0, 2);
    t76 = (t1 + 27528);
    xsi_vlogvar_assign_value(t76, t63, 0, 0, 16);
    t77 = (t1 + 27688);
    xsi_vlogvar_assign_value(t77, t64, 0, 0, 1);
    t78 = (t1 + 27848);
    xsi_vlogvar_assign_value(t78, t65, 0, 0, 1);

LAB42:    t79 = (t2 + 64U);
    t80 = *((char **)t79);
    t81 = (t80 + 80U);
    t82 = *((char **)t81);
    t83 = (t82 + 272U);
    t84 = *((char **)t83);
    t85 = (t84 + 0U);
    t86 = *((char **)t85);
    t46 = ((int  (*)(char *, char *))t86)(t1, t80);
    if (t46 == -1)
        goto LAB43;

LAB44:    if (t46 != 0)
        goto LAB45;

LAB40:    t80 = (t1 + 12000);
    xsi_vlog_subprogram_popinvocation(t80);

LAB41:    t87 = (t2 + 64U);
    t88 = *((char **)t87);
    t87 = (t1 + 12000);
    t89 = (t2 + 56U);
    t90 = *((char **)t89);
    xsi_delete_subprogram_invocation(t87, t88, t1, t90, t2);
    t4 = (t1 + 31048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = (t1 + 31208);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t19, 32);
    t26 = (t1 + 31048);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 32);
    goto LAB36;

LAB43:    t0 = -1;
    goto LAB1;

LAB45:    t79 = (t2 + 48U);
    *((char **)t79) = &&LAB42;
    goto LAB1;

LAB46:
LAB49:    t6 = (t1 + 26248);
    t13 = (t6 + 56U);
    t18 = *((char **)t13);
    t19 = ((char*)((ng27)));
    xsi_vlog_unsigned_equal(t91, 8184, t18, 8184, t19, 8184);
    t26 = (t91 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (~(t14));
    t16 = *((unsigned int *)t91);
    t17 = (t16 & t15);
    t21 = (t17 != 0);
    if (t21 > 0)
        goto LAB50;

LAB51:
LAB54:    t4 = (t1 + 26248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t7) = xsi_vlogfile_file_open_of_valname_ctype(t6, 8184, ng29);
    t13 = (t7 + 4);
    *((int *)t13) = 0;
    t18 = (t1 + 25448);
    xsi_vlogvar_assign_value(t18, t7, 0, 0, 32);
    t4 = (t1 + 25448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t13, 32);
    t18 = (t7 + 4);
    t8 = *((unsigned int *)t18);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB55;

LAB56:
LAB59:    t4 = ((char*)((ng4)));
    t5 = (t1 + 31048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB60:    t4 = (t1 + 31048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = (t1 + 3600);
    t18 = *((char **)t13);
    t13 = (t1 + 31208);
    t19 = (t13 + 56U);
    t26 = *((char **)t19);
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t18, 32, t26, 32);
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t6, 32, t7, 32);
    t31 = (t20 + 4);
    t8 = *((unsigned int *)t31);
    t9 = (~(t8));
    t10 = *((unsigned int *)t20);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB61;

LAB62:    t4 = (t1 + 25448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));

LAB57:
LAB52:    goto LAB48;

LAB50:
LAB53:    t31 = ((char*)((ng0)));
    t32 = ((char*)((ng2)));
    t33 = (t1 + 14592);
    xsi_vlogfile_fwrite(*((unsigned int *)t31), 1, 0, 0, ng28, 2, t33, (char)118, t32, 128);
    xsi_vlog_finish(1);
    goto LAB52;

LAB55:
LAB58:    t19 = ((char*)((ng0)));
    t26 = ((char*)((ng30)));
    t31 = ((char*)((ng2)));
    t32 = (t1 + 26248);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    t42 = (t1 + 14592);
    xsi_vlogfile_fwrite(*((unsigned int *)t19), 1, 0, 0, ng23, 4, t42, (char)118, t26, 392, (char)118, t31, 128, (char)118, t41, 8184);
    xsi_vlog_finish(1);
    goto LAB57;

LAB61:
LAB63:    t32 = (t1 + 25448);
    t33 = (t32 + 56U);
    t41 = *((char **)t33);
    t42 = (t1 + 25608);
    t55 = (t42 + 56U);
    t61 = *((char **)t55);
    xsi_vlog_bit_copy(t27, 0, t61, 0, 16);
    *((int *)t92) = xsi_vlogfile_fscanf(*((unsigned int *)t41), ng31, 2, t1, (char)118, t27, 16);
    t63 = (t92 + 4);
    *((int *)t63) = 0;
    t64 = (t1 + 25608);
    xsi_vlogvar_assign_value(t64, t27, 0, 0, 16);
    t65 = (t1 + 31368);
    xsi_vlogvar_assign_value(t65, t92, 0, 0, 32);
    t4 = (t1 + 31368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t6, 32, t13, 32);
    t18 = (t7 + 4);
    t8 = *((unsigned int *)t18);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB64;

LAB65:
LAB66:    t4 = (t1 + 31048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t13 = (t1 + 31208);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t19, 32);
    t26 = (t1 + 31048);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 32);
    goto LAB60;

LAB64:
LAB67:    t19 = (t1 + 31048);
    t26 = (t19 + 56U);
    t31 = *((char **)t26);
    t32 = ((char*)((ng26)));
    t33 = (t1 + 25608);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    t55 = ((char*)((ng16)));
    t61 = ((char*)((ng16)));
    t63 = (t2 + 56U);
    t64 = *((char **)t63);
    t65 = (t2 + 56U);
    t66 = *((char **)t65);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t66, &&LAB68);
    t67 = (t2 + 56U);
    t68 = *((char **)t67);
    t69 = (t1 + 12000);
    t70 = xsi_create_subprogram_invocation(t68, 0, t1, t69, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t69, t70);
    t71 = (t1 + 27208);
    xsi_vlogvar_assign_value(t71, t31, 0, 0, 12);
    t72 = (t1 + 27368);
    xsi_vlogvar_assign_value(t72, t32, 0, 0, 2);
    t73 = (t1 + 27528);
    xsi_vlogvar_assign_value(t73, t42, 0, 0, 16);
    t74 = (t1 + 27688);
    xsi_vlogvar_assign_value(t74, t55, 0, 0, 1);
    t75 = (t1 + 27848);
    xsi_vlogvar_assign_value(t75, t61, 0, 0, 1);

LAB70:    t76 = (t2 + 64U);
    t77 = *((char **)t76);
    t78 = (t77 + 80U);
    t79 = *((char **)t78);
    t80 = (t79 + 272U);
    t81 = *((char **)t80);
    t82 = (t81 + 0U);
    t83 = *((char **)t82);
    t46 = ((int  (*)(char *, char *))t83)(t1, t77);
    if (t46 == -1)
        goto LAB71;

LAB72:    if (t46 != 0)
        goto LAB73;

LAB68:    t77 = (t1 + 12000);
    xsi_vlog_subprogram_popinvocation(t77);

LAB69:    t84 = (t2 + 64U);
    t85 = *((char **)t84);
    t84 = (t1 + 12000);
    t86 = (t2 + 56U);
    t87 = *((char **)t86);
    xsi_delete_subprogram_invocation(t84, t85, t1, t87, t2);
    goto LAB66;

LAB71:    t0 = -1;
    goto LAB1;

LAB73:    t76 = (t2 + 48U);
    *((char **)t76) = &&LAB70;
    goto LAB1;

LAB74:    *((unsigned int *)t7) = 1;
    goto LAB77;

LAB76:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB77;

LAB78:    t18 = (t1 + 1424);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 4294967295U);
    if (t25 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t18) != 0)
        goto LAB83;

LAB84:    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t7 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB80;

LAB81:    *((unsigned int *)t20) = 1;
    goto LAB84;

LAB83:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB84;

LAB85:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t7 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB87;

LAB88:    t61 = (t1 + 14592);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t61);
    goto LAB90;

}

static int sp_log2roundup(char *t1, char *t2)
{
    char t7[8];
    char t20[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng4)));
    t4 = (t1 + 32008);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = (t1 + 31688);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB3;

LAB4:
LAB5:    t3 = (t1 + 32008);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 31848);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    t0 = 0;

LAB1:    return t0;
LAB3:
LAB6:    t14 = ((char*)((ng3)));
    t15 = (t1 + 32168);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);

LAB7:    t3 = (t1 + 32168);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 31688);
    t8 = (t6 + 56U);
    t14 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t5, 32, t14, 32);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB8;

LAB9:    goto LAB5;

LAB8:
LAB10:    t16 = (t1 + 32008);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t18, 32, t19, 32);
    t21 = (t1 + 32008);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    t3 = (t1 + 32168);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 32168);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB7;

}

static int sp_collision_check(char *t1, char *t2)
{
    char t11[8];
    char t12[8];
    char t13[8];
    char t73[8];
    char t86[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
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
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
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
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    int t95;
    int t96;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t3 = ((char*)((ng4)));
    t4 = (t1 + 33288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t3 = ((char*)((ng4)));
    t4 = (t1 + 33448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t3 = (t1 + 32328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 3872);
    t8 = *((char **)t7);
    t7 = (t1 + 26888);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 33608);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 5776);
    t8 = *((char **)t7);
    t7 = (t1 + 26888);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 33768);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 3872);
    t8 = *((char **)t7);
    t7 = (t1 + 26568);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 33928);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 5776);
    t8 = *((char **)t7);
    t7 = (t1 + 26568);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 34088);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 3872);
    t8 = *((char **)t7);
    t7 = (t1 + 27048);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 34248);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 5776);
    t8 = *((char **)t7);
    t7 = (t1 + 27048);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 34408);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 3872);
    t8 = *((char **)t7);
    t7 = (t1 + 26728);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 34568);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    t7 = (t1 + 5776);
    t8 = *((char **)t7);
    t7 = (t1 + 26728);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_minus(t11, 32, t8, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_power(t12, 32, t6, 32, t11, 32, 1);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 12, t12, 32);
    t14 = (t1 + 34728);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    t3 = (t1 + 32488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t6 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 4294967295U);
    if (t19 != 0)
        goto LAB3;

LAB4:    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB6:    t8 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t8);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB7;

LAB8:    memcpy(t13, t11, 8);

LAB9:    t61 = (t13 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t13);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB17;

LAB18:
LAB19:    t3 = (t1 + 32488);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB36;

LAB37:
LAB38:    t3 = (t1 + 32808);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB55;

LAB56:
LAB57:    t3 = (t1 + 33128);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 33288);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t11) = t17;
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t14 = (t11 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB74;

LAB75:
LAB76:    t33 = (t1 + 33448);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t35);
    t42 = (t40 | t41);
    *((unsigned int *)t12) = t42;
    t43 = (t11 + 4);
    t44 = (t35 + 4);
    t61 = (t12 + 4);
    t45 = *((unsigned int *)t43);
    t46 = *((unsigned int *)t44);
    t47 = (t45 | t46);
    *((unsigned int *)t61) = t47;
    t48 = *((unsigned int *)t61);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB77;

LAB78:
LAB79:    t69 = (t1 + 32968);
    xsi_vlogvar_assign_value(t69, t12, 0, 0, 32);
    t0 = 0;

LAB1:    return t0;
LAB3:    *((unsigned int *)t11) = 1;
    goto LAB6;

LAB5:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB6;

LAB7:    t9 = (t1 + 32808);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memset(t12, 0, 8);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 & 4294967295U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t12);
    t32 = (t30 & t31);
    *((unsigned int *)t13) = t32;
    t33 = (t11 + 4);
    t34 = (t12 + 4);
    t35 = (t13 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB9;

LAB10:    *((unsigned int *)t12) = 1;
    goto LAB13;

LAB12:    t29 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t13) = (t41 | t42);
    t43 = (t11 + 4);
    t44 = (t12 + 4);
    t45 = *((unsigned int *)t11);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t12);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t59 & t55);
    t60 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t60 & t56);
    goto LAB16;

LAB17:
LAB20:    t67 = (t1 + 26568);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t1 + 26888);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t73, 0, 8);
    xsi_vlog_signed_greater(t73, 32, t69, 32, t72, 32);
    t74 = (t73 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB21;

LAB22:
LAB30:    t3 = (t1 + 34088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 33928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t5, 32, t8, 32);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB31;

LAB32:
LAB35:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB33:
LAB23:    goto LAB19;

LAB21:
LAB24:    t80 = (t1 + 33608);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t1 + 33768);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    xsi_vlog_signed_equal(t86, 32, t82, 32, t85, 32);
    t87 = (t86 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB25;

LAB26:
LAB29:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33128);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB27:    goto LAB23;

LAB25:
LAB28:    t93 = ((char*)((ng3)));
    t94 = (t1 + 33128);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 1);
    goto LAB27;

LAB31:
LAB34:    t10 = ((char*)((ng3)));
    t14 = (t1 + 33128);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    goto LAB33;

LAB36:
LAB39:    t7 = (t1 + 26568);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 27048);
    t14 = (t10 + 56U);
    t23 = *((char **)t14);
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t9, 32, t23, 32);
    t29 = (t11 + 4);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t24 = (t22 & t21);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB40;

LAB41:
LAB49:    t3 = (t1 + 34088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 33928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t5, 32, t8, 32);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB50;

LAB51:
LAB54:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB52:
LAB42:    goto LAB38;

LAB40:
LAB43:    t33 = (t1 + 34248);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t43 = (t1 + 34408);
    t44 = (t43 + 56U);
    t61 = *((char **)t44);
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t35, 32, t61, 32);
    t67 = (t12 + 4);
    t26 = *((unsigned int *)t67);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t30 = (t28 & t27);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB44;

LAB45:
LAB48:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33288);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB46:    goto LAB42;

LAB44:
LAB47:    t68 = ((char*)((ng3)));
    t69 = (t1 + 33288);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB46;

LAB50:
LAB53:    t10 = ((char*)((ng3)));
    t14 = (t1 + 33288);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    goto LAB52;

LAB55:
LAB58:    t7 = (t1 + 26728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 26888);
    t14 = (t10 + 56U);
    t23 = *((char **)t14);
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t9, 32, t23, 32);
    t29 = (t11 + 4);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t24 = (t22 & t21);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB59;

LAB60:
LAB68:    t3 = (t1 + 34728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 34568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t5, 32, t8, 32);
    t9 = (t11 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB69;

LAB70:
LAB73:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB71:
LAB61:    goto LAB57;

LAB59:
LAB62:    t33 = (t1 + 33608);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t43 = (t1 + 33768);
    t44 = (t43 + 56U);
    t61 = *((char **)t44);
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t35, 32, t61, 32);
    t67 = (t12 + 4);
    t26 = *((unsigned int *)t67);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t30 = (t28 & t27);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB63;

LAB64:
LAB67:    t3 = ((char*)((ng4)));
    t4 = (t1 + 33448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB65:    goto LAB61;

LAB63:
LAB66:    t68 = ((char*)((ng3)));
    t69 = (t1 + 33448);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB65;

LAB69:
LAB72:    t10 = ((char*)((ng3)));
    t14 = (t1 + 33448);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    goto LAB71;

LAB74:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t24 | t25);
    t23 = (t5 + 4);
    t29 = (t8 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t53 = (t28 & t27);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t54 = (t32 & t31);
    t36 = (~(t53));
    t37 = (~(t54));
    t38 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t38 & t36);
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & t37);
    goto LAB76;

LAB77:    t50 = *((unsigned int *)t12);
    t51 = *((unsigned int *)t61);
    *((unsigned int *)t12) = (t50 | t51);
    t67 = (t11 + 4);
    t68 = (t35 + 4);
    t52 = *((unsigned int *)t67);
    t55 = (~(t52));
    t56 = *((unsigned int *)t11);
    t95 = (t56 & t55);
    t57 = *((unsigned int *)t68);
    t58 = (~(t57));
    t59 = *((unsigned int *)t35);
    t96 = (t59 & t58);
    t60 = (~(t95));
    t62 = (~(t96));
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 & t60);
    t64 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t64 & t62);
    goto LAB79;

}

static void Cont_735_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t21[8];
    char t22[8];
    char t30[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;

LAB0:    t1 = (t0 + 35640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t30, t7, 8);

LAB10:    memset(t4, 0, 8);
    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t62) != 0)
        goto LAB20;

LAB21:    t69 = (t4 + 4);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB22;

LAB23:    t76 = *((unsigned int *)t4);
    t77 = (~(t76));
    t78 = *((unsigned int *)t69);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t69) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t73, 8);

LAB30:    t80 = (t0 + 42312);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t84, 0, 8);
    t85 = 1U;
    t86 = t85;
    t87 = (t3 + 4);
    t88 = *((unsigned int *)t3);
    t85 = (t85 & t88);
    t89 = *((unsigned int *)t87);
    t86 = (t86 & t89);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 | t85);
    t92 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t92 | t86);
    xsi_driver_vfirst_trans(t80, 0, 0);
    t93 = (t0 + 41912);
    *((int *)t93) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 6592);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t20, 32, t19, 32);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t68 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB21;

LAB22:    t73 = (t0 + 19448U);
    t74 = *((char **)t73);
    memcpy(t75, t74, 8);
    goto LAB23;

LAB24:    t73 = ((char*)((ng4)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t75, 32, t73, 32);
    goto LAB30;

LAB28:    memcpy(t3, t75, 8);
    goto LAB30;

}

static void Cont_736_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t7[8];
    char t21[8];
    char t22[8];
    char t30[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;

LAB0:    t1 = (t0 + 35888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB8;

LAB9:    memcpy(t30, t7, 8);

LAB10:    memset(t4, 0, 8);
    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t62) != 0)
        goto LAB20;

LAB21:    t69 = (t4 + 4);
    t70 = *((unsigned int *)t4);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB22;

LAB23:    t76 = *((unsigned int *)t4);
    t77 = (~(t76));
    t78 = *((unsigned int *)t69);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t69) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t73, 8);

LAB30:    t80 = (t0 + 42376);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memset(t84, 0, 8);
    t85 = 1U;
    t86 = t85;
    t87 = (t3 + 4);
    t88 = *((unsigned int *)t3);
    t85 = (t85 & t88);
    t89 = *((unsigned int *)t87);
    t86 = (t86 & t89);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 | t85);
    t92 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t92 | t86);
    xsi_driver_vfirst_trans(t80, 0, 0);
    t93 = (t0 + 41928);
    *((int *)t93) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t19 = (t0 + 6592);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t20, 32, t19, 32);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t23) != 0)
        goto LAB13;

LAB14:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t22) = 1;
    goto LAB14;

LAB13:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t68 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB21;

LAB22:    t73 = (t0 + 19608U);
    t74 = *((char **)t73);
    memcpy(t75, t74, 8);
    goto LAB23;

LAB24:    t73 = ((char*)((ng4)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t75, 32, t73, 32);
    goto LAB30;

LAB28:    memcpy(t3, t75, 8);
    goto LAB30;

}

static void Cont_737_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char t7[8];
    char t22[16];
    char t23[8];
    char t31[8];
    char t59[8];
    char t73[8];
    char t74[8];
    char t82[8];
    char t114[8];
    char t128[8];
    char t129[8];
    char t137[8];
    char t182[8];
    char *t1;
    char *t2;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    int t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;

LAB0:    t1 = (t0 + 36136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng10)));
    t5 = ((char*)((ng11)));
    xsi_vlog_unsigned_equal(t6, 64, t2, 64, t5, 64);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t8) != 0)
        goto LAB6;

LAB7:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    memcpy(t31, t7, 8);

LAB10:    memset(t59, 0, 8);
    t60 = (t31 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t31);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t60) != 0)
        goto LAB20;

LAB21:    t67 = (t59 + 4);
    t68 = *((unsigned int *)t59);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB22;

LAB23:    memcpy(t82, t59, 8);

LAB24:    memset(t114, 0, 8);
    t115 = (t82 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t82);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t115) != 0)
        goto LAB34;

LAB35:    t122 = (t114 + 4);
    t123 = *((unsigned int *)t114);
    t124 = *((unsigned int *)t122);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB36;

LAB37:    memcpy(t137, t114, 8);

LAB38:    memset(t4, 0, 8);
    t169 = (t137 + 4);
    t170 = *((unsigned int *)t169);
    t171 = (~(t170));
    t172 = *((unsigned int *)t137);
    t173 = (t172 & t171);
    t174 = (t173 & 1U);
    if (t174 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t169) != 0)
        goto LAB48;

LAB49:    t176 = (t4 + 4);
    t177 = *((unsigned int *)t4);
    t178 = *((unsigned int *)t176);
    t179 = (t177 || t178);
    if (t179 > 0)
        goto LAB50;

LAB51:    t183 = *((unsigned int *)t4);
    t184 = (~(t183));
    t185 = *((unsigned int *)t176);
    t186 = (t184 || t185);
    if (t186 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t176) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t4) > 0)
        goto LAB56;

LAB57:    memcpy(t3, t180, 8);

LAB58:    t187 = (t0 + 42440);
    t188 = (t187 + 56U);
    t189 = *((char **)t188);
    t190 = (t189 + 56U);
    t191 = *((char **)t190);
    memset(t191, 0, 8);
    t192 = 4095U;
    t193 = t192;
    t194 = (t3 + 4);
    t195 = *((unsigned int *)t3);
    t192 = (t192 & t195);
    t196 = *((unsigned int *)t194);
    t193 = (t193 & t196);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t198 | t192);
    t199 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t199 | t193);
    xsi_driver_vfirst_trans(t187, 0, 11);
    t200 = (t0 + 41944);
    *((int *)t200) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng10)));
    t21 = ((char*)((ng12)));
    xsi_vlog_unsigned_equal(t22, 64, t20, 64, t21, 64);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t24) != 0)
        goto LAB13;

LAB14:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t7 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB13:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t7 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t7);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB17;

LAB18:    *((unsigned int *)t59) = 1;
    goto LAB21;

LAB20:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB21;

LAB22:    t71 = (t0 + 880);
    t72 = *((char **)t71);
    t71 = ((char*)((ng3)));
    memset(t73, 0, 8);
    xsi_vlog_signed_equal(t73, 32, t72, 32, t71, 32);
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t73);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t75) != 0)
        goto LAB27;

LAB28:    t83 = *((unsigned int *)t59);
    t84 = *((unsigned int *)t74);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t59 + 4);
    t87 = (t74 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB27:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB28;

LAB29:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t59 + 4);
    t97 = (t74 + 4);
    t98 = *((unsigned int *)t59);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB31;

LAB32:    *((unsigned int *)t114) = 1;
    goto LAB35;

LAB34:    t121 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB35;

LAB36:    t126 = (t0 + 6592);
    t127 = *((char **)t126);
    t126 = ((char*)((ng3)));
    memset(t128, 0, 8);
    xsi_vlog_signed_equal(t128, 32, t127, 32, t126, 32);
    memset(t129, 0, 8);
    t130 = (t128 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t128);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t130) != 0)
        goto LAB41;

LAB42:    t138 = *((unsigned int *)t114);
    t139 = *((unsigned int *)t129);
    t140 = (t138 & t139);
    *((unsigned int *)t137) = t140;
    t141 = (t114 + 4);
    t142 = (t129 + 4);
    t143 = (t137 + 4);
    t144 = *((unsigned int *)t141);
    t145 = *((unsigned int *)t142);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 != 0);
    if (t148 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t129) = 1;
    goto LAB42;

LAB41:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB42;

LAB43:    t149 = *((unsigned int *)t137);
    t150 = *((unsigned int *)t143);
    *((unsigned int *)t137) = (t149 | t150);
    t151 = (t114 + 4);
    t152 = (t129 + 4);
    t153 = *((unsigned int *)t114);
    t154 = (~(t153));
    t155 = *((unsigned int *)t151);
    t156 = (~(t155));
    t157 = *((unsigned int *)t129);
    t158 = (~(t157));
    t159 = *((unsigned int *)t152);
    t160 = (~(t159));
    t161 = (t154 & t156);
    t162 = (t158 & t160);
    t163 = (~(t161));
    t164 = (~(t162));
    t165 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t165 & t163);
    t166 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t166 & t164);
    t167 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t167 & t163);
    t168 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t168 & t164);
    goto LAB45;

LAB46:    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB48:    t175 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB49;

LAB50:    t180 = (t0 + 19768U);
    t181 = *((char **)t180);
    memcpy(t182, t181, 8);
    goto LAB51;

LAB52:    t180 = ((char*)((ng4)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t3, 32, t182, 32, t180, 32);
    goto LAB58;

LAB56:    memcpy(t3, t182, 8);
    goto LAB58;

}

static void Cont_741_3(char *t0)
{
    char t4[8];
    char t5[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;

LAB0:    t1 = (t0 + 36384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    t55 = (t0 + 42504);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t59, 0, 8);
    t60 = 1U;
    t61 = t60;
    t62 = (t27 + 4);
    t63 = *((unsigned int *)t27);
    t60 = (t60 & t63);
    t64 = *((unsigned int *)t62);
    t61 = (t61 & t64);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 | t60);
    t67 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t67 | t61);
    xsi_driver_vfirst_trans(t55, 0, 0);
    t68 = (t0 + 41960);
    *((int *)t68) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 16408U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t5);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB17;

}

static void Cont_742_4(char *t0)
{
    char t4[8];
    char t5[8];
    char t20[8];
    char t27[8];
    char t55[8];
    char t68[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;

LAB0:    t1 = (t0 + 36632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    memset(t55, 0, 8);
    t56 = (t27 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t27);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t56) != 0)
        goto LAB20;

LAB21:    t63 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t63);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB22;

LAB23:    memcpy(t76, t55, 8);

LAB24:    t108 = (t0 + 42568);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memset(t112, 0, 8);
    t113 = 1U;
    t114 = t113;
    t115 = (t76 + 4);
    t116 = *((unsigned int *)t76);
    t113 = (t113 & t116);
    t117 = *((unsigned int *)t115);
    t114 = (t114 & t117);
    t118 = (t112 + 4);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t119 | t113);
    t120 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t120 | t114);
    xsi_driver_vfirst_trans(t108, 0, 0);
    t121 = (t0 + 41976);
    *((int *)t121) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 17688U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t20) = 1;
    goto LAB14;

LAB13:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t5);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB17;

LAB18:    *((unsigned int *)t55) = 1;
    goto LAB21;

LAB20:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB21;

LAB22:    t67 = ((char*)((ng16)));
    memset(t68, 0, 8);
    t69 = (t67 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t67);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t69) != 0)
        goto LAB27;

LAB28:    t77 = *((unsigned int *)t55);
    t78 = *((unsigned int *)t68);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t55 + 4);
    t81 = (t68 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB27:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t55 + 4);
    t91 = (t68 + 4);
    t92 = *((unsigned int *)t55);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t68);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB31;

}

static void Cont_743_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t19[8];
    char t26[8];
    char t71[8];
    char *t1;
    char *t2;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 36880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng9)));
    memset(t5, 0, 8);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    memset(t4, 0, 8);
    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t58) != 0)
        goto LAB20;

LAB21:    t65 = (t4 + 4);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB22;

LAB23:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t65);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t65) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t69, 8);

LAB30:    t76 = (t0 + 42632);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 3U;
    t82 = t81;
    t83 = (t3 + 4);
    t84 = *((unsigned int *)t3);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 1);
    t89 = (t0 + 41992);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 19928U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t64 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB21;

LAB22:    t69 = (t0 + 16728U);
    t70 = *((char **)t69);
    memcpy(t71, t70, 8);
    goto LAB23;

LAB24:    t69 = ((char*)((ng16)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t71, 32, t69, 32);
    goto LAB30;

LAB28:    memcpy(t3, t71, 8);
    goto LAB30;

}

static void Cont_744_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t19[8];
    char t26[8];
    char t71[8];
    char *t1;
    char *t2;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 37128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    memset(t5, 0, 8);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    memset(t4, 0, 8);
    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t58) != 0)
        goto LAB20;

LAB21:    t65 = (t4 + 4);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB22;

LAB23:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t65);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t65) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t69, 8);

LAB30:    t76 = (t0 + 42696);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 3U;
    t82 = t81;
    t83 = (t3 + 4);
    t84 = *((unsigned int *)t3);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 1);
    t89 = (t0 + 42008);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 20088U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t64 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB21;

LAB22:    t69 = (t0 + 18008U);
    t70 = *((char **)t69);
    memcpy(t71, t70, 8);
    goto LAB23;

LAB24:    t69 = ((char*)((ng16)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t71, 32, t69, 32);
    goto LAB30;

LAB28:    memcpy(t3, t71, 8);
    goto LAB30;

}

static void Cont_745_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 37376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t23 = (t0 + 42760);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 42024);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 19928U);
    t17 = *((char **)t16);
    memcpy(t18, t17, 8);
    goto LAB9;

LAB10:    t16 = ((char*)((ng16)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t16, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_746_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 37624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    memset(t4, 0, 8);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t23 = (t0 + 42824);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 42040);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 20088U);
    t17 = *((char **)t16);
    memcpy(t18, t17, 8);
    goto LAB9;

LAB10:    t16 = ((char*)((ng16)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t16, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_750_9(char *t0)
{
    char t4[8];
    char t5[8];
    char t19[8];
    char t26[8];
    char t58[8];
    char t72[8];
    char t73[8];
    char t81[8];
    char t113[8];
    char t128[8];
    char t129[8];
    char t143[8];
    char t150[8];
    char t182[8];
    char t196[8];
    char t197[8];
    char t205[8];
    char t237[8];
    char t245[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    int t174;
    int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    int t229;
    int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    char *t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;

LAB0:    t1 = (t0 + 37872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    memset(t58, 0, 8);
    t59 = (t26 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t59) != 0)
        goto LAB20;

LAB21:    t66 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB22;

LAB23:    memcpy(t81, t58, 8);

LAB24:    memset(t113, 0, 8);
    t114 = (t81 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t81);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t114) != 0)
        goto LAB34;

LAB35:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = (!(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB36;

LAB37:    memcpy(t245, t113, 8);

LAB38:    t273 = (t0 + 42888);
    t274 = (t273 + 56U);
    t275 = *((char **)t274);
    t276 = (t275 + 56U);
    t277 = *((char **)t276);
    memset(t277, 0, 8);
    t278 = 1U;
    t279 = t278;
    t280 = (t245 + 4);
    t281 = *((unsigned int *)t245);
    t278 = (t278 & t281);
    t282 = *((unsigned int *)t280);
    t279 = (t279 & t282);
    t283 = (t277 + 4);
    t284 = *((unsigned int *)t277);
    *((unsigned int *)t277) = (t284 | t278);
    t285 = *((unsigned int *)t283);
    *((unsigned int *)t283) = (t285 | t279);
    xsi_driver_vfirst_trans(t273, 0, 0);
    t286 = (t0 + 42056);
    *((int *)t286) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 16248U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t58) = 1;
    goto LAB21;

LAB20:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB21;

LAB22:    t70 = (t0 + 11352);
    t71 = *((char **)t70);
    t70 = ((char*)((ng4)));
    memset(t72, 0, 8);
    xsi_vlog_signed_equal(t72, 32, t71, 32, t70, 32);
    memset(t73, 0, 8);
    t74 = (t72 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t72);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t74) != 0)
        goto LAB27;

LAB28:    t82 = *((unsigned int *)t58);
    t83 = *((unsigned int *)t73);
    t84 = (t82 & t83);
    *((unsigned int *)t81) = t84;
    t85 = (t58 + 4);
    t86 = (t73 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t73) = 1;
    goto LAB28;

LAB27:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB28;

LAB29:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    t95 = (t58 + 4);
    t96 = (t73 + 4);
    t97 = *((unsigned int *)t58);
    t98 = (~(t97));
    t99 = *((unsigned int *)t95);
    t100 = (~(t99));
    t101 = *((unsigned int *)t73);
    t102 = (~(t101));
    t103 = *((unsigned int *)t96);
    t104 = (~(t103));
    t105 = (t98 & t100);
    t106 = (t102 & t104);
    t107 = (~(t105));
    t108 = (~(t106));
    t109 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t109 & t107);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & t108);
    t111 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t111 & t107);
    t112 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t112 & t108);
    goto LAB31;

LAB32:    *((unsigned int *)t113) = 1;
    goto LAB35;

LAB34:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB35;

LAB36:    t126 = (t0 + 2104);
    t127 = *((char **)t126);
    t126 = ((char*)((ng3)));
    memset(t128, 0, 8);
    xsi_vlog_signed_equal(t128, 32, t127, 32, t126, 32);
    memset(t129, 0, 8);
    t130 = (t128 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t128);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t130) != 0)
        goto LAB41;

LAB42:    t137 = (t129 + 4);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB43;

LAB44:    memcpy(t150, t129, 8);

LAB45:    memset(t182, 0, 8);
    t183 = (t150 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t150);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t183) != 0)
        goto LAB55;

LAB56:    t190 = (t182 + 4);
    t191 = *((unsigned int *)t182);
    t192 = *((unsigned int *)t190);
    t193 = (t191 || t192);
    if (t193 > 0)
        goto LAB57;

LAB58:    memcpy(t205, t182, 8);

LAB59:    memset(t237, 0, 8);
    t238 = (t205 + 4);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t205);
    t242 = (t241 & t240);
    t243 = (t242 & 1U);
    if (t243 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t238) != 0)
        goto LAB69;

LAB70:    t246 = *((unsigned int *)t113);
    t247 = *((unsigned int *)t237);
    t248 = (t246 | t247);
    *((unsigned int *)t245) = t248;
    t249 = (t113 + 4);
    t250 = (t237 + 4);
    t251 = (t245 + 4);
    t252 = *((unsigned int *)t249);
    t253 = *((unsigned int *)t250);
    t254 = (t252 | t253);
    *((unsigned int *)t251) = t254;
    t255 = *((unsigned int *)t251);
    t256 = (t255 != 0);
    if (t256 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB38;

LAB39:    *((unsigned int *)t129) = 1;
    goto LAB42;

LAB41:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB42;

LAB43:    t141 = (t0 + 16248U);
    t142 = *((char **)t141);
    memset(t143, 0, 8);
    t141 = (t142 + 4);
    t144 = *((unsigned int *)t141);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t141) != 0)
        goto LAB48;

LAB49:    t151 = *((unsigned int *)t129);
    t152 = *((unsigned int *)t143);
    t153 = (t151 & t152);
    *((unsigned int *)t150) = t153;
    t154 = (t129 + 4);
    t155 = (t143 + 4);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t154);
    t158 = *((unsigned int *)t155);
    t159 = (t157 | t158);
    *((unsigned int *)t156) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 != 0);
    if (t161 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB45;

LAB46:    *((unsigned int *)t143) = 1;
    goto LAB49;

LAB48:    t149 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB49;

LAB50:    t162 = *((unsigned int *)t150);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t150) = (t162 | t163);
    t164 = (t129 + 4);
    t165 = (t143 + 4);
    t166 = *((unsigned int *)t129);
    t167 = (~(t166));
    t168 = *((unsigned int *)t164);
    t169 = (~(t168));
    t170 = *((unsigned int *)t143);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (~(t172));
    t174 = (t167 & t169);
    t175 = (t171 & t173);
    t176 = (~(t174));
    t177 = (~(t175));
    t178 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t178 & t176);
    t179 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t179 & t177);
    t180 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t180 & t176);
    t181 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t181 & t177);
    goto LAB52;

LAB53:    *((unsigned int *)t182) = 1;
    goto LAB56;

LAB55:    t189 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB56;

LAB57:    t194 = (t0 + 2376);
    t195 = *((char **)t194);
    t194 = ((char*)((ng3)));
    memset(t196, 0, 8);
    xsi_vlog_signed_equal(t196, 32, t195, 32, t194, 32);
    memset(t197, 0, 8);
    t198 = (t196 + 4);
    t199 = *((unsigned int *)t198);
    t200 = (~(t199));
    t201 = *((unsigned int *)t196);
    t202 = (t201 & t200);
    t203 = (t202 & 1U);
    if (t203 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t198) != 0)
        goto LAB62;

LAB63:    t206 = *((unsigned int *)t182);
    t207 = *((unsigned int *)t197);
    t208 = (t206 & t207);
    *((unsigned int *)t205) = t208;
    t209 = (t182 + 4);
    t210 = (t197 + 4);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t209);
    t213 = *((unsigned int *)t210);
    t214 = (t212 | t213);
    *((unsigned int *)t211) = t214;
    t215 = *((unsigned int *)t211);
    t216 = (t215 != 0);
    if (t216 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB59;

LAB60:    *((unsigned int *)t197) = 1;
    goto LAB63;

LAB62:    t204 = (t197 + 4);
    *((unsigned int *)t197) = 1;
    *((unsigned int *)t204) = 1;
    goto LAB63;

LAB64:    t217 = *((unsigned int *)t205);
    t218 = *((unsigned int *)t211);
    *((unsigned int *)t205) = (t217 | t218);
    t219 = (t182 + 4);
    t220 = (t197 + 4);
    t221 = *((unsigned int *)t182);
    t222 = (~(t221));
    t223 = *((unsigned int *)t219);
    t224 = (~(t223));
    t225 = *((unsigned int *)t197);
    t226 = (~(t225));
    t227 = *((unsigned int *)t220);
    t228 = (~(t227));
    t229 = (t222 & t224);
    t230 = (t226 & t228);
    t231 = (~(t229));
    t232 = (~(t230));
    t233 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t233 & t231);
    t234 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t234 & t232);
    t235 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t235 & t231);
    t236 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t236 & t232);
    goto LAB66;

LAB67:    *((unsigned int *)t237) = 1;
    goto LAB70;

LAB69:    t244 = (t237 + 4);
    *((unsigned int *)t237) = 1;
    *((unsigned int *)t244) = 1;
    goto LAB70;

LAB71:    t257 = *((unsigned int *)t245);
    t258 = *((unsigned int *)t251);
    *((unsigned int *)t245) = (t257 | t258);
    t259 = (t113 + 4);
    t260 = (t237 + 4);
    t261 = *((unsigned int *)t259);
    t262 = (~(t261));
    t263 = *((unsigned int *)t113);
    t264 = (t263 & t262);
    t265 = *((unsigned int *)t260);
    t266 = (~(t265));
    t267 = *((unsigned int *)t237);
    t268 = (t267 & t266);
    t269 = (~(t264));
    t270 = (~(t268));
    t271 = *((unsigned int *)t251);
    *((unsigned int *)t251) = (t271 & t269);
    t272 = *((unsigned int *)t251);
    *((unsigned int *)t251) = (t272 & t270);
    goto LAB73;

}

static void Cont_754_10(char *t0)
{
    char t4[8];
    char t5[8];
    char t19[8];
    char t26[8];
    char t58[8];
    char t72[8];
    char t73[8];
    char t81[8];
    char t113[8];
    char t128[8];
    char t129[8];
    char t143[8];
    char t150[8];
    char t182[8];
    char t196[8];
    char t197[8];
    char t205[8];
    char t237[8];
    char t245[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    int t174;
    int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    int t229;
    int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    char *t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;

LAB0:    t1 = (t0 + 38120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4008);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    memset(t58, 0, 8);
    t59 = (t26 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t59) != 0)
        goto LAB20;

LAB21:    t66 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB22;

LAB23:    memcpy(t81, t58, 8);

LAB24:    memset(t113, 0, 8);
    t114 = (t81 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t81);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t114) != 0)
        goto LAB34;

LAB35:    t121 = (t113 + 4);
    t122 = *((unsigned int *)t113);
    t123 = (!(t122));
    t124 = *((unsigned int *)t121);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB36;

LAB37:    memcpy(t245, t113, 8);

LAB38:    t273 = (t0 + 42952);
    t274 = (t273 + 56U);
    t275 = *((char **)t274);
    t276 = (t275 + 56U);
    t277 = *((char **)t276);
    memset(t277, 0, 8);
    t278 = 1U;
    t279 = t278;
    t280 = (t245 + 4);
    t281 = *((unsigned int *)t245);
    t278 = (t278 & t281);
    t282 = *((unsigned int *)t280);
    t279 = (t279 & t282);
    t283 = (t277 + 4);
    t284 = *((unsigned int *)t277);
    *((unsigned int *)t277) = (t284 | t278);
    t285 = *((unsigned int *)t283);
    *((unsigned int *)t283) = (t285 | t279);
    xsi_driver_vfirst_trans(t273, 0, 0);
    t286 = (t0 + 42072);
    *((int *)t286) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 17528U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t58) = 1;
    goto LAB21;

LAB20:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB21;

LAB22:    t70 = (t0 + 11488);
    t71 = *((char **)t70);
    t70 = ((char*)((ng4)));
    memset(t72, 0, 8);
    xsi_vlog_signed_equal(t72, 32, t71, 32, t70, 32);
    memset(t73, 0, 8);
    t74 = (t72 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t72);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t74) != 0)
        goto LAB27;

LAB28:    t82 = *((unsigned int *)t58);
    t83 = *((unsigned int *)t73);
    t84 = (t82 & t83);
    *((unsigned int *)t81) = t84;
    t85 = (t58 + 4);
    t86 = (t73 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t73) = 1;
    goto LAB28;

LAB27:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB28;

LAB29:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    t95 = (t58 + 4);
    t96 = (t73 + 4);
    t97 = *((unsigned int *)t58);
    t98 = (~(t97));
    t99 = *((unsigned int *)t95);
    t100 = (~(t99));
    t101 = *((unsigned int *)t73);
    t102 = (~(t101));
    t103 = *((unsigned int *)t96);
    t104 = (~(t103));
    t105 = (t98 & t100);
    t106 = (t102 & t104);
    t107 = (~(t105));
    t108 = (~(t106));
    t109 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t109 & t107);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & t108);
    t111 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t111 & t107);
    t112 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t112 & t108);
    goto LAB31;

LAB32:    *((unsigned int *)t113) = 1;
    goto LAB35;

LAB34:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB35;

LAB36:    t126 = (t0 + 4008);
    t127 = *((char **)t126);
    t126 = ((char*)((ng3)));
    memset(t128, 0, 8);
    xsi_vlog_signed_equal(t128, 32, t127, 32, t126, 32);
    memset(t129, 0, 8);
    t130 = (t128 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t128);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t130) != 0)
        goto LAB41;

LAB42:    t137 = (t129 + 4);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB43;

LAB44:    memcpy(t150, t129, 8);

LAB45:    memset(t182, 0, 8);
    t183 = (t150 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t150);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t183) != 0)
        goto LAB55;

LAB56:    t190 = (t182 + 4);
    t191 = *((unsigned int *)t182);
    t192 = *((unsigned int *)t190);
    t193 = (t191 || t192);
    if (t193 > 0)
        goto LAB57;

LAB58:    memcpy(t205, t182, 8);

LAB59:    memset(t237, 0, 8);
    t238 = (t205 + 4);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t205);
    t242 = (t241 & t240);
    t243 = (t242 & 1U);
    if (t243 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t238) != 0)
        goto LAB69;

LAB70:    t246 = *((unsigned int *)t113);
    t247 = *((unsigned int *)t237);
    t248 = (t246 | t247);
    *((unsigned int *)t245) = t248;
    t249 = (t113 + 4);
    t250 = (t237 + 4);
    t251 = (t245 + 4);
    t252 = *((unsigned int *)t249);
    t253 = *((unsigned int *)t250);
    t254 = (t252 | t253);
    *((unsigned int *)t251) = t254;
    t255 = *((unsigned int *)t251);
    t256 = (t255 != 0);
    if (t256 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB38;

LAB39:    *((unsigned int *)t129) = 1;
    goto LAB42;

LAB41:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB42;

LAB43:    t141 = (t0 + 17528U);
    t142 = *((char **)t141);
    memset(t143, 0, 8);
    t141 = (t142 + 4);
    t144 = *((unsigned int *)t141);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t141) != 0)
        goto LAB48;

LAB49:    t151 = *((unsigned int *)t129);
    t152 = *((unsigned int *)t143);
    t153 = (t151 & t152);
    *((unsigned int *)t150) = t153;
    t154 = (t129 + 4);
    t155 = (t143 + 4);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t154);
    t158 = *((unsigned int *)t155);
    t159 = (t157 | t158);
    *((unsigned int *)t156) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 != 0);
    if (t161 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB45;

LAB46:    *((unsigned int *)t143) = 1;
    goto LAB49;

LAB48:    t149 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB49;

LAB50:    t162 = *((unsigned int *)t150);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t150) = (t162 | t163);
    t164 = (t129 + 4);
    t165 = (t143 + 4);
    t166 = *((unsigned int *)t129);
    t167 = (~(t166));
    t168 = *((unsigned int *)t164);
    t169 = (~(t168));
    t170 = *((unsigned int *)t143);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (~(t172));
    t174 = (t167 & t169);
    t175 = (t171 & t173);
    t176 = (~(t174));
    t177 = (~(t175));
    t178 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t178 & t176);
    t179 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t179 & t177);
    t180 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t180 & t176);
    t181 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t181 & t177);
    goto LAB52;

LAB53:    *((unsigned int *)t182) = 1;
    goto LAB56;

LAB55:    t189 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB56;

LAB57:    t194 = (t0 + 4280);
    t195 = *((char **)t194);
    t194 = ((char*)((ng3)));
    memset(t196, 0, 8);
    xsi_vlog_signed_equal(t196, 32, t195, 32, t194, 32);
    memset(t197, 0, 8);
    t198 = (t196 + 4);
    t199 = *((unsigned int *)t198);
    t200 = (~(t199));
    t201 = *((unsigned int *)t196);
    t202 = (t201 & t200);
    t203 = (t202 & 1U);
    if (t203 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t198) != 0)
        goto LAB62;

LAB63:    t206 = *((unsigned int *)t182);
    t207 = *((unsigned int *)t197);
    t208 = (t206 & t207);
    *((unsigned int *)t205) = t208;
    t209 = (t182 + 4);
    t210 = (t197 + 4);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t209);
    t213 = *((unsigned int *)t210);
    t214 = (t212 | t213);
    *((unsigned int *)t211) = t214;
    t215 = *((unsigned int *)t211);
    t216 = (t215 != 0);
    if (t216 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB59;

LAB60:    *((unsigned int *)t197) = 1;
    goto LAB63;

LAB62:    t204 = (t197 + 4);
    *((unsigned int *)t197) = 1;
    *((unsigned int *)t204) = 1;
    goto LAB63;

LAB64:    t217 = *((unsigned int *)t205);
    t218 = *((unsigned int *)t211);
    *((unsigned int *)t205) = (t217 | t218);
    t219 = (t182 + 4);
    t220 = (t197 + 4);
    t221 = *((unsigned int *)t182);
    t222 = (~(t221));
    t223 = *((unsigned int *)t219);
    t224 = (~(t223));
    t225 = *((unsigned int *)t197);
    t226 = (~(t225));
    t227 = *((unsigned int *)t220);
    t228 = (~(t227));
    t229 = (t222 & t224);
    t230 = (t226 & t228);
    t231 = (~(t229));
    t232 = (~(t230));
    t233 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t233 & t231);
    t234 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t234 & t232);
    t235 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t235 & t231);
    t236 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t236 & t232);
    goto LAB66;

LAB67:    *((unsigned int *)t237) = 1;
    goto LAB70;

LAB69:    t244 = (t237 + 4);
    *((unsigned int *)t237) = 1;
    *((unsigned int *)t244) = 1;
    goto LAB70;

LAB71:    t257 = *((unsigned int *)t245);
    t258 = *((unsigned int *)t251);
    *((unsigned int *)t245) = (t257 | t258);
    t259 = (t113 + 4);
    t260 = (t237 + 4);
    t261 = *((unsigned int *)t259);
    t262 = (~(t261));
    t263 = *((unsigned int *)t113);
    t264 = (t263 & t262);
    t265 = *((unsigned int *)t260);
    t266 = (~(t265));
    t267 = *((unsigned int *)t237);
    t268 = (t267 & t266);
    t269 = (~(t264));
    t270 = (~(t268));
    t271 = *((unsigned int *)t251);
    *((unsigned int *)t251) = (t271 & t269);
    t272 = *((unsigned int *)t251);
    *((unsigned int *)t251) = (t272 & t270);
    goto LAB73;

}

static void Initial_1277_11(char *t0)
{
    char t18[8];
    char t19[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 38368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:
LAB4:    t2 = (t0 + 38176);
    t3 = (t0 + 14592);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 38272);
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

LAB5:    t6 = (t0 + 14592);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 38272);
    t15 = *((char **)t14);
    t14 = (t0 + 14592);
    t16 = (t0 + 38176);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    t2 = (t0 + 25768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t18, 0, t7, 0, 16);
    *((int *)t19) = xsi_vlogfile_sscanf(t4, 128, ng22, 2, t0, (char)118, t18, 16);
    t8 = (t19 + 4);
    *((int *)t8) = 0;
    t9 = (t0 + 24168);
    xsi_vlogvar_assign_value(t9, t18, 0, 0, 16);
    t10 = (t19 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB11;

LAB12:
LAB15:    t2 = ((char*)((ng4)));
    t3 = (t0 + 23368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB13:    t2 = (t0 + 25928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t18, 0, t7, 0, 16);
    *((int *)t19) = xsi_vlogfile_sscanf(t4, 128, ng22, 2, t0, (char)118, t18, 16);
    t8 = (t19 + 4);
    *((int *)t8) = 0;
    t9 = (t0 + 24328);
    xsi_vlogvar_assign_value(t9, t18, 0, 0, 16);
    t10 = (t19 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB16;

LAB17:
LAB20:    t2 = ((char*)((ng4)));
    t3 = (t0 + 23528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB18:    t2 = ((char*)((ng16)));
    t3 = (t0 + 23688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 23848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 24008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    t2 = (t0 + 3872);
    t3 = *((char **)t2);
    t2 = (t0 + 9312);
    t4 = *((char **)t2);
    t2 = (t0 + 38176);
    t5 = (t0 + 15024);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 31688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB21:    t8 = (t0 + 38272);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t14 = *((char **)t12);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t13 = ((int  (*)(char *, char *))t16)(t0, t9);
    if (t13 != 0)
        goto LAB23;

LAB22:    t9 = (t0 + 38272);
    t17 = *((char **)t9);
    t9 = (t0 + 31848);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    memcpy(t18, t26, 8);
    t27 = (t0 + 15024);
    t28 = (t0 + 38176);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t17, t0, t28, t29);
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t3, 32, t18, 32);
    t30 = (t0 + 26568);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    t2 = (t0 + 3872);
    t3 = *((char **)t2);
    t2 = (t0 + 9448);
    t4 = *((char **)t2);
    t2 = (t0 + 38176);
    t5 = (t0 + 15024);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 31688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB24:    t8 = (t0 + 38272);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t14 = *((char **)t12);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t13 = ((int  (*)(char *, char *))t16)(t0, t9);
    if (t13 != 0)
        goto LAB26;

LAB25:    t9 = (t0 + 38272);
    t17 = *((char **)t9);
    t9 = (t0 + 31848);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    memcpy(t18, t26, 8);
    t27 = (t0 + 15024);
    t28 = (t0 + 38176);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t17, t0, t28, t29);
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t3, 32, t18, 32);
    t30 = (t0 + 26728);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    t2 = (t0 + 5776);
    t3 = *((char **)t2);
    t2 = (t0 + 9584);
    t4 = *((char **)t2);
    t2 = (t0 + 38176);
    t5 = (t0 + 15024);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 31688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB27:    t8 = (t0 + 38272);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t14 = *((char **)t12);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t13 = ((int  (*)(char *, char *))t16)(t0, t9);
    if (t13 != 0)
        goto LAB29;

LAB28:    t9 = (t0 + 38272);
    t17 = *((char **)t9);
    t9 = (t0 + 31848);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    memcpy(t18, t26, 8);
    t27 = (t0 + 15024);
    t28 = (t0 + 38176);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t17, t0, t28, t29);
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t3, 32, t18, 32);
    t30 = (t0 + 26888);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    t2 = (t0 + 5776);
    t3 = *((char **)t2);
    t2 = (t0 + 9720);
    t4 = *((char **)t2);
    t2 = (t0 + 38176);
    t5 = (t0 + 15024);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 31688);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB30:    t8 = (t0 + 38272);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t14 = *((char **)t12);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t13 = ((int  (*)(char *, char *))t16)(t0, t9);
    if (t13 != 0)
        goto LAB32;

LAB31:    t9 = (t0 + 38272);
    t17 = *((char **)t9);
    t9 = (t0 + 31848);
    t25 = (t9 + 56U);
    t26 = *((char **)t25);
    memcpy(t18, t26, 8);
    t27 = (t0 + 15024);
    t28 = (t0 + 38176);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t17, t0, t28, t29);
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t3, 32, t18, 32);
    t30 = (t0 + 27048);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 38368U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB11:
LAB14:    t11 = (t0 + 24168);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 23368);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 16);
    goto LAB13;

LAB16:
LAB19:    t11 = (t0 + 24328);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 23528);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 16);
    goto LAB18;

LAB23:    t8 = (t0 + 38368U);
    *((char **)t8) = &&LAB21;
    goto LAB1;

LAB26:    t8 = (t0 + 38368U);
    *((char **)t8) = &&LAB24;
    goto LAB1;

LAB29:    t8 = (t0 + 38368U);
    *((char **)t8) = &&LAB27;
    goto LAB1;

LAB32:    t8 = (t0 + 38368U);
    *((char **)t8) = &&LAB30;
    goto LAB1;

}

static void Always_1584_12(char *t0)
{
    char t37[16];
    char t38[8];
    char t43[24];
    char t44[8];
    char t50[8];
    char t72[8];
    char t82[24];
    char t83[8];
    char t89[8];
    char t112[8];
    char t123[8];
    char t139[8];
    char t147[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
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
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    int t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;

LAB0:    t1 = (t0 + 38616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 42088);
    *((int *)t2) = 1;
    t3 = (t0 + 38648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 20568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng10)));
    xsi_vlog_unsigned_equal(t37, 64, t2, 64, t3, 64);
    memset(t38, 0, 8);
    t4 = (t37 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t37);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB18:    t11 = (t38 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = *((unsigned int *)t11);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB19;

LAB20:    memcpy(t50, t38, 8);

LAB21:    memset(t72, 0, 8);
    t21 = (t50 + 4);
    t73 = *((unsigned int *)t21);
    t74 = (~(t73));
    t75 = *((unsigned int *)t50);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t21) != 0)
        goto LAB31;

LAB32:    t23 = (t72 + 4);
    t78 = *((unsigned int *)t72);
    t79 = (!(t78));
    t80 = *((unsigned int *)t23);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB33;

LAB34:    memcpy(t89, t72, 8);

LAB35:    memset(t112, 0, 8);
    t34 = (t89 + 4);
    t113 = *((unsigned int *)t34);
    t114 = (~(t113));
    t115 = *((unsigned int *)t89);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t34) != 0)
        goto LAB45;

LAB46:    t36 = (t112 + 4);
    t118 = *((unsigned int *)t112);
    t119 = *((unsigned int *)t36);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB47;

LAB48:    memcpy(t147, t112, 8);

LAB49:    t179 = (t147 + 4);
    t180 = *((unsigned int *)t179);
    t181 = (~(t180));
    t182 = *((unsigned int *)t147);
    t183 = (t182 & t181);
    t184 = (t183 != 0);
    if (t184 > 0)
        goto LAB61;

LAB62:
LAB83:    t2 = (t0 + 20888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB84;

LAB85:
LAB86:
LAB63:    goto LAB2;

LAB6:    t11 = (t0 + 16888U);
    t12 = *((char **)t11);
    t11 = (t0 + 20568U);
    t13 = *((char **)t11);
    t11 = (t0 + 17048U);
    t14 = *((char **)t11);
    t11 = (t0 + 18648U);
    t15 = *((char **)t11);
    t11 = (t0 + 18808U);
    t16 = *((char **)t11);
    t11 = (t0 + 38424);
    t17 = (t0 + 12000);
    t18 = xsi_create_subprogram_invocation(t11, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 27208);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 12);
    t20 = (t0 + 27368);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 2);
    t21 = (t0 + 27528);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 16);
    t22 = (t0 + 27688);
    xsi_vlogvar_assign_value(t22, t15, 0, 0, 1);
    t23 = (t0 + 27848);
    xsi_vlogvar_assign_value(t23, t16, 0, 0, 1);

LAB11:    t24 = (t0 + 38520);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);

LAB13:    if (t32 != 0)
        goto LAB14;

LAB9:    t25 = (t0 + 12000);
    xsi_vlog_subprogram_popinvocation(t25);

LAB10:    t33 = (t0 + 38520);
    t34 = *((char **)t33);
    t33 = (t0 + 12000);
    t35 = (t0 + 38424);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    goto LAB8;

LAB12:;
LAB14:    t24 = (t0 + 38616U);
    *((char **)t24) = &&LAB11;
    goto LAB1;

LAB15:    *((unsigned int *)t38) = 1;
    goto LAB18;

LAB17:    t5 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = ((char*)((ng34)));
    t13 = ((char*)((ng35)));
    xsi_vlog_unsigned_equal(t43, 72, t12, 64, t13, 72);
    memset(t44, 0, 8);
    t14 = (t43 + 4);
    t45 = *((unsigned int *)t14);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB25:    t51 = *((unsigned int *)t38);
    t52 = *((unsigned int *)t44);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t16 = (t38 + 4);
    t17 = (t44 + 4);
    t18 = (t50 + 4);
    t54 = *((unsigned int *)t16);
    t55 = *((unsigned int *)t17);
    t56 = (t54 | t55);
    *((unsigned int *)t18) = t56;
    t57 = *((unsigned int *)t18);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t44) = 1;
    goto LAB25;

LAB24:    t15 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB26:    t59 = *((unsigned int *)t50);
    t60 = *((unsigned int *)t18);
    *((unsigned int *)t50) = (t59 | t60);
    t19 = (t38 + 4);
    t20 = (t44 + 4);
    t61 = *((unsigned int *)t19);
    t62 = (~(t61));
    t63 = *((unsigned int *)t38);
    t32 = (t63 & t62);
    t64 = *((unsigned int *)t20);
    t65 = (~(t64));
    t66 = *((unsigned int *)t44);
    t67 = (t66 & t65);
    t68 = (~(t32));
    t69 = (~(t67));
    t70 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t70 & t68);
    t71 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t71 & t69);
    goto LAB28;

LAB29:    *((unsigned int *)t72) = 1;
    goto LAB32;

LAB31:    t22 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB32;

LAB33:    t24 = ((char*)((ng34)));
    t25 = ((char*)((ng36)));
    xsi_vlog_unsigned_equal(t82, 72, t24, 64, t25, 72);
    memset(t83, 0, 8);
    t26 = (t82 + 4);
    t84 = *((unsigned int *)t26);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t26) != 0)
        goto LAB38;

LAB39:    t90 = *((unsigned int *)t72);
    t91 = *((unsigned int *)t83);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t28 = (t72 + 4);
    t29 = (t83 + 4);
    t30 = (t89 + 4);
    t93 = *((unsigned int *)t28);
    t94 = *((unsigned int *)t29);
    t95 = (t93 | t94);
    *((unsigned int *)t30) = t95;
    t96 = *((unsigned int *)t30);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t83) = 1;
    goto LAB39;

LAB38:    t27 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB39;

LAB40:    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t30);
    *((unsigned int *)t89) = (t98 | t99);
    t31 = (t72 + 4);
    t33 = (t83 + 4);
    t100 = *((unsigned int *)t31);
    t101 = (~(t100));
    t102 = *((unsigned int *)t72);
    t103 = (t102 & t101);
    t104 = *((unsigned int *)t33);
    t105 = (~(t104));
    t106 = *((unsigned int *)t83);
    t107 = (t106 & t105);
    t108 = (~(t103));
    t109 = (~(t107));
    t110 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t110 & t108);
    t111 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t111 & t109);
    goto LAB42;

LAB43:    *((unsigned int *)t112) = 1;
    goto LAB46;

LAB45:    t35 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB46;

LAB47:    t121 = ((char*)((ng37)));
    t122 = ((char*)((ng38)));
    memset(t123, 0, 8);
    t124 = (t121 + 4);
    t125 = (t122 + 4);
    t126 = *((unsigned int *)t121);
    t127 = *((unsigned int *)t122);
    t128 = (t126 ^ t127);
    t129 = *((unsigned int *)t124);
    t130 = *((unsigned int *)t125);
    t131 = (t129 ^ t130);
    t132 = (t128 | t131);
    t133 = *((unsigned int *)t124);
    t134 = *((unsigned int *)t125);
    t135 = (t133 | t134);
    t136 = (~(t135));
    t137 = (t132 & t136);
    if (t137 != 0)
        goto LAB53;

LAB50:    if (t135 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t123) = 1;

LAB53:    memset(t139, 0, 8);
    t140 = (t123 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t123);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t140) != 0)
        goto LAB56;

LAB57:    t148 = *((unsigned int *)t112);
    t149 = *((unsigned int *)t139);
    t150 = (t148 & t149);
    *((unsigned int *)t147) = t150;
    t151 = (t112 + 4);
    t152 = (t139 + 4);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t138 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t139) = 1;
    goto LAB57;

LAB56:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB57;

LAB58:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t112 + 4);
    t162 = (t139 + 4);
    t163 = *((unsigned int *)t112);
    t164 = (~(t163));
    t165 = *((unsigned int *)t161);
    t166 = (~(t165));
    t167 = *((unsigned int *)t139);
    t168 = (~(t167));
    t169 = *((unsigned int *)t162);
    t170 = (~(t169));
    t171 = (t164 & t166);
    t172 = (t168 & t170);
    t173 = (~(t171));
    t174 = (~(t172));
    t175 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t175 & t173);
    t176 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t176 & t174);
    t177 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t177 & t173);
    t178 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t178 & t174);
    goto LAB60;

LAB61:
LAB64:    t185 = (t0 + 20248U);
    t186 = *((char **)t185);
    t185 = (t186 + 4);
    t187 = *((unsigned int *)t185);
    t188 = (~(t187));
    t189 = *((unsigned int *)t186);
    t190 = (t189 & t188);
    t191 = (t190 != 0);
    if (t191 > 0)
        goto LAB65;

LAB66:    t2 = (t0 + 20888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB74;

LAB75:
LAB76:
LAB67:    goto LAB63;

LAB65:    t192 = (t0 + 20248U);
    t193 = *((char **)t192);
    t192 = (t0 + 38424);
    t194 = (t0 + 13728);
    t195 = xsi_create_subprogram_invocation(t192, 0, t0, t194, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t194, t195);
    t196 = (t0 + 30728);
    xsi_vlogvar_assign_value(t196, t193, 0, 0, 1);

LAB70:    t197 = (t0 + 38520);
    t198 = *((char **)t197);
    t199 = (t198 + 80U);
    t200 = *((char **)t199);
    t201 = (t200 + 272U);
    t202 = *((char **)t201);
    t203 = (t202 + 0U);
    t204 = *((char **)t203);
    t205 = ((int  (*)(char *, char *))t204)(t0, t198);

LAB72:    if (t205 != 0)
        goto LAB73;

LAB68:    t198 = (t0 + 13728);
    xsi_vlog_subprogram_popinvocation(t198);

LAB69:    t206 = (t0 + 38520);
    t207 = *((char **)t206);
    t206 = (t0 + 13728);
    t208 = (t0 + 38424);
    t209 = 0;
    xsi_delete_subprogram_invocation(t206, t207, t0, t208, t209);
    goto LAB67;

LAB71:;
LAB73:    t197 = (t0 + 38616U);
    *((char **)t197) = &&LAB70;
    goto LAB1;

LAB74:    t4 = (t0 + 16888U);
    t5 = *((char **)t4);
    t4 = (t0 + 20248U);
    t11 = *((char **)t4);
    t4 = (t0 + 38424);
    t12 = (t0 + 12864);
    t13 = xsi_create_subprogram_invocation(t4, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t0 + 29448);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 12);
    t15 = (t0 + 29608);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);

LAB79:    t16 = (t0 + 38520);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t32 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB81:    if (t32 != 0)
        goto LAB82;

LAB77:    t17 = (t0 + 12864);
    xsi_vlog_subprogram_popinvocation(t17);

LAB78:    t24 = (t0 + 38520);
    t25 = *((char **)t24);
    t24 = (t0 + 12864);
    t26 = (t0 + 38424);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    goto LAB76;

LAB80:;
LAB82:    t16 = (t0 + 38616U);
    *((char **)t16) = &&LAB79;
    goto LAB1;

LAB84:    t4 = (t0 + 16888U);
    t5 = *((char **)t4);
    t4 = (t0 + 20248U);
    t11 = *((char **)t4);
    t4 = (t0 + 38424);
    t12 = (t0 + 12864);
    t13 = xsi_create_subprogram_invocation(t4, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t0 + 29448);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 12);
    t15 = (t0 + 29608);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);

LAB89:    t16 = (t0 + 38520);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t32 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB91:    if (t32 != 0)
        goto LAB92;

LAB87:    t17 = (t0 + 12864);
    xsi_vlog_subprogram_popinvocation(t17);

LAB88:    t24 = (t0 + 38520);
    t25 = *((char **)t24);
    t24 = (t0 + 12864);
    t26 = (t0 + 38424);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    goto LAB86;

LAB90:;
LAB92:    t16 = (t0 + 38616U);
    *((char **)t16) = &&LAB89;
    goto LAB1;

}

static void Always_1626_13(char *t0)
{
    char t33[16];
    char t34[8];
    char t39[24];
    char t40[8];
    char t46[8];
    char t68[8];
    char t78[24];
    char t79[8];
    char t85[8];
    char t109[8];
    char t123[8];
    char t139[8];
    char t147[8];
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
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
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
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    int t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;

LAB0:    t1 = (t0 + 38864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 42104);
    *((int *)t2) = 1;
    t3 = (t0 + 38896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 20728U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng10)));
    xsi_vlog_unsigned_equal(t33, 64, t2, 64, t3, 64);
    memset(t34, 0, 8);
    t4 = (t33 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t33);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB18:    t11 = (t34 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = *((unsigned int *)t11);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB19;

LAB20:    memcpy(t46, t34, 8);

LAB21:    memset(t68, 0, 8);
    t21 = (t46 + 4);
    t69 = *((unsigned int *)t21);
    t70 = (~(t69));
    t71 = *((unsigned int *)t46);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t21) != 0)
        goto LAB31;

LAB32:    t23 = (t68 + 4);
    t74 = *((unsigned int *)t68);
    t75 = (!(t74));
    t76 = *((unsigned int *)t23);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB33;

LAB34:    memcpy(t85, t68, 8);

LAB35:    memset(t109, 0, 8);
    t110 = (t85 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t85);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t110) != 0)
        goto LAB45;

LAB46:    t117 = (t109 + 4);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB47;

LAB48:    memcpy(t147, t109, 8);

LAB49:    t179 = (t147 + 4);
    t180 = *((unsigned int *)t179);
    t181 = (~(t180));
    t182 = *((unsigned int *)t147);
    t183 = (t182 & t181);
    t184 = (t183 != 0);
    if (t184 > 0)
        goto LAB61;

LAB62:
LAB83:    t2 = (t0 + 21048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB84;

LAB85:
LAB86:
LAB63:    goto LAB2;

LAB6:    t11 = (t0 + 18168U);
    t12 = *((char **)t11);
    t11 = (t0 + 20728U);
    t13 = *((char **)t11);
    t11 = (t0 + 18328U);
    t14 = *((char **)t11);
    t11 = (t0 + 38672);
    t15 = (t0 + 12432);
    t16 = xsi_create_subprogram_invocation(t11, 0, t0, t15, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t15, t16);
    t17 = (t0 + 28488);
    xsi_vlogvar_assign_value(t17, t12, 0, 0, 12);
    t18 = (t0 + 28648);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 2);
    t19 = (t0 + 28808);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 16);

LAB11:    t20 = (t0 + 38768);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t0, t21);

LAB13:    if (t28 != 0)
        goto LAB14;

LAB9:    t21 = (t0 + 12432);
    xsi_vlog_subprogram_popinvocation(t21);

LAB10:    t29 = (t0 + 38768);
    t30 = *((char **)t29);
    t29 = (t0 + 12432);
    t31 = (t0 + 38672);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    goto LAB8;

LAB12:;
LAB14:    t20 = (t0 + 38864U);
    *((char **)t20) = &&LAB11;
    goto LAB1;

LAB15:    *((unsigned int *)t34) = 1;
    goto LAB18;

LAB17:    t5 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = ((char*)((ng34)));
    t13 = ((char*)((ng35)));
    xsi_vlog_unsigned_equal(t39, 72, t12, 64, t13, 72);
    memset(t40, 0, 8);
    t14 = (t39 + 4);
    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB25:    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t40);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t16 = (t34 + 4);
    t17 = (t40 + 4);
    t18 = (t46 + 4);
    t50 = *((unsigned int *)t16);
    t51 = *((unsigned int *)t17);
    t52 = (t50 | t51);
    *((unsigned int *)t18) = t52;
    t53 = *((unsigned int *)t18);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t40) = 1;
    goto LAB25;

LAB24:    t15 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB26:    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t18);
    *((unsigned int *)t46) = (t55 | t56);
    t19 = (t34 + 4);
    t20 = (t40 + 4);
    t57 = *((unsigned int *)t19);
    t58 = (~(t57));
    t59 = *((unsigned int *)t34);
    t28 = (t59 & t58);
    t60 = *((unsigned int *)t20);
    t61 = (~(t60));
    t62 = *((unsigned int *)t40);
    t63 = (t62 & t61);
    t64 = (~(t28));
    t65 = (~(t63));
    t66 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t66 & t64);
    t67 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t67 & t65);
    goto LAB28;

LAB29:    *((unsigned int *)t68) = 1;
    goto LAB32;

LAB31:    t22 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB32;

LAB33:    t24 = ((char*)((ng34)));
    t25 = ((char*)((ng36)));
    xsi_vlog_unsigned_equal(t78, 72, t24, 64, t25, 72);
    memset(t79, 0, 8);
    t26 = (t78 + 4);
    t80 = *((unsigned int *)t26);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t26) != 0)
        goto LAB38;

LAB39:    t86 = *((unsigned int *)t68);
    t87 = *((unsigned int *)t79);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t29 = (t68 + 4);
    t30 = (t79 + 4);
    t31 = (t85 + 4);
    t89 = *((unsigned int *)t29);
    t90 = *((unsigned int *)t30);
    t91 = (t89 | t90);
    *((unsigned int *)t31) = t91;
    t92 = *((unsigned int *)t31);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t79) = 1;
    goto LAB39;

LAB38:    t27 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB39;

LAB40:    t94 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t31);
    *((unsigned int *)t85) = (t94 | t95);
    t32 = (t68 + 4);
    t96 = (t79 + 4);
    t97 = *((unsigned int *)t32);
    t98 = (~(t97));
    t99 = *((unsigned int *)t68);
    t100 = (t99 & t98);
    t101 = *((unsigned int *)t96);
    t102 = (~(t101));
    t103 = *((unsigned int *)t79);
    t104 = (t103 & t102);
    t105 = (~(t100));
    t106 = (~(t104));
    t107 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t107 & t105);
    t108 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t108 & t106);
    goto LAB42;

LAB43:    *((unsigned int *)t109) = 1;
    goto LAB46;

LAB45:    t116 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB46;

LAB47:    t121 = ((char*)((ng37)));
    t122 = ((char*)((ng38)));
    memset(t123, 0, 8);
    t124 = (t121 + 4);
    t125 = (t122 + 4);
    t126 = *((unsigned int *)t121);
    t127 = *((unsigned int *)t122);
    t128 = (t126 ^ t127);
    t129 = *((unsigned int *)t124);
    t130 = *((unsigned int *)t125);
    t131 = (t129 ^ t130);
    t132 = (t128 | t131);
    t133 = *((unsigned int *)t124);
    t134 = *((unsigned int *)t125);
    t135 = (t133 | t134);
    t136 = (~(t135));
    t137 = (t132 & t136);
    if (t137 != 0)
        goto LAB53;

LAB50:    if (t135 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t123) = 1;

LAB53:    memset(t139, 0, 8);
    t140 = (t123 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t123);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t140) != 0)
        goto LAB56;

LAB57:    t148 = *((unsigned int *)t109);
    t149 = *((unsigned int *)t139);
    t150 = (t148 & t149);
    *((unsigned int *)t147) = t150;
    t151 = (t109 + 4);
    t152 = (t139 + 4);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t138 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t139) = 1;
    goto LAB57;

LAB56:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB57;

LAB58:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t109 + 4);
    t162 = (t139 + 4);
    t163 = *((unsigned int *)t109);
    t164 = (~(t163));
    t165 = *((unsigned int *)t161);
    t166 = (~(t165));
    t167 = *((unsigned int *)t139);
    t168 = (~(t167));
    t169 = *((unsigned int *)t162);
    t170 = (~(t169));
    t171 = (t164 & t166);
    t172 = (t168 & t170);
    t173 = (~(t171));
    t174 = (~(t172));
    t175 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t175 & t173);
    t176 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t176 & t174);
    t177 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t177 & t173);
    t178 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t178 & t174);
    goto LAB60;

LAB61:
LAB64:    t185 = (t0 + 20408U);
    t186 = *((char **)t185);
    t185 = (t186 + 4);
    t187 = *((unsigned int *)t185);
    t188 = (~(t187));
    t189 = *((unsigned int *)t186);
    t190 = (t189 & t188);
    t191 = (t190 != 0);
    if (t191 > 0)
        goto LAB65;

LAB66:    t2 = (t0 + 21048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB74;

LAB75:
LAB76:
LAB67:    goto LAB63;

LAB65:    t192 = (t0 + 20408U);
    t193 = *((char **)t192);
    t192 = (t0 + 38672);
    t194 = (t0 + 14160);
    t195 = xsi_create_subprogram_invocation(t192, 0, t0, t194, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t194, t195);
    t196 = (t0 + 30888);
    xsi_vlogvar_assign_value(t196, t193, 0, 0, 1);

LAB70:    t197 = (t0 + 38768);
    t198 = *((char **)t197);
    t199 = (t198 + 80U);
    t200 = *((char **)t199);
    t201 = (t200 + 272U);
    t202 = *((char **)t201);
    t203 = (t202 + 0U);
    t204 = *((char **)t203);
    t205 = ((int  (*)(char *, char *))t204)(t0, t198);

LAB72:    if (t205 != 0)
        goto LAB73;

LAB68:    t198 = (t0 + 14160);
    xsi_vlog_subprogram_popinvocation(t198);

LAB69:    t206 = (t0 + 38768);
    t207 = *((char **)t206);
    t206 = (t0 + 14160);
    t208 = (t0 + 38672);
    t209 = 0;
    xsi_delete_subprogram_invocation(t206, t207, t0, t208, t209);
    goto LAB67;

LAB71:;
LAB73:    t197 = (t0 + 38864U);
    *((char **)t197) = &&LAB70;
    goto LAB1;

LAB74:    t4 = (t0 + 18168U);
    t5 = *((char **)t4);
    t4 = (t0 + 20408U);
    t11 = *((char **)t4);
    t4 = (t0 + 38672);
    t12 = (t0 + 13296);
    t13 = xsi_create_subprogram_invocation(t4, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t0 + 30088);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 12);
    t15 = (t0 + 30248);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);

LAB79:    t16 = (t0 + 38768);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t28 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB81:    if (t28 != 0)
        goto LAB82;

LAB77:    t17 = (t0 + 13296);
    xsi_vlog_subprogram_popinvocation(t17);

LAB78:    t24 = (t0 + 38768);
    t25 = *((char **)t24);
    t24 = (t0 + 13296);
    t26 = (t0 + 38672);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    goto LAB76;

LAB80:;
LAB82:    t16 = (t0 + 38864U);
    *((char **)t16) = &&LAB79;
    goto LAB1;

LAB84:    t4 = (t0 + 18168U);
    t5 = *((char **)t4);
    t4 = (t0 + 20408U);
    t11 = *((char **)t4);
    t4 = (t0 + 38672);
    t12 = (t0 + 13296);
    t13 = xsi_create_subprogram_invocation(t4, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t14 = (t0 + 30088);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 12);
    t15 = (t0 + 30248);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);

LAB89:    t16 = (t0 + 38768);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t28 = ((int  (*)(char *, char *))t23)(t0, t17);

LAB91:    if (t28 != 0)
        goto LAB92;

LAB87:    t17 = (t0 + 13296);
    xsi_vlog_subprogram_popinvocation(t17);

LAB88:    t24 = (t0 + 38768);
    t25 = *((char **)t24);
    t24 = (t0 + 13296);
    t26 = (t0 + 38672);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    goto LAB86;

LAB90:;
LAB92:    t16 = (t0 + 38864U);
    *((char **)t16) = &&LAB89;
    goto LAB1;

}

static void NetDecl_1774_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 39112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 16888U);
    t3 = *((char **)t2);
    t2 = (t0 + 43016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 4095U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 11U, 2000LL, 0);
    t16 = (t0 + 42120);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_1775_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 39360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 20568U);
    t3 = *((char **)t2);
    t2 = (t0 + 43080);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 2000LL, 0);
    t16 = (t0 + 42136);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_1776_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 39608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 19928U);
    t3 = *((char **)t2);
    t2 = (t0 + 43144);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 2000LL, 0);
    t16 = (t0 + 42152);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_1777_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 39856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 18168U);
    t3 = *((char **)t2);
    t2 = (t0 + 43208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 4095U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 11U, 2000LL, 0);
    t16 = (t0 + 42168);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_1778_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 40104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 20728U);
    t3 = *((char **)t2);
    t2 = (t0 + 43272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 2000LL, 0);
    t16 = (t0 + 42184);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_1779_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 40352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 20088U);
    t3 = *((char **)t2);
    t2 = (t0 + 43336);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 2000LL, 0);
    t16 = (t0 + 42200);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_1782_20(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t66[8];
    char t80[8];
    char t87[8];
    char t124[8];
    char t127[8];
    char t146[8];
    char t151[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    int t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t150;

LAB0:    t1 = (t0 + 40600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 42216);
    *((int *)t2) = 1;
    t3 = (t0 + 40632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 19928U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB46:    t2 = ((char*)((ng4)));
    t3 = (t0 + 24648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB22:    t2 = (t0 + 19928U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t2) != 0)
        goto LAB49;

LAB50:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB51;

LAB52:    memcpy(t26, t6, 8);

LAB53:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB61;

LAB62:
LAB87:    t2 = ((char*)((ng4)));
    t3 = (t0 + 24808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB63:    t2 = (t0 + 24648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t5) != 0)
        goto LAB90;

LAB91:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB92;

LAB93:    memcpy(t26, t6, 8);

LAB94:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB102;

LAB103:    t2 = (t0 + 24808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t5) != 0)
        goto LAB121;

LAB122:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB123;

LAB124:    memcpy(t26, t6, 8);

LAB125:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB133;

LAB134:
LAB135:
LAB104:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 20088U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:
LAB23:    t64 = (t0 + 20568U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t64 = (t65 + 4);
    t67 = *((unsigned int *)t64);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (t69 & t68);
    t71 = (t70 & 3U);
    if (t71 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t64) != 0)
        goto LAB26;

LAB27:    t73 = (t66 + 4);
    t74 = *((unsigned int *)t66);
    t75 = (!(t74));
    t76 = *((unsigned int *)t73);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB28;

LAB29:    memcpy(t87, t66, 8);

LAB30:    t115 = (t87 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t87);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB38;

LAB39:
LAB45:    t2 = ((char*)((ng4)));
    t3 = (t0 + 24648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB40:    goto LAB22;

LAB24:    *((unsigned int *)t66) = 1;
    goto LAB27;

LAB26:    t72 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB27;

LAB28:    t78 = (t0 + 20728U);
    t79 = *((char **)t78);
    memset(t80, 0, 8);
    t78 = (t79 + 4);
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 & 3U);
    if (t85 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t78) != 0)
        goto LAB33;

LAB34:    t88 = *((unsigned int *)t66);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = (t66 + 4);
    t92 = (t80 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t80) = 1;
    goto LAB34;

LAB33:    t86 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB34;

LAB35:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t66 + 4);
    t102 = (t80 + 4);
    t103 = *((unsigned int *)t101);
    t104 = (~(t103));
    t105 = *((unsigned int *)t66);
    t106 = (t105 & t104);
    t107 = *((unsigned int *)t102);
    t108 = (~(t107));
    t109 = *((unsigned int *)t80);
    t110 = (t109 & t108);
    t111 = (~(t106));
    t112 = (~(t110));
    t113 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t113 & t111);
    t114 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t114 & t112);
    goto LAB37;

LAB38:
LAB41:    t121 = (t0 + 16888U);
    t122 = *((char **)t121);
    t121 = (t0 + 20568U);
    t123 = *((char **)t121);
    memcpy(t124, t123, 8);
    t121 = (t0 + 18168U);
    t125 = *((char **)t121);
    t121 = (t0 + 20728U);
    t126 = *((char **)t121);
    memcpy(t127, t126, 8);
    t121 = (t0 + 40408);
    t128 = (t0 + 15456);
    t129 = xsi_create_subprogram_invocation(t121, 0, t0, t128, 0, 0);
    t130 = (t0 + 32328);
    xsi_vlogvar_assign_value(t130, t122, 0, 0, 12);
    t131 = (t0 + 32488);
    xsi_vlogvar_assign_value(t131, t124, 0, 0, 32);
    t132 = (t0 + 32648);
    xsi_vlogvar_assign_value(t132, t125, 0, 0, 12);
    t133 = (t0 + 32808);
    xsi_vlogvar_assign_value(t133, t127, 0, 0, 32);

LAB42:    t134 = (t0 + 40504);
    t135 = *((char **)t134);
    t136 = (t135 + 80U);
    t137 = *((char **)t136);
    t138 = (t137 + 272U);
    t139 = *((char **)t138);
    t140 = (t139 + 0U);
    t141 = *((char **)t140);
    t142 = ((int  (*)(char *, char *))t141)(t0, t135);
    if (t142 != 0)
        goto LAB44;

LAB43:    t135 = (t0 + 40504);
    t143 = *((char **)t135);
    t135 = (t0 + 32968);
    t144 = (t135 + 56U);
    t145 = *((char **)t144);
    memcpy(t146, t145, 8);
    t147 = (t0 + 15456);
    t148 = (t0 + 40408);
    t149 = 0;
    xsi_delete_subprogram_invocation(t147, t143, t0, t148, t149);
    t150 = (t0 + 24648);
    xsi_vlogvar_wait_assign_value(t150, t146, 0, 0, 1, 0LL);
    goto LAB40;

LAB44:    t134 = (t0 + 40600U);
    *((char **)t134) = &&LAB42;
    goto LAB1;

LAB47:    *((unsigned int *)t6) = 1;
    goto LAB50;

LAB49:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB51:    t12 = (t0 + 22008U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t12) != 0)
        goto LAB56;

LAB57:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t19) = 1;
    goto LAB57;

LAB56:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB57;

LAB58:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB60;

LAB61:
LAB64:    t41 = (t0 + 20568U);
    t58 = *((char **)t41);
    memset(t66, 0, 8);
    t41 = (t58 + 4);
    t67 = *((unsigned int *)t41);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (t69 & t68);
    t71 = (t70 & 3U);
    if (t71 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t41) != 0)
        goto LAB67;

LAB68:    t65 = (t66 + 4);
    t74 = *((unsigned int *)t66);
    t75 = (!(t74));
    t76 = *((unsigned int *)t65);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB69;

LAB70:    memcpy(t87, t66, 8);

LAB71:    t101 = (t87 + 4);
    t116 = *((unsigned int *)t101);
    t117 = (~(t116));
    t118 = *((unsigned int *)t87);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB79;

LAB80:
LAB86:    t2 = ((char*)((ng4)));
    t3 = (t0 + 24808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB81:    goto LAB63;

LAB65:    *((unsigned int *)t66) = 1;
    goto LAB68;

LAB67:    t64 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB68;

LAB69:    t72 = (t0 + 21848U);
    t73 = *((char **)t72);
    memset(t80, 0, 8);
    t72 = (t73 + 4);
    t81 = *((unsigned int *)t72);
    t82 = (~(t81));
    t83 = *((unsigned int *)t73);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t72) != 0)
        goto LAB74;

LAB75:    t88 = *((unsigned int *)t66);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t79 = (t66 + 4);
    t86 = (t80 + 4);
    t91 = (t87 + 4);
    t94 = *((unsigned int *)t79);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t91);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB71;

LAB72:    *((unsigned int *)t80) = 1;
    goto LAB75;

LAB74:    t78 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB75;

LAB76:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t91);
    *((unsigned int *)t87) = (t99 | t100);
    t92 = (t66 + 4);
    t93 = (t80 + 4);
    t103 = *((unsigned int *)t92);
    t104 = (~(t103));
    t105 = *((unsigned int *)t66);
    t106 = (t105 & t104);
    t107 = *((unsigned int *)t93);
    t108 = (~(t107));
    t109 = *((unsigned int *)t80);
    t110 = (t109 & t108);
    t111 = (~(t106));
    t112 = (~(t110));
    t113 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t113 & t111);
    t114 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t114 & t112);
    goto LAB78;

LAB79:
LAB82:    t102 = (t0 + 16888U);
    t115 = *((char **)t102);
    t102 = (t0 + 20568U);
    t121 = *((char **)t102);
    memcpy(t124, t121, 8);
    t102 = (t0 + 21688U);
    t122 = *((char **)t102);
    t102 = (t0 + 21848U);
    t123 = *((char **)t102);
    memcpy(t127, t123, 8);
    t102 = (t0 + 40408);
    t125 = (t0 + 15456);
    t126 = xsi_create_subprogram_invocation(t102, 0, t0, t125, 0, 0);
    t128 = (t0 + 32328);
    xsi_vlogvar_assign_value(t128, t115, 0, 0, 12);
    t129 = (t0 + 32488);
    xsi_vlogvar_assign_value(t129, t124, 0, 0, 32);
    t130 = (t0 + 32648);
    xsi_vlogvar_assign_value(t130, t122, 0, 0, 12);
    t131 = (t0 + 32808);
    xsi_vlogvar_assign_value(t131, t127, 0, 0, 32);

LAB83:    t132 = (t0 + 40504);
    t133 = *((char **)t132);
    t134 = (t133 + 80U);
    t135 = *((char **)t134);
    t136 = (t135 + 272U);
    t137 = *((char **)t136);
    t138 = (t137 + 0U);
    t139 = *((char **)t138);
    t142 = ((int  (*)(char *, char *))t139)(t0, t133);
    if (t142 != 0)
        goto LAB85;

LAB84:    t133 = (t0 + 40504);
    t140 = *((char **)t133);
    t133 = (t0 + 32968);
    t141 = (t133 + 56U);
    t143 = *((char **)t141);
    memcpy(t146, t143, 8);
    t144 = (t0 + 15456);
    t145 = (t0 + 40408);
    t147 = 0;
    xsi_delete_subprogram_invocation(t144, t140, t0, t145, t147);
    t148 = (t0 + 24808);
    xsi_vlogvar_wait_assign_value(t148, t146, 0, 0, 1, 0LL);
    goto LAB81;

LAB85:    t132 = (t0 + 40600U);
    *((char **)t132) = &&LAB83;
    goto LAB1;

LAB88:    *((unsigned int *)t6) = 1;
    goto LAB91;

LAB90:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB91;

LAB92:    t17 = (t0 + 20728U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 3U);
    if (t24 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t17) != 0)
        goto LAB97;

LAB98:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB94;

LAB95:    *((unsigned int *)t19) = 1;
    goto LAB98;

LAB97:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB98;

LAB99:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB101;

LAB102:
LAB105:    t64 = ((char*)((ng0)));
    t65 = ((char*)((ng2)));
    t72 = xsi_vlog_time(t151, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_fwrite(*((unsigned int *)t64), 0, 0, 1, ng39, 3, t0, (char)118, t65, 128, (char)118, t151, 64);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 20568U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 3U);
    if (t11 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t3) != 0)
        goto LAB108;

LAB109:    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB110;

LAB111:    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t12) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t6) > 0)
        goto LAB116;

LAB117:    memcpy(t151, t17, 16);

LAB118:    t18 = (t0 + 16888U);
    t25 = *((char **)t18);
    t18 = (t0 + 18168U);
    t30 = *((char **)t18);
    xsi_vlogfile_fwrite(*((unsigned int *)t2), 0, 0, 1, ng40, 4, t0, (char)118, t151, 40, (char)118, t25, 12, (char)118, t30, 12);
    goto LAB104;

LAB106:    *((unsigned int *)t6) = 1;
    goto LAB109;

LAB108:    t5 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB109;

LAB110:    t13 = ((char*)((ng41)));
    goto LAB111;

LAB112:    t17 = ((char*)((ng42)));
    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t151, 40, t13, 40, t17, 40);
    goto LAB118;

LAB116:    memcpy(t151, t13, 16);
    goto LAB118;

LAB119:    *((unsigned int *)t6) = 1;
    goto LAB122;

LAB121:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB122;

LAB123:    t17 = (t0 + 21848U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t17) != 0)
        goto LAB128;

LAB129:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB130;

LAB131:
LAB132:    goto LAB125;

LAB126:    *((unsigned int *)t19) = 1;
    goto LAB129;

LAB128:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB129;

LAB130:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB132;

LAB133:
LAB136:    t64 = ((char*)((ng0)));
    t65 = ((char*)((ng2)));
    t72 = xsi_vlog_time(t151, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_fwrite(*((unsigned int *)t64), 0, 0, 1, ng39, 3, t0, (char)118, t65, 128, (char)118, t151, 64);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 20568U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 3U);
    if (t11 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t3) != 0)
        goto LAB139;

LAB140:    t12 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB141;

LAB142:    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t12) > 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t6) > 0)
        goto LAB147;

LAB148:    memcpy(t151, t17, 16);

LAB149:    t18 = (t0 + 16888U);
    t25 = *((char **)t18);
    t18 = (t0 + 21688U);
    t30 = *((char **)t18);
    xsi_vlogfile_fwrite(*((unsigned int *)t2), 0, 0, 1, ng40, 4, t0, (char)118, t151, 40, (char)118, t25, 12, (char)118, t30, 12);
    goto LAB135;

LAB137:    *((unsigned int *)t6) = 1;
    goto LAB140;

LAB139:    t5 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB140;

LAB141:    t13 = ((char*)((ng41)));
    goto LAB142;

LAB143:    t17 = ((char*)((ng42)));
    goto LAB144;

LAB145:    xsi_vlog_unsigned_bit_combine(t151, 40, t13, 40, t17, 40);
    goto LAB149;

LAB147:    memcpy(t151, t13, 16);
    goto LAB149;

}

static void Always_1823_21(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t66[8];
    char t80[8];
    char t87[8];
    char t124[8];
    char t127[8];
    char t146[8];
    char t151[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    int t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t149;
    char *t150;

LAB0:    t1 = (t0 + 40848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 42232);
    *((int *)t2) = 1;
    t3 = (t0 + 40880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 19928U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:
LAB46:    t2 = ((char*)((ng4)));
    t3 = (t0 + 24968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB22:    t2 = (t0 + 21528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t2) != 0)
        goto LAB49;

LAB50:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB51;

LAB52:    memcpy(t26, t6, 8);

LAB53:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB61;

LAB62:
LAB87:    t2 = ((char*)((ng4)));
    t3 = (t0 + 25128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB63:    t2 = (t0 + 24968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t5) != 0)
        goto LAB90;

LAB91:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB92;

LAB93:    memcpy(t26, t6, 8);

LAB94:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB102;

LAB103:    t2 = (t0 + 25128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t5) != 0)
        goto LAB121;

LAB122:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB123;

LAB124:    memcpy(t26, t6, 8);

LAB125:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB133;

LAB134:
LAB135:
LAB104:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 20088U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:
LAB23:    t64 = (t0 + 20568U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t64 = (t65 + 4);
    t67 = *((unsigned int *)t64);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (t69 & t68);
    t71 = (t70 & 3U);
    if (t71 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t64) != 0)
        goto LAB26;

LAB27:    t73 = (t66 + 4);
    t74 = *((unsigned int *)t66);
    t75 = (!(t74));
    t76 = *((unsigned int *)t73);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB28;

LAB29:    memcpy(t87, t66, 8);

LAB30:    t115 = (t87 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t87);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB38;

LAB39:
LAB45:    t2 = ((char*)((ng4)));
    t3 = (t0 + 24968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB40:    goto LAB22;

LAB24:    *((unsigned int *)t66) = 1;
    goto LAB27;

LAB26:    t72 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB27;

LAB28:    t78 = (t0 + 20728U);
    t79 = *((char **)t78);
    memset(t80, 0, 8);
    t78 = (t79 + 4);
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 & 3U);
    if (t85 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t78) != 0)
        goto LAB33;

LAB34:    t88 = *((unsigned int *)t66);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = (t66 + 4);
    t92 = (t80 + 4);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t91);
    t95 = *((unsigned int *)t92);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t80) = 1;
    goto LAB34;

LAB33:    t86 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB34;

LAB35:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t87) = (t99 | t100);
    t101 = (t66 + 4);
    t102 = (t80 + 4);
    t103 = *((unsigned int *)t101);
    t104 = (~(t103));
    t105 = *((unsigned int *)t66);
    t106 = (t105 & t104);
    t107 = *((unsigned int *)t102);
    t108 = (~(t107));
    t109 = *((unsigned int *)t80);
    t110 = (t109 & t108);
    t111 = (~(t106));
    t112 = (~(t110));
    t113 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t113 & t111);
    t114 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t114 & t112);
    goto LAB37;

LAB38:
LAB41:    t121 = (t0 + 16888U);
    t122 = *((char **)t121);
    t121 = (t0 + 20568U);
    t123 = *((char **)t121);
    memcpy(t124, t123, 8);
    t121 = (t0 + 18168U);
    t125 = *((char **)t121);
    t121 = (t0 + 20728U);
    t126 = *((char **)t121);
    memcpy(t127, t126, 8);
    t121 = (t0 + 40656);
    t128 = (t0 + 15456);
    t129 = xsi_create_subprogram_invocation(t121, 0, t0, t128, 0, 0);
    t130 = (t0 + 32328);
    xsi_vlogvar_assign_value(t130, t122, 0, 0, 12);
    t131 = (t0 + 32488);
    xsi_vlogvar_assign_value(t131, t124, 0, 0, 32);
    t132 = (t0 + 32648);
    xsi_vlogvar_assign_value(t132, t125, 0, 0, 12);
    t133 = (t0 + 32808);
    xsi_vlogvar_assign_value(t133, t127, 0, 0, 32);

LAB42:    t134 = (t0 + 40752);
    t135 = *((char **)t134);
    t136 = (t135 + 80U);
    t137 = *((char **)t136);
    t138 = (t137 + 272U);
    t139 = *((char **)t138);
    t140 = (t139 + 0U);
    t141 = *((char **)t140);
    t142 = ((int  (*)(char *, char *))t141)(t0, t135);
    if (t142 != 0)
        goto LAB44;

LAB43:    t135 = (t0 + 40752);
    t143 = *((char **)t135);
    t135 = (t0 + 32968);
    t144 = (t135 + 56U);
    t145 = *((char **)t144);
    memcpy(t146, t145, 8);
    t147 = (t0 + 15456);
    t148 = (t0 + 40656);
    t149 = 0;
    xsi_delete_subprogram_invocation(t147, t143, t0, t148, t149);
    t150 = (t0 + 24968);
    xsi_vlogvar_wait_assign_value(t150, t146, 0, 0, 1, 0LL);
    goto LAB40;

LAB44:    t134 = (t0 + 40848U);
    *((char **)t134) = &&LAB42;
    goto LAB1;

LAB47:    *((unsigned int *)t6) = 1;
    goto LAB50;

LAB49:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB50;

LAB51:    t12 = (t0 + 20088U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t12) != 0)
        goto LAB56;

LAB57:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t19) = 1;
    goto LAB57;

LAB56:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB57;

LAB58:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB60;

LAB61:
LAB64:    t41 = (t0 + 21368U);
    t58 = *((char **)t41);
    memset(t66, 0, 8);
    t41 = (t58 + 4);
    t67 = *((unsigned int *)t41);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t41) != 0)
        goto LAB67;

LAB68:    t65 = (t66 + 4);
    t74 = *((unsigned int *)t66);
    t75 = (!(t74));
    t76 = *((unsigned int *)t65);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB69;

LAB70:    memcpy(t87, t66, 8);

LAB71:    t101 = (t87 + 4);
    t116 = *((unsigned int *)t101);
    t117 = (~(t116));
    t118 = *((unsigned int *)t87);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB79;

LAB80:
LAB86:    t2 = ((char*)((ng4)));
    t3 = (t0 + 25128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB81:    goto LAB63;

LAB65:    *((unsigned int *)t66) = 1;
    goto LAB68;

LAB67:    t64 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB68;

LAB69:    t72 = (t0 + 20728U);
    t73 = *((char **)t72);
    memset(t80, 0, 8);
    t72 = (t73 + 4);
    t81 = *((unsigned int *)t72);
    t82 = (~(t81));
    t83 = *((unsigned int *)t73);
    t84 = (t83 & t82);
    t85 = (t84 & 3U);
    if (t85 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t72) != 0)
        goto LAB74;

LAB75:    t88 = *((unsigned int *)t66);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t79 = (t66 + 4);
    t86 = (t80 + 4);
    t91 = (t87 + 4);
    t94 = *((unsigned int *)t79);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t91);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB71;

LAB72:    *((unsigned int *)t80) = 1;
    goto LAB75;

LAB74:    t78 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB75;

LAB76:    t99 = *((unsigned int *)t87);
    t100 = *((unsigned int *)t91);
    *((unsigned int *)t87) = (t99 | t100);
    t92 = (t66 + 4);
    t93 = (t80 + 4);
    t103 = *((unsigned int *)t92);
    t104 = (~(t103));
    t105 = *((unsigned int *)t66);
    t106 = (t105 & t104);
    t107 = *((unsigned int *)t93);
    t108 = (~(t107));
    t109 = *((unsigned int *)t80);
    t110 = (t109 & t108);
    t111 = (~(t106));
    t112 = (~(t110));
    t113 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t113 & t111);
    t114 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t114 & t112);
    goto LAB78;

LAB79:
LAB82:    t102 = (t0 + 21208U);
    t115 = *((char **)t102);
    t102 = (t0 + 21368U);
    t121 = *((char **)t102);
    memcpy(t124, t121, 8);
    t102 = (t0 + 18168U);
    t122 = *((char **)t102);
    t102 = (t0 + 20728U);
    t123 = *((char **)t102);
    memcpy(t127, t123, 8);
    t102 = (t0 + 40656);
    t125 = (t0 + 15456);
    t126 = xsi_create_subprogram_invocation(t102, 0, t0, t125, 0, 0);
    t128 = (t0 + 32328);
    xsi_vlogvar_assign_value(t128, t115, 0, 0, 12);
    t129 = (t0 + 32488);
    xsi_vlogvar_assign_value(t129, t124, 0, 0, 32);
    t130 = (t0 + 32648);
    xsi_vlogvar_assign_value(t130, t122, 0, 0, 12);
    t131 = (t0 + 32808);
    xsi_vlogvar_assign_value(t131, t127, 0, 0, 32);

LAB83:    t132 = (t0 + 40752);
    t133 = *((char **)t132);
    t134 = (t133 + 80U);
    t135 = *((char **)t134);
    t136 = (t135 + 272U);
    t137 = *((char **)t136);
    t138 = (t137 + 0U);
    t139 = *((char **)t138);
    t142 = ((int  (*)(char *, char *))t139)(t0, t133);
    if (t142 != 0)
        goto LAB85;

LAB84:    t133 = (t0 + 40752);
    t140 = *((char **)t133);
    t133 = (t0 + 32968);
    t141 = (t133 + 56U);
    t143 = *((char **)t141);
    memcpy(t146, t143, 8);
    t144 = (t0 + 15456);
    t145 = (t0 + 40656);
    t147 = 0;
    xsi_delete_subprogram_invocation(t144, t140, t0, t145, t147);
    t148 = (t0 + 25128);
    xsi_vlogvar_wait_assign_value(t148, t146, 0, 0, 1, 0LL);
    goto LAB81;

LAB85:    t132 = (t0 + 40848U);
    *((char **)t132) = &&LAB83;
    goto LAB1;

LAB88:    *((unsigned int *)t6) = 1;
    goto LAB91;

LAB90:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB91;

LAB92:    t17 = (t0 + 20568U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 3U);
    if (t24 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t17) != 0)
        goto LAB97;

LAB98:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB94;

LAB95:    *((unsigned int *)t19) = 1;
    goto LAB98;

LAB97:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB98;

LAB99:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB101;

LAB102:
LAB105:    t64 = ((char*)((ng0)));
    t65 = ((char*)((ng2)));
    t72 = xsi_vlog_time(t151, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_fwrite(*((unsigned int *)t64), 0, 0, 1, ng39, 3, t0, (char)118, t65, 128, (char)118, t151, 64);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 16888U);
    t4 = *((char **)t3);
    t3 = (t0 + 20728U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 3U);
    if (t11 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t3) != 0)
        goto LAB108;

LAB109:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB110;

LAB111:    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t13) > 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t6) > 0)
        goto LAB116;

LAB117:    memcpy(t151, t18, 16);

LAB118:    t25 = (t0 + 18168U);
    t30 = *((char **)t25);
    xsi_vlogfile_fwrite(*((unsigned int *)t2), 0, 0, 1, ng43, 4, t0, (char)118, t4, 12, (char)118, t151, 40, (char)118, t30, 12);
    goto LAB104;

LAB106:    *((unsigned int *)t6) = 1;
    goto LAB109;

LAB108:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB109;

LAB110:    t17 = ((char*)((ng41)));
    goto LAB111;

LAB112:    t18 = ((char*)((ng42)));
    goto LAB113;

LAB114:    xsi_vlog_unsigned_bit_combine(t151, 40, t17, 40, t18, 40);
    goto LAB118;

LAB116:    memcpy(t151, t17, 16);
    goto LAB118;

LAB119:    *((unsigned int *)t6) = 1;
    goto LAB122;

LAB121:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB122;

LAB123:    t17 = (t0 + 21368U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t17) != 0)
        goto LAB128;

LAB129:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB130;

LAB131:
LAB132:    goto LAB125;

LAB126:    *((unsigned int *)t19) = 1;
    goto LAB129;

LAB128:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB129;

LAB130:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB132;

LAB133:
LAB136:    t64 = ((char*)((ng0)));
    t65 = ((char*)((ng2)));
    t72 = xsi_vlog_time(t151, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_fwrite(*((unsigned int *)t64), 0, 0, 1, ng39, 3, t0, (char)118, t65, 128, (char)118, t151, 64);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 21208U);
    t4 = *((char **)t3);
    t3 = (t0 + 20728U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 3U);
    if (t11 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t3) != 0)
        goto LAB139;

LAB140:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB141;

LAB142:    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t13) > 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t6) > 0)
        goto LAB147;

LAB148:    memcpy(t151, t18, 16);

LAB149:    t25 = (t0 + 18168U);
    t30 = *((char **)t25);
    xsi_vlogfile_fwrite(*((unsigned int *)t2), 0, 0, 1, ng43, 4, t0, (char)118, t4, 12, (char)118, t151, 40, (char)118, t30, 12);
    goto LAB135;

LAB137:    *((unsigned int *)t6) = 1;
    goto LAB140;

LAB139:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB140;

LAB141:    t17 = ((char*)((ng41)));
    goto LAB142;

LAB143:    t18 = ((char*)((ng42)));
    goto LAB144;

LAB145:    xsi_vlog_unsigned_bit_combine(t151, 40, t17, 40, t18, 40);
    goto LAB149;

LAB147:    memcpy(t151, t17, 16);
    goto LAB149;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 41096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 43400);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 41344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 43464);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 41592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng16)));
    t3 = (t0 + 43528);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 4095U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 11);

LAB1:    return;
}


extern void xilinxcorelib_ver_m_13417755950257153881_3023120911_init()
{
	static char *pe[] = {(void *)Cont_735_0,(void *)Cont_736_1,(void *)Cont_737_2,(void *)Cont_741_3,(void *)Cont_742_4,(void *)Cont_743_5,(void *)Cont_744_6,(void *)Cont_745_7,(void *)Cont_746_8,(void *)Cont_750_9,(void *)Cont_754_10,(void *)Initial_1277_11,(void *)Always_1584_12,(void *)Always_1626_13,(void *)NetDecl_1774_14,(void *)NetDecl_1775_15,(void *)NetDecl_1776_16,(void *)NetDecl_1777_17,(void *)NetDecl_1778_18,(void *)NetDecl_1779_19,(void *)Always_1782_20,(void *)Always_1823_21,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	static char *se[] = {(void *)sp_write_a,(void *)sp_write_b,(void *)sp_read_a,(void *)sp_read_b,(void *)sp_reset_a,(void *)sp_reset_b,(void *)sp_init_memory,(void *)sp_log2roundup,(void *)sp_collision_check};
	xsi_register_didat("xilinxcorelib_ver_m_13417755950257153881_3023120911", "isim/isim.exe.sim/xilinxcorelib_ver/m_13417755950257153881_3023120911.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
