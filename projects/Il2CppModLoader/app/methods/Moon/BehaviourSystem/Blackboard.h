#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::Blackboard {
    IL2CPP_REGISTER_METHOD(0x030071B0, void, AddVariable, (app::Blackboard * this_ptr, app::String * var_name, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03007340, void, RemoveVariable, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHOD(0x03007540, void, Merge, (app::Blackboard * this_ptr, app::IBlackboard * blackboard))
    IL2CPP_REGISTER_METHOD(0x03007660, app::Type *, ConvertStringToType, (app::Blackboard * this_ptr, app::String * type_string))
    IL2CPP_REGISTER_METHOD(0x03007840, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x03007900, void, RefreshDictionary, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03007AB0, app::BlackboardVariable__Array *, GetAllVariablesOfType, (app::Blackboard * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x03007CF0, app::BlackboardVariable *, GetVariableById, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x03007DF0, app::BlackboardVariable *, GetVariable, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHOD(0x03007EF0, app::BlackboardVariable__Array *, GetAllVariables, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03008010, void, OnBeforeSerialize, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030081A0, void, OnAfterDeserialize, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030081B0, void, ctor, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030085B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_1, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015EF770, app::Object *, ResolveSource_1, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_1, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_1, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018EED20, app::IMoonType_1_System_Object_ *, GetProxyType_1, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04700F98, Blackboard_GetProxyType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154EE10, void, SetValueOnSource_1, (app::Blackboard * this_ptr, app::Object * value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_1, (app::Blackboard * this_ptr, app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x015ED700, app::Object *, GetValue_1, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHOD(0x015ED5F0, app::Object *, GetValue_2, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015ED430, app::Object *, GetValue_3, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x0154CFD0, void, SetValue_1, (app::Blackboard * this_ptr, app::String * var_name, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0154CEB0, void, SetValue_2, (app::Blackboard * this_ptr, int32_t id, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0154CD10, void, SetValue_3, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_2, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableBool_ * list))
    IL2CPP_REGISTER_METHODINFO(0x047857F0, Blackboard_AddVariablesToDictionary_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_3, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableInt_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0471BCA8, Blackboard_AddVariablesToDictionary_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_4, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableFloat_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0478F460, Blackboard_AddVariablesToDictionary_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_5, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableString_ * list))
    IL2CPP_REGISTER_METHODINFO(0x04743548, Blackboard_AddVariablesToDictionary_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_6, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableVector3_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0471A2D0, Blackboard_AddVariablesToDictionary_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_7, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableGameObject_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0474D960, Blackboard_AddVariablesToDictionary_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B460, void, AddVariablesToDictionary_8, (app::Blackboard * this_ptr, app::List_1_Moon_BehaviourSystem_BlackboardVariableObject_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0474C6F8, Blackboard_AddVariablesToDictionary_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154BA20, void, SetValue_4, (app::Blackboard * this_ptr, app::String * var_name, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04736EB8, Blackboard_SetValue_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154B900, void, SetValue_5, (app::Blackboard * this_ptr, int32_t id, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047621E0, Blackboard_SetValue_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154C930, void, SetValue_6, (app::Blackboard * this_ptr, app::String * var_name, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0474E730, Blackboard_SetValue_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154C810, void, SetValue_7, (app::Blackboard * this_ptr, int32_t id, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04765848, Blackboard_SetValue_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154D3B0, void, SetValue_8, (app::Blackboard * this_ptr, app::String * var_name, float value))
    IL2CPP_REGISTER_METHODINFO(0x04704928, Blackboard_SetValue_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154D290, void, SetValue_9, (app::Blackboard * this_ptr, int32_t id, float value))
    IL2CPP_REGISTER_METHODINFO(0x047328C8, Blackboard_SetValue_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154CFD0, void, SetValue_10, (app::Blackboard * this_ptr, app::String * var_name, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04733D78, Blackboard_SetValue_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154CEB0, void, SetValue_11, (app::Blackboard * this_ptr, int32_t id, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x047389C0, Blackboard_SetValue_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154E930, void, SetValue_12, (app::Blackboard * this_ptr, app::String * var_name, app::Vector3 value))
    IL2CPP_REGISTER_METHODINFO(0x04771370, Blackboard_SetValue_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154E800, void, SetValue_13, (app::Blackboard * this_ptr, int32_t id, app::Vector3 value))
    IL2CPP_REGISTER_METHODINFO(0x04722A90, Blackboard_SetValue_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154CFD0, void, SetValue_14, (app::Blackboard * this_ptr, app::String * var_name, app::GameObject * value))
    IL2CPP_REGISTER_METHODINFO(0x04754CB0, Blackboard_SetValue_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154CEB0, void, SetValue_15, (app::Blackboard * this_ptr, int32_t id, app::GameObject * value))
    IL2CPP_REGISTER_METHODINFO(0x0470ABD0, Blackboard_SetValue_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154CFD0, void, SetValue_16, (app::Blackboard * this_ptr, app::String * var_name, app::Object_1 * value))
    IL2CPP_REGISTER_METHODINFO(0x0473BFE0, Blackboard_SetValue_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154CEB0, void, SetValue_17, (app::Blackboard * this_ptr, int32_t id, app::Object_1 * value))
    IL2CPP_REGISTER_METHODINFO(0x04771298, Blackboard_SetValue_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EC110, bool, GetValue_4, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x04767FE8, Blackboard_GetValue_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EC000, bool, GetValue_5, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x04758098, Blackboard_GetValue_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED050, int32_t, GetValue_6, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x047643F8, Blackboard_GetValue_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ECF40, int32_t, GetValue_7, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0473CAD8, Blackboard_GetValue_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EDAE0, float, GetValue_8, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x0477A670, Blackboard_GetValue_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED9D0, float, GetValue_9, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x04767328, Blackboard_GetValue_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED700, app::String *, GetValue_10, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x04720148, Blackboard_GetValue_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED5F0, app::String *, GetValue_11, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0473F828, Blackboard_GetValue_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EF2F0, app::Vector3, GetValue_12, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x04774300, Blackboard_GetValue_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EF1A0, app::Vector3, GetValue_13, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0471BD20, Blackboard_GetValue_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED700, app::GameObject *, GetValue_14, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x04706098, Blackboard_GetValue_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED5F0, app::GameObject *, GetValue_15, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0471A7B8, Blackboard_GetValue_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED700, app::Object_1 *, GetValue_16, (app::Blackboard * this_ptr, app::String * var_name))
    IL2CPP_REGISTER_METHODINFO(0x04744038, Blackboard_GetValue_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015ED5F0, app::Object_1 *, GetValue_17, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x04770400, Blackboard_GetValue_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_2, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0473F380, Blackboard_IsMoonTypeProxy_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_3, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04720950, Blackboard_IsMoonTypeProxy_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_4, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0478E840, Blackboard_IsMoonTypeProxy_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_5, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04798A00, Blackboard_IsMoonTypeProxy_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_6, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04779810, Blackboard_IsMoonTypeProxy_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_7, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0478E460, Blackboard_IsMoonTypeProxy_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_8, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0474A570, Blackboard_IsMoonTypeProxy_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_9, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04718720, Blackboard_IsMoonTypeProxy_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_10, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0474BF58, Blackboard_IsMoonTypeProxy_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_11, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04771428, Blackboard_IsMoonTypeProxy_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_12, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04722DD0, Blackboard_IsMoonTypeProxy_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_13, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x047563E8, Blackboard_IsMoonTypeProxy_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_14, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x047358F8, Blackboard_IsMoonTypeProxy_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_15, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04735E08, Blackboard_IsMoonTypeProxy_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_16, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04744020, Blackboard_IsMoonTypeProxy_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_17, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0477B490, Blackboard_IsMoonTypeProxy_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EE310, app::IMoonType_1_System_Boolean_ *, GetProxyType_2, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04786568, Blackboard_GetProxyType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EEA40, app::IMoonType_1_System_Int32_ *, GetProxyType_3, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04750938, Blackboard_GetProxyType_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EEE90, app::IMoonType_1_System_Single_ *, GetProxyType_4, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0477C2B8, Blackboard_GetProxyType_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EE8D0, app::IMoonType_1_System_Int16_ *, GetProxyType_5, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04712D80, Blackboard_GetProxyType_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EEBB0, app::IMoonType_1_System_Int64_ *, GetProxyType_6, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0476D560, Blackboard_GetProxyType_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EE760, app::IMoonType_1_System_Double_ *, GetProxyType_7, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0475BDA0, Blackboard_GetProxyType_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF5C0, app::IMoonType_1_UnityEngine_Quaternion_ *, GetProxyType_8, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0472D1A8, Blackboard_GetProxyType_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF450, app::IMoonType_1_UnityEngine_Matrix4x4_ *, GetProxyType_9, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x047073C8, Blackboard_GetProxyType_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EED20, app::IMoonType_1_System_String_ *, GetProxyType_10, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04740D98, Blackboard_GetProxyType_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EE5F0, app::IMoonType_1_System_Char_ *, GetProxyType_11, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x047589D8, Blackboard_GetProxyType_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF000, app::IMoonType_1_UnityEngine_Bounds_ *, GetProxyType_12, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x047524B8, Blackboard_GetProxyType_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF2E0, app::IMoonType_1_UnityEngine_Color_ *, GetProxyType_13, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x0473F978, Blackboard_GetProxyType_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF170, app::IMoonType_1_UnityEngine_Color32_ *, GetProxyType_14, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04766750, Blackboard_GetProxyType_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF730, app::IMoonType_1_UnityEngine_Vector2_ *, GetProxyType_15, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04757E88, Blackboard_GetProxyType_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EF8A0, app::IMoonType_1_UnityEngine_Vector3_ *, GetProxyType_16, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04712BB0, Blackboard_GetProxyType_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018EFA10, app::IMoonType_1_UnityEngine_Vector4_ *, GetProxyType_17, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04772EA8, Blackboard_GetProxyType_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_2, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_3, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_4, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_5, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_6, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_7, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_8, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_9, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_10, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_11, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_12, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_13, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_14, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_15, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_16, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::IMoonTypeResolver *, GetResolverForType_17, (app::Blackboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018EE480, app::IMoonType_1_System_Byte_ *, GetProxyType_18, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHODINFO(0x04748470, Blackboard_GetProxyType_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_2, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_3, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_4, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_5, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_6, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_7, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_8, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_9, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_10, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_11, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_12, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_13, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_14, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_15, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_16, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x018F3350, bool, CanResolveSource_17, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsMoonTypeProxy_18, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154B750, void, SetValue_18, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, bool value))
    IL2CPP_REGISTER_METHOD(0x0154BB40, void, SetValue_19, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x0154BCF0, void, SetValue_20, (app::Blackboard * this_ptr, int32_t id, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x0154BE10, void, SetValue_21, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x0154BFC0, void, SetValue_22, (app::Blackboard * this_ptr, int32_t id, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x0154C0E0, void, SetValue_23, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, double value))
    IL2CPP_REGISTER_METHOD(0x0154C280, void, SetValue_24, (app::Blackboard * this_ptr, int32_t id, double value))
    IL2CPP_REGISTER_METHOD(0x0154C3A0, void, SetValue_25, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, int16_t value))
    IL2CPP_REGISTER_METHOD(0x0154C550, void, SetValue_26, (app::Blackboard * this_ptr, int32_t id, int16_t value))
    IL2CPP_REGISTER_METHOD(0x0154C670, void, SetValue_27, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0154CA50, void, SetValue_28, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, int64_t value))
    IL2CPP_REGISTER_METHOD(0x0154CBF0, void, SetValue_29, (app::Blackboard * this_ptr, int32_t id, int64_t value))
    IL2CPP_REGISTER_METHOD(0x0154D0F0, void, SetValue_30, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, float value))
    IL2CPP_REGISTER_METHOD(0x0154D4D0, void, SetValue_31, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x0154D690, void, SetValue_32, (app::Blackboard * this_ptr, int32_t id, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x0154D7D0, void, SetValue_33, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Color32 value))
    IL2CPP_REGISTER_METHOD(0x0154D970, void, SetValue_34, (app::Blackboard * this_ptr, int32_t id, app::Color32 value))
    IL2CPP_REGISTER_METHOD(0x0154DA90, void, SetValue_35, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0154DC40, void, SetValue_36, (app::Blackboard * this_ptr, int32_t id, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0154DD70, void, SetValue_37, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x0154DF40, void, SetValue_38, (app::Blackboard * this_ptr, int32_t id, app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x0154E090, void, SetValue_39, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x0154E240, void, SetValue_40, (app::Blackboard * this_ptr, int32_t id, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x0154E370, void, SetValue_41, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0154E520, void, SetValue_42, (app::Blackboard * this_ptr, int32_t id, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0154E640, void, SetValue_43, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0154EA70, void, SetValue_44, (app::Blackboard * this_ptr, app::BlackboardVariable * variable, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x0154EC20, void, SetValue_45, (app::Blackboard * this_ptr, int32_t id, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x0154ED50, void, SetValueOnSource_2, (app::Blackboard * this_ptr, bool value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154ED50, void, SetValueOnSource_3, (app::Blackboard * this_ptr, uint8_t value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154ED80, void, SetValueOnSource_4, (app::Blackboard * this_ptr, uint16_t value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EDB0, void, SetValueOnSource_5, (app::Blackboard * this_ptr, double value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154ED80, void, SetValueOnSource_6, (app::Blackboard * this_ptr, int16_t value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EDE0, void, SetValueOnSource_7, (app::Blackboard * this_ptr, int32_t value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EE10, void, SetValueOnSource_8, (app::Blackboard * this_ptr, int64_t value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EDB0, void, SetValueOnSource_9, (app::Blackboard * this_ptr, float value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EE40, void, SetValueOnSource_10, (app::Blackboard * this_ptr, app::Bounds value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EDE0, void, SetValueOnSource_11, (app::Blackboard * this_ptr, app::Color32 value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EE90, void, SetValueOnSource_12, (app::Blackboard * this_ptr, app::Color value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EED0, void, SetValueOnSource_13, (app::Blackboard * this_ptr, app::Matrix4x4 value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EE90, void, SetValueOnSource_14, (app::Blackboard * this_ptr, app::Quaternion value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EF30, void, SetValueOnSource_15, (app::Blackboard * this_ptr, app::Vector2 value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EF70, void, SetValueOnSource_16, (app::Blackboard * this_ptr, app::Vector3 value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x0154EE90, void, SetValueOnSource_17, (app::Blackboard * this_ptr, app::Vector4 value, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EBE40, bool, GetValue_18, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EC220, uint8_t, GetValue_19, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EC3E0, uint8_t, GetValue_20, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EC4F0, uint16_t, GetValue_21, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EC6B0, uint16_t, GetValue_22, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EC7D0, double, GetValue_23, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EC990, double, GetValue_24, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015ECAA0, int16_t, GetValue_25, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015ECC60, int16_t, GetValue_26, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015ECD80, int32_t, GetValue_27, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015ED160, int64_t, GetValue_28, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015ED320, int64_t, GetValue_29, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015ED810, float, GetValue_30, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EDBF0, app::Bounds, GetValue_31, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EDE10, app::Bounds, GetValue_32, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EDF70, app::Color32, GetValue_33, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EE140, app::Color32, GetValue_34, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EE260, app::Color, GetValue_35, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EE450, app::Color, GetValue_36, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EE590, app::Matrix4x4, GetValue_37, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EE800, app::Matrix4x4, GetValue_38, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EE9A0, app::Quaternion, GetValue_39, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EEB90, app::Quaternion, GetValue_40, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EECD0, app::Vector2, GetValue_41, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EEE90, app::Vector2, GetValue_42, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EEFA0, app::Vector3, GetValue_43, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EF440, app::Vector4, GetValue_44, (app::Blackboard * this_ptr, app::BlackboardVariable * variable))
    IL2CPP_REGISTER_METHOD(0x015EF630, app::Vector4, GetValue_45, (app::Blackboard * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x015EF770, bool, ResolveSource_2, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, uint8_t, ResolveSource_3, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, uint16_t, ResolveSource_4, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, double, ResolveSource_5, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, int16_t, ResolveSource_6, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, int32_t, ResolveSource_7, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, int64_t, ResolveSource_8, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, float, ResolveSource_9, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF7A0, app::Bounds, ResolveSource_10, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, app::Color32, ResolveSource_11, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF7F0, app::Color, ResolveSource_12, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF830, app::Matrix4x4, ResolveSource_13, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF7F0, app::Quaternion, ResolveSource_14, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF770, app::Vector2, ResolveSource_15, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF890, app::Vector3, ResolveSource_16, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
    IL2CPP_REGISTER_METHOD(0x015EF7F0, app::Vector4, ResolveSource_17, (app::Blackboard * this_ptr, app::IMoonResolverContext * context, app::MoonTypeExtraData resolver_extra_data))
}
