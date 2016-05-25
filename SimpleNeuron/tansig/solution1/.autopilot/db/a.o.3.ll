; ModuleID = 'D:/HLS_Test/tansig/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@str = internal constant [7 x i8] c"tansig\00"    ; [#uses=1 type=[7 x i8]*]

; [#uses=0]
define void @tansig(float* %data, float* %result) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(float* %data) nounwind, !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(float* %result) nounwind, !map !6
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @str) nounwind
  call void @llvm.dbg.value(metadata !{float* %data}, i64 0, metadata !10), !dbg !19 ; [debug line = 4:20] [debug variable = data]
  call void @llvm.dbg.value(metadata !{float* %result}, i64 0, metadata !20), !dbg !21 ; [debug line = 4:33] [debug variable = result]
  %data_read = call float @_ssdm_op_Read.ap_auto.floatP(float* %data) nounwind, !dbg !22 ; [#uses=1 type=float] [debug line = 5:21]
  %tmp = fmul float %data_read, -2.000000e+00, !dbg !22 ; [#uses=1 type=float] [debug line = 5:21]
  %tmp_1 = fpext float %tmp to double, !dbg !22   ; [#uses=1 type=double] [debug line = 5:21]
  %tmp_2 = call double @llvm.exp.f64(double %tmp_1), !dbg !22 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp_3 = fadd double %tmp_2, 1.000000e+00, !dbg !22 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp_4 = fdiv double 2.000000e+00, %tmp_3, !dbg !22 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp_5 = fadd double %tmp_4, -1.000000e+00, !dbg !22 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp_6 = fptrunc double %tmp_5 to float, !dbg !22 ; [#uses=1 type=float] [debug line = 5:21]
  call void @_ssdm_op_Write.ap_auto.floatP(float* %result, float %tmp_6) nounwind, !dbg !22 ; [debug line = 5:21]
  ret void, !dbg !24                              ; [debug line = 6:1]
}

; [#uses=2]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
declare double @llvm.exp.f64(double) nounwind readonly

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak float @_ssdm_op_Read.ap_auto.floatP(float*) {
entry:
  %empty = load float* %0                         ; [#uses=1 type=float]
  ret float %empty
}

; [#uses=1]
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
!10 = metadata !{i32 786689, metadata !11, metadata !"data", metadata !12, i32 16777220, metadata !15, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!11 = metadata !{i32 786478, i32 0, metadata !12, metadata !"tansig", metadata !"tansig", metadata !"", metadata !12, i32 4, metadata !13, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*)* @tansig, null, null, metadata !17, i32 4} ; [ DW_TAG_subprogram ]
!12 = metadata !{i32 786473, metadata !"tansig.c", metadata !"d:/HLS_Test", null} ; [ DW_TAG_file_type ]
!13 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !14, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!14 = metadata !{null, metadata !15, metadata !15}
!15 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !16} ; [ DW_TAG_pointer_type ]
!16 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!17 = metadata !{metadata !18}
!18 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!19 = metadata !{i32 4, i32 20, metadata !11, null}
!20 = metadata !{i32 786689, metadata !11, metadata !"result", metadata !12, i32 33554436, metadata !15, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!21 = metadata !{i32 4, i32 33, metadata !11, null}
!22 = metadata !{i32 5, i32 21, metadata !23, null}
!23 = metadata !{i32 786443, metadata !11, i32 4, i32 40, metadata !12, i32 0} ; [ DW_TAG_lexical_block ]
!24 = metadata !{i32 6, i32 1, metadata !23, null}
