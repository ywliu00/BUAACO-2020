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
    work_m_00000000000780638906_0757879789_init();
    work_m_00000000003421335936_1957175458_init();
    work_m_00000000003444571572_0467708899_init();
    work_m_00000000002755745546_2352116331_init();
    work_m_00000000003362898996_1221824052_init();
    work_m_00000000001861127874_2664993444_init();
    work_m_00000000003303190212_0111020071_init();
    work_m_00000000002543344429_1621229167_init();
    work_m_00000000002088791743_2569115107_init();
    work_m_00000000002453624765_1648104263_init();
    work_m_00000000001378650044_1009640505_init();
    work_m_00000000002737541528_0886308060_init();
    work_m_00000000002301384414_3709913189_init();
    work_m_00000000003947129220_3666345988_init();
    work_m_00000000001178551686_2185821977_init();
    work_m_00000000002680919221_2924402094_init();
    work_m_00000000002319854764_3291741626_init();
    work_m_00000000000031935649_1677129558_init();
    work_m_00000000002202260516_2976211715_init();
    work_m_00000000003674541637_1368203981_init();
    work_m_00000000003795650122_1587489690_init();
    work_m_00000000000792643358_3975733304_init();
    work_m_00000000002549315172_3508565487_init();
    work_m_00000000000871817064_0156190743_init();
    work_m_00000000000563044049_0053799672_init();
    work_m_00000000002398373054_3877310806_init();
    work_m_00000000004012381387_2707123020_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004012381387_2707123020");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
