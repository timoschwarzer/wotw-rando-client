#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Action_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FD190, void, Invoke, (app::Action_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData obj))
    IL2CPP_REGISTER_METHOD(0x029FEF00, app::IAsyncResult *, BeginInvoke, (app::Action_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ * this_ptr, app::IAsyncResult * result))
}
