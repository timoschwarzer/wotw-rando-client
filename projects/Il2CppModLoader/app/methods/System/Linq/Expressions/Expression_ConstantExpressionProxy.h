#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_ConstantExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4AD0, void, ctor, (app::Expression_ConstantExpressionProxy * this_ptr, app::ConstantExpression * node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_ConstantExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_ConstantExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_ConstantExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_ConstantExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::Object *, get_Value, (app::Expression_ConstantExpressionProxy * this_ptr))
}
