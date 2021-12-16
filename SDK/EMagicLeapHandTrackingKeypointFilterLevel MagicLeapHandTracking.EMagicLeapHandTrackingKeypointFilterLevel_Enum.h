// EMagicLeapHandTrackingKeypointFilterLevel MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8 {
	World = 0,
	Hand = 1,
	Tracking = 2,
	EMagicLeapGestureTransformSpace_MAX = 3,
	NoFilter = 0,
	SlightRobustnessToFlicker = 1,
	MoreRobustnessToFlicker = 2,
	EMagicLeapHandTrackingGestureFilterLevel_MAX = 3,
	NoFilter = 0,
	SimpleSmoothing = 1,
	PredictiveSmoothing = 2,
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3
};

