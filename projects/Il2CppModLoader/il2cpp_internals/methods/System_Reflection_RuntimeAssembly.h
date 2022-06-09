#include <interception_macros.h>

namespace app::methods::System_Reflection::RuntimeAssembly {
IL2CPP_REGISTER_METHOD(0x026968D0, void, GetObjectData, (app::RuntimeAssembly * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x04732838, RuntimeAssembly_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026969C0, RuntimeAssembly *, LoadWithPartialNameInternal_1, (app::String * partial_name, app::Evidence * security_evidence, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHOD(0x02696AB0, RuntimeAssembly *, LoadWithPartialNameInternal_2, (app::AssemblyName * an, app::Evidence * security_evidence, app::StackCrawlMark__Enum * stack_mark));
IL2CPP_REGISTER_METHOD(0x02696B00, AssemblyName *, GetName, (app::RuntimeAssembly * this_ptr, bool copied_name));
IL2CPP_REGISTER_METHOD(0x02280FB0, void, __ctor, (app::RuntimeAssembly * this_ptr));
}
