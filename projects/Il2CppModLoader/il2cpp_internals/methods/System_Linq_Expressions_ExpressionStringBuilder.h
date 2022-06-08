#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::ExpressionStringBuilder {
IL2CPP_REGISTER_METHOD(0x022C78D0, void, __ctor, (ExpressionStringBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01B65290, String *, ToString, (ExpressionStringBuilder * __this));
IL2CPP_REGISTER_METHOD(0x022C7A20, int32_t, GetLabelId, (ExpressionStringBuilder * __this, LabelTarget * label));
IL2CPP_REGISTER_METHOD(0x022C7A20, int32_t, GetParamId, (ExpressionStringBuilder * __this, ParameterExpression * p));
IL2CPP_REGISTER_METHOD(0x022C7A30, int32_t, GetId, (ExpressionStringBuilder * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x022C7C70, void, Out, (ExpressionStringBuilder * __this, String * s));
IL2CPP_REGISTER_METHOD(0x022C7C90, void, Out, (ExpressionStringBuilder * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x022C7CB0, String *, ExpressionToString, (Expression * node));
IL2CPP_REGISTER_METHOD(0x022C7E30, String *, CatchBlockToString, (CatchBlock * node));
IL2CPP_REGISTER_METHOD(0x022C7FB0, String *, SwitchCaseToString, (SwitchCase * node));
IL2CPP_REGISTER_METHOD(0x022C8130, String *, MemberBindingToString, (MemberBinding * node));
IL2CPP_REGISTER_METHOD(0x022C82B0, String *, ElementInitBindingToString, (ElementInit * node));
IL2CPP_REGISTER_METHOD(0x022C8430, Expression *, VisitBinary, (ExpressionStringBuilder * __this, BinaryExpression * node));
IL2CPP_REGISTER_METHODINFO(0x0470AD38, ExpressionStringBuilder_VisitBinary__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C8900, Expression *, VisitParameter, (ExpressionStringBuilder * __this, ParameterExpression * node));
IL2CPP_REGISTER_METHOD(0x022C8A40, Expression *, VisitListInit, (ExpressionStringBuilder * __this, ListInitExpression * node));
IL2CPP_REGISTER_METHOD(0x022C8D30, Expression *, VisitConditional, (ExpressionStringBuilder * __this, ConditionalExpression * node));
IL2CPP_REGISTER_METHOD(0x022C8EA0, Expression *, VisitConstant, (ExpressionStringBuilder * __this, ConstantExpression * node));
IL2CPP_REGISTER_METHOD(0x022C90E0, Expression *, VisitDebugInfo, (ExpressionStringBuilder * __this, DebugInfoExpression * node));
IL2CPP_REGISTER_METHOD(0x022C9460, Expression *, VisitRuntimeVariables, (ExpressionStringBuilder * __this, RuntimeVariablesExpression * node));
IL2CPP_REGISTER_METHOD(0x022C9510, void, OutMember, (ExpressionStringBuilder * __this, Expression * instance, MemberInfo_1 * member));
IL2CPP_REGISTER_METHOD(0x022C9600, Expression *, VisitMember, (ExpressionStringBuilder * __this, MemberExpression * node));
IL2CPP_REGISTER_METHOD(0x022C9730, Expression *, VisitMemberInit, (ExpressionStringBuilder * __this, MemberInitExpression * node));
IL2CPP_REGISTER_METHOD(0x022C9B30, MemberAssignment *, VisitMemberAssignment, (ExpressionStringBuilder * __this, MemberAssignment * assignment));
IL2CPP_REGISTER_METHOD(0x022C9C30, MemberListBinding *, VisitMemberListBinding, (ExpressionStringBuilder * __this, MemberListBinding * binding));
IL2CPP_REGISTER_METHOD(0x022C9F50, MemberMemberBinding *, VisitMemberMemberBinding, (ExpressionStringBuilder * __this, MemberMemberBinding * binding));
IL2CPP_REGISTER_METHOD(0x022CA270, ElementInit *, VisitElementInit, (ExpressionStringBuilder * __this, ElementInit * initializer));
IL2CPP_REGISTER_METHOD(0x022CA5D0, Expression *, VisitInvocation, (ExpressionStringBuilder * __this, InvocationExpression * node));
IL2CPP_REGISTER_METHOD(0x022CA870, Expression *, VisitMethodCall, (ExpressionStringBuilder * __this, MethodCallExpression * node));
IL2CPP_REGISTER_METHOD(0x022CABF0, Expression *, VisitNewArray, (ExpressionStringBuilder * __this, NewArrayExpression * node));
IL2CPP_REGISTER_METHOD(0x022CAD60, Expression *, VisitNew, (ExpressionStringBuilder * __this, NewExpression * node));
IL2CPP_REGISTER_METHOD(0x022CB0C0, Expression *, VisitTypeBinary, (ExpressionStringBuilder * __this, TypeBinaryExpression * node));
IL2CPP_REGISTER_METHOD(0x022CB240, Expression *, VisitUnary, (ExpressionStringBuilder * __this, UnaryExpression * node));
IL2CPP_REGISTER_METHODINFO(0x04790480, ExpressionStringBuilder_VisitUnary__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022CB7E0, Expression *, VisitBlock, (ExpressionStringBuilder * __this, BlockExpression * node));
IL2CPP_REGISTER_METHOD(0x022CBBF0, Expression *, VisitDefault, (ExpressionStringBuilder * __this, DefaultExpression * node));
IL2CPP_REGISTER_METHOD(0x022CBD10, Expression *, VisitLabel, (ExpressionStringBuilder * __this, LabelExpression * node));
IL2CPP_REGISTER_METHOD(0x022CBDF0, Expression *, VisitGoto, (ExpressionStringBuilder * __this, GotoExpression * node));
IL2CPP_REGISTER_METHODINFO(0x0478BE60, ExpressionStringBuilder_VisitGoto__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022CBF90, Expression *, VisitLoop, (ExpressionStringBuilder * __this, LoopExpression * node));
IL2CPP_REGISTER_METHOD(0x022CC030, SwitchCase *, VisitSwitchCase, (ExpressionStringBuilder * __this, SwitchCase * node));
IL2CPP_REGISTER_METHOD(0x022CC120, Expression *, VisitSwitch, (ExpressionStringBuilder * __this, SwitchExpression * node));
IL2CPP_REGISTER_METHOD(0x022CC220, CatchBlock *, VisitCatchBlock, (ExpressionStringBuilder * __this, CatchBlock * node));
IL2CPP_REGISTER_METHOD(0x022CC390, Expression *, VisitTry, (ExpressionStringBuilder * __this, TryExpression * node));
IL2CPP_REGISTER_METHOD(0x022CC430, Expression *, VisitIndex, (ExpressionStringBuilder * __this, IndexExpression * node));
IL2CPP_REGISTER_METHOD(0x022CC7A0, Expression *, VisitExtension, (ExpressionStringBuilder * __this, Expression * node));
IL2CPP_REGISTER_METHOD(0x022CCA10, void, DumpLabel, (ExpressionStringBuilder * __this, LabelTarget * target));
IL2CPP_REGISTER_METHOD(0x022CCB20, bool, IsBool, (Expression * node));
IL2CPP_REGISTER_METHOD(0x01AEFBA0, void, VisitExpressions, (ExpressionStringBuilder * __this, uint16_t open, ReadOnlyCollection_1_System_Object_ * expressions, uint16_t close));
IL2CPP_REGISTER_METHOD(0x01AEFC70, void, VisitExpressions, (ExpressionStringBuilder * __this, uint16_t open, ReadOnlyCollection_1_System_Object_ * expressions, uint16_t close, String * seperator));
IL2CPP_REGISTER_METHOD(0x0153BC30, Expression *, VisitLambda, (ExpressionStringBuilder * __this, Expression_1_System_Object_ * node));
IL2CPP_REGISTER_METHOD(0x01AEFBA0, void, VisitExpressions, (ExpressionStringBuilder * __this, uint16_t open, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * expressions, uint16_t close));
IL2CPP_REGISTER_METHODINFO(0x04762670, ExpressionStringBuilder_VisitExpressions_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AEFBA0, void, VisitExpressions, (ExpressionStringBuilder * __this, uint16_t open, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * expressions, uint16_t close));
IL2CPP_REGISTER_METHODINFO(0x047017F8, ExpressionStringBuilder_VisitExpressions_3__MethodInfo);
}
