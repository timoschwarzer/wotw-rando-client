#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::SimpleBinaryExpression {
IL2CPP_REGISTER_METHOD(0x02FBFAE0, void, __ctor, (app::SimpleBinaryExpression * this_ptr, app::ExpressionType__Enum node_type, app::Expression * left, app::Expression * right, app::Type * type));
IL2CPP_REGISTER_METHOD(0x002FD1D0, ExpressionType__Enum, get_NodeType, (app::SimpleBinaryExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB00, Type *, get_Type, (app::SimpleBinaryExpression * this_ptr));
}
