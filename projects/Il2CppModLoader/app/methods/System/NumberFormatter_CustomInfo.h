#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::NumberFormatter_CustomInfo {
    IL2CPP_REGISTER_METHOD(0x02279FC0, void, GetActiveSection, (app::String * format, bool * positive, bool zero, int32_t * offset, int32_t * length))
    IL2CPP_REGISTER_METHOD(0x0227A470, app::NumberFormatter_CustomInfo *, Parse, (app::String * format, int32_t offset, int32_t length, app::NumberFormatInfo * nfi))
    IL2CPP_REGISTER_METHOD(0x0227A910, app::String *, Format, (app::NumberFormatter_CustomInfo * this_ptr, app::String * format, int32_t offset, int32_t length, app::NumberFormatInfo * nfi, bool positive, app::StringBuilder * sb_int, app::StringBuilder * sb_dec, app::StringBuilder * sb_exp))
    IL2CPP_REGISTER_METHOD(0x0227B250, void, ctor, (app::NumberFormatter_CustomInfo * this_ptr))
}
