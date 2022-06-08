#include <interception_macros.h>

namespace app::methods::System::IO::StreamReader {
IL2CPP_REGISTER_METHOD(0x012EE6D0, int32_t, get_DefaultBufferSize, ());
IL2CPP_REGISTER_METHOD(0x0237F810, void, CheckAsyncTaskInProgress, (StreamReader * __this));
IL2CPP_REGISTER_METHODINFO(0x047394C8, StreamReader_CheckAsyncTaskInProgress__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237F8F0, void, __ctor, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x0237F980, void, __ctor, (StreamReader * __this, Stream * stream));
IL2CPP_REGISTER_METHOD(0x0237FA60, void, __ctor, (StreamReader * __this, Stream * stream, bool detectEncodingFromByteOrderMarks));
IL2CPP_REGISTER_METHOD(0x0237FB50, void, __ctor, (StreamReader * __this, Stream * stream, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x0237FC30, void, __ctor, (StreamReader * __this, Stream * stream, Encoding * encoding, bool detectEncodingFromByteOrderMarks));
IL2CPP_REGISTER_METHOD(0x0237FD20, void, __ctor, (StreamReader * __this, Stream * stream, Encoding * encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen));
IL2CPP_REGISTER_METHODINFO(0x0478FEF0, StreamReader__ctor_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0237FF00, void, __ctor, (StreamReader * __this, String * path));
IL2CPP_REGISTER_METHOD(0x0237FFE0, void, __ctor, (StreamReader * __this, String * path, bool detectEncodingFromByteOrderMarks));
IL2CPP_REGISTER_METHOD(0x023800D0, void, __ctor, (StreamReader * __this, String * path, Encoding * encoding));
IL2CPP_REGISTER_METHOD(0x023801B0, void, __ctor, (StreamReader * __this, String * path, Encoding * encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize));
IL2CPP_REGISTER_METHOD(0x023801E0, void, __ctor, (StreamReader * __this, String * path, Encoding * encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool checkHost));
IL2CPP_REGISTER_METHODINFO(0x04702D18, StreamReader__ctor_10__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023804E0, void, Init, (StreamReader * __this, Stream * stream, Encoding * encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen));
IL2CPP_REGISTER_METHOD(0x02380640, void, Init, (StreamReader * __this, Stream * stream));
IL2CPP_REGISTER_METHOD(0x02380650, void, Close, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02380670, void, Dispose, (StreamReader * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x002FB950, Encoding *, get_CurrentEncoding, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Stream *, get_BaseStream, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02380750, bool, get_LeaveOpen, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02380760, bool, get_EndOfStream, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x023807B0, int32_t, Peek, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02380840, bool, DataAvailable, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02380850, int32_t, Read, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x023808E0, int32_t, Read, (StreamReader * __this, Char__Array * buffer, int32_t index, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0476D3B8, StreamReader_Read_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02380B40, String *, ReadToEnd, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02380D20, void, CompressBuffer, (StreamReader * __this, int32_t n));
IL2CPP_REGISTER_METHOD(0x02380D60, void, DetectEncoding, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x023813E0, bool, IsPreamble, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02381530, int32_t, ReadBuffer, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02381710, int32_t, ReadBuffer, (StreamReader * __this, Char__Array * userBuffer, int32_t userOffset, int32_t desiredChars, bool * readToUserBuffer));
IL2CPP_REGISTER_METHOD(0x02381990, String *, ReadLine, (StreamReader * __this));
IL2CPP_REGISTER_METHOD(0x02381C90, void, __cctor, ());
}
