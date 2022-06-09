#include <interception_macros.h>

namespace app::methods::Unity_IO_Compression::HuffmanTree {
IL2CPP_REGISTER_METHOD(0x02B79C90, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x02B7A110, HuffmanTree *, get_StaticLiteralLengthTree, ());
IL2CPP_REGISTER_METHOD(0x02B7A1B0, HuffmanTree *, get_StaticDistanceTree, ());
IL2CPP_REGISTER_METHOD(0x02B7A250, void, __ctor, (app::HuffmanTree * this_ptr, app::Byte__Array * code_lengths));
IL2CPP_REGISTER_METHOD(0x02B7A2A0, Byte__Array *, GetStaticLiteralTreeLength, ());
IL2CPP_REGISTER_METHOD(0x02B7A3F0, Byte__Array *, GetStaticDistanceTreeLength, ());
IL2CPP_REGISTER_METHOD(0x02B7A4A0, UInt32__Array *, CalculateHuffmanCode, (app::HuffmanTree * this_ptr));
IL2CPP_REGISTER_METHOD(0x02B7A7B0, void, CreateTable, (app::HuffmanTree * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04745C98, HuffmanTree_CreateTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02B7AB30, int32_t, GetNextSymbol, (app::HuffmanTree * this_ptr, app::InputBuffer * input));
IL2CPP_REGISTER_METHODINFO(0x04745BC8, HuffmanTree_GetNextSymbol__MethodInfo);
}
