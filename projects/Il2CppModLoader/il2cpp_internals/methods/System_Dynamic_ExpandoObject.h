#include <interception_macros.h>

namespace app::methods::System_Dynamic::ExpandoObject {
IL2CPP_REGISTER_METHOD(0x01F8CA20, void, __ctor, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8CBA0, bool, TryGetValue, (app::ExpandoObject * this_ptr, app::Object * index_class, int32_t index, app::String * name, bool ignore_case, app::Object * * value));
IL2CPP_REGISTER_METHODINFO(0x04792528, ExpandoObject_TryGetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8CD50, void, TrySetValue, (app::ExpandoObject * this_ptr, app::Object * index_class, int32_t index, app::Object * value, app::String * name, bool ignore_case, bool add));
IL2CPP_REGISTER_METHODINFO(0x04748C40, ExpandoObject_TrySetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8D240, bool, TryDeleteValue, (app::ExpandoObject * this_ptr, app::Object * index_class, int32_t index, app::String * name, bool ignore_case, app::Object * delete_value));
IL2CPP_REGISTER_METHODINFO(0x0477EEA8, ExpandoObject_TryDeleteValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8D6D0, bool, IsDeletedMember, (app::ExpandoObject * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x0195B0F0, ExpandoClass *, get_Class, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8D7F0, ExpandoObject_ExpandoData *, PromoteClassCore, (app::ExpandoObject * this_ptr, app::ExpandoClass * old_class, app::ExpandoClass * new_class));
IL2CPP_REGISTER_METHOD(0x01F8D840, void, PromoteClass, (app::ExpandoObject * this_ptr, app::Object * old_class, app::Object * new_class));
IL2CPP_REGISTER_METHOD(0x01F8DA60, DynamicMetaObject *, IDynamicMetaObjectProvider_GetMetaObject, (app::ExpandoObject * this_ptr, app::Expression * parameter));
IL2CPP_REGISTER_METHOD(0x01F8DC70, void, TryAddMember, (app::ExpandoObject * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01F8DD40, bool, TryGetValueForKey, (app::ExpandoObject * this_ptr, app::String * key, app::Object * * value));
IL2CPP_REGISTER_METHOD(0x01F8DD70, bool, ExpandoContainsKey, (app::ExpandoObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x01F8DDB0, ICollection_1_System_String_ *, IDictionary_string__object__get_Keys, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8DF00, ICollection_1_System_Object_ *, IDictionary_string__object__get_Values, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8E050, Object *, IDictionary_string__object__get_Item, (app::ExpandoObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHODINFO(0x04719298, ExpandoObject_System_Collections_Generic_IDictionary_System_String_System_Object__get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8E130, void, IDictionary_string__object__set_Item, (app::ExpandoObject * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01F8E200, void, IDictionary_string__object__Add, (app::ExpandoObject * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x01F8E210, bool, IDictionary_string__object__ContainsKey, (app::ExpandoObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x01F8E350, bool, IDictionary_string__object__Remove, (app::ExpandoObject * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x01F8DD40, bool, IDictionary_string__object__TryGetValue, (app::ExpandoObject * this_ptr, app::String * key, app::Object * * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, ICollection_KeyValuePair_string__object___get_Count, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_KeyValuePair_string__object___get_IsReadOnly, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8E440, void, ICollection_KeyValuePair_string__object___Add, (app::ExpandoObject * this_ptr, app::KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01F8E4D0, void, ICollection_KeyValuePair_string__object___Clear, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8E880, bool, ICollection_KeyValuePair_string__object___Contains, (app::ExpandoObject * this_ptr, app::KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01F8E990, void, ICollection_KeyValuePair_string__object___CopyTo, (app::ExpandoObject * this_ptr, app::KeyValuePair_2_System_String_System_Object___Array * array, int32_t array_index));
IL2CPP_REGISTER_METHOD(0x01F8ED60, bool, ICollection_KeyValuePair_string__object___Remove, (app::ExpandoObject * this_ptr, app::KeyValuePair_2_System_String_System_Object_ item));
IL2CPP_REGISTER_METHOD(0x01F8EE10, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, IEnumerable_KeyValuePair_string__object___GetEnumerator, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8EE10, IEnumerator *, IEnumerable_GetEnumerator, (app::ExpandoObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8EE40, IEnumerator_1_KeyValuePair_2_System_String_System_Object_ *, GetExpandoEnumerator, (app::ExpandoObject * this_ptr, app::ExpandoObject_ExpandoData * data, int32_t version));
IL2CPP_REGISTER_METHOD(0x01F8EFB0, void, INotifyPropertyChanged_add_PropertyChanged, (app::ExpandoObject * this_ptr, app::PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x01F8F070, void, INotifyPropertyChanged_remove_PropertyChanged, (app::ExpandoObject * this_ptr, app::PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x01F8F130, void, __cctor, ());
}
