#include <interception_macros.h>

namespace app::methods::System_Dynamic_Utils::ExpressionUtils {
IL2CPP_REGISTER_METHOD(0x01F940F0, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, ReturnReadOnly_1, (app::IParameterProvider * provider, app::Object * * collection));
IL2CPP_REGISTER_METHOD(0x01F94420, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, ReturnReadOnly_2, (app::IArgumentProvider * provider, app::Object * * collection));
IL2CPP_REGISTER_METHOD(0x01F94750, void, ValidateArgumentTypes, (app::MethodBase * method_1, app::ExpressionType__Enum node_kind, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * * arguments, app::String * method_param_name));
IL2CPP_REGISTER_METHOD(0x01F94B70, void, ValidateArgumentCount, (app::MethodBase * method_1, app::ExpressionType__Enum node_kind, int32_t count, app::ParameterInfo_1__Array * pis));
IL2CPP_REGISTER_METHODINFO(0x0477D0F0, ExpressionUtils_ValidateArgumentCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F94CA0, Expression *, ValidateOneArgument, (app::MethodBase * method_1, app::ExpressionType__Enum node_kind, app::Expression * arguments, app::ParameterInfo_1 * pi, app::String * method_param_name, app::String * argument_param_name, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04733A08, ExpressionUtils_ValidateOneArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F94FA0, void, RequiresCanRead_1, (app::Expression * expression, app::String * param_name));
IL2CPP_REGISTER_METHOD(0x01F94FB0, void, RequiresCanRead_2, (app::Expression * expression, app::String * param_name, int32_t idx));
IL2CPP_REGISTER_METHODINFO(0x04791718, ExpressionUtils_RequiresCanRead_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F95200, bool, TryQuote, (app::Type * parameter_type, app::Expression * * argument));
IL2CPP_REGISTER_METHOD(0x01F95360, ParameterInfo_1__Array *, GetParametersForValidation, (app::MethodBase * method_1, app::ExpressionType__Enum node_kind));
IL2CPP_REGISTER_METHOD(0x01EBB820, ReadOnlyCollection_1_System_Object_ *, ReturnReadOnly_3, (app::IReadOnlyList_1_System_Object_ * * collection));
IL2CPP_REGISTER_METHOD(0x01579E20, Object *, ReturnObject_1, (app::Object * collection_or_t));
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_1, (app::IEnumerable_1_System_Object_ * * replacement, app::IReadOnlyList_1_System_Object_ * current));
IL2CPP_REGISTER_METHOD(0x01565670, bool, SameElementsInCollection, (app::ICollection_1_System_Object_ * replacement, app::IReadOnlyList_1_System_Object_ * current));
IL2CPP_REGISTER_METHOD(0x01579E20, Expression *, ReturnObject_2, (app::Object * collection_or_t));
IL2CPP_REGISTER_METHODINFO(0x04720BF0, ExpressionUtils_ReturnObject_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EBB820, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, ReturnReadOnly_4, (app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * * collection));
IL2CPP_REGISTER_METHODINFO(0x04701E90, ExpressionUtils_ReturnReadOnly_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_2, (app::IEnumerable_1_System_Linq_Expressions_ElementInit_ * * replacement, app::IReadOnlyList_1_System_Linq_Expressions_ElementInit_ * current));
IL2CPP_REGISTER_METHODINFO(0x04700BF8, ExpressionUtils_SameElements_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_3, (app::IEnumerable_1_System_Linq_Expressions_MemberBinding_ * * replacement, app::IReadOnlyList_1_System_Linq_Expressions_MemberBinding_ * current));
IL2CPP_REGISTER_METHODINFO(0x047175E0, ExpressionUtils_SameElements_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_4, (app::IEnumerable_1_System_Linq_Expressions_Expression_ * * replacement, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * current));
IL2CPP_REGISTER_METHODINFO(0x04711C98, ExpressionUtils_SameElements_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_5, (app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * * replacement, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * current));
IL2CPP_REGISTER_METHODINFO(0x0477AB20, ExpressionUtils_SameElements_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EBB820, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, ReturnReadOnly_5, (app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * * collection));
IL2CPP_REGISTER_METHODINFO(0x047834C0, ExpressionUtils_ReturnReadOnly_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_6, (app::IEnumerable_1_System_Linq_Expressions_SwitchCase_ * * replacement, app::IReadOnlyList_1_System_Linq_Expressions_SwitchCase_ * current));
IL2CPP_REGISTER_METHODINFO(0x047881A0, ExpressionUtils_SameElements_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements_7, (app::IEnumerable_1_System_Linq_Expressions_CatchBlock_ * * replacement, app::IReadOnlyList_1_System_Linq_Expressions_CatchBlock_ * current));
IL2CPP_REGISTER_METHODINFO(0x0472D6E8, ExpressionUtils_SameElements_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01579E20, ParameterExpression *, ReturnObject_3, (app::Object * collection_or_t));
IL2CPP_REGISTER_METHODINFO(0x0472E700, ExpressionUtils_ReturnObject_2__MethodInfo);
}
