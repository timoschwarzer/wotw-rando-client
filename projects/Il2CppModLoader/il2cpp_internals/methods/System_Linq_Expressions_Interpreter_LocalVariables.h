#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::LocalVariables {
IL2CPP_REGISTER_METHOD(0x023FAA70, LocalDefinition, DefineLocal, (app::LocalVariables * this_ptr, app::ParameterExpression * variable, int32_t start));
IL2CPP_REGISTER_METHOD(0x023FAF50, void, UndefineLocal, (app::LocalVariables * this_ptr, app::LocalDefinition definition, int32_t end));
IL2CPP_REGISTER_METHOD(0x023FB1A0, void, Box, (app::LocalVariables * this_ptr, app::ParameterExpression * variable, app::InstructionList * instructions));
IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_LocalCount, (app::LocalVariables * this_ptr));
IL2CPP_REGISTER_METHOD(0x023FB520, bool, TryGetLocalOrClosure, (app::LocalVariables * this_ptr, app::ParameterExpression * var, app::LocalVariable * * local));
IL2CPP_REGISTER_METHOD(0x002FB930, Dictionary_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable_ *, get_ClosureVariables, (app::LocalVariables * this_ptr));
IL2CPP_REGISTER_METHOD(0x023FB620, LocalVariable *, AddClosureVariable, (app::LocalVariables * this_ptr, app::ParameterExpression * variable));
IL2CPP_REGISTER_METHOD(0x023FB8D0, void, __ctor, (app::LocalVariables * this_ptr));
}
