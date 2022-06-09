#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::IndexedBranchInstruction {
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, __ctor, (app::IndexedBranchInstruction * this_ptr, int32_t label_index));
IL2CPP_REGISTER_METHOD(0x01CD6220, RuntimeLabel, GetLabel, (app::IndexedBranchInstruction * this_ptr, app::InterpretedFrame * frame));
IL2CPP_REGISTER_METHOD(0x01CD6290, String *, ToDebugString, (app::IndexedBranchInstruction * this_ptr, int32_t instruction_index, app::Object * cookie, app::Func_2_Int32_Int32_ * label_indexer, app::IReadOnlyList_1_System_Object_ * objects));
IL2CPP_REGISTER_METHOD(0x01CD6390, String *, ToString, (app::IndexedBranchInstruction * this_ptr));
}
