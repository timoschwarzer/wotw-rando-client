#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Data::AggregateNode {
    IL2CPP_REGISTER_METHOD(0x02148550, void, ctor_1, (app::AggregateNode * this_ptr, app::DataTable * table, app::FunctionId__Enum aggregate_type, app::String * column_name))
    IL2CPP_REGISTER_METHOD(0x02148570, void, ctor_2, (app::AggregateNode * this_ptr, app::DataTable * table, app::FunctionId__Enum aggregate_type, app::String * column_name, bool local, app::String * relation_name))
    IL2CPP_REGISTER_METHODINFO(0x04757FB8, AggregateNode__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021486F0, void, Bind_1, (app::AggregateNode * this_ptr, app::DataTable * table, app::List_1_System_Data_DataColumn_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0478D4B8, AggregateNode_Bind__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021489D0, void, Bind_2, (app::DataRelation * relation, app::List_1_System_Data_DataColumn_ * list))
    IL2CPP_REGISTER_METHOD(0x01E34480, app::Object *, Eval_1, (app::AggregateNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02148B70, app::Object *, Eval_2, (app::AggregateNode * this_ptr, app::DataRow * row, app::DataRowVersion__Enum version))
    IL2CPP_REGISTER_METHODINFO(0x047027D8, AggregateNode_Eval_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02149180, app::Object *, Eval_3, (app::AggregateNode * this_ptr, app::Int32__Array * records))
    IL2CPP_REGISTER_METHODINFO(0x0476C9D0, AggregateNode_Eval_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsConstant, (app::AggregateNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, IsTableConstant, (app::AggregateNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, HasLocalAggregate, (app::AggregateNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02149280, bool, HasRemoteAggregate, (app::AggregateNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02149290, bool, DependsOn, (app::AggregateNode * this_ptr, app::DataColumn * column))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ExpressionNode *, Optimize, (app::AggregateNode * this_ptr))
}
