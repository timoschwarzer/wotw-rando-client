#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_TypeBinaryExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C7720, void, ctor, (app::Expression_TypeBinaryExpressionProxy * this_ptr, app::TypeBinaryExpression * node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_TypeBinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_TypeBinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression *, get_Expression, (app::Expression_TypeBinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_TypeBinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_TypeBinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::Type *, get_TypeOperand, (app::Expression_TypeBinaryExpressionProxy * this_ptr))
}
