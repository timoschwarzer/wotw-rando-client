#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Configuration::SettingsPropertyWrongTypeException {
    IL2CPP_REGISTER_METHOD(0x01FFDFF0, void, ctor_1, (app::SettingsPropertyWrongTypeException * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A1A8, SettingsPropertyWrongTypeException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE020, void, ctor_2, (app::SettingsPropertyWrongTypeException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04770818, SettingsPropertyWrongTypeException__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE050, void, ctor_3, (app::SettingsPropertyWrongTypeException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHODINFO(0x04796400, SettingsPropertyWrongTypeException__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE080, void, ctor_4, (app::SettingsPropertyWrongTypeException * this_ptr, app::String * message, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHODINFO(0x04723CB8, SettingsPropertyWrongTypeException__ctor_3__MethodInfo)
}
