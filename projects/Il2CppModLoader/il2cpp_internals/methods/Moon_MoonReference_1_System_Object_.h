#include <interception_macros.h>

namespace app::methods::Moon::MoonReference_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x02720740, bool, get_IsCrossSceneReference, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x027207D0, CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04798228, MoonReference_1_System_Object__get_CrossSceneReferenceId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027208E0, bool, get_IsStaticValue, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x027205B0, void, __ctor_1, (app::MoonReference_1_System_Object_ * this_ptr, app::Object * reference));
IL2CPP_REGISTER_METHOD(0x027206A0, void, Finalize, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x027206E0, void, __ctor_2, (app::MoonReference_1_System_Object_ * this_ptr, app::MoonReference_1_System_Object_ * moon_ref));
IL2CPP_REGISTER_METHOD(0x02720AC0, Object *, Resolve, (app::MoonReference_1_System_Object_ * this_ptr, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04767930, MoonReference_1_System_Object__Resolve__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, Object_1 *, SaveResolveStaticAsObject, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02720E10, Object *, SaveResolverStatic, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02720EB0, Object *, SafeResolve, (app::MoonReference_1_System_Object_ * this_ptr, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02721320, String *, GetFullHierarchy, (app::Transform * transform));
IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_System_Object_ * this_ptr, app::Object * * value, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x02721570, bool, IsVolitileValueValid, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_System_Object_ * this_ptr, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVolatileValue, (app::MoonReference_1_System_Object_ * this_ptr, app::Object * new_value));
IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_System_Object_ * this_ptr, app::Object * new_value));
IL2CPP_REGISTER_METHOD(0x02721A70, void, SetValueInResolver, (app::MoonReference_1_System_Object_ * this_ptr, app::Object * new_value, app::IMoonResolverContext * context));
IL2CPP_REGISTER_METHODINFO(0x04756FC8, MoonReference_1_System_Object__SetValueInResolver__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01349560, MoonTypeData, GetTypeData, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02721C50, void, SetResolver_1, (app::MoonReference_1_System_Object_ * this_ptr, app::IMoonTypeResolver * new_resolver, app::Object_1 * resolver_object));
IL2CPP_REGISTER_METHOD(0x02721C60, void, SetResolver_2, (app::MoonReference_1_System_Object_ * this_ptr, app::IMoonTypeResolver * new_resolver, app::Object_1 * resolver_object, int32_t int_extra_data));
IL2CPP_REGISTER_METHOD(0x02721C70, void, OnBeforeSerialize, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02721D60, void, OnAfterDeserialize, (app::MoonReference_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02721E50, MoonReference_1_System_Object_ *, Copy, (app::MoonReference_1_System_Object_ * this_ptr));
}
