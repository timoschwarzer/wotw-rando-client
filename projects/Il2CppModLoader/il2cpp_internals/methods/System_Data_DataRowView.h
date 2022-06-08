#include <interception_macros.h>

namespace app::methods::System::Data::DataRowView {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (DataRowView * __this, DataView * dataView, DataRow * row));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (DataRowView * __this, Object * other));
IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, DataView *, get_DataView, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1300, String *, IDataErrorInfo_get_Item, (DataRowView * __this, String * colName));
IL2CPP_REGISTER_METHOD(0x017E1340, String *, IDataErrorInfo_get_Error, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1360, DataRowVersion__Enum, get_RowVersionDefault, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E13D0, int32_t, GetRecord, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1440, bool, HasRecord, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E14B0, Object *, GetColumnValue, (DataRowView * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x017E1580, void, SetColumnValue, (DataRowView * __this, DataColumn * column, Object * value));
IL2CPP_REGISTER_METHODINFO(0x04781668, DataRowView_SetColumnValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E16B0, DataView *, CreateChildView, (DataRowView * __this, DataRelation * relation, bool followParent));
IL2CPP_REGISTER_METHODINFO(0x047888A0, DataRowView_CreateChildView__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E1C60, DataView *, CreateChildView, (DataRowView * __this, DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x002FB930, DataRow *, get_Row, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00447ED0, void, BeginEdit, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1C70, void, CancelEdit, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1CD0, void, EndEdit, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1D30, bool, get_IsNew, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E1D60, void, add_PropertyChanged, (DataRowView * __this, PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x017E1E50, void, remove_PropertyChanged, (DataRowView * __this, PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x017E1F40, void, RaisePropertyChangedEvent, (DataRowView * __this, String * propName));
IL2CPP_REGISTER_METHOD(0x017E20C0, AttributeCollection *, ICustomTypeDescriptor_GetAttributes, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetClassName, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetComponentName, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, TypeConverter *, ICustomTypeDescriptor_GetConverter, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, EventDescriptor_1 *, ICustomTypeDescriptor_GetDefaultEvent, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptor *, ICustomTypeDescriptor_GetDefaultProperty, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, ICustomTypeDescriptor_GetEditor, (DataRowView * __this, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x017E2200, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E2340, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents, (DataRowView * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x017E2490, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties, (DataRowView * __this));
IL2CPP_REGISTER_METHOD(0x017E2510, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties, (DataRowView * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICustomTypeDescriptor_GetPropertyOwner, (DataRowView * __this, PropertyDescriptor * pd));
IL2CPP_REGISTER_METHOD(0x017E2600, void, __cctor, ());
}
