﻿

#ifndef _OP_EXEC_OPS_H_
#define _OP_EXEC_OPS_H_

#include "target_cpu.h"
#include "cpu_ops.h"

/*
 * ロード命令
 */
extern int op_exec_ldb(TargetCoreType *cpu);
extern int op_exec_ldbu(TargetCoreType *cpu);
extern int op_exec_ldhu(TargetCoreType *cpu);
extern int op_exec_ldhw(TargetCoreType *cpu);
extern int op_exec_sldb(TargetCoreType *cpu);
extern int op_exec_sldbu(TargetCoreType *cpu);
extern int op_exec_sldh(TargetCoreType *cpu);
extern int op_exec_sldhu(TargetCoreType *cpu);
extern int op_exec_sldw(TargetCoreType *cpu);

extern int op_exec_ld_b_14(TargetCoreType *cpu);
extern int op_exec_ld_bu_14(TargetCoreType *cpu);
extern int op_exec_ld_h_14(TargetCoreType *cpu);
extern int op_exec_ld_hu_14(TargetCoreType *cpu);
extern int op_exec_ld_w_14(TargetCoreType *cpu);

/*
 * ストア命令
 */
extern int op_exec_sstb(TargetCoreType *cpu);
extern int op_exec_ssth(TargetCoreType *cpu);
extern int op_exec_stb(TargetCoreType *cpu);
extern int op_exec_sthw(TargetCoreType *cpu);
extern int op_exec_sstw(TargetCoreType *cpu);
extern int op_exec_st_b_14(TargetCoreType *cpu);
extern int op_exec_st_h_14(TargetCoreType *cpu);
extern int op_exec_st_w_14(TargetCoreType *cpu);
//extern int xxx(TargetCoreType *cpu);

/*
 * 乗算命令
 */
extern int op_exec_mulhi(TargetCoreType *cpu);
extern int op_exec_mulh_1(TargetCoreType *cpu);
extern int op_exec_mulh_2(TargetCoreType *cpu);
extern int op_exec_mulu_12(TargetCoreType *cpu);
extern int op_exec_mul_12(TargetCoreType *cpu);

/*
 * 除算命令
 */

/*
 * 算術演算命令
 */
extern int op_exec_addi(TargetCoreType *cpu);
extern int op_exec_movea(TargetCoreType *cpu);
extern int op_exec_mov_6(TargetCoreType *cpu);
extern int op_exec_movhi(TargetCoreType *cpu);
extern int op_exec_mov_1(TargetCoreType *cpu);
extern int op_exec_mov_2(TargetCoreType *cpu);

extern int op_exec_add_1(TargetCoreType *cpu);
extern int op_exec_add_2(TargetCoreType *cpu);

extern int op_exec_sub(TargetCoreType *cpu);
extern int op_exec_subr(TargetCoreType *cpu);
extern int op_exec_setf(TargetCoreType *cpu);

extern int op_exec_div(TargetCoreType *cpu);
extern int op_exec_divq(TargetCoreType *cpu);
extern int op_exec_divu(TargetCoreType *cpu);
extern int op_exec_divhu(TargetCoreType *cpu);
extern int op_exec_divqu_11(TargetCoreType *cpu);
extern int op_exec_divh_11(TargetCoreType *cpu);
extern int op_exec_divh_1(TargetCoreType *cpu);
extern int op_exec_mul(TargetCoreType *cpu);
extern int op_exec_mulu(TargetCoreType *cpu);

extern int op_exec_cmov_11(TargetCoreType *cpu);
extern int op_exec_cmov_12(TargetCoreType *cpu);

extern int op_exec_adf_11(TargetCoreType *cpu);
extern int op_exec_sbf_11(TargetCoreType *cpu);
extern int op_exec_sasf_9(TargetCoreType *cpu);

extern int op_exec_mac_11(TargetCoreType *cpu);
extern int op_exec_macu_11(TargetCoreType *cpu);

/*
 * 飽和演算命令
 */
extern int op_exec_satsubi(TargetCoreType *cpu);
extern int op_exec_satadd_1(TargetCoreType *cpu);
extern int op_exec_satsub_1(TargetCoreType *cpu);
extern int op_exec_satadd_2(TargetCoreType *cpu);

extern int op_exec_satadd_11(TargetCoreType *cpu);
extern int op_exec_satsub_11(TargetCoreType *cpu);
extern int op_exec_satsubr_1(TargetCoreType *cpu);

/*
 * 論理演算命令
 */
extern int op_exec_and(TargetCoreType *cpu);
extern int op_exec_andi(TargetCoreType *cpu);
extern int op_exec_ori(TargetCoreType *cpu);
extern int op_exec_or(TargetCoreType *cpu);
extern int op_exec_xori(TargetCoreType *cpu);
extern int op_exec_xor(TargetCoreType *cpu);
extern int op_exec_not(TargetCoreType *cpu);
extern int op_exec_sxh(TargetCoreType *cpu);
extern int op_exec_sxb(TargetCoreType *cpu);
extern int op_exec_shl_2(TargetCoreType *cpu);
extern int op_exec_shr_2(TargetCoreType *cpu);
extern int op_exec_sar_2(TargetCoreType *cpu);
extern int op_exec_shl_9(TargetCoreType *cpu);
extern int op_exec_shr_9(TargetCoreType *cpu);
extern int op_exec_sar_9(TargetCoreType *cpu);
extern int op_exec_shl_11(TargetCoreType *cpu);
extern int op_exec_shr_11(TargetCoreType *cpu);
extern int op_exec_sar_11(TargetCoreType *cpu);
extern int op_exec_hsh_12(TargetCoreType *cpu);
extern int op_exec_hsw_12(TargetCoreType *cpu);
extern int op_exec_bsh_12(TargetCoreType *cpu);
extern int op_exec_bsw_12(TargetCoreType *cpu);
extern int op_exec_tst(TargetCoreType *cpu);
extern int op_exec_zxb(TargetCoreType *cpu);
extern int op_exec_zxh(TargetCoreType *cpu);

extern int op_exec_sch0l_9(TargetCoreType *cpu);
extern int op_exec_sch1l_9(TargetCoreType *cpu);
extern int op_exec_sch0r_9(TargetCoreType *cpu);
extern int op_exec_sch1r_9(TargetCoreType *cpu);

/*
 * 分岐命令
 */
extern int op_exec_jr(TargetCoreType *cpu);
extern int op_exec_jr_6(TargetCoreType *cpu);
extern int op_exec_jarl_6(TargetCoreType *cpu);
extern int op_exec_jmp(TargetCoreType *cpu);
extern int op_exec_jmp_6(TargetCoreType *cpu);
extern int op_exec_cmp_1(TargetCoreType *cpu);
extern int op_exec_cmp_2(TargetCoreType *cpu);
extern int op_exec_bcond_3(TargetCoreType *cpu);

/*
 * ビット命令
 */
extern int op_exec_tst1_8(TargetCoreType *cpu);
extern int op_exec_set1_8(TargetCoreType *cpu);
extern int op_exec_clr1_8(TargetCoreType *cpu);
extern int op_exec_not1_8(TargetCoreType *cpu);


extern int op_exec_tst1_9(TargetCoreType *cpu);
extern int op_exec_set1_9(TargetCoreType *cpu);
extern int op_exec_clr1_9(TargetCoreType *cpu);
extern int op_exec_not1_9(TargetCoreType *cpu);

/*
 * 特殊命令
 */
extern int op_exec_diei(TargetCoreType *cpu);
extern int op_exec_ldsr(TargetCoreType *cpu);
extern int op_exec_stsr(TargetCoreType *cpu);
extern int op_exec_nop(TargetCoreType *cpu);
extern int op_exec_reti(TargetCoreType *cpu);
extern int op_exec_halt(TargetCoreType *cpu);
extern int op_exec_trap(TargetCoreType *cpu);
extern int op_exec_fetrap_1(TargetCoreType *cpu);
extern int op_exec_switch(TargetCoreType *cpu);
extern int op_exec_prepare(TargetCoreType *cpu);
extern int op_exec_dispose(TargetCoreType *cpu);
extern int op_exec_caxi(TargetCoreType *cpu);

extern int op_exec_feret_10(TargetCoreType *cpu);
extern int op_exec_eiret_10(TargetCoreType *cpu);
extern int op_exec_syscall_10(TargetCoreType *cpu);


/*
 * 浮動小数点用命令
 */
extern int op_exec_absf_s_F(TargetCoreType *cpu);
extern int op_exec_addf_s_F(TargetCoreType *cpu);
extern int op_exec_addf_d_F(TargetCoreType *cpu);
extern int op_exec_ceilf_sl_F(TargetCoreType *cpu);
extern int op_exec_ceilf_sul_F(TargetCoreType *cpu);
extern int op_exec_ceilf_suw_F(TargetCoreType *cpu);
extern int op_exec_ceilf_sw_F(TargetCoreType *cpu);
extern int op_exec_cmovf_s_F(TargetCoreType *cpu);
extern int op_exec_cmpf_s_F(TargetCoreType *cpu);
extern int op_exec_cvtf_ds_F(TargetCoreType *cpu);
extern int op_exec_cvtf_sd_F(TargetCoreType *cpu);
extern int op_exec_cvtf_ls_F(TargetCoreType *cpu);
extern int op_exec_cvtf_sl_F(TargetCoreType *cpu);
extern int op_exec_cvtf_sul_F(TargetCoreType *cpu);
extern int op_exec_cvtf_suw_F(TargetCoreType *cpu);
extern int op_exec_cvtf_sw_F(TargetCoreType *cpu);
extern int op_exec_cvtf_uls_F(TargetCoreType *cpu);
extern int op_exec_cvtf_uws_F(TargetCoreType *cpu);
extern int op_exec_cvtf_ws_F(TargetCoreType *cpu);
extern int op_exec_divf_s_F(TargetCoreType *cpu);
extern int op_exec_floorf_sl_F(TargetCoreType *cpu);
extern int op_exec_floorf_sul_F(TargetCoreType *cpu);
extern int op_exec_floorf_suw_F(TargetCoreType *cpu);
extern int op_exec_floorf_sw_F(TargetCoreType *cpu);
extern int op_exec_maxf_s_F(TargetCoreType *cpu);
extern int op_exec_minf_s_F(TargetCoreType *cpu);
extern int op_exec_mulf_s_F(TargetCoreType *cpu);
extern int op_exec_mulf_d_F(TargetCoreType *cpu);
extern int op_exec_negf_s_F(TargetCoreType *cpu);
extern int op_exec_recipf_s_F(TargetCoreType *cpu);
extern int op_exec_rsqrtf_s_F(TargetCoreType *cpu);
extern int op_exec_sqrtf_s_F(TargetCoreType *cpu);
extern int op_exec_subf_s_F(TargetCoreType *cpu);
extern int op_exec_trfsr_F(TargetCoreType *cpu);
extern int op_exec_trncf_sl_F(TargetCoreType *cpu);
extern int op_exec_trncf_sul_F(TargetCoreType *cpu);
extern int op_exec_trncf_suw_F(TargetCoreType *cpu);
extern int op_exec_trncf_sw_F(TargetCoreType *cpu);

extern int op_exec_maddf_s_F(TargetCoreType *cpu);
extern int op_exec_msubf_s_F(TargetCoreType *cpu);
extern int op_exec_nmaddf_s_F(TargetCoreType *cpu);
extern int op_exec_nmsubf_s_F(TargetCoreType *cpu);

extern int op_exec_absf_d_F(TargetCoreType *cpu);
extern int op_exec_ceilf_dl_F(TargetCoreType *cpu);
extern int op_exec_ceilf_dul_F(TargetCoreType *cpu);
extern int op_exec_ceilf_duw_F(TargetCoreType *cpu);
extern int op_exec_ceilf_dw_F(TargetCoreType *cpu);
extern int op_exec_cmovf_d_F(TargetCoreType *cpu);
extern int op_exec_cmpf_d_F(TargetCoreType *cpu);
extern int op_exec_cvtf_dl_F(TargetCoreType *cpu);
extern int op_exec_cvtf_dul_F(TargetCoreType *cpu);
extern int op_exec_cvtf_duw_F(TargetCoreType *cpu);
extern int op_exec_cvtf_dw_F(TargetCoreType *cpu);
extern int op_exec_cvtf_ld_F(TargetCoreType *cpu);
extern int op_exec_cvtf_uld_F(TargetCoreType *cpu);
extern int op_exec_cvtf_uwd_F(TargetCoreType *cpu);
extern int op_exec_cvtf_wd_F(TargetCoreType *cpu);
extern int op_exec_divf_d_F(TargetCoreType *cpu);
extern int op_exec_floorf_dl_F(TargetCoreType *cpu);
extern int op_exec_floorf_dul_F(TargetCoreType *cpu);
extern int op_exec_floorf_duw_F(TargetCoreType *cpu);
extern int op_exec_floorf_dw_F(TargetCoreType *cpu);
extern int op_exec_maxf_d_F(TargetCoreType *cpu);
extern int op_exec_minf_d_F(TargetCoreType *cpu);
extern int op_exec_negf_d_F(TargetCoreType *cpu);
extern int op_exec_recipf_d_F(TargetCoreType *cpu);
extern int op_exec_rsqrtf_d_F(TargetCoreType *cpu);
extern int op_exec_sqrtf_d_F(TargetCoreType *cpu);
extern int op_exec_subf_d_F(TargetCoreType *cpu);
extern int op_exec_trncf_dl_F(TargetCoreType *cpu);
extern int op_exec_trncf_dul_F(TargetCoreType *cpu);
extern int op_exec_trncf_duw_F(TargetCoreType *cpu);
extern int op_exec_trncf_dw_F(TargetCoreType *cpu);
extern int op_exec_ceilf_sl_F(TargetCoreType *cpu);
extern int op_exec_ceilf_sul_F(TargetCoreType *cpu);
extern int op_exec_ceilf_suw_F(TargetCoreType *cpu);
extern int op_exec_ceilf_sw_F(TargetCoreType *cpu);
extern int op_exec_cvtf_sl_F(TargetCoreType *cpu);
extern int op_exec_cvtf_sul_F(TargetCoreType *cpu);
extern int op_exec_floorf_sl_F(TargetCoreType *cpu);
extern int op_exec_floorf_sul_F(TargetCoreType *cpu);
extern int op_exec_floorf_suw_F(TargetCoreType *cpu);
extern int op_exec_floorf_sw_F(TargetCoreType *cpu);
extern int op_exec_rsqrtf_s_F(TargetCoreType *cpu);
extern int op_exec_sqrtf_s_F(TargetCoreType *cpu);


/*
 * ディバッグ機能用命令
 */

#include "dbg_log.h"


#endif /* _OP_EXEC_OPS_H_ */
