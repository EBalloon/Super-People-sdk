// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t {
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6,
};

// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t {
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3,
};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t {
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3,
};

// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t {
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3,
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t {
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14,
};

// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t {
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_SpectatorOrOwner = 14,
	COND_SpectatorOrOwnerOrReplay = 15,
	COND_Never = 16,
	COND_Max = 17,
};

// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t {
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3,
};

// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t {
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3,
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8_t {
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 43,
	Seconds = 44,
	Minutes = 45,
	Hours = 46,
	Days = 47,
	Months = 48,
	Years = 49,
	Multiplier = 52,
	Percentage = 51,
	Unspecified = 53,
	EUnit_MAX = 54,
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t {
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_1 = 64,
	PF_PLATFORM_HDR_2 = 65,
	PF_PLATFORM_HDR_3 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_MAX = 71,
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8_t {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4,
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t {
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4,
};

// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t {
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2,
};

// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2,
};

// ScriptStruct CoreUObject.JoinabilitySettings
struct FJoinabilitySettings {
	struct FName SessionName; // 0x0 (8)
	char bPublicSearchable : 0; // 0x8 (1)
	char bAllowInvites : 0; // 0x9 (1)
	char bJoinViaPresence : 0; // 0xA (1)
	char bJoinViaPresenceFriendsOnly : 0; // 0xB (1)
	int32_t MaxPlayers; // 0xC (4)
	int32_t MaxPartySize; // 0x10 (4)
};

// ScriptStruct CoreUObject.Guid
struct FGuid {
	int32_t A; // 0x0 (4)
	int32_t B; // 0x4 (4)
	int32_t C; // 0x8 (4)
	int32_t D; // 0xC (4)
};

// ScriptStruct CoreUObject.Vector
struct FVector {
	float X; // 0x0 (4)
	float Y; // 0x4 (4)
	float Z; // 0x8 (4)
};

// ScriptStruct CoreUObject.Vector4
struct FVector4 {
	float X; // 0x0 (4)
	float Y; // 0x4 (4)
	float Z; // 0x8 (4)
	float W; // 0xC (4)
};

// ScriptStruct CoreUObject.Vector2D
struct FVector2D {
	float X; // 0x0 (4)
	float Y; // 0x4 (4)
};

// ScriptStruct CoreUObject.TwoVectors
struct FTwoVectors {
	struct Unknown v1; // 0x0 (12)
	struct Unknown v2; // 0xC (12)
};

// ScriptStruct CoreUObject.Plane
struct FPlane : FVector {
	float W; // 0xC (4)
};

// ScriptStruct CoreUObject.Rotator
struct FRotator {
	float Pitch; // 0x0 (4)
	float Yaw; // 0x4 (4)
	float Roll; // 0x8 (4)
};

// ScriptStruct CoreUObject.Quat
struct FQuat {
	float X; // 0x0 (4)
	float Y; // 0x4 (4)
	float Z; // 0x8 (4)
	float W; // 0xC (4)
};

// ScriptStruct CoreUObject.PackedNormal
struct FPackedNormal {
	char X; // 0x0 (1)
	char Y; // 0x1 (1)
	char Z; // 0x2 (1)
	char W; // 0x3 (1)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
struct FPackedRGB10A2N {
	int32_t Packed; // 0x0 (4)
};

// ScriptStruct CoreUObject.PackedRGBA16N
struct FPackedRGBA16N {
	int32_t XY; // 0x0 (4)
	int32_t ZW; // 0x4 (4)
};

// ScriptStruct CoreUObject.IntPoint
struct FIntPoint {
	int32_t X; // 0x0 (4)
	int32_t Y; // 0x4 (4)
};

// ScriptStruct CoreUObject.IntVector
struct FIntVector {
	int32_t X; // 0x0 (4)
	int32_t Y; // 0x4 (4)
	int32_t Z; // 0x8 (4)
};

// ScriptStruct CoreUObject.Color
struct FColor {
	char B; // 0x0 (1)
	char G; // 0x1 (1)
	char R; // 0x2 (1)
	char A; // 0x3 (1)
};

// ScriptStruct CoreUObject.LinearColor
struct FLinearColor {
	float R; // 0x0 (4)
	float G; // 0x4 (4)
	float B; // 0x8 (4)
	float A; // 0xC (4)
};

// ScriptStruct CoreUObject.Box
struct FBox {
	struct Unknown Min; // 0x0 (12)
	struct Unknown MAX; // 0xC (12)
	char IsValid; // 0x18 (1)
};

// ScriptStruct CoreUObject.Box2D
struct FBox2D {
	struct Unknown Min; // 0x0 (8)
	struct Unknown MAX; // 0x8 (8)
	char bIsValid; // 0x10 (1)
};

// ScriptStruct CoreUObject.BoxSphereBounds
struct FBoxSphereBounds {
	struct Unknown Origin; // 0x0 (12)
	struct Unknown BoxExtent; // 0xC (12)
	float SphereRadius; // 0x18 (4)
};

// ScriptStruct CoreUObject.OrientedBox
struct FOrientedBox {
	struct Unknown Center; // 0x0 (12)
	struct Unknown AxisX; // 0xC (12)
	struct Unknown AxisY; // 0x18 (12)
	struct Unknown AxisZ; // 0x24 (12)
	float ExtentX; // 0x30 (4)
	float ExtentY; // 0x34 (4)
	float ExtentZ; // 0x38 (4)
};

// ScriptStruct CoreUObject.Matrix
struct FMatrix {
	struct Unknown XPlane; // 0x0 (16)
	struct Unknown YPlane; // 0x10 (16)
	struct Unknown ZPlane; // 0x20 (16)
	struct Unknown WPlane; // 0x30 (16)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
struct FInterpCurvePointFloat {
	float InVal; // 0x0 (4)
	float OutVal; // 0x4 (4)
	float ArriveTangent; // 0x8 (4)
	float LeaveTangent; // 0xC (4)
	char InterpMode; // 0x10 (1)
};

// ScriptStruct CoreUObject.InterpCurveFloat
struct FInterpCurveFloat {
	struct TArray<Unknown> Points; // 0x0 (16)
	char bIsLooped : 0; // 0x10 (1)
	float LoopKeyOffset; // 0x14 (4)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
struct FInterpCurvePointVector2D {
	float InVal; // 0x0 (4)
	struct Unknown OutVal; // 0x4 (8)
	struct Unknown ArriveTangent; // 0xC (8)
	struct Unknown LeaveTangent; // 0x14 (8)
	char InterpMode; // 0x1C (1)
};

// ScriptStruct CoreUObject.InterpCurveVector2D
struct FInterpCurveVector2D {
	struct TArray<Unknown> Points; // 0x0 (16)
	char bIsLooped : 0; // 0x10 (1)
	float LoopKeyOffset; // 0x14 (4)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
struct FInterpCurvePointVector {
	float InVal; // 0x0 (4)
	struct Unknown OutVal; // 0x4 (12)
	struct Unknown ArriveTangent; // 0x10 (12)
	struct Unknown LeaveTangent; // 0x1C (12)
	char InterpMode; // 0x28 (1)
};

// ScriptStruct CoreUObject.InterpCurveVector
struct FInterpCurveVector {
	struct TArray<Unknown> Points; // 0x0 (16)
	char bIsLooped : 0; // 0x10 (1)
	float LoopKeyOffset; // 0x14 (4)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
struct FInterpCurvePointQuat {
	float InVal; // 0x0 (4)
	struct Unknown OutVal; // 0x10 (16)
	struct Unknown ArriveTangent; // 0x20 (16)
	struct Unknown LeaveTangent; // 0x30 (16)
	char InterpMode; // 0x40 (1)
};

// ScriptStruct CoreUObject.InterpCurveQuat
struct FInterpCurveQuat {
	struct TArray<Unknown> Points; // 0x0 (16)
	char bIsLooped : 0; // 0x10 (1)
	float LoopKeyOffset; // 0x14 (4)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0 (4)
	struct Unknown OutVal; // 0x4 (24)
	struct Unknown ArriveTangent; // 0x1C (24)
	struct Unknown LeaveTangent; // 0x34 (24)
	char InterpMode; // 0x4C (1)
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
struct FInterpCurveTwoVectors {
	struct TArray<Unknown> Points; // 0x0 (16)
	char bIsLooped : 0; // 0x10 (1)
	float LoopKeyOffset; // 0x14 (4)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
struct FInterpCurvePointLinearColor {
	float InVal; // 0x0 (4)
	struct Unknown OutVal; // 0x4 (16)
	struct Unknown ArriveTangent; // 0x14 (16)
	struct Unknown LeaveTangent; // 0x24 (16)
	char InterpMode; // 0x34 (1)
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
struct FInterpCurveLinearColor {
	struct TArray<Unknown> Points; // 0x0 (16)
	char bIsLooped : 0; // 0x10 (1)
	float LoopKeyOffset; // 0x14 (4)
};

// ScriptStruct CoreUObject.Transform
struct FTransform {
	struct Unknown Rotation; // 0x0 (16)
	struct Unknown Translation; // 0x10 (12)
	struct Unknown Scale3D; // 0x20 (12)
};

// ScriptStruct CoreUObject.RandomStream
struct FRandomStream {
	int32_t InitialSeed; // 0x0 (4)
	int32_t Seed; // 0x4 (4)
};

// ScriptStruct CoreUObject.FrameNumber
struct FFrameNumber {
	int32_t Value; // 0x0 (4)
};

// ScriptStruct CoreUObject.FrameRate
struct FFrameRate {
	int32_t Numerator; // 0x0 (4)
	int32_t Denominator; // 0x4 (4)
};

// ScriptStruct CoreUObject.FrameTime
struct FFrameTime {
	struct Unknown FrameNumber; // 0x0 (4)
	float SubFrame; // 0x4 (4)
};

// ScriptStruct CoreUObject.QualifiedFrameTime
struct FQualifiedFrameTime {
	struct Unknown Time; // 0x0 (8)
	struct Unknown Rate; // 0x8 (8)
};

// ScriptStruct CoreUObject.Timecode
struct FTimecode {
	int32_t Hours; // 0x0 (4)
	int32_t Minutes; // 0x4 (4)
	int32_t Seconds; // 0x8 (4)
	int32_t Frames; // 0xC (4)
	char bDropFrameFormat : 0; // 0x10 (1)
};

// ScriptStruct CoreUObject.SoftObjectPath
struct FSoftObjectPath {
	struct FName AssetPathName; // 0x0 (8)
	struct FString SubPathString; // 0x8 (16)
};

// ScriptStruct CoreUObject.PrimaryAssetType
struct FPrimaryAssetType {
	struct FName Name; // 0x0 (8)
};

// ScriptStruct CoreUObject.PrimaryAssetId
struct FPrimaryAssetId {
	struct Unknown PrimaryAssetType; // 0x0 (8)
	struct FName PrimaryAssetName; // 0x8 (8)
};

// ScriptStruct CoreUObject.FloatRangeBound
struct FFloatRangeBound {
	char Type; // 0x0 (1)
	float Value; // 0x4 (4)
};

// ScriptStruct CoreUObject.FloatRange
struct FFloatRange {
	struct Unknown LowerBound; // 0x0 (8)
	struct Unknown UpperBound; // 0x8 (8)
};

// ScriptStruct CoreUObject.Int32RangeBound
struct FInt32RangeBound {
	char Type; // 0x0 (1)
	int32_t Value; // 0x4 (4)
};

// ScriptStruct CoreUObject.Int32Range
struct FInt32Range {
	struct Unknown LowerBound; // 0x0 (8)
	struct Unknown UpperBound; // 0x8 (8)
};

// ScriptStruct CoreUObject.FloatInterval
struct FFloatInterval {
	float Min; // 0x0 (4)
	float MAX; // 0x4 (4)
};

// ScriptStruct CoreUObject.Int32Interval
struct FInt32Interval {
	int32_t Min; // 0x0 (4)
	int32_t MAX; // 0x4 (4)
};

// ScriptStruct CoreUObject.PolyglotTextData
struct FPolyglotTextData {
	enum class Unknow Category; // 0x0 (1)
	struct FString NativeCulture; // 0x8 (16)
	struct FString Namespace; // 0x18 (16)
	struct FString Key; // 0x28 (16)
	struct FString NativeString; // 0x38 (16)
	struct TMap<Unknown, Unknown> LocalizedStrings; // 0x48 (80)
	char bIsMinimalPatch : 0; // 0x98 (1)
	struct FText CachedText; // 0xA0 (24)
};

// ScriptStruct CoreUObject.AutomationEvent
struct FAutomationEvent {
	enum class Unknow Type; // 0x0 (1)
	struct FString Message; // 0x8 (16)
	struct FString Context; // 0x18 (16)
	struct Unknown Artifact; // 0x28 (16)
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
struct FAutomationExecutionEntry {
	struct Unknown Event; // 0x0 (56)
	struct FString Filename; // 0x38 (16)
	int32_t LineNumber; // 0x48 (4)
	struct Unknown Timestamp; // 0x50 (8)
};

