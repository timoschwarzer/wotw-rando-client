#include <interception_macros.h>

namespace app::methods::System::Data::DataSet {
IL2CPP_REGISTER_METHOD(0x017E2750, void, __ctor, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E2B90, void, __ctor, (DataSet * __this, String * dataSetName));
IL2CPP_REGISTER_METHOD(0x003FF8B0, SerializationFormat__Enum_1, get_RemotingFormat, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E2BC0, void, set_RemotingFormat, (DataSet * __this, SerializationFormat__Enum_1 value));
IL2CPP_REGISTER_METHODINFO(0x04705048, DataSet_set_RemotingFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417920, SchemaSerializationMode__Enum, get_SchemaSerializationMode, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E2CE0, void, __ctor, (DataSet * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017E2D10, void, __ctor, (DataSet * __this, SerializationInfo * info, StreamingContext context, bool ConstructSchema));
IL2CPP_REGISTER_METHOD(0x017E2FE0, void, GetObjectData, (DataSet * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeDerivedDataSet, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E3010, void, SerializeDataSet, (DataSet * __this, SerializationInfo * info, StreamingContext context, SerializationFormat__Enum_1 remotingFormat));
IL2CPP_REGISTER_METHOD(0x017E3AA0, void, DeserializeDataSet, (DataSet * __this, SerializationInfo * info, StreamingContext context, SerializationFormat__Enum_1 remotingFormat, SchemaSerializationMode__Enum schemaSerializationMode));
IL2CPP_REGISTER_METHOD(0x017E3B20, void, DeserializeDataSetSchema, (DataSet * __this, SerializationInfo * info, StreamingContext context, SerializationFormat__Enum_1 remotingFormat, SchemaSerializationMode__Enum schemaSerializationMode));
IL2CPP_REGISTER_METHOD(0x017E4200, void, DeserializeDataSetData, (DataSet * __this, SerializationInfo * info, StreamingContext context, SerializationFormat__Enum_1 remotingFormat));
IL2CPP_REGISTER_METHOD(0x017E4550, void, SerializeDataSetProperties, (DataSet * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017E46A0, void, DeserializeDataSetProperties, (DataSet * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017E4980, void, SerializeRelations, (DataSet * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017E5050, void, DeserializeRelations, (DataSet * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017E5800, void, FailedEnableConstraints, (DataSet * __this));
IL2CPP_REGISTER_METHODINFO(0x0472CD48, DataSet_FailedEnableConstraints__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_CaseSensitive, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E5850, void, set_CaseSensitive, (DataSet * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x04782A00, DataSet_set_CaseSensitive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IListSource_get_ContainsListCollection, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E5B20, DataViewManager *, get_DefaultViewManager, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x00585310, bool, get_EnforceConstraints, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E5D60, void, set_EnforceConstraints, (DataSet * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00585320, void, RestoreEnforceConstraints, (DataSet * __this, bool value));
IL2CPP_REGISTER_METHOD(0x017E5F10, void, EnableConstraints, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_DataSetName, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E6600, void, set_DataSetName, (DataSet * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0478E2A8, DataSet_set_DataSetName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_Namespace, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E6780, void, set_Namespace, (DataSet * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04793620, DataSet_set_Namespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_Prefix, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E6B00, void, set_Prefix, (DataSet * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0476DAD8, DataSet_set_Prefix__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E6CA0, PropertyCollection *, get_ExtendedProperties, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E6E10, bool, get_IsInitialized, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, CultureInfo *, get_Locale, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E6E20, void, set_Locale, (DataSet * __this, CultureInfo * value));
IL2CPP_REGISTER_METHOD(0x017E6FF0, void, SetLocaleValue, (DataSet * __this, CultureInfo * value, bool userSet));
IL2CPP_REGISTER_METHODINFO(0x04779950, DataSet_SetLocaleValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, ShouldSerializeLocale, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, ISite *, get_Site, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E7980, void, set_Site, (DataSet * __this, ISite * value));
IL2CPP_REGISTER_METHOD(0x002FB990, DataRelationCollection *, get_Relations, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, DataTableCollection *, get_Tables, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E7B10, void, add_Initialized, (DataSet * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x017E7C00, void, remove_Initialized, (DataSet * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x00F01330, void, BeginInit, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E7CF0, void, EndInit, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E7FF0, void, Clear, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E8220, DataSet *, Clone, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E8FA0, int32_t, EstimatedXmlStringSize, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E9130, IList *, IListSource_GetList, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017E9140, String *, GetRemotingDiffGram, (DataSet * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x017E94B0, String *, GetXmlSchemaForRemoting, (DataSet * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x017E9A20, void, ReadXmlSchema, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017E9A30, void, ReadXmlSchema, (DataSet * __this, XmlReader * reader, bool denyResolving));
IL2CPP_REGISTER_METHODINFO(0x04773D90, DataSet_ReadXmlSchema_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017EA650, bool, MoveToElement, (DataSet * __this, XmlReader * reader, int32_t depth));
IL2CPP_REGISTER_METHOD(0x017EA710, void, MoveToElement, (XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017EA790, void, ReadEndElement, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017EA840, void, ReadXSDSchema, (DataSet * __this, XmlReader * reader, bool denyResolving));
IL2CPP_REGISTER_METHOD(0x017EAD00, void, ReadXDRSchema, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017EB070, void, WriteXmlSchema, (DataSet * __this, XmlWriter * writer, SchemaFormat__Enum schemaFormat, Converter_2_Type_String_ * multipleTargetConverter));
IL2CPP_REGISTER_METHOD(0x017EB450, XmlReadMode__Enum, ReadXml, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017EB460, XmlReadMode__Enum, ReadXml, (DataSet * __this, XmlReader * reader, bool denyResolving));
IL2CPP_REGISTER_METHODINFO(0x0473EB78, DataSet_ReadXml_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017ECA90, void, InferSchema, (DataSet * __this, XmlDocument * xdoc, String__Array * excludedNamespaces, XmlReadMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x017ED1F0, bool, IsEmpty, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017ED470, void, ReadXmlDiffgram, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04771D88, DataSet_ReadXmlDiffgram__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017EE830, XmlReadMode__Enum, ReadXml, (DataSet * __this, XmlReader * reader, XmlReadMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x017EE850, XmlReadMode__Enum, ReadXml, (DataSet * __this, XmlReader * reader, XmlReadMode__Enum mode, bool denyResolving));
IL2CPP_REGISTER_METHODINFO(0x047390F8, DataSet_ReadXml_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017EFBE0, void, WriteXml, (DataSet * __this, XmlWriter * writer, XmlWriteMode__Enum mode));
IL2CPP_REGISTER_METHOD(0x017EFFA0, void, Merge, (DataSet * __this, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x017F0150, void, Merge, (DataSet * __this, DataSet * dataSet, bool preserveChanges, MissingSchemaAction__Enum missingSchemaAction));
IL2CPP_REGISTER_METHODINFO(0x04739CE8, DataSet_Merge_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017F0490, void, OnPropertyChanging, (DataSet * __this, PropertyChangedEventArgs * pcevent));
IL2CPP_REGISTER_METHOD(0x017F04B0, void, OnMergeFailed, (DataSet * __this, MergeFailedEventArgs * mfevent));
IL2CPP_REGISTER_METHODINFO(0x04737E30, DataSet_OnMergeFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017F0580, void, RaiseMergeFailed, (DataSet * __this, DataTable * table, String * conflict, MissingSchemaAction__Enum missingSchemaAction));
IL2CPP_REGISTER_METHODINFO(0x047636B8, DataSet_RaiseMergeFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017F0810, void, OnDataRowCreated, (DataSet * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x017F0830, void, OnClearFunctionCalled, (DataSet * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x017F0850, void, OnInitialized, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveTable, (DataSet * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x017F0920, void, OnRemovedTable, (DataSet * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveRelation, (DataSet * __this, DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x017F0970, void, OnRemoveRelationHack, (DataSet * __this, DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x017F0990, void, RaisePropertyChanging, (DataSet * __this, String * name));
IL2CPP_REGISTER_METHOD(0x017F0AF0, DataTable__Array *, TopLevelTables, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017F0B00, DataTable__Array *, TopLevelTables, (DataSet * __this, bool forSchema));
IL2CPP_REGISTER_METHOD(0x017F0E40, void, Reset, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017F1100, bool, ValidateCaseConstraint, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017F1520, bool, ValidateLocaleConstraint, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017F19C0, DataTable *, FindTable, (DataSet * __this, DataTable * baseTable, PropertyDescriptor__Array * props, int32_t propStart));
IL2CPP_REGISTER_METHOD(0x017F1B70, void, ReadXmlSerializable, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x0473BF78, DataSet_ReadXmlSerializable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017F21A0, XmlSchemaComplexType *, GetDataSetSchema, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x017F2780, XmlSchema *, IXmlSerializable_GetSchema, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x017F2C10, void, IXmlSerializable_ReadXml, (DataSet * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017F2DB0, void, IXmlSerializable_WriteXml, (DataSet * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x002FBBC0, String *, get_MainTableName, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_MainTableName, (DataSet * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ObjectID, (DataSet * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
