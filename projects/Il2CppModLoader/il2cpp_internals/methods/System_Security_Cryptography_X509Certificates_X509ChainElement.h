#include <interception_macros.h>

namespace app::methods::System_Security_Cryptography_X509Certificates::X509ChainElement {
IL2CPP_REGISTER_METHOD(0x021CD040, void, __ctor, (app::X509ChainElement * this_ptr, app::X509Certificate2 * certificate));
IL2CPP_REGISTER_METHOD(0x002FA280, X509Certificate2 *, get_Certificate, (app::X509ChainElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, X509ChainStatus__Array *, get_ChainElementStatus, (app::X509ChainElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB970, X509ChainStatusFlags__Enum, get_StatusFlags, (app::X509ChainElement * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB980, void, set_StatusFlags, (app::X509ChainElement * this_ptr, app::X509ChainStatusFlags__Enum value));
IL2CPP_REGISTER_METHOD(0x021CD0E0, int32_t, Count, (app::X509ChainElement * this_ptr, app::X509ChainStatusFlags__Enum flags));
IL2CPP_REGISTER_METHOD(0x021CD110, void, Set, (app::X509ChainElement * this_ptr, app::X509ChainStatus__Array * status, app::int32_t * position, app::X509ChainStatusFlags__Enum flags, app::X509ChainStatusFlags__Enum mask));
IL2CPP_REGISTER_METHOD(0x021CD1A0, void, UncompressFlags, (app::X509ChainElement * this_ptr));
}
