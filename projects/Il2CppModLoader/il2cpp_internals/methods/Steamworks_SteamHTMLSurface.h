#include <interception_macros.h>

namespace app::methods::Steamworks::SteamHTMLSurface {
IL2CPP_REGISTER_METHOD(0x02804CE0, bool, Init, ());
IL2CPP_REGISTER_METHOD(0x02804D90, bool, Shutdown, ());
IL2CPP_REGISTER_METHOD(0x02804E40, SteamAPICall_t, CreateBrowser, (String * pchUserAgent, String * pchUserCSS));
IL2CPP_REGISTER_METHOD(0x028052B0, void, RemoveBrowser, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02805360, void, LoadURL, (HHTMLBrowser unBrowserHandle, String * pchURL, String * pchPostData));
IL2CPP_REGISTER_METHOD(0x028057B0, void, SetSize, (HHTMLBrowser unBrowserHandle, uint32_t unWidth, uint32_t unHeight));
IL2CPP_REGISTER_METHOD(0x02805880, void, StopLoad, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02805930, void, Reload, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x028059E0, void, GoBack, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02805A90, void, GoForward, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02805B40, void, AddHeader, (HHTMLBrowser unBrowserHandle, String * pchKey, String * pchValue));
IL2CPP_REGISTER_METHOD(0x02805F90, void, ExecuteJavascript, (HHTMLBrowser unBrowserHandle, String * pchScript));
IL2CPP_REGISTER_METHOD(0x02806260, void, MouseUp, (HHTMLBrowser unBrowserHandle, EHTMLMouseButton__Enum eMouseButton));
IL2CPP_REGISTER_METHOD(0x02806320, void, MouseDown, (HHTMLBrowser unBrowserHandle, EHTMLMouseButton__Enum eMouseButton));
IL2CPP_REGISTER_METHOD(0x028063E0, void, MouseDoubleClick, (HHTMLBrowser unBrowserHandle, EHTMLMouseButton__Enum eMouseButton));
IL2CPP_REGISTER_METHOD(0x028064A0, void, MouseMove, (HHTMLBrowser unBrowserHandle, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x02806570, void, MouseWheel, (HHTMLBrowser unBrowserHandle, int32_t nDelta));
IL2CPP_REGISTER_METHOD(0x02806630, void, KeyDown, (HHTMLBrowser unBrowserHandle, uint32_t nNativeKeyCode, EHTMLKeyModifiers__Enum eHTMLKeyModifiers, bool bIsSystemKey));
IL2CPP_REGISTER_METHOD(0x02806720, void, KeyUp, (HHTMLBrowser unBrowserHandle, uint32_t nNativeKeyCode, EHTMLKeyModifiers__Enum eHTMLKeyModifiers));
IL2CPP_REGISTER_METHOD(0x028067F0, void, KeyChar, (HHTMLBrowser unBrowserHandle, uint32_t cUnicodeChar, EHTMLKeyModifiers__Enum eHTMLKeyModifiers));
IL2CPP_REGISTER_METHOD(0x028068C0, void, SetHorizontalScroll, (HHTMLBrowser unBrowserHandle, uint32_t nAbsolutePixelScroll));
IL2CPP_REGISTER_METHOD(0x02806980, void, SetVerticalScroll, (HHTMLBrowser unBrowserHandle, uint32_t nAbsolutePixelScroll));
IL2CPP_REGISTER_METHOD(0x02806A40, void, SetKeyFocus, (HHTMLBrowser unBrowserHandle, bool bHasKeyFocus));
IL2CPP_REGISTER_METHOD(0x02806B10, void, ViewSource, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02806BC0, void, CopyToClipboard, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02806C70, void, PasteFromClipboard, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02806D20, void, Find, (HHTMLBrowser unBrowserHandle, String * pchSearchStr, bool bCurrentlyInFind, bool bReverse));
IL2CPP_REGISTER_METHOD(0x02807000, void, StopFind, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x028070B0, void, GetLinkAtPosition, (HHTMLBrowser unBrowserHandle, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x02807180, void, SetCookie, (String * pchHostname, String * pchKey, String * pchValue, String * pchPath, uint32_t nExpires, bool bSecure, bool bHTTPOnly));
IL2CPP_REGISTER_METHOD(0x02807740, void, SetPageScaleFactor, (HHTMLBrowser unBrowserHandle, float flZoom, int32_t nPointX, int32_t nPointY));
IL2CPP_REGISTER_METHOD(0x02807830, void, SetBackgroundMode, (HHTMLBrowser unBrowserHandle, bool bBackgroundMode));
IL2CPP_REGISTER_METHOD(0x02807900, void, SetDPIScalingFactor, (HHTMLBrowser unBrowserHandle, float flDPIScaling));
IL2CPP_REGISTER_METHOD(0x028079C0, void, OpenDeveloperTools, (HHTMLBrowser unBrowserHandle));
IL2CPP_REGISTER_METHOD(0x02807A70, void, AllowStartRequest, (HHTMLBrowser unBrowserHandle, bool bAllowed));
IL2CPP_REGISTER_METHOD(0x02807B40, void, JSDialogResponse, (HHTMLBrowser unBrowserHandle, bool bResult));
IL2CPP_REGISTER_METHOD(0x02807C10, void, FileLoadDialogResponse, (HHTMLBrowser unBrowserHandle, void * pchSelectedFiles));
}
