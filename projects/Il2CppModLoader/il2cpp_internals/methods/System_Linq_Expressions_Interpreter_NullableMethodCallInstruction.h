#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::NullableMethodCallInstruction {
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NullableMethodCallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NullableMethodCallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x024077B0, String *, get_InstructionName, (app::NullableMethodCallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::NullableMethodCallInstruction * this_ptr));
IL2CPP_REGISTER_METHOD(0x02407830, Instruction *, Create, (app::String * method_1, int32_t arg_count, app::MethodInfo_1 * mi));
IL2CPP_REGISTER_METHODINFO(0x04745CD0, NullableMethodCallInstruction_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02408080, Instruction *, CreateGetValue, ());
}
