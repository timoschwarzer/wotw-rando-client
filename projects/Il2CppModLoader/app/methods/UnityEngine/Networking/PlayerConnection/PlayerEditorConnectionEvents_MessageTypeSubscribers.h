#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents_MessageTypeSubscribers {
    IL2CPP_REGISTER_METHOD(0x02540BE0, void, ctor, (app::PlayerEditorConnectionEvents_MessageTypeSubscribers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02540D30, app::Guid, get_MessageTypeId, (app::PlayerEditorConnectionEvents_MessageTypeSubscribers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02540D70, void, set_MessageTypeId, (app::PlayerEditorConnectionEvents_MessageTypeSubscribers * this_ptr, app::Guid value))
}
