#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Block5 {
    IL2CPP_REGISTER_METHOD(0x01F9ED00, void, __ctor, (app::Block5 * this_ptr, app::Expression * arg0, app::Expression * arg1, app::Expression * arg2, app::Expression * arg3, app::Expression * arg4));
    IL2CPP_REGISTER_METHOD(0x01F9ED60, app::Expression *, GetExpression, (app::Block5 * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x0472F5E8, Block5_GetExpression__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_ExpressionCount, (app::Block5 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F9E4F0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (app::Block5 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F9EE60, app::BlockExpression *, Rewrite, (app::Block5 * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, app::Expression__Array * args));
}
