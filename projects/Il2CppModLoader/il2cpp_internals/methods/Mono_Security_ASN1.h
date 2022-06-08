#include <interception_macros.h>

namespace app::methods::Mono::Security::ASN1 {
IL2CPP_REGISTER_METHOD(0x023CF080, void, __ctor, (ASN1 * __this, uint8_t tag));
IL2CPP_REGISTER_METHOD(0x0149F480, void, __ctor, (ASN1 * __this, uint8_t tag, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x023CF090, void, __ctor, (ASN1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x0472FD68, ASN1__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CF240, int32_t, get_Count, (ASN1 * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, uint8_t, get_Tag, (ASN1 * __this));
IL2CPP_REGISTER_METHOD(0x023CF260, int32_t, get_Length, (ASN1 * __this));
IL2CPP_REGISTER_METHOD(0x023CF270, Byte__Array *, get_Value, (ASN1 * __this));
IL2CPP_REGISTER_METHOD(0x023CF3D0, void, set_Value, (ASN1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x023CF520, bool, CompareArray, (ASN1 * __this, Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x023CF5C0, bool, CompareValue, (ASN1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x023CF650, ASN1 *, Add, (ASN1 * __this, ASN1 * asn1));
IL2CPP_REGISTER_METHOD(0x023CF7E0, Byte__Array *, GetBytes, (ASN1 * __this));
IL2CPP_REGISTER_METHOD(0x023CFFF0, void, Decode, (ASN1 * __this, Byte__Array * asn1, int32_t * anPos, int32_t anLength));
IL2CPP_REGISTER_METHOD(0x023D0210, void, DecodeTLV, (ASN1 * __this, Byte__Array * asn1, int32_t * pos, uint8_t * tag, int32_t * length, Byte__Array * * content));
IL2CPP_REGISTER_METHOD(0x023D0390, ASN1 *, get_Item, (ASN1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x023D0480, ASN1 *, Element, (ASN1 * __this, int32_t index, uint8_t anTag));
IL2CPP_REGISTER_METHOD(0x023D0590, String *, ToString, (ASN1 * __this));
IL2CPP_REGISTER_METHOD(0x023CF080, void, __ctor, (ASN1_1 * __this, uint8_t tag));
IL2CPP_REGISTER_METHOD(0x0149F480, void, __ctor, (ASN1_1 * __this, uint8_t tag, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x02A36250, void, __ctor, (ASN1_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHODINFO(0x0473FEC0, ASN1_1__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023CF240, int32_t, get_Count, (ASN1_1 * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, uint8_t, get_Tag, (ASN1_1 * __this));
IL2CPP_REGISTER_METHOD(0x023CF260, int32_t, get_Length, (ASN1_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A36400, Byte__Array *, get_Value, (ASN1_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A36560, void, set_Value, (ASN1_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x023CF520, bool, CompareArray, (ASN1_1 * __this, Byte__Array * array1, Byte__Array * array2));
IL2CPP_REGISTER_METHOD(0x023CF5C0, bool, CompareValue, (ASN1_1 * __this, Byte__Array * value));
IL2CPP_REGISTER_METHOD(0x02A366B0, ASN1_1 *, Add, (ASN1_1 * __this, ASN1_1 * asn1));
IL2CPP_REGISTER_METHOD(0x02A36840, Byte__Array *, GetBytes, (ASN1_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A37050, void, Decode, (ASN1_1 * __this, Byte__Array * asn1, int32_t * anPos, int32_t anLength));
IL2CPP_REGISTER_METHOD(0x02A37270, void, DecodeTLV, (ASN1_1 * __this, Byte__Array * asn1, int32_t * pos, uint8_t * tag, int32_t * length, Byte__Array * * content));
IL2CPP_REGISTER_METHOD(0x02A373F0, ASN1_1 *, get_Item, (ASN1_1 * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02A374E0, ASN1_1 *, Element, (ASN1_1 * __this, int32_t index, uint8_t anTag));
IL2CPP_REGISTER_METHOD(0x02A375F0, String *, ToString, (ASN1_1 * __this));
}
