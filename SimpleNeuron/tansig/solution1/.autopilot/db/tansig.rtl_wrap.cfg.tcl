set language "C"
set globalAPint ""
set globalVariable ""
set gportName0 "__imp__HUGE"
set gportInterface0 "wire"
set gportData0 "double"
set gportPointer0 "1"
set gportArrayDim0 0
set gportConst0 "0"
set gportVolatile0 "0"
set gportInitilizer0 ""
set gextern0 1
set gport0 [list $gportName0 $gportInterface0 $gportData0 $gportPointer0 $gportArrayDim0 $gportConst0 $gportVolatile0 $gportInitilizer0 $gextern0]
lappend globalVariable $gport0
set staticVariable ""
set moduleName "tansig"
set rawDecl [list "void" "tansig\(float *data, float *result\)"]
set argAPint ""
set returnAPint ""
set portList ""
set portName0 "data"
set portInterface0 "wire"
set portData0 "float"
set portPointer0 "1"
set portArrayDim0 0
set portConst0 "0"
set portVolatile0 "0"
set portArrayOpt0 ""
set port0 [list $portName0 $portInterface0 $portData0 $portPointer0 $portArrayDim0 $portConst0 $portVolatile0 $portArrayOpt0]
lappend portList $port0
set portName1 "result"
set portInterface1 "wire"
set portData1 "float"
set portPointer1 "1"
set portArrayDim1 0
set portConst1 "0"
set portVolatile1 "0"
set portArrayOpt1 ""
set port1 [list $portName1 $portInterface1 $portData1 $portPointer1 $portArrayDim1 $portConst1 $portVolatile1 $portArrayOpt1]
lappend portList $port1
set dataPackList ""
set module [list $moduleName $portList $rawDecl $argAPint $returnAPint $dataPackList]
set hasCPPAPInt 0
set hasCPPAPFix 0
set hasSCFix 0
set hasCPPComplex 0
set hasCBool 0
set isTemplateTop 0
set useIntT 0
