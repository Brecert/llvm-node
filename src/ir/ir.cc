//
// Created by Micha Reiser on 01.03.17.
//

#include "ir.h"
//#include "data-layout.h"
//#include "function-type.h"
//#include "ir-builder.h"
#include "module.h"
#include "llvm-context.h"
#include "type.h"
#include "value.h"
#include "constant.h"
//#include "function.h"
//#include "linkage-types.h"
//#include "argument.h"
//#include "basic-block.h"
//#include "phi-node.h"
//#include "verifier.h"
//#include "alloca-inst.h"
#include "pointer-type.h"
//#include "array-type.h"
//#include "calling-conv.h"
//#include "call-inst.h"
//#include "struct-type.h"
//#include "constant-data-array.h"
//#include "constant-fp.h"
//#include "constant-int.h"
//#include "constant-pointer-null.h"
//#include "global-variable.h"
//#include "unnamed-addr.h"
//#include "constant-struct.h"
//#include "constant-array.h"
//#include "visibility-types.h"
//#include "attribute.h"
//#include "undef-value.h"

void InitIr(Napi::Env env, Napi::Object& exports) {
//    AllocaInstWrapper::Init(target);
//    ArgumentWrapper::Init(target);
//    ArrayTypeWrapper::Init(target);
//    InitAttribute(target);
//    BasicBlockWrapper::Init(target);
//    ConstantStructWrapper::Init(target);
//    InitCallingConv(target);
//    InitUnnamedAddr(target);
//    CallInstWrapper::Init(target);
    ConstantWrapper::Init(env, exports);
//    ConstantArrayWrapper::Init(target);
//    ConstantDataArrayWrapper::Init(target);
//    ConstantFPWrapper::Init(target);
//    ConstantIntWrapper::Init(target);
//    ConstantPointerNullWrapper::Init(target);
//    DataLayoutWrapper::Init(target);
//    FunctionWrapper::Init(target);
//    FunctionTypeWrapper::Init(target);
//    GlobalVariableWrapper::Init(target);
//    IRBuilderWrapper::Init(target);
//    InitLinkageTypes(target);
    ModuleWrapper::Init(env, exports);
    LLVMContextWrapper::Init(env, exports);
//    PhiNodeWrapper::Init(target);
//    StructTypeWrapper::Init(target);
    TypeWrapper::Init(env, exports);
    PointerTypeWrapper::Init(env, exports);
//    UndefValueWrapper::Init(target);
    ValueWrapper::Init(env, exports);
//    InitVerifier(target);
//    InitVisibilityTypes(target);
}