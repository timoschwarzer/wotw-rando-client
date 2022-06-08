#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::SerializationInfo {
IL2CPP_REGISTER_METHOD(0x01EDE780, void, __ctor, (SerializationInfo * __this, Type * type, IFormatterConverter * converter));
IL2CPP_REGISTER_METHOD(0x01EDE7A0, void, __ctor, (SerializationInfo * __this, Type * type, IFormatterConverter * converter, bool requireSameTokenInPartialTrust));
IL2CPP_REGISTER_METHODINFO(0x04797C58, SerializationInfo__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_FullTypeName, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_AssemblyName, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x01EDEA60, void, SetType, (SerializationInfo * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04791FD0, SerializationInfo_SetType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDEC30, bool, Compare, (Byte__Array * a, Byte__Array * b));
IL2CPP_REGISTER_METHOD(0x01EDECC0, void, DemandForUnsafeAssemblyNameAssignments, (String * originalAssemblyName, String * newAssemblyName));
IL2CPP_REGISTER_METHOD(0x01EDECD0, bool, IsAssemblyNameAssignmentSafe, (String * originalAssemblyName, String * newAssemblyName));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_MemberCount, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB40, Type *, get_ObjectType, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsFullTypeNameSetExplicit, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsAssemblyNameSetExplicit, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x01EDF1C0, SerializationInfoEnumerator *, GetEnumerator, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x01EDF340, void, ExpandArrays, (SerializationInfo * __this));
IL2CPP_REGISTER_METHOD(0x01EDF460, void, AddValue, (SerializationInfo * __this, String * name, Object * value, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04737568, SerializationInfo_AddValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EDF590, void, AddValue, (SerializationInfo * __this, String * name, Object * value));
IL2CPP_REGISTER_METHOD(0x01EDF680, void, AddValue, (SerializationInfo * __this, String * name, bool value));
IL2CPP_REGISTER_METHOD(0x01EDF780, void, AddValue, (SerializationInfo * __this, String * name, uint16_t value));
IL2CPP_REGISTER_METHOD(0x01EDF880, void, AddValue, (SerializationInfo * __this, String * name, uint8_t value));
IL2CPP_REGISTER_METHOD(0x01EDF980, void, AddValue, (SerializationInfo * __this, String * name, int16_t value));
IL2CPP_REGISTER_METHOD(0x01EDFA80, void, AddValue, (SerializationInfo * __this, String * name, int32_t value));
IL2CPP_REGISTER_METHOD(0x01EDFB80, void, AddValue, (SerializationInfo * __this, String * name, int64_t value));
IL2CPP_REGISTER_METHOD(0x01EDFC70, void, AddValue, (SerializationInfo * __this, String * name, uint64_t value));
IL2CPP_REGISTER_METHOD(0x01EDFD60, void, AddValue, (SerializationInfo * __this, String * name, float value));
IL2CPP_REGISTER_METHOD(0x01EDFE60, void, AddValue, (SerializationInfo * __this, String * name, DateTime value));
IL2CPP_REGISTER_METHOD(0x01EDFF50, void, AddValueInternal, (SerializationInfo * __this, String * name, Object * value, Type * type));
IL2CPP_REGISTER_METHODINFO(0x04704D58, SerializationInfo_AddValueInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE02F0, void, UpdateValue, (SerializationInfo * __this, String * name, Object * value, Type * type));
IL2CPP_REGISTER_METHOD(0x01EE0410, int32_t, FindElement, (SerializationInfo * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x0477E1C0, SerializationInfo_FindElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE0540, Object *, GetElement, (SerializationInfo * __this, String * name, Type * * foundType));
IL2CPP_REGISTER_METHODINFO(0x0472E818, SerializationInfo_GetElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE06C0, Object *, GetElementNoThrow, (SerializationInfo * __this, String * name, Type * * foundType));
IL2CPP_REGISTER_METHOD(0x01EE0760, Object *, GetValue, (SerializationInfo * __this, String * name, Type * type));
IL2CPP_REGISTER_METHODINFO(0x0477F428, SerializationInfo_GetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EE0940, Object *, GetValueNoThrow, (SerializationInfo * __this, String * name, Type * type));
IL2CPP_REGISTER_METHOD(0x01EE0AC0, bool, GetBoolean, (SerializationInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01EE0C00, int32_t, GetInt32, (SerializationInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01EE0D40, int64_t, GetInt64, (SerializationInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01EE0E80, float, GetSingle, (SerializationInfo * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01EE0FC0, String *, GetString, (SerializationInfo * __this, String * name));
}
