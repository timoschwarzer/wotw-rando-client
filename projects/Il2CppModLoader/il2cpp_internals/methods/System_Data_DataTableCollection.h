#include <interception_macros.h>

namespace app::methods::System::Data::DataTableCollection {
IL2CPP_REGISTER_METHOD(0x01F3AE00, void, __ctor, (DataTableCollection * __this, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x002FB930, ArrayList *, get_List, (DataTableCollection * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_ObjectID, (DataTableCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F3AFF0, DataTable *, get_Item, (DataTableCollection * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0475D160, DataTableCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3B120, DataTable *, get_Item, (DataTableCollection * __this, String * name));
IL2CPP_REGISTER_METHODINFO(0x047885B0, DataTableCollection_get_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3B230, DataTable *, get_Item, (DataTableCollection * __this, String * name, String * tableNamespace));
IL2CPP_REGISTER_METHODINFO(0x04759C08, DataTableCollection_get_Item_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3B350, DataTable *, GetTable, (DataTableCollection * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x01F3B520, DataTable *, GetTableSmart, (DataTableCollection * __this, String * name, String * ns));
IL2CPP_REGISTER_METHOD(0x01F3B710, void, Add, (DataTableCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F3BB40, void, add_CollectionChanged, (DataTableCollection * __this, CollectionChangeEventHandler * value));
IL2CPP_REGISTER_METHOD(0x01F3BC50, void, remove_CollectionChanged, (DataTableCollection * __this, CollectionChangeEventHandler * value));
IL2CPP_REGISTER_METHOD(0x01F3BD60, void, ArrayAdd, (DataTableCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F3BD90, String *, AssignName, (DataTableCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F3BE00, void, BaseAdd, (DataTableCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHODINFO(0x04729BF0, DataTableCollection_BaseAdd__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3C020, void, BaseGroupSwitch, (DataTableCollection * __this, DataTable__Array * oldArray, int32_t oldLength, DataTable__Array * newArray, int32_t newLength));
IL2CPP_REGISTER_METHOD(0x01F3C220, void, BaseRemove, (DataTableCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F3C2F0, bool, CanRemove, (DataTableCollection * __this, DataTable * table, bool fThrowException));
IL2CPP_REGISTER_METHODINFO(0x04728618, DataTableCollection_CanRemove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3C9A0, void, Clear, (DataTableCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F3CCE0, bool, Contains, (DataTableCollection * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01F3CD00, bool, Contains, (DataTableCollection * __this, String * name, String * tableNamespace, bool checkProperty, bool caseSensitive));
IL2CPP_REGISTER_METHOD(0x01F3CEE0, bool, Contains, (DataTableCollection * __this, String * name, bool caseSensitive));
IL2CPP_REGISTER_METHOD(0x01F3D040, int32_t, IndexOf, (DataTableCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F3D1A0, int32_t, IndexOf, (DataTableCollection * __this, String * tableName));
IL2CPP_REGISTER_METHOD(0x01F3D1C0, int32_t, IndexOf, (DataTableCollection * __this, String * tableName, String * tableNamespace, bool chekforNull));
IL2CPP_REGISTER_METHODINFO(0x0477C4E0, DataTableCollection_IndexOf_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3D2C0, void, ReplaceFromInference, (DataTableCollection * __this, List_1_System_Data_DataTable_ * tableList));
IL2CPP_REGISTER_METHOD(0x01F3D320, int32_t, InternalIndexOf, (DataTableCollection * __this, String * tableName));
IL2CPP_REGISTER_METHOD(0x01F3D540, int32_t, InternalIndexOf, (DataTableCollection * __this, String * tableName, String * tableNamespace));
IL2CPP_REGISTER_METHOD(0x01F3D750, void, FinishInitCollection, (DataTableCollection * __this));
IL2CPP_REGISTER_METHOD(0x01F3D7D0, String *, MakeName, (DataTableCollection * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F3D8A0, void, OnCollectionChanged, (DataTableCollection * __this, CollectionChangeEventArgs * ccevent));
IL2CPP_REGISTER_METHOD(0x01F3D990, void, OnCollectionChanging, (DataTableCollection * __this, CollectionChangeEventArgs * ccevent));
IL2CPP_REGISTER_METHOD(0x01F3DA80, void, RegisterName, (DataTableCollection * __this, String * name, String * tbNamespace));
IL2CPP_REGISTER_METHODINFO(0x04741B80, DataTableCollection_RegisterName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F3DE80, void, Remove, (DataTableCollection * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F3E210, void, UnregisterName, (DataTableCollection * __this, String * name));
}
