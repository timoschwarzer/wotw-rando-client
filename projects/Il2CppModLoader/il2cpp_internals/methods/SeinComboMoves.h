#include <interception_macros.h>

namespace app::methods::SeinComboMoves {
IL2CPP_REGISTER_METHOD(0x002FB950, List_1_Moon_ComboSystem_ComboMove_ *, get_Moves, (app::SeinComboMoves * this_ptr));
IL2CPP_REGISTER_METHOD(0x006DB0C0, void, RegisterMove, (app::SeinComboMoves * this_ptr, app::ComboMove * move));
IL2CPP_REGISTER_METHOD(0x006DB3F0, ComboMove *, GetMoveByType, (app::SeinComboMoves * this_ptr, app::Type * move_type));
IL2CPP_REGISTER_METHOD(0x006DB510, void, __ctor, (app::SeinComboMoves * this_ptr));
}
