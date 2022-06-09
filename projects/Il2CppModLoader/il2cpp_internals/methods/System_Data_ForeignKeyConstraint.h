#include <interception_macros.h>

namespace app::methods::System_Data::ForeignKeyConstraint {
    IL2CPP_REGISTER_METHOD(0x01F5EB80, void, __ctor_1, (app::ForeignKeyConstraint * this_ptr, app::DataColumn * parent_column, app::DataColumn * child_column));
    IL2CPP_REGISTER_METHOD(0x01F5EBA0, void, __ctor_2, (app::ForeignKeyConstraint * this_ptr, app::String * constraint_name, app::DataColumn * parent_column, app::DataColumn * child_column));
    IL2CPP_REGISTER_METHOD(0x01F5ED50, void, __ctor_3, (app::ForeignKeyConstraint * this_ptr, app::DataColumn__Array * parent_columns, app::DataColumn__Array * child_columns));
    IL2CPP_REGISTER_METHOD(0x01F5EDB0, void, __ctor_4, (app::ForeignKeyConstraint * this_ptr, app::String * constraint_name, app::DataColumn__Array * parent_columns, app::DataColumn__Array * child_columns));
    IL2CPP_REGISTER_METHOD(0x01F5EE20, void, __ctor_5, (app::ForeignKeyConstraint * this_ptr, app::String * constraint_name, app::String * parent_table_name, app::String__Array * parent_column_names, app::String__Array * child_column_names, app::AcceptRejectRule__Enum accept_reject_rule, app::Rule__Enum delete_rule, app::Rule__Enum update_rule));
    IL2CPP_REGISTER_METHOD(0x01F5EEA0, void, __ctor_6, (app::ForeignKeyConstraint * this_ptr, app::String * constraint_name, app::String * parent_table_name, app::String * parent_table_namespace, app::String__Array * parent_column_names, app::String__Array * child_column_names, app::AcceptRejectRule__Enum accept_reject_rule, app::Rule__Enum delete_rule, app::Rule__Enum update_rule));
    IL2CPP_REGISTER_METHOD(0x01F5EF20, app::DataKey, get_ChildKey, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5EF40, app::DataColumn__Array *, get_Columns, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5EF60, app::DataTable *, get_Table, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5EFB0, app::String__Array *, get_ParentColumnNames, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5EFC0, app::String__Array *, get_ChildColumnNames, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5EFD0, void, CheckCanAddToCollection, (app::ForeignKeyConstraint * this_ptr, app::ConstraintCollection * constraints));
    IL2CPP_REGISTER_METHODINFO(0x04711380, ForeignKeyConstraint_CheckCanAddToCollection__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeRemovedFromCollection, (app::ForeignKeyConstraint * this_ptr, app::ConstraintCollection * constraints, bool f_throw_exception));
    IL2CPP_REGISTER_METHOD(0x01F5F1B0, bool, IsKeyNull, (app::ForeignKeyConstraint * this_ptr, app::Object__Array * values));
    IL2CPP_REGISTER_METHOD(0x01F5F2B0, bool, IsConstraintViolated, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5F530, bool, CanEnableConstraint, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F5F730, void, CascadeCommit, (app::ForeignKeyConstraint * this_ptr, app::DataRow * row));
    IL2CPP_REGISTER_METHOD(0x01F5F8D0, void, CascadeDelete, (app::ForeignKeyConstraint * this_ptr, app::DataRow * row));
    IL2CPP_REGISTER_METHODINFO(0x0473DD60, ForeignKeyConstraint_CascadeDelete__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F5FF80, void, CascadeRollback, (app::ForeignKeyConstraint * this_ptr, app::DataRow * row));
    IL2CPP_REGISTER_METHODINFO(0x04761E10, ForeignKeyConstraint_CascadeRollback__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F60280, void, CascadeUpdate, (app::ForeignKeyConstraint * this_ptr, app::DataRow * row));
    IL2CPP_REGISTER_METHODINFO(0x0472BC98, ForeignKeyConstraint_CascadeUpdate__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F608C0, void, CheckCanClearParentTable, (app::ForeignKeyConstraint * this_ptr, app::DataTable * table));
    IL2CPP_REGISTER_METHODINFO(0x04708A08, ForeignKeyConstraint_CheckCanClearParentTable__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F60A30, void, CheckCanRemoveParentRow, (app::ForeignKeyConstraint * this_ptr, app::DataRow * row));
    IL2CPP_REGISTER_METHODINFO(0x04764AB8, ForeignKeyConstraint_CheckCanRemoveParentRow__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F60B50, void, CheckCascade, (app::ForeignKeyConstraint * this_ptr, app::DataRow * row, app::DataRowAction__Enum action));
    IL2CPP_REGISTER_METHOD(0x01F60CA0, void, CheckConstraint, (app::ForeignKeyConstraint * this_ptr, app::DataRow * child_row, app::DataRowAction__Enum action));
    IL2CPP_REGISTER_METHODINFO(0x0472A250, ForeignKeyConstraint_CheckConstraint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F61140, void, NonVirtualCheckState, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04705578, ForeignKeyConstraint_NonVirtualCheckState__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F61540, void, CheckState, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F61550, app::AcceptRejectRule__Enum, get_AcceptRejectRule, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F61570, void, set_AcceptRejectRule, (app::ForeignKeyConstraint * this_ptr, app::AcceptRejectRule__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04795CF0, ForeignKeyConstraint_set_AcceptRejectRule__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F61630, bool, ContainsColumn, (app::ForeignKeyConstraint * this_ptr, app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F616E0, app::Constraint_1 *, Clone_1, (app::ForeignKeyConstraint * this_ptr, app::DataSet * destination));
    IL2CPP_REGISTER_METHOD(0x01F61700, app::Constraint_1 *, Clone_2, (app::ForeignKeyConstraint * this_ptr, app::DataSet * destination, bool ignor_n_sfor_table_lookup));
    IL2CPP_REGISTER_METHOD(0x01F61F70, app::ForeignKeyConstraint *, Clone_3, (app::ForeignKeyConstraint * this_ptr, app::DataTable * destination));
    IL2CPP_REGISTER_METHOD(0x01F625D0, void, Create, (app::ForeignKeyConstraint * this_ptr, app::String * relation_name, app::DataColumn__Array * parent_columns, app::DataColumn__Array * child_columns));
    IL2CPP_REGISTER_METHODINFO(0x04781998, ForeignKeyConstraint_Create__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F62820, app::Rule__Enum, get_DeleteRule, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62840, void, set_DeleteRule, (app::ForeignKeyConstraint * this_ptr, app::Rule__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04797C60, ForeignKeyConstraint_set_DeleteRule__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F62900, bool, Equals, (app::ForeignKeyConstraint * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62A80, app::DataColumn__Array *, get_RelatedColumns, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62AA0, app::DataColumn__Array *, get_RelatedColumnsReference, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62AA0, app::DataKey, get_ParentKey, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62AC0, app::DataRelation *, FindParentRelation, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62BB0, app::DataTable *, get_RelatedTable, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62C00, app::Rule__Enum, get_UpdateRule, (app::ForeignKeyConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01F62C20, void, set_UpdateRule, (app::ForeignKeyConstraint * this_ptr, app::Rule__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04767948, ForeignKeyConstraint_set_UpdateRule__MethodInfo);
}
