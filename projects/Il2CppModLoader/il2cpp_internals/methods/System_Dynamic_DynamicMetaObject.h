#include <interception_macros.h>

namespace app::methods::System_Dynamic::DynamicMetaObject {
IL2CPP_REGISTER_METHOD(0x01F8A880, void, __ctor_1, (app::DynamicMetaObject * this_ptr, app::Expression * expression, app::BindingRestrictions * restrictions));
IL2CPP_REGISTER_METHOD(0x01F8A940, void, __ctor_2, (app::DynamicMetaObject * this_ptr, app::Expression * expression, app::BindingRestrictions * restrictions, app::Object * value));
IL2CPP_REGISTER_METHOD(0x002FA280, Expression *, get_Expression, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, BindingRestrictions *, get_Restrictions, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_Value, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasValue, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8A970, Type *, get_RuntimeType, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8AA10, Type *, get_LimitType, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8AAC0, DynamicMetaObject *, BindGetMember, (app::DynamicMetaObject * this_ptr, app::GetMemberBinder * binder));
IL2CPP_REGISTER_METHOD(0x01F8AB80, DynamicMetaObject *, BindSetMember, (app::DynamicMetaObject * this_ptr, app::SetMemberBinder * binder, app::DynamicMetaObject * value));
IL2CPP_REGISTER_METHOD(0x01F8AC50, IEnumerable_1_System_String_ *, GetDynamicMemberNames, (app::DynamicMetaObject * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F8ACD0, DynamicMetaObject *, Create, (app::Object * value, app::Expression * expression));
IL2CPP_REGISTER_METHODINFO(0x0476C218, DynamicMetaObject_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F8AEE0, void, __cctor, ());
}
