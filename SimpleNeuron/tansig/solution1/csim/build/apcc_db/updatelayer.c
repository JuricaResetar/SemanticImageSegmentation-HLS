/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_nn_layer_ l_struct_OC_nn_layer_;
typedef struct l_struct_OC_nn_neuron_model_ l_struct_OC_nn_neuron_model_;

/* Structure contents */
struct l_struct_OC_nn_layer_ {
  unsigned int field0;
  unsigned int field1;
  l_struct_OC_nn_neuron_model_ *field2;
};

struct l_struct_OC_nn_neuron_model_ {
  unsigned int field0;
  unsigned int field1;
  unsigned int field2;
  unsigned int field3;
  signed int *field4;
  unsigned int field5;
  float field6;
  float *field7;
  float field8;
};


/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void nn_update_layer(l_struct_OC_nn_layer_ llvm_cbe_layer, float *llvm_cbe_data, signed int llvm_cbe_fun_index);
signed int tansig();


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void nn_update_layer(l_struct_OC_nn_layer_ llvm_cbe_layer, float *llvm_cbe_data, signed int llvm_cbe_fun_index) {
  static  unsigned long long aesl_llvm_cbe_sum_weight_data_count = 0;
  float llvm_cbe_sum_weight_data;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_result_count = 0;
  float llvm_cbe_result;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  signed int *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  l_struct_OC_nn_neuron_model_ **llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  l_struct_OC_nn_neuron_model_ *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  signed int *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  signed int *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  signed int *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  signed int **llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  signed int *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  signed int *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  float *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  float **llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  float *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  float llvm_cbe_tmp__22;
  float llvm_cbe_tmp__22__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  float *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  float llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  float *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  float llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  float llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  float llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  float llvm_cbe_tmp__31;
  float llvm_cbe_tmp__31__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  float llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  float llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  float *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond7_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @nn_update_layer\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.nn_layer_* %%layer, i64 0, i32 1, !dbg !4 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__1 = (signed int *)(&llvm_cbe_layer.field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i32* %%1, align 4, !dbg !4 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__2 = (unsigned int )*llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%sum_weight_data, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_16_count);
  *(&llvm_cbe_sum_weight_data) = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  if ((((signed int )llvm_cbe_tmp__2) > ((signed int )0u))) {
    goto llvm_cbe__2e_lr_2e_ph5;
  } else {
    goto llvm_cbe__2e__crit_edge6;
  }

llvm_cbe__2e_lr_2e_ph5:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds %%struct.nn_layer_* %%layer, i64 0, i32 2, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__3 = (l_struct_OC_nn_neuron_model_ **)(&llvm_cbe_layer.field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load %%struct.nn_neuron_model_** %%4, align 8, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__4 = (l_struct_OC_nn_neuron_model_ *)*llvm_cbe_tmp__3;
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__37;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__37:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%.lr.ph5 ], [ %%39, %%._crit_edge  for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__36);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge3 to i64, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__5 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 0, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__6 = (signed int *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field0);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i32* %%8, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__7 = (unsigned int )*llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 1, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field1);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i32* %%10, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__9 = (unsigned int )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 2, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__10 = (signed int *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field2);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i32* %%12, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__11 = (unsigned int )*llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 3, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__12 = (signed int *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field3);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i32* %%14, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__13 = (unsigned int )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_41_count);
  llvm_cbe_tmp__14 = (signed int **)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field4);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i32** %%16, align 8, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__15 = (signed int *)*llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 5, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__16 = (signed int *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field5);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i32* %%18, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__17 = (unsigned int )*llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 6, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__18 = (float *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field6);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load float* %%20, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__19 = (float )*llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 7, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__20 = (float **)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field7);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load float** %%22, align 8, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__21 = (float *)*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n  store float 0.000000e+00, float* %%sum_weight_data, align 4, !dbg !8 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_59_count);
  *(&llvm_cbe_sum_weight_data) = 0x0p0;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", 0x0p0);
  if ((((signed int )llvm_cbe_tmp__9) > ((signed int )0u))) {
    llvm_cbe_tmp__22__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe_tmp__31__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = phi float [ 0.000000e+00, %%6 ], [ %%32, %%.lr.ph  for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__31 = (float )llvm_cbe_tmp__31__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__31);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__29);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = fadd float %%21, %%34, !dbg !8 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__32 = (float )((float )(llvm_cbe_tmp__19 + llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%35, float* %%sum_weight_data, align 4, !dbg !8 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_103_count);
  *(&llvm_cbe_sum_weight_data) = llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = call i32 bitcast (i32 (...)* @tansig to i32 (float*, float*)*)(float* %%sum_weight_data, float* %%result) nounwind, !dbg !9 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__33 = (unsigned int )tansig((float *)(&llvm_cbe_sum_weight_data), (float *)(&llvm_cbe_result));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load float* %%result, align 4, !dbg !9 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__34 = (float )*(&llvm_cbe_result);
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%9, i32* %%8, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_113_count);
  *llvm_cbe_tmp__6 = llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%11, i32* %%10, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_114_count);
  *llvm_cbe_tmp__8 = llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%13, i32* %%12, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_115_count);
  *llvm_cbe_tmp__10 = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%15, i32* %%14, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_116_count);
  *llvm_cbe_tmp__12 = llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  store i32* %%17, i32** %%16, align 8, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_117_count);
  *llvm_cbe_tmp__14 = (signed int *)llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%19, i32* %%18, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_118_count);
  *llvm_cbe_tmp__16 = llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%21, float* %%20, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_119_count);
  *llvm_cbe_tmp__18 = llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  store float* %%23, float** %%22, align 8, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_120_count);
  *llvm_cbe_tmp__20 = (float *)llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds %%struct.nn_neuron_model_* %%5, i64 %%7, i32 8, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__35 = (float *)(&llvm_cbe_tmp__4[(((signed long long )llvm_cbe_tmp__5))].field8);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%37, float* %%38, align 4, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_122_count);
  *llvm_cbe_tmp__35 = llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add nsw i32 %%storemerge3, 1, !dbg !5 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__36&4294967295ull)));
  if (((llvm_cbe_tmp__36&4294967295U) == (llvm_cbe_tmp__2&4294967295U))) {
    goto llvm_cbe__2e__crit_edge6;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__36;   /* for PHI node */
    goto llvm_cbe_tmp__37;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = phi float [ %%32, %%.lr.ph ], [ 0.000000e+00, %%6 ], !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__22 = (float )llvm_cbe_tmp__22__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__22);
printf("\n = %f",llvm_cbe_tmp__29);
printf("\n = %f",0x0p0);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ %%33, %%.lr.ph ], [ 0, %%6  for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",llvm_cbe_tmp__30);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = sext i32 %%storemerge12 to i64, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__23 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds float* %%23, i64 %%26, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__24 = (float *)(&llvm_cbe_tmp__21[(((signed long long )llvm_cbe_tmp__23))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* %%27, align 4, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__25 = (float )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds float* %%data, i64 %%26, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__26 = (float *)(&llvm_cbe_data[(((signed long long )llvm_cbe_tmp__23))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* %%29, align 4, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__27 = (float )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = fmul float %%28, %%30, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__28 = (float )((float )(llvm_cbe_tmp__25 * llvm_cbe_tmp__27));
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = fadd float %%25, %%31, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__29 = (float )((float )(llvm_cbe_tmp__22 + llvm_cbe_tmp__28));
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%32, float* %%sum_weight_data, align 4, !dbg !3 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_84_count);
  *(&llvm_cbe_sum_weight_data) = llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge12, 1, !dbg !8 for 0x%I64xth hint within @nn_update_layer  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__30 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__30&4294967295ull)));
  if (((llvm_cbe_tmp__30&4294967295U) == (llvm_cbe_tmp__9&4294967295U))) {
    llvm_cbe_tmp__31__PHI_TEMPORARY = (float )llvm_cbe_tmp__29;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_tmp__22__PHI_TEMPORARY = (float )llvm_cbe_tmp__29;   /* for PHI node */
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__30;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge6:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @nn_update_layer}\n");
  return;
}

