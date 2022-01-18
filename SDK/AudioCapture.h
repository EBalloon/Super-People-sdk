// Class AudioCapture.AudioCaptureComponent
class UAudioCaptureComponent : public USynthComponent {

public:

	int32_t JitterLatencyFrames; // 0x700 (4)
};

// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
struct FAudioCaptureDeviceInfo {
	struct FName DeviceName; // 0x0 (8)
	int32_t NumInputChannels; // 0x8 (4)
	int32_t SampleRate; // 0xC (4)
};

