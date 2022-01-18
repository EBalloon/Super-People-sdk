// Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
enum class EMagicLeapTouchpadGestureDirection : uint8_t {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	In = 5,
	Out = 6,
	Clockwise = 7,
	CounterClockwise = 8,
	EMagicLeapTouchpadGestureDirection_MAX = 9,
};

// Enum MagicLeapController.EMagicLeapTouchpadGestureType
enum class EMagicLeapTouchpadGestureType : uint8_t {
	None = 0,
	Tap = 1,
	ForceTapDown = 2,
	ForceTapUp = 3,
	ForceDwell = 4,
	SecondForceDown = 5,
	LongHold = 6,
	RadialScroll = 7,
	Swipe = 8,
	Scroll = 9,
	Pinch = 10,
	EMagicLeapTouchpadGestureType_MAX = 11,
};

// Enum MagicLeapController.EMagicLeapControllerTrackingMode
enum class EMagicLeapControllerTrackingMode : uint8_t {
	InputService = 0,
	CoordinateFrameUID = 1,
	EMagicLeapControllerTrackingMode_MAX = 2,
};

// Enum MagicLeapController.EMagicLeapControllerHapticIntensity
enum class EMagicLeapControllerHapticIntensity : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EMagicLeapControllerHapticIntensity_MAX = 3,
};

// Enum MagicLeapController.EMagicLeapControllerHapticPattern
enum class EMagicLeapControllerHapticPattern : uint8_t {
	None = 0,
	Click = 1,
	Bump = 2,
	DoubleClick = 3,
	Buzz = 4,
	Tick = 5,
	ForceDown = 6,
	ForceUp = 7,
	ForceDwell = 8,
	SecondForceDown = 9,
	EMagicLeapControllerHapticPattern_MAX = 10,
};

// Enum MagicLeapController.EMagicLeapControllerLEDSpeed
enum class EMagicLeapControllerLEDSpeed : uint8_t {
	Slow = 0,
	Medium = 1,
	Fast = 2,
	EMagicLeapControllerLEDSpeed_MAX = 3,
};

// Enum MagicLeapController.EMagicLeapControllerLEDColor
enum class EMagicLeapControllerLEDColor : uint8_t {
	BrightMissionRed = 0,
	PastelMissionRed = 1,
	BrightFloridaOrange = 2,
	PastelFloridaOrange = 3,
	BrightLunaYellow = 4,
	PastelLunaYellow = 5,
	BrightNebulaPink = 6,
	PastelNebulaPink = 7,
	BrightCosmicPurple = 8,
	PastelCosmicPurple = 9,
	BrightMysticBlue = 10,
	PastelMysticBlue = 11,
	BrightCelestialBlue = 12,
	PastelCelestialBlue = 13,
	BrightShaggleGreen = 14,
	PastelShaggleGreen = 15,
	EMagicLeapControllerLEDColor_MAX = 16,
};

// Enum MagicLeapController.EMagicLeapControllerLEDEffect
enum class EMagicLeapControllerLEDEffect : uint8_t {
	RotateCW = 0,
	RotateCCW = 1,
	Pulse = 2,
	PaintCW = 3,
	PaintCCW = 4,
	Blink = 5,
	EMagicLeapControllerLEDEffect_MAX = 6,
};

// Enum MagicLeapController.EMagicLeapControllerLEDPattern
enum class EMagicLeapControllerLEDPattern : uint8_t {
	None = 0,
	Clock01 = 1,
	Clock02 = 2,
	Clock03 = 3,
	Clock04 = 4,
	Clock05 = 5,
	Clock06 = 6,
	Clock07 = 7,
	Clock08 = 8,
	Clock09 = 9,
	Clock10 = 10,
	Clock11 = 11,
	Clock12 = 12,
	Clock01_07 = 13,
	Clock02_08 = 14,
	Clock03_09 = 15,
	Clock04_11 = 16,
	Clock05_12 = 17,
	Clock06_13 = 18,
	EMagicLeapControllerLEDPattern_MAX = 19,
};

// Enum MagicLeapController.EMagicLeapControllerType
enum class EMagicLeapControllerType : uint8_t {
	None = 0,
	Device = 1,
	MobileApp = 2,
	EMagicLeapControllerType_MAX = 3,
};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
class UMagicLeapTouchpadGesturesComponent : public UActorComponent {

public:

	struct FMulticastInlineDelegate OnTouchpadGestureStart; // 0xB8 (16)
	struct FMulticastInlineDelegate OnTouchpadGestureContinue; // 0xC8 (16)
	struct FMulticastInlineDelegate OnTouchpadGestureEnd; // 0xD8 (16)
};

// ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
struct FMagicLeapTouchpadGesture {
	enum class EControllerHand Hand; // 0x0 (1)
	struct FName MotionSource; // 0x4 (8)
	enum class EMagicLeapTouchpadGestureType Type; // 0xC (1)
	enum class EMagicLeapTouchpadGestureDirection Direction; // 0xD (1)
	struct FVector PositionAndForce; // 0x10 (12)
	float Speed; // 0x1C (4)
	float Distance; // 0x20 (4)
	float FingerGap; // 0x24 (4)
	float Radius; // 0x28 (4)
	float Angle; // 0x2C (4)
};

