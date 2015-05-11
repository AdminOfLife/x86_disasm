/*
 *
 * Written by Dennis Yurichev <dennis(a)yurichev.com>, 2013
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/3.0/.
 *
 */

#pragma once

enum Ins_codes
{
    I_INVALID=0,

    I_AAA,
    I_AAD,
    I_AAM,
    I_AAS,
    I_ADC,
    I_ADD,
    I_ADDPD,
    I_ADDSD,
    I_ADDSS,
    I_AESENC,
    I_AESENCLAST,
    I_AESIMC,
    I_AESKEYGENASSIST,
    I_AND,
    I_ANDPD,
    I_ANDPS,
    I_ARPL,
    I_BOUND,
    I_BSF,
    I_BSR,
    I_BSWAP,
    I_BT,
    I_BTC,
    I_BTR,
    I_BTS,
    I_CALL,
    I_CBW,
    I_CDQ,
    I_CDQE,
    I_CLC,
    I_CLD,
    I_CLI,
    I_CMC,
    I_CMOVA,
    I_CMOVB,
    I_CMOVBE,
    I_CMOVG,
    I_CMOVGE,
    I_CMOVL,
    I_CMOVLE,
    I_CMOVNB,
    I_CMOVNS,
    I_CMOVNZ,
    I_CMOVO,
    I_CMOVS,
    I_CMOVZ,
    I_CMP,
    I_CMPPD,
    I_CMPSB,
    I_CMPSD,
    I_CMPSQ,
    I_CMPSW,
    I_CMPXCHG,
    I_CMPXCHG8B,
    I_COMISD,
    I_COMISS,
    I_CPUID,
    I_CQO,
    I_CVTDQ2PD,
    I_CVTDQ2PS,
    I_CVTPS2PD,
    I_CVTSD2SI,
    I_CVTSD2SS,
    I_CVTSI2SD,
    I_CVTSI2SS,
    I_CVTTSD2SI,
    I_CWD,
    I_CWDE,
    I_DAA,
    I_DAS,
    I_DEC,
    I_DIV,
    I_DIVSD,
    I_DIVSS,
    I_EMMS,
    I_ENTER,
    I_FABS,
    I_FADD,
    I_FADDP,
    I_FCHS,
    I_FCMOVBE,
    I_FCMOVNBE,
    I_FCOM,
    I_FCOMP,
    I_FCOMPP,
    I_FCOS,
    I_FDIV,
    I_FDIVP,
    I_FDIVR,
    I_FDIVRP,
    I_FIADD,
    I_FICOM,
    I_FICOMP,
    I_FILD,
    I_FIST,
    I_FISTP,
    I_FISUBR,
    I_FLD,
    I_FLD1,
    I_FLDCW,
    I_FLDENV,
    I_FLDL2E,
    I_FLDL2T,
    I_FLDLG2,
    I_FLDLN2,
    I_FLDPI,
    I_FLDZ,
    I_FMUL,
    I_FMULP,
    I_FNCLEX,
    I_FNINIT,
    I_FNSTCW,
    I_FNSTENV,
    I_FNSTSW,
    I_FST,
    I_FSTP,
    I_FSTR,
    I_FSTSW,
    I_FSUB,
    I_FSUBP,
    I_FSUBR,
    I_FSUBRP,
    I_FUCOM,
    I_FUCOMP,
    I_FUCOMPP,
    I_FXAM,
    I_FXCH,
    I_FXSAVE,
    I_HLT,
    I_ICEBP,
    I_IDIV,
    I_IMUL,
    I_IN,
    I_INC,
    I_INSB,
    I_INSD,
    I_INSW,
    I_INT,
    I_INT3,
    I_INTO,
    I_IRETD,
    I_IRETQ,
    I_JA,
    I_JB,
    I_JBE,
    I_JECXZ,
    I_JG,
    I_JGE,
    I_JL,
    I_JLE,
    I_JMP,
    I_JNB,
    I_JNO,
    I_JNP,
    I_JNS,
    I_JNZ,
    I_JO,
    I_JP,
    I_JS,
    I_JZ,
    I_LAHF,
    I_LDMXCSR,
    I_LEA,
    I_LEAVE,
    I_LFENCE,
    I_LODSB,
    I_LODSD,
    I_LODSQ,
    I_LOOP,
    I_LOOPE,
    I_LOOPNE,
    I_LSL,
    I_MAXSD,
    I_MINSD,
    I_MOV,
    I_MOVAPD,
    I_MOVAPS,
    I_MOVD,
    I_MOVDQA,
    I_MOVDQU,
    I_MOVLPD,
    I_MOVQ,
    I_MOVSB,
    I_MOVSD,
    I_MOVSLDUP,
    I_MOVSQ,
    I_MOVSS,
    I_MOVSW,
    I_MOVSX,
    I_MOVSXD,
    I_MOVUPS,
    I_MOVZX,
    I_MUL,
    I_MULPD,
    I_MULSD,
    I_NEG,
    I_NOP,
    I_NOT,
    I_OR,
    I_ORPD,
    I_OUT,
    I_OUTSB,
    I_OUTSD,
    I_OUTSW,
    I_PADDB,
    I_PAUSE,
    I_PCMPEQD,
    I_PEXTRW,
    I_PINSRW,
    I_PMAXSW,
    I_PMINSW,
    I_POP,
    I_POPA,
    I_POPFD,
    I_POPFQ,
    I_POR,
    I_PREFETCHNTA,
    I_PSHUFD,
    I_PSLLDQ,
    I_PSLLQ,
    I_PSRLDQ,
    I_PSRLQ,
    I_PSRLW,
    I_PSUBD,
    I_PSUBQ,
    I_PSUBW,
    I_PUNPCKLDQ,
    I_PUNPCKLQDQ,
    I_PUNPCKLWD,
    I_PUSH,
    I_PUSHA,
    I_PUSHFD,
    I_PUSHFQ,
    I_PXOR,
    I_RCL,
    I_RCR,
    I_RDTSC,
    I_REPE_SCASB,
    I_REPE_SCASD,
    I_REPE_SCASW,
    I_REPNE_SCASB,
    I_REPNE_SCASD,
    I_REPNE_SCASW,
    I_REP_CMPSB,
    I_REP_CMPSD,
    I_REP_CMPSW,
    I_REP_MOVSB,
    I_REP_MOVSD,
    I_REP_MOVSQ,
    I_REP_MOVSW,
    I_REP_STOSB,
    I_REP_STOSD,
    I_REP_STOSW,
    I_RETF,
    I_RETN,
    I_ROL,
    I_ROR,
    I_SAHF,
    I_SAR,
    I_SBB,
    I_SCASB,
    I_SCASD,
    I_SCASQ,
    I_SCASW,
    I_SETA,
    I_SETALC,
    I_SETB,
    I_SETBE,
    I_SETE,
    I_SETG,
    I_SETGE,
    I_SETL,
    I_SETLE,
    I_SETNB,
    I_SETNE,
    I_SETNO,
    I_SETNP,
    I_SETNS,
    I_SETO,
    I_SETP,
    I_SETS,
    I_SHL,
    I_SHLD,
    I_SHR,
    I_SHRD,
    I_SIMD_MOVSD,
    I_SQRTSD,
    I_STC,
    I_STD,
    I_STI,
    I_STMXCSR,
    I_STOSB,
    I_STOSD,
    I_STOSQ,
    I_STOSW,
    I_SUB,
    I_SUBPD,
    I_SUBSD,
    I_SUBSS,
    I_SYSENTER,
    I_TEST,
    I_UCOMISD,
    I_UD2,
    I_UNPCKHPD,
    I_UNPCKLPD,
    I_UNPCKLPS,
    I_WAIT,
    I_XADD,
    I_XCHG,
    I_XGETBV,
    I_XLAT,
    I_XOR,
    I_XORPD,
    I_XORPS,
    I_PADDSW,
    I_PMAXSD,
    I_PMINSD,
    I_PSRLD,
    I_PADDD,
    I_PSUBSW,
    I_PUNPCKHWD,
    I_PCMPGTW,
    I_PAND,
    I_PCMPEQW,
    I_PACKSSWB,
    I_PMOVMSKB,
    I_PUNPCKHDQ,
    I_PCMPGTD,
    I_PACKSSDW,
    I_MULSS,

    I_MAX_INS
};

/* vim: set expandtab ts=4 sw=4 : */
