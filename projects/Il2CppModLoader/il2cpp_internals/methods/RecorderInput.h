#include <interception_macros.h>

namespace app::methods::RecorderInput {
IL2CPP_REGISTER_METHOD(0x008F1A10, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x008F1AC0, bool, IsReplayProvided, ());
IL2CPP_REGISTER_METHOD(0x008F1BA0, void, Init, ());
IL2CPP_REGISTER_METHOD(0x008F2140, String *, GetReplayCommandFilePath, ());
IL2CPP_REGISTER_METHOD(0x008F2210, void, Save, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RecorderInput * __this));
IL2CPP_REGISTER_METHOD(0x008F2550, void, __cctor, ());
}
