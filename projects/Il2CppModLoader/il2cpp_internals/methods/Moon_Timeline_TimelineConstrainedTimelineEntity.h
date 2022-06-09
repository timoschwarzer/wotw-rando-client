#include <interception_macros.h>

namespace app::methods::Moon_Timeline::TimelineConstrainedTimelineEntity {
    IL2CPP_REGISTER_METHOD(0x01E83830, int32_t, get_ConstrainedEntitiesCount, (app::TimelineConstrainedTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E838D0, float, get_Progress, (app::TimelineConstrainedTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01E838F0, app::IConstrainedEntity *, GetConstrainedEntityFrom, (app::TimelineConstrainedTimelineEntity * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x01E839C0, app::IConstrainedEntity *, GetConstrainedEntity, (app::TimelineConstrainedTimelineEntity * this_ptr, app::EntityId entity_id));
    IL2CPP_REGISTER_METHOD(0x01E839E0, bool, IsTheSame, (app::TimelineConstrainedTimelineEntity * this_ptr, app::IConstrainedEntityWithChildren * context));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MoonTimeline *, get_GetTimeline, (app::TimelineConstrainedTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ITimelineEntityParent *, get_GetITimelineEntityParent, (app::TimelineConstrainedTimelineEntity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::TimelineConstrainedTimelineEntity * this_ptr, app::TimelineEntityRecord * timeline_entity_record, app::MoonTimeline * moon_timeline));
}
