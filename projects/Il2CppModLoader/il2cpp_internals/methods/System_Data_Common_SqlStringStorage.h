#include <interception_macros.h>

namespace app::methods::System_Data_Common::SqlStringStorage {
IL2CPP_REGISTER_METHOD(0x0285FDF0, void, __ctor, (app::SqlStringStorage * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0285FF80, Object *, Aggregate, (app::SqlStringStorage * this_ptr, app::Int32__Array * record_nos, app::AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04743A68, SqlStringStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02860370, int32_t, Compare_1, (app::SqlStringStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x028604C0, int32_t, Compare_2, (app::SqlStringStorage * this_ptr, app::SqlString value_no1, app::SqlString value_no2));
IL2CPP_REGISTER_METHOD(0x02860550, int32_t, CompareValueTo, (app::SqlStringStorage * this_ptr, int32_t record_no, app::Object * value));
IL2CPP_REGISTER_METHOD(0x028606E0, Object *, ConvertValue, (app::SqlStringStorage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x028607B0, void, Copy, (app::SqlStringStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x02860830, Object *, Get, (app::SqlStringStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x02860900, int32_t, GetStringLength, (app::SqlStringStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x028609E0, bool, IsNull, (app::SqlStringStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x02860A20, void, Set, (app::SqlStringStorage * this_ptr, int32_t record, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02860A90, void, SetCapacity, (app::SqlStringStorage * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02860B90, Object *, ConvertXmlToObject, (app::SqlStringStorage * this_ptr, app::String * s));
IL2CPP_REGISTER_METHOD(0x02860F00, String *, ConvertObjectToXml, (app::SqlStringStorage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02861260, Object *, GetEmptyStorage, (app::SqlStringStorage * this_ptr, int32_t record_count));
IL2CPP_REGISTER_METHOD(0x028612E0, void, CopyValue, (app::SqlStringStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index));
IL2CPP_REGISTER_METHOD(0x02861490, void, SetStorage, (app::SqlStringStorage * this_ptr, app::Object * store, app::BitArray * nullbits));
}
