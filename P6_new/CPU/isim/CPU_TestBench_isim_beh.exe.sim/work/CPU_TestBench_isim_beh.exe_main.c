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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001165313138_3538746000_init();
    work_m_00000000004033756641_2627615439_init();
    work_m_00000000001999611472_0757879789_init();
    work_m_00000000003421335936_1957175458_init();
    work_m_00000000003444571572_0467708899_init();
    work_m_00000000001911559703_2352116331_init();
    work_m_00000000004151370889_1221824052_init();
    work_m_00000000001861127874_2664993444_init();
    work_m_00000000003819541422_0111020071_init();
    work_m_00000000002543344429_1621229167_init();
    work_m_00000000002088791743_2569115107_init();
    work_m_00000000000191116704_1648104263_init();
    work_m_00000000001378650044_1009640505_init();
    work_m_00000000003867980094_0886308060_init();
    work_m_00000000001391056039_3709913189_init();
    work_m_00000000003794068764_3666345988_init();
    work_m_00000000001178551686_2185821977_init();
    work_m_00000000002680919221_2924402094_init();
    work_m_00000000000031935649_1677129558_init();
    work_m_00000000000338594384_1368203981_init();
    work_m_00000000003795650122_1587489690_init();
    work_m_00000000001227485372_3877310806_init();
    work_m_00000000002047498008_2707123020_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_2707123020");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
