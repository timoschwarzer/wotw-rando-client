#include <interception_macros.h>

namespace app::methods::FloatStateMap {
    IL2CPP_REGISTER_METHOD(0x01B5AB80, app::List_1_GenericMappingEntry_ *, GetGenericMapping, (app::FloatStateMap * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01B5AEB0, void, SetGenericMapping, (app::FloatStateMap * this_ptr, int32_t state_guid, float generic_value));
    IL2CPP_REGISTER_METHOD(0x01B5B280, void, __ctor, (app::FloatStateMap * this_ptr));
}
