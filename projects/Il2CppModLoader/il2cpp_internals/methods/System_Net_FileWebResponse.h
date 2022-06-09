#include <interception_macros.h>

namespace app::methods::System_Net::FileWebResponse {
IL2CPP_REGISTER_METHOD(0x01D2AEA0, void, __ctor_1, (app::FileWebResponse * this_ptr, app::FileWebRequest * request, app::Uri * uri, app::FileAccess__Enum access, bool async_hint));
IL2CPP_REGISTER_METHODINFO(0x047324B8, FileWebResponse__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2B360, void, __ctor_2, (app::FileWebResponse * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (app::FileWebResponse * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
IL2CPP_REGISTER_METHOD(0x01D2B540, void, GetObjectData, (app::FileWebResponse * this_ptr, app::SerializationInfo * serialization_info, app::StreamingContext streaming_context));
IL2CPP_REGISTER_METHOD(0x01D2B6A0, int64_t, get_ContentLength, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2B6C0, String *, get_ContentType, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2B750, WebHeaderCollection *, get_Headers, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsHeaders, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2B770, Uri *, get_ResponseUri, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2B790, void, CheckDisposed, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04764570, FileWebResponse_CheckDisposed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01D2B870, void, Close, (app::FileWebResponse * this_ptr));
IL2CPP_REGISTER_METHOD(0x01D2B900, void, ICloseEx_CloseEx, (app::FileWebResponse * this_ptr, app::CloseExState__Enum close_state));
IL2CPP_REGISTER_METHOD(0x01D2BA80, Stream *, GetResponseStream, (app::FileWebResponse * this_ptr));
}
