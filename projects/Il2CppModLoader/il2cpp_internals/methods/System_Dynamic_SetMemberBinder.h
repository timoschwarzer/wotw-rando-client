#include <interception_macros.h>

namespace app::methods::System_Dynamic::SetMemberBinder {
IL2CPP_REGISTER_METHOD(0x01F939D0, void, __ctor, (app::SetMemberBinder * this_ptr, app::String * name, bool ignore_case));
IL2CPP_REGISTER_METHOD(0x01F93A80, Type *, get_ReturnType, (app::SetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (app::SetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreCase, (app::SetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F93B20, DynamicMetaObject *, Bind, (app::SetMemberBinder * this_ptr, app::DynamicMetaObject * target, app::DynamicMetaObject__Array * args));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStandardBinder, (app::SetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F93C40, DynamicMetaObject *, FallbackSetMember, (app::SetMemberBinder * this_ptr, app::DynamicMetaObject * target, app::DynamicMetaObject * value));
}
