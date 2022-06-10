#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::DefaultBinder {
    IL2CPP_REGISTER_METHOD(0x01737180, app::MethodBase *, BindToMethod, (app::DefaultBinder * this_ptr, app::BindingFlags__Enum binding_attr, app::MethodBase__Array * match, app::Object__Array * * args, app::ParameterModifier__Array * modifiers, app::CultureInfo * culture_info, app::String__Array * names, app::Object * * state))
    IL2CPP_REGISTER_METHODINFO(0x0472C568, DefaultBinder_BindToMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017398D0, app::FieldInfo_1 *, BindToField, (app::DefaultBinder * this_ptr, app::BindingFlags__Enum binding_attr, app::FieldInfo_1__Array * match, app::Object * value, app::CultureInfo * culture_info))
    IL2CPP_REGISTER_METHODINFO(0x04714DE0, DefaultBinder_BindToField__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173A060, app::MethodBase *, SelectMethod, (app::DefaultBinder * this_ptr, app::BindingFlags__Enum binding_attr, app::MethodBase__Array * match, app::Type__Array * types, app::ParameterModifier__Array * modifiers))
    IL2CPP_REGISTER_METHODINFO(0x04768908, DefaultBinder_SelectMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173A890, app::PropertyInfo_1 *, SelectProperty, (app::DefaultBinder * this_ptr, app::BindingFlags__Enum binding_attr, app::PropertyInfo_1__Array * match, app::Type * return_type, app::Type__Array * indexes, app::ParameterModifier__Array * modifiers))
    IL2CPP_REGISTER_METHODINFO(0x0476FBF0, DefaultBinder_SelectProperty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173B440, app::Object *, ChangeType, (app::DefaultBinder * this_ptr, app::Object * value, app::Type * type, app::CultureInfo * culture_info))
    IL2CPP_REGISTER_METHODINFO(0x04708480, DefaultBinder_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173B4B0, void, ReorderArgumentArray, (app::DefaultBinder * this_ptr, app::Object__Array * * args, app::Object * state))
    IL2CPP_REGISTER_METHOD(0x0173B880, app::MethodBase *, ExactBinding, (app::MethodBase__Array * match, app::Type__Array * types, app::ParameterModifier__Array * modifiers))
    IL2CPP_REGISTER_METHODINFO(0x04784108, DefaultBinder_ExactBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173BB60, app::PropertyInfo_1 *, ExactPropertyBinding, (app::PropertyInfo_1__Array * match, app::Type * return_type, app::Type__Array * types, app::ParameterModifier__Array * modifiers))
    IL2CPP_REGISTER_METHODINFO(0x04729310, DefaultBinder_ExactPropertyBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173BEB0, int32_t, FindMostSpecific, (app::ParameterInfo_1__Array * p1, app::Int32__Array * param_order1, app::Type * param_array_type1, app::ParameterInfo_1__Array * p2, app::Int32__Array * param_order2, app::Type * param_array_type2, app::Type__Array * types, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x0173C3B0, int32_t, FindMostSpecificType, (app::Type * c1, app::Type * c2, app::Type * t))
    IL2CPP_REGISTER_METHOD(0x0173C750, int32_t, FindMostSpecificMethod, (app::MethodBase * m1, app::Int32__Array * param_order1, app::Type * param_array_type1, app::MethodBase * m2, app::Int32__Array * param_order2, app::Type * param_array_type2, app::Type__Array * types, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x0173C880, int32_t, FindMostSpecificField, (app::FieldInfo_1 * cur1, app::FieldInfo_1 * cur2))
    IL2CPP_REGISTER_METHOD(0x0173C880, int32_t, FindMostSpecificProperty, (app::PropertyInfo_1 * cur1, app::PropertyInfo_1 * cur2))
    IL2CPP_REGISTER_METHOD(0x0173C980, bool, CompareMethodSigAndName, (app::MethodBase * m1, app::MethodBase * m2))
    IL2CPP_REGISTER_METHOD(0x0173CB40, int32_t, GetHierarchyDepth, (app::Type * t))
    IL2CPP_REGISTER_METHOD(0x0173CC10, app::MethodBase *, FindMostDerivedNewSlotMeth, (app::MethodBase__Array * match, int32_t c_matches))
    IL2CPP_REGISTER_METHODINFO(0x0470BAB0, DefaultBinder_FindMostDerivedNewSlotMeth__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0173CD70, void, ReorderParams, (app::Int32__Array * param_order, app::Object__Array * vars))
    IL2CPP_REGISTER_METHOD(0x0173CF70, bool, CreateParamOrder, (app::Int32__Array * param_order, app::ParameterInfo_1__Array * pars, app::String__Array * names))
    IL2CPP_REGISTER_METHOD(0x0173D260, bool, CanConvertPrimitive, (app::RuntimeType * source, app::RuntimeType * target))
    IL2CPP_REGISTER_METHOD(0x0173D4E0, bool, CanConvertPrimitiveObjectToType, (app::Object * source, app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DefaultBinder * this_ptr))
}
