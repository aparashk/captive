#pragma once
#include <define.h>
#include <dbt/el/context.h>
#include <dbt/el/emitter.h>
#include <dbt/dbt.h>
#include <arm64-decode.h>
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int8_t sint8;
typedef int16_t sint16;
typedef int32_t sint32;
typedef int64_t sint64;
namespace captive 
{
  namespace arch 
  {
    namespace arm64 
    {
      class arm64_cpu;
      template<bool TRACE>
      class arm64_jit2 : public captive::arch::jit::DBT 
      {
        public:
        arm64_jit2();
        ~arm64_jit2();
        bool translate(const Decode *decode_obj, captive::arch::dbt::el::Emitter& emitter) override;
        private:
        bool translate_a64_abs_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_adc(const arm64_decode_a64_ADD_SUB_CARRY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_add_ereg(const arm64_decode_a64_ADD_SUB_EREG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_add_sreg(const arm64_decode_a64_ADD_SUB_SREG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_add_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_addi(const arm64_decode_a64_ADD_SUB_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_addp_scalar(const arm64_decode_a64_SIMD_SCALAR_PW& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_addp_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_addv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_adr(const arm64_decode_a64_PC_REL& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_and_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_andi(const arm64_decode_a64_LOGICAL_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_andsr(const arm64_decode_a64_LOGICAL_SR& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_asrv(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_b(const arm64_decode_a64_UB_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_barrier(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bcond(const arm64_decode_a64_COND_B_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bfm(const arm64_decode_a64_BITFIELD& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bic_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bici(const arm64_decode_a64_SIMD_MOD_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bicsr(const arm64_decode_a64_LOGICAL_SR& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bif(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bit(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_br(const arm64_decode_a64_UB_REG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_bsl(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cbz(const arm64_decode_a64_CMP_B_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ccmni(const arm64_decode_a64_COND_CMP_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ccmnr(const arm64_decode_a64_COND_CMP_REG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ccmpi(const arm64_decode_a64_COND_CMP_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ccmpr(const arm64_decode_a64_COND_CMP_REG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_clrex(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cls(const arm64_decode_a64_DP_1S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_clz(const arm64_decode_a64_DP_1S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmeq_reg(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmeq_zero(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmge_zero(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmhi_reg(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmhs_reg(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmlt_zero(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cmtst(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_cnt(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_crc32(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_crc32c(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_csel(const arm64_decode_a64_COND_SEL& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_csinc(const arm64_decode_a64_COND_SEL& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_csinv(const arm64_decode_a64_COND_SEL& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_csneg(const arm64_decode_a64_COND_SEL& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_drps(const arm64_decode_a64_UB_REG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_dup_elem(const arm64_decode_a64_SIMD_COPY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_dup_gen(const arm64_decode_a64_SIMD_COPY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_eor_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_eori(const arm64_decode_a64_LOGICAL_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_eorsr(const arm64_decode_a64_LOGICAL_SR& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_eret(const arm64_decode_a64_UB_REG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_exgen(const arm64_decode_a64_EX_GEN& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ext(const arm64_decode_a64_SIMD_EXTRACT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_extr(const arm64_decode_a64_EXTRACT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fabd(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fabs(const arm64_decode_a64_FP_DP_1& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fadd(const arm64_decode_a64_FP_DP_2& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fccmpe(const arm64_decode_a64_FP_CCMP& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcmgt_zero(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcmpe(const arm64_decode_a64_FP_CMP& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcsel(const arm64_decode_a64_FP_CSEL& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcvt(const arm64_decode_a64_FP_DP_1& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcvtas_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcvti(const arm64_decode_a64_CVT_FP_I& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcvtz(const arm64_decode_a64_CVT_FP_I& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcvtz_fxp(const arm64_decode_a64_CVT_FP_FXP& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fcvtzs_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fdiv(const arm64_decode_a64_FP_DP_2& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fm(const arm64_decode_a64_FP_DP_3& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmaxnmv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmaxv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fminnmv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fminv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmov(const arm64_decode_a64_FP_DP_1& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmov_gen(const arm64_decode_a64_CVT_FP_I& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmov_simd(const arm64_decode_a64_SIMD_MOD_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmovi(const arm64_decode_a64_FP_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmul(const arm64_decode_a64_FP_DP_2& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fmul_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fneg(const arm64_decode_a64_FP_DP_1& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fnm(const arm64_decode_a64_FP_DP_3& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fnmul(const arm64_decode_a64_FP_DP_2& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_frintx(const arm64_decode_a64_FP_DP_1& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fsqrt(const arm64_decode_a64_FP_DP_1& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fsub(const arm64_decode_a64_FP_DP_2& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_fsub_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_hint(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ins_elem(const arm64_decode_a64_SIMD_COPY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ins_gen(const arm64_decode_a64_SIMD_COPY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld1(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld1pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld1r(const arm64_decode_a64_SIMD_LS_SINGLE& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld1s(const arm64_decode_a64_SIMD_LS_SINGLE& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld2(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld2pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld3(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld3pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld4(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ld4pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldar(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldarb(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldarh(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldaxp(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldaxr(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldaxrb(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldaxrh(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldnp(const arm64_decode_a64_LS_NO_ALLOC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldp(const arm64_decode_a64_LS_REG_PAIR_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldp_simd(const arm64_decode_a64_LS_REG_PAIR_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldpi(const arm64_decode_a64_LS_REG_PAIR_IDX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldpi_simd(const arm64_decode_a64_LS_REG_PAIR_IDX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldpsw(const arm64_decode_a64_LS_REG_PAIR_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldpswi(const arm64_decode_a64_LS_REG_PAIR_IDX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldr(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldr_lit(const arm64_decode_a64_LOAD_REG_LIT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldr_lit_simd(const arm64_decode_a64_LOAD_REG_LIT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldr_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldr_reg_simd(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrb(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrb_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrbi(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrh(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrh_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrhi(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldri(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrsw(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrsw_lit(const arm64_decode_a64_LOAD_REG_LIT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldrswi(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldtr(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldtrb(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldtrh(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldtrsw(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldur(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldurb(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldurh(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldursw(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldxp(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldxr(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldxrb(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ldxrh(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_lslv(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_lsrv(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_madd(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_mla_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_mov(const arm64_decode_a64_LOGICAL_SR& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_movi(const arm64_decode_a64_SIMD_MOD_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_movk(const arm64_decode_a64_MOVE_WIDE_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_movn(const arm64_decode_a64_MOVE_WIDE_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_movz(const arm64_decode_a64_MOVE_WIDE_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_mrs(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_msr_imm(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_msr_reg(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_msr_sctlr(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_msub(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_mul_idx_vector(const arm64_decode_a64_SIMD_VECTOR_IDX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_mul_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_mvni(const arm64_decode_a64_SIMD_MOD_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_neg_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_not_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_orn_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_orr_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_orri(const arm64_decode_a64_LOGICAL_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_orrsr(const arm64_decode_a64_LOGICAL_SR& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_pmull(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_prfm(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_prfm_lit(const arm64_decode_a64_LOAD_REG_LIT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_prfm_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_prfmi(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_prfum(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rbit(const arm64_decode_a64_DP_1S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ret(const arm64_decode_a64_UB_REG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rev(const arm64_decode_a64_DP_1S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rev16(const arm64_decode_a64_DP_1S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rev32(const arm64_decode_a64_DP_1S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rev32_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rev64_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_rorv(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_saddl(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_saddlv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_saddw(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sbc(const arm64_decode_a64_ADD_SUB_CARRY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sbfm(const arm64_decode_a64_BITFIELD& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_scvtf(const arm64_decode_a64_CVT_FP_I& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_scvtf_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sdiv(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_shl_simd(const arm64_decode_a64_SIMD_SHIFT_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_shll(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smaddl(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smax(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smaxv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smin(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sminv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smov(const arm64_decode_a64_SIMD_COPY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smsubl(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smulh(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_smull(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sshl(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sshll(const arm64_decode_a64_SIMD_SHIFT_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sshr(const arm64_decode_a64_SIMD_SHIFT_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ssubl(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ssubw(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st1(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st1pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st1s(const arm64_decode_a64_SIMD_LS_SINGLE& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st1spi(const arm64_decode_a64_SIMD_LS_SINGLE_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st2(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st2pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st3(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st3pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st4(const arm64_decode_a64_SIMD_LS_MULT& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_st4pi(const arm64_decode_a64_SIMD_LS_MULT_PI& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlr(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlrb(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlrh(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlxp(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlxr(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlxrb(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stlxrh(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stnp(const arm64_decode_a64_LS_NO_ALLOC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stp(const arm64_decode_a64_LS_REG_PAIR_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stp_simd(const arm64_decode_a64_LS_REG_PAIR_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stpi(const arm64_decode_a64_LS_REG_PAIR_IDX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stpi_simd(const arm64_decode_a64_LS_REG_PAIR_IDX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_str(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_str_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_str_reg_simd(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_strb(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_strb_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_strbi(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_strh(const arm64_decode_a64_LS_REG_IMM_POST& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_strh_reg(const arm64_decode_a64_LS_REG_REG_OFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_strhi(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stri(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sttr(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sttrb(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sttrh(const arm64_decode_a64_LS_REG_UNPRIV& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stur(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sturb(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sturh(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stxp(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stxr(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stxrb(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_stxrh(const arm64_decode_a64_LS_EX& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sub_ereg(const arm64_decode_a64_ADD_SUB_EREG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sub_sreg(const arm64_decode_a64_ADD_SUB_SREG& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sub_vector(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_subi(const arm64_decode_a64_ADD_SUB_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_sys(const arm64_decode_a64_SYSTEM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_tbl(const arm64_decode_a64_SIMD_TABLE_LOOKUP& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_tbx(const arm64_decode_a64_SIMD_TABLE_LOOKUP& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_tbz(const arm64_decode_a64_TEST_B_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uadalp(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uaddl(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uaddlp(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uaddlv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uaddw(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ubfm(const arm64_decode_a64_BITFIELD& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ucvtf(const arm64_decode_a64_CVT_FP_I& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ucvtf_fxp(const arm64_decode_a64_CVT_FP_FXP& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ucvtf_simd(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_udiv(const arm64_decode_a64_DP_2S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_umaddl(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_umaxv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uminv(const arm64_decode_a64_SIMD_ACROSS_LANES& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_umov(const arm64_decode_a64_SIMD_COPY& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_umsubl(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_umulh(const arm64_decode_a64_DP_3S& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_umull(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ushl(const arm64_decode_a64_SIMD_THREE_SAME& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ushll(const arm64_decode_a64_SIMD_SHIFT_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_ushr(const arm64_decode_a64_SIMD_SHIFT_IMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_usubl(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_usubw(const arm64_decode_a64_SIMD_THREE_DIFF& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uzp1(const arm64_decode_a64_SIMD_PERMUTE& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_uzp2(const arm64_decode_a64_SIMD_PERMUTE& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_vldr(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_vldur(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_vstr(const arm64_decode_a64_LS_REG_UIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_vstur(const arm64_decode_a64_LS_REG_USIMM& insn, captive::arch::dbt::el::Emitter& emitter);
        bool translate_a64_xtn(const arm64_decode_a64_SIMD_TWO_REG_MISC& insn, captive::arch::dbt::el::Emitter& emitter);
      }
      ;
    }
  }
}
