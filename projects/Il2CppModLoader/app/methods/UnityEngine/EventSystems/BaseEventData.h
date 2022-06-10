#include <interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::BaseEventData {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, (app::BaseEventData * this_ptr, app::EventSystem * event_system))
    IL2CPP_REGISTER_METHOD(0x0195B1D0, app::BaseInputModule *, get_currentInputModule, (app::BaseEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F19BE0, app::GameObject *, get_selectedObject, (app::BaseEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F19C00, void, set_selectedObject, (app::BaseEventData * this_ptr, app::GameObject * value))
}
