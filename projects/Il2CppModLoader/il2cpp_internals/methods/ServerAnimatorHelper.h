#include <interception_macros.h>

namespace app::methods::ServerAnimatorHelper {
IL2CPP_REGISTER_METHOD(0x00AB9510, ServerAnimatorHelper_BaseAnimatorData, CreateBaseAnimatorData, (app::BaseAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00AB9660, void, ApplyBaseAnimatorData, (app::ServerAnimatorHelper_BaseAnimatorData animator_data, app::BaseAnimator * * animator));
IL2CPP_REGISTER_METHOD(0x00AB9700, ServerAnimatorHelper_SequenceEntryData, CreateSequenceEntryData, (app::LegacyTimelineSequence_SequenceEntry * entry));
IL2CPP_REGISTER_METHOD(0x00AB9870, void, ApplySequenceEntryData, (app::ServerAnimatorHelper_SequenceEntryData data, app::LegacyTimelineSequence_SequenceEntry * * entry));
IL2CPP_REGISTER_METHOD(0x00AB9920, ServerAnimatorHelper_ConstraintData, CreateConstraintData, (app::LegacyTimelineSequence_SequenceEntry_Constraint * constraint));
IL2CPP_REGISTER_METHOD(0x00AB9A30, void, ApplyConstraintData, (app::ServerAnimatorHelper_ConstraintData data, app::LegacyTimelineSequence_SequenceEntry_Constraint * * contraint));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ServerAnimatorHelper * this_ptr));
}
