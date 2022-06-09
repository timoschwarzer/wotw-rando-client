#include <interception_macros.h>

namespace app::methods::Moon_Timeline::VirtualMoonTimeline {
IL2CPP_REGISTER_METHOD(0x00420230, AnimatorPlayState__Enum, get_PlayState, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, PlaybackStatus *, get_PlaybackStatus, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E90830, bool, IsTheSame, (app::VirtualMoonTimeline * this_ptr, app::IConstrainedEntityWithChildren * context));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_ExpandedByDefault, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_ExpandedByDefault, (app::VirtualMoonTimeline * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FBB00, List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_CurrentTime, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9D0, List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, IConstraint *, get_StartConstraint, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, IConstraint *, get_EndConstraint, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E908F0, void, __ctor, (app::VirtualMoonTimeline * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x004C50A0, ITimelineEntity *, get_Entity, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, EntityId, get_EntityId, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E90FA0, int32_t, get_ConstrainedEntitiesCount, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Progress, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_ShouldHideHeader, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_ShouldHideHeader, (app::VirtualMoonTimeline * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00575450, bool, get_UseHorizontalCollapse, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x00575460, void, set_UseHorizontalCollapse, (app::VirtualMoonTimeline * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E91030, bool, HasEntity, (app::VirtualMoonTimeline * this_ptr, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x01E91120, ITimelineEntity *, GetEntityFromId, (app::VirtualMoonTimeline * this_ptr, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasFinished, (app::VirtualMoonTimeline * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RecursivelySetupExecutionOrder, (app::VirtualMoonTimeline * this_ptr, int32_t order));
IL2CPP_REGISTER_METHOD(0x00420EE0, EntityOperationPermit__Enum, OnBeforeAddChild, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E91250, EntityId, CustomAddChild, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E91260, EntityId, AddChild, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHODINFO(0x0474E230, VirtualMoonTimeline_AddChild__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E913C0, EntityId, AddChildNormally, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E917A0, VirtualMoonTimeline *, AddVirtualTimeline_1, (app::VirtualMoonTimeline * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01E91970, VirtualMoonTimeline *, AddVirtualTimeline_2, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity_to_contraint_start_to, app::String * name));
IL2CPP_REGISTER_METHOD(0x01E91C00, void, AddEntityRecordUnsafe, (app::VirtualMoonTimeline * this_ptr, app::TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x01BC6DC0, EntityId, GetEntityConstrainedTo, (app::VirtualMoonTimeline * this_ptr, app::EntityId entity_id, app::Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BC6DF0, int32_t, GetEventId, (app::VirtualMoonTimeline * this_ptr, app::EntityId entity_id, app::Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01BC6E10, float, GetTimeOffset, (app::VirtualMoonTimeline * this_ptr, app::EntityId entity_id, app::Constraint__Enum constraint));
IL2CPP_REGISTER_METHOD(0x01E91CA0, IConstrainedEntity *, GetConstrainedEntityFrom, (app::VirtualMoonTimeline * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01E91D60, IConstrainedEntity *, GetConstrainedEntity, (app::VirtualMoonTimeline * this_ptr, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x004C50A0, ITimelineEntityParent *, get_GetITimelineEntityParent, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FD490, EntityOperationPermit__Enum, OnBeforeRemoveChild, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E91E30, void, CustomRemoveChild, (app::VirtualMoonTimeline * this_ptr, app::EntityId id, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x01E91EE0, void, RemoveChildNormally, (app::VirtualMoonTimeline * this_ptr, app::EntityId id));
IL2CPP_REGISTER_METHOD(0x01E91FF0, void, Remove, (app::VirtualMoonTimeline * this_ptr, app::EntityId id));
IL2CPP_REGISTER_METHOD(0x01E92250, Nullable_1_Moon_Timeline_EntityId_, GetEtityId, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntity * entity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StartPlayback, (app::VirtualMoonTimeline * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, StopPlayback, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PausePlayback, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ResumePlayback, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E923D0, IEventReciever *, get_EventReciever, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04730400, VirtualMoonTimeline_get_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E92420, void, set_EventReciever, (app::VirtualMoonTimeline * this_ptr, app::IEventReciever * value));
IL2CPP_REGISTER_METHODINFO(0x0472FF28, VirtualMoonTimeline_set_EventReciever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBBA0, ITrimController *, get_TrimController, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_TrimController, (app::VirtualMoonTimeline * this_ptr, app::ITrimController * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_FullAddress, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E92470, void, PostEvent_1, (app::VirtualMoonTimeline * this_ptr, app::ITimelineEntityParent * scope, app::EntityId id, int32_t event_id));
IL2CPP_REGISTER_METHODINFO(0x047626D8, VirtualMoonTimeline_PostEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E924C0, void, PostEvent_2, (app::VirtualMoonTimeline * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHODINFO(0x0473D130, VirtualMoonTimeline_PostEvent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E92510, void, PostRequest, (app::VirtualMoonTimeline * this_ptr, int32_t event_id, app::TimelineEntity * entity));
IL2CPP_REGISTER_METHODINFO(0x04715090, VirtualMoonTimeline_PostRequest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E92560, bool, ApproximateEvent, (app::VirtualMoonTimeline * this_ptr, int32_t evt, app::float * time));
IL2CPP_REGISTER_METHOD(0x01E92650, void, ClearAllEntities, (app::VirtualMoonTimeline * this_ptr));
IL2CPP_REGISTER_METHOD(0x01EB97A0, List_1_System_Object_ *, GetAnimators, (app::VirtualMoonTimeline * this_ptr));
}
