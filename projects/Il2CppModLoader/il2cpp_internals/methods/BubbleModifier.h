#include <interception_macros.h>

namespace app::methods::BubbleModifier {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::BubbleModifier * this_ptr, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x008040D0, void, SetProperties, (app::BubbleModifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ImplementsAlphaMasking, (app::BubbleModifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x008041C0, void, __ctor, (app::BubbleModifier * this_ptr));
}
