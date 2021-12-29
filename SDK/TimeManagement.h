// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5,
};

// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3,
};

// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3,
};

// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep {

public:

	struct Unknown FixedFrameRate; // 0x28 (8)
};

// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public Object {

public:

	char bUseForSynchronization : 0; // 0x28 (1)
	int32_t FrameOffset; // 0x2C (4)
};

// ScriptStruct TimeManagement.TimedDataInputEvaluationData
struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0 (4)
	float DistanceToOldestSampleSeconds; // 0x4 (4)
};

