#include <interception_macros.h>

namespace app::methods::System_Data::ExpressionParser {
    IL2CPP_REGISTER_METHOD(0x01F5A8B0, void, __ctor, (app::ExpressionParser * this_ptr, app::DataTable * table));
    IL2CPP_REGISTER_METHOD(0x01F5A980, void, LoadExpression, (app::ExpressionParser * this_ptr, app::String * data));
    IL2CPP_REGISTER_METHOD(0x01F5AA90, void, StartScan, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5AC30, app::ExpressionNode *, Parse, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0473ACF0, ExpressionParser_Parse__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5C890, app::ExpressionNode *, ParseAggregateArgument, (app::ExpressionParser * this_ptr, app::FunctionId__Enum aggregate));
    IL2CPP_REGISTER_METHODINFO(0x0473AF08, ExpressionParser_ParseAggregateArgument__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5CCB0, app::ExpressionNode *, NodePop, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5CD00, app::ExpressionNode *, NodePeek, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5CD50, void, NodePush, (app::ExpressionParser * this_ptr, app::ExpressionNode * node));
    IL2CPP_REGISTER_METHODINFO(0x047506C8, ExpressionParser_NodePush__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5CE60, void, BuildExpression, (app::ExpressionParser * this_ptr, int32_t pri));
    IL2CPP_REGISTER_METHODINFO(0x04737560, ExpressionParser_BuildExpression__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5D470, void, CheckToken, (app::ExpressionParser * this_ptr, app::Tokens__Enum token));
    IL2CPP_REGISTER_METHODINFO(0x04766510, ExpressionParser_CheckToken__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5D520, app::Tokens__Enum, Scan, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047399F8, ExpressionParser_Scan__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5DAA0, void, ScanNumeric, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5DD10, void, ScanName_1, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5DD80, void, ScanName_2, (app::ExpressionParser * this_ptr, uint16_t ch_end, uint16_t esc, app::String * chars_to_escape));
    IL2CPP_REGISTER_METHODINFO(0x04765918, ExpressionParser_ScanName_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5DF50, void, ScanDate, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047197C8, ExpressionParser_ScanDate__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ScanBinaryConstant, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5E120, void, ScanReserved, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5E470, void, ScanString, (app::ExpressionParser * this_ptr, uint16_t escape));
    IL2CPP_REGISTER_METHODINFO(0x0471D0B0, ExpressionParser_ScanString__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5E5F0, void, ScanToken, (app::ExpressionParser * this_ptr, app::Tokens__Enum token));
    IL2CPP_REGISTER_METHOD(0x01F5E620, void, ScanWhite, (app::ExpressionParser * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5E680, bool, IsWhiteSpace, (app::ExpressionParser * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x01F5E690, bool, IsAlphaNumeric, (app::ExpressionParser * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x01F5E730, bool, IsDigit, (app::ExpressionParser * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x01F5E780, bool, IsAlpha, (app::ExpressionParser * this_ptr, uint16_t ch));
    IL2CPP_REGISTER_METHOD(0x01F5E800, void, __cctor, ());
}
