#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::ScopeExpression {
    IL2CPP_REGISTER_METHOD(0x01F9FE80, void, __ctor, (app::ScopeExpression * this_ptr, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * variables));
    IL2CPP_REGISTER_METHOD(0x02FBF380, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, GetOrMakeVariables, (app::ScopeExpression * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ *, get_VariablesList, (app::ScopeExpression * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02FBF400, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ *, ReuseOrValidateVariables, (app::ScopeExpression * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables));
}
