#include <interception_macros.h>

namespace app::methods::FullSerializer::fsSerializer {
IL2CPP_REGISTER_METHOD(0x01515440, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015158F0, bool, IsReservedKeyword, (app::String * key));
IL2CPP_REGISTER_METHOD(0x015159B0, bool, IsObjectReference, (app::fsData * data));
IL2CPP_REGISTER_METHOD(0x01515AC0, bool, IsObjectDefinition, (app::fsData * data));
IL2CPP_REGISTER_METHOD(0x01515BD0, bool, IsVersioned, (app::fsData * data));
IL2CPP_REGISTER_METHOD(0x01515CE0, bool, IsTypeSpecified, (app::fsData * data));
IL2CPP_REGISTER_METHOD(0x01515DF0, bool, IsWrappedData, (app::fsData * data));
IL2CPP_REGISTER_METHOD(0x01515F00, void, StripDeserializationMetadata, (app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516180, void, ConvertLegacyData, (app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516570, void, Invoke_OnBeforeSerialize, (app::List_1_FullSerializer_fsObjectProcessor_ * processors, app::Type * storage_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01516670, void, Invoke_OnAfterSerialize, (app::List_1_FullSerializer_fsObjectProcessor_ * processors, app::Type * storage_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516780, void, Invoke_OnBeforeDeserialize, (app::List_1_FullSerializer_fsObjectProcessor_ * processors, app::Type * storage_type, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516880, void, Invoke_OnBeforeDeserializeAfterInstanceCreation, (app::List_1_FullSerializer_fsObjectProcessor_ * processors, app::Type * storage_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01516990, void, Invoke_OnAfterDeserialize, (app::List_1_FullSerializer_fsObjectProcessor_ * processors, app::Type * storage_type, app::Object * instance));
IL2CPP_REGISTER_METHOD(0x01516A90, void, EnsureDictionary, (app::fsData * data));
IL2CPP_REGISTER_METHOD(0x01516E10, void, RemapAbstractStorageTypeToDefaultType, (app::fsSerializer * this_ptr, app::Type * * storage_type));
IL2CPP_REGISTER_METHOD(0x01517060, void, __ctor, (app::fsSerializer * this_ptr));
IL2CPP_REGISTER_METHOD(0x01518990, void, AddProcessor, (app::fsSerializer * this_ptr, app::fsObjectProcessor * processor));
IL2CPP_REGISTER_METHOD(0x01518B20, void, SetDefaultStorageType, (app::fsSerializer * this_ptr, app::Type * abstract_type, app::Type * default_storage_type));
IL2CPP_REGISTER_METHODINFO(0x04746578, fsSerializer_SetDefaultStorageType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01518C50, List_1_FullSerializer_fsObjectProcessor_ *, GetProcessors, (app::fsSerializer * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x015190B0, void, AddConverter, (app::fsSerializer * this_ptr, app::fsBaseConverter * converter));
IL2CPP_REGISTER_METHODINFO(0x04711128, fsSerializer_AddConverter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01519410, fsBaseConverter *, GetConverter, (app::fsSerializer * this_ptr, app::Type * type, app::Type * override_converter_type));
IL2CPP_REGISTER_METHODINFO(0x0475AC08, fsSerializer_GetConverter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01519A00, fsResult, TrySerialize_1, (app::fsSerializer * this_ptr, app::Type * storage_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01519A40, fsResult, TrySerialize_2, (app::fsSerializer * this_ptr, app::Type * storage_type, app::Type * override_converter_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x01519DC0, fsResult, InternalSerialize_1_ProcessCycles, (app::fsSerializer * this_ptr, app::Type * storage_type, app::Type * override_converter_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151A410, fsResult, InternalSerialize_2_Inheritance, (app::fsSerializer * this_ptr, app::Type * storage_type, app::Type * override_converter_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151A710, fsResult, InternalSerialize_3_ProcessVersioning, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151AA70, fsResult, InternalSerialize_4_Converter, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHOD(0x0151AB20, fsResult, TryDeserialize_1, (app::fsSerializer * this_ptr, app::fsData * data, app::Type * storage_type, app::Object * * result));
IL2CPP_REGISTER_METHOD(0x0151AB60, fsResult, TryDeserialize_2, (app::fsSerializer * this_ptr, app::fsData * data, app::Type * storage_type, app::Type * override_converter_type, app::Object * * result));
IL2CPP_REGISTER_METHOD(0x0151AE20, fsResult, InternalDeserialize_1_CycleReference, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::fsData * data, app::Type * storage_type, app::Object * * result, app::List_1_FullSerializer_fsObjectProcessor_ * * processors));
IL2CPP_REGISTER_METHOD(0x0151B250, fsResult, InternalDeserialize_2_Version, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::fsData * data, app::Type * storage_type, app::Object * * result, app::List_1_FullSerializer_fsObjectProcessor_ * * processors));
IL2CPP_REGISTER_METHOD(0x0151B880, fsResult, InternalDeserialize_3_Inheritance, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::fsData * data, app::Type * storage_type, app::Object * * result, app::List_1_FullSerializer_fsObjectProcessor_ * * processors));
IL2CPP_REGISTER_METHOD(0x0151C110, fsResult, InternalDeserialize_4_Cycles, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::fsData * data, app::Type * result_type, app::Object * * result));
IL2CPP_REGISTER_METHOD(0x0151C2E0, fsResult, InternalDeserialize_5_Converter, (app::fsSerializer * this_ptr, app::Type * override_converter_type, app::fsData * data, app::Type * result_type, app::Object * * result));
IL2CPP_REGISTER_METHOD(0x015482B0, void, RemoveProcessor, (app::fsSerializer * this_ptr));
IL2CPP_REGISTER_METHOD(0x018EC640, fsResult, TrySerialize_3, (app::fsSerializer * this_ptr, app::Object * instance, app::fsData * * data));
IL2CPP_REGISTER_METHODINFO(0x0472FDE8, fsSerializer_TrySerialize_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018EC480, fsResult, TryDeserialize_3, (app::fsSerializer * this_ptr, app::fsData * data, app::Object * * instance));
}
