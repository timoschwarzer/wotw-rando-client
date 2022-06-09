#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::ClientIdentity {
    IL2CPP_REGISTER_METHOD(0x01AA0200, void, __ctor, (app::ClientIdentity * this_ptr, app::String * object_uri, app::ObjRef * obj_ref));
    IL2CPP_REGISTER_METHOD(0x01AA0300, app::MarshalByRefObject *, get_ClientProxy, (app::ClientIdentity * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01AA03F0, void, set_ClientProxy, (app::ClientIdentity * this_ptr, app::MarshalByRefObject * value));
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::ObjRef *, CreateObjRef, (app::ClientIdentity * this_ptr, app::Type * requested_type));
    IL2CPP_REGISTER_METHOD(0x008C5A90, app::String *, get_TargetUri, (app::ClientIdentity * this_ptr));
}
