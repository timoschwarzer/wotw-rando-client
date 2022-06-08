#include <interception_macros.h>

namespace app::methods::FullSerializer::fsSerializer {
IL2CPP_REGISTER_METHOD(0x01515440, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015158F0, bool, IsReservedKeyword, (String * key));
IL2CPP_REGISTER_METHOD(0x015159B0, bool, IsObjectReference, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01515AC0, bool, IsObjectDefinition, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01515BD0, bool, IsVersioned, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01515CE0, bool, IsTypeSpecified, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01515DF0, bool, IsWrappedData, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01515F00, void, StripDeserializationMetadata, (fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516180, void, ConvertLegacyData, (fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516570, void, Invoke_OnBeforeSerialize, (List_1_FullSerializer_fsObjectProcessor_ * processors, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x01516670, void, Invoke_OnAfterSerialize, (List_1_FullSerializer_fsObjectProcessor_ * processors, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516780, void, Invoke_OnBeforeDeserialize, (List_1_FullSerializer_fsObjectProcessor_ * processors, Type * storageType, fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516880, void, Invoke_OnBeforeDeserializeAfterInstanceCreation, (List_1_FullSerializer_fsObjectProcessor_ * processors, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516990, void, Invoke_OnAfterDeserialize, (List_1_FullSerializer_fsObjectProcessor_ * processors, Type * storageType, Object * instance));
IL2CPP_REGISTER_METHOD(0x01516A90, void, EnsureDictionary, (fsData * data));
IL2CPP_REGISTER_METHOD(0x01516E10, void, RemapAbstractStorageTypeToDefaultType, (fsSerializer * __this, Type * * storageType));
IL2CPP_REGISTER_METHOD(0x01517060, void, __ctor, (fsSerializer * __this));
IL2CPP_REGISTER_METHOD(0x01518990, void, AddProcessor, (fsSerializer * __this, fsObjectProcessor * processor));
IL2CPP_REGISTER_METHOD(0x01518B20, void, SetDefaultStorageType, (fsSerializer * __this, Type * abstractType, Type * defaultStorageType));
IL2CPP_REGISTER_METHODINFO(0x04746578, fsSerializer_SetDefaultStorageType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01518C50, List_1_FullSerializer_fsObjectProcessor_ *, GetProcessors, (fsSerializer * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x015190B0, void, AddConverter, (fsSerializer * __this, fsBaseConverter * converter));
IL2CPP_REGISTER_METHODINFO(0x04711128, fsSerializer_AddConverter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01519410, fsBaseConverter *, GetConverter, (fsSerializer * __this, Type * type, Type * overrideConverterType));
IL2CPP_REGISTER_METHODINFO(0x0475AC08, fsSerializer_GetConverter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01519A00, fsResult, TrySerialize, (fsSerializer * __this, Type * storageType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x01519A40, fsResult, TrySerialize, (fsSerializer * __this, Type * storageType, Type * overrideConverterType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x01519DC0, fsResult, InternalSerialize_1_ProcessCycles, (fsSerializer * __this, Type * storageType, Type * overrideConverterType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151A410, fsResult, InternalSerialize_2_Inheritance, (fsSerializer * __this, Type * storageType, Type * overrideConverterType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151A710, fsResult, InternalSerialize_3_ProcessVersioning, (fsSerializer * __this, Type * overrideConverterType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151AA70, fsResult, InternalSerialize_4_Converter, (fsSerializer * __this, Type * overrideConverterType, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151AB20, fsResult, TryDeserialize, (fsSerializer * __this, fsData * data, Type * storageType, Object * * result));
IL2CPP_REGISTER_METHOD(0x0151AB60, fsResult, TryDeserialize, (fsSerializer * __this, fsData * data, Type * storageType, Type * overrideConverterType, Object * * result));
IL2CPP_REGISTER_METHOD(0x0151AE20, fsResult, InternalDeserialize_1_CycleReference, (fsSerializer * __this, Type * overrideConverterType, fsData * data, Type * storageType, Object * * result, List_1_FullSerializer_fsObjectProcessor_ * * processors));
IL2CPP_REGISTER_METHOD(0x0151B250, fsResult, InternalDeserialize_2_Version, (fsSerializer * __this, Type * overrideConverterType, fsData * data, Type * storageType, Object * * result, List_1_FullSerializer_fsObjectProcessor_ * * processors));
IL2CPP_REGISTER_METHOD(0x0151B880, fsResult, InternalDeserialize_3_Inheritance, (fsSerializer * __this, Type * overrideConverterType, fsData * data, Type * storageType, Object * * result, List_1_FullSerializer_fsObjectProcessor_ * * processors));
IL2CPP_REGISTER_METHOD(0x0151C110, fsResult, InternalDeserialize_4_Cycles, (fsSerializer * __this, Type * overrideConverterType, fsData * data, Type * resultType, Object * * result));
IL2CPP_REGISTER_METHOD(0x0151C2E0, fsResult, InternalDeserialize_5_Converter, (fsSerializer * __this, Type * overrideConverterType, fsData * data, Type * resultType, Object * * result));
IL2CPP_REGISTER_METHOD(0x015482B0, void, RemoveProcessor, (fsSerializer * __this));
IL2CPP_REGISTER_METHOD(0x018EC640, fsResult, TrySerialize, (fsSerializer * __this, Object * instance, fsData * * data));
IL2CPP_REGISTER_METHODINFO(0x0472FDE8, fsSerializer_TrySerialize_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018EC480, fsResult, TryDeserialize, (fsSerializer * __this, fsData * data, Object * * instance));
}
