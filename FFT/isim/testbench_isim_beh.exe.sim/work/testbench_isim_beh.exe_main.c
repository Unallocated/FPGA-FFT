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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *UNISIM_P_3222816464;
char *IEEE_P_2717149903;
char *STD_TEXTIO;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *UNISIM_P_0947159679;
char *IEEE_P_1367372525;
char *IEEE_P_1242562249;
char *IEEE_P_3620187407;
char *IEEE_P_3564397177;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    ieee_p_3564397177_init();
    unisim_p_0947159679_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    ieee_p_0774719531_init();
    unisim_a_2562466605_1496654361_init();
    unisim_a_1717296735_4086321779_init();
    unisim_a_4164620091_3731405331_init();
    unisim_a_0490859109_3731405331_init();
    unisim_a_2718997652_3731405331_init();
    unisim_a_3330121465_3731405331_init();
    unisim_a_0789928158_3731405331_init();
    unisim_a_3600803327_3731405331_init();
    unisim_a_0774281858_3731405331_init();
    unisim_a_2032986120_3731405331_init();
    unisim_a_2988095912_3731405331_init();
    unisim_a_1646226234_1266530935_init();
    unisim_a_3484885994_2523279426_init();
    unisim_a_0029328054_3634591992_init();
    unisim_a_2548838872_3634591992_init();
    unisim_a_0739137552_3634591992_init();
    unisim_a_3401159022_3634591992_init();
    unisim_a_2495524655_3634591992_init();
    unisim_a_3377428034_3634591992_init();
    unisim_a_1941169844_3118875749_init();
    unisim_a_0350208134_1521797606_init();
    unisim_a_2892212195_1521797606_init();
    unisim_a_0868425105_1864968857_init();
    unisim_a_1398595224_1990404599_init();
    unisim_a_3519694068_2693788048_init();
    unisim_a_1513457711_1331108868_init();
    unisim_a_0884577134_1331108868_init();
    unisim_a_2545276020_3752513572_init();
    unisim_a_3120128138_3752513572_init();
    unisim_a_3822252837_3752513572_init();
    unisim_a_1446710196_3752513572_init();
    unisim_a_4104775526_3752513572_init();
    unisim_a_1863101193_3752513572_init();
    unisim_a_3449702363_3752513572_init();
    unisim_a_0931581782_3676810390_init();
    unisim_a_0534317075_3676810390_init();
    unisim_a_1568553482_3676810390_init();
    unisim_a_1264347105_3676810390_init();
    unisim_a_0727751866_3676810390_init();
    unisim_a_4053252614_3676810390_init();
    unisim_a_1095153226_3676810390_init();
    unisim_a_2526245287_3676810390_init();
    unisim_a_1790552799_3676810390_init();
    unisim_a_2363982922_3676810390_init();
    unisim_a_3318909725_3676810390_init();
    unisim_a_3539595177_3676810390_init();
    unisim_a_3650883126_3676810390_init();
    unisim_a_0344698425_3676810390_init();
    unisim_a_0847007988_3676810390_init();
    unisim_a_3384037652_3676810390_init();
    unisim_a_1367769374_3676810390_init();
    unisim_a_0472242593_3676810390_init();
    unisim_a_3706666297_3676810390_init();
    unisim_a_2126231830_3676810390_init();
    unisim_a_0152059386_3676810390_init();
    unisim_a_0184336390_3672491681_init();
    unisim_a_4135062285_3672491681_init();
    unisim_a_2261302797_3723259517_init();
    unisim_a_3055263662_1392679692_init();
    unisim_a_1916428545_3403034321_init();
    unisim_a_2680519808_1064626918_init();
    unisim_a_3702704980_1602505438_init();
    unisim_a_2082877858_3807856483_init();
    unisim_a_0883067041_3807856483_init();
    unisim_a_4196644161_3807856483_init();
    unisim_a_4186041202_3807856483_init();
    unisim_a_0460829680_3807856483_init();
    unisim_a_2533872854_3807856483_init();
    unisim_a_4008827666_3807856483_init();
    unisim_a_3499343047_3807856483_init();
    unisim_a_1263670937_3807856483_init();
    unisim_a_3117740802_3807856483_init();
    unisim_a_0780269725_3807856483_init();
    unisim_a_2697825650_3807856483_init();
    unisim_a_0543228503_3807856483_init();
    unisim_a_3712692829_3807856483_init();
    unisim_a_2635145926_3807856483_init();
    unisim_a_3430580998_3807856483_init();
    work_a_0415367962_0632001823_init();
    work_a_1949178628_2372691052_init();


    xsi_register_tops("work_a_1949178628_2372691052");

    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");

    return xsi_run_simulation(argc, argv);

}
