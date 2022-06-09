#include <interception_macros.h>

namespace app::methods::UnityEngine_Profiling::CustomSampler {
    IL2CPP_REGISTER_METHOD(0x02968310, void, __ctor_1, (app::CustomSampler * this_ptr));
    IL2CPP_REGISTER_METHOD(0x029683A0, void, __ctor_2, (app::CustomSampler * this_ptr, void * ptr));
    IL2CPP_REGISTER_METHOD(0x02968450, app::CustomSampler *, Create, (app::String * name, app::BuiltinCategory__Enum group));
    IL2CPP_REGISTER_METHOD(0x029686C0, void *, CreateInternal, (app::String * name, app::BuiltinCategory__Enum group));
    IL2CPP_REGISTER_METHOD(0x02968720, void, __cctor, ());
}
