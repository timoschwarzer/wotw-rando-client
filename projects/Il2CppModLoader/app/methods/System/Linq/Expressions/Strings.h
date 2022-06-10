#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Strings {
    IL2CPP_REGISTER_METHOD(0x02FBFB90, app::String *, get_ReducibleMustOverrideReduce, ())
    IL2CPP_REGISTER_METHOD(0x02FBFC10, app::String *, get_MustReduceToDifferent, ())
    IL2CPP_REGISTER_METHOD(0x02FBFC90, app::String *, get_ReducedNotCompatible, ())
    IL2CPP_REGISTER_METHOD(0x02FBFD10, app::String *, get_SetterHasNoParams, ())
    IL2CPP_REGISTER_METHOD(0x02FBFD90, app::String *, get_PropertyCannotHaveRefType, ())
    IL2CPP_REGISTER_METHOD(0x02FBFE10, app::String *, get_IndexesOfSetGetMustMatch, ())
    IL2CPP_REGISTER_METHOD(0x02FBFE90, app::String *, get_AccessorsCannotHaveVarArgs, ())
    IL2CPP_REGISTER_METHOD(0x02FBFF10, app::String *, get_AccessorsCannotHaveByRefArgs, ())
    IL2CPP_REGISTER_METHOD(0x02FBFF90, app::String *, get_BoundsCannotBeLessThanOne, ())
    IL2CPP_REGISTER_METHOD(0x02FC0010, app::String *, get_TypeMustNotBeByRef, ())
    IL2CPP_REGISTER_METHOD(0x02FC0090, app::String *, get_TypeMustNotBePointer, ())
    IL2CPP_REGISTER_METHOD(0x02FC0110, app::String *, get_SetterMustBeVoid, ())
    IL2CPP_REGISTER_METHOD(0x02FC0190, app::String *, get_PropertyTypeMustMatchGetter, ())
    IL2CPP_REGISTER_METHOD(0x02FC0210, app::String *, get_PropertyTypeMustMatchSetter, ())
    IL2CPP_REGISTER_METHOD(0x02FC0290, app::String *, get_BothAccessorsMustBeStatic, ())
    IL2CPP_REGISTER_METHOD(0x02FC0310, app::String *, get_OnlyStaticFieldsHaveNullInstance, ())
    IL2CPP_REGISTER_METHOD(0x02FC0390, app::String *, get_OnlyStaticPropertiesHaveNullInstance, ())
    IL2CPP_REGISTER_METHOD(0x02FC0410, app::String *, get_OnlyStaticMethodsHaveNullInstance, ())
    IL2CPP_REGISTER_METHOD(0x02FC0490, app::String *, get_PropertyTypeCannotBeVoid, ())
    IL2CPP_REGISTER_METHOD(0x02FC0510, app::String *, get_InvalidUnboxType, ())
    IL2CPP_REGISTER_METHOD(0x02FC0590, app::String *, get_ExpressionMustBeWriteable, ())
    IL2CPP_REGISTER_METHOD(0x02FC0610, app::String *, get_ArgumentMustNotHaveValueType, ())
    IL2CPP_REGISTER_METHOD(0x02FC0690, app::String *, get_MustBeReducible, ())
    IL2CPP_REGISTER_METHOD(0x02FC0710, app::String *, get_AllTestValuesMustHaveSameType, ())
    IL2CPP_REGISTER_METHOD(0x02FC0790, app::String *, get_AllCaseBodiesMustHaveSameType, ())
    IL2CPP_REGISTER_METHOD(0x02FC0810, app::String *, get_DefaultBodyMustBeSupplied, ())
    IL2CPP_REGISTER_METHOD(0x02FC0890, app::String *, get_LabelMustBeVoidOrHaveExpression, ())
    IL2CPP_REGISTER_METHOD(0x02FC0910, app::String *, get_LabelTypeMustBeVoid, ())
    IL2CPP_REGISTER_METHOD(0x02FC0990, app::String *, get_QuotedExpressionMustBeLambda, ())
    IL2CPP_REGISTER_METHOD(0x02FC0A10, app::String *, get_CollectionModifiedWhileEnumerating, ())
    IL2CPP_REGISTER_METHOD(0x02FC0A90, app::String *, VariableMustNotBeByRef, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC0B30, app::String *, get_CollectionReadOnly, ())
    IL2CPP_REGISTER_METHOD(0x02FC0BB0, app::String *, AmbiguousMatchInExpandoObject, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC0C40, app::String *, SameKeyExistsInExpando, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC0CD0, app::String *, KeyDoesNotExistInExpando, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC0D60, app::String *, InvalidMetaObjectCreated, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC0DF0, app::String *, BinderNotCompatibleWithCallSite, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC0EA0, app::String *, DynamicBindingNeedsRestrictions, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC0F40, app::String *, DynamicObjectResultNotAssignable, (app::Object * p0, app::Object * p1, app::Object * p2, app::Object * p3))
    IL2CPP_REGISTER_METHOD(0x02FC11D0, app::String *, DynamicBinderResultNotAssignable, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC1280, app::String *, get_BindingCannotBeNull, ())
    IL2CPP_REGISTER_METHOD(0x02FC1300, app::String *, DuplicateVariable, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC1390, app::String *, TypeParameterIsNotDelegate, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC1420, app::String *, get_NoOrInvalidRuleProduced, ())
    IL2CPP_REGISTER_METHOD(0x02FC14A0, app::String *, get_TypeMustBeDerivedFromSystemDelegate, ())
    IL2CPP_REGISTER_METHOD(0x02FC1520, app::String *, get_FirstArgumentMustBeCallSite, ())
    IL2CPP_REGISTER_METHOD(0x02FC15A0, app::String *, get_FaultCannotHaveCatchOrFinally, ())
    IL2CPP_REGISTER_METHOD(0x02FC1620, app::String *, get_TryMustHaveCatchFinallyOrFault, ())
    IL2CPP_REGISTER_METHOD(0x02FC16A0, app::String *, get_BodyOfCatchMustHaveSameTypeAsBodyOfTry, ())
    IL2CPP_REGISTER_METHOD(0x02FC1720, app::String *, ExtensionNodeMustOverrideProperty, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC17B0, app::String *, UserDefinedOperatorMustBeStatic, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC1840, app::String *, UserDefinedOperatorMustNotBeVoid, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC18D0, app::String *, CoercionOperatorNotDefined, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC1970, app::String *, UnaryOperatorNotDefined, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC1A10, app::String *, BinaryOperatorNotDefined, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC1AC0, app::String *, ReferenceEqualityNotDefined, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC1B60, app::String *, OperandTypesDoNotMatchParameters, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC1C00, app::String *, OverloadOperatorTypeDoesNotMatchConversionType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC1CA0, app::String *, get_ConversionIsNotSupportedForArithmeticTypes, ())
    IL2CPP_REGISTER_METHOD(0x02FC1D20, app::String *, get_ArgumentMustBeArray, ())
    IL2CPP_REGISTER_METHOD(0x02FC1DA0, app::String *, get_ArgumentMustBeBoolean, ())
    IL2CPP_REGISTER_METHOD(0x02FC1E20, app::String *, EqualityMustReturnBoolean, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC1EB0, app::String *, get_ArgumentMustBeFieldInfoOrPropertyInfo, ())
    IL2CPP_REGISTER_METHOD(0x02FC1F30, app::String *, get_ArgumentMustBeFieldInfoOrPropertyInfoOrMethod, ())
    IL2CPP_REGISTER_METHOD(0x02FC1FB0, app::String *, get_ArgumentMustBeInstanceMember, ())
    IL2CPP_REGISTER_METHOD(0x02FC2030, app::String *, get_ArgumentMustBeInteger, ())
    IL2CPP_REGISTER_METHOD(0x02FC20B0, app::String *, get_ArgumentMustBeArrayIndexType, ())
    IL2CPP_REGISTER_METHOD(0x02FC2130, app::String *, get_ArgumentMustBeSingleDimensionalArrayType, ())
    IL2CPP_REGISTER_METHOD(0x02FC21B0, app::String *, get_ArgumentTypesMustMatch, ())
    IL2CPP_REGISTER_METHOD(0x02FC2230, app::String *, CannotAutoInitializeValueTypeMemberThroughProperty, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC22C0, app::String *, IncorrectTypeForTypeAs, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2350, app::String *, get_CoalesceUsedOnNonNullType, ())
    IL2CPP_REGISTER_METHOD(0x02FC23D0, app::String *, ExpressionTypeCannotInitializeArrayType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC2470, app::String *, ArgumentTypeDoesNotMatchMember, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC2510, app::String *, ArgumentMemberNotDeclOnType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC25B0, app::String *, ExpressionTypeDoesNotMatchReturn, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC2650, app::String *, ExpressionTypeDoesNotMatchAssignment, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC26F0, app::String *, ExpressionTypeDoesNotMatchLabel, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC2790, app::String *, ExpressionTypeNotInvocable, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2820, app::String *, InstanceFieldNotDefinedForType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC28C0, app::String *, FieldInfoNotDefinedForType, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC2970, app::String *, get_IncorrectNumberOfIndexes, ())
    IL2CPP_REGISTER_METHOD(0x02FC29F0, app::String *, get_IncorrectNumberOfLambdaDeclarationParameters, ())
    IL2CPP_REGISTER_METHOD(0x02FC2A70, app::String *, get_IncorrectNumberOfMembersForGivenConstructor, ())
    IL2CPP_REGISTER_METHOD(0x02FC2AF0, app::String *, get_IncorrectNumberOfArgumentsForMembers, ())
    IL2CPP_REGISTER_METHOD(0x02FC2B70, app::String *, get_LambdaTypeMustBeDerivedFromSystemDelegate, ())
    IL2CPP_REGISTER_METHOD(0x02FC2BF0, app::String *, MemberNotFieldOrProperty, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2C80, app::String *, MethodContainsGenericParameters, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2D10, app::String *, MethodIsGeneric, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2DA0, app::String *, MethodNotPropertyAccessor, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC2E40, app::String *, PropertyDoesNotHaveGetter, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2ED0, app::String *, PropertyDoesNotHaveSetter, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2F60, app::String *, PropertyDoesNotHaveAccessor, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC2FF0, app::String *, NotAMemberOfType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3090, app::String *, NotAMemberOfAnyType, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC3120, app::String *, ParameterExpressionNotValidAsDelegate, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC31C0, app::String *, PropertyNotDefinedForType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3260, app::String *, InstancePropertyNotDefinedForType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3300, app::String *, InstanceAndMethodTypeMismatch, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC33B0, app::String *, get_ElementInitializerMethodNotAdd, ())
    IL2CPP_REGISTER_METHOD(0x02FC3430, app::String *, ElementInitializerMethodNoRefOutParam, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC34D0, app::String *, get_ElementInitializerMethodWithZeroArgs, ())
    IL2CPP_REGISTER_METHOD(0x02FC3550, app::String *, get_ElementInitializerMethodStatic, ())
    IL2CPP_REGISTER_METHOD(0x02FC35D0, app::String *, TypeNotIEnumerable, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC3660, app::String *, UnhandledBinary, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC36F0, app::String *, UnhandledBindingType, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC3780, app::String *, UnhandledUnary, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC3810, app::String *, get_UnknownBindingType, ())
    IL2CPP_REGISTER_METHOD(0x02FC3890, app::String *, UserDefinedOpMustHaveConsistentTypes, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3930, app::String *, UserDefinedOpMustHaveValidReturnType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC39D0, app::String *, LogicalOperatorMustHaveBooleanOperators, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3A70, app::String *, MethodWithArgsDoesNotExistOnType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3B10, app::String *, GenericMethodWithArgsDoesNotExistOnType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3BB0, app::String *, MethodWithMoreThanOneMatch, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3C50, app::String *, get_ArgumentCannotBeOfTypeVoid, ())
    IL2CPP_REGISTER_METHOD(0x02FC3CD0, app::String *, OutOfRange, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC3D70, app::String *, LabelTargetAlreadyDefined, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC3E00, app::String *, LabelTargetUndefined, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC3E90, app::String *, get_ControlCannotLeaveFinally, ())
    IL2CPP_REGISTER_METHOD(0x02FC3F10, app::String *, get_ControlCannotLeaveFilterTest, ())
    IL2CPP_REGISTER_METHOD(0x02FC3F90, app::String *, AmbiguousJump, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC4020, app::String *, get_ControlCannotEnterTry, ())
    IL2CPP_REGISTER_METHOD(0x02FC40A0, app::String *, get_ControlCannotEnterExpression, ())
    IL2CPP_REGISTER_METHOD(0x02FC4120, app::String *, NonLocalJumpWithValue, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC41B0, app::String *, InvalidLvalue, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC4240, app::String *, get_RethrowRequiresCatch, ())
    IL2CPP_REGISTER_METHOD(0x02FC42C0, app::String *, MustRewriteToSameNode, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC4370, app::String *, MustRewriteChildToSameType, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC4420, app::String *, MustRewriteWithoutMethod, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC44C0, app::String *, TestValueTypeDoesNotMatchComparisonMethodParameter, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC4560, app::String *, SwitchValueTypeDoesNotMatchComparisonMethodParameter, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC4600, app::String *, get_NonStaticConstructorRequired, ())
    IL2CPP_REGISTER_METHOD(0x02FC4680, app::String *, get_NonAbstractConstructorRequired, ())
    IL2CPP_REGISTER_METHOD(0x02FC4700, app::String *, get_ExpressionMustBeReadable, ())
    IL2CPP_REGISTER_METHOD(0x02FC4780, app::String *, ExpressionTypeDoesNotMatchConstructorParameter, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC4820, app::String *, get_EnumerationIsDone, ())
    IL2CPP_REGISTER_METHOD(0x02FC48A0, app::String *, TypeContainsGenericParameters, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC4930, app::String *, TypeIsGeneric, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC49C0, app::String *, get_InvalidArgumentValue, ())
    IL2CPP_REGISTER_METHOD(0x02FC4A40, app::String *, get_NonEmptyCollectionRequired, ())
    IL2CPP_REGISTER_METHOD(0x02FC4AC0, app::String *, InvalidNullValue, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC4B50, app::String *, InvalidObjectType, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC4BF0, app::String *, ExpressionTypeDoesNotMatchMethodParameter, (app::Object * p0, app::Object * p1, app::Object * p2))
    IL2CPP_REGISTER_METHOD(0x02FC4CA0, app::String *, ExpressionTypeDoesNotMatchParameter, (app::Object * p0, app::Object * p1))
    IL2CPP_REGISTER_METHOD(0x02FC4D40, app::String *, IncorrectNumberOfMethodCallArguments, (app::Object * p0))
    IL2CPP_REGISTER_METHOD(0x02FC4DD0, app::String *, get_IncorrectNumberOfLambdaArguments, ())
    IL2CPP_REGISTER_METHOD(0x02FC4E50, app::String *, get_IncorrectNumberOfConstructorArguments, ())
}
