#include <interception_macros.h>

namespace app::methods::RecordingTransformTracker {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_TrackTranformChangesForRecording, (app::RecordingTransformTracker * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::RecordingTransformTracker * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008FB230, app::TrackingExclusions, get_TrackingExclusions, (app::RecordingTransformTracker * this_ptr));
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::RecordingTransformTracker * this_ptr));
    IL2CPP_REGISTER_METHOD(0x008FB240, void, Awake, (app::RecordingTransformTracker * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (app::RecordingTransformTracker * this_ptr));
}
