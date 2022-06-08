#include <interception_macros.h>

namespace app::methods::System::Data::DataRelation {
IL2CPP_REGISTER_METHOD(0x023A1700, void, __ctor, (DataRelation * __this, String * relationName, DataColumn * parentColumn, DataColumn * childColumn));
IL2CPP_REGISTER_METHOD(0x023A1720, void, __ctor, (DataRelation * __this, String * relationName, DataColumn * parentColumn, DataColumn * childColumn, bool createConstraints));
IL2CPP_REGISTER_METHOD(0x023A19A0, void, __ctor, (DataRelation * __this, String * relationName, DataColumn__Array * parentColumns, DataColumn__Array * childColumns));
IL2CPP_REGISTER_METHOD(0x023A19C0, void, __ctor, (DataRelation * __this, String * relationName, DataColumn__Array * parentColumns, DataColumn__Array * childColumns, bool createConstraints));
IL2CPP_REGISTER_METHOD(0x023A1AC0, void, __ctor, (DataRelation * __this, String * relationName, String * parentTableName, String * childTableName, String__Array * parentColumnNames, String__Array * childColumnNames, bool nested));
IL2CPP_REGISTER_METHOD(0x023A1BC0, void, __ctor, (DataRelation * __this, String * relationName, String * parentTableName, String * parentTableNamespace, String * childTableName, String * childTableNamespace, String__Array * parentColumnNames, String__Array * childColumnNames, bool nested));
IL2CPP_REGISTER_METHOD(0x023A1CD0, DataColumn__Array *, get_ChildColumns, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1CF0, DataColumn__Array *, get_ChildColumnsReference, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1CF0, DataKey, get_ChildKey, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1D10, DataTable *, get_ChildTable, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1D60, DataSet *, get_DataSet, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1D80, String__Array *, get_ParentColumnNames, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1D90, String__Array *, get_ChildColumnNames, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A1DA0, bool, IsKeyNull, (Object__Array * values));
IL2CPP_REGISTER_METHOD(0x023A1EA0, DataRow__Array *, GetChildRows, (DataKey parentKey, DataKey childKey, DataRow * parentRow, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x023A1FE0, DataRow__Array *, GetParentRows, (DataKey parentKey, DataKey childKey, DataRow * childRow, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x023A2120, DataRow *, GetParentRow, (DataKey parentKey, DataKey childKey, DataRow * childRow, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04729330, DataRelation_GetParentRow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F4BE00, void, SetDataSet, (DataRelation * __this, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x023A23B0, DataColumn__Array *, get_ParentColumns, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, DataColumn__Array *, get_ParentColumnsReference, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A23D0, DataKey, get_ParentKey, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A23F0, DataTable *, get_ParentTable, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A2440, String *, get_RelationName, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A2460, void, CheckNamespaceValidityForNestedRelations, (DataRelation * __this, String * ns));
IL2CPP_REGISTER_METHODINFO(0x0478D848, DataRelation_CheckNamespaceValidityForNestedRelations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A2730, void, CheckNestedRelations, (DataRelation * __this));
IL2CPP_REGISTER_METHODINFO(0x047169B0, DataRelation_CheckNestedRelations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A2BF0, bool, get_Nested, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A2C10, void, set_Nested, (DataRelation * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0471C5A0, DataRelation_set_Nested__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A39D0, UniqueConstraint *, get_ParentKeyConstraint, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetParentKeyConstraint, (DataRelation * __this, UniqueConstraint * value));
IL2CPP_REGISTER_METHOD(0x023A39F0, ForeignKeyConstraint *, get_ChildKeyConstraint, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A3A10, PropertyCollection *, get_ExtendedProperties, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x00B8A120, bool, get_CheckMultipleNested, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x00B8A130, void, set_CheckMultipleNested, (DataRelation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetChildKeyConstraint, (DataRelation * __this, ForeignKeyConstraint * value));
IL2CPP_REGISTER_METHOD(0x023A3B80, void, CheckState, (DataRelation * __this));
IL2CPP_REGISTER_METHODINFO(0x04702038, DataRelation_CheckState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A3F70, void, CheckStateForProperty, (DataRelation * __this));
IL2CPP_REGISTER_METHODINFO(0x0472D2D0, DataRelation_CheckStateForProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A40B0, void, Create, (DataRelation * __this, String * relationName, DataColumn__Array * parentColumns, DataColumn__Array * childColumns, bool createConstraints));
IL2CPP_REGISTER_METHODINFO(0x0472D058, DataRelation_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A43E0, DataRelation *, Clone, (DataRelation * __this, DataSet * destination));
IL2CPP_REGISTER_METHOD(0x023A4BD0, void, OnPropertyChanging, (DataRelation * __this, PropertyChangedEventArgs * pcevent));
IL2CPP_REGISTER_METHOD(0x023A4CD0, void, RaisePropertyChanging, (DataRelation * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01EEAF40, String *, ToString, (DataRelation * __this));
IL2CPP_REGISTER_METHOD(0x023A4EF0, void, ValidateMultipleNestedRelations, (DataRelation * __this));
IL2CPP_REGISTER_METHODINFO(0x04714180, DataRelation_ValidateMultipleNestedRelations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023A5290, bool, IsAutoGenerated, (DataRelation * __this, DataColumn * col));
IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_ObjectID, (DataRelation * __this));
}
