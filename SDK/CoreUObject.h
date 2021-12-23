// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8 {
	CIM_Linear = 0
	CIM_CurveAuto = 1
	CIM_Constant = 2
	CIM_CurveUser = 3
	CIM_CurveBreak = 4
	CIM_CurveAutoClamped = 5
	CIM_MAX = 6
};

// Enum CoreUObject.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8 {
	ELocalizedTextSourceCategory = 0
	ELocalizedTextSourceCategory = 1
	ELocalizedTextSourceCategory = 2
	ELocalizedTextSourceCategory = 3
};

// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8 {
	EAutomationEventType = 0
	EAutomationEventType = 1
	EAutomationEventType = 2
	EAutomationEventType = 3
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8 {
	EMouseCursor = 0
	EMouseCursor = 1
	EMouseCursor = 2
	EMouseCursor = 3
	EMouseCursor = 4
	EMouseCursor = 5
	EMouseCursor = 6
	EMouseCursor = 7
	EMouseCursor = 8
	EMouseCursor = 9
	EMouseCursor = 10
	EMouseCursor = 11
	EMouseCursor = 12
	EMouseCursor = 13
	EMouseCursor = 14
};

// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8 {
	COND_None = 0
	COND_InitialOnly = 1
	COND_OwnerOnly = 2
	COND_SkipOwner = 3
	COND_SimulatedOnly = 4
	COND_AutonomousOnly = 5
	COND_SimulatedOrPhysics = 6
	COND_InitialOrOwner = 7
	COND_Custom = 8
	COND_ReplayOrOwner = 9
	COND_ReplayOnly = 10
	COND_SimulatedOnlyNoReplay = 11
	COND_SimulatedOrPhysicsNoReplay = 12
	COND_SkipReplay = 13
	COND_SpectatorOrOwner = 14
	COND_SpectatorOrOwnerOrReplay = 15
	COND_Never = 16
	COND_Max = 17
};

// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8 {
	EDataValidationResult = 0
	EDataValidationResult = 1
	EDataValidationResult = 2
	EDataValidationResult = 3
};

// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8 {
	EPropertyAccessChangeNotifyMode = 0
	EPropertyAccessChangeNotifyMode = 1
	EPropertyAccessChangeNotifyMode = 2
	EPropertyAccessChangeNotifyMode = 3
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8 {
	EUnit = 0
	EUnit = 1
	EUnit = 2
	EUnit = 3
	EUnit = 4
	EUnit = 5
	EUnit = 6
	EUnit = 7
	EUnit = 8
	EUnit = 9
	EUnit = 10
	EUnit = 11
	EUnit = 12
	EUnit = 13
	EUnit = 14
	EUnit = 15
	EUnit = 16
	EUnit = 17
	EUnit = 18
	EUnit = 19
	EUnit = 20
	EUnit = 21
	EUnit = 22
	EUnit = 23
	EUnit = 24
	EUnit = 25
	EUnit = 26
	EUnit = 27
	EUnit = 28
	EUnit = 29
	EUnit = 30
	EUnit = 31
	EUnit = 32
	EUnit = 33
	EUnit = 34
	EUnit = 35
	EUnit = 36
	EUnit = 37
	EUnit = 38
	EUnit = 39
	EUnit = 43
	EUnit = 44
	EUnit = 45
	EUnit = 46
	EUnit = 47
	EUnit = 48
	EUnit = 49
	EUnit = 52
	EUnit = 51
	EUnit = 53
	EUnit = 54
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8 {
	PF_Unknown = 0
	PF_A32B32G32R32F = 1
	PF_B8G8R8A8 = 2
	PF_G8 = 3
	PF_G16 = 4
	PF_DXT1 = 5
	PF_DXT3 = 6
	PF_DXT5 = 7
	PF_UYVY = 8
	PF_FloatRGB = 9
	PF_FloatRGBA = 10
	PF_DepthStencil = 11
	PF_ShadowDepth = 12
	PF_R32_FLOAT = 13
	PF_G16R16 = 14
	PF_G16R16F = 15
	PF_G16R16F_FILTER = 16
	PF_G32R32F = 17
	PF_A2B10G10R10 = 18
	PF_A16B16G16R16 = 19
	PF_D24 = 20
	PF_R16F = 21
	PF_R16F_FILTER = 22
	PF_BC5 = 23
	PF_V8U8 = 24
	PF_A1 = 25
	PF_FloatR11G11B10 = 26
	PF_A8 = 27
	PF_R32_UINT = 28
	PF_R32_SINT = 29
	PF_PVRTC2 = 30
	PF_PVRTC4 = 31
	PF_R16_UINT = 32
	PF_R16_SINT = 33
	PF_R16G16B16A16_UINT = 34
	PF_R16G16B16A16_SINT = 35
	PF_R5G6B5_UNORM = 36
	PF_R8G8B8A8 = 37
	PF_A8R8G8B8 = 38
	PF_BC4 = 39
	PF_R8G8 = 40
	PF_ATC_RGB = 41
	PF_ATC_RGBA_E = 42
	PF_ATC_RGBA_I = 43
	PF_X24_G8 = 44
	PF_ETC1 = 45
	PF_ETC2_RGB = 46
	PF_ETC2_RGBA = 47
	PF_R32G32B32A32_UINT = 48
	PF_R16G16_UINT = 49
	PF_ASTC_4x4 = 50
	PF_ASTC_6x6 = 51
	PF_ASTC_8x8 = 52
	PF_ASTC_10x10 = 53
	PF_ASTC_12x12 = 54
	PF_BC6H = 55
	PF_BC7 = 56
	PF_R8_UINT = 57
	PF_L8 = 58
	PF_XGXR8 = 59
	PF_R8G8B8A8_UINT = 60
	PF_R8G8B8A8_SNORM = 61
	PF_R16G16B16A16_UNORM = 62
	PF_R16G16B16A16_SNORM = 63
	PF_PLATFORM_HDR_1 = 64
	PF_PLATFORM_HDR_2 = 65
	PF_PLATFORM_HDR_3 = 66
	PF_NV12 = 67
	PF_R32G32_UINT = 68
	PF_ETC2_R11_EAC = 69
	PF_ETC2_RG11_EAC = 70
	PF_MAX = 71
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8 {
	EAxis = 0
	EAxis = 1
	EAxis = 2
	EAxis = 3
	EAxis = 4
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8 {
	ELogTimes = 0
	ELogTimes = 1
	ELogTimes = 2
	ELogTimes = 3
	ELogTimes = 4
};

// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8 {
	ESearchDir = 0
	ESearchDir = 1
	ESearchDir = 2
};

// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8 {
	ESearchCase = 0
	ESearchCase = 1
	ESearchCase = 2
};

