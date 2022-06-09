#include <interception_macros.h>

namespace app::methods::MS_Internal_Xml_XPath::XPathParser {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::XPathParser * this_ptr, app::XPathScanner * scanner));
IL2CPP_REGISTER_METHOD(0x021D94F0, AstNode *, ParseXPathExpresion, (app::String * xpath_expresion));
IL2CPP_REGISTER_METHODINFO(0x0472B518, XPathParser_ParseXPathExpresion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D9810, AstNode *, ParseExpresion, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHODINFO(0x04795968, XPathParser_ParseExpresion__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021D98D0, AstNode *, ParseOrExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021D9B00, AstNode *, ParseAndExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021D9D30, AstNode *, ParseEqualityExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021D9F30, AstNode *, ParseRelationalExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DA140, AstNode *, ParseAdditiveExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DA340, AstNode *, ParseMultiplicativeExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DA600, AstNode *, ParseUnaryExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DA930, AstNode *, ParseUnionExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DAB60, bool, IsNodeType, (app::XPathScanner * scaner));
IL2CPP_REGISTER_METHOD(0x021DACE0, AstNode *, ParsePathExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DAFA0, AstNode *, ParseFilterExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DB190, AstNode *, ParsePredicate, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DB240, AstNode *, ParseLocationPath, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DB5E0, AstNode *, ParseRelativeLocationPath, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DB7C0, bool, IsStep, (app::XPathScanner_LexKind__Enum lex_kind));
IL2CPP_REGISTER_METHOD(0x021DB7F0, AstNode *, ParseStep, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DBD60, AstNode *, ParseNodeTest, (app::XPathParser * this_ptr, app::AstNode * qy_input, app::Axis_AxisType__Enum axis_type, app::XPathNodeType__Enum node_type));
IL2CPP_REGISTER_METHODINFO(0x04716790, XPathParser_ParseNodeTest__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DC220, bool, IsPrimaryExpr, (app::XPathScanner * scanner));
IL2CPP_REGISTER_METHOD(0x021DC300, AstNode *, ParsePrimaryExpr, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHOD(0x021DC880, AstNode *, ParseMethod, (app::XPathParser * this_ptr, app::AstNode * qy_input));
IL2CPP_REGISTER_METHODINFO(0x0475BF48, XPathParser_ParseMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DD5E0, void, CheckToken, (app::XPathParser * this_ptr, app::XPathScanner_LexKind__Enum t));
IL2CPP_REGISTER_METHODINFO(0x04762AE8, XPathParser_CheckToken__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DD6C0, void, PassToken, (app::XPathParser * this_ptr, app::XPathScanner_LexKind__Enum t));
IL2CPP_REGISTER_METHOD(0x021DD6F0, void, NextLex, (app::XPathParser * this_ptr));
IL2CPP_REGISTER_METHOD(0x021DD710, bool, TestOp, (app::XPathParser * this_ptr, app::String * op));
IL2CPP_REGISTER_METHOD(0x021DD780, void, CheckNodeSet, (app::XPathParser * this_ptr, app::XPathResultType__Enum t));
IL2CPP_REGISTER_METHODINFO(0x047372A0, XPathParser_CheckNodeSet__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DD850, Hashtable *, CreateFunctionTable, ());
IL2CPP_REGISTER_METHOD(0x021DF450, Hashtable *, CreateAxesTable, ());
IL2CPP_REGISTER_METHOD(0x021DF860, Axis_AxisType__Enum, GetAxis, (app::XPathParser * this_ptr, app::XPathScanner * scaner));
IL2CPP_REGISTER_METHODINFO(0x04701960, XPathParser_GetAxis__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021DF9B0, void, __cctor, ());
}
