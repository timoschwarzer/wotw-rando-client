#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexInterpreter {
IL2CPP_REGISTER_METHOD(0x02593420, void, __ctor, (RegexInterpreter * __this, RegexCode * code, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x02593480, void, InitTrackCount, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x025934B0, void, Advance, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x025934C0, void, Advance, (RegexInterpreter * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02593540, void, Goto, (RegexInterpreter * __this, int32_t newpos));
IL2CPP_REGISTER_METHOD(0x002FB980, void, Textto, (RegexInterpreter * __this, int32_t newpos));
IL2CPP_REGISTER_METHOD(0x025935D0, void, Trackto, (RegexInterpreter * __this, int32_t newpos));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, Textstart, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, Textpos, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x025935F0, int32_t, Trackpos, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593610, void, TrackPush, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593660, void, TrackPush, (RegexInterpreter * __this, int32_t I1));
IL2CPP_REGISTER_METHOD(0x025936F0, void, TrackPush, (RegexInterpreter * __this, int32_t I1, int32_t I2));
IL2CPP_REGISTER_METHOD(0x025937B0, void, TrackPush, (RegexInterpreter * __this, int32_t I1, int32_t I2, int32_t I3));
IL2CPP_REGISTER_METHOD(0x025938C0, void, TrackPush2, (RegexInterpreter * __this, int32_t I1));
IL2CPP_REGISTER_METHOD(0x02593950, void, TrackPush2, (RegexInterpreter * __this, int32_t I1, int32_t I2));
IL2CPP_REGISTER_METHOD(0x02593A20, void, Backtrack, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593B30, void, SetOperator, (RegexInterpreter * __this, int32_t op));
IL2CPP_REGISTER_METHOD(0x00E84200, void, TrackPop, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593B60, void, TrackPop, (RegexInterpreter * __this, int32_t framesize));
IL2CPP_REGISTER_METHOD(0x02593B70, int32_t, TrackPeek, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593BB0, int32_t, TrackPeek, (RegexInterpreter * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02593BF0, void, StackPush, (RegexInterpreter * __this, int32_t I1));
IL2CPP_REGISTER_METHOD(0x02593C40, void, StackPush, (RegexInterpreter * __this, int32_t I1, int32_t I2));
IL2CPP_REGISTER_METHOD(0x02593CC0, void, StackPop, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593CD0, void, StackPop, (RegexInterpreter * __this, int32_t framesize));
IL2CPP_REGISTER_METHOD(0x02593CE0, int32_t, StackPeek, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593D20, int32_t, StackPeek, (RegexInterpreter * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, Operator, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593D60, int32_t, Operand, (RegexInterpreter * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02593DB0, int32_t, Leftchars, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593DC0, int32_t, Rightchars, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593DD0, int32_t, Bump, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593DF0, int32_t, Forwardchars, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593E10, uint16_t, Forwardcharnext, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02593F20, bool, Stringmatch, (RegexInterpreter * __this, String * str));
IL2CPP_REGISTER_METHOD(0x02594110, bool, Refmatch, (RegexInterpreter * __this, int32_t index, int32_t len));
IL2CPP_REGISTER_METHOD(0x02594310, void, Backwardnext, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02594330, uint16_t, CharAt, (RegexInterpreter * __this, int32_t j));
IL2CPP_REGISTER_METHOD(0x02594350, bool, FindFirstChar, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHOD(0x02594730, void, Go, (RegexInterpreter * __this));
IL2CPP_REGISTER_METHODINFO(0x04779510, RegexInterpreter_Go__MethodInfo);
}
