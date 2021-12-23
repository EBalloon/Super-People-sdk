// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8 {
	EMagicLeapEyeTrackingCalibrationStatus = 0
	EMagicLeapEyeTrackingCalibrationStatus = 1
	EMagicLeapEyeTrackingCalibrationStatus = 2
	EMagicLeapEyeTrackingCalibrationStatus = 3
};

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8 {
	EMagicLeapEyeTrackingStatus = 0
	EMagicLeapEyeTrackingStatus = 1
	EMagicLeapEyeTrackingStatus = 2
	EMagicLeapEyeTrackingStatus = 3
	EMagicLeapEyeTrackingStatus = 4
	EMagicLeapEyeTrackingStatus = 5
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
struct FMagicLeapEyeBlinkState {
	char LeftEyeBlinked : 0; // 0x0 (1)
	char RightEyeBlinked : 0; // 0x1 (1)
};

