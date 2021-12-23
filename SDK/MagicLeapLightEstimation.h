// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8 {
	EMagicLeapLightEstimationCamera = 0
	EMagicLeapLightEstimationCamera = 1
	EMagicLeapLightEstimationCamera = 2
	EMagicLeapLightEstimationCamera = 3
	EMagicLeapLightEstimationCamera = 4
};

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	char UseGlobalAmbience : 0; // 0xB0 (1)
	char UseColorTemp : 0; // 0xB1 (1)
};

