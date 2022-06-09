#include <interception_macros.h>

namespace app::methods::System_Collections_Specialized::HybridDictionary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_1, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0052A040, void, __ctor_2, (app::HybridDictionary * this_ptr, bool case_insensitive));
    IL2CPP_REGISTER_METHOD(0x02493270, app::Object *, get_Item, (app::HybridDictionary * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x04781700, HybridDictionary_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02493390, void, set_Item, (app::HybridDictionary * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02493590, app::ListDictionary *, get_List, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02493710, void, ChangeOver, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02493B50, int32_t, get_Count, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02493B80, app::ICollection *, get_Keys, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object *, get_SyncRoot, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02493D20, app::ICollection *, get_Values, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02493EC0, void, Add, (app::HybridDictionary * this_ptr, app::Object * key, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x024940C0, void, Clear, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02494110, bool, Contains, (app::HybridDictionary * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x04793278, HybridDictionary_Contains__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02494340, void, CopyTo, (app::HybridDictionary * this_ptr, app::Array * array, int32_t index));
    IL2CPP_REGISTER_METHOD(0x024943B0, app::IDictionaryEnumerator *, GetEnumerator, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02494570, app::IEnumerator *, IEnumerable_GetEnumerator, (app::HybridDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02494730, void, Remove, (app::HybridDictionary * this_ptr, app::Object * key));
    IL2CPP_REGISTER_METHODINFO(0x0476E838, HybridDictionary_Remove__MethodInfo);
}
