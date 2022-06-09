#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::BranchFalseInstruction {
IL2CPP_REGISTER_METHOD(0x022D5F90, Instruction__Array *, get_Cache, (app::BranchFalseInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D6050, String *, get_InstructionName, (app::BranchFalseInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::BranchFalseInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022D60D0, int32_t, Run, (app::BranchFalseInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01834240, void, __ctor, (app::BranchFalseInstruction * this_ptr));
}
