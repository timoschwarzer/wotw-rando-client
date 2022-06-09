#include <interception_macros.h>

namespace app::methods::System_Globalization::SortKey {
    IL2CPP_REGISTER_METHOD(0x01DEBF40, int32_t, Compare, (app::SortKey * sortkey1, app::SortKey * sortkey2));
    IL2CPP_REGISTER_METHODINFO(0x0471FDB8, SortKey_Compare__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DEC160, void, __ctor_1, (app::SortKey * this_ptr, int32_t lcid, app::String * source, app::CompareOptions__Enum opt));
    IL2CPP_REGISTER_METHOD(0x01DEC170, void, __ctor_2, (app::SortKey * this_ptr, int32_t lcid, app::String * source, app::Byte__Array * buffer, app::CompareOptions__Enum opt, int32_t lv1_length, int32_t lv2_length, int32_t lv3_length, int32_t kana_small_length, int32_t mark_type_length, int32_t katakana_length, int32_t kana_width_length, int32_t ident_length));
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_OriginalString, (app::SortKey * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Byte__Array *, get_KeyData, (app::SortKey * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEC190, bool, Equals, (app::SortKey * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01DEC290, int32_t, GetHashCode, (app::SortKey * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEC320, app::String *, ToString, (app::SortKey * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01DEC600, void, __ctor_3, (app::SortKey * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477CA18, SortKey__ctor_2__MethodInfo);
}
