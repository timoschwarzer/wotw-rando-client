#include <interception_macros.h>

namespace app::methods::System_Data::FunctionNode {
IL2CPP_REGISTER_METHOD(0x01E33B10, void, __ctor, (app::FunctionNode * this_ptr, app::DataTable * table, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x0472D060, FunctionNode__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E33D90, void, AddArgument, (app::FunctionNode * this_ptr, app::ExpressionNode * argument));
IL2CPP_REGISTER_METHODINFO(0x047605E0, FunctionNode_AddArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E33FF0, void, Bind, (app::FunctionNode * this_ptr, app::DataTable * table, app::List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHODINFO(0x0477C050, FunctionNode_Bind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E34480, Object *, Eval_1, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E344A0, Object *, Eval_2, (app::FunctionNode * this_ptr, app::DataRow * row, app::DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04731988, FunctionNode_Eval_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E35240, Object *, Eval_3, (app::FunctionNode * this_ptr, app::Int32__Array * record_nos));
IL2CPP_REGISTER_METHODINFO(0x04709838, FunctionNode_Eval_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E35290, bool, IsConstant, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E35310, bool, IsTableConstant, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E353A0, bool, HasLocalAggregate, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E35430, bool, HasRemoteAggregate, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E354C0, bool, DependsOn, (app::FunctionNode * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x01E35560, ExpressionNode *, Optimize, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04720F40, FunctionNode_Optimize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E358F0, Type *, GetDataType, (app::FunctionNode * this_ptr, app::ExpressionNode * node));
IL2CPP_REGISTER_METHODINFO(0x04767888, FunctionNode_GetDataType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E35BC0, Object *, EvalFunction, (app::FunctionNode * this_ptr, app::FunctionId__Enum id, app::Object__Array * argument_values, app::DataRow * row, app::DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04741CB0, FunctionNode_EvalFunction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E37910, FunctionId__Enum, get_Aggregate, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E37A10, bool, get_IsAggregate, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E37DC0, void, Check, (app::FunctionNode * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0474D160, FunctionNode_Check__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E380F0, void, __cctor, ());
}
