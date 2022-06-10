#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::ExclusiveOrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::ExclusiveOrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E43A0, app::String *, get_InstructionName, (app::ExclusiveOrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExclusiveOrInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E4420, app::Instruction *, Create, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x04716820, ExclusiveOrInstruction_Create__MethodInfo)
}
