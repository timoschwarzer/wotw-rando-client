#include <interception_macros.h>

namespace app::methods::Newtonsoft_Json_Serialization::NamingStrategy {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_ProcessDictionaryKeys, (app::NamingStrategy * this_ptr));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_ProcessExtensionDataNames, (app::NamingStrategy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_OverrideSpecifiedNames, (app::NamingStrategy * this_ptr));
IL2CPP_REGISTER_METHOD(0x01BFB760, String *, GetPropertyName, (app::NamingStrategy * this_ptr, app::String * name, bool has_specified_name));
IL2CPP_REGISTER_METHOD(0x01BFB780, String *, GetExtensionDataName, (app::NamingStrategy * this_ptr, app::String * name));
IL2CPP_REGISTER_METHOD(0x01BFB7A0, String *, GetDictionaryKey, (app::NamingStrategy * this_ptr, app::String * key));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::NamingStrategy * this_ptr));
}
