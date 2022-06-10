#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::SaveSlotsScreenshotManager {
    IL2CPP_REGISTER_METHOD(0x0092ABF0, void, Awake, (app::SaveSlotsScreenshotManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092AC80, void, OnDestroy, (app::SaveSlotsScreenshotManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0092AD60, app::Texture *, FindScreenshot, (app::SaveSlotsScreenshotManager * this_ptr, app::GameWorldAreaID__Enum area_i_d))
    IL2CPP_REGISTER_METHOD(0x0092AF10, app::String *, FindAreaName, (app::SaveSlotsScreenshotManager * this_ptr, app::GameWorldAreaID__Enum area_i_d))
    IL2CPP_REGISTER_METHOD(0x0092B100, void, ctor, (app::SaveSlotsScreenshotManager * this_ptr))
}
