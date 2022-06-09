#include <interception_macros.h>

namespace app::methods::System_Resources::ResourceReader {
IL2CPP_REGISTER_METHOD(0x01A887D0, void, __ctor, (app::ResourceReader * this_ptr, app::Stream * stream, app::Dictionary_2_System_String_System_Resources_ResourceLocator_ * res_cache));
IL2CPP_REGISTER_METHOD(0x01A88990, void, Close, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A88990, void, Dispose_1, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A889F0, void, Dispose_2, (app::ResourceReader * this_ptr, bool disposing));
IL2CPP_REGISTER_METHOD(0x01A88A50, int32_t, ReadUnalignedI4, (app::int32_t * p));
IL2CPP_REGISTER_METHOD(0x01A88A70, void, SkipString, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478A530, ResourceReader_SkipString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88BA0, int32_t, GetNameHash, (app::ResourceReader * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01A88C20, int32_t, GetNamePosition, (app::ResourceReader * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04710DC8, ResourceReader_GetNamePosition__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88DB0, IEnumerator *, IEnumerable_GetEnumerator, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A88DC0, IDictionaryEnumerator *, GetEnumerator, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04720F38, ResourceReader_GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A88F60, ResourceReader_ResourceEnumerator *, GetEnumeratorInternal, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHOD(0x01A890B0, int32_t, FindPosForResource, (app::ResourceReader * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04721DC0, ResourceReader_FindPosForResource__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A89540, bool, CompareStringEqualsName, (app::ResourceReader * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04723EF0, ResourceReader_CompareStringEqualsName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A89890, String *, AllocateStringForNameIndex, (app::ResourceReader * this_ptr, int32_t index, app::int32_t * data_offset));
IL2CPP_REGISTER_METHODINFO(0x04729690, ResourceReader_AllocateStringForNameIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A090, Object *, GetValueForNameIndex, (app::ResourceReader * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04746318, ResourceReader_GetValueForNameIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A390, String *, LoadString, (app::ResourceReader * this_ptr, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x0476C700, ResourceReader_LoadString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A6C0, Object *, LoadObject_1, (app::ResourceReader * this_ptr, int32_t pos));
IL2CPP_REGISTER_METHOD(0x01A8A6F0, Object *, LoadObject_2, (app::ResourceReader * this_ptr, int32_t pos, app::ResourceTypeCode__Enum * type_code));
IL2CPP_REGISTER_METHOD(0x01A8A7D0, Object *, LoadObjectV1, (app::ResourceReader * this_ptr, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x0471D1D0, ResourceReader_LoadObjectV1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8A8F0, Object *, _LoadObjectV1, (app::ResourceReader * this_ptr, int32_t pos));
IL2CPP_REGISTER_METHOD(0x01A8B0B0, Object *, LoadObjectV2, (app::ResourceReader * this_ptr, int32_t pos, app::ResourceTypeCode__Enum * type_code));
IL2CPP_REGISTER_METHODINFO(0x0479A168, ResourceReader_LoadObjectV2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8B1E0, Object *, _LoadObjectV2, (app::ResourceReader * this_ptr, int32_t pos, app::ResourceTypeCode__Enum * type_code));
IL2CPP_REGISTER_METHODINFO(0x04795C60, ResourceReader__LoadObjectV2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8BE50, Object *, DeserializeObject, (app::ResourceReader * this_ptr, int32_t type_index));
IL2CPP_REGISTER_METHODINFO(0x0478C350, ResourceReader_DeserializeObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8C060, void, ReadResources, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04776DC8, ResourceReader_ReadResources__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8C260, void, _ReadResources, (app::ResourceReader * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04702900, ResourceReader__ReadResources__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A8CD20, RuntimeType *, FindType, (app::ResourceReader * this_ptr, int32_t type_index));
IL2CPP_REGISTER_METHODINFO(0x0473BFD0, ResourceReader_FindType__MethodInfo);
}
