#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonPrimitiveContract {
    IL2CPP_REGISTER_METHOD(0x003FC380, app::PrimitiveTypeCode__Enum, get_TypeCode, (app::JsonPrimitiveContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_TypeCode, (app::JsonPrimitiveContract * this_ptr, app::PrimitiveTypeCode__Enum value))
    IL2CPP_REGISTER_METHOD(0x01872890, void, ctor, (app::JsonPrimitiveContract * this_ptr, app::Type * underlying_type))
    IL2CPP_REGISTER_METHOD(0x018729F0, void, cctor, ())
}
