#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::LoadLocalFromClosureBoxedInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::LoadLocalFromClosureBoxedInstruction * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadLocalFromClosureBoxedInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x023F9BE0, String *, get_InstructionName, (app::LoadLocalFromClosureBoxedInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x023F9C60, int32_t, Run, (app::LoadLocalFromClosureBoxedInstruction * this_ptr, app::InterpretedFrame * frame));
}
