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


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int main(void);
void nn_update_layer(l_struct_OC_nn_layer_ , float *, signed int );


/* Global Variable Definitions and Initialization */
static float aesl_internal_main_OC_data[4] = { 0x1p0, 0x1p1, 0x1.8p1, 0x1p2 };
static float aesl_internal_main_OC_weights1[4] = { 0x1.c95182p-3, 0x1.542c3cp-2, 0x1.c4d014p-2, 0x1.539c0ep-1 };
static float aesl_internal_main_OC_weights2[4] = { 0x1.542c3cp-2, 0x1.c4d014p-2, 0x1.539c0ep-1, 0x1.c95182p-3 };
static  char aesl_internal__OC_str[4] = "%f\n";


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
static const ConstantFloatTy FPConstant0 = 0xC0400000U;    /* -3.000000e+00 */
static const ConstantFloatTy FPConstant1 = 0xC00CCCCDU;    /* -2.200000e+00 */

signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_layer_count = 0;
  l_struct_OC_nn_layer_ llvm_cbe_layer;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_neuroni_count = 0;
  l_struct_OC_nn_neuron_model_ llvm_cbe_neuroni[2];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_data_count = 0;
  float llvm_cbe_data[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_weights1_count = 0;
  float llvm_cbe_weights1[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_weights2_count = 0;
  float llvm_cbe_weights2[4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
   char *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
   char *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
   char *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  float *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  signed int *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  float *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  float **llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  float *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  signed int *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  signed int *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  float *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  float **llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  signed int *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  signed int *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  l_struct_OC_nn_neuron_model_ *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  l_struct_OC_nn_neuron_model_ **llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  float *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  l_struct_OC_nn_neuron_model_ *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  float *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  float llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  double llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  l_struct_OC_nn_neuron_model_ *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  float *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  float llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  double llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = bitcast [4 x float]* %%data to i8*, !dbg !4 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_4_count);
  llvm_cbe_tmp__1 = ( char *)(( char *)(&llvm_cbe_data));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memcpy(i8* %%1, i8* bitcast ([4 x float]* @aesl_internal_main.data to i8*), i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__2 = ( char *)( char *)memcpy(( char *)llvm_cbe_tmp__1, ( char *)(( char *)(&aesl_internal_main_OC_data)), 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = bitcast [4 x float]* %%weights1 to i8*, !dbg !5 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__3 = ( char *)(( char *)(&llvm_cbe_weights1));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = call i8* @memcpy(i8* %%3, i8* bitcast ([4 x float]* @aesl_internal_main.weights1 to i8*), i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__4 = ( char *)( char *)memcpy(( char *)llvm_cbe_tmp__3, ( char *)(( char *)(&aesl_internal_main_OC_weights1)), 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = bitcast [4 x float]* %%weights2 to i8*, !dbg !5 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__5 = ( char *)(( char *)(&llvm_cbe_weights2));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = call i8* @memcpy(i8* %%5, i8* bitcast ([4 x float]* @aesl_internal_main.weights2 to i8*), i64 16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__6 = ( char *)( char *)memcpy(( char *)llvm_cbe_tmp__5, ( char *)(( char *)(&aesl_internal_main_OC_weights2)), 16ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",16ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [4 x float]* %%weights1, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__7 = (float *)(&llvm_cbe_weights1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 0, i32 1, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_neuroni[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field1);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 4, i32* %%8, align 4, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_18_count);
  *llvm_cbe_tmp__8 = 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 4u);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 0, i32 2, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_19_count);
  llvm_cbe_tmp__9 = (signed int *)(&llvm_cbe_neuroni[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field2);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%9, align 8, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_20_count);
  *llvm_cbe_tmp__9 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 0, i32 6, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__10 = (float *)(&llvm_cbe_neuroni[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field6);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float -3.000000e+00, float* %%10, align 4, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_22_count);
  *llvm_cbe_tmp__10 = (*(float*)&FPConstant0);
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", (*(float*)&FPConstant0));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 0, i32 7, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__11 = (float **)(&llvm_cbe_neuroni[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field7);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float* %%7, float** %%11, align 16, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_24_count);
  *llvm_cbe_tmp__11 = (float *)llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [4 x float]* %%weights2, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__12 = (float *)(&llvm_cbe_weights2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 1, i32 1, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__13 = (signed int *)(&llvm_cbe_neuroni[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field1);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 4, i32* %%13, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_31_count);
  *llvm_cbe_tmp__13 = 4u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 4u);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 1, i32 2, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__14 = (signed int *)(&llvm_cbe_neuroni[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field2);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 1, i32* %%14, align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_33_count);
  *llvm_cbe_tmp__14 = 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 1u);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 1, i32 6, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__15 = (float *)(&llvm_cbe_neuroni[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field6);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float 0xC0019999A0000000, float* %%15, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_35_count);
  *llvm_cbe_tmp__15 = (*(float*)&FPConstant1);
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", (*(float*)&FPConstant1));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 1, i32 7, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__16 = (float **)(&llvm_cbe_neuroni[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
].field7);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 2 && "Write access out of array 'neuroni' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store float* %%12, float** %%16, align 16, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_37_count);
  *llvm_cbe_tmp__16 = (float *)llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds %%struct.nn_layer_* %%layer, i64 0, i32 1, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__17 = (signed int *)(&llvm_cbe_layer.field1);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 2, i32* %%17, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_39_count);
  *llvm_cbe_tmp__17 = 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 2u);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds %%struct.nn_layer_* %%layer, i64 0, i32 0, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__18 = (signed int *)(&llvm_cbe_layer.field0);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%18, align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_41_count);
  *llvm_cbe_tmp__18 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [2 x %%struct.nn_neuron_model_]* %%neuroni, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__19 = (l_struct_OC_nn_neuron_model_ *)(&llvm_cbe_neuroni[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds %%struct.nn_layer_* %%layer, i64 0, i32 2, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__20 = (l_struct_OC_nn_neuron_model_ **)(&llvm_cbe_layer.field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  store %%struct.nn_neuron_model_* %%19, %%struct.nn_neuron_model_** %%20, align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_44_count);
  *llvm_cbe_tmp__20 = (l_struct_OC_nn_neuron_model_ *)llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [4 x float]* %%data, i64 0, i64 0, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__21 = (float *)(&llvm_cbe_data[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @nn_update_layer(%%struct.nn_layer_* byval %%layer, float* %%21, i32 1) nounwind, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_46_count);
  nn_update_layer(llvm_cbe_layer, (float *)llvm_cbe_tmp__21, 1u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load %%struct.nn_neuron_model_** %%20, align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__22 = (l_struct_OC_nn_neuron_model_ *)*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds %%struct.nn_neuron_model_* %%22, i64 0, i32 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__23 = (float *)(&llvm_cbe_tmp__22->field8);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* %%23, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__24 = (float )*llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = fpext float %%24 to double, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__25 = (double )((double )llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n = %lf\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%25) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__26 = (unsigned int )printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf",llvm_cbe_tmp__25);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load %%struct.nn_neuron_model_** %%20, align 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__27 = (l_struct_OC_nn_neuron_model_ *)*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds %%struct.nn_neuron_model_* %%27, i64 1, i32 8, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__28 = (float *)(&llvm_cbe_tmp__27[(((signed long long )1ull))].field8);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load float* %%28, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__29 = (float )*llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = fpext float %%29 to double, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__30 = (double )((double )llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n = %lf\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%30) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__31 = (unsigned int )printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf",llvm_cbe_tmp__30);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__31);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}

