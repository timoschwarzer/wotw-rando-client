#include <interception_macros.h>

namespace app::methods::Moon::BrainEntity {
IL2CPP_REGISTER_METHOD(0x01BA63B0, String *, get_FullAddress, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA64A0, int32_t, get_PreviewBranchIndex, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_PreviewBranchIndex, (app::BrainEntity * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x01BA6580, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_EditorActiveTimeline, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBC00, List_1_Moon_MoonReference_1__2 *, get_Timelines, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA66F0, MoonReference_1_Moon_Timeline_ITimelineEntity_ *, get_ActiveTimeline, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_CurrentTime, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_CurrentTime, (app::BrainEntity * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_ShouldUpdateRecords, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x0063D080, void, set_ShouldUpdateRecords, (app::BrainEntity * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x01BA6700, bool, ApproximateEvent, (app::BrainEntity * this_ptr, int32_t evt, app::float * time));
IL2CPP_REGISTER_METHOD(0x01BA6830, IBrainController *, get_ResolvedBrainController, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA6900, void, RefreshEntries, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA6D10, void, OnStartPlayback, (app::BrainEntity * this_ptr, app::IContext * context));
IL2CPP_REGISTER_METHOD(0x01BA6F60, void, OnUpdateEntity, (app::BrainEntity * this_ptr, float delta_time));
IL2CPP_REGISTER_METHOD(0x01BA7020, void, OnStopPlayback, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA7100, void, OnPausePlayback, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA71F0, void, OnResumePlayback, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA72E0, List_1_Moon_Timeline_TimelineEntityRecord_ *, get_EntityRecords, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA75E0, List_1_Moon_Timeline_ConstraintsMetaData_ *, get_ConstraintMetaDatas, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04732390, BrainEntity_get_ConstraintMetaDatas__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA7630, List_1_Moon_Timeline_TimelineMarkerRecord_ *, get_MarkerRecords, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA7780, List_1_Moon_Timeline_ExternalTimelineRecord_ *, get_ExternalRecords, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478EEE0, BrainEntity_get_ExternalRecords__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA77D0, void, RecursivelySetupExecutionOrder, (app::BrainEntity * this_ptr, int32_t order));
IL2CPP_REGISTER_METHOD(0x01BA7A40, bool, HasFinished, (app::BrainEntity * this_ptr, int32_t event_id));
IL2CPP_REGISTER_METHOD(0x01BA7BD0, IConstraint *, get_StartConstraint, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473C8F8, BrainEntity_get_StartConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01BA7C20, IConstraint *, get_EndConstraint, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04799A38, BrainEntity_get_EndConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, EntityId, get_EntityId, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C50A0, ITimelineEntity *, get_Entity, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA7C70, int32_t, get_ConstrainedEntitiesCount, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_Progress, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BA7D00, IConstrainedEntity *, GetConstrainedEntityFrom, (app::BrainEntity * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x01BA7DC0, IConstrainedEntity *, GetConstrainedEntity, (app::BrainEntity * this_ptr, app::EntityId entity_id));
IL2CPP_REGISTER_METHOD(0x004C50A0, ITimelineEntityParent *, get_GetITimelineEntityParent, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCE0, ITrimController *, get_TrimController, (app::BrainEntity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_TrimController, (app::BrainEntity * this_ptr, app::ITrimController * value));
IL2CPP_REGISTER_METHOD(0x01BA7E90, bool, IsTheSame, (app::BrainEntity * this_ptr, app::IConstrainedEntityWithChildren * context));
IL2CPP_REGISTER_METHOD(0x01BA7F50, void, SetPreviewBranch, (app::BrainEntity * this_ptr, int32_t branch));
IL2CPP_REGISTER_METHOD(0x01BA7FF0, void, __ctor, (app::BrainEntity * this_ptr));
}
