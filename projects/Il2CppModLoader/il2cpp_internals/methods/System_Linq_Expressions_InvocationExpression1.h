#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::InvocationExpression1 {
IL2CPP_REGISTER_METHOD(0x024160D0, void, __ctor, (app::InvocationExpression1 * this_ptr, app::Expression * lambda, app::Type * return_type, app::Expression * arg0));
IL2CPP_REGISTER_METHOD(0x022D0730, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InvocationExpression1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x02416100, Expression *, GetArgument, (app::InvocationExpression1 * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047387C0, InvocationExpression1_GetArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (app::InvocationExpression1 * this_ptr));
IL2CPP_REGISTER_METHOD(0x024161D0, InvocationExpression *, Rewrite, (app::InvocationExpression1 * this_ptr, app::Expression * lambda, app::Expression__Array * arguments));
}
