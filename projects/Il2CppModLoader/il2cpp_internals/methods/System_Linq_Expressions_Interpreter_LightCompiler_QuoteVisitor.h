#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions_Interpreter::LightCompiler_QuoteVisitor {
IL2CPP_REGISTER_METHOD(0x023F63B0, Expression *, VisitParameter, (app::LightCompiler_QuoteVisitor * this_ptr, app::ParameterExpression * node));
IL2CPP_REGISTER_METHOD(0x023F64A0, Expression *, VisitBlock, (app::LightCompiler_QuoteVisitor * this_ptr, app::BlockExpression * node));
IL2CPP_REGISTER_METHOD(0x023F6600, CatchBlock *, VisitCatchBlock, (app::LightCompiler_QuoteVisitor * this_ptr, app::CatchBlock * node));
IL2CPP_REGISTER_METHOD(0x023F67E0, void, PushParameters, (app::LightCompiler_QuoteVisitor * this_ptr, app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * parameters));
IL2CPP_REGISTER_METHOD(0x023F6A90, void, PopParameters, (app::LightCompiler_QuoteVisitor * this_ptr, app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_ * parameters));
IL2CPP_REGISTER_METHOD(0x023F6CC0, void, __ctor, (app::LightCompiler_QuoteVisitor * this_ptr));
IL2CPP_REGISTER_METHOD(0x0153C060, Expression *, VisitLambda, (app::LightCompiler_QuoteVisitor * this_ptr, app::Expression_1_System_Object_ * node));
}
