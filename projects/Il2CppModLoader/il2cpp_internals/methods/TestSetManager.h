#include <interception_macros.h>

namespace app::methods::TestSetManager {
IL2CPP_REGISTER_METHOD(0x010DD360, TestSet *, get_CurrentTestSet, ());
IL2CPP_REGISTER_METHOD(0x010DD430, bool, get_IsPerformingTests, ());
IL2CPP_REGISTER_METHOD(0x010DD4D0, void, Start, (TestSetManager * __this));
IL2CPP_REGISTER_METHOD(0x010DD7F0, void, Init, ());
IL2CPP_REGISTER_METHOD(0x010DDA40, List_1_System_String_ *, GetRequestedTests, ());
IL2CPP_REGISTER_METHOD(0x010DDEC0, List_1_TestSet_ *, GetTestSets, ());
IL2CPP_REGISTER_METHOD(0x010DE3C0, void, RunNextTestSet, ());
IL2CPP_REGISTER_METHOD(0x010DE480, bool, HaveMoreTestSets, ());
IL2CPP_REGISTER_METHOD(0x010DE540, void, FinishedTestSet, ());
IL2CPP_REGISTER_METHOD(0x010DE970, void, FinishedTest, (bool passed));
IL2CPP_REGISTER_METHOD(0x010DEA30, Dictionary_2_System_String_System_Boolean_ *, GetResults, (String * reportFilePath));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (TestSetManager * __this));
IL2CPP_REGISTER_METHOD(0x010DEBB0, void, __cctor, ());
}
