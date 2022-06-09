#include <interception_macros.h>

namespace app::methods::Moon_Timeline::TimelineHelper {
IL2CPP_REGISTER_METHOD(0x01E88350, EntityId, GetEntityId, (app::ITimelineEntityParent * timeline, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E88530, void, SetConstraintsDirty, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E885F0, void, SetConstraintDirty, (app::ITimelineEntityParent * timeline, app::EntityId entity_id, app::Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01E886B0, TimelineEntityRecord *, FindRecordForEntityObject, (app::ITimelineEntityParent * timeline, app::ITimelineEntity * timeline_entity));
IL2CPP_REGISTER_METHOD(0x01E88900, TimelineConstraint *, GetConstraintForEntity, (app::ITimelineEntityParent * timeline, app::EntityId entity, app::Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01E88A10, bool, HasRecordForId, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E88C70, bool, EntityIdIsValidForConstraint, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E88D60, bool, HasMarkerRecordForId, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E88FC0, bool, ConstraintReliesOn, (app::ITimelineEntityParent * timeline, app::IConstraint * constraint, app::TimelineConstraint * other));
IL2CPP_REGISTER_METHOD(0x01E89400, bool, CanCreate, (app::ITimelineEntityParent * timeline, app::EntityId from_entity, app::Constraint__Enum from_constraint, app::EntityId to_entity, int32_t event_id));
IL2CPP_REGISTER_METHOD(0x01E89750, TimelineEntityRecord *, GetRecordFor, (app::ITimelineEntityParent * timeline, app::ITimelineEntity * timeline_entity));
IL2CPP_REGISTER_METHOD(0x01E89940, bool, IsEntityRecord, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E89AE0, bool, IsMarkerRecord, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E89C80, bool, IsExternalRecord, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E89E20, TimelineEntityRecord *, GetEntityFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E89E30, TimelineMarkerRecord *, GetMarkerFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E89E40, ExternalTimelineRecord *, GetExternalFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E89E50, int32_t, GetMaxEntityId, (app::ITimelineEntityParent * timeline));
IL2CPP_REGISTER_METHOD(0x01E8A2A0, EntityId, GetNextEntityId, (app::ITimelineEntityParent * timeline));
IL2CPP_REGISTER_METHOD(0x01E8A340, EntityId, GetNextMarkerId, (app::ITimelineEntityParent * timeline));
IL2CPP_REGISTER_METHOD(0x01E8A7C0, Constraint__Enum, GetSampleConstraintFrom, (int32_t constraint_type));
IL2CPP_REGISTER_METHODINFO(0x0477D410, TimelineHelper_GetSampleConstraintFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E8A880, void, BreakEverythingConstrainedTo_1, (app::MoonTimeline * timeline, app::ITimelineEntity * timeline_entity));
IL2CPP_REGISTER_METHOD(0x01E8A950, void, BreakEverythingConstrainedTo_2, (app::MoonTimeline * timeline, app::EntityId entity_id));
IL2CPP_REGISTER_METHODINFO(0x047889B0, TimelineHelper_BreakEverythingConstrainedTo_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E8AC50, IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_ *, AllConstraintsConstrainedTo, (app::ITimelineEntityParent * owning_timeline, app::EntityId record_entity_id));
IL2CPP_REGISTER_METHOD(0x01E8B030, IEnumerable_1_Moon_Timeline_TimelineEntityRecord_ *, EverythingConstrainedTo, (app::ITimelineEntityParent * owning_timeline, app::EntityId record_entity_id));
IL2CPP_REGISTER_METHOD(0x01E8B1D0, float, TransformTime, (app::MoonTimeline * from, app::MoonTimeline * to, float time));
IL2CPP_REGISTER_METHOD(0x01E8B680, bool, GetToAndFromCommonParent, (app::MoonTimeline * from, app::MoonTimeline * to, app::List_1_Moon_Timeline_MoonTimeline_ * * from_path, app::List_1_Moon_Timeline_MoonTimeline_ * * to_path));
IL2CPP_REGISTER_METHOD(0x01E8BA80, float, GetGlobalTimeOffset, (app::ITimelineEntity * entity, app::IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * map));
IL2CPP_REGISTER_METHOD(0x01E8BC10, Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ *, BuildChildParentMap, (app::ITimelineEntityParent * timeline_root));
IL2CPP_REGISTER_METHOD(0x01E8BF00, void, BuildChildParentMapRecursive, (app::ITimelineEntity * entity, app::ITimelineEntityParent * parent, app::Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * * map));
IL2CPP_REGISTER_METHOD(0x01E8C110, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01552BC0, void, BreakEverythingConstrainedTo_3, (app::MoonTimeline * timeline, app::Object * timeline_entity, int32_t event_id));
IL2CPP_REGISTER_METHODINFO(0x04785FB8, TimelineHelper_BreakEverythingConstrainedTo_2__MethodInfo);
}
