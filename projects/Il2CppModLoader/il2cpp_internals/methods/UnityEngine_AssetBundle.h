#include <interception_macros.h>

namespace app::methods::UnityEngine::AssetBundle {
IL2CPP_REGISTER_METHOD(0x031C3A30, void, __ctor, (app::AssetBundle * this_ptr));
IL2CPP_REGISTER_METHOD(0x031C3AC0, Object_1 *, get_mainAsset, (app::AssetBundle * this_ptr));
IL2CPP_REGISTER_METHOD(0x031C3AC0, Object_1 *, returnMainAsset, (app::AssetBundle * bundle));
IL2CPP_REGISTER_METHOD(0x031C3B10, AssetBundle *, LoadFromMemory_Internal, (app::Byte__Array * binary, uint32_t crc));
IL2CPP_REGISTER_METHOD(0x031C3B70, AssetBundle *, LoadFromMemory, (app::Byte__Array * binary));
}
