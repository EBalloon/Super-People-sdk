// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t {
	EFrameNumberDisplayFormats = 0,
	EFrameNumberDisplayFormats = 1,
	EFrameNumberDisplayFormats = 2,
	EFrameNumberDisplayFormats = 3,
	EFrameNumberDisplayFormats = 4,
	EFrameNumberDisplayFormats = 5,
};

// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t {
	ETimedDataInputState = 0,
	ETimedDataInputState = 1,
	ETimedDataInputState = 2,
	ETimedDataInputState = 3,
};

// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t {
	ETimedDataInputEvaluationType = 0,
	ETimedDataInputEvaluationType = 1,
	ETimedDataInputEvaluationType = 2,
	ETimedDataInputEvaluationType = 3,
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

