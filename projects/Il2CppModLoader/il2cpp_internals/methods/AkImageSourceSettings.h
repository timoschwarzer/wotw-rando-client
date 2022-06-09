#include <interception_macros.h>

namespace app::methods::AkImageSourceSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor_1, (app::AkImageSourceSettings * this_ptr, app::void * c_ptr, bool c_memory_own));
IL2CPP_REGISTER_METHOD(0x026E7820, void *, getCPtr, (app::AkImageSourceSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkImageSourceSettings * this_ptr, app::void * c_ptr));
IL2CPP_REGISTER_METHOD(0x026E78B0, void, Finalize, (app::AkImageSourceSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026E7930, void, Dispose, (app::AkImageSourceSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026E7B40, void, __ctor_2, (app::AkImageSourceSettings * this_ptr));
IL2CPP_REGISTER_METHOD(0x026E7C60, void, __ctor_3, (app::AkImageSourceSettings * this_ptr, app::AkVector * in_source_position, float in_f_distance_scaling_factor, float in_f_level));
IL2CPP_REGISTER_METHOD(0x026E7DD0, void, SetOneTexture, (app::AkImageSourceSettings * this_ptr, uint32_t in_texture));
IL2CPP_REGISTER_METHOD(0x026E7F00, void, SetName, (app::AkImageSourceSettings * this_ptr, app::String * in_p_name));
IL2CPP_REGISTER_METHOD(0x026E8100, void, set_params_, (app::AkImageSourceSettings * this_ptr, app::AkImageSourceParams * value));
IL2CPP_REGISTER_METHOD(0x026E8290, AkImageSourceParams *, get_params_, (app::AkImageSourceSettings * this_ptr));
}
