#include <interception_macros.h>

namespace app::methods::System::ComponentModel::BindingList_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02FAC160, bool, get_ItemTypeHasDefaultConstructor, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_RaiseListChangedEvents, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAC8A0, void, set_RaiseListChangedEvents, (BindingList_1_System_Object_ * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02FAD260, bool, get_AddingNewHandled, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD440, bool, get_AllowNew, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD470, void, set_AllowNew, (BindingList_1_System_Object_ * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02986CA0, bool, IBindingList_get_AllowNew, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, get_AllowEdit, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD4F0, void, set_AllowEdit, (BindingList_1_System_Object_ * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02FAD520, bool, IBindingList_get_AllowEdit, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00B11420, bool, get_AllowRemove, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD550, void, set_AllowRemove, (BindingList_1_System_Object_ * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02ADBFA0, bool, IBindingList_get_AllowRemove, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD580, bool, IBindingList_get_SupportsChangeNotification, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsChangeNotificationCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD5B0, bool, IBindingList_get_SupportsSearching, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsSearchingCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD5E0, bool, IBindingList_get_SupportsSorting, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsSortingCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD610, bool, IBindingList_get_IsSorted, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSortedCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD640, PropertyDescriptor *, IBindingList_get_SortProperty, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptor *, get_SortPropertyCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD670, ListSortDirection__Enum, IBindingList_get_SortDirection, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ListSortDirection__Enum, get_SortDirectionCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0185DFF0, bool, IRaiseItemChangedEvents_get_RaisesItemChangedEvents, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FABDA0, void, __ctor, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FABE10, void, __ctor, (BindingList_1_System_Object_ * __this, IList_1_System_Object_ * list));
IL2CPP_REGISTER_METHOD(0x02FABE80, void, Initialize, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAC2A0, void, add_AddingNew, (BindingList_1_System_Object_ * __this, AddingNewEventHandler * value));
IL2CPP_REGISTER_METHOD(0x02FAC3E0, void, remove_AddingNew, (BindingList_1_System_Object_ * __this, AddingNewEventHandler * value));
IL2CPP_REGISTER_METHOD(0x0194A370, void, OnAddingNew, (BindingList_1_System_Object_ * __this, AddingNewEventArgs * e));
IL2CPP_REGISTER_METHOD(0x02FAC520, Object *, FireAddingNew, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAC700, void, add_ListChanged, (BindingList_1_System_Object_ * __this, ListChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x02FAC7D0, void, remove_ListChanged, (BindingList_1_System_Object_ * __this, ListChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x0194A390, void, OnListChanged, (BindingList_1_System_Object_ * __this, ListChangedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x02FAC8B0, void, ResetBindings, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAC8E0, void, ResetItem, (BindingList_1_System_Object_ * __this, int32_t position));
IL2CPP_REGISTER_METHOD(0x02FAC910, void, FireListChanged, (BindingList_1_System_Object_ * __this, ListChangedType__Enum type, int32_t index));
IL2CPP_REGISTER_METHOD(0x02FACAA0, void, ClearItems, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FACD50, void, InsertItem, (BindingList_1_System_Object_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02FACE10, void, RemoveItem, (BindingList_1_System_Object_ * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473EC90, BindingList_1_System_Object__RemoveItem__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FACF70, void, SetItem, (BindingList_1_System_Object_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHOD(0x02FAD040, void, CancelNew, (BindingList_1_System_Object_ * __this, int32_t itemIndex));
IL2CPP_REGISTER_METHOD(0x02FAD080, void, EndNew, (BindingList_1_System_Object_ * __this, int32_t itemIndex));
IL2CPP_REGISTER_METHOD(0x02FAD0A0, Object *, AddNew, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD1A0, Object *, IBindingList_AddNew, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD2A0, Object *, AddNewCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD6A0, void, IBindingList_ApplySort, (BindingList_1_System_Object_ * __this, PropertyDescriptor * prop, ListSortDirection__Enum direction));
IL2CPP_REGISTER_METHOD(0x02FAD6D0, void, ApplySortCore, (BindingList_1_System_Object_ * __this, PropertyDescriptor * prop, ListSortDirection__Enum direction));
IL2CPP_REGISTER_METHODINFO(0x04773988, BindingList_1_System_Object__ApplySortCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FAD720, void, IBindingList_RemoveSort, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02FAD750, void, RemoveSortCore, (BindingList_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04748068, BindingList_1_System_Object__RemoveSortCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02FAD7A0, int32_t, IBindingList_Find, (BindingList_1_System_Object_ * __this, PropertyDescriptor * prop, Object * key));
IL2CPP_REGISTER_METHOD(0x02FAD7D0, int32_t, FindCore, (BindingList_1_System_Object_ * __this, PropertyDescriptor * prop, Object * key));
IL2CPP_REGISTER_METHODINFO(0x04784298, BindingList_1_System_Object__FindCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_AddIndex, (BindingList_1_System_Object_ * __this, PropertyDescriptor * prop));
IL2CPP_REGISTER_METHOD(0x002FA000, void, IBindingList_RemoveIndex, (BindingList_1_System_Object_ * __this, PropertyDescriptor * prop));
IL2CPP_REGISTER_METHOD(0x02FAD820, void, HookPropertyChanged, (BindingList_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02FAD9D0, void, UnhookPropertyChanged, (BindingList_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02FADA80, void, Child_PropertyChanged, (BindingList_1_System_Object_ * __this, Object * sender, PropertyChangedEventArgs * e));
}
