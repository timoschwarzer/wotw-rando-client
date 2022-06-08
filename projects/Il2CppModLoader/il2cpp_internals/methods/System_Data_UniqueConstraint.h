#include <interception_macros.h>

namespace app::methods::System::Data::UniqueConstraint {
IL2CPP_REGISTER_METHOD(0x022BFAB0, void, __ctor, (UniqueConstraint * __this, String * name, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x022BFBC0, void, __ctor, (UniqueConstraint * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x022BFCD0, void, __ctor, (UniqueConstraint * __this, String * name, DataColumn__Array * columns));
IL2CPP_REGISTER_METHOD(0x022BFD10, void, __ctor, (UniqueConstraint * __this, DataColumn__Array * columns));
IL2CPP_REGISTER_METHOD(0x022BFD50, void, __ctor, (UniqueConstraint * __this, String * name, String__Array * columnNames, bool isPrimaryKey));
IL2CPP_REGISTER_METHOD(0x022BFDA0, void, __ctor, (UniqueConstraint * __this, String * name, DataColumn * column, bool isPrimaryKey));
IL2CPP_REGISTER_METHOD(0x022BFED0, void, __ctor, (UniqueConstraint * __this, DataColumn * column, bool isPrimaryKey));
IL2CPP_REGISTER_METHOD(0x022BFFF0, void, __ctor, (UniqueConstraint * __this, String * name, DataColumn__Array * columns, bool isPrimaryKey));
IL2CPP_REGISTER_METHOD(0x022C0040, void, __ctor, (UniqueConstraint * __this, DataColumn__Array * columns, bool isPrimaryKey));
IL2CPP_REGISTER_METHOD(0x022C0090, String__Array *, get_ColumnNames, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Index *, get_ConstraintIndex, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C00A0, void, ConstraintIndexClear, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C00D0, void, ConstraintIndexInitialize, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C0120, void, CheckState, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C0120, void, NonVirtualCheckState, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckCanAddToCollection, (UniqueConstraint * __this, ConstraintCollection * constraints));
IL2CPP_REGISTER_METHOD(0x022C0130, bool, CanBeRemovedFromCollection, (UniqueConstraint * __this, ConstraintCollection * constraints, bool fThrowException));
IL2CPP_REGISTER_METHODINFO(0x04773D50, UniqueConstraint_CanBeRemovedFromCollection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C03F0, bool, CanEnableConstraint, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C0460, bool, IsConstraintViolated, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C0760, void, CheckConstraint, (UniqueConstraint * __this, DataRow * row, DataRowAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04766D10, UniqueConstraint_CheckConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C09D0, bool, ContainsColumn, (UniqueConstraint * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x01F616E0, Constraint_1 *, Clone, (UniqueConstraint * __this, DataSet * destination));
IL2CPP_REGISTER_METHOD(0x022C0A30, Constraint_1 *, Clone, (UniqueConstraint * __this, DataSet * destination, bool ignorNSforTableLookup));
IL2CPP_REGISTER_METHOD(0x022C1080, UniqueConstraint *, Clone, (UniqueConstraint * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x022C1550, DataColumn__Array *, get_Columns, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, DataColumn__Array *, get_ColumnsReference, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C1560, bool, get_IsPrimaryKey, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C15C0, void, Create, (UniqueConstraint * __this, String * constraintName, DataColumn__Array * columns));
IL2CPP_REGISTER_METHODINFO(0x0475BE20, UniqueConstraint_Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C1710, bool, Equals, (UniqueConstraint * __this, Object * key2));
IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C1880, void, set_InCollection, (UniqueConstraint * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, DataKey, get_Key, (UniqueConstraint * __this));
IL2CPP_REGISTER_METHOD(0x022C1900, DataTable *, get_Table, (UniqueConstraint * __this));
}
