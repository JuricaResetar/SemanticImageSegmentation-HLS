// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.1
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "tansig.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic tansig::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic tansig::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> tansig::ap_ST_st1_fsm_0 = "0000000";
const sc_lv<7> tansig::ap_ST_st2_fsm_1 = "1";
const sc_lv<7> tansig::ap_ST_st3_fsm_2 = "10";
const sc_lv<7> tansig::ap_ST_st4_fsm_3 = "11";
const sc_lv<7> tansig::ap_ST_st5_fsm_4 = "100";
const sc_lv<7> tansig::ap_ST_st6_fsm_5 = "101";
const sc_lv<7> tansig::ap_ST_st7_fsm_6 = "110";
const sc_lv<7> tansig::ap_ST_st8_fsm_7 = "111";
const sc_lv<7> tansig::ap_ST_st9_fsm_8 = "1000";
const sc_lv<7> tansig::ap_ST_st10_fsm_9 = "1001";
const sc_lv<7> tansig::ap_ST_st11_fsm_10 = "1010";
const sc_lv<7> tansig::ap_ST_st12_fsm_11 = "1011";
const sc_lv<7> tansig::ap_ST_st13_fsm_12 = "1100";
const sc_lv<7> tansig::ap_ST_st14_fsm_13 = "1101";
const sc_lv<7> tansig::ap_ST_st15_fsm_14 = "1110";
const sc_lv<7> tansig::ap_ST_st16_fsm_15 = "1111";
const sc_lv<7> tansig::ap_ST_st17_fsm_16 = "10000";
const sc_lv<7> tansig::ap_ST_st18_fsm_17 = "10001";
const sc_lv<7> tansig::ap_ST_st19_fsm_18 = "10010";
const sc_lv<7> tansig::ap_ST_st20_fsm_19 = "10011";
const sc_lv<7> tansig::ap_ST_st21_fsm_20 = "10100";
const sc_lv<7> tansig::ap_ST_st22_fsm_21 = "10101";
const sc_lv<7> tansig::ap_ST_st23_fsm_22 = "10110";
const sc_lv<7> tansig::ap_ST_st24_fsm_23 = "10111";
const sc_lv<7> tansig::ap_ST_st25_fsm_24 = "11000";
const sc_lv<7> tansig::ap_ST_st26_fsm_25 = "11001";
const sc_lv<7> tansig::ap_ST_st27_fsm_26 = "11010";
const sc_lv<7> tansig::ap_ST_st28_fsm_27 = "11011";
const sc_lv<7> tansig::ap_ST_st29_fsm_28 = "11100";
const sc_lv<7> tansig::ap_ST_st30_fsm_29 = "11101";
const sc_lv<7> tansig::ap_ST_st31_fsm_30 = "11110";
const sc_lv<7> tansig::ap_ST_st32_fsm_31 = "11111";
const sc_lv<7> tansig::ap_ST_st33_fsm_32 = "100000";
const sc_lv<7> tansig::ap_ST_st34_fsm_33 = "100001";
const sc_lv<7> tansig::ap_ST_st35_fsm_34 = "100010";
const sc_lv<7> tansig::ap_ST_st36_fsm_35 = "100011";
const sc_lv<7> tansig::ap_ST_st37_fsm_36 = "100100";
const sc_lv<7> tansig::ap_ST_st38_fsm_37 = "100101";
const sc_lv<7> tansig::ap_ST_st39_fsm_38 = "100110";
const sc_lv<7> tansig::ap_ST_st40_fsm_39 = "100111";
const sc_lv<7> tansig::ap_ST_st41_fsm_40 = "101000";
const sc_lv<7> tansig::ap_ST_st42_fsm_41 = "101001";
const sc_lv<7> tansig::ap_ST_st43_fsm_42 = "101010";
const sc_lv<7> tansig::ap_ST_st44_fsm_43 = "101011";
const sc_lv<7> tansig::ap_ST_st45_fsm_44 = "101100";
const sc_lv<7> tansig::ap_ST_st46_fsm_45 = "101101";
const sc_lv<7> tansig::ap_ST_st47_fsm_46 = "101110";
const sc_lv<7> tansig::ap_ST_st48_fsm_47 = "101111";
const sc_lv<7> tansig::ap_ST_st49_fsm_48 = "110000";
const sc_lv<7> tansig::ap_ST_st50_fsm_49 = "110001";
const sc_lv<7> tansig::ap_ST_st51_fsm_50 = "110010";
const sc_lv<7> tansig::ap_ST_st52_fsm_51 = "110011";
const sc_lv<7> tansig::ap_ST_st53_fsm_52 = "110100";
const sc_lv<7> tansig::ap_ST_st54_fsm_53 = "110101";
const sc_lv<7> tansig::ap_ST_st55_fsm_54 = "110110";
const sc_lv<7> tansig::ap_ST_st56_fsm_55 = "110111";
const sc_lv<7> tansig::ap_ST_st57_fsm_56 = "111000";
const sc_lv<7> tansig::ap_ST_st58_fsm_57 = "111001";
const sc_lv<7> tansig::ap_ST_st59_fsm_58 = "111010";
const sc_lv<7> tansig::ap_ST_st60_fsm_59 = "111011";
const sc_lv<7> tansig::ap_ST_st61_fsm_60 = "111100";
const sc_lv<7> tansig::ap_ST_st62_fsm_61 = "111101";
const sc_lv<7> tansig::ap_ST_st63_fsm_62 = "111110";
const sc_lv<7> tansig::ap_ST_st64_fsm_63 = "111111";
const sc_lv<7> tansig::ap_ST_st65_fsm_64 = "1000000";
const sc_lv<7> tansig::ap_ST_st66_fsm_65 = "1000001";
const sc_lv<7> tansig::ap_ST_st67_fsm_66 = "1000010";
const sc_lv<7> tansig::ap_ST_st68_fsm_67 = "1000011";
const sc_lv<7> tansig::ap_ST_st69_fsm_68 = "1000100";
const sc_lv<32> tansig::ap_const_lv32_C0000000 = "11000000000000000000000000000000";
const sc_lv<64> tansig::ap_const_lv64_3FF0000000000000 = "11111111110000000000000000000000000000000000000000000000000000";
const sc_lv<64> tansig::ap_const_lv64_BFF0000000000000 = "1011111111110000000000000000000000000000000000000000000000000000";
const sc_lv<64> tansig::ap_const_lv64_4000000000000000 = "100000000000000000000000000000000000000000000000000000000000000";
const sc_lv<64> tansig::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";

tansig::tansig(sc_module_name name) : sc_module(name), mVcdFile(0) {
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0 = new tansig_fmul_32ns_32ns_32_4_max_dsp<0,4,32,32,32>("tansig_fmul_32ns_32ns_32_4_max_dsp_U0");
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0->clk(ap_clk);
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0->reset(ap_rst);
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0->din0(grp_fu_38_p0);
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0->din1(grp_fu_38_p1);
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0->ce(grp_fu_38_ce);
    tansig_fmul_32ns_32ns_32_4_max_dsp_U0->dout(grp_fu_38_p2);
    tansig_fptrunc_64ns_32_3_U1 = new tansig_fptrunc_64ns_32_3<1,3,64,32>("tansig_fptrunc_64ns_32_3_U1");
    tansig_fptrunc_64ns_32_3_U1->clk(ap_clk);
    tansig_fptrunc_64ns_32_3_U1->reset(ap_rst);
    tansig_fptrunc_64ns_32_3_U1->din0(grp_fu_44_p0);
    tansig_fptrunc_64ns_32_3_U1->ce(grp_fu_44_ce);
    tansig_fptrunc_64ns_32_3_U1->dout(grp_fu_44_p1);
    tansig_fpext_32ns_64_3_U2 = new tansig_fpext_32ns_64_3<2,3,32,64>("tansig_fpext_32ns_64_3_U2");
    tansig_fpext_32ns_64_3_U2->clk(ap_clk);
    tansig_fpext_32ns_64_3_U2->reset(ap_rst);
    tansig_fpext_32ns_64_3_U2->din0(grp_fu_48_p0);
    tansig_fpext_32ns_64_3_U2->ce(grp_fu_48_ce);
    tansig_fpext_32ns_64_3_U2->dout(grp_fu_48_p1);
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3 = new tansig_dadd_64ns_64ns_64_5_full_dsp<3,5,64,64,64>("tansig_dadd_64ns_64ns_64_5_full_dsp_U3");
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3->clk(ap_clk);
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3->reset(ap_rst);
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3->din0(grp_fu_51_p0);
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3->din1(grp_fu_51_p1);
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3->ce(grp_fu_51_ce);
    tansig_dadd_64ns_64ns_64_5_full_dsp_U3->dout(grp_fu_51_p2);
    tansig_ddiv_64ns_64ns_64_31_U4 = new tansig_ddiv_64ns_64ns_64_31<4,31,64,64,64>("tansig_ddiv_64ns_64ns_64_31_U4");
    tansig_ddiv_64ns_64ns_64_31_U4->clk(ap_clk);
    tansig_ddiv_64ns_64ns_64_31_U4->reset(ap_rst);
    tansig_ddiv_64ns_64ns_64_31_U4->din0(grp_fu_57_p0);
    tansig_ddiv_64ns_64ns_64_31_U4->din1(grp_fu_57_p1);
    tansig_ddiv_64ns_64ns_64_31_U4->ce(grp_fu_57_ce);
    tansig_ddiv_64ns_64ns_64_31_U4->dout(grp_fu_57_p2);
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5 = new tansig_dexp_64ns_64ns_64_18_full_dsp<5,18,64,64,64>("tansig_dexp_64ns_64ns_64_18_full_dsp_U5");
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5->clk(ap_clk);
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5->reset(ap_rst);
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5->din0(grp_fu_62_p0);
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5->din1(grp_fu_62_p1);
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5->ce(grp_fu_62_ce);
    tansig_dexp_64ns_64ns_64_18_full_dsp_U5->dout(grp_fu_62_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_grp_fu_38_ce);

    SC_METHOD(thread_grp_fu_38_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( data );

    SC_METHOD(thread_grp_fu_38_p1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_grp_fu_44_ce);

    SC_METHOD(thread_grp_fu_44_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( reg_67 );

    SC_METHOD(thread_grp_fu_48_ce);

    SC_METHOD(thread_grp_fu_48_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_reg_78 );

    SC_METHOD(thread_grp_fu_51_ce);

    SC_METHOD(thread_grp_fu_51_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_2_reg_88 );
    sensitive << ( tmp_4_reg_93 );

    SC_METHOD(thread_grp_fu_51_p1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_grp_fu_57_ce);

    SC_METHOD(thread_grp_fu_57_p0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_grp_fu_57_p1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( reg_67 );

    SC_METHOD(thread_grp_fu_62_ce);

    SC_METHOD(thread_grp_fu_62_p0);

    SC_METHOD(thread_grp_fu_62_p1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_1_reg_83 );

    SC_METHOD(thread_result);
    sensitive << ( ap_CS_fsm );
    sensitive << ( grp_fu_44_p1 );

    SC_METHOD(thread_result_ap_vld);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "tansig_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, data, "(port)data");
    sc_trace(mVcdFile, result, "(port)result");
    sc_trace(mVcdFile, result_ap_vld, "(port)result_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, grp_fu_51_p2, "grp_fu_51_p2");
    sc_trace(mVcdFile, reg_67, "reg_67");
    sc_trace(mVcdFile, grp_fu_38_p2, "grp_fu_38_p2");
    sc_trace(mVcdFile, tmp_reg_78, "tmp_reg_78");
    sc_trace(mVcdFile, grp_fu_48_p1, "grp_fu_48_p1");
    sc_trace(mVcdFile, tmp_1_reg_83, "tmp_1_reg_83");
    sc_trace(mVcdFile, grp_fu_62_p2, "grp_fu_62_p2");
    sc_trace(mVcdFile, tmp_2_reg_88, "tmp_2_reg_88");
    sc_trace(mVcdFile, grp_fu_57_p2, "grp_fu_57_p2");
    sc_trace(mVcdFile, tmp_4_reg_93, "tmp_4_reg_93");
    sc_trace(mVcdFile, grp_fu_44_p1, "grp_fu_44_p1");
    sc_trace(mVcdFile, grp_fu_38_p0, "grp_fu_38_p0");
    sc_trace(mVcdFile, grp_fu_38_p1, "grp_fu_38_p1");
    sc_trace(mVcdFile, grp_fu_44_p0, "grp_fu_44_p0");
    sc_trace(mVcdFile, grp_fu_48_p0, "grp_fu_48_p0");
    sc_trace(mVcdFile, grp_fu_51_p0, "grp_fu_51_p0");
    sc_trace(mVcdFile, grp_fu_51_p1, "grp_fu_51_p1");
    sc_trace(mVcdFile, grp_fu_57_p0, "grp_fu_57_p0");
    sc_trace(mVcdFile, grp_fu_57_p1, "grp_fu_57_p1");
    sc_trace(mVcdFile, grp_fu_62_p1, "grp_fu_62_p1");
    sc_trace(mVcdFile, grp_fu_38_ce, "grp_fu_38_ce");
    sc_trace(mVcdFile, grp_fu_44_ce, "grp_fu_44_ce");
    sc_trace(mVcdFile, grp_fu_48_ce, "grp_fu_48_ce");
    sc_trace(mVcdFile, grp_fu_51_ce, "grp_fu_51_ce");
    sc_trace(mVcdFile, grp_fu_57_ce, "grp_fu_57_ce");
    sc_trace(mVcdFile, grp_fu_62_p0, "grp_fu_62_p0");
    sc_trace(mVcdFile, grp_fu_62_ce, "grp_fu_62_ce");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("tansig.hdltvin.dat");
    mHdltvoutHandle.open("tansig.hdltvout.dat");
}

tansig::~tansig() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete tansig_fmul_32ns_32ns_32_4_max_dsp_U0;
    delete tansig_fptrunc_64ns_32_3_U1;
    delete tansig_fpext_32ns_64_3_U2;
    delete tansig_dadd_64ns_64ns_64_5_full_dsp_U3;
    delete tansig_ddiv_64ns_64ns_64_31_U4;
    delete tansig_dexp_64ns_64ns_64_18_full_dsp_U5;
}

void tansig::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,7,7>(ap_ST_st30_fsm_29, ap_CS_fsm.read()) || esl_seteq<1,7,7>(ap_ST_st66_fsm_65, ap_CS_fsm.read()))) {
        reg_67 = grp_fu_51_p2.read();
    }
    if (esl_seteq<1,7,7>(ap_ST_st7_fsm_6, ap_CS_fsm.read())) {
        tmp_1_reg_83 = grp_fu_48_p1.read();
    }
    if (esl_seteq<1,7,7>(ap_ST_st25_fsm_24, ap_CS_fsm.read())) {
        tmp_2_reg_88 = grp_fu_62_p2.read();
    }
    if (esl_seteq<1,7,7>(ap_ST_st61_fsm_60, ap_CS_fsm.read())) {
        tmp_4_reg_93 = grp_fu_57_p2.read();
    }
    if (esl_seteq<1,7,7>(ap_ST_st4_fsm_3, ap_CS_fsm.read())) {
        tmp_reg_78 = grp_fu_38_p2.read();
    }
}

void tansig::thread_ap_done() {
    if (esl_seteq<1,7,7>(ap_ST_st69_fsm_68, ap_CS_fsm.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void tansig::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,7,7>(ap_ST_st1_fsm_0, ap_CS_fsm.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void tansig::thread_ap_ready() {
    if (esl_seteq<1,7,7>(ap_ST_st69_fsm_68, ap_CS_fsm.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void tansig::thread_grp_fu_38_ce() {
    grp_fu_38_ce = ap_const_logic_1;
}

void tansig::thread_grp_fu_38_p0() {
    grp_fu_38_p0 = data.read();
}

void tansig::thread_grp_fu_38_p1() {
    grp_fu_38_p1 = ap_const_lv32_C0000000;
}

void tansig::thread_grp_fu_44_ce() {
    grp_fu_44_ce = ap_const_logic_1;
}

void tansig::thread_grp_fu_44_p0() {
    grp_fu_44_p0 = reg_67.read();
}

void tansig::thread_grp_fu_48_ce() {
    grp_fu_48_ce = ap_const_logic_1;
}

void tansig::thread_grp_fu_48_p0() {
    grp_fu_48_p0 = tmp_reg_78.read();
}

void tansig::thread_grp_fu_51_ce() {
    grp_fu_51_ce = ap_const_logic_1;
}

void tansig::thread_grp_fu_51_p0() {
    if (esl_seteq<1,7,7>(ap_ST_st62_fsm_61, ap_CS_fsm.read())) {
        grp_fu_51_p0 = tmp_4_reg_93.read();
    } else if (esl_seteq<1,7,7>(ap_ST_st26_fsm_25, ap_CS_fsm.read())) {
        grp_fu_51_p0 = tmp_2_reg_88.read();
    } else {
        grp_fu_51_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void tansig::thread_grp_fu_51_p1() {
    if (esl_seteq<1,7,7>(ap_ST_st62_fsm_61, ap_CS_fsm.read())) {
        grp_fu_51_p1 = ap_const_lv64_BFF0000000000000;
    } else if (esl_seteq<1,7,7>(ap_ST_st26_fsm_25, ap_CS_fsm.read())) {
        grp_fu_51_p1 = ap_const_lv64_3FF0000000000000;
    } else {
        grp_fu_51_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void tansig::thread_grp_fu_57_ce() {
    grp_fu_57_ce = ap_const_logic_1;
}

void tansig::thread_grp_fu_57_p0() {
    grp_fu_57_p0 = ap_const_lv64_4000000000000000;
}

void tansig::thread_grp_fu_57_p1() {
    grp_fu_57_p1 = reg_67.read();
}

void tansig::thread_grp_fu_62_ce() {
    grp_fu_62_ce = ap_const_logic_1;
}

void tansig::thread_grp_fu_62_p0() {
    grp_fu_62_p0 = ap_const_lv64_0;
}

void tansig::thread_grp_fu_62_p1() {
    grp_fu_62_p1 = tmp_1_reg_83.read();
}

void tansig::thread_result() {
    result = grp_fu_44_p1.read();
}

void tansig::thread_result_ap_vld() {
    if (esl_seteq<1,7,7>(ap_ST_st69_fsm_68, ap_CS_fsm.read())) {
        result_ap_vld = ap_const_logic_1;
    } else {
        result_ap_vld = ap_const_logic_0;
    }
}

void tansig::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint()) {
        case 0 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 1 : 
            ap_NS_fsm = ap_ST_st3_fsm_2;
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_st4_fsm_3;
            break;
        case 3 : 
            ap_NS_fsm = ap_ST_st5_fsm_4;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st6_fsm_5;
            break;
        case 5 : 
            ap_NS_fsm = ap_ST_st7_fsm_6;
            break;
        case 6 : 
            ap_NS_fsm = ap_ST_st8_fsm_7;
            break;
        case 7 : 
            ap_NS_fsm = ap_ST_st9_fsm_8;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st10_fsm_9;
            break;
        case 9 : 
            ap_NS_fsm = ap_ST_st11_fsm_10;
            break;
        case 10 : 
            ap_NS_fsm = ap_ST_st12_fsm_11;
            break;
        case 11 : 
            ap_NS_fsm = ap_ST_st13_fsm_12;
            break;
        case 12 : 
            ap_NS_fsm = ap_ST_st14_fsm_13;
            break;
        case 13 : 
            ap_NS_fsm = ap_ST_st15_fsm_14;
            break;
        case 14 : 
            ap_NS_fsm = ap_ST_st16_fsm_15;
            break;
        case 15 : 
            ap_NS_fsm = ap_ST_st17_fsm_16;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_st18_fsm_17;
            break;
        case 17 : 
            ap_NS_fsm = ap_ST_st19_fsm_18;
            break;
        case 18 : 
            ap_NS_fsm = ap_ST_st20_fsm_19;
            break;
        case 19 : 
            ap_NS_fsm = ap_ST_st21_fsm_20;
            break;
        case 20 : 
            ap_NS_fsm = ap_ST_st22_fsm_21;
            break;
        case 21 : 
            ap_NS_fsm = ap_ST_st23_fsm_22;
            break;
        case 22 : 
            ap_NS_fsm = ap_ST_st24_fsm_23;
            break;
        case 23 : 
            ap_NS_fsm = ap_ST_st25_fsm_24;
            break;
        case 24 : 
            ap_NS_fsm = ap_ST_st26_fsm_25;
            break;
        case 25 : 
            ap_NS_fsm = ap_ST_st27_fsm_26;
            break;
        case 26 : 
            ap_NS_fsm = ap_ST_st28_fsm_27;
            break;
        case 27 : 
            ap_NS_fsm = ap_ST_st29_fsm_28;
            break;
        case 28 : 
            ap_NS_fsm = ap_ST_st30_fsm_29;
            break;
        case 29 : 
            ap_NS_fsm = ap_ST_st31_fsm_30;
            break;
        case 30 : 
            ap_NS_fsm = ap_ST_st32_fsm_31;
            break;
        case 31 : 
            ap_NS_fsm = ap_ST_st33_fsm_32;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_st34_fsm_33;
            break;
        case 33 : 
            ap_NS_fsm = ap_ST_st35_fsm_34;
            break;
        case 34 : 
            ap_NS_fsm = ap_ST_st36_fsm_35;
            break;
        case 35 : 
            ap_NS_fsm = ap_ST_st37_fsm_36;
            break;
        case 36 : 
            ap_NS_fsm = ap_ST_st38_fsm_37;
            break;
        case 37 : 
            ap_NS_fsm = ap_ST_st39_fsm_38;
            break;
        case 38 : 
            ap_NS_fsm = ap_ST_st40_fsm_39;
            break;
        case 39 : 
            ap_NS_fsm = ap_ST_st41_fsm_40;
            break;
        case 40 : 
            ap_NS_fsm = ap_ST_st42_fsm_41;
            break;
        case 41 : 
            ap_NS_fsm = ap_ST_st43_fsm_42;
            break;
        case 42 : 
            ap_NS_fsm = ap_ST_st44_fsm_43;
            break;
        case 43 : 
            ap_NS_fsm = ap_ST_st45_fsm_44;
            break;
        case 44 : 
            ap_NS_fsm = ap_ST_st46_fsm_45;
            break;
        case 45 : 
            ap_NS_fsm = ap_ST_st47_fsm_46;
            break;
        case 46 : 
            ap_NS_fsm = ap_ST_st48_fsm_47;
            break;
        case 47 : 
            ap_NS_fsm = ap_ST_st49_fsm_48;
            break;
        case 48 : 
            ap_NS_fsm = ap_ST_st50_fsm_49;
            break;
        case 49 : 
            ap_NS_fsm = ap_ST_st51_fsm_50;
            break;
        case 50 : 
            ap_NS_fsm = ap_ST_st52_fsm_51;
            break;
        case 51 : 
            ap_NS_fsm = ap_ST_st53_fsm_52;
            break;
        case 52 : 
            ap_NS_fsm = ap_ST_st54_fsm_53;
            break;
        case 53 : 
            ap_NS_fsm = ap_ST_st55_fsm_54;
            break;
        case 54 : 
            ap_NS_fsm = ap_ST_st56_fsm_55;
            break;
        case 55 : 
            ap_NS_fsm = ap_ST_st57_fsm_56;
            break;
        case 56 : 
            ap_NS_fsm = ap_ST_st58_fsm_57;
            break;
        case 57 : 
            ap_NS_fsm = ap_ST_st59_fsm_58;
            break;
        case 58 : 
            ap_NS_fsm = ap_ST_st60_fsm_59;
            break;
        case 59 : 
            ap_NS_fsm = ap_ST_st61_fsm_60;
            break;
        case 60 : 
            ap_NS_fsm = ap_ST_st62_fsm_61;
            break;
        case 61 : 
            ap_NS_fsm = ap_ST_st63_fsm_62;
            break;
        case 62 : 
            ap_NS_fsm = ap_ST_st64_fsm_63;
            break;
        case 63 : 
            ap_NS_fsm = ap_ST_st65_fsm_64;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_st66_fsm_65;
            break;
        case 65 : 
            ap_NS_fsm = ap_ST_st67_fsm_66;
            break;
        case 66 : 
            ap_NS_fsm = ap_ST_st68_fsm_67;
            break;
        case 67 : 
            ap_NS_fsm = ap_ST_st69_fsm_68;
            break;
        case 68 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<7>) ("XXXXXXX");
            break;
    }
}
void tansig::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"data\" :  \"" << data.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result\" :  \"" << result.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"result_ap_vld\" :  \"" << result_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

