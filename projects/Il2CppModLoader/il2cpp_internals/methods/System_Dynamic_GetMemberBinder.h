#include <interception_macros.h>

namespace app::methods::System_Dynamic::GetMemberBinder {
IL2CPP_REGISTER_METHOD(0x01F93770, void, __ctor, (app::GetMemberBinder * this_ptr, app::String * name, bool ignore_case));
IL2CPP_REGISTER_METHOD(0x01F93820, Type *, get_ReturnType, (app::GetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (app::GetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreCase, (app::GetMemberBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F938C0, DynamicMetaObject *, FallbackGetMember, (app::GetMemberBinder * this_ptr, app::DynamicMetaObject * target));
IL2CPP_REGISTER_METHOD(0x01F938E0, DynamicMetaObject *, Bind, (app::GetMemberBinder * this_ptr, app::DynamicMetaObject * target, app::DynamicMetaObject__Array * args));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStandardBinder, (app::GetMemberBinder * this_ptr));
}
