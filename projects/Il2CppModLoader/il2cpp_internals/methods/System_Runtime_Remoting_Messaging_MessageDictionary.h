#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::MessageDictionary {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (app::MessageDictionary * this_ptr, app::IMethodMessage * message));
IL2CPP_REGISTER_METHOD(0x02312630, bool, HasUserData, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x02312750, IDictionary *, get_InternalDictionary, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_MethodKeys, (app::MessageDictionary * this_ptr, app::String__Array * value));
IL2CPP_REGISTER_METHOD(0x02312850, IDictionary *, AllocInternalProperties, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x023129A0, IDictionary *, GetInternalProperties, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x023129D0, bool, IsOverridenKey, (app::MessageDictionary * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x02312A70, Object *, get_Item, (app::MessageDictionary * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02312BF0, void, set_Item, (app::MessageDictionary * this_ptr, app::Object * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02312C00, Object *, GetMethodProperty, (app::MessageDictionary * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x02313070, void, SetMethodProperty, (app::MessageDictionary * this_ptr, app::String * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02313280, ICollection *, get_Keys, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x023136A0, ICollection *, get_Values, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x02313AE0, void, Add, (app::MessageDictionary * this_ptr, app::Object * key, app::Object * value));
IL2CPP_REGISTER_METHOD(0x02313CA0, void, Clear, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x02313D30, bool, Contains, (app::MessageDictionary * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHOD(0x02313EA0, void, Remove, (app::MessageDictionary * this_ptr, app::Object * key));
IL2CPP_REGISTER_METHODINFO(0x04767510, MessageDictionary_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02314030, int32_t, get_Count, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x023140F0, void, CopyTo, (app::MessageDictionary * this_ptr, app::Array * array, int32_t index));
IL2CPP_REGISTER_METHOD(0x023141A0, IEnumerator *, IEnumerable_GetEnumerator, (app::MessageDictionary * this_ptr));
IL2CPP_REGISTER_METHOD(0x023142F0, IDictionaryEnumerator *, GetEnumerator, (app::MessageDictionary * this_ptr));
}
