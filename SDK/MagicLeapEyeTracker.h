// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t {
	None = 0,
	Bad = 1,
	Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3,
};

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8_t {
	NotConnected = 0,
	Disabled = 1,
	UserNotPresent = 2,
	UserPresent = 3,
	UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5,
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
struct FMagicLeapEyeBlinkState {
	char LeftEyeBlinked : 0; // 0x0 (1)
	char RightEyeBlinked : 0; // 0x1 (1)
};

