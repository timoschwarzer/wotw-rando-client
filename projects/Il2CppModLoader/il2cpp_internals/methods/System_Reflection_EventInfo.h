#include <interception_macros.h>

namespace app::methods::System_Reflection::EventInfo {
    IL2CPP_REGISTER_METHOD(0x02689DF0, app::Type *, get_EventHandlerType, (app::EventInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::MemberTypes__Enum, get_MemberType, (app::EventInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::EventInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F4E290, app::MethodInfo_1 *, GetAddMethod, (app::EventInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02689E80, app::MethodInfo_1 *, GetRemoveMethod, (app::EventInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (app::EventInfo_1 * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::EventInfo_1 * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02283820, bool, operator____1, (app::EventInfo_1 * left, app::EventInfo_1 * right));
    IL2CPP_REGISTER_METHOD(0x02283870, bool, operator____2, (app::EventInfo_1 * left, app::EventInfo_1 * right));
    IL2CPP_REGISTER_METHOD(0x02689EA0, app::EventInfo_1 *, internal_from_handle_type, (void * event_handle, void * type_handle));
    IL2CPP_REGISTER_METHOD(0x02689F00, app::EventInfo_1 *, GetEventFromHandle, (app::RuntimeEventHandle handle, app::RuntimeTypeHandle reflected_type));
    IL2CPP_REGISTER_METHODINFO(0x0470CA88, EventInfo_1_GetEventFromHandle__MethodInfo);
}
