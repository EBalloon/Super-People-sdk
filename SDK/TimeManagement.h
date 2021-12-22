// Enum TimeManagement.EFrameNumber
enum class EFrameNumber : uint8 {
	EFrameNumber = 0,
	EFrameNumber = 1,
	EFrameNumber = 2,
	EFrameNumber = 3,
	EFrameNumber = 4,
	EFrameNumber = 5
};

// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8 {
	ETimedDataInputState = 0,
	ETimedDataInputState = 1,
	ETimedDataInputState = 2,
	ETimedDataInputState = 3
};

// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8 {
	ETimedDataInputEvaluationType = 0,
	ETimedDataInputEvaluationType = 1,
	ETimedDataInputEvaluationType = 2,
	ETimedDataInputEvaluationType = 3
};

// Class TimeManagement.FixedFrameRateCustomTimeStep
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	struct Unknown FixedFrameRate; //  0x28 Size(8)
};

// Class TimeManagement.TimeSynchronizationSource
struct UTimeSynchronizationSource : Object {
	char bUseForSynchronization; //  0x28 Size(1)
	int32_t FrameOffset; //  0x2c Size(4)
};

