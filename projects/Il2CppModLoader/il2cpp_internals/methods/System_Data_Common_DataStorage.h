#include <interception_macros.h>

namespace app::methods::System::Data::Common::DataStorage {
IL2CPP_REGISTER_METHOD(0x02159C70, void, __ctor, (DataStorage * __this, DataColumn * column, Type * type, Object * defaultValue, StorageType__Enum storageType));
IL2CPP_REGISTER_METHOD(0x02159D70, void, __ctor, (DataStorage * __this, DataColumn * column, Type * type, Object * defaultValue, Object * nullValue, StorageType__Enum storageType));
IL2CPP_REGISTER_METHOD(0x02159DA0, void, __ctor, (DataStorage * __this, DataColumn * column, Type * type, Object * defaultValue, Object * nullValue, bool isICloneable, StorageType__Enum storageType));
IL2CPP_REGISTER_METHOD(0x02159F70, DataSetDateTime__Enum, get_DateTimeMode, (DataStorage * __this));
IL2CPP_REGISTER_METHOD(0x02159F90, IFormatProvider *, get_FormatProvider, (DataStorage * __this));
IL2CPP_REGISTER_METHOD(0x02159FB0, Object *, Aggregate, (DataStorage * __this, Int32__Array * recordNos, AggregateType__Enum kind));
IL2CPP_REGISTER_METHOD(0x0215A0C0, Object *, AggregateCount, (DataStorage * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHOD(0x0215A1C0, int32_t, CompareBits, (DataStorage * __this, int32_t recordNo1, int32_t recordNo2));
IL2CPP_REGISTER_METHOD(0x00502220, Object *, ConvertValue, (DataStorage * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0215A240, void, CopyBits, (DataStorage * __this, int32_t srcRecordNo, int32_t dstRecordNo));
IL2CPP_REGISTER_METHOD(0x0215A290, Object *, GetBits, (DataStorage * __this, int32_t recordNo));
IL2CPP_REGISTER_METHOD(0x0215A2D0, int32_t, GetStringLength, (DataStorage * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0215A2E0, bool, HasValue, (DataStorage * __this, int32_t recordNo));
IL2CPP_REGISTER_METHOD(0x0215A310, bool, IsNull, (DataStorage * __this, int32_t recordNo));
IL2CPP_REGISTER_METHOD(0x0215A330, void, SetNullBit, (DataStorage * __this, int32_t recordNo, bool flag));
IL2CPP_REGISTER_METHOD(0x0215A350, void, SetCapacity, (DataStorage * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0215A4C0, Object *, ConvertXmlToObject, (DataStorage * __this, XmlReader * xmlReader, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x0215A510, void, ConvertObjectToXml, (DataStorage * __this, Object * value, XmlWriter * xmlWriter, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x0215A550, DataStorage *, CreateStorage, (DataColumn * column, Type * dataType, StorageType__Enum typeCode));
IL2CPP_REGISTER_METHODINFO(0x04777F90, DataStorage_CreateStorage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0215E400, StorageType__Enum, GetStorageType, (Type * dataType));
IL2CPP_REGISTER_METHOD(0x0215E5B0, Type *, GetTypeStorage, (StorageType__Enum storageType));
IL2CPP_REGISTER_METHOD(0x0215E680, bool, IsTypeCustomType, (Type * type));
IL2CPP_REGISTER_METHOD(0x0215E730, bool, IsTypeCustomType, (StorageType__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x0215E740, bool, IsSqlType, (StorageType__Enum storageType));
IL2CPP_REGISTER_METHOD(0x0215E750, bool, IsSqlType, (Type * dataType));
IL2CPP_REGISTER_METHOD(0x0215E8C0, bool, DetermineIfValueType, (StorageType__Enum typeCode, Type * dataType));
IL2CPP_REGISTER_METHOD(0x0215E950, void, ImplementsInterfaces, (StorageType__Enum typeCode, Type * dataType, bool * sqlType, bool * nullable, bool * xmlSerializable, bool * changeTracking, bool * revertibleChangeTracking));
IL2CPP_REGISTER_METHOD(0x0215EAF0, Tuple_4_Boolean_Boolean_Boolean_Boolean_ *, InspectTypeForInterfaces, (Type * dataType));
IL2CPP_REGISTER_METHODINFO(0x0471E908, DataStorage_InspectTypeForInterfaces__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0215ED60, bool, ImplementsINullableValue, (StorageType__Enum typeCode, Type * dataType));
IL2CPP_REGISTER_METHOD(0x0215EE60, bool, IsObjectNull, (Object * value));
IL2CPP_REGISTER_METHOD(0x0215EF40, bool, IsObjectSqlNull, (Object * value));
IL2CPP_REGISTER_METHOD(0x01F19530, Object *, GetEmptyStorageInternal, (DataStorage * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x0215EFE0, void, CopyValueInternal, (DataStorage * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x0215F000, void, SetStorageInternal, (DataStorage * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetNullStorage, (DataStorage * __this, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x0215F020, Type *, GetType, (String * value));
IL2CPP_REGISTER_METHOD(0x0215F180, String *, GetQualifiedName, (Type * type));
IL2CPP_REGISTER_METHOD(0x0215F240, void, __cctor, ());
}
