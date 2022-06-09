#include <interception_macros.h>

namespace app::methods::System_Data_Common::SqlDecimalStorage {
IL2CPP_REGISTER_METHOD(0x02851E00, void, __ctor, (app::SqlDecimalStorage * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x02851F90, Object *, Aggregate, (app::SqlDecimalStorage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x04752CC8, SqlDecimalStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02852E30, int32_t, Compare, (app::SqlDecimalStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x02852EB0, int32_t, CompareValueTo, (app::SqlDecimalStorage * this_ptr, int32_t record_no, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02852FB0, Object *, ConvertValue, (app::SqlDecimalStorage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02853080, void, Copy, (app::SqlDecimalStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x02853100, Object *, Get, (app::SqlDecimalStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x028531D0, bool, IsNull, (app::SqlDecimalStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x02853220, void, Set, (app::SqlDecimalStorage * this_ptr, int32_t record, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02853290, void, SetCapacity, (app::SqlDecimalStorage * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x02853390, Object *, ConvertXmlToObject, (app::SqlDecimalStorage * this_ptr, app::String * s));
IL2CPP_REGISTER_METHOD(0x028536F0, String *, ConvertObjectToXml, (app::SqlDecimalStorage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02853A50, Object *, GetEmptyStorage, (app::SqlDecimalStorage * this_ptr, int32_t record_count));
IL2CPP_REGISTER_METHOD(0x02853AD0, void, CopyValue, (app::SqlDecimalStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index));
IL2CPP_REGISTER_METHOD(0x02853C70, void, SetStorage, (app::SqlDecimalStorage * this_ptr, app::Object * store, app::BitArray * nullbits));
}
