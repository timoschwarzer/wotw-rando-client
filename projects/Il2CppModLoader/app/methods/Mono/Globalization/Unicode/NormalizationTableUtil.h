#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Mono::Globalization::Unicode::NormalizationTableUtil {
    IL2CPP_REGISTER_METHOD(0x023BD700, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x023BDDB0, int32_t, PropIdx, (int32_t cp))
    IL2CPP_REGISTER_METHOD(0x023BDE70, int32_t, MapIdx, (int32_t cp))
}
