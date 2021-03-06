#pragma once

#define EXTRACT_SYSREG(v) (v & 0x001fffe0)
#define HANDLE_SYSREG(op0, op1, crn, crm, op2) case (op0 << 19 | op1 << 16 | crn << 12 | crm << 8 | op2 << 5)

#define REG_DCZID_EL0 HANDLE_SYSREG(3, 3, 0, 0, 7)
#define REG_MPIDR_EL1 HANDLE_SYSREG(3, 0, 0, 0, 5)

#define REG_VBAR_EL1 HANDLE_SYSREG(3, 0, 12, 0, 0)

#define REG_SPSR_EL1 HANDLE_SYSREG(3, 0, 4, 0, 0)
#define REG_ELR_EL1 HANDLE_SYSREG(3, 0, 4, 0, 1)
#define REG_ESR_EL1 HANDLE_SYSREG(3, 0, 5, 2, 0)
#define REG_FAR_EL1 HANDLE_SYSREG(3, 0, 6, 0, 0)

#define REG_MIDR_EL1 HANDLE_SYSREG(3, 0, 0, 0, 0)
#define REG_REVIDR_EL1 HANDLE_SYSREG(3, 0, 0, 0, 6)

#define REG_TPIDR_EL0 HANDLE_SYSREG(3, 3, 13, 0, 2)
#define REG_TPIDRRO_EL0 HANDLE_SYSREG(3, 3, 13, 0, 3)
#define REG_TPIDR_EL1 HANDLE_SYSREG(3, 0, 13, 0, 4)

#define REG_CLIDR_EL1 HANDLE_SYSREG(3, 1, 0, 0, 1)
#define REG_CCSIDR_EL1 HANDLE_SYSREG(3, 1, 0, 0, 0)
#define REG_CSSELR_EL1 HANDLE_SYSREG(3, 2, 0, 0, 0)

#define REG_ID_AA64_PFR0_EL1 HANDLE_SYSREG(3, 0, 0, 4, 0)
#define REG_ID_AA64_PFR1_EL1 HANDLE_SYSREG(3, 0, 0, 4, 1)
#define REG_ID_AA64_DFR0_EL1 HANDLE_SYSREG(3, 0, 0, 5, 0)
#define REG_ID_AA64_DFR1_EL1 HANDLE_SYSREG(3, 0, 0, 5, 1)
#define REG_ID_AA64_ZFR0_EL1 HANDLE_SYSREG(3, 0, 0, 4, 4)
#define REG_ID_AA64_ISAR0_EL1 HANDLE_SYSREG(3, 0, 0, 6, 0)
#define REG_ID_AA64_ISAR1_EL1 HANDLE_SYSREG(3, 0, 0, 6, 1)
#define REG_ID_AA64_MMFR0_EL1 HANDLE_SYSREG(3, 0, 0, 7, 0)
#define REG_ID_AA64_MMFR1_EL1 HANDLE_SYSREG(3, 0, 0, 7, 1)
#define REG_ID_AA64_MMFR2_EL1 HANDLE_SYSREG(3, 0, 0, 7, 2)

#define REG_CNTKCTL_EL1 HANDLE_SYSREG(3, 0, 14, 1, 0)

#define REG_CNTFRQ_EL0 HANDLE_SYSREG(3, 3, 14, 0, 0)
#define REG_CNTPCT_EL0 HANDLE_SYSREG(3, 3, 14, 0, 1)
#define REG_CNTVCT_EL0 HANDLE_SYSREG(3, 3, 14, 0, 2)

#define REG_CNTP_TVAL_EL0 HANDLE_SYSREG(3, 3, 14, 2, 0)
#define REG_CNTP_CTL_EL0 HANDLE_SYSREG(3, 3, 14, 2, 1)
#define REG_CNTP_CVAL_EL0 HANDLE_SYSREG(3, 3, 14, 2, 2)

#define REG_CNTVOFF_EL2 HANDLE_SYSREG(3, 4, 14, 0, 3)

#define REG_CNTPS_TVAL_EL1 HANDLE_SYSREG(3, 7, 14, 2, 0)
#define REG_CNTPS_CTL_EL1 HANDLE_SYSREG(3, 7, 14, 2, 1)
#define REG_CNTPS_CVAL_EL1 HANDLE_SYSREG(3, 7, 14, 2, 2)

#define REG_CNTV_TVAL_EL0 HANDLE_SYSREG(3, 3, 14, 3, 0)
#define REG_CNTV_CTL_EL0 HANDLE_SYSREG(3, 3, 14, 3, 1)
#define REG_CNTV_CVAL_EL0 HANDLE_SYSREG(3, 3, 14, 3, 2)

#define REG_OSLAR_EL1 HANDLE_SYSREG(2, 0, 1, 0, 4)
#define REG_OSLSR_EL1 HANDLE_SYSREG(2, 0, 1, 1, 4)
#define REG_OSDLR_EL1 HANDLE_SYSREG(2, 0, 1, 3, 4)

#define REG_DBGBVR0_EL1 HANDLE_SYSREG(2, 0, 0, 0, 4)
#define REG_DBGBVR1_EL1 HANDLE_SYSREG(2, 0, 0, 1, 4)
#define REG_DBGBCR0_EL1 HANDLE_SYSREG(2, 0, 0, 0, 5)
#define REG_DBGBCR1_EL1 HANDLE_SYSREG(2, 0, 0, 1, 5)

#define REG_DBGWVR0_EL1 HANDLE_SYSREG(2, 0, 0, 0, 6)
#define REG_DBGWVR1_EL1 HANDLE_SYSREG(2, 0, 0, 1, 6)
#define REG_DBGWCR0_EL1 HANDLE_SYSREG(2, 0, 0, 0, 7)
#define REG_DBGWCR1_EL1 HANDLE_SYSREG(2, 0, 0, 1, 7)

// -- Performance Counter Registers -- //
#define REG_PMCR_EL0 HANDLE_SYSREG(3, 3, 9, 12, 0)
#define REG_PMCEID0_EL0 HANDLE_SYSREG(3, 3, 9, 12, 6)
#define REG_PMCEID1_EL0 HANDLE_SYSREG(3, 3, 9, 12, 7)
#define REG_PMCNTENCLR_EL0 HANDLE_SYSREG(3, 3, 9, 12, 2)
#define REG_PMCNTENSET_EL0 HANDLE_SYSREG(3, 3, 9, 12, 1)
#define REG_PMINTENCLR_EL1 HANDLE_SYSREG(3, 0, 9, 14, 2)
#define REG_PMINTENSET_EL1 HANDLE_SYSREG(3, 0, 9, 14, 1)
#define REG_PMOVSCLR_EL0 HANDLE_SYSREG(3, 3, 9, 12, 3)
#define REG_PMOVSSET_EL0 HANDLE_SYSREG(3, 3, 9, 14, 3)

#define REG_PMCCFILTR_EL0 HANDLE_SYSREG(3, 3, 14, 15, 7)
#define REG_PMCCNTR_EL0 HANDLE_SYSREG(3, 3, 9, 13, 0)
#define REG_PMMIR_EL1 HANDLE_SYSREG(3, 0, 9, 14, 6)
#define REG_PMSELR_EL0 HANDLE_SYSREG(3, 3, 9, 12, 5)
#define REG_PMSWINC_EL0 HANDLE_SYSREG(3, 3, 9, 12, 4)
#define REG_PMUSERENR_EL0 HANDLE_SYSREG(3, 3, 9, 14, 0)
#define REG_PMXEVCNTR_EL0 HANDLE_SYSREG(3, 3, 9, 13, 2)
#define REG_PMXEVTYPER_EL0 HANDLE_SYSREG(3, 3, 9, 13, 1)

#define REG_PMEVCNNTR_EL0(n) HANDLE_SYSREG(3, 3, 14, (8 | ((n >> 3) & 3)), (n & 7))
#define REG_PMEVTYPER_EL0(n) HANDLE_SYSREG(3, 3, 14, (12 | ((n >> 3) & 3)), (n & 7))

#define FPSR HANDLE_SYSREG(3, 3, 4, 4, 1)

#define REG_TRACECTL HANDLE_SYSREG(3, 7, 15, 15, 7)

// -- Generic Timer -- //
#define REG_CNTKCTL_EL1 HANDLE_SYSREG(3, 0, 14, 1, 0)

#define REG_CNTFRQ_EL0 HANDLE_SYSREG(3, 3, 14, 0, 0)
#define REG_CNTPCT_EL0 HANDLE_SYSREG(3, 3, 14, 0, 1)
#define REG_CNTVCT_EL0 HANDLE_SYSREG(3, 3, 14, 0, 2)

#define REG_CNTP_TVAL_EL0 HANDLE_SYSREG(3, 3, 14, 2, 0)
#define REG_CNTP_CTL_EL0 HANDLE_SYSREG(3, 3, 14, 2, 1)
#define REG_CNTP_CVAL_EL0 HANDLE_SYSREG(3, 3, 14, 2, 2)

#define REG_CNTVOFF_EL2 HANDLE_SYSREG(3, 4, 14, 0, 3)

#define REG_CNTPS_TVAL_EL1 HANDLE_SYSREG(3, 7, 14, 2, 0)
#define REG_CNTPS_CTL_EL1 HANDLE_SYSREG(3, 7, 14, 2, 1)
#define REG_CNTPS_CVAL_EL1 HANDLE_SYSREG(3, 7, 14, 2, 2)

#define REG_CNTV_TVAL_EL0 HANDLE_SYSREG(3, 3, 14, 3, 0)
#define REG_CNTV_CTL_EL0 HANDLE_SYSREG(3, 3, 14, 3, 1)
#define REG_CNTV_CVAL_EL0 HANDLE_SYSREG(3, 3, 14, 3, 2)
