// EMagicLeapHandTrackingGesture MagicLeapHandTracking.EMagicLeapHandTrackingGesture
enum class EMagicLeapHandTrackingGesture : uint8 {
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
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3,
	Finger = 0,
	Fist = 1,
	Pinch = 2,
	Thumb = 3,
	L = 4,
	OpenHand = 5,
	OpenHandBack = 5,
	Ok = 6,
	C = 7,
	NoPose = 8,
	NoHand = 9,
	EMagicLeapHandTrackingGesture_MAX = 10
};

