#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::VertexColorModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::VertexColorModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::VertexColorModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::VertexColorModifier * this_ptr))
}
