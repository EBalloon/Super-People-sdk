// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ServerConnectionLost = 11,
	SecuritySeedMismatch = 12,
	ENetworkFailure_MAX = 13
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Enum Engine.EMKReplaySampling
enum class EMKReplaySampling : uint8 {
	Not = 0,
	Net = 1,
	NetOnlyRecording = 2,
	Client = 3,
	ClientOnlyRecording = 4,
	EMKReplaySampling_MAX = 5
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	CompressedToMinimum = 3,
	EVectorQuantization_MAX = 4
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraAnimPlaySpace_MAX = 3
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5
};

// Enum Engine.ETravelType
enum class ETravelType : uint8 {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Enum Engine.ECameraType
enum class ECameraType : uint8 {
	FreeCamera = 0,
	PlayerCamera = 1,
	ECameraType_MAX = 2
};

// Enum Engine.EReplayViewMode
enum class EReplayViewMode : uint8 {
	DontUsed = 0,
	Player = 1,
	Follow = 2,
	EReplayViewMode_MAX = 3
};

// Enum Engine.EFractureSoundType
enum class EFractureSoundType : uint8 {
	None = 0,
	GlassSmall = 1,
	GlassLarge = 2,
	WoodSmall = 3,
	WoodLarge = 4,
	Rock = 5,
	EFractureSoundType_MAX = 6
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8 {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8 {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8 {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8 {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8 {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};

// Enum Engine.EFilmicTonemapperType
enum class EFilmicTonemapperType : uint8 {
	EngineDefault = 0,
	Disable = 1,
	Enable = 2,
	EFilmicTonemapperType_MAX = 3
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8 {
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_MAX = 7
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 {
	ERSM_Default = 0,
	ERSM_256 = 1,
	ERSM_2 = 2,
	ERSM_3 = 3,
	ERSM_5 = 4,
	ERSM_9 = 5,
	ERSM_17 = 6,
	ERSM_33 = 7,
	ERSM_65 = 8,
	ERSM_129 = 9,
	ERSM_MAX = 10
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8 {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8 {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 {
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8 {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Enum Engine.ECopyType
enum class ECopyType : uint8 {
	PlainProperty = 0,
	BoolProperty = 1,
	StructProperty = 2,
	ObjectProperty = 3,
	NameProperty = 4,
	ECopyType_MAX = 5
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8 {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 {
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : int32 {
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
	EVoiceSampleRate_MAX = 24001
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8 {
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Enum Engine.EBrushType
enum class EBrushType : uint8 {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8 {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8 {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8 {
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8 {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

// Enum Engine.EGraphType
enum class EGraphType : uint8 {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_Max = 29,
	VMI_Unknown = 255
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 {
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8 {
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8 {
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8 {
	MTM_NoTessellation = 0,
	MTM_FlatTessellation = 1,
	MTM_PNTriangles = 2,
	MTM_MAX = 3
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_Bark = 12,
	MSM_NUM = 13,
	MSM_FromMaterialExpression = 14,
	MSM_MAX = 15
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalToneCurveHDR = 9,
	SCS_MAX = 10
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8 {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_MAX = 2
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8 {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8 {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8 {
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8 {
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8 {
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8 {
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8 {
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8 {
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Enum Engine.EClampMode
enum class EClampMode : uint8 {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MAX = 4
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_MAX = 11
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8 {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_MAX = 13
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_MAX = 17
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_MAX = 31
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8 {
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Enum Engine.EKillType
enum class EKillType : uint8 {
	Kill = 0,
	Knockout = 1,
	Resuscitated = 2,
	Reported = 3,
	EKillType_MAX = 4
};

// Enum Engine.EReplayFailure
enum class EReplayFailure : uint8 {
	OK = 0,
	PlayReplayCommand = 1,
	PlayReplayNoWorld = 2,
	PlayReplayCorrupt = 3,
	PlayReplayCreateDriver = 4,
	ConnectNoWorld = 5,
	ConnectNoGameInstance = 6,
	ConnectInitBase = 7,
	ConnectCreateReplayStreamer = 8,
	PlaybackStreamerReady = 9,
	ConnectNoWorldContext = 10,
	ReadHeaderDemoNotFound = 11,
	ReadHeaderCorrupt = 12,
	ReadHeaderGameSpecific = 13,
	TickPlayStreamerInternal = 14,
	TickPlayStreamerFileAr = 15,
	ReadFrameFileAr = 16,
	ReadFrameStreamerInternal = 17,
	ReadFrameMismatchTimeChecksum = 18,
	ReadFrameServerDeltaTime = 19,
	ReadFrameReadPacketError = 20,
	ReadFrameNotReachable1 = 21,
	ReadFrameNotReachable2 = 22,
	ProcessPacket = 23,
	CheckpointReady = 24,
	CheckpointDriverInvalid = 25,
	InstantReady = 26,
	InstantDriverInvalid = 27,
	DownloadHeader = 28,
	DownloadHeaderLevelNamesAndTimes = 29,
	LoadMap = 30,
	PlayKillcamNoWorld = 31,
	PlayKillcamNoDriver = 32,
	PlayKillcamNoActiveReplay = 33,
	PlayKillcamInvalidArguments = 34,
	PlayKillcamCorrupt = 35,
	PlayKillcamSetViewTarget = 36,
	PlayKillcamSetTime = 37,
	PlayKillcamFindViewTargetTimeout = 38,
	SpawnReplayPcNoWorld = 39,
	SpawnReplayPcLoadClass = 40,
	SpawnReplayPc = 41,
	PLAYBACK_FAILURE_MAX = 42,
	RecordingReplayCommand = 43,
	RecordingReplayRejectOption = 44,
	RecordingReplayNoWorld = 45,
	RecordingReplayAlreadyPlaying = 46,
	RecordingReplayCorrupt = 47,
	RecordingReplayCreateDriver = 48,
	RecordingReplayPrepare = 49,
	ListenNoWorld = 50,
	ListenNoGameInstance = 51,
	ListenInitBase = 52,
	ListenCreateReplayStreamer = 53,
	ListenNoWorldSettings = 54,
	ListenWriteHeader = 55,
	RecordingStreamerReady = 56,
	ContinueListen = 57,
	TickRecordStreamerInternal = 58,
	TickRecordStreamerFileAr = 59,
	TickRecordNoGameDriver = 60,
	TickRecordNoGameConnection = 61,
	TickRecordCorrupt = 62,
	SaveCheckpointNoGameDriver = 63,
	SaveCheckpointNoGameConnection = 64,
	OnSeamlessTravelWriteHeader = 65,
	RECORDING_FAILURE_MAX = 66,
	EReplayFailure_MAX = 67
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	FNavigationSystemRunMode_MAX = 5
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8 {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Enum Engine.EModuleType
enum class EModuleType : uint8 {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	EMobileMSAASampleCount_MAX = 9
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8 {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8 {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_MAX = 5
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8 {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 {
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags_MAX = 5
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8 {
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	BaseColor_Normal_Specular_Mask_YCoCg = 4,
	WorldHeight = 5,
	Count = 6,
	ERuntimeVirtualTextureMaterialType_MAX = 7
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement = 13,
	MP_TessellationMultiplier = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_MaterialAttributes = 30,
	MP_CustomOutput = 31,
	MP_MAX = 32
};

// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8 {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8 {
	Auto = 0,
	Disabled = 255,
	Enabled = 1,
	ESkinCacheUsage_MAX = 256
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8 {
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8 {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 1,
	ESkeletalMeshSkinningImportVersions_MAX = 3
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8 {
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 1,
	ESkeletalMeshGeoImportVersions_MAX = 3
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8 {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Enum Engine.ESpecularOcclusionMode
enum class ESpecularOcclusionMode : uint8 {
	SOM_NonDirectional = 0,
	SOM_DirectionalCones = 1,
	SOM_Combine = 2,
	SOM_Maximum = 3,
	SOM_MAX = 4
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3
};

// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8 {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8 {
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 255,
	ESoundWaveLoadingBehavior_MAX = 256
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8 {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8 {
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_G16 = 8,
	TSF_MAX = 9
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8 {
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8 {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_MAX = 12
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8 {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_MAX = 49
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	Custom = 4,
	EUIScalingRule_MAX = 5
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Enum Engine.ELevelScanRule
enum class ELevelScanRule : uint8 {
	All = 0,
	EXT_World = 1,
	EXT_Only = 2,
	Grid_World = 3,
	Grid_Only = 4,
	Landscape_Only = 5,
	WorldArt = 6,
	Dev = 7,
	Custom = 8,
	ELevelScanRule_MAX = 9
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x00)
struct FDistributionLookupTable {
	float TimeScale; // 0x00(0x04)
	float TimeBias; // 0x04(0x04)
	struct TArray<float> Values; // 0x08(0x10)
	char Op; // 0x18(0x01)
	char EntryCount; // 0x19(0x01)
	char EntryStride; // 0x1a(0x01)
	char SubEntryStride; // 0x1b(0x01)
	char LockFlag; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32_t ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x0c (Inherited: 0x00)
struct FExpressionInput {
	int32_t OutputIndex; // 0x00(0x04)
	struct FName ExpressionName; // 0x04(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x10 (Inherited: 0x0c)
struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0x0c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x08 (Inherited: 0x00)
struct FExpressionOutput {
	struct FName OutputName; // 0x00(0x08)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x0c (Inherited: 0x00)
struct FMaterialInput {
	int32_t OutputIndex; // 0x00(0x04)
	struct FName ExpressionName; // 0x04(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FColorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FScalarMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FShadingModelMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVectorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVector2MaterialInput : FMaterialInput {
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FaceIndex; // 0x04(0x04)
	float Time; // 0x08(0x04)
	float Distance; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x40(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x4c(0x0c)
	float PenetrationDepth; // 0x58(0x04)
	int32_t Item; // 0x5c(0x04)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x60(0x08)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x68(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x70(0x08)
	struct FName BoneName; // 0x78(0x08)
	struct FName MyBoneName; // 0x80(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.MKReplayListItemInfo
// Size: 0x128 (Inherited: 0x00)
struct FMKReplayListItemInfo {
	struct FString Name; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
	int32_t SizeInBytes; // 0x28(0x04)
	int32_t LengthInMS; // 0x2c(0x04)
	int32_t NumViewers; // 0x30(0x04)
	bool bIsLive; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t ChangeList; // 0x38(0x04)
	bool bSouldKeep; // 0x3c(0x01)
	bool bIncomplete; // 0x3d(0x01)
	bool bIsVersionCompatible; // 0x3e(0x01)
	bool bIsCorrupted; // 0x3f(0x01)
	struct FString GameVersion; // 0x40(0x10)
	struct FString RecordUserId; // 0x50(0x10)
	struct FString RecordUserNickName; // 0x60(0x10)
	struct FString MapName; // 0x70(0x10)
	int32_t BattleMode; // 0x80(0x04)
	bool FPP; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	int32_t TotalTeamCount; // 0x88(0x04)
	int32_t FinalRank; // 0x8c(0x04)
	int32_t Kill; // 0x90(0x04)
	float LifeTime; // 0x94(0x04)
	float TotalDamage; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString BlueZoneTitle; // 0xa0(0x10)
	int32_t BlueZoneMaxPlayerCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FMKReplayTeamInfo> TeamInfos; // 0xb8(0x10)
	float KillcamStartTime; // 0xc8(0x04)
	float KillcamEndTime; // 0xcc(0x04)
	bool bHaveCameraEvent; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FString AdditionalInfo; // 0xd8(0x10)
	int32_t MK3DReplayVersion; // 0xe8(0x04)
	int32_t NetworkVersion; // 0xec(0x04)
	struct TArray<struct FReplayKillEvent> KillEvent; // 0xf0(0x10)
	struct FMKReplayReportInfo ReportInfo; // 0x100(0x28)
};

// ScriptStruct Engine.MKReplayReportInfo
// Size: 0x28 (Inherited: 0x00)
struct FMKReplayReportInfo {
	struct FString ReporterName; // 0x00(0x10)
	struct FString SuspectName; // 0x10(0x10)
	int32_t ReportType; // 0x20(0x04)
	int32_t ReplayTime; // 0x24(0x04)
};

// ScriptStruct Engine.ReplayKillEvent
// Size: 0x28 (Inherited: 0x00)
struct FReplayKillEvent {
	struct FString KillerName; // 0x00(0x10)
	struct FString VictimName; // 0x10(0x10)
	int32_t TimeSeconds; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.MKReplayTeamInfo
// Size: 0x38 (Inherited: 0x00)
struct FMKReplayTeamInfo {
	struct FString NickName; // 0x00(0x10)
	struct FString DeckName; // 0x10(0x10)
	struct FString WeaponName; // 0x20(0x10)
	int32_t ClassLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x00)
struct FBranchingPointNotifyPayload {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid MemberGuid; // 0x10(0x10)
};

// ScriptStruct Engine.TickFunction
// Size: 0x28 (Inherited: 0x00)
struct FTickFunction {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup TickGroup; // 0x08(0x01)
	enum class ETickingGroup EndTickGroup; // 0x09(0x01)
	char bTickEvenWhenPaused : 1; // 0x0a(0x01)
	char bCanEverTick : 1; // 0x0a(0x01)
	char bStartWithTickEnabled : 1; // 0x0a(0x01)
	char bAllowTickOnDedicatedServer : 1; // 0x0a(0x01)
	char pad_A_4 : 4; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float TickInterval; // 0x0c(0x04)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorComponentTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x00)
struct FSubtitleCue {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpControlPoint
// Size: 0x1c (Inherited: 0x00)
struct FInterpControlPoint {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x00)
struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPlatformInterfaceData Data; // 0x08(0x30)
};

// ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x00)
struct FPlatformInterfaceData {
	struct FName DataName; // 0x00(0x08)
	enum class EPlatformInterfaceDataType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x00)
struct FLatentActionInfo {
	int32_t Linkage; // 0x00(0x04)
	int32_t UUID; // 0x04(0x04)
	struct FName ExecutionFunction; // 0x08(0x08)
	struct UObject* CallbackTarget; // 0x10(0x08)
};

// ScriptStruct Engine.TimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FTimerHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.GenericStruct
// Size: 0x04 (Inherited: 0x00)
struct FGenericStruct {
	int32_t Data; // 0x00(0x04)
};

// ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x00)
struct FUserActivity {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	int32_t Valid; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
};

// ScriptStruct Engine.RepAttachment
// Size: 0x40 (Inherited: 0x00)
struct FRepAttachment {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 LocationOffset; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator RotationOffset; // 0x20(0x0c)
	struct FName AttachSocket; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char bSimulatedPhysicSleep : 1; // 0x30(0x01)
	char bRepPhysics : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x31(0x01)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x32(0x01)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x33(0x01)
};

// ScriptStruct Engine.ActorTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x28 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x17]; // 0x01(0x17)
	struct TArray<char> ReplicationBytes; // 0x18(0x10)
};

// ScriptStruct Engine.ForceFeedbackParameters
// Size: 0x0c (Inherited: 0x00)
struct FForceFeedbackParameters {
	struct FName Tag; // 0x00(0x08)
	bool bLooping; // 0x08(0x01)
	bool bIgnoreTimeDilation; // 0x09(0x01)
	bool bPlayWhilePaused; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetTransitionParams {
	float BlendTime; // 0x00(0x04)
	enum class EViewTargetBlendFunction BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x10 (Inherited: 0x00)
struct FUpdateLevelStreamingLevelStatus {
	struct FName PackageName; // 0x00(0x08)
	int32_t LODIndex; // 0x08(0x04)
	char bNewShouldBeLoaded : 1; // 0x0c(0x01)
	char bNewShouldBeVisible : 1; // 0x0c(0x01)
	char bNewShouldBlockOnLoad : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x14 (Inherited: 0x00)
struct FUpdateLevelVisibilityLevelInfo {
	struct FName PackageName; // 0x00(0x08)
	struct FName Filename; // 0x08(0x08)
	char bIsVisible : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveForceFeedbackEffect {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.UserWidgetInfoForReplay
// Size: 0x20 (Inherited: 0x00)
struct FUserWidgetInfoForReplay {
	struct FString KeyName; // 0x00(0x10)
	struct FString FilePath; // 0x10(0x10)
};

// ScriptStruct Engine.FractureEffect
// Size: 0x18 (Inherited: 0x00)
struct FFractureEffect {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
	enum class EFractureSoundType SoundType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x38 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char pad_0[0x28]; // 0x00(0x28)
	char bHasAdditiveSources : 1; // 0x28(0x01)
	char bHasOverrideSources : 1; // 0x28(0x01)
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28(0x01)
	char bIsAdditiveVelocityApplied : 1; // 0x28(0x01)
	char pad_28_4 : 4; // 0x28(0x01)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c(0x0c)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceSettings {
	char Flags; // 0x00(0x01)
};

// ScriptStruct Engine.RepRootMotionMontage
// Size: 0x98 (Inherited: 0x00)
struct FRepRootMotionMontage {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName MovementBaseBoneName; // 0x38(0x08)
	bool bRelativePosition; // 0x40(0x01)
	bool bRelativeRotation; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48(0x38)
	struct FVector_NetQuantize10 Acceleration; // 0x80(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x8c(0x0c)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0xa0 (Inherited: 0x00)
struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRepRootMotionMontage RootMotion; // 0x08(0x98)
};

// ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x00)
struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RootMotionTransform; // 0x10(0x30)
};

// ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 (Inherited: 0x00)
struct FBasedMovementInfo {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool bServerHasBaseComponent; // 0x28(0x01)
	bool bRelativeRotation; // 0x29(0x01)
	bool bServerHasVelocity; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x00)
struct FTimeline {
	enum class ETimelineLengthMode LengthMode; // 0x00(0x01)
	char bLooping : 1; // 0x01(0x01)
	char bReversePlayback : 1; // 0x01(0x01)
	char bPlaying : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Length; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40(0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x50(0x10)
	struct FDelegate TimelineFinishedFunc; // 0x60(0x10)
	struct TWeakObjectPtr<struct UObject> PropertySetObject; // 0x70(0x08)
	struct FName DirectionPropertyName; // 0x78(0x08)
	char pad_80[0x18]; // 0x80(0x18)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineLinearColorTrack {
	struct UCurveLinearColor* LinearColorCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName LinearColorPropertyName; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineFloatTrack {
	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName FloatPropertyName; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineVectorTrack {
	struct UCurveVector* VectorCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName VectorPropertyName; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x00)
struct FTimelineEventEntry {
	float Time; // 0x00(0x04)
	struct FDelegate EventFunc; // 0x04(0x10)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageEvent {
	char pad_0[0x8]; // 0x00(0x08)
	struct UDamageType* DamageTypeClass; // 0x08(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.RadialDamageEvent
// Size: 0x48 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent {
	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0x0c)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FRadialDamageParams {
	float BaseDamage; // 0x00(0x04)
	float MinimumDamage; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float DamageFalloff; // 0x10(0x04)
};

// ScriptStruct Engine.PointDamageEvent
// Size: 0xa8 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10(0x04)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0x0c)
	struct FHitResult HitInfo; // 0x20(0x88)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x5c0 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_BlueCorrection : 1; // 0x03(0x01)
	char bOverride_ExpandGamut : 1; // 0x03(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x03(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x04(0x01)
	char bOverride_FilmHealAmount : 1; // 0x04(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x04(0x01)
	char bOverride_FilmShoulder : 1; // 0x05(0x01)
	char bOverride_FilmBlackClip : 1; // 0x05(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char bOverride_FilmicTonemapper : 1; // 0x05(0x01)
	char bOverride_TonemapperSharpen : 1; // 0x05(0x01)
	char bOverride_UseVolumetricFogEmissive : 1; // 0x05(0x01)
	char bOverride_VolumetricFogEmissive : 1; // 0x05(0x01)
	char bOverride_SceneColorTint : 1; // 0x05(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x06(0x01)
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x06(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x06(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x06(0x01)
	char bOverride_BloomMethod : 1; // 0x06(0x01)
	char bOverride_BloomIntensity : 1; // 0x06(0x01)
	char bOverride_BloomThreshold : 1; // 0x06(0x01)
	char bOverride_Bloom1Tint : 1; // 0x06(0x01)
	char bOverride_Bloom1Size : 1; // 0x07(0x01)
	char bOverride_Bloom2Size : 1; // 0x07(0x01)
	char bOverride_Bloom2Tint : 1; // 0x07(0x01)
	char bOverride_Bloom3Tint : 1; // 0x07(0x01)
	char bOverride_Bloom3Size : 1; // 0x07(0x01)
	char bOverride_Bloom4Tint : 1; // 0x07(0x01)
	char bOverride_Bloom4Size : 1; // 0x07(0x01)
	char bOverride_Bloom5Tint : 1; // 0x07(0x01)
	char bOverride_Bloom5Size : 1; // 0x08(0x01)
	char bOverride_Bloom6Tint : 1; // 0x08(0x01)
	char bOverride_Bloom6Size : 1; // 0x08(0x01)
	char bOverride_BloomSizeScale : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x09(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x09(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x09(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x09(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x09(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x09(0x01)
	char bOverride_BloomDirtMask : 1; // 0x09(0x01)
	char bOverride_CameraShutterSpeed : 1; // 0x09(0x01)
	char bOverride_CameraISO : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x0a(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureCalibrationConstant : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x0b(0x01)
	char bOverride_AutoExposureBias : 1; // 0x0b(0x01)
	char bOverride_AutoExposureBiasCurve : 1; // 0x0b(0x01)
	char bOverride_AutoExposureMeterMask : 1; // 0x0b(0x01)
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0c(0x01)
	char bOverride_LensFlareTints : 1; // 0x0c(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0c(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0c(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0c(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionIntensitySubsurfaceProfile : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0e(0x01)
	char pad_E_6 : 2; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	char bOverride_RayTracingAO : 1; // 0x10(0x01)
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10(0x01)
	char pad_10_2 : 6; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char bOverride_LPVIntensity : 1; // 0x14(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x14(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVSize : 1; // 0x14(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x15(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x15(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x15(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15(0x01)
	char bOverride_LPVFadeRange : 1; // 0x15(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15(0x01)
	char pad_15_7 : 1; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	char bOverride_LPVReflectionIntensity : 1; // 0x18(0x01)
	char bOverride_LPVReflectionLength : 1; // 0x18(0x01)
	char bOverride_LPVReflectionOcclusion : 1; // 0x18(0x01)
	char bOverride_LPVHairSpecularLightingIntensity : 1; // 0x18(0x01)
	char bOverride_LPVHairSpecularOcclusionIntensity : 1; // 0x18(0x01)
	char bOverride_LPVHairRoughnessOverride : 1; // 0x18(0x01)
	char bOverride_LPVDistantLightingIntensity : 1; // 0x18(0x01)
	char bOverride_LPVEnvironmentColor : 1; // 0x18(0x01)
	char bOverride_UseSeparateAOVolume : 1; // 0x19(0x01)
	char pad_19_1 : 7; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char bOverride_IndirectLightingColor : 1; // 0x1c(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x1c(0x01)
	char bOverride_SkyLightingIntensity : 1; // 0x1c(0x01)
	char bOverride_DiffuseIBLIntensity : 1; // 0x1c(0x01)
	char bOverride_TwoSidedFoliageSpecularReflectionIntensity : 1; // 0x1c(0x01)
	char bOverride_IndirectSpecularIntensity : 1; // 0x1c(0x01)
	char bOverride_IndirectSpecularBlendFactor : 1; // 0x1c(0x01)
	char bOverride_IndirectLightingDirectionality : 1; // 0x1c(0x01)
	char bOverride_IndirectLightingDirectionalSourceSize : 1; // 0x1d(0x01)
	char bOverride_IndirectLightingDirectionalSpecularIntensity : 1; // 0x1d(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x1d(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x1d(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x1d(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x1d(0x01)
	char bOverride_DepthOfFieldMinFstop : 1; // 0x1d(0x01)
	char bOverride_DepthOfFieldBladeCount : 1; // 0x1d(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldEnabled : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x1e(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x1f(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x1f(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x1f(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x1f(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x1f(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x1f(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x1f(0x01)
	char bOverride_MotionBlurMax : 1; // 0x1f(0x01)
	char bOverride_MotionBlurTargetFPS : 1; // 0x20(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x20(0x01)
	char bOverride_ScreenPercentage : 1; // 0x20(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x20(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x20(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x20(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x20(0x01)
	char pad_20_7 : 1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bOverride_ReflectionsType : 1; // 0x24(0x01)
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x24(0x01)
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x24(0x01)
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x24(0x01)
	char bOverride_RayTracingReflectionsShadows : 1; // 0x24(0x01)
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x24(0x01)
	char bOverride_TranslucencyType : 1; // 0x24(0x01)
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x24(0x01)
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x25(0x01)
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x25(0x01)
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x25(0x01)
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x25(0x01)
	char bOverride_RayTracingGI : 1; // 0x25(0x01)
	char bOverride_RayTracingGIMaxBounces : 1; // 0x25(0x01)
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x25(0x01)
	char bOverride_PathTracingMaxBounces : 1; // 0x25(0x01)
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x26(0x01)
	char pad_26_1 : 7; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	char bMobileHQGaussian : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EBloomMethod BloomMethod; // 0x29(0x01)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float WhiteTemp; // 0x2c(0x04)
	float WhiteTint; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FVector4 ColorSaturation; // 0x40(0x10)
	struct FVector4 ColorContrast; // 0x50(0x10)
	struct FVector4 ColorGamma; // 0x60(0x10)
	struct FVector4 ColorGain; // 0x70(0x10)
	struct FVector4 ColorOffset; // 0x80(0x10)
	struct FVector4 ColorSaturationShadows; // 0x90(0x10)
	struct FVector4 ColorContrastShadows; // 0xa0(0x10)
	struct FVector4 ColorGammaShadows; // 0xb0(0x10)
	struct FVector4 ColorGainShadows; // 0xc0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xd0(0x10)
	struct FVector4 ColorSaturationMidtones; // 0xe0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xf0(0x10)
	struct FVector4 ColorGammaMidtones; // 0x100(0x10)
	struct FVector4 ColorGainMidtones; // 0x110(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x120(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x130(0x10)
	struct FVector4 ColorContrastHighlights; // 0x140(0x10)
	struct FVector4 ColorGammaHighlights; // 0x150(0x10)
	struct FVector4 ColorGainHighlights; // 0x160(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x170(0x10)
	float ColorCorrectionHighlightsMin; // 0x180(0x04)
	float ColorCorrectionShadowsMax; // 0x184(0x04)
	float BlueCorrection; // 0x188(0x04)
	float ExpandGamut; // 0x18c(0x04)
	float FilmSlope; // 0x190(0x04)
	float FilmToe; // 0x194(0x04)
	float FilmShoulder; // 0x198(0x04)
	float FilmBlackClip; // 0x19c(0x04)
	float FilmWhiteClip; // 0x1a0(0x04)
	struct FLinearColor FilmWhitePoint; // 0x1a4(0x10)
	struct FLinearColor FilmShadowTint; // 0x1b4(0x10)
	float FilmShadowTintBlend; // 0x1c4(0x04)
	float FilmShadowTintAmount; // 0x1c8(0x04)
	float FilmSaturation; // 0x1cc(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1d0(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1e0(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1f0(0x10)
	float FilmContrast; // 0x200(0x04)
	float FilmToeAmount; // 0x204(0x04)
	float FilmHealAmount; // 0x208(0x04)
	float FilmDynamicRange; // 0x20c(0x04)
	enum class EFilmicTonemapperType FilmicTonemapper; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	float TonemapperSharpen; // 0x214(0x04)
	char UseVolumetricFogEmissive : 1; // 0x218(0x01)
	char pad_218_1 : 7; // 0x218(0x01)
	char pad_219[0x3]; // 0x219(0x03)
	struct FLinearColor VolumetricFogEmissive; // 0x21c(0x10)
	struct FLinearColor SceneColorTint; // 0x22c(0x10)
	float SceneFringeIntensity; // 0x23c(0x04)
	float ChromaticAberrationStartOffset; // 0x240(0x04)
	float BloomIntensity; // 0x244(0x04)
	float BloomThreshold; // 0x248(0x04)
	float BloomSizeScale; // 0x24c(0x04)
	float Bloom1Size; // 0x250(0x04)
	float Bloom2Size; // 0x254(0x04)
	float Bloom3Size; // 0x258(0x04)
	float Bloom4Size; // 0x25c(0x04)
	float Bloom5Size; // 0x260(0x04)
	float Bloom6Size; // 0x264(0x04)
	struct FLinearColor Bloom1Tint; // 0x268(0x10)
	struct FLinearColor Bloom2Tint; // 0x278(0x10)
	struct FLinearColor Bloom3Tint; // 0x288(0x10)
	struct FLinearColor Bloom4Tint; // 0x298(0x10)
	struct FLinearColor Bloom5Tint; // 0x2a8(0x10)
	struct FLinearColor Bloom6Tint; // 0x2b8(0x10)
	float BloomConvolutionSize; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct UTexture2D* BloomConvolutionTexture; // 0x2d0(0x08)
	struct FVector2D BloomConvolutionCenterUV; // 0x2d8(0x08)
	float BloomConvolutionPreFilterMin; // 0x2e0(0x04)
	float BloomConvolutionPreFilterMax; // 0x2e4(0x04)
	float BloomConvolutionPreFilterMult; // 0x2e8(0x04)
	float BloomConvolutionBufferScale; // 0x2ec(0x04)
	struct UTexture* BloomDirtMask; // 0x2f0(0x08)
	float BloomDirtMaskIntensity; // 0x2f8(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x2fc(0x10)
	struct FLinearColor AmbientCubemapTint; // 0x30c(0x10)
	float AmbientCubemapIntensity; // 0x31c(0x04)
	struct UTextureCube* AmbientCubemap; // 0x320(0x08)
	float CameraShutterSpeed; // 0x328(0x04)
	float CameraISO; // 0x32c(0x04)
	float DepthOfFieldFstop; // 0x330(0x04)
	float DepthOfFieldMinFstop; // 0x334(0x04)
	int32_t DepthOfFieldBladeCount; // 0x338(0x04)
	float AutoExposureBias; // 0x33c(0x04)
	float AutoExposureBiasBackup; // 0x340(0x04)
	char bOverride_AutoExposureBiasBackup : 1; // 0x344(0x01)
	char pad_344_1 : 7; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x348(0x01)
	char pad_348_1 : 7; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x350(0x08)
	struct UTexture* AutoExposureMeterMask; // 0x358(0x08)
	float AutoExposureLowPercent; // 0x360(0x04)
	float AutoExposureHighPercent; // 0x364(0x04)
	float AutoExposureMinBrightness; // 0x368(0x04)
	float AutoExposureMaxBrightness; // 0x36c(0x04)
	float AutoExposureSpeedUp; // 0x370(0x04)
	float AutoExposureSpeedDown; // 0x374(0x04)
	float HistogramLogMin; // 0x378(0x04)
	float HistogramLogMax; // 0x37c(0x04)
	float AutoExposureCalibrationConstant; // 0x380(0x04)
	float LensFlareIntensity; // 0x384(0x04)
	struct FLinearColor LensFlareTint; // 0x388(0x10)
	float LensFlareBokehSize; // 0x398(0x04)
	float LensFlareThreshold; // 0x39c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x3a0(0x08)
	struct FLinearColor LensFlareTints[0x8]; // 0x3a8(0x80)
	float VignetteIntensity; // 0x428(0x04)
	float GrainJitter; // 0x42c(0x04)
	float GrainIntensity; // 0x430(0x04)
	float AmbientOcclusionIntensity; // 0x434(0x04)
	float AmbientOcclusionIntensitySubsurfaceProfile; // 0x438(0x04)
	float AmbientOcclusionStaticFraction; // 0x43c(0x04)
	float AmbientOcclusionRadius; // 0x440(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x444(0x01)
	char pad_444_1 : 7; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float AmbientOcclusionFadeDistance; // 0x448(0x04)
	float AmbientOcclusionFadeRadius; // 0x44c(0x04)
	float AmbientOcclusionDistance; // 0x450(0x04)
	float AmbientOcclusionPower; // 0x454(0x04)
	float AmbientOcclusionBias; // 0x458(0x04)
	float AmbientOcclusionQuality; // 0x45c(0x04)
	float AmbientOcclusionMipBlend; // 0x460(0x04)
	float AmbientOcclusionMipScale; // 0x464(0x04)
	float AmbientOcclusionMipThreshold; // 0x468(0x04)
	char RayTracingAO : 1; // 0x46c(0x01)
	char pad_46C_1 : 7; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	int32_t RayTracingAOSamplesPerPixel; // 0x470(0x04)
	struct FLinearColor IndirectLightingColor; // 0x474(0x10)
	float IndirectLightingIntensity; // 0x484(0x04)
	float SkyLightingIntensity; // 0x488(0x04)
	float DiffuseIBLIntensity; // 0x48c(0x04)
	float TwoSidedFoliageSpecularReflectionIntensity; // 0x490(0x04)
	float IndirectSpecularIntensity; // 0x494(0x04)
	float IndirectSpecularBlendFactor; // 0x498(0x04)
	float IndirectLightingDirectionality; // 0x49c(0x04)
	float IndirectLightingDirectionalSourceSize; // 0x4a0(0x04)
	float IndirectLightingDirectionalSpecularIntensity; // 0x4a4(0x04)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	int32_t RayTracingGIMaxBounces; // 0x4ac(0x04)
	int32_t RayTracingGISamplesPerPixel; // 0x4b0(0x04)
	float ColorGradingIntensity; // 0x4b4(0x04)
	struct UTexture* ColorGradingLUT; // 0x4b8(0x08)
	float DepthOfFieldSensorWidth; // 0x4c0(0x04)
	float DepthOfFieldFocalDistance; // 0x4c4(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x4c8(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x4cc(0x04)
	float DepthOfFieldFocalRegion; // 0x4d0(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x4d4(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x4d8(0x04)
	bool bDepthOfFieldEnabled; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	float DepthOfFieldScale; // 0x4e0(0x04)
	float DepthOfFieldNearBlurSize; // 0x4e4(0x04)
	float DepthOfFieldFarBlurSize; // 0x4e8(0x04)
	float DepthOfFieldOcclusion; // 0x4ec(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x4f0(0x04)
	float DepthOfFieldVignetteSize; // 0x4f4(0x04)
	float MotionBlurAmount; // 0x4f8(0x04)
	float MotionBlurMax; // 0x4fc(0x04)
	int32_t MotionBlurTargetFPS; // 0x500(0x04)
	float MotionBlurPerObjectSize; // 0x504(0x04)
	float LPVIntensity; // 0x508(0x04)
	float LPVVplInjectionBias; // 0x50c(0x04)
	float LPVSize; // 0x510(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x514(0x04)
	float LPVSecondaryBounceIntensity; // 0x518(0x04)
	float LPVGeometryVolumeBias; // 0x51c(0x04)
	float LPVEmissiveInjectionIntensity; // 0x520(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x524(0x04)
	float LPVDirectionalOcclusionRadius; // 0x528(0x04)
	float LPVDiffuseOcclusionExponent; // 0x52c(0x04)
	float LPVSpecularOcclusionExponent; // 0x530(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x534(0x04)
	float LPVSpecularOcclusionIntensity; // 0x538(0x04)
	float LPVReflectionIntensity; // 0x53c(0x04)
	float LPVReflectionLength; // 0x540(0x04)
	char bLPVReflectionOcclusion : 1; // 0x544(0x01)
	char pad_544_1 : 7; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	float LPVHairSpecularLightingIntensity; // 0x548(0x04)
	float LPVHairSpecularOcclusionIntensity; // 0x54c(0x04)
	float LPVHairRoughnessOverride; // 0x550(0x04)
	float LPVDistantLightingIntensity; // 0x554(0x04)
	struct FLinearColor LPVEnvironmentColor; // 0x558(0x10)
	char bUseSeparateAOVolume : 1; // 0x568(0x01)
	char pad_568_1 : 7; // 0x568(0x01)
	enum class EReflectionsType ReflectionsType; // 0x569(0x01)
	char pad_56A[0x2]; // 0x56a(0x02)
	float ScreenSpaceReflectionIntensity; // 0x56c(0x04)
	float ScreenSpaceReflectionQuality; // 0x570(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x574(0x04)
	float RayTracingReflectionsMaxRoughness; // 0x578(0x04)
	int32_t RayTracingReflectionsMaxBounces; // 0x57c(0x04)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x580(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x584(0x01)
	char RayTracingReflectionsTranslucency : 1; // 0x585(0x01)
	char pad_585_1 : 7; // 0x585(0x01)
	enum class ETranslucencyType TranslucencyType; // 0x586(0x01)
	char pad_587[0x1]; // 0x587(0x01)
	float RayTracingTranslucencyMaxRoughness; // 0x588(0x04)
	int32_t RayTracingTranslucencyRefractionRays; // 0x58c(0x04)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x590(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x594(0x01)
	char RayTracingTranslucencyRefraction : 1; // 0x595(0x01)
	char pad_595_1 : 7; // 0x595(0x01)
	char pad_596[0x2]; // 0x596(0x02)
	int32_t PathTracingMaxBounces; // 0x598(0x04)
	int32_t PathTracingSamplesPerPixel; // 0x59c(0x04)
	float LPVFadeRange; // 0x5a0(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x5a4(0x04)
	float ScreenPercentage; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FWeightedBlendables WeightedBlendables; // 0x5b0(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer {
	char pad_0[0x54]; // 0x00(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x04)
	char pad_58[0xa8]; // 0x58(0xa8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct Engine.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	char bShift : 1; // 0x08(0x01)
	char bCtrl : 1; // 0x08(0x01)
	char bAlt : 1; // 0x08(0x01)
	char bCmd : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x00)
struct FRigidBodyErrorCorrection {
	float PingExtrapolation; // 0x00(0x04)
	float PingLimit; // 0x04(0x04)
	float ErrorPerLinearDifference; // 0x08(0x04)
	float ErrorPerAngularDifference; // 0x0c(0x04)
	float MaxRestoredStateError; // 0x10(0x04)
	float MaxLinearHardSnapDistance; // 0x14(0x04)
	float PositionLerp; // 0x18(0x04)
	float AngleLerp; // 0x1c(0x04)
	float LinearVelocityCoefficient; // 0x20(0x04)
	float AngularVelocityCoefficient; // 0x24(0x04)
	float ErrorAccumulationSeconds; // 0x28(0x04)
	float ErrorAccumulationDistanceSq; // 0x2c(0x04)
	float ErrorAccumulationSimilarity; // 0x30(0x04)
};

// ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x00)
struct FDebugTextInfo {
	struct AActor* SrcActor; // 0x00(0x08)
	struct FVector SrcActorOffset; // 0x08(0x0c)
	struct FVector SrcActorDesiredOffset; // 0x14(0x0c)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char bKeepAttachedToActor : 1; // 0x3c(0x01)
	char bDrawShadow : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector OrigActorLocation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float FontScale; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.MovementProperties
// Size: 0x01 (Inherited: 0x00)
struct FMovementProperties {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x01)
struct FNavAgentProperties : FMovementProperties {
	char pad_1[0x3]; // 0x01(0x03)
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftClassPath PreferredNavData; // 0x18(0x18)
};

// ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 (Inherited: 0x00)
struct FNavAvoidanceMask {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x80)
	struct UCurveFloat* ExternalCurve; // 0x80(0x08)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x00)
struct FIndexedCurve {
	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x60)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleMap {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68(0x04)
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x6c(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct Engine.RichCurve
// Size: 0x80 (Inherited: 0x70)
struct FRichCurve : FRealCurve {
	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	enum class ERichCurveInterpMode InterpMode; // 0x00(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x01(0x01)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x00)
struct FWalkableSlopeOverride {
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x190 (Inherited: 0x00)
struct FBodyInstance {
	char pad_0[0x6]; // 0x00(0x06)
	enum class ECollisionChannel ObjectType; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x1]; // 0x09(0x01)
	enum class ESleepFamily SleepFamily; // 0x0a(0x01)
	enum class EDOFMode DOFMode; // 0x0b(0x01)
	char pad_C[0x1]; // 0x0c(0x01)
	char bUseCCD : 1; // 0x0d(0x01)
	char bIgnoreAnalyticCollisions : 1; // 0x0d(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x0d(0x01)
	char bIgnoreCollisionsWithoutImpulse : 1; // 0x0d(0x01)
	char bContactModification : 1; // 0x0d(0x01)
	char bSimulatePhysics : 1; // 0x0d(0x01)
	char bOverrideMass : 1; // 0x0d(0x01)
	char bEnableGravity : 1; // 0x0d(0x01)
	char bAutoWeld : 1; // 0x0e(0x01)
	char bStartAwake : 1; // 0x0e(0x01)
	char bGenerateWakeEvents : 1; // 0x0e(0x01)
	char bUpdateMassWhenScaleChanges : 1; // 0x0e(0x01)
	char bLockTranslation : 1; // 0x0e(0x01)
	char bLockRotation : 1; // 0x0e(0x01)
	char bLockXTranslation : 1; // 0x0e(0x01)
	char bLockYTranslation : 1; // 0x0e(0x01)
	char bLockZTranslation : 1; // 0x0f(0x01)
	char bLockXRotation : 1; // 0x0f(0x01)
	char bLockYRotation : 1; // 0x0f(0x01)
	char bLockZRotation : 1; // 0x0f(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x0f(0x01)
	char pad_F_5 : 2; // 0x0f(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x0f(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x10(0x01)
	char bInterpolateWhenSubStepping : 1; // 0x10(0x01)
	char pad_10_2 : 6; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FName CollisionProfileName; // 0x20(0x08)
	char PositionSolverIterationCount; // 0x28(0x01)
	char VelocitySolverIterationCount; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FCollisionResponse CollisionResponses; // 0x30(0x30)
	float MaxDepenetrationVelocity; // 0x60(0x04)
	float MassInKgOverride; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)
	float LinearDamping; // 0x70(0x04)
	float AngularDamping; // 0x74(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x78(0x0c)
	struct FVector COMNudge; // 0x84(0x0c)
	float MassScale; // 0x90(0x04)
	struct FVector InertiaTensorScale; // 0x94(0x0c)
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xb0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xc0(0x08)
	float MaxAngularVelocity; // 0xc8(0x04)
	float CustomSleepThresholdMultiplier; // 0xcc(0x04)
	float StabilizationThresholdMultiplier; // 0xd0(0x04)
	float PhysicsBlendWeight; // 0xd4(0x04)
	char pad_D8[0xb8]; // 0xd8(0xb8)
};

// ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCollisionResponse {
	struct FCollisionResponseContainer ResponseToChannels; // 0x00(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x0c (Inherited: 0x00)
struct FResponseChannel {
	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPrimitiveData {
	struct TArray<float> Data; // 0x00(0x10)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x01 (Inherited: 0x00)
struct FLightingChannels {
	char bChannel0 : 1; // 0x00(0x01)
	char bChannel1 : 1; // 0x00(0x01)
	char bChannel2 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x10 (Inherited: 0x00)
struct FAnimNode_Base {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x00)
struct FPoseLinkBase {
	int32_t LinkID; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleLookupTable {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
	float Min; // 0x00(0x04)
	float MAX; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x00)
struct FAlphaBlend {
	struct UCurveFloat* CustomCurve; // 0x00(0x08)
	float BlendTime; // 0x08(0x04)
	char pad_C[0x18]; // 0x0c(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x01)
	char pad_25[0xb]; // 0x25(0x0b)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.BoneReference
// Size: 0x10 (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
	int32_t Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformBool
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformBool {
	bool Default; // 0x00(0x01)
};

// ScriptStruct Engine.AnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x00)
struct FAnimInstanceProxy {
	char pad_0[0x6e0]; // 0x00(0x6e0)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString Path; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10(0x04)
	enum class EAnimGroupRole GroupRole; // 0x14(0x01)
	bool bIgnoreForRelevancyTest; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float BlendWeight; // 0x18(0x04)
	float InternalTimeAccumulator; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x0c (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32_t BlendDepth; // 0x08(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.SolverIterations
// Size: 0x18 (Inherited: 0x00)
struct FSolverIterations {
	int32_t SolverIterations; // 0x00(0x04)
	int32_t JointIterations; // 0x04(0x04)
	int32_t CollisionIterations; // 0x08(0x04)
	int32_t SolverPushOutIterations; // 0x0c(0x04)
	int32_t JointPushOutIterations; // 0x10(0x04)
	int32_t CollisionPushOutIterations; // 0x14(0x04)
};

// ScriptStruct Engine.AnimNode_Root
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; // 0x10(0x10)
	struct FName Name; // 0x20(0x08)
	struct FName Group; // 0x28(0x08)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x0c (Inherited: 0x00)
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FActorComponentInstanceData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* SourceComponentTemplate; // 0x08(0x08)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t SourceComponentTypeSerializedIndex; // 0x14(0x04)
	struct TArray<char> SavedProperties; // 0x18(0x10)
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x38(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48(0x10)
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size: 0x10 (Inherited: 0x00)
struct FActorComponentDuplicatedObjectData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xa8 (Inherited: 0x58)
struct FSceneComponentInstanceData : FActorComponentInstanceData {
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x58(0x50)
};

// ScriptStruct Engine.KAggregateGeom
// Size: 0x58 (Inherited: 0x00)
struct FKAggregateGeom {
	struct TArray<struct FKSphereElem> SphereElems; // 0x00(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x00)
struct FKShapeElem {
	char pad_0[0x8]; // 0x00(0x08)
	float RestOffset; // 0x08(0x04)
	struct FName Name; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	char bContributeToMass : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x17]; // 0x19(0x17)
};

// ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x58 (Inherited: 0x30)
struct FKTaperedCapsuleElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Radius0; // 0x48(0x04)
	float Radius1; // 0x4c(0x04)
	float Length; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Engine.KConvexElem
// Size: 0xb0 (Inherited: 0x30)
struct FKConvexElem : FKShapeElem {
	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct TArray<int32_t> IndexData; // 0x40(0x10)
	struct FBox ElemBox; // 0x50(0x1c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FTransform Transform; // 0x70(0x30)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphylElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Radius; // 0x48(0x04)
	float Length; // 0x4c(0x04)
};

// ScriptStruct Engine.KBoxElem
// Size: 0x58 (Inherited: 0x30)
struct FKBoxElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float X; // 0x48(0x04)
	float Y; // 0x4c(0x04)
	float Z; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Engine.KSphereElem
// Size: 0x40 (Inherited: 0x30)
struct FKSphereElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	float Radius; // 0x3c(0x04)
};

// ScriptStruct Engine.AnimationGroupReference
// Size: 0x0c (Inherited: 0x00)
struct FAnimationGroupReference {
	struct FName GroupName; // 0x00(0x08)
	enum class EAnimGroupRole GroupRole; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.AnimGroupInstance
// Size: 0x70 (Inherited: 0x00)
struct FAnimGroupInstance {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Engine.AnimTickRecord
// Size: 0x48 (Inherited: 0x00)
struct FAnimTickRecord {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x14 (Inherited: 0x00)
struct FMarkerSyncAnimPosition {
	struct FName PreviousMarkerName; // 0x00(0x08)
	struct FName NextMarkerName; // 0x08(0x08)
	float PositionBetweenMarkers; // 0x10(0x04)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x78 (Inherited: 0x00)
struct FBlendFilter {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	float SamplePlayRate; // 0x1c(0x04)
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x10 (Inherited: 0x00)
struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x00(0x01)
	bool bRemoveRootAnimation; // 0x01(0x01)
	bool bAutoSaveAsset; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x0c(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FComponentSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FLocalSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.NamedTransform
// Size: 0x40 (Inherited: 0x00)
struct FNamedTransform {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.NamedColor
// Size: 0x0c (Inherited: 0x00)
struct FNamedColor {
	struct FColor Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.NamedVector
// Size: 0x14 (Inherited: 0x00)
struct FNamedVector {
	struct FVector Value; // 0x00(0x0c)
	struct FName Name; // 0x0c(0x08)
};

// ScriptStruct Engine.NamedFloat
// Size: 0x0c (Inherited: 0x00)
struct FNamedFloat {
	float Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAnimParentNodeAssetOverride {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid ParentNodeGuid; // 0x08(0x10)
};

// ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimGroupInfo {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 (Inherited: 0x00)
struct FAnimationFrameSnapshot {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.StateMachineDebugData
// Size: 0xb0 (Inherited: 0x00)
struct FStateMachineDebugData {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineStateDebugData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunctionData
// Size: 0x40 (Inherited: 0x00)
struct FAnimBlueprintFunctionData {
	struct TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x00(0x20)
	struct TArray<struct TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20(0x10)
	struct TArray<struct TFieldPath<FProperty>> InputProperties; // 0x30(0x10)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x08 (Inherited: 0x00)
struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x00)
struct FGraphAssetPlayerInformation {
	struct TArray<int32_t> PlayerNodeIndices; // 0x00(0x10)
};

// ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x00)
struct FCachedPoseIndices {
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x00(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x68 (Inherited: 0x00)
struct FAnimBlueprintFunction {
	struct FName Name; // 0x00(0x08)
	struct FName Group; // 0x08(0x08)
	int32_t OutputPoseNodeIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> InputPoseNames; // 0x18(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x28(0x10)
	char pad_38[0x28]; // 0x38(0x28)
	bool bImplemented; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32_t LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x00)
struct FRootMotionExtractionStep {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x00)
struct FAnimationErrorStats {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x00)
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x0c)
	int32_t CurveTypeFlags; // 0x14(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x0c (Inherited: 0x00)
struct FSmartName {
	struct FName DisplayName; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x98 (Inherited: 0x18)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x18(0x80)
};

// ScriptStruct Engine.TransformCurve
// Size: 0x4e0 (Inherited: 0x18)
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; // 0x18(0x198)
	struct FVectorCurve RotationCurve; // 0x1b0(0x198)
	struct FVectorCurve ScaleCurve; // 0x348(0x198)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x198 (Inherited: 0x18)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[0x3]; // 0x18(0x180)
};

// ScriptStruct Engine.SlotEvaluationPose
// Size: 0x40 (Inherited: 0x00)
struct FSlotEvaluationPose {
	enum class EAdditiveAnimationType AdditiveType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x00)
struct FA2Pose {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<char> ComponentSpaceFlags; // 0x18(0x10)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 (Inherited: 0x00)
struct FQueuedDrawDebugItem {
	enum class EDrawDebugItemType ItemType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector StartLoc; // 0x04(0x0c)
	struct FVector EndLoc; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32_t Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool bPersistentLines; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D TextScale; // 0x60(0x08)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* LinkedMontage; // 0x08(0x08)
	int32_t SlotIndex; // 0x10(0x04)
	int32_t SegmentIndex; // 0x14(0x04)
	enum class EAnimLinkMethod LinkMethod; // 0x18(0x01)
	enum class EAnimLinkMethod CachedLinkMethod; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float SegmentBeginTime; // 0x1c(0x04)
	float SegmentLength; // 0x20(0x04)
	float LinkValue; // 0x24(0x04)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x08)
};

// ScriptStruct Engine.AnimMontageInstance
// Size: 0x1b0 (Inherited: 0x00)
struct FAnimMontageInstance {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	bool bPlaying; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DefaultBlendTimeMultiplier; // 0x2c(0x04)
	char pad_30[0xb8]; // 0x30(0xb8)
	struct TArray<int32_t> NextSections; // 0xe8(0x10)
	struct TArray<int32_t> PrevSections; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118(0x10)
	float Position; // 0x128(0x04)
	float PlayRate; // 0x12c(0x04)
	struct FAlphaBlend Blend; // 0x130(0x30)
	char pad_160[0x28]; // 0x160(0x28)
	int32_t DisableRootMotionCount; // 0x188(0x04)
	char pad_18C[0x24]; // 0x18c(0x24)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xb8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float TriggerTimeOffset; // 0x34(0x04)
	float EndTriggerTimeOffset; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	bool bTriggerOnFollower; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t TrackIndex; // 0xa4(0x04)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c (Inherited: 0x00)
struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x00(0x04)
	float TriggerTime; // 0x04(0x04)
	enum class EAnimNotifyEventType NotifyEventType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float TriggerTimeOffset; // 0x3c(0x04)
};

// ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x00)
struct FSlotAnimationTrack {
	struct FName SlotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	struct FName NextSectionName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0xd0 (Inherited: 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ALPHA; // 0x34(0x04)
	char bAlphaBoolEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBias AlphaScaleBias; // 0x90(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98(0x30)
	int32_t LODThreshold; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base {
	struct TArray<struct FName> SourcePropertyNames; // 0x10(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20(0x10)
	struct UObject* TargetInstance; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
};

// ScriptStruct Engine.AnimNode_Inertialization
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	char pad_20[0x50]; // 0x20(0x50)
};

// ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 (Inherited: 0x00)
struct FInertializationPoseDiff {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.InertializationCurveDiff
// Size: 0x08 (Inherited: 0x00)
struct FInertializationCurveDiff {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3c (Inherited: 0x00)
struct FInertializationBoneDiff {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.InertializationPose
// Size: 0x90 (Inherited: 0x00)
struct FInertializationPose {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xa0 (Inherited: 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	struct TArray<struct FPoseLink> InputPoses; // 0x58(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68(0x10)
	struct UAnimInstance* InstanceClass; // 0x78(0x08)
	struct FName Tag; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x98(0x01)
	char bPropagateNotifiesToLinkedInstances : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xb0 (Inherited: 0xa0)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	struct UAnimLayerInterface* Interface; // 0xa0(0x08)
	struct FName Layer; // 0xa8(0x08)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	struct FName Name; // 0x10(0x08)
	struct FName Graph; // 0x18(0x08)
	struct FPoseLink InputPose; // 0x20(0x10)
	char pad_30[0x48]; // 0x30(0x48)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xb8 (Inherited: 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink pose; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x08)
	char pad_28[0x90]; // 0x28(0x90)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x30(0x08)
	float PlayRateBasis; // 0x38(0x04)
	float PlayRate; // 0x3c(0x04)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40(0x30)
	float StartPosition; // 0x70(0x04)
	bool bLoopAnimation; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xb0 (Inherited: 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10(0x04)
	int32_t MaxTransitionsPerFrame; // 0x14(0x04)
	bool bSkipFirstUpdateTransition; // 0x18(0x01)
	bool bReinitializeOnBecomingRelevant; // 0x19(0x01)
	char pad_1A[0x96]; // 0x1a(0x96)
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x00)
struct FAnimationPotentialTransition {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xc8 (Inherited: 0x00)
struct FAnimationActiveTransitionEntry {
	char pad_0[0xb8]; // 0x00(0xb8)
	struct UBlendProfile* BlendProfile; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	char pad_10[0x38]; // 0x10(0x38)
	int32_t FramesToCachePose; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	enum class EEvaluatorDataSource DataSource; // 0x50(0x01)
	enum class EEvaluatorMode EvaluatorMode; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x08)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x48 (Inherited: 0x00)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	struct UFunction* Function; // 0x18(0x08)
	struct TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20(0x20)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	struct FName SourcePropertyName; // 0x00(0x08)
	struct FName SourceSubPropertyName; // 0x08(0x08)
	int32_t SourceArrayIndex; // 0x10(0x04)
	bool bInstanceIsTarget; // 0x14(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x15(0x01)
	enum class ECopyType CopyType; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct TFieldPath<FProperty> DestProperty; // 0x18(0x20)
	int32_t DestArrayIndex; // 0x38(0x04)
	int32_t Size; // 0x3c(0x04)
	struct TFieldPath<FProperty> CachedSourceProperty; // 0x40(0x20)
	struct TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x60(0x20)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNotifyQueue
// Size: 0x70 (Inherited: 0x00)
struct FAnimNotifyQueue {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20(0x50)
};

// ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyArray {
	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyEventReference {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* NotifySource; // 0x08(0x08)
};

// ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x00)
struct FCompressedTrack {
	struct TArray<char> ByteStream; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x3]; // 0x20(0x0c)
	float Ranges[0x3]; // 0x2c(0x0c)
};

// ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x00)
struct FCurveTrack {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> CurveWeights; // 0x08(0x10)
};

// ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x00)
struct FScaleTrack {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x00)
struct FRotationTrack {
	struct TArray<struct FQuat> RotKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x00)
struct FTranslationTrack {
	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceTrackContainer {
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x00)
struct FRawAnimSequenceTrack {
	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x00)
struct FAnimSetMeshLinkup {
	struct TArray<int32_t> BoneToTrackTable; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x830 (Inherited: 0x6e0)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy {
	char pad_6E0[0x150]; // 0x6e0(0x150)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x00)
struct FBakedAnimationStateMachine {
	struct FName MachineName; // 0x00(0x08)
	int32_t InitialState; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.AnimationStateBase
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateBase {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 (Inherited: 0x08)
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x08(0x04)
	int32_t NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32_t StartNotify; // 0x14(0x04)
	int32_t EndNotify; // 0x18(0x04)
	int32_t InterruptNotify; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class ETransitionLogicType LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.BakedAnimationState
// Size: 0x58 (Inherited: 0x00)
struct FBakedAnimationState {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)
	bool bIsAConduit; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t EntryRuleNodeIndex; // 0x2c(0x04)
	struct TArray<int32_t> PlayerNodeIndices; // 0x30(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x40(0x10)
	bool bAlwaysResetOnEntry; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x00)
struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x00(0x04)
	int32_t CustomResultNodeIndex; // 0x04(0x04)
	int32_t TransitionIndex; // 0x08(0x04)
	bool bDesiredTransitionReturnValue; // 0x0c(0x01)
	bool bAutomaticRemainingTimeRule; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)
};

// ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x08)
struct FAnimationState : FAnimationStateBase {
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)
};

// ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x00)
struct FAnimationTransitionRule {
	struct FName RuleToExecute; // 0x00(0x08)
	bool TransitionReturnVal; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 (Inherited: 0x00)
struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x00(0x04)
};

// ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x00)
struct FMarkerSyncData {
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.AnimSyncMarker
// Size: 0x0c (Inherited: 0x00)
struct FAnimSyncMarker {
	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneBlendWeights {
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38 (Inherited: 0x00)
struct FPrimaryAssetRulesCustomOverride {
	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
	struct FDirectoryPath FilterDirectory; // 0x08(0x10)
	struct FString FilterString; // 0x18(0x10)
	struct FPrimaryAssetRules Rules; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.PrimaryAssetRules
// Size: 0x0c (Inherited: 0x00)
struct FPrimaryAssetRules {
	int32_t Priority; // 0x00(0x04)
	int32_t ChunkId; // 0x04(0x04)
	bool bApplyRecursively; // 0x08(0x01)
	enum class EPrimaryAssetCookRule CookRule; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x1c (Inherited: 0x00)
struct FPrimaryAssetRulesOverride {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0x0c)
};

// ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x00)
struct FAssetManagerRedirect {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x00)
struct FPrimaryAssetTypeInfo {
	struct FName PrimaryAssetType; // 0x00(0x08)
	struct TSoftClassPtr<UObject> AssetBaseClass; // 0x08(0x28)
	struct UObject* AssetBaseClassLoaded; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	bool bIsEditorOnly; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50(0x10)
	struct FPrimaryAssetRules Rules; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t NumberOfAssets; // 0x84(0x04)
};

// ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x00)
struct FAssetMapping {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	struct UAnimationAsset* TargetAsset; // 0x08(0x08)
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size: 0x138 (Inherited: 0xa8)
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData {
	char pad_A8[0x90]; // 0xa8(0x90)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2c (Inherited: 0x00)
struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32_t MaxScatteringOrder; // 0x08(0x04)
	int32_t TransmittanceTexWidth; // 0x0c(0x04)
	int32_t TransmittanceTexHeight; // 0x10(0x04)
	int32_t IrradianceTexWidth; // 0x14(0x04)
	int32_t IrradianceTexHeight; // 0x18(0x04)
	int32_t InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32_t InscatterMuNum; // 0x20(0x04)
	int32_t InscatterMuSNum; // 0x24(0x04)
	int32_t InscatterNuNum; // 0x28(0x04)
};

// ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xb0 (Inherited: 0x00)
struct FBaseAttenuationSettings {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	enum class EAttenuationShape AttenuationShape; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float dBAttenuationAtMax; // 0x0c(0x04)
	enum class ENaturalSoundFalloffMode FalloffMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector AttenuationShapeExtents; // 0x14(0x0c)
	float ConeOffset; // 0x20(0x04)
	float FalloffDistance; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28(0x88)
};

// ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x00)
struct FAudioComponentParam {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.AudioEffectParameters
// Size: 0x08 (Inherited: 0x00)
struct FAudioEffectParameters {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AudioReverbEffect
// Size: 0x48 (Inherited: 0x08)
struct FAudioReverbEffect : FAudioEffectParameters {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x00)
struct FAudioQualitySettings {
	struct FText DisplayName; // 0x00(0x18)
	int32_t MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)
struct FInteriorSettings {
	bool bIsWorldSettings; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorMapPerformanceTestDefinition {
	struct FSoftObjectPath PerformanceTestmap; // 0x00(0x18)
	int32_t TestTimer; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 (Inherited: 0x00)
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; // 0x00(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1e0(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; // 0x00(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; // 0x00(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)
struct FImportFactorySettingValues {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintEditorPromotionSettings {
	struct FFilePath FirstMeshPath; // 0x00(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)
struct FExternalToolDefinition {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.NavAvoidanceData
// Size: 0x3c (Inherited: 0x00)
struct FNavAvoidanceData {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x00)
struct FBandwidthTestGenerator {
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x00)
struct FBandwidthTestItem {
	struct TArray<char> Kilobyte; // 0x00(0x10)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x14 (Inherited: 0x00)
struct FBlendProfileBoneEntry {
	struct FBoneReference BoneReference; // 0x00(0x10)
	float BlendScale; // 0x10(0x04)
};

// ScriptStruct Engine.PerBoneInterpolation
// Size: 0x14 (Inherited: 0x00)
struct FPerBoneInterpolation {
	struct FBoneReference BoneReference; // 0x00(0x10)
	float InterpolationSpeedPerSec; // 0x10(0x04)
};

// ScriptStruct Engine.GridBlendSample
// Size: 0x1c (Inherited: 0x00)
struct FGridBlendSample {
	struct FEditorElement GridElement; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x00)
struct FEditorElement {
	int32_t Indices[0x3]; // 0x00(0x0c)
	float Weights[0x3]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector SampleValue; // 0x08(0x0c)
	float RateScale; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float MAX; // 0x14(0x04)
	int32_t GridNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
	float InterpolationTime; // 0x00(0x04)
	enum class EFilterInterpolationType InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x00)
struct FBPEditorBookmarkNode {
	struct FGuid NodeGuid; // 0x00(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
};

// ScriptStruct Engine.EditedDocumentInfo
// Size: 0x30 (Inherited: 0x00)
struct FEditedDocumentInfo {
	struct FSoftObjectPath EditedObjectPath; // 0x00(0x18)
	struct FVector2D SavedViewOffset; // 0x18(0x08)
	float SavedZoomAmount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UObject* EditedObject; // 0x28(0x08)
};

// ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x00)
struct FBPInterfaceDescription {
	struct UInterface* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.BPVariableDescription
// Size: 0xd0 (Inherited: 0x00)
struct FBPVariableDescription {
	struct FName VarName; // 0x00(0x08)
	struct FGuid VarGuid; // 0x08(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x58)
	struct FString FriendlyName; // 0x70(0x10)
	struct FText Category; // 0x80(0x18)
	uint64_t PropertyFlags; // 0x98(0x08)
	struct FName RepNotifyFunc; // 0xa0(0x08)
	enum class ELifetimeCondition ReplicationCondition; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xb0(0x10)
	struct FString DefaultValue; // 0xc0(0x10)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FBPVariableMetaDataEntry {
	struct FName DataKey; // 0x00(0x08)
	struct FString DataValue; // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphPinType
// Size: 0x58 (Inherited: 0x00)
struct FEdGraphPinType {
	struct FName PinCategory; // 0x00(0x08)
	struct FName PinSubCategory; // 0x08(0x08)
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10(0x08)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18(0x20)
	struct FEdGraphTerminalType PinValueType; // 0x38(0x1c)
	enum class EPinContainerType ContainerType; // 0x54(0x01)
	char bIsArray : 1; // 0x55(0x01)
	char bIsReference : 1; // 0x55(0x01)
	char bIsConst : 1; // 0x55(0x01)
	char bIsWeakPointer : 1; // 0x55(0x01)
	char pad_55_4 : 4; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
};

// ScriptStruct Engine.EdGraphTerminalType
// Size: 0x1c (Inherited: 0x00)
struct FEdGraphTerminalType {
	struct FName TerminalCategory; // 0x00(0x08)
	struct FName TerminalSubCategory; // 0x08(0x08)
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10(0x08)
	bool bTerminalIsConst; // 0x18(0x01)
	bool bTerminalIsWeakPointer; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintMacroCosmeticInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x00)
struct FCompilerNativizationOptions {
	struct FName PlatformName; // 0x00(0x08)
	bool ServerOnlyPlatform; // 0x08(0x01)
	bool ClientOnlyPlatform; // 0x09(0x01)
	bool bExcludeMonolithicHeaders; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.BPComponentClassOverride
// Size: 0x10 (Inherited: 0x00)
struct FBPComponentClassOverride {
	struct FName ComponentName; // 0x00(0x08)
	struct UObject* ComponentClass; // 0x08(0x08)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x48 (Inherited: 0x00)
struct FBlueprintCookedComponentInstancingData {
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x00(0x10)
	char pad_10[0x11]; // 0x10(0x11)
	bool bHasValidCookedData; // 0x21(0x01)
	char pad_22[0x26]; // 0x22(0x26)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentChangedPropertyInfo {
	struct FName PropertyName; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* PropertyScope; // 0x10(0x08)
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x00)
struct FEventGraphFastCallPair {
	struct UFunction* FunctionToPatch; // 0x00(0x08)
	int32_t EventGraphCallOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 (Inherited: 0x00)
struct FPointerToUberGraphFrame {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x00)
struct FDebuggingInfoForSingleFunction {
	char pad_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x00)
struct FNodeToCodeAssociation {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimCurveType
// Size: 0x02 (Inherited: 0x00)
struct FAnimCurveType {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmarkBaseJumpToSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x01 (Inherited: 0x01)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings {
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmark2DJumpToSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.GeomSelection
// Size: 0x0c (Inherited: 0x00)
struct FGeomSelection {
	int32_t Type; // 0x00(0x04)
	int32_t Index; // 0x04(0x04)
	int32_t SelectionIndex; // 0x08(0x04)
};

// ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x00)
struct FBuilderPoly {
	struct TArray<int32_t> VertexIndices; // 0x00(0x10)
	int32_t Direction; // 0x10(0x04)
	struct FName ItemName; // 0x14(0x08)
	int32_t PolyFlags; // 0x1c(0x04)
};

// ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x24 (Inherited: 0x00)
struct FCachedAnimTransitionData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName FromStateName; // 0x08(0x08)
	struct FName ToStateName; // 0x10(0x08)
	char pad_18[0xc]; // 0x18(0x0c)
};

// ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimRelevancyData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimAssetPlayerData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimStateArray {
	struct TArray<struct FCachedAnimStateData> States; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimStateData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimStateData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x10 (Inherited: 0x00)
struct FActiveCameraShakeInfo {
	struct UCameraShake* ShakeInstance; // 0x00(0x08)
	struct TWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x08(0x08)
};

// ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x00)
struct FPooledCameraShakes {
	struct TArray<struct UCameraShake*> PooledShakes; // 0x00(0x10)
};

// ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator {
	struct FFOscillator X; // 0x00(0x0c)
	struct FFOscillator Y; // 0x0c(0x0c)
	struct FFOscillator Z; // 0x18(0x0c)
};

// ScriptStruct Engine.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class EInitialOscillatorOffset InitialOffset; // 0x08(0x01)
	enum class EOscillatorWaveform Waveform; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator {
	struct FFOscillator Pitch; // 0x00(0x0c)
	struct FFOscillator Yaw; // 0x0c(0x0c)
	struct FFOscillator Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 (Inherited: 0x00)
struct FDummySpacerCameraTypes {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x650 (Inherited: 0x00)
struct FMinimalViewInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
	float DesiredFOV; // 0x1c(0x04)
	char pad_20[0x4]; // 0x20(0x04)
	float OrthoWidth; // 0x24(0x04)
	float OrthoNearClipPlane; // 0x28(0x04)
	float OrthoFarClipPlane; // 0x2c(0x04)
	float AspectRatio; // 0x30(0x04)
	char bConstrainAspectRatio : 1; // 0x34(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float PostProcessBlendWeight; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x5c0)
	struct FVector2D OffCenterProjectionOffset; // 0x600(0x08)
	char pad_608[0x48]; // 0x608(0x48)
};

// ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x00)
struct FCanvasIcon {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x00)
struct FWrappedStringElement {
	struct FString Value; // 0x00(0x10)
	struct FVector2D LineExtent; // 0x10(0x08)
};

// ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x00)
struct FTextSizingParameters {
	float DrawX; // 0x00(0x04)
	float DrawY; // 0x04(0x04)
	float DrawXL; // 0x08(0x04)
	float DrawYL; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* DrawFont; // 0x18(0x08)
	struct FVector2D SpacingAdjust; // 0x20(0x08)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.FindFloorResult
// Size: 0x94 (Inherited: 0x00)
struct FFindFloorResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	struct FHitResult HitResult; // 0x0c(0x88)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	struct AActor* ChildActorClass; // 0xa8(0x08)
	struct FName ChildActorName; // 0xb0(0x08)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x40 (Inherited: 0x00)
struct FChildActorAttachedActorInfo {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x0c (Inherited: 0x00)
struct FCustomChannelSetup {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse DefaultResponse; // 0x01(0x01)
	bool bTraceType; // 0x02(0x01)
	bool bStaticObject; // 0x03(0x01)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x48 (Inherited: 0x00)
struct FCollisionResponseTemplate {
	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x1]; // 0x09(0x01)
	bool bCanModify; // 0x0a(0x01)
	char pad_B[0x21]; // 0x0b(0x21)
	struct FName ObjectTypeName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x38(0x10)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentDelegateBinding {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName FunctionNameToBind; // 0x10(0x08)
};

// ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x00)
struct FMeshUVChannelInfo {
	bool bInitialized; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LocalUVDensities[0x4]; // 0x04(0x10)
};

// ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteNode {
	int32_t IndexChar; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FAngularDriveConstraint {
	struct FConstraintDrive TwistDrive; // 0x00(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDrive {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char bEnablePositionDrive : 1; // 0x0c(0x01)
	char bEnableVelocityDrive : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FLinearDriveConstraint {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct FConstraintDrive XDrive; // 0x18(0x10)
	struct FConstraintDrive YDrive; // 0x28(0x10)
	struct FConstraintDrive ZDrive; // 0x38(0x10)
	char bEnablePositionDrive : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1b8 (Inherited: 0x00)
struct FConstraintInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct FName JointName; // 0x18(0x08)
	struct FName ConstraintBone1; // 0x20(0x08)
	struct FName ConstraintBone2; // 0x28(0x08)
	struct FVector Pos1; // 0x30(0x0c)
	struct FVector PriAxis1; // 0x3c(0x0c)
	struct FVector SecAxis1; // 0x48(0x0c)
	struct FVector Pos2; // 0x54(0x0c)
	struct FVector PriAxis2; // 0x60(0x0c)
	struct FVector SecAxis2; // 0x6c(0x0c)
	struct FRotator AngularRotationOffset; // 0x78(0x0c)
	char bScaleLinearLimits : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct FConstraintProfileProperties ProfileInstance; // 0x8c(0x104)
	char pad_190[0x28]; // 0x190(0x28)
};

// ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x104 (Inherited: 0x00)
struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float LinearBreakThreshold; // 0x08(0x04)
	float AngularBreakThreshold; // 0x0c(0x04)
	struct FLinearConstraint LinearLimit; // 0x10(0x1c)
	struct FConeConstraint ConeLimit; // 0x2c(0x20)
	struct FTwistConstraint TwistLimit; // 0x4c(0x1c)
	struct FLinearDriveConstraint LinearDrive; // 0x68(0x4c)
	struct FAngularDriveConstraint AngularDrive; // 0xb4(0x4c)
	char bDisableCollision : 1; // 0x100(0x01)
	char bParentDominates : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char bLinearBreakable : 1; // 0x100(0x01)
	char pad_100_5 : 3; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x00)
struct FConstraintBaseParams {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.TwistConstraint
// Size: 0x1c (Inherited: 0x14)
struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14(0x04)
	enum class EAngularConstraintMotion TwistMotion; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14(0x04)
	float Swing2LimitDegrees; // 0x18(0x04)
	enum class EAngularConstraintMotion Swing1Motion; // 0x1c(0x01)
	enum class EAngularConstraintMotion Swing2Motion; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.LinearConstraint
// Size: 0x1c (Inherited: 0x14)
struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14(0x04)
	enum class ELinearConstraintMotion XMotion; // 0x18(0x01)
	enum class ELinearConstraintMotion YMotion; // 0x19(0x01)
	enum class ELinearConstraintMotion ZMotion; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceSizePair {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x208 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve ColorCurves[0x4]; // 0x00(0x200)
	struct UCurveLinearColor* ExternalCurve; // 0x200(0x08)
};

// ScriptStruct Engine.NamedCurveValue
// Size: 0x0c (Inherited: 0x00)
struct FNamedCurveValue {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x00)
struct FDebugCameraControllerSettingsViewModeIndex {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EViewModeIndex ViewModeIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x00)
struct FDebugDisplayProperty {
	struct UObject* Obj; // 0x00(0x08)
	struct UObject* WithinClass; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x00)
struct FMulticastRecordOptions {
	struct FString FuncPathName; // 0x00(0x10)
	bool bServerSkip; // 0x10(0x01)
	bool bClientSkip; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xb0 (Inherited: 0x00)
struct FRollbackNetStartupActorInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)
	struct ULevel* Level; // 0x38(0x08)
	char pad_40[0x60]; // 0x40(0x60)
	struct TArray<struct UObject*> ObjReferences; // 0xa0(0x10)
};

// ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x00)
struct FLevelNameAndTime {
	struct FString LevelName; // 0x00(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x00)
struct FDialogueContextMapping {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct UDistributionFloat* Distribution; // 0x28(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x48 (Inherited: 0x20)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct FVector MinValueVec; // 0x28(0x0c)
	struct FVector MaxValueVec; // 0x34(0x0c)
	struct UDistributionVector* Distribution; // 0x40(0x08)
};

// ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x00)
struct FGraphReference {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* GraphBlueprint; // 0x08(0x08)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x00)
struct FEdGraphPinReference {
	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x00(0x08)
	struct FGuid PinID; // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x00)
struct FEdGraphSchemaAction {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText MenuDescription; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x04)
	int32_t SectionID; // 0x6c(0x04)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xa0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xb0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xc0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xd0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xe0(0x10)
	struct FString SearchText; // 0xf0(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	struct UEdGraphNode* NodeTemplate; // 0x100(0x08)
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)
struct FPluginRedirect {
	struct FString OldPluginName; // 0x00(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x00)
struct FStructRedirect {
	struct FName OldStructName; // 0x00(0x08)
	struct FName NewStructName; // 0x08(0x08)
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x3c (Inherited: 0x00)
struct FClassRedirect {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName NewClassClass; // 0x28(0x08)
	struct FName NewClassPackage; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameNameRedirect {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x00)
struct FScreenMessageString {
	uint64_t Key; // 0x00(0x08)
	struct FString ScreenMessage; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float TimeToDisplay; // 0x1c(0x04)
	float CurrentTimeDisplayed; // 0x20(0x04)
	struct FVector2D TextScale; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x00)
struct FDropNoteInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)
struct FStatColorMapping {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)
struct FStatColorMapEntry {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x280 (Inherited: 0x00)
struct FWorldContext {
	char pad_0[0xd0]; // 0x00(0xd0)
	struct FURL LastURL; // 0xd0(0x68)
	struct FURL LastRemoteURL; // 0x138(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x1a0(0x08)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8(0x10)
	char pad_1B8[0x10]; // 0x1b8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8(0x10)
	char pad_1D8[0x18]; // 0x1d8(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1f0(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200(0x10)
	struct UGameViewportClient* GameViewport; // 0x210(0x08)
	struct UGameInstance* OwningGameInstance; // 0x218(0x08)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220(0x10)
	char pad_230[0x50]; // 0x230(0x50)
};

// ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x00)
struct FNamedNetDriver {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x00)
struct FLevelStreamingStatus {
	struct FName PackageName; // 0x00(0x08)
	char bShouldBeLoaded : 1; // 0x08(0x01)
	char bShouldBeVisible : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x00)
struct FFullyLoadedPackagesInfo {
	enum class EFullyLoadPackageType FullyLoadType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x00)
struct FNetDriverDefinition {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	float FixedEV100; // 0x00(0x04)
	bool bFixed; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x00)
struct FTickPrerequisite {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x00)
struct FCanvasUVTri {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x00)
struct FFontRenderInfo {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FDepthFieldGlowInfo GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x00)
struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.CollectionReference
// Size: 0x08 (Inherited: 0x00)
struct FCollectionReference {
	struct FName CollectionName; // 0x00(0x08)
};

// ScriptStruct Engine.ComponentReference
// Size: 0x28 (Inherited: 0x00)
struct FComponentReference {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName ComponentProperty; // 0x08(0x08)
	struct FString PathToComponent; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x08 (Inherited: 0x00)
struct FConstrainComponentPropName {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x14 (Inherited: 0x00)
struct FSkeletalMeshBuildSettings {
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ThresholdPosition; // 0x04(0x04)
	float ThresholdTangentNormal; // 0x08(0x04)
	float ThresholdUV; // 0x0c(0x04)
	float MorphThresholdPosition; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x30 (Inherited: 0x00)
struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x01(0x01)
	char bGenerateLightmapUVs : 1; // 0x01(0x01)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x01(0x01)
	char bSupportFaceRemap : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinLightmapResolution; // 0x04(0x04)
	int32_t SrcLightmapIndex; // 0x08(0x04)
	int32_t DstLightmapIndex; // 0x0c(0x04)
	float BuildScale; // 0x10(0x04)
	struct FVector BuildScale3D; // 0x14(0x0c)
	float DistanceFieldResolutionScale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x28(0x08)
};

// ScriptStruct Engine.POV
// Size: 0x1c (Inherited: 0x00)
struct FPOV {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x88 (Inherited: 0x00)
struct FAnimUpdateRateParameters {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x01(0x01)
	char bInterpolateSkippedFrames : 1; // 0x02(0x01)
	char bShouldUseLodMap : 1; // 0x02(0x01)
	char bShouldUseMinLod : 1; // 0x02(0x01)
	char bSkipUpdate : 1; // 0x02(0x01)
	char bSkipEvaluation : 1; // 0x02(0x01)
	char pad_2_5 : 3; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t UpdateRate; // 0x04(0x04)
	int32_t EvaluationRate; // 0x08(0x04)
	float TickedPoseOffestTime; // 0x0c(0x04)
	float AdditionalTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int32_t BaseNonRenderedUpdateRate; // 0x18(0x04)
	int32_t MaxEvalRateForInterpolation; // 0x1c(0x04)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30(0x50)
	int32_t SkippedUpdateFrames; // 0x80(0x04)
	int32_t SkippedEvalFrames; // 0x84(0x04)
};

// ScriptStruct Engine.AnimSlotDesc
// Size: 0x0c (Inherited: 0x00)
struct FAnimSlotDesc {
	struct FName SlotName; // 0x00(0x08)
	int32_t NumChannels; // 0x08(0x04)
};

// ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotInfo {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> ChannelWeights; // 0x08(0x10)
};

// ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x00)
struct FMTDResult {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.OverlapResult
// Size: 0x18 (Inherited: 0x00)
struct FOverlapResult {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x00)
struct FPrimitiveMaterialRef {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32_t ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 (Inherited: 0x00)
struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char bInitialized : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x00)
struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_9_3 : 5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 (Inherited: 0x00)
struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveLightFalloffExponent; // 0x04(0x04)
	float EmissiveLightExplicitInfluenceRadius; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0x0c)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c (Inherited: 0x0c)
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x00)
struct FBasedPosition {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector CachedBaseLocation; // 0x14(0x0c)
	struct FRotator CachedBaseRotation; // 0x20(0x0c)
	struct FVector CachedTransPosition; // 0x2c(0x0c)
};

// ScriptStruct Engine.CollisionImpactData
// Size: 0x28 (Inherited: 0x00)
struct FCollisionImpactData {
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x00(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0x0c)
	struct FVector TotalFrictionImpulse; // 0x1c(0x0c)
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x00)
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; // 0x00(0x0c)
	struct FVector ContactNormal; // 0x0c(0x0c)
	float ContactPenetration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x2]; // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x00)
struct FRigidBodyState {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	char Flags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.MaterialShadingModelField
// Size: 0x02 (Inherited: 0x00)
struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x00(0x02)
};

// ScriptStruct Engine.ExponentialHeightFogData
// Size: 0x0c (Inherited: 0x00)
struct FExponentialHeightFogData {
	float FogDensity; // 0x00(0x04)
	float FogHeightFalloff; // 0x04(0x04)
	float FogHeightOffset; // 0x08(0x04)
};

// ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x00)
struct FFontCharacter {
	int32_t StartU; // 0x00(0x04)
	int32_t StartV; // 0x04(0x04)
	int32_t USize; // 0x08(0x04)
	int32_t VSize; // 0x0c(0x04)
	char TextureIndex; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t VerticalOffset; // 0x14(0x04)
};

// ScriptStruct Engine.FontImportOptionsData
// Size: 0xb0 (Inherited: 0x00)
struct FFontImportOptionsData {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char bEnableAntialiasing : 1; // 0x14(0x01)
	char bEnableBold : 1; // 0x14(0x01)
	char bEnableItalic : 1; // 0x14(0x01)
	char bEnableUnderline : 1; // 0x14(0x01)
	char bAlphaOnly : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class EFontImportCharacterSet CharacterSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Chars; // 0x20(0x10)
	struct FString UnicodeRange; // 0x30(0x10)
	struct FString CharsFilePath; // 0x40(0x10)
	struct FString CharsFileWildcard; // 0x50(0x10)
	char bCreatePrintableOnly : 1; // 0x60(0x01)
	char bIncludeASCIIRange : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char bEnableDropShadow : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32_t TexturePageWidth; // 0x78(0x04)
	int32_t TexturePageMaxHeight; // 0x7c(0x04)
	int32_t XPadding; // 0x80(0x04)
	int32_t YPadding; // 0x84(0x04)
	int32_t ExtendBoxTop; // 0x88(0x04)
	int32_t ExtendBoxBottom; // 0x8c(0x04)
	int32_t ExtendBoxRight; // 0x90(0x04)
	int32_t ExtendBoxLeft; // 0x94(0x04)
	char bEnableLegacyMode : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t DistanceFieldScaleFactor; // 0xa4(0x04)
	float DistanceFieldScanRadiusScale; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xb0 (Inherited: 0xb0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x90 (Inherited: 0x00)
struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x00(0x01)
	char bAffectsLeftSmall : 1; // 0x00(0x01)
	char bAffectsRightLarge : 1; // 0x00(0x01)
	char bAffectsRightSmall : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
};

// ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xb8 (Inherited: 0x00)
struct FPredictProjectilePathResult {
	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x00(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1c)
	struct FHitResult HitResult; // 0x2c(0x88)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1c (Inherited: 0x00)
struct FPredictProjectilePathPointData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x60 (Inherited: 0x00)
struct FPredictProjectilePathParams {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	enum class ECollisionChannel TraceChannel; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
	float SimFrequency; // 0x48(0x04)
	float OverrideGravityZ; // 0x4c(0x04)
	enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float DrawDebugTime; // 0x54(0x04)
	bool bTraceComplex; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveHapticFeedbackEffect {
	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x110 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x88)
	struct FRuntimeFloatCurve Amplitude; // 0x88(0x88)
};

// ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x00)
struct FClusterNode {
	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
	struct FVector MinInstanceScale; // 0x28(0x0c)
	struct FVector MaxInstanceScale; // 0x34(0x0c)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x00)
struct FClusterNode_DEPRECATED {
	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
};

// ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x00)
struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UStaticMesh* StaticMesh; // 0x20(0x08)
	struct FName Key; // 0x28(0x08)
};

// ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x00)
struct FImportanceTexture {
	struct FIntPoint Size; // 0x00(0x08)
	int32_t NumMips; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct TWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x08)
	enum class EImportanceWeight Weighting; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x78 (Inherited: 0x00)
struct FComponentOverrideRecord {
	struct UObject* ComponentClass; // 0x00(0x08)
	struct UActorComponent* ComponentTemplate; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UObject* OwnerClass; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 (Inherited: 0x00)
struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x00(0x01)
	char bExecuteWhenPaused : 1; // 0x00(0x01)
	char bOverrideParentBinding : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x04)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputActionName; // 0x04(0x08)
	enum class EInputEvent InputKeyEvent; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName FunctionNameToBind; // 0x10(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 (Inherited: 0x04)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName FunctionNameToBind; // 0x20(0x08)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0x70 (Inherited: 0x00)
struct FCachedKeyToActionInfo {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x04)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char pad_4[0x4]; // 0x04(0x04)
	struct FInputChord InputChord; // 0x08(0x20)
	enum class EInputEvent InputKeyEvent; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName FunctionNameToBind; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x10 (Inherited: 0x04)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	enum class EInputEvent InputKeyEvent; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName FunctionNameToBind; // 0x08(0x08)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x140 (Inherited: 0xa8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xa8(0x08)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0(0x40)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x100(0x10)
	char pad_110[0x20]; // 0x110(0x20)
	int32_t InstancingRandomSeed; // 0x130(0x04)
	char pad_134[0xc]; // 0x134(0x0c)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; // 0x00(0x40)
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshLightMapInstanceData {
	struct FTransform Transform; // 0x00(0x30)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x30(0x10)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshMappingInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : FIndexedCurve {
	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x04)
	bool bUseDefaultValueBeforeFirstKey; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// ScriptStruct Engine.IntegralKey
// Size: 0x08 (Inherited: 0x00)
struct FIntegralKey {
	float Time; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x00)
struct FCurveEdTab {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x04)
	float ViewEndInput; // 0x24(0x04)
	float ViewStartOutput; // 0x28(0x04)
	float ViewEndOutput; // 0x2c(0x04)
};

// ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x00)
struct FCurveEdEntry {
	struct UObject* CurveObject; // 0x00(0x08)
	struct FColor CurveColor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x04)
	int32_t bColorCurve; // 0x24(0x04)
	int32_t bFloatingPointColorCurve; // 0x28(0x04)
	int32_t bClamp; // 0x2c(0x04)
	float ClampLow; // 0x30(0x04)
	float ClampHigh; // 0x34(0x04)
};

// ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x00)
struct FInterpEdSelKey {
	struct UInterpGroup* Group; // 0x00(0x08)
	struct UInterpTrack* Track; // 0x08(0x08)
	int32_t KeyIndex; // 0x10(0x04)
	float UnsnappedPosition; // 0x14(0x04)
};

// ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x00)
struct FCameraPreviewInfo {
	struct APawn* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* PawnInst; // 0x28(0x08)
};

// ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x00)
struct FSubTrackGroup {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	char bIsCollapsed : 1; // 0x20(0x01)
	char bIsSelected : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x00)
struct FSupportedSubTrackInfo {
	struct UInterpTrack* SupportedClass; // 0x00(0x08)
	struct FString SubTrackName; // 0x08(0x10)
	int32_t GroupIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAnimControlTrackKey {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float AnimStartOffset; // 0x10(0x04)
	float AnimEndOffset; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char bReverse : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.BoolTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FBoolTrackKey {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x00)
struct FDirectorTrackCut {
	float Time; // 0x00(0x04)
	float TransitionTime; // 0x04(0x04)
	struct FName TargetCamGroup; // 0x08(0x08)
	int32_t ShotNumber; // 0x10(0x04)
};

// ScriptStruct Engine.EventTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FEventTrackKey {
	float Time; // 0x00(0x04)
	struct FName EventName; // 0x04(0x08)
};

// ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x00)
struct FInterpLookupTrack {
	struct TArray<struct FInterpLookupPoint> Points; // 0x00(0x10)
};

// ScriptStruct Engine.InterpLookupPoint
// Size: 0x0c (Inherited: 0x00)
struct FInterpLookupPoint {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FParticleReplayTrackKey {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32_t ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x00)
struct FSoundTrackKey {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.ToggleTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FToggleTrackKey {
	float Time; // 0x00(0x04)
	enum class ETrackToggleAction ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.VisibilityTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FVisibilityTrackKey {
	float Time; // 0x00(0x04)
	enum class EVisibilityTrackAction Action; // 0x04(0x01)
	enum class EVisibilityTrackCondition ActiveCondition; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.VectorSpringState
// Size: 0x18 (Inherited: 0x00)
struct FVectorSpringState {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.FloatSpringState
// Size: 0x08 (Inherited: 0x00)
struct FFloatSpringState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 (Inherited: 0x00)
struct FDrawToRenderTargetContext {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x00)
struct FLatentActionManager {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x00)
struct FLayerActorStats {
	struct UObject* Type; // 0x00(0x08)
	int32_t Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x38 (Inherited: 0x00)
struct FReplicatedStaticActorDestructionInfo {
	char pad_0[0x30]; // 0x00(0x30)
	struct UObject* ObjClass; // 0x30(0x08)
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x134 (Inherited: 0x00)
struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x08(0x8c)
	bool bOverrideLandscapeExportLOD; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	int32_t LandscapeExportLOD; // 0x98(0x04)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0x9c(0x8c)
	bool bBakeFoliageToLandscape; // 0x128(0x01)
	bool bBakeGrassToLandscape; // 0x129(0x01)
	bool bAllowDistanceField; // 0x12a(0x01)
	bool bSimplifiedMeshMerge; // 0x12b(0x01)
	bool bGenerateMeshNormalMap; // 0x12c(0x01)
	bool bGenerateMeshMetallicMap; // 0x12d(0x01)
	bool bGenerateMeshRoughnessMap; // 0x12e(0x01)
	bool bGenerateMeshSpecularMap; // 0x12f(0x01)
	bool bGenerateLandscapeNormalMap; // 0x130(0x01)
	bool bGenerateLandscapeMetallicMap; // 0x131(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x132(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x133(0x01)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x8c (Inherited: 0x00)
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x00(0x08)
	float GutterSpace; // 0x08(0x04)
	float MetallicConstant; // 0x0c(0x04)
	float RoughnessConstant; // 0x10(0x04)
	float AnisotropyConstant; // 0x14(0x04)
	float SpecularConstant; // 0x18(0x04)
	float OpacityConstant; // 0x1c(0x04)
	float OpacityMaskConstant; // 0x20(0x04)
	float AmbientOcclusionConstant; // 0x24(0x04)
	enum class ETextureSizingType TextureSizingType; // 0x28(0x01)
	enum class EMaterialMergeType MaterialMergeType; // 0x29(0x01)
	enum class EBlendMode BlendMode; // 0x2a(0x01)
	char bAllowTwoSidedMaterial : 1; // 0x2b(0x01)
	char bNormalMap : 1; // 0x2b(0x01)
	char bTangentMap : 1; // 0x2b(0x01)
	char bMetallicMap : 1; // 0x2b(0x01)
	char bRoughnessMap : 1; // 0x2b(0x01)
	char bAnisotropyMap : 1; // 0x2b(0x01)
	char bSpecularMap : 1; // 0x2b(0x01)
	char bEmissiveMap : 1; // 0x2b(0x01)
	char bOpacityMap : 1; // 0x2c(0x01)
	char bOpacityMaskMap : 1; // 0x2c(0x01)
	char bAmbientOcclusionMap : 1; // 0x2c(0x01)
	char pad_2C_3 : 5; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FIntPoint DiffuseTextureSize; // 0x30(0x08)
	struct FIntPoint NormalTextureSize; // 0x38(0x08)
	struct FIntPoint TangentTextureSize; // 0x40(0x08)
	struct FIntPoint MetallicTextureSize; // 0x48(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x50(0x08)
	struct FIntPoint AnisotropyTextureSize; // 0x58(0x08)
	struct FIntPoint SpecularTextureSize; // 0x60(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x68(0x08)
	struct FIntPoint OpacityTextureSize; // 0x70(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x78(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x08)
	bool bHLODMaterial; // 0x88(0x01)
	bool bWorldCompositionMaterial; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
};

// ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 (Inherited: 0x00)
struct FStreamableTextureInstance {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 (Inherited: 0x28)
struct FDynamicTextureInstance : FStreamableTextureInstance {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool bAttached; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float OriginalRadius; // 0x34(0x04)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x100 (Inherited: 0xa8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FTransform Transform; // 0xb0(0x30)
	struct FGuid LightGuid; // 0xe0(0x10)
	int32_t PreviewShadowMapChannel; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x00)
struct FBatchedPoint {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float RemainingLifeTime; // 0x20(0x04)
	char DepthPriority; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x00)
struct FBatchedLine {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float RemainingLifeTime; // 0x2c(0x04)
	char DepthPriority; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x00)
struct FClientReceiveData {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32_t MessageIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_2; // 0x28(0x08)
	struct APlayerState* RelatedPlayerState_3; // 0x30(0x08)
	struct UObject* OptionalObject; // 0x38(0x08)
};

// ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x00)
struct FParameterGroupData {
	struct FString GroupName; // 0x00(0x10)
	int32_t GroupSortPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSpriteElement {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.MaterialCachedExpressionData
// Size: 0x228 (Inherited: 0x00)
struct FMaterialCachedExpressionData {
	struct FMaterialCachedParameters Parameters; // 0x00(0x1a0)
	struct TArray<struct UObject*> ReferencedTextures; // 0x1a0(0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x1b0(0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1c0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayers; // 0x1d0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1e0(0x10)
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // 0x1f0(0x10)
	struct TArray<struct FName> DynamicParameterNames; // 0x200(0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x210(0x10)
	char bHasRuntimeVirtualTextureOutput : 1; // 0x220(0x01)
	char bHasSceneColor : 1; // 0x220(0x01)
	char pad_220_2 : 6; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialParameterCollectionInfo {
	struct FGuid StateID; // 0x00(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialFunctionInfo {
	struct FGuid StateID; // 0x00(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialCachedParameters
// Size: 0x1a0 (Inherited: 0x00)
struct FMaterialCachedParameters {
	struct FMaterialCachedParameterEntry Entries[0x5]; // 0x00(0x140)
	struct TArray<float> ScalarValues; // 0x140(0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x150(0x10)
	struct TArray<struct UTexture*> TextureValues; // 0x160(0x10)
	struct TArray<struct UFont*> FontValues; // 0x170(0x10)
	struct TArray<int32_t> FontPageValues; // 0x180(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190(0x10)
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// Size: 0x40 (Inherited: 0x00)
struct FMaterialCachedParameterEntry {
	struct TArray<uint64_t> NameHashes; // 0x00(0x10)
	struct TArray<struct FMaterialParameterInfo> ParameterInfos; // 0x10(0x10)
	struct TArray<struct FGuid> ExpressionGuids; // 0x20(0x10)
	struct TArray<bool> Overrides; // 0x30(0x10)
};

// ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParameterInfo {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterAssociation Association; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Index; // 0x0c(0x04)
};

// ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x00)
struct FParameterChannelNames {
	struct FText R; // 0x00(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)
};

// ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x00)
struct FCustomDefine {
	struct FString DefineName; // 0x00(0x10)
	struct FString DefineValue; // 0x10(0x10)
};

// ScriptStruct Engine.CustomInput
// Size: 0x1c (Inherited: 0x00)
struct FCustomInput {
	struct FName InputName; // 0x00(0x08)
	struct FExpressionInput Input; // 0x08(0x0c)
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x20 (Inherited: 0x00)
struct FFunctionExpressionOutput {
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x00(0x08)
	struct FGuid ExpressionOutputId; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x08)
};

// ScriptStruct Engine.FunctionExpressionInput
// Size: 0x30 (Inherited: 0x00)
struct FFunctionExpressionInput {
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x00(0x08)
	struct FGuid ExpressionInputId; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct Engine.FontParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FFontParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UFont* FontValue; // 0x10(0x08)
	int32_t FontPage; // 0x18(0x04)
	struct FGuid ExpressionGUID; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FRuntimeVirtualTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct URuntimeVirtualTexture* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.TextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UTexture* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.VectorParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FVectorParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// ScriptStruct Engine.ScalarParameterValue
// Size: 0x24 (Inherited: 0x00)
struct FScalarParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UCurveLinearColor> Curve; // 0x08(0x28)
	struct TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30(0x28)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x08 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x00(0x01)
	char bOverride_BlendMode : 1; // 0x00(0x01)
	char bOverride_ShadingModel : 1; // 0x00(0x01)
	char bOverride_DitheredLODTransition : 1; // 0x00(0x01)
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x00(0x01)
	char bOverride_TwoSided : 1; // 0x00(0x01)
	char TwoSided : 1; // 0x00(0x01)
	char DitheredLODTransition : 1; // 0x00(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	enum class EBlendMode BlendMode; // 0x02(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x03(0x01)
	float OpacityMaskClipValue; // 0x04(0x04)
};

// ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialTextureInfo {
	float SamplingScale; // 0x00(0x04)
	int32_t UVChannelIndex; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x10 (Inherited: 0x00)
struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; // 0x00(0x04)
	float DiffuseBoost; // 0x04(0x04)
	float ExportResolutionScale; // 0x08(0x04)
	char bCastShadowAsMasked : 1; // 0x0c(0x01)
	char bOverrideCastShadowAsMasked : 1; // 0x0c(0x01)
	char bOverrideEmissiveBoost : 1; // 0x0c(0x01)
	char bOverrideDiffuseBoost : 1; // 0x0c(0x01)
	char bOverrideExportResolutionScale : 1; // 0x0c(0x01)
	char pad_C_5 : 3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 (Inherited: 0x00)
struct FMaterialLayersFunctions {
	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x00(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
	struct TArray<bool> LayerStates; // 0x20(0x10)
	struct FString KeyString; // 0x30(0x10)
};

// ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x00)
struct FCollectionParameterBase {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1c (Inherited: 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18(0x04)
};

// ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FInterpGroupActorInfo {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraCutInfo {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString MemberScope; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x01)
	bool bWasDeprecated; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x00)
struct FMeshInstancingSettings {
	struct AActor* ActorClassToUse; // 0x00(0x08)
	int32_t InstanceReplacementThreshold; // 0x08(0x04)
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0x0c(0x01)
	bool bSkipMeshesWithVertexColors; // 0x0d(0x01)
	bool bUseHLODVolumes; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10(0x08)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xa4 (Inherited: 0x00)
struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x00(0x04)
	enum class EUVOutput OutputUVs[0x8]; // 0x04(0x08)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x8c)
	int32_t GutterSize; // 0x98(0x04)
	int32_t SpecificLOD; // 0x9c(0x04)
	enum class EMeshLODSelectionType LODSelectionType; // 0xa0(0x01)
	char bGenerateLightMapUV : 1; // 0xa1(0x01)
	char bComputedLightMapResolution : 1; // 0xa1(0x01)
	char bPivotPointAtZero : 1; // 0xa1(0x01)
	char bMergePhysicsData : 1; // 0xa1(0x01)
	char bMergeMaterials : 1; // 0xa1(0x01)
	char bCreateMergedMaterial : 1; // 0xa1(0x01)
	char bBakeVertexDataToMesh : 1; // 0xa1(0x01)
	char bUseVertexDataForBakingMaterial : 1; // 0xa1(0x01)
	char bUseTextureBinning : 1; // 0xa2(0x01)
	char bReuseMeshLightmapUVs : 1; // 0xa2(0x01)
	char bMergeEquivalentMaterials : 1; // 0xa2(0x01)
	char bUseLandscapeCulling : 1; // 0xa2(0x01)
	char bIncludeImposters : 1; // 0xa2(0x01)
	char bAllowDistanceField : 1; // 0xa2(0x01)
	char pad_A2_6 : 2; // 0xa2(0x01)
	char pad_A3[0x1]; // 0xa3(0x01)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xac (Inherited: 0x00)
struct FMeshProxySettings {
	int32_t ScreenSize; // 0x00(0x04)
	float VoxelSize; // 0x04(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x08(0x8c)
	float MergeDistance; // 0x94(0x04)
	struct FColor UnresolvedGeometryColor; // 0x98(0x04)
	float MaxRayCastDist; // 0x9c(0x04)
	float HardAngleThreshold; // 0xa0(0x04)
	int32_t LightMapResolution; // 0xa4(0x04)
	enum class EProxyNormalComputationMethod NormalCalculationMethod; // 0xa8(0x01)
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xa9(0x01)
	char bCalculateCorrectLODModel : 1; // 0xaa(0x01)
	char bOverrideVoxelSize : 1; // 0xaa(0x01)
	char bOverrideTransferDistance : 1; // 0xaa(0x01)
	char bUseHardAngleThreshold : 1; // 0xaa(0x01)
	char bComputeLightMapResolution : 1; // 0xaa(0x01)
	char bRecalculateNormals : 1; // 0xaa(0x01)
	char bUseLandscapeCulling : 1; // 0xaa(0x01)
	char bAllowAdjacency : 1; // 0xaa(0x01)
	char bAllowDistanceField : 1; // 0xab(0x01)
	char bReuseMeshLightmapUVs : 1; // 0xab(0x01)
	char bCreateCollision : 1; // 0xab(0x01)
	char bAllowVertexColors : 1; // 0xab(0x01)
	char bGenerateLightmapUVs : 1; // 0xab(0x01)
	char pad_AB_5 : 3; // 0xab(0x01)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x24 (Inherited: 0x00)
struct FMeshReductionSettings {
	float PercentTriangles; // 0x00(0x04)
	float PercentVertices; // 0x04(0x04)
	float MaxDeviation; // 0x08(0x04)
	float PixelError; // 0x0c(0x04)
	float WeldingThreshold; // 0x10(0x04)
	float HardAngleThreshold; // 0x14(0x04)
	int32_t BaseLODModel; // 0x18(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x1d(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1e(0x01)
	char bRecalculateNormals : 1; // 0x1f(0x01)
	char bGenerateUniqueLightmapUVs : 1; // 0x1f(0x01)
	char bKeepSymmetry : 1; // 0x1f(0x01)
	char bVisibilityAided : 1; // 0x1f(0x01)
	char bCullOccluded : 1; // 0x1f(0x01)
	char pad_1F_5 : 3; // 0x1f(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20(0x01)
	enum class EMeshFeatureImportance VisibilityAggressiveness; // 0x21(0x01)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
};

// ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseInfo {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.MK3DHighlightTargetEvent
// Size: 0x68 (Inherited: 0x00)
struct FMK3DHighlightTargetEvent {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32_t Time1; // 0x30(0x04)
	int32_t Time2; // 0x34(0x04)
	struct FString TargetNetGUID; // 0x38(0x10)
	struct FString TargetId; // 0x48(0x10)
	struct FString TargetName; // 0x58(0x10)
};

// ScriptStruct Engine.MK3DTargetData
// Size: 0x30 (Inherited: 0x00)
struct FMK3DTargetData {
	struct FString TargetNetGUID; // 0x00(0x10)
	struct FString TargetId; // 0x10(0x10)
	struct FString TargetName; // 0x20(0x10)
};

// ScriptStruct Engine.MK3DHighlightKillEvent
// Size: 0x30 (Inherited: 0x00)
struct FMK3DHighlightKillEvent {
	int32_t Time1; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KillerName; // 0x08(0x10)
	float KillerAppearanceTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString VictimName; // 0x20(0x10)
};

// ScriptStruct Engine.MK3DKillData
// Size: 0x38 (Inherited: 0x00)
struct FMK3DKillData {
	struct FString VictimNetId; // 0x00(0x10)
	struct FString KillerName; // 0x10(0x10)
	float KillerAppearanceTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString VictimName; // 0x28(0x10)
};

// ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : FIndexedCurve {
	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.NameCurveKey
// Size: 0x0c (Inherited: 0x00)
struct FNameCurveKey {
	float Time; // 0x00(0x04)
	struct FName Value; // 0x04(0x08)
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x78 (Inherited: 0x30)
struct FNavDataConfig : FNavAgentProperties {
	struct FName Name; // 0x30(0x08)
	struct FColor Color; // 0x38(0x04)
	struct FVector DefaultQueryExtent; // 0x3c(0x0c)
	struct AActor* NavigationDataClass; // 0x48(0x08)
	struct TSoftClassPtr<UObject> NavDataClass; // 0x50(0x28)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x00(0x01)
	char bSupportsAgent1 : 1; // 0x00(0x01)
	char bSupportsAgent2 : 1; // 0x00(0x01)
	char bSupportsAgent3 : 1; // 0x00(0x01)
	char bSupportsAgent4 : 1; // 0x00(0x01)
	char bSupportsAgent5 : 1; // 0x00(0x01)
	char bSupportsAgent6 : 1; // 0x00(0x01)
	char bSupportsAgent7 : 1; // 0x00(0x01)
	char bSupportsAgent8 : 1; // 0x01(0x01)
	char bSupportsAgent9 : 1; // 0x01(0x01)
	char bSupportsAgent10 : 1; // 0x01(0x01)
	char bSupportsAgent11 : 1; // 0x01(0x01)
	char bSupportsAgent12 : 1; // 0x01(0x01)
	char bSupportsAgent13 : 1; // 0x01(0x01)
	char bSupportsAgent14 : 1; // 0x01(0x01)
	char bSupportsAgent15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x30 (Inherited: 0x00)
struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x00(0x04)
	float MaxFallDownLength; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
	float SnapRadius; // 0x0c(0x04)
	float SnapHeight; // 0x10(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x14(0x04)
	char bSupportsAgent0 : 1; // 0x18(0x01)
	char bSupportsAgent1 : 1; // 0x18(0x01)
	char bSupportsAgent2 : 1; // 0x18(0x01)
	char bSupportsAgent3 : 1; // 0x18(0x01)
	char bSupportsAgent4 : 1; // 0x18(0x01)
	char bSupportsAgent5 : 1; // 0x18(0x01)
	char bSupportsAgent6 : 1; // 0x18(0x01)
	char bSupportsAgent7 : 1; // 0x18(0x01)
	char bSupportsAgent8 : 1; // 0x19(0x01)
	char bSupportsAgent9 : 1; // 0x19(0x01)
	char bSupportsAgent10 : 1; // 0x19(0x01)
	char bSupportsAgent11 : 1; // 0x19(0x01)
	char bSupportsAgent12 : 1; // 0x19(0x01)
	char bSupportsAgent13 : 1; // 0x19(0x01)
	char bSupportsAgent14 : 1; // 0x19(0x01)
	char bSupportsAgent15 : 1; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	enum class ENavLinkDirection Direction; // 0x1c(0x01)
	char bUseSnapHeight : 1; // 0x1d(0x01)
	char bSnapToCheapestArea : 1; // 0x1d(0x01)
	char bCustomFlag0 : 1; // 0x1d(0x01)
	char bCustomFlag1 : 1; // 0x1d(0x01)
	char bCustomFlag2 : 1; // 0x1d(0x01)
	char bCustomFlag3 : 1; // 0x1d(0x01)
	char bCustomFlag4 : 1; // 0x1d(0x01)
	char bCustomFlag5 : 1; // 0x1d(0x01)
	char bCustomFlag6 : 1; // 0x1e(0x01)
	char bCustomFlag7 : 1; // 0x1e(0x01)
	char pad_1E_2 : 6; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct UNavAreaBase* AreaClass; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x60 (Inherited: 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x30(0x0c)
	struct FVector LeftEnd; // 0x3c(0x0c)
	struct FVector RightStart; // 0x48(0x0c)
	struct FVector RightEnd; // 0x54(0x0c)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x48 (Inherited: 0x30)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x30(0x0c)
	struct FVector Right; // 0x3c(0x0c)
};

// ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x00)
struct FChannelDefinition {
	struct FName ChannelName; // 0x00(0x08)
	struct FName ClassName; // 0x08(0x08)
	struct UObject* ChannelClass; // 0x10(0x08)
	int32_t StaticChannelIndex; // 0x18(0x04)
	bool bTickOnCreate; // 0x1c(0x01)
	bool bServerOpen; // 0x1d(0x01)
	bool bClientOpen; // 0x1e(0x01)
	bool bInitialServer; // 0x1f(0x01)
	bool bInitialClient; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x34 (Inherited: 0x00)
struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x00(0x04)
	int32_t PktLossMaxSize; // 0x04(0x04)
	int32_t PktLossMinSize; // 0x08(0x04)
	int32_t PktOrder; // 0x0c(0x04)
	int32_t PktDup; // 0x10(0x04)
	int32_t PktLag; // 0x14(0x04)
	int32_t PktLagVariance; // 0x18(0x04)
	int32_t PktLagMin; // 0x1c(0x04)
	int32_t PktLagMax; // 0x20(0x04)
	int32_t PktIncomingLagMin; // 0x24(0x04)
	int32_t PktIncomingLagMax; // 0x28(0x04)
	int32_t PktIncomingLoss; // 0x2c(0x04)
	int32_t PktJitter; // 0x30(0x04)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x00)
struct FNetworkEmulationProfileDescription {
	struct FString ProfileName; // 0x00(0x10)
	struct FString Tooltip; // 0x10(0x10)
};

// ScriptStruct Engine.NodeItem
// Size: 0x40 (Inherited: 0x00)
struct FNodeItem {
	struct FName ParentName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.ParticleBurst
// Size: 0x0c (Inherited: 0x00)
struct FParticleBurst {
	int32_t Count; // 0x00(0x04)
	int32_t CountLow; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x00)
struct FParticleRandomSeedInfo {
	struct FName ParameterName; // 0x00(0x08)
	char bGetSeedFromInstance : 1; // 0x08(0x01)
	char bInstanceSeedIsIndex : 1; // 0x08(0x01)
	char bResetSeedOnEmitterLooping : 1; // 0x08(0x01)
	char bRandomlySelectSeedArray : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x00)
struct FParticleCurvePair {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* CurveObject; // 0x10(0x08)
};

// ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 (Inherited: 0x00)
struct FBeamModifierOptions {
	char bModify : 1; // 0x00(0x01)
	char bScale : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x00)
struct FParticleEvent_GenerateInfo {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Frequency; // 0x04(0x04)
	int32_t ParticleFrequency; // 0x08(0x04)
	char FirstTimeOnly : 1; // 0x0c(0x01)
	char LastTimeOnly : 1; // 0x0c(0x01)
	char UseReflectedImpactVector : 1; // 0x0c(0x01)
	char bUseOrbitOffset : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName CustomName; // 0x10(0x08)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x00)
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
};

// ScriptStruct Engine.OrbitOptions
// Size: 0x04 (Inherited: 0x00)
struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x00(0x01)
	char bProcessDuringUpdate : 1; // 0x00(0x01)
	char bUseEmitterTime : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x48 (Inherited: 0x00)
struct FEmitterDynamicParameter {
	struct FName ParamName; // 0x00(0x08)
	char bUseEmitterTime : 1; // 0x08(0x01)
	char bSpawnTimeOnly : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class EEmitterDynamicParameterValue ValueMethod; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char bScaleVelocityByParamValue : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FRawDistributionFloat ParamValue; // 0x18(0x30)
};

// ScriptStruct Engine.BeamTargetData
// Size: 0x0c (Inherited: 0x00)
struct FBeamTargetData {
	struct FName TargetName; // 0x00(0x08)
	float TargetPercentage; // 0x08(0x04)
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x160 (Inherited: 0x00)
struct FGPUSpriteResourceData {
	struct TArray<struct FColor> QuantizedColorSamples; // 0x00(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 ColorBias; // 0x40(0x10)
	struct FVector4 MiscScale; // 0x50(0x10)
	struct FVector4 MiscBias; // 0x60(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0x70(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0x80(0x10)
	struct FVector4 SubImageSize; // 0x90(0x10)
	struct FVector4 SizeBySpeed; // 0xa0(0x10)
	struct FVector ConstantAcceleration; // 0xb0(0x0c)
	struct FVector OrbitOffsetBase; // 0xbc(0x0c)
	struct FVector OrbitOffsetRange; // 0xc8(0x0c)
	struct FVector OrbitFrequencyBase; // 0xd4(0x0c)
	struct FVector OrbitFrequencyRange; // 0xe0(0x0c)
	struct FVector OrbitPhaseBase; // 0xec(0x0c)
	struct FVector OrbitPhaseRange; // 0xf8(0x0c)
	float GlobalVectorFieldScale; // 0x104(0x04)
	float GlobalVectorFieldTightness; // 0x108(0x04)
	float PerParticleVectorFieldScale; // 0x10c(0x04)
	float PerParticleVectorFieldBias; // 0x110(0x04)
	float DragCoefficientScale; // 0x114(0x04)
	float DragCoefficientBias; // 0x118(0x04)
	float ResilienceScale; // 0x11c(0x04)
	float ResilienceBias; // 0x120(0x04)
	float CollisionRadiusScale; // 0x124(0x04)
	float CollisionRadiusBias; // 0x128(0x04)
	float CollisionTimeBias; // 0x12c(0x04)
	float CollisionRandomSpread; // 0x130(0x04)
	float CollisionRandomDistribution; // 0x134(0x04)
	float OneMinusFriction; // 0x138(0x04)
	float RotationRateScale; // 0x13c(0x04)
	float CameraMotionBlurAmount; // 0x140(0x04)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x144(0x01)
	enum class EParticleAxisLock LockAxisFlag; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D PivotOffset; // 0x148(0x08)
	char bRemoveHMDRoll : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float MinFacingCameraBlendDistance; // 0x154(0x04)
	float MaxFacingCameraBlendDistance; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x280 (Inherited: 0x00)
struct FGPUSpriteEmitterInfo {
	struct UParticleModuleRequired* RequiredModule; // 0x00(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x08(0x08)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x08)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x20)
	struct FFloatDistribution DragCoefficient; // 0xc0(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0xe0(0x20)
	struct FFloatDistribution Resilience; // 0x100(0x20)
	struct FVector ConstantAcceleration; // 0x120(0x0c)
	struct FVector PointAttractorPosition; // 0x12c(0x0c)
	float PointAttractorRadiusSq; // 0x138(0x04)
	struct FVector OrbitOffsetBase; // 0x13c(0x0c)
	struct FVector OrbitOffsetRange; // 0x148(0x0c)
	struct FVector2D InvMaxSize; // 0x154(0x08)
	float InvRotationRateScale; // 0x15c(0x04)
	float MaxLifetime; // 0x160(0x04)
	int32_t MaxParticleCount; // 0x164(0x04)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x168(0x01)
	enum class EParticleAxisLock LockAxisFlag; // 0x169(0x01)
	char pad_16A[0x2]; // 0x16a(0x02)
	char bEnableCollision : 1; // 0x16c(0x01)
	char pad_16C_1 : 7; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	enum class EParticleCollisionMode CollisionMode; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	char bRemoveHMDRoll : 1; // 0x174(0x01)
	char pad_174_1 : 7; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float MinFacingCameraBlendDistance; // 0x178(0x04)
	float MaxFacingCameraBlendDistance; // 0x17c(0x04)
	struct FRawDistributionVector DynamicColor; // 0x180(0x48)
	struct FRawDistributionFloat DynamicAlpha; // 0x1c8(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x1f8(0x48)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x240(0x30)
	char pad_270[0x10]; // 0x270(0x10)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x00)
struct FGPUSpriteLocalVectorFieldInfo {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0x0c)
	struct FRotator MaxInitialRotation; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float Tightness; // 0x68(0x04)
	char bIgnoreComponentTransform : 1; // 0x6c(0x01)
	char bTileX : 1; // 0x6c(0x01)
	char bTileY : 1; // 0x6c(0x01)
	char bTileZ : 1; // 0x6c(0x01)
	char bUseFixDT : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNamedEmitterMaterial {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x00)
struct FLODSoloTrack {
	struct TArray<char> SoloEnableSetting; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 (Inherited: 0x00)
struct FParticleSystemLOD {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	enum class EParticleSysParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleSystemReplayFrame {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleEmitterReplayFrame {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.FreezablePerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FFreezablePerPlatformInt {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Engine.PhysicalAnimationData
// Size: 0x24 (Inherited: 0x00)
struct FPhysicalAnimationData {
	struct FName BodyName; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)
};

// ScriptStruct Engine.TireFrictionScalePair
// Size: 0x10 (Inherited: 0x00)
struct FTireFrictionScalePair {
	struct UTireType* TireType; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x2c (Inherited: 0x00)
struct FPhysicalAnimationProfile {
	struct FName ProfileName; // 0x00(0x08)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x08(0x24)
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x10c (Inherited: 0x00)
struct FPhysicsConstraintProfileHandle {
	struct FConstraintProfileProperties ProfileProperties; // 0x00(0x104)
	struct FName ProfileName; // 0x104(0x08)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x03 (Inherited: 0x00)
struct FChaosPhysicsSettings {
	enum class EChaosThreadingMode DefaultThreadingModel; // 0x00(0x01)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x01(0x01)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x02(0x01)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x0c (Inherited: 0x00)
struct FPhysicalSurfaceName {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x00)
struct FDelegateArray {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.TViewTarget
// Size: 0x670 (Inherited: 0x00)
struct FTViewTarget {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FMinimalViewInfo POV; // 0x10(0x650)
	struct APlayerState* PlayerState; // 0x660(0x08)
	char pad_668[0x8]; // 0x668(0x08)
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x660 (Inherited: 0x00)
struct FCameraCacheEntry {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FMinimalViewInfo POV; // 0x10(0x650)
};

// ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x10 (Inherited: 0x00)
struct FInputActionSpeechMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FName SpeechKeyword; // 0x08(0x08)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisActionName; // 0x00(0x08)
	struct FName AxisName; // 0x08(0x08)
	float Scale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FKey Key; // 0x18(0x18)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct FInputAxisProperties AxisProperties; // 0x08(0x10)
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x00)
struct FInputAxisProperties {
	float DeadZone; // 0x00(0x04)
	float Sensitivity; // 0x04(0x04)
	float Exponent; // 0x08(0x04)
	char bInvert : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x00)
struct FKeyBind {
	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char bDisabled : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.PlayerMuteList
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMuteList {
	char pad_0[0x30]; // 0x00(0x30)
	bool bHasVoiceHandshakeCompleted; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t VoiceChannelIdx; // 0x34(0x04)
};

// ScriptStruct Engine.PoseDataContainer
// Size: 0x90 (Inherited: 0x00)
struct FPoseDataContainer {
	struct TArray<struct FSmartName> PoseNames; // 0x00(0x10)
	struct TArray<struct FName> Tracks; // 0x10(0x10)
	struct TMap<struct FName, int32_t> TrackMap; // 0x20(0x50)
	struct TArray<struct FPoseData> Poses; // 0x70(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.PoseData
// Size: 0x70 (Inherited: 0x00)
struct FPoseData {
	struct TArray<struct FTransform> LocalSpacePose; // 0x00(0x10)
	struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10(0x50)
	struct TArray<float> CurveData; // 0x60(0x10)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x00)
struct FPreviewAssetAttachContainer {
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x00(0x10)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 (Inherited: 0x00)
struct FPreviewAttachedObjectPair {
	struct TSoftObjectPtr<UObject> AttachedObject; // 0x00(0x28)
	struct UObject* Object; // 0x28(0x08)
	struct FName AttachedTo; // 0x30(0x08)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x00(0x28)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0xf0 (Inherited: 0xa8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FTransform ComponentTransform; // 0xb0(0x30)
	int32_t VisibilityId; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UPrimitiveComponent* LODParent; // 0xe8(0x08)
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 (Inherited: 0x00)
struct FSpriteCategoryInfo {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FReverbSettings {
	bool bApplyReverb; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x08)
	float Volume; // 0x18(0x04)
	float FadeTime; // 0x1c(0x04)
};

// ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x00)
struct FCompressedRichCurve {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x00)
struct FTransformBase {
	struct FName Node; // 0x00(0x08)
	struct FTransformBaseConstraint Constraints[0x2]; // 0x08(0x20)
};

// ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x00)
struct FTransformBaseConstraint {
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x00(0x10)
};

// ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x00)
struct FRigTransformConstraint {
	enum class EConstraintTransform TranformType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentSpace; // 0x04(0x08)
	float Weight; // 0x0c(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.RootMotionSource
// Size: 0xa0 (Inherited: 0x00)
struct FRootMotionSource {
	char pad_0[0x10]; // 0x00(0x10)
	uint16_t Priority; // 0x10(0x02)
	uint16_t LocalID; // 0x12(0x02)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName InstanceName; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float PreviousTime; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct FRootMotionSourceStatus status; // 0x30(0x01)
	struct FRootMotionSourceSettings Settings; // 0x31(0x01)
	bool bInLocalSpace; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct FRootMotionMovementParams RootMotionParams; // 0x40(0x40)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80(0x14)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 (Inherited: 0x00)
struct FRootMotionFinishVelocitySettings {
	enum class ERootMotionFinishVelocityMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector SetVelocity; // 0x04(0x0c)
	float ClampVelocity; // 0x10(0x04)
};

// ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceStatus {
	char Flags; // 0x00(0x01)
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xd0 (Inherited: 0xa0)
struct FRootMotionSource_JumpForce : FRootMotionSource {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool bDisableTimeout; // 0xac(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xb0(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0xb8(0x08)
	char pad_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xd0 (Inherited: 0xa0)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector InitialTargetLocation; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool bRestrictSpeedToExpected; // 0xbc(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xc0(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0xc8(0x08)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xc0 (Inherited: 0xa0)
struct FRootMotionSource_MoveToForce : FRootMotionSource {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool bRestrictSpeedToExpected; // 0xb0(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xb8(0x08)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xe0 (Inherited: 0xa0)
struct FRootMotionSource_RadialForce : FRootMotionSource {
	struct FVector Location; // 0x98(0x0c)
	struct AActor* LocationActor; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool bIsPush; // 0xb8(0x01)
	bool bNoZForce; // 0xb9(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xc0(0x08)
	struct UCurveFloat* StrengthOverTime; // 0xc8(0x08)
	bool bUseFixedWorldDirection; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator FixedWorldDirection; // 0xd4(0x0c)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xb0 (Inherited: 0xa0)
struct FRootMotionSource_ConstantForce : FRootMotionSource {
	struct FVector Force; // 0x98(0x0c)
	struct UCurveFloat* StrengthOverTime; // 0xa8(0x08)
};

// ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x00)
struct FCameraExposureSettings {
	enum class EAutoExposureMethod Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowPercent; // 0x04(0x04)
	float HighPercent; // 0x08(0x04)
	float MinBrightness; // 0x0c(0x04)
	float MaxBrightness; // 0x10(0x04)
	float SpeedUp; // 0x14(0x04)
	float SpeedDown; // 0x18(0x04)
	float Bias; // 0x1c(0x04)
	struct UCurveFloat* BiasCurve; // 0x20(0x08)
	struct UTexture* MeterMask; // 0x28(0x08)
	float HistogramLogMin; // 0x30(0x04)
	float HistogramLogMax; // 0x34(0x04)
	float CalibrationConstant; // 0x38(0x04)
	char ApplyPhysicalCameraExposure : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.LensSettings
// Size: 0xe0 (Inherited: 0x00)
struct FLensSettings {
	struct FLensBloomSettings Bloom; // 0x00(0xb8)
	struct FLensImperfectionSettings Imperfections; // 0xb8(0x20)
	float ChromaticAberration; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x00)
struct FLensImperfectionSettings {
	struct UTexture* DirtMask; // 0x00(0x08)
	float DirtMaskIntensity; // 0x08(0x04)
	struct FLinearColor DirtMaskTint; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.LensBloomSettings
// Size: 0xb8 (Inherited: 0x00)
struct FLensBloomSettings {
	struct FGaussianSumBloomSettings GaussianSum; // 0x00(0x84)
	char pad_84[0x4]; // 0x84(0x04)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x28)
	enum class EBloomMethod Method; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 (Inherited: 0x00)
struct FConvolutionBloomSettings {
	struct UTexture2D* Texture; // 0x00(0x08)
	float Size; // 0x08(0x04)
	struct FVector2D CenterUV; // 0x0c(0x08)
	float PreFilterMin; // 0x14(0x04)
	float PreFilterMax; // 0x18(0x04)
	float PreFilterMult; // 0x1c(0x04)
	float BufferScale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 (Inherited: 0x00)
struct FGaussianSumBloomSettings {
	float Intensity; // 0x00(0x04)
	float threshold; // 0x04(0x04)
	float SizeScale; // 0x08(0x04)
	float Filter1Size; // 0x0c(0x04)
	float Filter2Size; // 0x10(0x04)
	float Filter3Size; // 0x14(0x04)
	float Filter4Size; // 0x18(0x04)
	float Filter5Size; // 0x1c(0x04)
	float Filter6Size; // 0x20(0x04)
	struct FLinearColor Filter1Tint; // 0x24(0x10)
	struct FLinearColor Filter2Tint; // 0x34(0x10)
	struct FLinearColor Filter3Tint; // 0x44(0x10)
	struct FLinearColor Filter4Tint; // 0x54(0x10)
	struct FLinearColor Filter5Tint; // 0x64(0x10)
	struct FLinearColor Filter6Tint; // 0x74(0x10)
};

// ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x00)
struct FFilmStockSettings {
	float Slope; // 0x00(0x04)
	float Toe; // 0x04(0x04)
	float Shoulder; // 0x08(0x04)
	float BlackClip; // 0x0c(0x04)
	float WhiteClip; // 0x10(0x04)
};

// ScriptStruct Engine.ColorGradingSettings
// Size: 0x150 (Inherited: 0x00)
struct FColorGradingSettings {
	struct FColorGradePerRangeSettings Global; // 0x00(0x50)
	struct FColorGradePerRangeSettings Shadows; // 0x50(0x50)
	struct FColorGradePerRangeSettings Midtones; // 0xa0(0x50)
	struct FColorGradePerRangeSettings Highlights; // 0xf0(0x50)
	float ShadowsMax; // 0x140(0x04)
	float HighlightsMin; // 0x144(0x04)
	char pad_148[0x8]; // 0x148(0x08)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x50 (Inherited: 0x00)
struct FColorGradePerRangeSettings {
	struct FVector4 Saturation; // 0x00(0x10)
	struct FVector4 Contrast; // 0x10(0x10)
	struct FVector4 Gamma; // 0x20(0x10)
	struct FVector4 Gain; // 0x30(0x10)
	struct FVector4 Offset; // 0x40(0x10)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.SimpleCurve
// Size: 0x88 (Inherited: 0x70)
struct FSimpleCurve : FRealCurve {
	enum class ERichCurveInterpMode InterpMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.SimpleCurveKey
// Size: 0x08 (Inherited: 0x00)
struct FSimpleCurveKey {
	float Time; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x00)
struct FSingleAnimationPlayData {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString ApexFileName; // 0x08(0x10)
	bool bClothPropertiesChanged; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; // 0x00(0x04)
	float HorizontalResistance; // 0x04(0x04)
	float BendResistance; // 0x08(0x04)
	float ShearResistance; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float InertiaBlend; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float FiberCompression; // 0x44(0x04)
	float FiberExpansion; // 0x48(0x04)
	float FiberResistance; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xb8 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	struct TArray<int32_t> LODMaterialMap; // 0x08(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x14)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2c(0x3c)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78(0x10)
	float WeightOfPrioritization; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UAnimSequence* BakePose; // 0x90(0x08)
	struct UAnimSequence* BakePoseOverride; // 0x98(0x08)
	struct FString SourceImportFilename; // 0xa0(0x10)
	enum class ESkinCacheUsage SkinCacheUsage; // 0xb0(0x01)
	char bHasBeenSimplified : 1; // 0xb1(0x01)
	char bHasPerLODVertexColors : 1; // 0xb1(0x01)
	char bAllowCPUAccess : 1; // 0xb1(0x01)
	char bSupportUniformlyDistributedSampling : 1; // 0xb1(0x01)
	char pad_B1_4 : 4; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3c (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	enum class SkeletalMeshTerminationCriterion TerminationCriterion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float NumOfVertPercentage; // 0x08(0x04)
	uint32_t MaxNumOfTriangles; // 0x0c(0x04)
	uint32_t MaxNumOfVerts; // 0x10(0x04)
	float MaxDeviationPercentage; // 0x14(0x04)
	enum class SkeletalMeshOptimizationType ReductionMethod; // 0x18(0x01)
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19(0x01)
	enum class SkeletalMeshOptimizationImportance TextureImportance; // 0x1a(0x01)
	enum class SkeletalMeshOptimizationImportance ShadingImportance; // 0x1b(0x01)
	enum class SkeletalMeshOptimizationImportance SkinningImportance; // 0x1c(0x01)
	char bRemapMorphTargets : 1; // 0x1d(0x01)
	char bRecalcNormals : 1; // 0x1d(0x01)
	char pad_1D_2 : 6; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float WeldingThreshold; // 0x20(0x04)
	float NormalsThreshold; // 0x24(0x04)
	int32_t MaxBonesPerVertex; // 0x28(0x04)
	char bEnforceBoneBoundaries : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float VolumeImportance; // 0x30(0x04)
	char bLockEdges : 1; // 0x34(0x01)
	char bLockColorBounaries : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t BaseLOD; // 0x38(0x04)
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 (Inherited: 0x00)
struct FSkeletalMeshClothBuildParams {
	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x00(0x08)
	int32_t TargetLod; // 0x08(0x04)
	bool bRemapParameters; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString AssetName; // 0x10(0x10)
	int32_t LODIndex; // 0x20(0x04)
	int32_t SourceSection; // 0x24(0x04)
	bool bRemoveFromMesh; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30(0x28)
};

// ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x00)
struct FBoneMirrorExport {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis BoneFlipAxis; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 (Inherited: 0x00)
struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x00(0x04)
	enum class EAxis BoneFlipAxis; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x80 (Inherited: 0x00)
struct FSkeletalMeshLODGroupSettings {
	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	float WeightOfPrioritization; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAnimSequence* BakePose; // 0x38(0x08)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x3c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.BoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FBoneFilter {
	bool bExcludeSelf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName BoneName; // 0x04(0x08)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingInfo {
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x00(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshSamplingBuiltData {
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x00(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBuiltData {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshSamplingLODBuiltData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegion {
	struct FName Name; // 0x00(0x08)
	int32_t LODIndex; // 0x08(0x04)
	char bSupportUniformlyDistributedSampling : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBoneFilter {
	struct FName BoneName; // 0x00(0x08)
	char bIncludeOrExclude : 1; // 0x08(0x01)
	char bApplyToChildren : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x08 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionMaterialFilter {
	struct FName MaterialName; // 0x00(0x08)
};

// ScriptStruct Engine.VirtualBone
// Size: 0x18 (Inherited: 0x00)
struct FVirtualBone {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName VirtualBoneName; // 0x10(0x08)
};

// ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotGroup {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRigConfiguration {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x08(0x10)
};

// ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x00)
struct FNameMapping {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x00)
struct FBoneReductionSetting {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.BoneNode
// Size: 0x10 (Inherited: 0x00)
struct FBoneNode {
	struct FName Name; // 0x00(0x08)
	int32_t ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x00)
struct FSkeletonToMeshLinkup {
	struct TArray<int32_t> SkeletonToMeshTable; // 0x00(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshComponentLODInfo {
	struct TArray<bool> HiddenMaterials; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x3c (Inherited: 0x00)
struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x00(0x30)
	char Weights[0xc]; // 0x30(0x0c)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkinWeightProfileInfo {
	struct FName Name; // 0x00(0x08)
	struct FPerPlatformBool DefaultProfile; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.TentDistribution
// Size: 0x0c (Inherited: 0x00)
struct FTentDistribution {
	float TipAltitude; // 0x00(0x04)
	float TipValue; // 0x04(0x04)
	float Width; // 0x08(0x04)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x160 (Inherited: 0xa8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	struct FGuid LightGuid; // 0xa8(0x10)
	float AverageBrightness; // 0xb8(0x04)
	char pad_BC[0xa4]; // 0xbc(0xa4)
};

// ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x00)
struct FSmartNameContainer {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x00)
struct FSmartNameMapping {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Engine.CurveMetaData
// Size: 0x20 (Inherited: 0x00)
struct FCurveMetaData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x3a0 (Inherited: 0xb0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	char bAttenuate : 1; // 0xb0(0x01)
	char bSpatialize : 1; // 0xb0(0x01)
	char bAttenuateWithLPF : 1; // 0xb0(0x01)
	char bEnableListenerFocus : 1; // 0xb0(0x01)
	char bEnableFocusInterpolation : 1; // 0xb0(0x01)
	char bEnableOcclusion : 1; // 0xb0(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xb0(0x01)
	char bEnableReverbSend : 1; // 0xb0(0x01)
	char bEnablePriorityAttenuation : 1; // 0xb1(0x01)
	char bApplyNormalizationToStereoSounds : 1; // 0xb1(0x01)
	char bEnableLogFrequencyScaling : 1; // 0xb1(0x01)
	char bEnableSubmixSends : 1; // 0xb1(0x01)
	char pad_B1_4 : 4; // 0xb1(0x01)
	enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	float BinauralRadius; // 0xb4(0x04)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0xb8(0x01)
	enum class ECollisionChannel OcclusionTraceChannel; // 0xb9(0x01)
	enum class EReverbSendMethod ReverbSendMethod; // 0xba(0x01)
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xbb(0x01)
	float OmniRadius; // 0xbc(0x04)
	float StereoSpread; // 0xc0(0x04)
	float LPFRadiusMin; // 0xc4(0x04)
	float LPFRadiusMax; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0(0x88)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158(0x88)
	float LPFFrequencyAtMin; // 0x1e0(0x04)
	float LPFFrequencyAtMax; // 0x1e4(0x04)
	float HPFFrequencyAtMin; // 0x1e8(0x04)
	float HPFFrequencyAtMax; // 0x1ec(0x04)
	float FocusAzimuth; // 0x1f0(0x04)
	float NonFocusAzimuth; // 0x1f4(0x04)
	float FocusDistanceScale; // 0x1f8(0x04)
	float NonFocusDistanceScale; // 0x1fc(0x04)
	float FocusPriorityScale; // 0x200(0x04)
	float NonFocusPriorityScale; // 0x204(0x04)
	float FocusVolumeAttenuation; // 0x208(0x04)
	float NonFocusVolumeAttenuation; // 0x20c(0x04)
	float FocusAttackInterpSpeed; // 0x210(0x04)
	float FocusReleaseInterpSpeed; // 0x214(0x04)
	float OcclusionLowPassFilterFrequency; // 0x218(0x04)
	float OcclusionVolumeAttenuation; // 0x21c(0x04)
	float OcclusionInterpolationTime; // 0x220(0x04)
	float ReverbWetLevelMin; // 0x224(0x04)
	float ReverbWetLevelMax; // 0x228(0x04)
	float ReverbDistanceMin; // 0x22c(0x04)
	float ReverbDistanceMax; // 0x230(0x04)
	float ManualReverbSendLevel; // 0x234(0x04)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x238(0x88)
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2c0(0x10)
	float PriorityAttenuationMin; // 0x2d0(0x04)
	float PriorityAttenuationMax; // 0x2d4(0x04)
	float PriorityAttenuationDistanceMin; // 0x2d8(0x04)
	float PriorityAttenuationDistanceMax; // 0x2dc(0x04)
	float ManualPriorityAttenuation; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2e8(0x88)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x370(0x30)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x30 (Inherited: 0x00)
struct FSoundAttenuationPluginSettings {
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x00(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// Size: 0xa8 (Inherited: 0x00)
struct FAttenuationSubmixSendSettings {
	struct USoundSubmix* Submix; // 0x00(0x08)
	enum class ESubmixSendMethod SubmixSendMethod; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SubmixSendLevelMin; // 0x0c(0x04)
	float SubmixSendLevelMax; // 0x10(0x04)
	float SubmixSendDistanceMin; // 0x14(0x04)
	float SubmixSendDistanceMax; // 0x18(0x04)
	float ManualSubmixSendLevel; // 0x1c(0x04)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20(0x88)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float MaxVolumeThreshold; // 0x0c(0x04)
};

// ScriptStruct Engine.SoundClassProperties
// Size: 0x58 (Inherited: 0x00)
struct FSoundClassProperties {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float LowPassFilterFrequency; // 0x08(0x04)
	float AttenuationDistanceScale; // 0x0c(0x04)
	float StereoBleed; // 0x10(0x04)
	float LFEBleed; // 0x14(0x04)
	float VoiceCenterChannelVolume; // 0x18(0x04)
	float RadioFilterVolume; // 0x1c(0x04)
	float RadioFilterVolumeThreshold; // 0x20(0x04)
	char bApplyEffects : 1; // 0x24(0x01)
	char bAlwaysPlay : 1; // 0x24(0x01)
	char bIsUISound : 1; // 0x24(0x01)
	char bIsMusic : 1; // 0x24(0x01)
	char bCenterChannelOnly : 1; // 0x24(0x01)
	char bApplyAmbientVolumes : 1; // 0x24(0x01)
	char bReverb : 1; // 0x24(0x01)
	char pad_24_7 : 1; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float Default2DReverbSendAmount; // 0x28(0x04)
	enum class EAudioOutputTarget OutputTarget; // 0x2c(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct USoundSubmix* DefaultSubmix; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
};

// ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundClassEditorData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x20 (Inherited: 0x00)
struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
	float VolumeScaleAttackTime; // 0x10(0x04)
	char bVolumeScaleCanRelease : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float VolumeScaleReleaseTime; // 0x18(0x04)
	float VoiceStealReleaseTime; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundNodeEditorData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectChainEntry {
	struct USoundEffectSourcePreset* Preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x00)
struct FSoundClassAdjuster {
	struct USoundClass* SoundClassObject; // 0x00(0x08)
	float VolumeAdjuster; // 0x08(0x04)
	float PitchAdjuster; // 0x0c(0x04)
	float LowPassFilterFrequency; // 0x10(0x04)
	char bApplyToChildren : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x40 (Inherited: 0x08)
struct FAudioEQEffect : FAudioEffectParameters {
	char pad_8[0x8]; // 0x08(0x08)
	float FrequencyCenter0; // 0x10(0x04)
	float Gain0; // 0x14(0x04)
	float Bandwidth0; // 0x18(0x04)
	float FrequencyCenter1; // 0x1c(0x04)
	float Gain1; // 0x20(0x04)
	float Bandwidth1; // 0x24(0x04)
	float FrequencyCenter2; // 0x28(0x04)
	float Gain2; // 0x2c(0x04)
	float Bandwidth2; // 0x30(0x04)
	float FrequencyCenter3; // 0x34(0x04)
	float Gain3; // 0x38(0x04)
	float Bandwidth3; // 0x3c(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x00)
struct FModulatorContinuousParams {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float MinInput; // 0x0c(0x04)
	float MaxInput; // 0x10(0x04)
	float MinOutput; // 0x14(0x04)
	float MaxOutput; // 0x18(0x04)
	enum class ModulationParamMode ParamMode; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSourceBusSendInfo {
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundSourceBus* SoundSourceBus; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	float MinSendLevel; // 0x14(0x04)
	float MaxSendLevel; // 0x18(0x04)
	float MinSendDistance; // 0x1c(0x04)
	float MaxSendDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSubmixSendInfo {
	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundSubmixBase* SoundSubmix; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	float MinSendLevel; // 0x14(0x04)
	float MaxSendLevel; // 0x18(0x04)
	float MinSendDistance; // 0x1c(0x04)
	float MaxSendDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x00(0x04)
	float TimeSec; // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x00)
struct FSoundWaveSpectralTimeData {
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x00(0x10)
	float TimeSec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x00(0x04)
	float NormalizedMagnitude; // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x00)
struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x00(0x04)
	float PlaybackTime; // 0x04(0x04)
	struct USoundWave* SoundWave; // 0x08(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x00)
struct FSoundWaveSpectralDataPerSound {
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x00(0x10)
	float PlaybackTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWave; // 0x18(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralData
// Size: 0x0c (Inherited: 0x00)
struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
	float NormalizedMagnitude; // 0x08(0x04)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedAudioPlatformData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SplineInstanceData
// Size: 0x180 (Inherited: 0xa8)
struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FSplineCurves SplineCurves; // 0xb0(0x68)
	struct FSplineCurves SplineCurvesPreUCS; // 0x118(0x68)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x68 (Inherited: 0x00)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x08)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	enum class ESplinePointType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.SplineMeshInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	struct FVector StartPos; // 0xa8(0x0c)
	struct FVector EndPos; // 0xb4(0x0c)
	struct FVector StartTangent; // 0xc0(0x0c)
	struct FVector EndTangent; // 0xcc(0x0c)
};

// ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x00)
struct FSplineMeshParams {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector2D EndScale; // 0x38(0x08)
	struct FVector EndTangent; // 0x40(0x0c)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x00)
struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> MaterialRemap; // 0x08(0x10)
};

// ScriptStruct Engine.StaticMaterial
// Size: 0x30 (Inherited: 0x00)
struct FStaticMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct FName ImportedMaterialSlotName; // 0x10(0x08)
	struct FMeshUVChannelInfo UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x00)
struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CamOrbitPoint; // 0x04(0x0c)
	struct FVector CamOrbitZoom; // 0x10(0x0c)
	struct FRotator CamOrbitRotation; // 0x1c(0x0c)
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FMeshSectionInfoMap {
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x00(0x50)
};

// ScriptStruct Engine.MeshSectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool bCastShadow; // 0x05(0x01)
	bool bForceOpaque; // 0x06(0x01)
	bool bHidden; // 0x07(0x01)
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x70 (Inherited: 0x00)
struct FStaticMeshSourceModel {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x30)
	struct FMeshReductionSettings ReductionSettings; // 0x30(0x24)
	float LODDistance; // 0x54(0x04)
	struct FPerPlatformFloat ScreenSize; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString SourceImportFilename; // 0x60(0x10)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c (Inherited: 0x00)
struct FStaticMeshOptimizationSettings {
	enum class EOptimizationType ReductionMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float MaxDeviationPercentage; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float NormalsThreshold; // 0x14(0x04)
	char SilhouetteImportance; // 0x18(0x01)
	char TextureImportance; // 0x19(0x01)
	char ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x130 (Inherited: 0xf0)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xf0(0x08)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x108(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0x0c (Inherited: 0x00)
struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x00(0x04)
	int32_t TextureLevelIndex; // 0x04(0x04)
	float TexelFactor; // 0x08(0x04)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x00)
struct FStaticMeshVertexColorLODData {
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x00(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LODIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.PaintedVertex
// Size: 0x20 (Inherited: 0x00)
struct FPaintedVertex {
	struct FVector Position; // 0x00(0x0c)
	struct FColor Color; // 0x0c(0x04)
	struct FVector4 Normal; // 0x10(0x10)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0x90 (Inherited: 0x00)
struct FStaticMeshComponentLODInfo {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.StaticParameterSet
// Size: 0x40 (Inherited: 0x00)
struct FStaticParameterSet {
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x00(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30(0x10)
};

// ScriptStruct Engine.StaticParameterBase
// Size: 0x24 (Inherited: 0x00)
struct FStaticParameterBase {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	bool bOverride; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 (Inherited: 0x24)
struct FStaticMaterialLayersParameter : FStaticParameterBase {
	char pad_24[0x4]; // 0x24(0x04)
	struct FMaterialLayersFunctions Value; // 0x28(0x40)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x2c (Inherited: 0x24)
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24(0x04)
	bool bWeightBasedBlend; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24(0x01)
	bool G; // 0x25(0x01)
	bool B; // 0x26(0x01)
	bool A; // 0x27(0x01)
};

// ScriptStruct Engine.StaticSwitchParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.EquirectProps
// Size: 0x48 (Inherited: 0x00)
struct FEquirectProps {
	struct FBox2D LeftUVRect; // 0x00(0x14)
	struct FBox2D RightUVRect; // 0x14(0x14)
	struct FVector2D LeftScale; // 0x28(0x08)
	struct FVector2D RightScale; // 0x30(0x08)
	struct FVector2D LeftBias; // 0x38(0x08)
	struct FVector2D RightBias; // 0x40(0x08)
};

// ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : FIndexedCurve {
	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x00)
struct FStringCurveKey {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x8c (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	struct FLinearColor SurfaceAlbedo; // 0x00(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x04)
	float WorldUnitScale; // 0x24(0x04)
	bool bEnableBurley; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ScatterRadius; // 0x2c(0x04)
	struct FLinearColor SubsurfaceColor; // 0x30(0x10)
	struct FLinearColor FalloffColor; // 0x40(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x50(0x10)
	float ExtinctionScale; // 0x60(0x04)
	float NormalScale; // 0x64(0x04)
	float ScatteringDistribution; // 0x68(0x04)
	float IOR; // 0x6c(0x04)
	float Roughness0; // 0x70(0x04)
	float Roughness1; // 0x74(0x04)
	float LobeMix; // 0x78(0x04)
	struct FLinearColor TransmissionTintColor; // 0x7c(0x10)
};

// ScriptStruct Engine.TextureFormatSettings
// Size: 0x02 (Inherited: 0x00)
struct FTextureFormatSettings {
	enum class TextureCompressionSettings CompressionSettings; // 0x00(0x01)
	char CompressionNoAlpha : 1; // 0x01(0x01)
	char CompressionNone : 1; // 0x01(0x01)
	char CompressionYCoCg : 1; // 0x01(0x01)
	char SRGB : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
};

// ScriptStruct Engine.TexturePlatformData
// Size: 0x30 (Inherited: 0x00)
struct FTexturePlatformData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.TextureSource
// Size: 0x30 (Inherited: 0x00)
struct FTextureSource {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x00)
struct FTextureSourceBlock {
	int32_t BlockX; // 0x00(0x04)
	int32_t BlockY; // 0x04(0x04)
	int32_t SizeX; // 0x08(0x04)
	int32_t SizeY; // 0x0c(0x04)
	int32_t NumSlices; // 0x10(0x04)
	int32_t NumMips; // 0x14(0x04)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x54 (Inherited: 0x00)
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	int32_t LODBias; // 0x0c(0x04)
	int32_t LODBias_Smaller; // 0x10(0x04)
	int32_t LODBias_Smallest; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32_t NumStreamedMips; // 0x1c(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t MinLODSize; // 0x24(0x04)
	int32_t MaxLODSize; // 0x28(0x04)
	int32_t MaxLODSize_Smaller; // 0x2c(0x04)
	int32_t MaxLODSize_Smallest; // 0x30(0x04)
	int32_t OptionalLODBias; // 0x34(0x04)
	int32_t OptionalMaxLODSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName MinMagFilter; // 0x40(0x08)
	struct FName MipFilter; // 0x48(0x08)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x50(0x01)
	bool DuplicateNonOptionalMips; // 0x51(0x01)
	bool bNeedsPrimaryStreaming; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x30 (Inherited: 0x00)
struct FStreamingRenderAssetPrimitiveInfo {
	struct UStreamableRenderAsset* RenderAsset; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float TexelFactor; // 0x24(0x04)
	uint32_t PackedRelativeBox; // 0x28(0x04)
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x00)
struct FTTTrackBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName TrackName; // 0x08(0x08)
	bool bIsExternalCurve; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.TTPropertyTrack
// Size: 0x20 (Inherited: 0x18)
struct FTTPropertyTrack : FTTTrackBase {
	struct FName PropertyName; // 0x18(0x08)
};

// ScriptStruct Engine.TTLinearColorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTLinearColorTrack : FTTPropertyTrack {
	struct UCurveLinearColor* CurveLinearColor; // 0x20(0x08)
};

// ScriptStruct Engine.TTVectorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTVectorTrack : FTTPropertyTrack {
	struct UCurveVector* CurveVector; // 0x20(0x08)
};

// ScriptStruct Engine.TTFloatTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTFloatTrack : FTTPropertyTrack {
	struct UCurveFloat* CurveFloat; // 0x20(0x08)
};

// ScriptStruct Engine.TTEventTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTEventTrack : FTTTrackBase {
	struct FName FunctionName; // 0x18(0x08)
	struct UCurveFloat* CurveKeys; // 0x20(0x08)
};

// ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x00)
struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x00(0x01)
	char pad_1[0x2f]; // 0x01(0x2f)
};

// ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x00)
struct FTimeStretchCurve {
	float SamplingRate; // 0x00(0x04)
	float CurveValueMinPrecision; // 0x04(0x04)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x08(0x10)
	float Sum_dT_i_by_C_i[0x3]; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x00)
struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x00(0x0c)
	float ALPHA; // 0x0c(0x04)
};

// ScriptStruct Engine.TouchInputControl
// Size: 0x68 (Inherited: 0x00)
struct FTouchInputControl {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D VisualSize; // 0x18(0x08)
	struct FVector2D ThumbSize; // 0x20(0x08)
	struct FVector2D InteractionSize; // 0x28(0x08)
	struct FVector2D InputScale; // 0x30(0x08)
	struct FKey MainInputKey; // 0x38(0x18)
	struct FKey AltInputKey; // 0x50(0x18)
};

// ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x00)
struct FHardwareCursorReference {
	struct FName CursorPath; // 0x00(0x08)
	struct FVector2D HotSpot; // 0x08(0x08)
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0x0c (Inherited: 0x00)
struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x00(0x04)
	int32_t TileBorderSize; // 0x04(0x04)
	bool bEnableCompressCrunch; // 0x08(0x01)
	bool bEnableCompressZlib; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x20 (Inherited: 0x00)
struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x00(0x04)
	int32_t MaxTileSize; // 0x04(0x04)
	struct TArray<enum class EPixelFormat> Formats; // 0x08(0x10)
	int32_t SizeInMegabyte; // 0x18(0x04)
	bool bAllowSizeScale; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x00)
struct FVoiceSettings {
	struct USceneComponent* ComponentToAttachTo; // 0x00(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x08(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x08)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x48 (Inherited: 0x00)
struct FStreamingLevelsToConsider {
	struct TArray<struct FLevelStreamingWrapper> StreamingLevels; // 0x00(0x10)
	char pad_10[0x38]; // 0x10(0x38)
};

// ScriptStruct Engine.LevelStreamingWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLevelStreamingWrapper {
	struct ULevelStreaming* StreamingLevel; // 0x00(0x08)
};

// ScriptStruct Engine.LevelCollection
// Size: 0x88 (Inherited: 0x00)
struct FLevelCollection {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	struct TSet<struct ULevel*> Levels; // 0x28(0x50)
	struct TArray<struct ULevel*> CachedLevels; // 0x78(0x10)
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEndPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FStartPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x00)
struct FLevelViewportInfo {
	struct FVector CamPosition; // 0x00(0x0c)
	struct FRotator CamRotation; // 0x0c(0x0c)
	float CamOrthoZoom; // 0x18(0x04)
	bool CamUpdated; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x00)
struct FWorldPSCPool {
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x00(0x50)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.PSCPool
// Size: 0x38 (Inherited: 0x00)
struct FPSCPool {
	struct TArray<struct FPSCPoolElem> FreeElements; // 0x00(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Manual; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x00)
struct FPSCPoolElem {
	struct UParticleSystemComponent* PSC; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.BroadphaseSettings
// Size: 0x40 (Inherited: 0x00)
struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	struct FBox MBPOuterBounds; // 0x20(0x1c)
	uint32_t MBPNumSubdivs; // 0x3c(0x04)
};

// ScriptStruct Engine.TileLODEntry
// Size: 0x13c (Inherited: 0x00)
struct FTileLODEntry {
	int32_t LODIndex; // 0x00(0x04)
	int32_t Distance; // 0x04(0x04)
	struct FLevelSimplificationDetails SimplificationDetails; // 0x08(0x134)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x168 (Inherited: 0x00)
struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x00(0x04)
	float OverrideDrawDistance; // 0x04(0x04)
	char bUseOverrideDrawDistance : 1; // 0x08(0x01)
	char bAllowSpecificExclusion : 1; // 0x08(0x01)
	char bSimplifyMesh : 1; // 0x08(0x01)
	char bOnlyGenerateClustersForVolumes : 1; // 0x08(0x01)
	char bReusePreviousLevelClusters : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings ProxySetting; // 0x0c(0xac)
	struct FMeshMergingSettings MergeSetting; // 0xb8(0xa4)
	float DesiredBoundRadius; // 0x15c(0x04)
	float DesiredFillingPercentage; // 0x160(0x04)
	int32_t MinNumberOfActorsToBuild; // 0x164(0x04)
};

// ScriptStruct Engine.NetViewer
// Size: 0x30 (Inherited: 0x00)
struct FNetViewer {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* InViewer; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x4c (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32_t NumIndirectLightingBounces; // 0x04(0x04)
	int32_t NumSkyLightingBounces; // 0x08(0x04)
	float IndirectLightingQuality; // 0x0c(0x04)
	float IndirectLightingSmoothness; // 0x10(0x04)
	struct FColor EnvironmentColor; // 0x14(0x04)
	float EnvironmentIntensity; // 0x18(0x04)
	float EmissiveBoost; // 0x1c(0x04)
	float DiffuseBoost; // 0x20(0x04)
	enum class EVolumeLightingMethod VolumeLightingMethod; // 0x24(0x01)
	char bUseAmbientOcclusion : 1; // 0x25(0x01)
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x25(0x01)
	char bVisualizeMaterialDiffuse : 1; // 0x25(0x01)
	char bVisualizeAmbientOcclusion : 1; // 0x25(0x01)
	char bCompressLightmaps : 1; // 0x25(0x01)
	char pad_25_5 : 3; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float VolumetricLightmapDetailCellSize; // 0x28(0x04)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c(0x04)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30(0x04)
	float VolumeLightSamplePlacementScale; // 0x34(0x04)
	float DirectIlluminationOcclusionFraction; // 0x38(0x04)
	float IndirectIlluminationOcclusionFraction; // 0x3c(0x04)
	float OcclusionExponent; // 0x40(0x04)
	float FullyOccludedSamplesFraction; // 0x44(0x04)
	float MaxOcclusionDistance; // 0x48(0x04)
};

