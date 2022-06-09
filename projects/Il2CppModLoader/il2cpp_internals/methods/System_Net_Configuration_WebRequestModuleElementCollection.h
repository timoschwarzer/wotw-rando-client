#include <interception_macros.h>

namespace app::methods::System_Net_Configuration::WebRequestModuleElementCollection {
IL2CPP_REGISTER_METHOD(0x01E99740, void, __ctor, (app::WebRequestModuleElementCollection * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04793C08, WebRequestModuleElementCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99770, WebRequestModuleElement *, get_Item_1, (app::WebRequestModuleElementCollection * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04778E10, WebRequestModuleElementCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E997A0, void, set_Item_1, (app::WebRequestModuleElementCollection * this_ptr, int32_t index, app::WebRequestModuleElement * value));
IL2CPP_REGISTER_METHODINFO(0x04769C78, WebRequestModuleElementCollection_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E997D0, WebRequestModuleElement *, get_Item_2, (app::WebRequestModuleElementCollection * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x047049E8, WebRequestModuleElementCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99800, void, set_Item_2, (app::WebRequestModuleElementCollection * this_ptr, app::String * name, app::WebRequestModuleElement * value));
IL2CPP_REGISTER_METHODINFO(0x0473C6C8, WebRequestModuleElementCollection_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99830, void, Add, (app::WebRequestModuleElementCollection * this_ptr, app::WebRequestModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x04733FF0, WebRequestModuleElementCollection_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99860, void, Clear, (app::WebRequestModuleElementCollection * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0476D5E8, WebRequestModuleElementCollection_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99890, ConfigurationElement *, CreateNewElement, (app::WebRequestModuleElementCollection * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478DA18, WebRequestModuleElementCollection_CreateNewElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E998C0, Object *, GetElementKey, (app::WebRequestModuleElementCollection * this_ptr, app::ConfigurationElement * element));
IL2CPP_REGISTER_METHODINFO(0x04779DB0, WebRequestModuleElementCollection_GetElementKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E998F0, int32_t, IndexOf, (app::WebRequestModuleElementCollection * this_ptr, app::WebRequestModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x0472D4E8, WebRequestModuleElementCollection_IndexOf__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99920, void, Remove_1, (app::WebRequestModuleElementCollection * this_ptr, app::WebRequestModuleElement * element));
IL2CPP_REGISTER_METHODINFO(0x047357B8, WebRequestModuleElementCollection_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99950, void, Remove_2, (app::WebRequestModuleElementCollection * this_ptr, app::String * name));
IL2CPP_REGISTER_METHODINFO(0x0478F550, WebRequestModuleElementCollection_Remove_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99980, void, RemoveAt, (app::WebRequestModuleElementCollection * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04784A80, WebRequestModuleElementCollection_RemoveAt__MethodInfo);
}
