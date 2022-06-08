#include <interception_macros.h>

namespace app::methods::VideoEditor {
IL2CPP_REGISTER_METHOD(0x008BBD50, uint32_t, Execute, (String * path, String * parameters, String * workingDir));
IL2CPP_REGISTER_METHOD(0x008BC010, void, Start, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BC9F0, void, Display, (VideoEditor * __this, String * videoFile));
IL2CPP_REGISTER_METHOD(0x008BCD80, void, Hide, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BCFE0, void, Play, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BD1F0, void, Pause, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BD2D0, void, Record, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BD500, void, StopRecord, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BD6D0, void, Close, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BD700, void, UpdateTrim, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BD820, void, PrepareTrim, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BDEE0, void, CheckTrim, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BDFF0, void, Clear, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE230, void, Snapshot, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE2E0, void, Step, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE340, void, SlowDown, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE400, void, SpeedUp, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE4C0, String *, TimeToTimestamp, (VideoEditor * __this, double time));
IL2CPP_REGISTER_METHOD(0x008BE640, void, EndReached, (VideoEditor * __this, VideoPlayer * player));
IL2CPP_REGISTER_METHODINFO(0x04781E58, VideoEditor_EndReached__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008BE690, void, SeekCompleted, (VideoEditor * __this, VideoPlayer * player));
IL2CPP_REGISTER_METHODINFO(0x04768EA8, VideoEditor_SeekCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008BE6A0, void, PrepareCompleted, (VideoEditor * __this, VideoPlayer * player));
IL2CPP_REGISTER_METHODINFO(0x0470C5B8, VideoEditor_PrepareCompleted__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008BE720, void, SetTrimStart, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE820, void, SetTrimEnd, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BE920, void, SkipFromCurrent, (VideoEditor * __this, float time));
IL2CPP_REGISTER_METHOD(0x008BE9F0, float, GetTrimStart, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BEA80, float, GetTrimEnd, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BEB10, void, SwitchVideoEvent, (VideoEditor * __this, int32_t FMVevent));
IL2CPP_REGISTER_METHOD(0x008BEB60, void, OnGUI, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BEDA0, void, Update, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008BFDD0, void, SkipToPercent, (VideoEditor * __this, float pct));
IL2CPP_REGISTER_METHOD(0x008BFF60, float, GetProgress, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008C00D0, void, ResizeVideo, (VideoEditor * __this));
IL2CPP_REGISTER_METHOD(0x008C0350, void, __ctor, (VideoEditor * __this));
}
