// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8_t {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
class UMagicLeapLightingTrackingComponent : public UActorComponent {

public:

	char UseGlobalAmbience : 0; // 0xB0 (1)
	char UseColorTemp : 0; // 0xB1 (1)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0 (4)
	struct Unknown AmbientColor; // 0x4 (16)
	struct Unknown Timestamp; // 0x18 (8)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
struct FMagicLeapLightEstimationAmbientGlobalState {
	struct TArray<Unknown> AmbientIntensityNits; // 0x0 (16)
	struct Unknown Timestamp; // 0x10 (8)
};

