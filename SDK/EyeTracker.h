// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData {
	struct FVector LeftEyeOrigin; // 0x0 (12)
	struct FVector LeftEyeDirection; // 0xC (12)
	struct FVector RightEyeOrigin; // 0x18 (12)
	struct FVector RightEyeDirection; // 0x24 (12)
	struct FVector FixationPoint; // 0x30 (12)
	float ConfidenceValue; // 0x3C (4)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
struct FEyeTrackerGazeData {
	struct FVector GazeOrigin; // 0x0 (12)
	struct FVector GazeDirection; // 0xC (12)
	struct FVector FixationPoint; // 0x18 (12)
	float ConfidenceValue; // 0x24 (4)
};

