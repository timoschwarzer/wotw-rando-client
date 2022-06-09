#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::CreateDelegateInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::CreateDelegateInstruction * this_ptr, app::LightDelegateCreator * delegate_creator));
    IL2CPP_REGISTER_METHOD(0x022DA180, int32_t, get_ConsumedStack, (app::CreateDelegateInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::CreateDelegateInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022DA230, app::String *, get_InstructionName, (app::CreateDelegateInstruction * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022DA2B0, int32_t, Run, (app::CreateDelegateInstruction * this_ptr, app::InterpretedFrame * frame));
}
