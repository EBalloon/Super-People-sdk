// Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
enum class EMagicLeapTouchpadGestureDirection : uint8 {
	EMagicLeapTouchpadGestureDirection = 0
	EMagicLeapTouchpadGestureDirection = 1
	EMagicLeapTouchpadGestureDirection = 2
	EMagicLeapTouchpadGestureDirection = 3
	EMagicLeapTouchpadGestureDirection = 4
	EMagicLeapTouchpadGestureDirection = 5
	EMagicLeapTouchpadGestureDirection = 6
	EMagicLeapTouchpadGestureDirection = 7
	EMagicLeapTouchpadGestureDirection = 8
	EMagicLeapTouchpadGestureDirection = 9
};

// Enum MagicLeapController.EMagicLeapTouchpadGestureType
enum class EMagicLeapTouchpadGestureType : uint8 {
	EMagicLeapTouchpadGestureType = 0
	EMagicLeapTouchpadGestureType = 1
	EMagicLeapTouchpadGestureType = 2
	EMagicLeapTouchpadGestureType = 3
	EMagicLeapTouchpadGestureType = 4
	EMagicLeapTouchpadGestureType = 5
	EMagicLeapTouchpadGestureType = 6
	EMagicLeapTouchpadGestureType = 7
	EMagicLeapTouchpadGestureType = 8
	EMagicLeapTouchpadGestureType = 9
	EMagicLeapTouchpadGestureType = 10
	EMagicLeapTouchpadGestureType = 11
};

// Enum MagicLeapController.EMagicLeapControllerTrackingMode
enum class EMagicLeapControllerTrackingMode : uint8 {
	EMagicLeapControllerTrackingMode = 0
	EMagicLeapControllerTrackingMode = 1
	EMagicLeapControllerTrackingMode = 2
};

// Enum MagicLeapController.EMagicLeapControllerHapticIntensity
enum class EMagicLeapControllerHapticIntensity : uint8 {
	EMagicLeapControllerHapticIntensity = 0
	EMagicLeapControllerHapticIntensity = 1
	EMagicLeapControllerHapticIntensity = 2
	EMagicLeapControllerHapticIntensity = 3
};

// Enum MagicLeapController.EMagicLeapControllerHapticPattern
enum class EMagicLeapControllerHapticPattern : uint8 {
	EMagicLeapControllerHapticPattern = 0
	EMagicLeapControllerHapticPattern = 1
	EMagicLeapControllerHapticPattern = 2
	EMagicLeapControllerHapticPattern = 3
	EMagicLeapControllerHapticPattern = 4
	EMagicLeapControllerHapticPattern = 5
	EMagicLeapControllerHapticPattern = 6
	EMagicLeapControllerHapticPattern = 7
	EMagicLeapControllerHapticPattern = 8
	EMagicLeapControllerHapticPattern = 9
	EMagicLeapControllerHapticPattern = 10
};

// Enum MagicLeapController.EMagicLeapControllerLEDSpeed
enum class EMagicLeapControllerLEDSpeed : uint8 {
	EMagicLeapControllerLEDSpeed = 0
	EMagicLeapControllerLEDSpeed = 1
	EMagicLeapControllerLEDSpeed = 2
	EMagicLeapControllerLEDSpeed = 3
};

// Enum MagicLeapController.EMagicLeapControllerLEDColor
enum class EMagicLeapControllerLEDColor : uint8 {
	EMagicLeapControllerLEDColor = 0
	EMagicLeapControllerLEDColor = 1
	EMagicLeapControllerLEDColor = 2
	EMagicLeapControllerLEDColor = 3
	EMagicLeapControllerLEDColor = 4
	EMagicLeapControllerLEDColor = 5
	EMagicLeapControllerLEDColor = 6
	EMagicLeapControllerLEDColor = 7
	EMagicLeapControllerLEDColor = 8
	EMagicLeapControllerLEDColor = 9
	EMagicLeapControllerLEDColor = 10
	EMagicLeapControllerLEDColor = 11
	EMagicLeapControllerLEDColor = 12
	EMagicLeapControllerLEDColor = 13
	EMagicLeapControllerLEDColor = 14
	EMagicLeapControllerLEDColor = 15
	EMagicLeapControllerLEDColor = 16
};

// Enum MagicLeapController.EMagicLeapControllerLEDEffect
enum class EMagicLeapControllerLEDEffect : uint8 {
	EMagicLeapControllerLEDEffect = 0
	EMagicLeapControllerLEDEffect = 1
	EMagicLeapControllerLEDEffect = 2
	EMagicLeapControllerLEDEffect = 3
	EMagicLeapControllerLEDEffect = 4
	EMagicLeapControllerLEDEffect = 5
	EMagicLeapControllerLEDEffect = 6
};

// Enum MagicLeapController.EMagicLeapControllerLEDPattern
enum class EMagicLeapControllerLEDPattern : uint8 {
	EMagicLeapControllerLEDPattern = 0
	EMagicLeapControllerLEDPattern = 1
	EMagicLeapControllerLEDPattern = 2
	EMagicLeapControllerLEDPattern = 3
	EMagicLeapControllerLEDPattern = 4
	EMagicLeapControllerLEDPattern = 5
	EMagicLeapControllerLEDPattern = 6
	EMagicLeapControllerLEDPattern = 7
	EMagicLeapControllerLEDPattern = 8
	EMagicLeapControllerLEDPattern = 9
	EMagicLeapControllerLEDPattern = 10
	EMagicLeapControllerLEDPattern = 11
	EMagicLeapControllerLEDPattern = 12
	EMagicLeapControllerLEDPattern = 13
	EMagicLeapControllerLEDPattern = 14
	EMagicLeapControllerLEDPattern = 15
	EMagicLeapControllerLEDPattern_11 = 16
	EMagicLeapControllerLEDPattern_12 = 17
	EMagicLeapControllerLEDPattern_13 = 18
	EMagicLeapControllerLEDPattern = 19
};

// Enum MagicLeapController.EMagicLeapControllerType
enum class EMagicLeapControllerType : uint8 {
	EMagicLeapControllerType = 0
	EMagicLeapControllerType = 1
	EMagicLeapControllerType = 2
	EMagicLeapControllerType = 3
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
class UMagicLeapTouchpadGesturesComponent : UActorComponent {
	struct FMulticastInlineDelegate OnTouchpadGestureStart; // 0xB8 (16)
	struct FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xC8 (16)
	struct FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xD8 (16)
};

// ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
struct FMagicLeapTouchpadGesture {
	enum class Unknow Hand; // 0x0 (1)
	struct FName MotionSource; // 0x4 (8)
	enum class Unknow Type; // 0xC (1)
	enum class Unknow Direction; // 0xD (1)
	struct Unknown PositionAndForce; // 0x10 (12)
	float Speed; // 0x1C (4)
	float Distance; // 0x20 (4)
	float FingerGap; // 0x24 (4)
	float Radius; // 0x28 (4)
	float Angle; // 0x2C (4)
};

