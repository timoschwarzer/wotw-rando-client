#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::CollectionWrapper_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D0A8A0, int32_t, get_Count, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0A980, bool, get_IsReadOnly, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0B1D0, bool, IList_get_IsFixedSize, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0B360, app::Object *, IList_get_Item, (app::CollectionWrapper_1_System_Object_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04737AB0, CollectionWrapper_1_System_Object__System_Collections_IList_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D0B440, void, IList_set_Item, (app::CollectionWrapper_1_System_Object_ * this_ptr, int32_t index, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047844F8, CollectionWrapper_1_System_Object__System_Collections_IList_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0B640, app::Object *, ICollection_get_SyncRoot, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0BB20, app::Object *, get_UnderlyingCollection, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0A350, void, __ctor_1, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::IList * list));
    IL2CPP_REGISTER_METHOD(0x01D0A440, void, __ctor_2, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::ICollection_1_System_Object_ * list));
    IL2CPP_REGISTER_METHOD(0x01D0A4E0, void, Add, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x01D0A5D0, void, Clear, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0A6B0, bool, Contains, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x01D0A7A0, void, CopyTo, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object__Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x01D0AA60, bool, Remove, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * item));
    IL2CPP_REGISTER_METHOD(0x01D0AB80, app::IEnumerator_1_System_Object_ *, GetEnumerator, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0AC00, app::IEnumerator *, IEnumerable_GetEnumerator, (app::CollectionWrapper_1_System_Object_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D0ACA0, int32_t, IList_Add, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01D0AD60, bool, IList_Contains, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01D0AE20, int32_t, IList_IndexOf, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04768F90, CollectionWrapper_1_System_Object__System_Collections_IList_IndexOf__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D0AF90, void, IList_RemoveAt, (app::CollectionWrapper_1_System_Object_ * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04758380, CollectionWrapper_1_System_Object__System_Collections_IList_RemoveAt__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D0B070, void, IList_Insert, (app::CollectionWrapper_1_System_Object_ * this_ptr, int32_t index, app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x04792CF8, CollectionWrapper_1_System_Object__System_Collections_IList_Insert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D0B2B0, void, IList_Remove, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01D0B5A0, void, ICollection_CopyTo, (app::CollectionWrapper_1_System_Object_ * this_ptr, app::Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHOD(0x01D0B7A0, void, VerifyValueType, (app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047781C8, CollectionWrapper_1_System_Object__VerifyValueType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D0B950, bool, IsCompatibleObject, (app::Object * value));
}
