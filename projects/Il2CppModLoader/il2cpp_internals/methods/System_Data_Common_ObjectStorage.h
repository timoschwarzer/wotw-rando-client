#include <interception_macros.h>

namespace app::methods::System_Data_Common::ObjectStorage {
IL2CPP_REGISTER_METHOD(0x0216A970, void, __ctor, (app::ObjectStorage * this_ptr, app::DataColumn * column, app::Type * type));
IL2CPP_REGISTER_METHOD(0x0216AB50, Object *, Aggregate, (app::ObjectStorage * this_ptr, app::Int32__Array * records, app::AggregateType__Enum kind));
IL2CPP_REGISTER_METHODINFO(0x0470A7E8, ObjectStorage_Aggregate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216ABA0, int32_t, Compare, (app::ObjectStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x0216AD20, int32_t, CompareValueTo, (app::ObjectStorage * this_ptr, int32_t record_no1, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0216AEF0, int32_t, CompareTo, (app::ObjectStorage * this_ptr, app::Object * value_no1, app::Object * value_no2));
IL2CPP_REGISTER_METHOD(0x0216B080, int32_t, CompareWithFamilies, (app::ObjectStorage * this_ptr, app::Object * value_no1, app::Object * value_no2));
IL2CPP_REGISTER_METHOD(0x0216B500, void, Copy, (app::ObjectStorage * this_ptr, int32_t record_no1, int32_t record_no2));
IL2CPP_REGISTER_METHOD(0x0216B5A0, Object *, Get, (app::ObjectStorage * this_ptr, int32_t record_no));
IL2CPP_REGISTER_METHOD(0x0216B5E0, ObjectStorage_Families__Enum, GetFamily, (app::ObjectStorage * this_ptr, app::Type * data_type));
IL2CPP_REGISTER_METHOD(0x0216B780, bool, IsNull, (app::ObjectStorage * this_ptr, int32_t record));
IL2CPP_REGISTER_METHOD(0x0216B7C0, void, Set, (app::ObjectStorage * this_ptr, int32_t record_no, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04777D78, ObjectStorage_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216C490, void, SetCapacity, (app::ObjectStorage * this_ptr, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x0216C590, Object *, ConvertXmlToObject_1, (app::ObjectStorage * this_ptr, app::String * s));
IL2CPP_REGISTER_METHOD(0x0216CC10, Object *, ConvertXmlToObject_2, (app::ObjectStorage * this_ptr, app::XmlReader * xml_reader, app::XmlRootAttribute * xml_attrib));
IL2CPP_REGISTER_METHODINFO(0x04716CE8, ObjectStorage_ConvertXmlToObject_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216D240, String *, ConvertObjectToXml_1, (app::ObjectStorage * this_ptr, app::Object * value));
IL2CPP_REGISTER_METHOD(0x0216D8B0, void, ConvertObjectToXml_2, (app::ObjectStorage * this_ptr, app::Object * value, app::XmlWriter * xml_writer, app::XmlRootAttribute * xml_attrib));
IL2CPP_REGISTER_METHOD(0x0216DA20, Object *, GetEmptyStorage, (app::ObjectStorage * this_ptr, int32_t record_count));
IL2CPP_REGISTER_METHOD(0x0216DAA0, void, CopyValue, (app::ObjectStorage * this_ptr, int32_t record, app::Object * store, app::BitArray * nullbits, int32_t store_index));
IL2CPP_REGISTER_METHOD(0x0216DDC0, void, SetStorage, (app::ObjectStorage * this_ptr, app::Object * store, app::BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x0216E020, void, VerifyIDynamicMetaObjectProvider, (app::Type * type));
IL2CPP_REGISTER_METHODINFO(0x0477D340, ObjectStorage_VerifyIDynamicMetaObjectProvider__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0216E190, XmlSerializer *, GetXmlSerializer_1, (app::Type * type));
IL2CPP_REGISTER_METHOD(0x0216E270, XmlSerializer *, GetXmlSerializer_2, (app::Type * type, app::XmlRootAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x0216EBC0, void, __cctor, ());
}
