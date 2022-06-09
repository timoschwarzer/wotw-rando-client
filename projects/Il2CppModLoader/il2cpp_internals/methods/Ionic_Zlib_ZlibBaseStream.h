#include <interception_macros.h>

namespace app::methods::Ionic_Zlib::ZlibBaseStream {
IL2CPP_REGISTER_METHOD(0x03076B70, int32_t, get_Crc32, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03076B80, void, __ctor, (app::ZlibBaseStream * this_ptr, app::Stream * stream, app::CompressionMode__Enum_1 compression_mode, app::CompressionLevel__Enum level, app::ZlibStreamFlavor__Enum flavor, bool leave_open));
IL2CPP_REGISTER_METHOD(0x03076D60, bool, get__wantCompress, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03076D70, ZlibCodec *, get_z, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03076F30, Byte__Array *, get_workingBuffer, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03076FC0, void, Write, (app::ZlibBaseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04728F78, ZlibBaseStream_Write__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03077300, void, finish, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04796130, ZlibBaseStream_finish__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03077AA0, void, end, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03077C70, void, Close, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03077D40, void, Flush, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03077D70, int64_t, Seek, (app::ZlibBaseStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin));
IL2CPP_REGISTER_METHODINFO(0x0477FC68, ZlibBaseStream_Seek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03077DC0, void, SetLength, (app::ZlibBaseStream * this_ptr, int64_t value));
IL2CPP_REGISTER_METHOD(0x03077DF0, String *, ReadZeroTerminatedString, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04755DB0, ZlibBaseStream_ReadZeroTerminatedString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030781F0, int32_t, _ReadAndValidateGzipHeader, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0476B5F8, ZlibBaseStream__ReadAndValidateGzipHeader__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078620, int32_t, Read, (app::ZlibBaseStream * this_ptr, app::Byte__Array * buffer, int32_t offset, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04752F50, ZlibBaseStream_Read__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078C20, bool, get_CanRead, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03078C50, bool, get_CanSeek, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03078C80, bool, get_CanWrite, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03078CB0, int64_t, get_Length, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHOD(0x03078CE0, int64_t, get_Position, (app::ZlibBaseStream * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04734B20, ZlibBaseStream_get_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078D30, void, set_Position, (app::ZlibBaseStream * this_ptr, int64_t value));
IL2CPP_REGISTER_METHODINFO(0x0478F738, ZlibBaseStream_set_Position__MethodInfo);
IL2CPP_REGISTER_METHOD(0x03078D80, void, CompressBuffer, (app::Byte__Array * b, app::Stream * compressor));
IL2CPP_REGISTER_METHOD(0x03078EB0, Byte__Array *, UncompressBuffer, (app::Byte__Array * compressed, app::Stream * decompressor));
}
