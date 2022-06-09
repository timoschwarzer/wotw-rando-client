#include <interception_macros.h>

namespace app::methods::System_Reflection::RuntimeConstructorInfo {
IL2CPP_REGISTER_METHOD(0x02696B10, Module *, get_Module, (app::RuntimeConstructorInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02696B10, RuntimeModule *, GetRuntimeModule, (app::RuntimeConstructorInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, BindingFlags__Enum, get_BindingFlags, (app::RuntimeConstructorInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02696C00, RuntimeType *, get_ReflectedTypeInternal, (app::RuntimeConstructorInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02696CE0, void, GetObjectData, (app::RuntimeConstructorInfo * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0471F848, RuntimeConstructorInfo_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02696EE0, String *, SerializationToString, (app::RuntimeConstructorInfo * this_ptr));
IL2CPP_REGISTER_METHOD(0x02696F00, void, SerializationInvoke, (app::RuntimeConstructorInfo * this_ptr, app::Object * target, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHOD(0x0268FE90, void, __ctor, (app::RuntimeConstructorInfo * this_ptr));
}
