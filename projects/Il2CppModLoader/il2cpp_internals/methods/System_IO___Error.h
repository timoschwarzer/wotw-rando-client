#include <interception_macros.h>

namespace app::methods::System::IO::__Error {
IL2CPP_REGISTER_METHOD(0x0238B580, void, EndOfFile, ());
IL2CPP_REGISTER_METHODINFO(0x04713E00, _Error_EndOfFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B5F0, void, FileNotOpen, ());
IL2CPP_REGISTER_METHODINFO(0x04729AF0, _Error_FileNotOpen__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B660, void, StreamIsClosed, ());
IL2CPP_REGISTER_METHODINFO(0x04768DD8, _Error_StreamIsClosed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B6D0, void, MemoryStreamNotExpandable, ());
IL2CPP_REGISTER_METHODINFO(0x047839E8, _Error_MemoryStreamNotExpandable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B740, void, ReaderClosed, ());
IL2CPP_REGISTER_METHODINFO(0x0478A278, _Error_ReaderClosed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B7B0, void, ReadNotSupported, ());
IL2CPP_REGISTER_METHODINFO(0x0470AD50, _Error_ReadNotSupported__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B820, void, WrongAsyncResult, ());
IL2CPP_REGISTER_METHODINFO(0x04714C88, _Error_WrongAsyncResult__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B890, void, EndReadCalledTwice, ());
IL2CPP_REGISTER_METHODINFO(0x04721498, _Error_EndReadCalledTwice__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B900, void, EndWriteCalledTwice, ());
IL2CPP_REGISTER_METHODINFO(0x04786468, _Error_EndWriteCalledTwice__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238B970, String *, GetDisplayablePath, (String * path, bool isInvalidPath));
IL2CPP_REGISTER_METHOD(0x0238BAC0, void, WinIOError, (int32_t errorCode, String * maybeFullPath));
IL2CPP_REGISTER_METHODINFO(0x04730178, _Error_WinIOError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238C1E0, void, WriteNotSupported, ());
IL2CPP_REGISTER_METHODINFO(0x047583A0, _Error_WriteNotSupported__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238C250, void, WriterClosed, ());
IL2CPP_REGISTER_METHODINFO(0x04799A10, _Error_WriterClosed__MethodInfo);
}
