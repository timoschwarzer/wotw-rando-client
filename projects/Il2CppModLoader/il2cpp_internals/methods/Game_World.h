#include <interception_macros.h>

namespace app::methods::Game::World {
IL2CPP_REGISTER_METHOD(0x00687440, RuntimeGameWorldArea *, get_CurrentArea, ());
IL2CPP_REGISTER_METHOD(0x006874D0, void, set_CurrentArea, (RuntimeGameWorldArea * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (World * __this));
}
