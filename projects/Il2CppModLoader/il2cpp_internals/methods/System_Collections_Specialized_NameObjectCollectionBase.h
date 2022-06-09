#include <interception_macros.h>

namespace app::methods::System_Collections_Specialized::NameObjectCollectionBase {
IL2CPP_REGISTER_METHOD(0x02496680, void, __ctor_1, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02496730, void, __ctor_2, (app::NameObjectCollectionBase * this_ptr, app::IEqualityComparer * equality_comparer));
IL2CPP_REGISTER_METHOD(0x02496800, void, __ctor_3, (app::NameObjectCollectionBase * this_ptr, int32_t capacity, app::IEqualityComparer * equality_comparer));
IL2CPP_REGISTER_METHOD(0x02496840, void, __ctor_4, (app::NameObjectCollectionBase * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_5, (app::NameObjectCollectionBase * this_ptr, app::DBNull * dummy));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, __ctor_6, (app::NameObjectCollectionBase * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x02496900, void, GetObjectData, (app::NameObjectCollectionBase * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04731420, NameObjectCollectionBase_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02496E30, void, OnDeserialization, (app::NameObjectCollectionBase * this_ptr, app::Object * sender));
IL2CPP_REGISTER_METHODINFO(0x0478A468, NameObjectCollectionBase_OnDeserialization__MethodInfo);
IL2CPP_REGISTER_METHOD(0x024975D0, void, Reset_1, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02497810, void, Reset_2, (app::NameObjectCollectionBase * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02497A60, NameObjectCollectionBase_NameObjectEntry *, FindEntry, (app::NameObjectCollectionBase * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsReadOnly, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02497B80, bool, BaseHasKeys, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02497BC0, void, BaseAdd, (app::NameObjectCollectionBase * this_ptr, app::String * name, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x0474FB18, NameObjectCollectionBase_BaseAdd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02497E00, void, BaseRemove, (app::NameObjectCollectionBase * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x04767750, NameObjectCollectionBase_BaseRemove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498080, void, BaseClear, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04737CC8, NameObjectCollectionBase_BaseClear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498150, Object *, BaseGet_1, (app::NameObjectCollectionBase * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x02498170, void, BaseSet, (app::NameObjectCollectionBase * this_ptr, app::String * name, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04796CD8, NameObjectCollectionBase_BaseSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498280, Object *, BaseGet_2, (app::NameObjectCollectionBase * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x024983C0, String *, BaseGetKey, (app::NameObjectCollectionBase * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x02498500, IEnumerator *, GetEnumerator, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E1A180, int32_t, get_Count, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02498660, void, ICollection_CopyTo, (app::NameObjectCollectionBase * this_ptr, app::Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04796930, NameObjectCollectionBase_System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02498980, Object *, ICollection_get_SyncRoot, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02498AE0, String__Array *, BaseGetAllKeys, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02498C20, NameObjectCollectionBase_KeysCollection *, get_Keys, (app::NameObjectCollectionBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02498D70, void, __cctor, ());
}
