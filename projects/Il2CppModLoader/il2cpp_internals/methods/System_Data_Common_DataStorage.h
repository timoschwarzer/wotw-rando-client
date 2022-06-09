#include <interception_macros.h>

namespace app::methods::System_Data_Common::DataStorage {
IL2CPP_REGISTER_METHOD(0x02159C70, void, __ctor_1, (app::DataStorage * this_ptr, app::DataColumn * column, app::Type * type, app::Object * default_value, app::StorageType__Enum storage_type));
IL2CPP_REGISTER_METHOD(0x02159D70, void, __ctor_2, (app::DataStorage * this_ptr, app::DataColumn * column, app::Type * type, app::Object * default_value, app::Object * null_value, app::StorageType__Enum storage_type));
IL2CPP_REGISTER_METHOD(0x02159DA0, void, __ctor_3, (app::DataStorage * this_ptr, app::DataColumn * column, app::Type * type, app::Object * default_value, app::Object * null_value, bool is_i_cloneable, app::StorageType__Enum storage_type));
IL2CPP_REGISTER_METHOD(0x02159F70, DataSetDateTime__Enum, get_DateTimeMode, (app::DataStorage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02159F90, IFormatProvider *, get_FormatProvider, (app::DataStorage * this_ptr));
IL2CPP_REGISTER_METHOD(0x02159FB0, Object *, Aggregate, (app::DataStorage * this_ptr, app::Int32__Array * record_nos, app::AggregateType__Enum kind));
IL2CPP_REGISTER_METHOD(0x0215A0C0, Object *, AggregateCount, (app::DataStorage * this_ptr, app::Int32__Array * record_nos));
IL2CPP_REGISTER_METHOD(0x0215A1C0, int32_t, CompareBits, (app::DataStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x00502220, Object *, ConvertValue, (app::DataStorage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0215A240, void, CopyBits, (app::DataStorage * this_ptr, int32_t src_record_no, int32_t dst_record_no));
IL2CPP_REGISTER_METHOD(0x0215A290, Object *, GetBits, (app::DataStorage * this_ptr, int32_t record_no));
IL2CPP_REGISTER_METHOD(0x0215A2D0, int32_t, GetStringLength, (app::DataStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x0215A2E0, bool, HasValue, (app::DataStorage * this_ptr, int32_t record_no));
IL2CPP_REGISTER_METHOD(0x0215A310, bool, IsNull, (app::DataStorage * this_ptr, int32_t record_no));
IL2CPP_REGISTER_METHOD(0x0215A330, void, SetNullBit, (app::DataStorage * this_ptr, int32_t record_no, bool flag));
IL2CPP_REGISTER_METHOD(0x0215A350, void, SetCapacity, (app::DataStorage * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0215A4C0, Object *, ConvertXmlToObject, (app::DataStorage * this_ptr, app::XmlReader * xml_reader, app::XmlRootAttribute * xml_attrib));
IL2CPP_REGISTER_METHOD(0x0215A510, void, ConvertObjectToXml, (app::DataStorage * this_ptr, app::Object * value, app::XmlWriter * xml_writer, app::XmlRootAttribute * xml_attrib));
IL2CPP_REGISTER_METHOD(0x0215A550, DataStorage *, CreateStorage, (app::DataColumn * column, app::Type * data_type, app::StorageType__Enum type_code));
IL2CPP_REGISTER_METHODINFO(0x04777F90, DataStorage_CreateStorage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0215E400, StorageType__Enum, GetStorageType, (app::Type * data_type));
IL2CPP_REGISTER_METHOD(0x0215E5B0, Type *, GetTypeStorage, (app::StorageType__Enum storage_type));
IL2CPP_REGISTER_METHOD(0x0215E680, bool, IsTypeCustomType_1, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0215E730, bool, IsTypeCustomType_2, (app::StorageType__Enum type_code));
IL2CPP_REGISTER_METHOD(0x0215E740, bool, IsSqlType_1, (app::StorageType__Enum storage_type));
IL2CPP_REGISTER_METHOD(0x0215E750, bool, IsSqlType_2, (app::Type * data_type));
IL2CPP_REGISTER_METHOD(0x0215E8C0, bool, DetermineIfValueType, (app::StorageType__Enum type_code, app::Type * data_type));
IL2CPP_REGISTER_METHOD(0x0215E950, void, ImplementsInterfaces, (app::StorageType__Enum type_code, app::Type * data_type, app::bool * sql_type, app::bool * nullable, app::bool * xml_serializable, app::bool * change_tracking, app::bool * revertible_change_tracking));
IL2CPP_REGISTER_METHOD(0x0215EAF0, Tuple_4_Boolean_Boolean_Boolean_Boolean_ *, InspectTypeForInterfaces, (app::Type * data_type));
IL2CPP_REGISTER_METHODINFO(0x0471E908, DataStorage_InspectTypeForInterfaces__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0215ED60, bool, ImplementsINullableValue, (app::StorageType__Enum type_code, app::Type * data_type));
IL2CPP_REGISTER_METHOD(0x0215EE60, bool, IsObjectNull, (app::Object * value));
IL2CPP_REGISTER_METHOD(0x0215EF40, bool, IsObjectSqlNull, (app::Object * value));
IL2CPP_REGISTER_METHOD(0x01F19530, Object *, GetEmptyStorageInternal, (app::DataStorage * this_ptr, int32_t record_count));
IL2CPP_REGISTER_METHOD(0x0215EFE0, void, CopyValueInternal, (app::DataStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index));
IL2CPP_REGISTER_METHOD(0x0215F000, void, SetStorageInternal, (app::DataStorage * this_ptr, app::Object * store, app::BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetNullStorage, (app::DataStorage * this_ptr, app::BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x0215F020, Type *, GetType, (app::String * value));
IL2CPP_REGISTER_METHOD(0x0215F180, String *, GetQualifiedName, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0215F240, void, __cctor, ());
}
