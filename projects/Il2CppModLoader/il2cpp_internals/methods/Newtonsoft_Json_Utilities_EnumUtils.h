#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Utilities::EnumUtils {
    IL2CPP_REGISTER_METHOD(0x01C0F590, app::EnumInfo *, InitializeValuesAndNames, (app::StructMultiKey_2_System_Type_Newtonsoft_Json_Serialization_NamingStrategy_ key));
    IL2CPP_REGISTER_METHODINFO(0x047370B0, EnumUtils_InitializeValuesAndNames__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C0FBF0, bool, TryToString, (app::Type * enum_type, app::Object * value, app::NamingStrategy * naming_strategy, app::String * * name));
    IL2CPP_REGISTER_METHOD(0x01C0FE80, app::String *, InternalFlagsFormat, (app::EnumInfo * entry, uint64_t result));
    IL2CPP_REGISTER_METHOD(0x01C101B0, app::EnumInfo *, GetEnumValuesAndNames, (app::Type * enum_type));
    IL2CPP_REGISTER_METHOD(0x01C102B0, uint64_t, ToUInt64, (app::Object * value));
    IL2CPP_REGISTER_METHODINFO(0x047384D0, EnumUtils_ToUInt64__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C10630, app::Object *, ParseEnum, (app::Type * enum_type, app::NamingStrategy * naming_strategy, app::String * value, bool disallow_number));
    IL2CPP_REGISTER_METHODINFO(0x04701598, EnumUtils_ParseEnum__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01C11010, app::Nullable_1_Int32_, MatchName, (app::String * value, app::String__Array * enum_names, app::String__Array * resolved_names, int32_t value_index, int32_t value_substring_length, app::StringComparison__Enum comparison));
    IL2CPP_REGISTER_METHOD(0x01C11140, app::Nullable_1_Int32_, FindIndexByName, (app::String__Array * enum_names, app::String * value, int32_t value_index, int32_t value_substring_length, app::StringComparison__Enum comparison));
    IL2CPP_REGISTER_METHOD(0x01C11280, void, __cctor, ());
}
