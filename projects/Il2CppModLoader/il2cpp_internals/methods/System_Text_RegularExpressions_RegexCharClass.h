#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::RegexCharClass {
IL2CPP_REGISTER_METHOD(0x02588600, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x0258D500, void, __ctor, (RegexCharClass * __this));
IL2CPP_REGISTER_METHOD(0x0258D760, void, __ctor, (RegexCharClass * __this, bool negate, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * ranges, StringBuilder * categories, RegexCharClass * subtraction));
IL2CPP_REGISTER_METHOD(0x0258D780, bool, get_CanMerge, (RegexCharClass * __this));
IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_Negate, (RegexCharClass * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0258D7A0, void, AddChar, (RegexCharClass * __this, uint16_t c));
IL2CPP_REGISTER_METHOD(0x0258D7B0, void, AddCharClass, (RegexCharClass * __this, RegexCharClass * cc));
IL2CPP_REGISTER_METHOD(0x0258D9C0, void, AddSet, (RegexCharClass * __this, String * set));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, AddSubtraction, (RegexCharClass * __this, RegexCharClass * sub));
IL2CPP_REGISTER_METHOD(0x0258DDB0, void, AddRange, (RegexCharClass * __this, uint16_t first, uint16_t last));
IL2CPP_REGISTER_METHOD(0x0258DF90, void, AddCategoryFromName, (RegexCharClass * __this, String * categoryName, bool invert, bool caseInsensitive, String * pattern));
IL2CPP_REGISTER_METHOD(0x0258E270, void, AddCategory, (RegexCharClass * __this, String * category));
IL2CPP_REGISTER_METHOD(0x0258E290, void, AddLowercase, (RegexCharClass * __this, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x0258E410, void, AddLowercaseRange, (RegexCharClass * __this, uint16_t chMin, uint16_t chMax, CultureInfo * culture));
IL2CPP_REGISTER_METHOD(0x0258E740, void, AddWord, (RegexCharClass * __this, bool ecma, bool negate));
IL2CPP_REGISTER_METHOD(0x0258E8B0, void, AddSpace, (RegexCharClass * __this, bool ecma, bool negate));
IL2CPP_REGISTER_METHOD(0x0258EA20, void, AddDigit, (RegexCharClass * __this, bool ecma, bool negate, String * pattern));
IL2CPP_REGISTER_METHOD(0x0258EB10, uint16_t, SingletonChar, (String * set));
IL2CPP_REGISTER_METHOD(0x0258EB30, bool, IsMergeable, (String * charClass));
IL2CPP_REGISTER_METHOD(0x0258EC60, bool, IsEmpty, (String * charClass));
IL2CPP_REGISTER_METHOD(0x0258ED50, bool, IsSingleton, (String * set));
IL2CPP_REGISTER_METHOD(0x0258EEA0, bool, IsSingletonInverse, (String * set));
IL2CPP_REGISTER_METHOD(0x0258EFF0, bool, IsSubtraction, (String * charClass));
IL2CPP_REGISTER_METHOD(0x0258F050, bool, IsNegated, (String * set));
IL2CPP_REGISTER_METHOD(0x0258F080, bool, IsECMAWordChar, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0258F120, bool, IsWordChar, (uint16_t ch));
IL2CPP_REGISTER_METHOD(0x0258F1F0, bool, CharInClass, (uint16_t ch, String * set));
IL2CPP_REGISTER_METHOD(0x0258F2A0, bool, CharInClassRecursive, (uint16_t ch, String * set, int32_t start));
IL2CPP_REGISTER_METHOD(0x0258F500, bool, CharInClassInternal, (uint16_t ch, String * set, int32_t start, int32_t mySetLength, int32_t myCategoryLength));
IL2CPP_REGISTER_METHOD(0x0258F640, bool, CharInCategory, (uint16_t ch, String * set, int32_t start, int32_t mySetLength, int32_t myCategoryLength));
IL2CPP_REGISTER_METHOD(0x0258F820, bool, CharInCategoryGroup, (uint16_t ch, UnicodeCategory__Enum chcategory, String * category, int32_t * i));
IL2CPP_REGISTER_METHOD(0x0258F8F0, String *, NegateCategory, (String * category));
IL2CPP_REGISTER_METHOD(0x0258FBD0, RegexCharClass *, Parse, (String * charClass));
IL2CPP_REGISTER_METHOD(0x0258FC70, RegexCharClass *, ParseRecursive, (String * charClass, int32_t start));
IL2CPP_REGISTER_METHOD(0x02590230, int32_t, RangeCount, (RegexCharClass * __this));
IL2CPP_REGISTER_METHOD(0x025902C0, String *, ToStringClass, (RegexCharClass * __this));
IL2CPP_REGISTER_METHOD(0x02590710, RegexCharClass_SingleRange *, GetRangeAt, (RegexCharClass * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x025907C0, void, Canonicalize, (RegexCharClass * __this));
IL2CPP_REGISTER_METHOD(0x02590BB0, String *, SetFromProperty, (String * capname, bool invert, String * pattern));
IL2CPP_REGISTER_METHODINFO(0x0476A7D8, RegexCharClass_SetFromProperty__MethodInfo);
}
