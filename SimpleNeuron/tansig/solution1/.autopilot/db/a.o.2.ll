; ModuleID = 'D:/HLS_Test/tansig/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@str = internal constant [7 x i8] c"tansig\00"    ; [#uses=1 type=[7 x i8]*]

; [#uses=0]
define void @tansig(float* %data, float* %result) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(float* %data) nounwind, !map !13
  call void (...)* @_ssdm_op_SpecBitsMap(float* %result) nounwind, !map !19
  call void (...)* @_ssdm_op_SpecTopModule([7 x i8]* @str) nounwind
  call void @llvm.dbg.value(metadata !{float* %data}, i64 0, metadata !23), !dbg !24 ; [debug line = 4:20] [debug variable = data]
  call void @llvm.dbg.value(metadata !{float* %result}, i64 0, metadata !25), !dbg !26 ; [debug line = 4:33] [debug variable = result]
  %data.load = load float* %data, align 4, !dbg !27 ; [#uses=1 type=float] [debug line = 5:21]
  %tmp = fmul float %data.load, -2.000000e+00, !dbg !27 ; [#uses=1 type=float] [debug line = 5:21]
  %tmp.1 = fpext float %tmp to double, !dbg !27   ; [#uses=1 type=double] [debug line = 5:21]
  %tmp.2 = call double @llvm.exp.f64(double %tmp.1), !dbg !27 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp.3 = fadd double %tmp.2, 1.000000e+00, !dbg !27 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp.4 = fdiv double 2.000000e+00, %tmp.3, !dbg !27 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp.5 = fadd double %tmp.4, -1.000000e+00, !dbg !27 ; [#uses=1 type=double] [debug line = 5:21]
  %tmp.6 = fptrunc double %tmp.5 to float, !dbg !27 ; [#uses=1 type=float] [debug line = 5:21]
  store float %tmp.6, float* %result, align 4, !dbg !27 ; [debug line = 5:21]
  ret void, !dbg !29                              ; [debug line = 6:1]
}

; [#uses=2]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare double @llvm.exp.f64(double) nounwind readonly

; [#uses=2]
declare void @_ssdm_op_SpecBitsMap(...)

!llvm.dbg.cu = !{!0}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"D:/HLS_Test/tansig/solution1/.autopilot/db/tansig.pragma.2.c", metadata !"d:/HLS_Test", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"tansig", metadata !"tansig", metadata !"", metadata !6, i32 4, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (float*, float*)* @tansig, null, null, metadata !11, i32 4} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"tansig.c", metadata !"d:/HLS_Test", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{null, metadata !9, metadata !9}
!9 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !10} ; [ DW_TAG_pointer_type ]
!10 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!11 = metadata !{metadata !12}
!12 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"data", metadata !17, metadata !"float"}
!17 = metadata !{metadata !18}
!18 = metadata !{i32 0, i32 0, i32 1}
!19 = metadata !{metadata !20}
!20 = metadata !{i32 0, i32 31, metadata !21}
!21 = metadata !{metadata !22}
!22 = metadata !{metadata !"result", metadata !17, metadata !"float"}
!23 = metadata !{i32 786689, metadata !5, metadata !"data", metadata !6, i32 16777220, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!24 = metadata !{i32 4, i32 20, metadata !5, null}
!25 = metadata !{i32 786689, metadata !5, metadata !"result", metadata !6, i32 33554436, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!26 = metadata !{i32 4, i32 33, metadata !5, null}
!27 = metadata !{i32 5, i32 21, metadata !28, null}
!28 = metadata !{i32 786443, metadata !5, i32 4, i32 40, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!29 = metadata !{i32 6, i32 1, metadata !28, null}
