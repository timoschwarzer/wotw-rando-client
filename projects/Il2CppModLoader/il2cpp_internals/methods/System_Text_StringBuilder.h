#include <interception_macros.h>

namespace app::methods::System_Text::StringBuilder {
    IL2CPP_REGISTER_METHOD(0x0245CF10, void, __ctor_1, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0245CF20, void, __ctor_2, (app::StringBuilder * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0245CFF0, void, __ctor_3, (app::StringBuilder * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x0245D030, void, __ctor_4, (app::StringBuilder * this_ptr, app::String * value, int32_t capacity));
    IL2CPP_REGISTER_METHOD(0x0245D070, void, __ctor_5, (app::StringBuilder * this_ptr, app::String * value, int32_t start_index, int32_t length, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x04763178, StringBuilder__ctor_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245D340, void, __ctor_6, (app::StringBuilder * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x0477F470, StringBuilder__ctor_5__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245D6E0, void, ISerializable_GetObjectData, (app::StringBuilder * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
    IL2CPP_REGISTER_METHODINFO(0x0477A780, StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245D820, int32_t, get_Capacity, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0245D840, void, set_Capacity, (app::StringBuilder * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04707B48, StringBuilder_set_Capacity__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_MaxCapacity, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0245D9F0, app::String *, ToString_1, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04761148, StringBuilder_ToString__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245DB80, app::String *, ToString_2, (app::StringBuilder * this_ptr, int32_t start_index, int32_t length));
    IL2CPP_REGISTER_METHODINFO(0x0478CD48, StringBuilder_ToString_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245DE80, app::StringBuilder *, Clear, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01ED6AA0, int32_t, get_Length, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0245DEA0, void, set_Length, (app::StringBuilder * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHODINFO(0x04759D88, StringBuilder_set_Length__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245E090, uint16_t, get_Chars, (app::StringBuilder * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04754100, StringBuilder_get_Chars__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245E1C0, void, set_Chars, (app::StringBuilder * this_ptr, int32_t index, uint16_t value));
    IL2CPP_REGISTER_METHODINFO(0x04732840, StringBuilder_set_Chars__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245E330, app::StringBuilder *, Append_1, (app::StringBuilder * this_ptr, uint16_t value, int32_t repeat_count));
    IL2CPP_REGISTER_METHODINFO(0x047333A8, StringBuilder_Append__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245E480, app::StringBuilder *, Append_2, (app::StringBuilder * this_ptr, app::Char__Array * value, int32_t start_index, int32_t char_count));
    IL2CPP_REGISTER_METHODINFO(0x04755C10, StringBuilder_Append_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245E6C0, app::StringBuilder *, Append_3, (app::StringBuilder * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x0245E7E0, void, AppendHelper, (app::StringBuilder * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x0245E810, app::StringBuilder *, Append_4, (app::StringBuilder * this_ptr, app::String * value, int32_t start_index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04711120, StringBuilder_Append_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245EA30, app::StringBuilder *, AppendLine_1, (app::StringBuilder * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0245EA60, app::StringBuilder *, AppendLine_2, (app::StringBuilder * this_ptr, app::String * value));
    IL2CPP_REGISTER_METHOD(0x0245EA90, app::StringBuilder *, Insert_1, (app::StringBuilder * this_ptr, int32_t index, app::String * value, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0470A9D8, StringBuilder_Insert__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245EC90, app::StringBuilder *, Remove_1, (app::StringBuilder * this_ptr, int32_t start_index, int32_t length));
    IL2CPP_REGISTER_METHODINFO(0x047959C8, StringBuilder_Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245EE60, app::StringBuilder *, Append_5, (app::StringBuilder * this_ptr, uint8_t value));
    IL2CPP_REGISTER_METHOD(0x0245EF40, app::StringBuilder *, Append_6, (app::StringBuilder * this_ptr, uint16_t value));
    IL2CPP_REGISTER_METHOD(0x0245EFC0, app::StringBuilder *, Append_7, (app::StringBuilder * this_ptr, int32_t value));
    IL2CPP_REGISTER_METHOD(0x0245F0A0, app::StringBuilder *, Append_8, (app::StringBuilder * this_ptr, int64_t value));
    IL2CPP_REGISTER_METHOD(0x0245F180, app::StringBuilder *, Append_9, (app::StringBuilder * this_ptr, float value));
    IL2CPP_REGISTER_METHOD(0x0245F260, app::StringBuilder *, Append_10, (app::StringBuilder * this_ptr, uint32_t value));
    IL2CPP_REGISTER_METHOD(0x0245F340, app::StringBuilder *, Append_11, (app::StringBuilder * this_ptr, uint64_t value));
    IL2CPP_REGISTER_METHOD(0x0245F420, app::StringBuilder *, Append_12, (app::StringBuilder * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0245F460, app::StringBuilder *, Append_13, (app::StringBuilder * this_ptr, app::Char__Array * value));
    IL2CPP_REGISTER_METHOD(0x0245F4B0, app::StringBuilder *, Insert_2, (app::StringBuilder * this_ptr, int32_t index, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x04711CB0, StringBuilder_Insert_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245F5B0, app::StringBuilder *, Insert_3, (app::StringBuilder * this_ptr, int32_t index, uint16_t value));
    IL2CPP_REGISTER_METHOD(0x0245F5E0, app::StringBuilder *, AppendFormat_1, (app::StringBuilder * this_ptr, app::String * format, app::Object * arg0));
    IL2CPP_REGISTER_METHOD(0x0245F650, app::StringBuilder *, AppendFormat_2, (app::StringBuilder * this_ptr, app::String * format, app::Object * arg0, app::Object * arg1));
    IL2CPP_REGISTER_METHOD(0x0245F6D0, app::StringBuilder *, AppendFormat_3, (app::StringBuilder * this_ptr, app::String * format, app::Object * arg0, app::Object * arg1, app::Object * arg2));
    IL2CPP_REGISTER_METHOD(0x0245F760, app::StringBuilder *, AppendFormat_4, (app::StringBuilder * this_ptr, app::String * format, app::Object__Array * args));
    IL2CPP_REGISTER_METHODINFO(0x04723A78, StringBuilder_AppendFormat_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245F8F0, app::StringBuilder *, AppendFormat_5, (app::StringBuilder * this_ptr, app::IFormatProvider * provider, app::String * format, app::Object * arg0));
    IL2CPP_REGISTER_METHOD(0x0245F970, app::StringBuilder *, AppendFormat_6, (app::StringBuilder * this_ptr, app::IFormatProvider * provider, app::String * format, app::Object * arg0, app::Object * arg1));
    IL2CPP_REGISTER_METHOD(0x0245FA00, void, FormatError, ());
    IL2CPP_REGISTER_METHODINFO(0x04749AC8, StringBuilder_FormatError__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0245FA70, app::StringBuilder *, AppendFormatHelper, (app::StringBuilder * this_ptr, app::IFormatProvider * provider, app::String * format, app::ParamsArray args));
    IL2CPP_REGISTER_METHODINFO(0x04731160, StringBuilder_AppendFormatHelper__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02460170, app::StringBuilder *, Replace_1, (app::StringBuilder * this_ptr, app::String * old_value, app::String * new_value));
    IL2CPP_REGISTER_METHOD(0x024601A0, app::StringBuilder *, Replace_2, (app::StringBuilder * this_ptr, app::String * old_value, app::String * new_value, int32_t start_index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04733EF8, StringBuilder_Replace_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02460610, app::StringBuilder *, Append_14, (app::StringBuilder * this_ptr, uint16_t * value, int32_t value_count));
    IL2CPP_REGISTER_METHODINFO(0x04761038, StringBuilder_Append_13__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x024607A0, void, Insert_4, (app::StringBuilder * this_ptr, int32_t index, uint16_t * value, int32_t value_count));
    IL2CPP_REGISTER_METHODINFO(0x04777910, StringBuilder_Insert_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x024608F0, void, ReplaceAllInChunk, (app::StringBuilder * this_ptr, app::Int32__Array * replacements, int32_t replacements_count, app::StringBuilder * source_chunk, int32_t remove_count, app::String * value));
    IL2CPP_REGISTER_METHOD(0x02460B50, bool, StartsWith, (app::StringBuilder * this_ptr, app::StringBuilder * chunk, int32_t index_in_chunk, int32_t count, app::String * value));
    IL2CPP_REGISTER_METHOD(0x02460C50, void, ReplaceInPlaceAtChunk, (app::StringBuilder * this_ptr, app::StringBuilder * * chunk, int32_t * index_in_chunk, uint16_t * value, int32_t count));
    IL2CPP_REGISTER_METHOD(0x02460DF0, void, ThreadSafeCopy_1, (uint16_t * source_ptr, app::Char__Array * destination, int32_t destination_index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x0475CD88, StringBuilder_ThreadSafeCopy__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02460F20, void, ThreadSafeCopy_2, (app::Char__Array * source, int32_t source_index, app::Char__Array * destination, int32_t destination_index, int32_t count));
    IL2CPP_REGISTER_METHODINFO(0x04782B70, StringBuilder_ThreadSafeCopy_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02461060, app::StringBuilder *, FindChunkForIndex, (app::StringBuilder * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x024610A0, app::StringBuilder *, Next, (app::StringBuilder * this_ptr, app::StringBuilder * chunk));
    IL2CPP_REGISTER_METHOD(0x02461100, void, ExpandByABlock, (app::StringBuilder * this_ptr, int32_t min_block_char_count));
    IL2CPP_REGISTER_METHODINFO(0x04755B20, StringBuilder_ExpandByABlock__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02461350, void, __ctor_7, (app::StringBuilder * this_ptr, app::StringBuilder * from));
    IL2CPP_REGISTER_METHOD(0x02461390, void, MakeRoom, (app::StringBuilder * this_ptr, int32_t index, int32_t count, app::StringBuilder * * chunk, int32_t * index_in_chunk, bool done_move_following_chars));
    IL2CPP_REGISTER_METHODINFO(0x04750CB0, StringBuilder_MakeRoom__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x024618B0, void, __ctor_8, (app::StringBuilder * this_ptr, int32_t size, int32_t max_capacity, app::StringBuilder * previous_block));
    IL2CPP_REGISTER_METHOD(0x02461970, void, Remove_2, (app::StringBuilder * this_ptr, int32_t start_index, int32_t count, app::StringBuilder * * chunk, int32_t * index_in_chunk));
}
