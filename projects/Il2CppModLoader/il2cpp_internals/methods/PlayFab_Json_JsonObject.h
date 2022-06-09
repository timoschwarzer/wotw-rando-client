#include <interception_macros.h>

namespace app::methods::PlayFab_Json::JsonObject {
IL2CPP_REGISTER_METHOD(0x01846C80, void, __ctor_1, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01846DF0, void, __ctor_2, (app::JsonObject * this_ptr, app::IEqualityComparer_1_System_String_ * comparer));
IL2CPP_REGISTER_METHOD(0x01846F60, Object *, get_Item_1, (app::JsonObject * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01846F70, Object *, GetAtIndex, (app::IDictionary_2_System_String_System_Object_ * obj, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0471A3A0, JsonObject_GetAtIndex__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018471B0, void, Add_1, (app::JsonObject * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01847270, bool, ContainsKey, (app::JsonObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x01847330, ICollection_1_System_String_ *, get_Keys, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x018473C0, bool, Remove_1, (app::JsonObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x01847460, bool, TryGetValue, (app::JsonObject * this_ptr, app::String * key, app::Object * * value));
IL2CPP_REGISTER_METHOD(0x01847510, ICollection_1_System_Object_ *, get_Values, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x018475A0, Object *, get_Item_2, (app::JsonObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x01847640, void, set_Item, (app::JsonObject * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01847700, void, Add_2, (app::JsonObject * this_ptr, app::KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x018477C0, void, Clear, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01847850, bool, Contains, (app::JsonObject * this_ptr, app::KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01847950, void, CopyTo, (app::JsonObject * this_ptr, app::KeyValuePair_2_System_String_System_Object___Array * array, int32_t array_index));
IL2CPP_REGISTER_METHODINFO(0x0470E8A0, JsonObject_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01847BA0, int32_t, get_Count, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01847C30, bool, Remove_2, (app::JsonObject * this_ptr, app::KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01847CD0, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, GetEnumerator, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01847DC0, IEnumerator *, IEnumerable_GetEnumerator, (app::JsonObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01847EB0, String *, ToString, (app::JsonObject * this_ptr));
}
