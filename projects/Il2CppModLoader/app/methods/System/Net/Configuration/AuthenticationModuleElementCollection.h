#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::AuthenticationModuleElementCollection {
    IL2CPP_REGISTER_METHOD(0x020181A0, void, ctor, (app::AuthenticationModuleElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710510, AuthenticationModuleElementCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020181D0, app::AuthenticationModuleElement *, get_Item_1, (app::AuthenticationModuleElementCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04713C38, AuthenticationModuleElementCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018200, void, set_Item_1, (app::AuthenticationModuleElementCollection * this_ptr, int32_t index, app::AuthenticationModuleElement * value))
    IL2CPP_REGISTER_METHODINFO(0x04738BC0, AuthenticationModuleElementCollection_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018230, app::AuthenticationModuleElement *, get_Item_2, (app::AuthenticationModuleElementCollection * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x0472F088, AuthenticationModuleElementCollection_get_Item_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018260, void, set_Item_2, (app::AuthenticationModuleElementCollection * this_ptr, app::String * name, app::AuthenticationModuleElement * value))
    IL2CPP_REGISTER_METHODINFO(0x04703348, AuthenticationModuleElementCollection_set_Item_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018290, void, Add, (app::AuthenticationModuleElementCollection * this_ptr, app::AuthenticationModuleElement * element))
    IL2CPP_REGISTER_METHODINFO(0x047064D8, AuthenticationModuleElementCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020182C0, void, Clear, (app::AuthenticationModuleElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B840, AuthenticationModuleElementCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020182F0, app::ConfigurationElement *, CreateNewElement, (app::AuthenticationModuleElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725E78, AuthenticationModuleElementCollection_CreateNewElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018320, app::Object *, GetElementKey, (app::AuthenticationModuleElementCollection * this_ptr, app::ConfigurationElement * element))
    IL2CPP_REGISTER_METHODINFO(0x0476EAD0, AuthenticationModuleElementCollection_GetElementKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018350, int32_t, IndexOf, (app::AuthenticationModuleElementCollection * this_ptr, app::AuthenticationModuleElement * element))
    IL2CPP_REGISTER_METHODINFO(0x047685C8, AuthenticationModuleElementCollection_IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018380, void, Remove_1, (app::AuthenticationModuleElementCollection * this_ptr, app::AuthenticationModuleElement * element))
    IL2CPP_REGISTER_METHODINFO(0x0473AB98, AuthenticationModuleElementCollection_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020183B0, void, Remove_2, (app::AuthenticationModuleElementCollection * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x04761290, AuthenticationModuleElementCollection_Remove_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020183E0, void, RemoveAt, (app::AuthenticationModuleElementCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047427C8, AuthenticationModuleElementCollection_RemoveAt__MethodInfo)
}
