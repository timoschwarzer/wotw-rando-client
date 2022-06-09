#include <interception_macros.h>

namespace app::methods::UnityEngine_UI::Dropdown_DropdownItem {
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::Dropdown_DropdownItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F22F90, Text *, get_text, (app::Dropdown_DropdownItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_text, (app::Dropdown_DropdownItem * this_ptr, app::Text * value));
IL2CPP_REGISTER_METHOD(0x01F1C1D0, Image *, get_image, (app::Dropdown_DropdownItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_image, (app::Dropdown_DropdownItem * this_ptr, app::Image * value));
IL2CPP_REGISTER_METHOD(0x01F1A590, RectTransform *, get_rectTransform, (app::Dropdown_DropdownItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_rectTransform, (app::Dropdown_DropdownItem * this_ptr, app::RectTransform * value));
IL2CPP_REGISTER_METHOD(0x024ACCC0, Toggle *, get_toggle, (app::Dropdown_DropdownItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_toggle, (app::Dropdown_DropdownItem * this_ptr, app::Toggle * value));
IL2CPP_REGISTER_METHOD(0x024ACCD0, void, OnPointerEnter, (app::Dropdown_DropdownItem * this_ptr, app::PointerEventData * event_data));
IL2CPP_REGISTER_METHOD(0x024ACDE0, void, OnCancel, (app::Dropdown_DropdownItem * this_ptr, app::BaseEventData * event_data));
}
