#include <interception_macros.h>

namespace app::methods::System::SharedStatics {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::SharedStatics * this_ptr));
IL2CPP_REGISTER_METHOD(0x01E259D0, Tokenizer_StringMaker *, GetSharedStringMaker, ());
IL2CPP_REGISTER_METHOD(0x01E25D30, void, ReleaseSharedStringMaker, (app::Tokenizer_StringMaker * * maker));
IL2CPP_REGISTER_METHOD(0x01E25ED0, void, __cctor, ());
}
