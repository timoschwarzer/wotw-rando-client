#include <interception_macros.h>

namespace app::methods::Moon_Timeline::ExternalTimelineRecord {
IL2CPP_REGISTER_METHOD(0x01BBF7A0, void, __ctor, (app::ExternalTimelineRecord * this_ptr, app::EntityId id));
IL2CPP_REGISTER_METHOD(0x002FC6D0, EntityId, get_Id, (app::ExternalTimelineRecord * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_Entity, (app::ExternalTimelineRecord * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BBF900, bool, HasFinished, (app::ExternalTimelineRecord * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHODINFO(0x04733668, ExternalTimelineRecord_HasFinished__MethodInfo);
}
