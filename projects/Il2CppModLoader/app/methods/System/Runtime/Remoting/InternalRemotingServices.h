#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::InternalRemotingServices {
    IL2CPP_REGISTER_METHOD(0x02306740, app::SoapAttribute *, GetCachedSoapAttribute, (app::Object * reflection_object))
    IL2CPP_REGISTER_METHOD(0x02306E00, void, cctor, ())
}
