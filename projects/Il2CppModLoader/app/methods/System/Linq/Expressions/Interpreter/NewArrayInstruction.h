#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::NewArrayInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NewArrayInstruction * this_ptr, app::Type * element_type))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NewArrayInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NewArrayInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02401C10, app::String *, get_InstructionName, (app::NewArrayInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02401C90, int32_t, Run, (app::NewArrayInstruction * this_ptr, app::InterpretedFrame * frame))
}
