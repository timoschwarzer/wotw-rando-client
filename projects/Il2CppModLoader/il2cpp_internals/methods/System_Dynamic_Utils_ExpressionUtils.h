#include <interception_macros.h>

namespace app::methods::System::Dynamic::Utils::ExpressionUtils {
IL2CPP_REGISTER_METHOD(0x01F940F0, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, ReturnReadOnly, (IParameterProvider * provider, Object * * collection));
IL2CPP_REGISTER_METHOD(0x01F94420, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, ReturnReadOnly, (IArgumentProvider * provider, Object * * collection));
IL2CPP_REGISTER_METHOD(0x01F94750, void, ValidateArgumentTypes, (MethodBase * method_1, ExpressionType__Enum nodeKind, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * * arguments, String * methodParamName));
IL2CPP_REGISTER_METHOD(0x01F94B70, void, ValidateArgumentCount, (MethodBase * method_1, ExpressionType__Enum nodeKind, int32_t count, ParameterInfo_1__Array * pis));
IL2CPP_REGISTER_METHODINFO(0x0477D0F0, ExpressionUtils_ValidateArgumentCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F94CA0, Expression *, ValidateOneArgument, (MethodBase * method_1, ExpressionType__Enum nodeKind, Expression * arguments, ParameterInfo_1 * pi, String * methodParamName, String * argumentParamName, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04733A08, ExpressionUtils_ValidateOneArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F94FA0, void, RequiresCanRead, (Expression * expression, String * paramName));
IL2CPP_REGISTER_METHOD(0x01F94FB0, void, RequiresCanRead, (Expression * expression, String * paramName, int32_t idx));
IL2CPP_REGISTER_METHODINFO(0x04791718, ExpressionUtils_RequiresCanRead_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F95200, bool, TryQuote, (Type * parameterType, Expression * * argument));
IL2CPP_REGISTER_METHOD(0x01F95360, ParameterInfo_1__Array *, GetParametersForValidation, (MethodBase * method_1, ExpressionType__Enum nodeKind));
IL2CPP_REGISTER_METHOD(0x01EBB820, ReadOnlyCollection_1_System_Object_ *, ReturnReadOnly, (IReadOnlyList_1_System_Object_ * * collection));
IL2CPP_REGISTER_METHOD(0x01579E20, Object *, ReturnObject, (Object * collectionOrT));
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Object_ * * replacement, IReadOnlyList_1_System_Object_ * current));
IL2CPP_REGISTER_METHOD(0x01565670, bool, SameElementsInCollection, (ICollection_1_System_Object_ * replacement, IReadOnlyList_1_System_Object_ * current));
IL2CPP_REGISTER_METHOD(0x01579E20, Expression *, ReturnObject, (Object * collectionOrT));
IL2CPP_REGISTER_METHODINFO(0x04720BF0, ExpressionUtils_ReturnObject_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EBB820, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, ReturnReadOnly, (IReadOnlyList_1_System_Linq_Expressions_Expression_ * * collection));
IL2CPP_REGISTER_METHODINFO(0x04701E90, ExpressionUtils_ReturnReadOnly_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Linq_Expressions_ElementInit_ * * replacement, IReadOnlyList_1_System_Linq_Expressions_ElementInit_ * current));
IL2CPP_REGISTER_METHODINFO(0x04700BF8, ExpressionUtils_SameElements_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Linq_Expressions_MemberBinding_ * * replacement, IReadOnlyList_1_System_Linq_Expressions_MemberBinding_ * current));
IL2CPP_REGISTER_METHODINFO(0x047175E0, ExpressionUtils_SameElements_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Linq_Expressions_Expression_ * * replacement, IReadOnlyList_1_System_Linq_Expressions_Expression_ * current));
IL2CPP_REGISTER_METHODINFO(0x04711C98, ExpressionUtils_SameElements_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * * replacement, IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * current));
IL2CPP_REGISTER_METHODINFO(0x0477AB20, ExpressionUtils_SameElements_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EBB820, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, ReturnReadOnly, (IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_ * * collection));
IL2CPP_REGISTER_METHODINFO(0x047834C0, ExpressionUtils_ReturnReadOnly_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Linq_Expressions_SwitchCase_ * * replacement, IReadOnlyList_1_System_Linq_Expressions_SwitchCase_ * current));
IL2CPP_REGISTER_METHODINFO(0x047881A0, ExpressionUtils_SameElements_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01565590, bool, SameElements, (IEnumerable_1_System_Linq_Expressions_CatchBlock_ * * replacement, IReadOnlyList_1_System_Linq_Expressions_CatchBlock_ * current));
IL2CPP_REGISTER_METHODINFO(0x0472D6E8, ExpressionUtils_SameElements_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01579E20, ParameterExpression *, ReturnObject, (Object * collectionOrT));
IL2CPP_REGISTER_METHODINFO(0x0472E700, ExpressionUtils_ReturnObject_2__MethodInfo);
}
