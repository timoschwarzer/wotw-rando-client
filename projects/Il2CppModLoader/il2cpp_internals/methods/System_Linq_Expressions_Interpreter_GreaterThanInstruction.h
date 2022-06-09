#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::GreaterThanInstruction {
IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::GreaterThanInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::GreaterThanInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x022E69D0, String *, get_InstructionName, (app::GreaterThanInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::GreaterThanInstruction * this_ptr, app::Object * null_value));
IL2CPP_REGISTER_METHOD(0x022E6A50, Instruction *, Create, (app::Type * type, bool lifted_to_null));
IL2CPP_REGISTER_METHODINFO(0x0475EB38, GreaterThanInstruction_Create__MethodInfo);
}
