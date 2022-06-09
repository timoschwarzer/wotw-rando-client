#include <interception_macros.h>

namespace app::methods::System_Configuration::ConfigurationException {
IL2CPP_REGISTER_METHOD(0x02961750, void, __ctor_1, (app::ConfigurationException * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04708660, ConfigurationException__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961780, void, __ctor_2, (app::ConfigurationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0472EAA8, ConfigurationException__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029617B0, void, __ctor_3, (app::ConfigurationException * this_ptr, app::String * message));
IL2CPP_REGISTER_METHODINFO(0x04742FA8, ConfigurationException__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029617E0, void, __ctor_4, (app::ConfigurationException * this_ptr, app::String * message, app::Exception * inner));
IL2CPP_REGISTER_METHODINFO(0x04768CB8, ConfigurationException__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961810, void, __ctor_5, (app::ConfigurationException * this_ptr, app::String * message, app::Exception * inner, app::String * filename, int32_t line));
IL2CPP_REGISTER_METHODINFO(0x04794680, ConfigurationException__ctor_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961840, void, __ctor_6, (app::ConfigurationException * this_ptr, app::String * message, app::Exception * inner, app::XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x047987E8, ConfigurationException__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961870, void, __ctor_7, (app::ConfigurationException * this_ptr, app::String * message, app::String * filename, int32_t line));
IL2CPP_REGISTER_METHODINFO(0x04781238, ConfigurationException__ctor_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029618A0, void, __ctor_8, (app::ConfigurationException * this_ptr, app::String * message, app::XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x0473E338, ConfigurationException__ctor_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x029618D0, String *, get_BareMessage, (app::ConfigurationException * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047448E8, ConfigurationException_get_BareMessage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961900, String *, get_Filename, (app::ConfigurationException * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0471B388, ConfigurationException_get_Filename__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961930, int32_t, get_Line, (app::ConfigurationException * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047364A0, ConfigurationException_get_Line__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961960, String *, GetXmlNodeFilename, (app::XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x047187A8, ConfigurationException_GetXmlNodeFilename__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02961990, int32_t, GetXmlNodeLineNumber, (app::XmlNode * node));
IL2CPP_REGISTER_METHODINFO(0x04738B60, ConfigurationException_GetXmlNodeLineNumber__MethodInfo);
}
