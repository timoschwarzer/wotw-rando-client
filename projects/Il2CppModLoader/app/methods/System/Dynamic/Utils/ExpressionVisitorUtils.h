#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Dynamic::Utils::ExpressionVisitorUtils {
    IL2CPP_REGISTER_METHOD(0x01F95420, app::Expression__Array *, VisitBlockExpressions, (app::ExpressionVisitor * visitor, app::BlockExpression * block))
    IL2CPP_REGISTER_METHOD(0x01F95640, app::ParameterExpression__Array *, VisitParameters, (app::ExpressionVisitor * visitor, app::IParameterProvider * nodes, app::String * caller_name))
    IL2CPP_REGISTER_METHOD(0x01F95860, app::Expression__Array *, VisitArguments, (app::ExpressionVisitor * visitor, app::IArgumentProvider * nodes))
}
