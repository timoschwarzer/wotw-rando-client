#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::IndexExpression {
IL2CPP_REGISTER_METHOD(0x022D0050, void, __ctor, (app::IndexExpression * this_ptr, app::Expression * instance, app::PropertyInfo_1 * indexer, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * arguments));
IL2CPP_REGISTER_METHOD(0x00E3D360, ExpressionType__Enum, get_NodeType, (app::IndexExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D0110, Type *, get_Type, (app::IndexExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Object, (app::IndexExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, PropertyInfo_1 *, get_Indexer, (app::IndexExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D0190, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (app::IndexExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D0210, Expression *, GetArgument, (app::IndexExpression * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x022D02B0, int32_t, get_ArgumentCount, (app::IndexExpression * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D0340, Expression *, Accept, (app::IndexExpression * this_ptr, app::ExpressionVisitor * visitor));
IL2CPP_REGISTER_METHOD(0x022D0370, Expression *, Rewrite, (app::IndexExpression * this_ptr, app::Expression * instance, app::Expression__Array * arguments));
}
