#include <interception_macros.h>

namespace app::methods::Moon_ContinuousIntegration::MessageAndStackTrace {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Message, (app::MessageAndStackTrace * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Message, (app::MessageAndStackTrace * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_StackTrace, (app::MessageAndStackTrace * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_StackTrace, (app::MessageAndStackTrace * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x0318B490, bool, Equals_1, (app::MessageAndStackTrace * this_ptr, app::MessageAndStackTrace * other));
    IL2CPP_REGISTER_METHOD(0x0318B530, bool, Equals_2, (app::MessageAndStackTrace * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0318B690, int32_t, GetHashCode, (app::MessageAndStackTrace * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MessageAndStackTrace * this_ptr));
}
