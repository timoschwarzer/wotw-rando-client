#include <interception_macros.h>

namespace app::methods::System_Data::UniqueConstraint {
    IL2CPP_REGISTER_METHOD(0x022BFAB0, void, __ctor_1, (app::UniqueConstraint * this_ptr, app::String * name, app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x022BFBC0, void, __ctor_2, (app::UniqueConstraint * this_ptr, app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x022BFCD0, void, __ctor_3, (app::UniqueConstraint * this_ptr, app::String * name, app::DataColumn__Array * columns));
    IL2CPP_REGISTER_METHOD(0x022BFD10, void, __ctor_4, (app::UniqueConstraint * this_ptr, app::DataColumn__Array * columns));
    IL2CPP_REGISTER_METHOD(0x022BFD50, void, __ctor_5, (app::UniqueConstraint * this_ptr, app::String * name, app::String__Array * column_names, bool is_primary_key));
    IL2CPP_REGISTER_METHOD(0x022BFDA0, void, __ctor_6, (app::UniqueConstraint * this_ptr, app::String * name, app::DataColumn * column, bool is_primary_key));
    IL2CPP_REGISTER_METHOD(0x022BFED0, void, __ctor_7, (app::UniqueConstraint * this_ptr, app::DataColumn * column, bool is_primary_key));
    IL2CPP_REGISTER_METHOD(0x022BFFF0, void, __ctor_8, (app::UniqueConstraint * this_ptr, app::String * name, app::DataColumn__Array * columns, bool is_primary_key));
    IL2CPP_REGISTER_METHOD(0x022C0040, void, __ctor_9, (app::UniqueConstraint * this_ptr, app::DataColumn__Array * columns, bool is_primary_key));
    IL2CPP_REGISTER_METHOD(0x022C0090, app::String__Array *, get_ColumnNames, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Index *, get_ConstraintIndex, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C00A0, void, ConstraintIndexClear, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C00D0, void, ConstraintIndexInitialize, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C0120, void, CheckState, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C0120, void, NonVirtualCheckState, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckCanAddToCollection, (app::UniqueConstraint * this_ptr, app::ConstraintCollection * constraints));
    IL2CPP_REGISTER_METHOD(0x022C0130, bool, CanBeRemovedFromCollection, (app::UniqueConstraint * this_ptr, app::ConstraintCollection * constraints, bool f_throw_exception));
    IL2CPP_REGISTER_METHODINFO(0x04773D50, UniqueConstraint_CanBeRemovedFromCollection__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022C03F0, bool, CanEnableConstraint, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C0460, bool, IsConstraintViolated, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C0760, void, CheckConstraint, (app::UniqueConstraint * this_ptr, app::DataRow * row, app::DataRowAction__Enum action));
    IL2CPP_REGISTER_METHODINFO(0x04766D10, UniqueConstraint_CheckConstraint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022C09D0, bool, ContainsColumn, (app::UniqueConstraint * this_ptr, app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F616E0, app::Constraint_1 *, Clone_1, (app::UniqueConstraint * this_ptr, app::DataSet * destination));
    IL2CPP_REGISTER_METHOD(0x022C0A30, app::Constraint_1 *, Clone_2, (app::UniqueConstraint * this_ptr, app::DataSet * destination, bool ignor_n_sfor_table_lookup));
    IL2CPP_REGISTER_METHOD(0x022C1080, app::UniqueConstraint *, Clone_3, (app::UniqueConstraint * this_ptr, app::DataTable * table));
    IL2CPP_REGISTER_METHOD(0x022C1550, app::DataColumn__Array *, get_Columns, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataColumn__Array *, get_ColumnsReference, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C1560, bool, get_IsPrimaryKey, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C15C0, void, Create, (app::UniqueConstraint * this_ptr, app::String * constraint_name, app::DataColumn__Array * columns));
    IL2CPP_REGISTER_METHODINFO(0x0475BE20, UniqueConstraint_Create__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x022C1710, bool, Equals, (app::UniqueConstraint * this_ptr, app::Object * key2));
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C1880, void, set_InCollection, (app::UniqueConstraint * this_ptr, bool value));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataKey, get_Key, (app::UniqueConstraint * this_ptr));
    IL2CPP_REGISTER_METHOD(0x022C1900, app::DataTable *, get_Table, (app::UniqueConstraint * this_ptr));
}
