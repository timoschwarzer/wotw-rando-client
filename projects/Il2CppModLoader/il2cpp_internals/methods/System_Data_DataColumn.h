#include <interception_macros.h>

namespace app::methods::System::Data::DataColumn {
IL2CPP_REGISTER_METHOD(0x02392480, void, __ctor, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02392550, void, __ctor, (DataColumn * __this, String * columnName, Type * dataType));
IL2CPP_REGISTER_METHOD(0x02392580, void, __ctor, (DataColumn * __this, String * columnName, Type * dataType, String * expr, MappingType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04772F90, DataColumn__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02392890, void, UpdateColumnType, (DataColumn * __this, Type * type, StorageType__Enum typeCode));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_AllowDBNull, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02392AE0, void, set_AllowDBNull, (DataColumn * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02392CB0, bool, get_AutoIncrement, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02392CD0, void, set_AutoIncrement, (DataColumn * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0473F460, DataColumn_set_AutoIncrement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02392EC0, Object *, get_AutoIncrementCurrent, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02392F80, void, set_AutoIncrementCurrent, (DataColumn * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x023930E0, AutoIncrementValue *, get_AutoInc, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02393340, int64_t, get_AutoIncrementSeed, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02393360, void, set_AutoIncrementSeed, (DataColumn * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x02393490, int64_t, get_AutoIncrementStep, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023934C0, void, set_AutoIncrementStep, (DataColumn * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x023935F0, String *, get_Caption, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02393600, void, set_Caption, (DataColumn * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_ColumnName, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023936E0, void, set_ColumnName, (DataColumn * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047257C8, DataColumn_set_ColumnName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02393C40, String *, get_EncodedColumnName, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02393D00, IFormatProvider *, get_FormatProvider, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02393DC0, CultureInfo *, get_Locale, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x003FFBD0, int32_t, get_ObjectID, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x002FBD00, String *, get_Prefix, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02393E80, void, set_Prefix, (DataColumn * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0472A398, DataColumn_set_Prefix__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02394030, String *, GetColumnValueAsString, (DataColumn * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x02394170, bool, get_Computed, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, DataExpression *, get_DataExpression, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, Type *, get_DataType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02394180, void, set_DataType, (DataColumn * __this, Type * value));
IL2CPP_REGISTER_METHODINFO(0x04783150, DataColumn_set_DataType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FD490, DataSetDateTime__Enum, get_DateTimeMode, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02394A90, void, set_DateTimeMode, (DataColumn * __this, DataSetDateTime__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04706068, DataColumn_set_DateTimeMode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02394C20, Object *, get_DefaultValue, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02394DA0, void, set_DefaultValue, (DataColumn * __this, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0477DF78, DataColumn_set_DefaultValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E855A0, bool, get_DefaultValueIsNull, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395090, void, BindExpression, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023950C0, String *, get_Expression, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395150, void, set_Expression, (DataColumn * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x047877D0, DataColumn_set_Expression__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02395940, PropertyCollection *, get_ExtendedProperties, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395AB0, bool, get_HasData, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x00AB7980, bool, get_ImplementsINullable, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395AC0, bool, get_ImplementsIChangeTracking, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x019712A0, bool, get_ImplementsIRevertibleChangeTracking, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395AD0, bool, get_IsValueType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSqlType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395AF0, void, SetMaxLengthSimpleType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_MaxLength, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02395DF0, void, set_MaxLength, (DataColumn * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047999D8, DataColumn_set_MaxLength__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02396110, String *, get_Namespace, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023961C0, void, set_Namespace, (DataColumn * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0477D298, DataColumn_set_Namespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_Ordinal, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02396340, void, SetOrdinalInternal, (DataColumn * __this, int32_t ordinal));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ReadOnly, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023965A0, void, set_ReadOnly, (DataColumn * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04799DC0, DataColumn_set_ReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023966A0, Index *, get_SortIndex, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, DataTable *, get_Table, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023967B0, void, SetTable, (DataColumn * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x02396880, DataRow *, GetDataRow, (DataColumn * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x023968E0, Object *, get_Item, (DataColumn * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02396910, void, set_Item, (DataColumn * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04794760, DataColumn_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02396B20, void, InitializeRecord, (DataColumn * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02396B70, void, SetValue, (DataColumn * __this, int32_t record, Object * value));
IL2CPP_REGISTER_METHODINFO(0x0475AF08, DataColumn_SetValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02396CE0, void, FreeRecord, (DataColumn * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_Unique, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02396D10, void, set_Unique, (DataColumn * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0476EB60, DataColumn_set_Unique__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0069FA40, void, InternalUnique, (DataColumn * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00660430, String *, get_XmlDataType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x00660440, void, set_XmlDataType, (DataColumn * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBD40, SimpleType *, get_SimpleType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02397240, void, set_SimpleType, (DataColumn * __this, SimpleType * value));
IL2CPP_REGISTER_METHOD(0x00653FB0, MappingType__Enum, get_ColumnMapping, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02397290, void, set_ColumnMapping, (DataColumn * __this, MappingType__Enum value));
IL2CPP_REGISTER_METHODINFO(0x0478B038, DataColumn_set_ColumnMapping__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02397550, void, CheckColumnConstraint, (DataColumn * __this, DataRow * row, DataRowAction__Enum action));
IL2CPP_REGISTER_METHOD(0x02397750, bool, CheckMaxLength, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02397A30, void, CheckMaxLength, (DataColumn * __this, DataRow * dr));
IL2CPP_REGISTER_METHODINFO(0x047384E0, DataColumn_CheckMaxLength_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02397B20, void, CheckNotAllowNull, (DataColumn * __this));
IL2CPP_REGISTER_METHODINFO(0x04757090, DataColumn_CheckNotAllowNull__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02397E00, void, CheckNullable, (DataColumn * __this, DataRow * row));
IL2CPP_REGISTER_METHODINFO(0x04728660, DataColumn_CheckNullable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02397EF0, void, CheckUnique, (DataColumn * __this));
IL2CPP_REGISTER_METHODINFO(0x04708708, DataColumn_CheckUnique__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02397FB0, int32_t, Compare, (DataColumn * __this, int32_t record1, int32_t record2));
IL2CPP_REGISTER_METHOD(0x02397FE0, bool, CompareValueTo, (DataColumn * __this, int32_t record1, Object * value, bool checkType));
IL2CPP_REGISTER_METHOD(0x02398250, int32_t, CompareValueTo, (DataColumn * __this, int32_t record1, Object * value));
IL2CPP_REGISTER_METHOD(0x02398280, Object *, ConvertValue, (DataColumn * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x023982B0, void, Copy, (DataColumn * __this, int32_t srcRecordNo, int32_t dstRecordNo));
IL2CPP_REGISTER_METHOD(0x023982E0, DataColumn *, Clone, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02398760, Object *, GetAggregateValue, (DataColumn * __this, Int32__Array * records, AggregateType__Enum kind));
IL2CPP_REGISTER_METHOD(0x02398870, int32_t, GetStringLength, (DataColumn * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x023988A0, void, Init, (DataColumn * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x02398950, bool, IsAutoIncrementType, (Type * dataType));
IL2CPP_REGISTER_METHOD(0x02398BD0, bool, get_IsCustomType, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02398C90, bool, IsValueCustomTypeInstance, (DataColumn * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_ImplementsIXMLSerializable, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02398DC0, bool, IsInRelation, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02398F80, bool, IsMaxLengthViolated, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02399330, bool, IsNotAllowDBNullViolated, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02399560, void, FinishInitInProgress, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x020B9430, void, OnPropertyChanging, (DataColumn * __this, PropertyChangedEventArgs * pcevent));
IL2CPP_REGISTER_METHOD(0x02399580, void, RaisePropertyChanging, (DataColumn * __this, String * name));
IL2CPP_REGISTER_METHOD(0x023996E0, void, InsureStorage, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023997B0, void, SetCapacity, (DataColumn * __this, int32_t capacity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetDataSet, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x02399800, String *, ToString, (DataColumn * __this));
IL2CPP_REGISTER_METHOD(0x023998C0, Object *, ConvertXmlToObject, (DataColumn * __this, String * s));
IL2CPP_REGISTER_METHOD(0x02399910, Object *, ConvertXmlToObject, (DataColumn * __this, XmlReader * xmlReader, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x02399970, String *, ConvertObjectToXml, (DataColumn * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x023999C0, void, ConvertObjectToXml, (DataColumn * __this, Object * value, XmlWriter * xmlWriter, XmlRootAttribute * xmlAttrib));
IL2CPP_REGISTER_METHOD(0x02399A30, Object *, GetEmptyColumnStore, (DataColumn * __this, int32_t recordCount));
IL2CPP_REGISTER_METHOD(0x02399A80, void, CopyValueIntoStore, (DataColumn * __this, int32_t record, Object * store, BitArray * nullbits, int32_t storeIndex));
IL2CPP_REGISTER_METHOD(0x02399AB0, void, SetStorage, (DataColumn * __this, Object * store, BitArray * nullbits));
IL2CPP_REGISTER_METHOD(0x02399B10, void, AddDependentColumn, (DataColumn * __this, DataColumn * expressionColumn));
IL2CPP_REGISTER_METHOD(0x02399CB0, void, RemoveDependentColumn, (DataColumn * __this, DataColumn * expressionColumn));
IL2CPP_REGISTER_METHOD(0x02399D90, void, HandleDependentColumnList, (DataColumn * __this, DataExpression * oldExpression, DataExpression * newExpression));
}
