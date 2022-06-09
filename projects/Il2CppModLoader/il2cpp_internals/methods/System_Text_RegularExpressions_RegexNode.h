#include <interception_macros.h>

namespace app::methods::System_Text_RegularExpressions::RegexNode {
IL2CPP_REGISTER_METHOD(0x02595F10, void, __ctor_1, (app::RegexNode * this_ptr, int32_t type, app::RegexOptions__Enum options));
IL2CPP_REGISTER_METHOD(0x02595F20, void, __ctor_2, (app::RegexNode * this_ptr, int32_t type, app::RegexOptions__Enum options, uint16_t ch));
IL2CPP_REGISTER_METHOD(0x02595F30, void, __ctor_3, (app::RegexNode * this_ptr, int32_t type, app::RegexOptions__Enum options, app::String * str));
IL2CPP_REGISTER_METHOD(0x02595F40, void, __ctor_4, (app::RegexNode * this_ptr, int32_t type, app::RegexOptions__Enum options, int32_t m));
IL2CPP_REGISTER_METHOD(0x02595F50, void, __ctor_5, (app::RegexNode * this_ptr, int32_t type, app::RegexOptions__Enum options, int32_t m, int32_t n));
IL2CPP_REGISTER_METHOD(0x02595F70, bool, UseOptionR, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x02595F80, RegexNode *, ReverseLeft, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x02596060, void, MakeRep, (app::RegexNode * this_ptr, int32_t type, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x02596070, RegexNode *, Reduce, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x02596130, RegexNode *, StripEnation, (app::RegexNode * this_ptr, int32_t empty_type));
IL2CPP_REGISTER_METHOD(0x025962C0, RegexNode *, ReduceGroup, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x025963A0, RegexNode *, ReduceRep, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x02596650, RegexNode *, ReduceSet, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x025969D0, RegexNode *, ReduceAlternation, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x02597040, RegexNode *, ReduceConcatenation, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x025974E0, RegexNode *, MakeQuantifier, (app::RegexNode * this_ptr, bool lazy, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x02597790, void, AddChild, (app::RegexNode * this_ptr, app::RegexNode * new_child));
IL2CPP_REGISTER_METHOD(0x02597A10, RegexNode *, Child, (app::RegexNode * this_ptr, int32_t i));
IL2CPP_REGISTER_METHOD(0x02597AC0, int32_t, ChildCount, (app::RegexNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, Type, (app::RegexNode * this_ptr));
}
