#include <interception_macros.h>

namespace app::methods::Grdk::AchievementUploader {
IL2CPP_REGISTER_METHOD(0x01083270, XblAchievement__Array *, get_Achievements, ());
IL2CPP_REGISTER_METHOD(0x01083310, void, PublishAchievementProgress, (String * achievementId, int32_t progress));
IL2CPP_REGISTER_METHOD(0x01083570, void, Uploaded, (int32_t result));
IL2CPP_REGISTER_METHODINFO(0x04794ED8, AchievementUploader_Uploaded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01083610, void, GetAchievementProgress, ());
IL2CPP_REGISTER_METHOD(0x010838F0, void, Obtained, (XblAchievement__Array * achievements));
IL2CPP_REGISTER_METHODINFO(0x047422E0, AchievementUploader_Obtained__MethodInfo);
IL2CPP_REGISTER_METHOD(0x010839F0, void, ResetCachedData, ());
IL2CPP_REGISTER_METHOD(0x01083AC0, void, Reset, ());
IL2CPP_REGISTER_METHOD(0x01083BA0, void, __cctor, ());
}
