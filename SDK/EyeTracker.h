// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t {
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3,
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
struct FEyeTrackerStereoGazeData {
	struct Unknown LeftEyeOrigin; // 0x0 (12)
	struct Unknown LeftEyeDirection; // 0xC (12)
	struct Unknown RightEyeOrigin; // 0x18 (12)
	struct Unknown RightEyeDirection; // 0x24 (12)
	struct Unknown FixationPoint; // 0x30 (12)
	float ConfidenceValue; // 0x3C (4)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
struct FEyeTrackerGazeData {
	struct Unknown GazeOrigin; // 0x0 (12)
	struct Unknown GazeDirection; // 0xC (12)
	struct Unknown FixationPoint; // 0x18 (12)
	float ConfidenceValue; // 0x24 (4)
};

