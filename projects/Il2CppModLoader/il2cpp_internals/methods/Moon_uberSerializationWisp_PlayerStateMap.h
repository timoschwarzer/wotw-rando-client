#include <interception_macros.h>

namespace app::methods::Moon_uberSerializationWisp::PlayerStateMap {
    IL2CPP_REGISTER_METHOD(0x00F31CD0, app::List_1_GenericMappingEntry_ *, GetGenericMapping, (app::PlayerStateMap * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00F32020, void, SetGenericMapping, (app::PlayerStateMap * this_ptr, int32_t state_guid, float generic_value));
    IL2CPP_REGISTER_METHODINFO(0x04774F00, PlayerStateMap_SetGenericMapping__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00F32070, void, __ctor, (app::PlayerStateMap * this_ptr));
}
