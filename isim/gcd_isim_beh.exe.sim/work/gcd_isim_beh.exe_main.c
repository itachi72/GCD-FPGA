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
    work_m_00000000002405547826_1323274903_init();
    work_m_00000000001194476935_3866583278_init();
    work_m_00000000001289205970_3027548060_init();
    work_m_00000000003535846159_3037777339_init();
    work_m_00000000000228293380_1272053465_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000228293380_1272053465");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
