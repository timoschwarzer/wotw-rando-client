#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpressionN {
    IL2CPP_REGISTER_METHOD(0x022D0440, void, ctor, (app::MethodCallExpressionN * this_ptr, app::MethodInfo_1 * method_1, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
    IL2CPP_REGISTER_METHOD(0x02FBCF10, app::Expression *, GetArgument, (app::MethodCallExpressionN * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FBCFB0, int32_t, get_ArgumentCount, (app::MethodCallExpressionN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD040, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::MethodCallExpressionN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD0C0, app::MethodCallExpression *, Rewrite, (app::MethodCallExpressionN * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
}
