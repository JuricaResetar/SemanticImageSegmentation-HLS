; ModuleID = 'D:/HLS_Test/tansig/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@str = internal constant [7 x i8] c"tansig\00"

define void @tansig(float* %data, float* %result) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(float* %data) nounwind, !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(float* %result) nounwind, !map !6
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @str) nounwind
  %data_read = call float @_ssdm_op_Read.ap_auto.floatP(float* %data) nounwind
  %tmp = fmul float %data_read, -2.000000e+00
  %tmp_1 = fpext float %tmp to double
  %tmp_2 = call double @llvm.exp.f64(double %tmp_1)
  %tmp_3 = fadd double %tmp_2, 1.000000e+00
  %tmp_4 = fdiv double 2.000000e+00, %tmp_3
  %tmp_5 = fadd double %tmp_4, -1.000000e+00
  %tmp_6 = fptrunc double %tmp_5 to float
  call void @_ssdm_op_Write.ap_auto.floatP(float* %result, float %tmp_6) nounwind
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

declare double @llvm.exp.f64(double) nounwind readonly

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak float @_ssdm_op_Read.ap_auto.floatP(float*) {
entry:
  %empty = load float* %0
  ret float %empty
}

define weak void @_ssdm_op_Write.ap_auto.floatP(float*, float) {
entry:
  store float %1, float* %0
  ret void
}

!llvm.map.gv = !{}

!0 = metadata !{metadata !1}
!1 = metadata !{i32 0, i32 31, metadata !2}
!2 = metadata !{metadata !3}
!3 = metadata !{metadata !"data", metadata !4, metadata !"float"}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 0, i32 0, i32 1}
!6 = metadata !{metadata !7}
!7 = metadata !{i32 0, i32 31, metadata !8}
!8 = metadata !{metadata !9}
!9 = metadata !{metadata !"result", metadata !4, metadata !"float"}
