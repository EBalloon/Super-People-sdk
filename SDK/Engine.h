// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	ETextGender = 0
	ETextGender = 1
	ETextGender = 2
	ETextGender = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	EFormatArgumentType = 0
	EFormatArgumentType = 1
	EFormatArgumentType = 2
	EFormatArgumentType = 3
	EFormatArgumentType = 4
	EFormatArgumentType = 5
	EFormatArgumentType = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	EEndPlayReason = 0
	EEndPlayReason = 1
	EEndPlayReason = 2
	EEndPlayReason = 3
	EEndPlayReason = 4
	EEndPlayReason = 5
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics = 0
	TG_StartPhysics = 1
	TG_DuringPhysics = 2
	TG_EndPhysics = 3
	TG_PostPhysics = 4
	TG_PostUpdateWork = 5
	TG_LastDemotable = 6
	TG_NewlySpawned = 7
	TG_MAX = 8
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	EComponentCreationMethod = 0
	EComponentCreationMethod = 1
	EComponentCreationMethod = 2
	EComponentCreationMethod = 3
	EComponentCreationMethod = 4
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	ETemperatureSeverityType = 0
	ETemperatureSeverityType = 1
	ETemperatureSeverityType = 2
	ETemperatureSeverityType = 3
	ETemperatureSeverityType = 4
	ETemperatureSeverityType = 5
	ETemperatureSeverityType = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	EPlaneConstraintAxisSetting = 0
	EPlaneConstraintAxisSetting = 1
	EPlaneConstraintAxisSetting = 2
	EPlaneConstraintAxisSetting = 3
	EPlaneConstraintAxisSetting = 4
	EPlaneConstraintAxisSetting = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	EInterpToBehaviourType = 0
	EInterpToBehaviourType = 1
	EInterpToBehaviourType = 2
	EInterpToBehaviourType = 3
	EInterpToBehaviourType = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 {
	ETeleportType = 0
	ETeleportType = 1
	ETeleportType = 2
	ETeleportType = 3
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 {
	PIDT_None = 0
	PIDT_Int = 1
	PIDT_Float = 2
	PIDT_String = 3
	PIDT_Object = 4
	PIDT_Custom = 5
	PIDT_MAX = 6
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None = 0
	MOVE_Walking = 1
	MOVE_NavWalking = 2
	MOVE_Falling = 3
	MOVE_Swimming = 4
	MOVE_Flying = 5
	MOVE_Custom = 6
	MOVE_MAX = 7
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	ENetworkFailure = 0
	ENetworkFailure = 1
	ENetworkFailure = 2
	ENetworkFailure = 3
	ENetworkFailure = 4
	ENetworkFailure = 5
	ENetworkFailure = 6
	ENetworkFailure = 7
	ENetworkFailure = 8
	ENetworkFailure = 9
	ENetworkFailure = 10
	ENetworkFailure = 11
	ENetworkFailure = 12
	ENetworkFailure = 13
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	ETravelFailure = 0
	ETravelFailure = 1
	ETravelFailure = 2
	ETravelFailure = 3
	ETravelFailure = 4
	ETravelFailure = 5
	ETravelFailure = 6
	ETravelFailure = 7
	ETravelFailure = 8
	ETravelFailure = 9
	ETravelFailure = 10
	ETravelFailure = 11
	ETravelFailure = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	EScreenOrientation = 0
	EScreenOrientation = 1
	EScreenOrientation = 2
	EScreenOrientation = 3
	EScreenOrientation = 4
	EScreenOrientation = 5
	EScreenOrientation = 6
	EScreenOrientation = 7
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	EApplicationState = 0
	EApplicationState = 1
	EApplicationState = 2
	EApplicationState = 3
	EApplicationState = 4
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1 = 0
	ObjectTypeQuery2 = 1
	ObjectTypeQuery3 = 2
	ObjectTypeQuery4 = 3
	ObjectTypeQuery5 = 4
	ObjectTypeQuery6 = 5
	ObjectTypeQuery7 = 6
	ObjectTypeQuery8 = 7
	ObjectTypeQuery9 = 8
	ObjectTypeQuery10 = 9
	ObjectTypeQuery11 = 10
	ObjectTypeQuery12 = 11
	ObjectTypeQuery13 = 12
	ObjectTypeQuery14 = 13
	ObjectTypeQuery15 = 14
	ObjectTypeQuery16 = 15
	ObjectTypeQuery17 = 16
	ObjectTypeQuery18 = 17
	ObjectTypeQuery19 = 18
	ObjectTypeQuery20 = 19
	ObjectTypeQuery21 = 20
	ObjectTypeQuery22 = 21
	ObjectTypeQuery23 = 22
	ObjectTypeQuery24 = 23
	ObjectTypeQuery25 = 24
	ObjectTypeQuery26 = 25
	ObjectTypeQuery27 = 26
	ObjectTypeQuery28 = 27
	ObjectTypeQuery29 = 28
	ObjectTypeQuery30 = 29
	ObjectTypeQuery31 = 30
	ObjectTypeQuery32 = 31
	ObjectTypeQuery_MAX = 32
	EObjectTypeQuery_MAX = 33
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	EDrawDebugTrace = 0
	EDrawDebugTrace = 1
	EDrawDebugTrace = 2
	EDrawDebugTrace = 3
	EDrawDebugTrace = 4
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1 = 0
	TraceTypeQuery2 = 1
	TraceTypeQuery3 = 2
	TraceTypeQuery4 = 3
	TraceTypeQuery5 = 4
	TraceTypeQuery6 = 5
	TraceTypeQuery7 = 6
	TraceTypeQuery8 = 7
	TraceTypeQuery9 = 8
	TraceTypeQuery10 = 9
	TraceTypeQuery11 = 10
	TraceTypeQuery12 = 11
	TraceTypeQuery13 = 12
	TraceTypeQuery14 = 13
	TraceTypeQuery15 = 14
	TraceTypeQuery16 = 15
	TraceTypeQuery17 = 16
	TraceTypeQuery18 = 17
	TraceTypeQuery19 = 18
	TraceTypeQuery20 = 19
	TraceTypeQuery21 = 20
	TraceTypeQuery22 = 21
	TraceTypeQuery23 = 22
	TraceTypeQuery24 = 23
	TraceTypeQuery25 = 24
	TraceTypeQuery26 = 25
	TraceTypeQuery27 = 26
	TraceTypeQuery28 = 27
	TraceTypeQuery29 = 28
	TraceTypeQuery30 = 29
	TraceTypeQuery31 = 30
	TraceTypeQuery32 = 31
	TraceTypeQuery_MAX = 32
	ETraceTypeQuery_MAX = 33
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	EMoveComponentAction = 0
	EMoveComponentAction = 1
	EMoveComponentAction = 2
	EMoveComponentAction = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	EQuitPreference = 0
	EQuitPreference = 1
	EQuitPreference = 2
};

// Enum Engine.EMKReplaySampling
enum class EMKReplaySampling : uint8 {
	EMKReplaySampling = 0
	EMKReplaySampling = 1
	EMKReplaySampling = 2
	EMKReplaySampling = 3
	EMKReplaySampling = 4
	EMKReplaySampling = 5
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None = 0
	ROLE_SimulatedProxy = 1
	ROLE_AutonomousProxy = 2
	ROLE_Authority = 3
	ROLE_MAX = 4
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	EAttachLocation = 0
	EAttachLocation = 1
	EAttachLocation = 2
	EAttachLocation = 3
	EAttachLocation = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	EAttachmentRule = 0
	EAttachmentRule = 1
	EAttachmentRule = 2
	EAttachmentRule = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	EDetachmentRule = 0
	EDetachmentRule = 1
	EDetachmentRule = 2
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never = 0
	DORM_Awake = 1
	DORM_DormantAll = 2
	DORM_DormantPartial = 3
	DORM_Initial = 4
	DORM_MAX = 5
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	EAutoReceiveInput = 0
	EAutoReceiveInput = 1
	EAutoReceiveInput = 2
	EAutoReceiveInput = 3
	EAutoReceiveInput = 4
	EAutoReceiveInput = 5
	EAutoReceiveInput = 6
	EAutoReceiveInput = 7
	EAutoReceiveInput = 8
	EAutoReceiveInput = 9
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	ESpawnActorCollisionHandlingMethod = 0
	ESpawnActorCollisionHandlingMethod = 1
	ESpawnActorCollisionHandlingMethod = 2
	ESpawnActorCollisionHandlingMethod = 3
	ESpawnActorCollisionHandlingMethod = 4
	ESpawnActorCollisionHandlingMethod = 5
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	EVectorQuantization = 0
	EVectorQuantization = 1
	EVectorQuantization = 2
	EVectorQuantization = 3
	EVectorQuantization = 4
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	EActorUpdateOverlapsMethod = 0
	EActorUpdateOverlapsMethod = 1
	EActorUpdateOverlapsMethod = 2
	EActorUpdateOverlapsMethod = 3
	EActorUpdateOverlapsMethod = 4
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	ECameraAnimPlaySpace = 0
	ECameraAnimPlaySpace = 1
	ECameraAnimPlaySpace = 2
	ECameraAnimPlaySpace = 3
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 {
	VTBlend_Linear = 0
	VTBlend_Cubic = 1
	VTBlend_EaseIn = 2
	VTBlend_EaseOut = 3
	VTBlend_EaseInOut = 4
	VTBlend_MAX = 5
};

// Enum Engine.ETravelType
enum class ETravelType : uint8 {
	T = 0
	T = 1
	T = 2
	T = 3
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic = 0
	ECC_WorldDynamic = 1
	ECC_Pawn = 2
	ECC_Visibility = 3
	ECC_Camera = 4
	ECC_PhysicsBody = 5
	ECC_Vehicle = 6
	ECC_Destructible = 7
	ECC_EngineTraceChannel1 = 8
	ECC_EngineTraceChannel2 = 9
	ECC_EngineTraceChannel3 = 10
	ECC_EngineTraceChannel4 = 11
	ECC_EngineTraceChannel5 = 12
	ECC_EngineTraceChannel6 = 13
	ECC_GameTraceChannel1 = 14
	ECC_GameTraceChannel2 = 15
	ECC_GameTraceChannel3 = 16
	ECC_GameTraceChannel4 = 17
	ECC_GameTraceChannel5 = 18
	ECC_GameTraceChannel6 = 19
	ECC_GameTraceChannel7 = 20
	ECC_GameTraceChannel8 = 21
	ECC_GameTraceChannel9 = 22
	ECC_GameTraceChannel10 = 23
	ECC_GameTraceChannel11 = 24
	ECC_GameTraceChannel12 = 25
	ECC_GameTraceChannel13 = 26
	ECC_GameTraceChannel14 = 27
	ECC_GameTraceChannel15 = 28
	ECC_GameTraceChannel16 = 29
	ECC_GameTraceChannel17 = 30
	ECC_GameTraceChannel18 = 31
	ECC_OverlapAll_Deprecated = 32
	ECC_MAX = 33
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 {
	EControllerAnalogStick = 0
	EControllerAnalogStick = 1
	EControllerAnalogStick = 2
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	EDynamicForceFeedbackAction = 0
	EDynamicForceFeedbackAction = 1
	EDynamicForceFeedbackAction = 2
	EDynamicForceFeedbackAction = 3
};

// Enum Engine.ECameraType
enum class ECameraType : uint8 {
	ECameraType = 0
	ECameraType = 1
	ECameraType = 2
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.EFractureSoundType
enum class EFractureSoundType : uint8 {
	EFractureSoundType = 0
	EFractureSoundType = 1
	EFractureSoundType = 2
	EFractureSoundType = 3
	EFractureSoundType = 4
	EFractureSoundType = 5
	EFractureSoundType = 6
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	EMouseLockMode = 0
	EMouseLockMode = 1
	EMouseLockMode = 2
	EMouseLockMode = 3
	EMouseLockMode = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	EWindowTitleBarMode = 0
	EWindowTitleBarMode = 1
	EWindowTitleBarMode = 2
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest = 0
	TF_Bilinear = 1
	TF_Trilinear = 2
	TF_Default = 3
	TF_MAX = 4
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed = 0
	IE_Released = 1
	IE_Repeat = 2
	IE_DoubleClick = 3
	IE_Axis = 4
	IE_MAX = 5
};

// Enum Engine.E
enum class E : uint8 {
	RTS_World = 0
	RTS_Actor = 1
	RTS_Component = 2
	RTS_ParentBoneSpace = 3
	RTS_MAX = 4
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	EComponentMobility = 0
	EComponentMobility = 1
	EComponentMobility = 2
	EComponentMobility = 3
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8 {
	DM_Low = 0
	DM_Medium = 1
	DM_High = 2
	DM_MAX = 3
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	EAutoPossessA = 0
	EAutoPossessA = 1
	EAutoPossessA = 2
	EAutoPossessA = 3
	EAutoPossessA = 4
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength = 0
	TL_LastKeyFrame = 1
	TL_MAX = 2
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	ENetworkSmoothingMode = 0
	ENetworkSmoothingMode = 1
	ENetworkSmoothingMode = 2
	ENetworkSmoothingMode = 3
	ENetworkSmoothingMode = 4
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 {
	ETranslucencyType = 0
	ETranslucencyType = 1
	ETranslucencyType = 2
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.EFilmicTonemapperType
enum class EFilmicTonemapperType : uint8 {
	EFilmicTonemapperType = 0
	EFilmicTonemapperType = 1
	EFilmicTonemapperType = 2
	EFilmicTonemapperType = 3
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram = 0
	AEM_Basic = 1
	AEM_Manual = 2
	AEM_MAX = 3
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG = 0
	BM_FFT = 1
	BM_MAX = 2
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default = 0
	SurfaceType1 = 1
	SurfaceType2 = 2
	SurfaceType3 = 3
	SurfaceType4 = 4
	SurfaceType5 = 5
	SurfaceType6 = 6
	SurfaceType7 = 7
	SurfaceType8 = 8
	SurfaceType9 = 9
	SurfaceType10 = 10
	SurfaceType11 = 11
	SurfaceType12 = 12
	SurfaceType13 = 13
	SurfaceType14 = 14
	SurfaceType15 = 15
	SurfaceType16 = 16
	SurfaceType17 = 17
	SurfaceType18 = 18
	SurfaceType19 = 19
	SurfaceType20 = 20
	SurfaceType21 = 21
	SurfaceType22 = 22
	SurfaceType23 = 23
	SurfaceType24 = 24
	SurfaceType25 = 25
	SurfaceType26 = 26
	SurfaceType27 = 27
	SurfaceType28 = 28
	SurfaceType29 = 29
	SurfaceType30 = 30
	SurfaceType31 = 31
	SurfaceType32 = 32
	SurfaceType33 = 33
	SurfaceType34 = 34
	SurfaceType35 = 35
	SurfaceType36 = 36
	SurfaceType37 = 37
	SurfaceType38 = 38
	SurfaceType39 = 39
	SurfaceType40 = 40
	SurfaceType41 = 41
	SurfaceType42 = 42
	SurfaceType43 = 43
	SurfaceType44 = 44
	SurfaceType45 = 45
	SurfaceType46 = 46
	SurfaceType47 = 47
	SurfaceType48 = 48
	SurfaceType49 = 49
	SurfaceType50 = 50
	SurfaceType51 = 51
	SurfaceType52 = 52
	SurfaceType53 = 53
	SurfaceType54 = 54
	SurfaceType55 = 55
	SurfaceType56 = 56
	SurfaceType57 = 57
	SurfaceType58 = 58
	SurfaceType59 = 59
	SurfaceType60 = 60
	SurfaceType61 = 61
	SurfaceType62 = 62
	SurfaceType_Max = 63
	EPhysicalSurface_MAX = 64
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 {
	EFastArraySerializerDeltaFlags = 0
	EFastArraySerializerDeltaFlags = 1
	EFastArraySerializerDeltaFlags = 2
	EFastArraySerializerDeltaFlags = 4
	EFastArraySerializerDeltaFlags = 5
};

// Enum Engine.E
enum class E : uint8 {
	RIF_Constant = 0
	RIF_Linear = 1
	RIF_MAX = 2
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque = 0
	BLEND_Masked = 1
	BLEND_Translucent = 2
	BLEND_Additive = 3
	BLEND_Modulate = 4
	BLEND_AlphaComposite = 5
	BLEND_AlphaHoldout = 6
	BLEND_MAX = 7
};

// Enum Engine.E
enum class E : uint8 {
	RCCE_Cycle = 0
	RCCE_CycleWithOffset = 1
	RCCE_Oscillate = 2
	RCCE_Linear = 3
	RCCE_Constant = 4
	RCCE_None = 5
	RCCE_MAX = 6
};

// Enum Engine.E
enum class E : uint8 {
	RCTWM_WeightedNone = 0
	RCTWM_WeightedArrivt = 1
	RCTWM_WeightedLeave = 2
	RCTWM_WeightedBoth = 3
	RCTWM_MAX = 4
};

// Enum Engine.E
enum class E : uint8 {
	RCTM_Auto = 0
	RCTM_User = 1
	RCTM_Break = 2
	RCTM_None = 3
	RCTM_MAX = 4
};

// Enum Engine.E
enum class E : uint8 {
	RCIM_Linear = 0
	RCIM_Constant = 1
	RCIM_Cubic = 2
	RCIM_None = 3
	RCIM_MAX = 4
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	ECollisionEnabled = 0
	ECollisionEnabled = 1
	ECollisionEnabled = 2
	ECollisionEnabled = 3
	ECollisionEnabled = 4
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore = 0
	ECR_Overlap = 1
	ECR_Block = 2
	ECR_MAX = 3
};

// Enum Engine.EWalkableSlopeBehav
enum class EWalkableSlopeBehav : uint8 {
	WalkableSlope_Default = 0
	WalkableSlope_Increase = 1
	WalkableSlope_Decrease = 2
	WalkableSlope_Unwalkable = 3
	WalkableSlope_Max = 4
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	EDOFMode = 0
	EDOFMode = 1
	EDOFMode = 2
	EDOFMode = 3
	EDOFMode = 4
	EDOFMode = 5
	EDOFMode = 6
	EDOFMode = 7
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E_256 = 1
	E_2 = 2
	E_3 = 3
	E_5 = 4
	E_9 = 5
	E_17 = 6
	E_33 = 7
	E_65 = 8
	E_129 = 9
	E = 10
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	ESleepFamily = 0
	ESleepFamily = 1
	ESleepFamily = 2
	ESleepFamily = 3
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 {
	ECB_No = 0
	ECB_Yes = 1
	ECB_Owner = 2
	ECB_MAX = 3
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	EHasCustomNavigableGeometry = 0
	EHasCustomNavigableGeometry = 1
	EHasCustomNavigableGeometry = 2
	EHasCustomNavigableGeometry = 3
	EHasCustomNavigableGeometry = 4
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	ELightmapType = 0
	ELightmapType = 1
	ELightmapType = 2
	ELightmapType = 3
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 {
	ILCQ_Off = 0
	ILCQ_Point = 1
	ILCQ_Volume = 2
	ILCQ_MAX = 3
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 {
	SDPG_World = 0
	SDPG_Foreground = 1
	SDPG_MAX = 2
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	EAlphaBlendOption = 0
	EAlphaBlendOption = 1
	EAlphaBlendOption = 2
	EAlphaBlendOption = 3
	EAlphaBlendOption = 4
	EAlphaBlendOption = 5
	EAlphaBlendOption = 6
	EAlphaBlendOption = 7
	EAlphaBlendOption = 8
	EAlphaBlendOption = 9
	EAlphaBlendOption = 10
	EAlphaBlendOption = 11
	EAlphaBlendOption = 12
	EAlphaBlendOption = 13
	EAlphaBlendOption = 14
	EAlphaBlendOption = 15
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	EAnimGroupRole = 0
	EAnimGroupRole = 1
	EAnimGroupRole = 2
	EAnimGroupRole = 3
	EAnimGroupRole = 4
	EAnimGroupRole = 5
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
	EPreviewAnimationBlueprintApplicationMethod = 0
	EPreviewAnimationBlueprintApplicationMethod = 1
	EPreviewAnimationBlueprintApplicationMethod = 2
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp = 0
	AKF_VariableKeyLerp = 1
	AKF_PerTrackCompression = 2
	AKF_MAX = 3
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 {
	AACF_NONE = 0
	AACF_DriveMorphTarget_DEPRECATED = 1
	AACF_DriveAttribute_DEPRECATED = 2
	AACF_Editable = 4
	AACF_DriveMaterial_DEPRECATED = 8
	AACF_Metadata = 16
	AACF_DriveTrack = 32
	AACF_Disabled = 64
	AACF_MAX = 65
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None = 0
	ACF_Float96NoW = 1
	ACF_Fixed48NoW = 2
	ACF_IntervalFixed32NoW = 3
	ACF_Fixed32NoW = 4
	ACF_Float32NoW = 5
	ACF_Identity = 6
	ACF_MAX = 7
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 {
	ABPT_None = 0
	ABPT_RefPose = 1
	ABPT_AnimScaled = 2
	ABPT_AnimFrame = 3
	ABPT_MAX = 4
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
	E = 4
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	EMontagePlayReturnType = 0
	EMontagePlayReturnType = 1
	EMontagePlayReturnType = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	EDrawDebugItemType = 0
	EDrawDebugItemType = 1
	EDrawDebugItemType = 2
	EDrawDebugItemType = 3
	EDrawDebugItemType = 4
	EDrawDebugItemType = 5
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	EAnimLinkMethod = 0
	EAnimLinkMethod = 1
	EAnimLinkMethod = 2
	EAnimLinkMethod = 3
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	EMontageSubStepResult = 0
	EMontageSubStepResult = 1
	EMontageSubStepResult = 2
	EMontageSubStepResult = 3
	EMontageSubStepResult = 4
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	EAnimNotifyEventType = 0
	EAnimNotifyEventType = 1
	EAnimNotifyEventType = 2
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	EInertializationSpace = 0
	EInertializationSpace = 1
	EInertializationSpace = 2
	EInertializationSpace = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	EInertializationBoneState = 0
	EInertializationBoneState = 1
	EInertializationBoneState = 2
	EInertializationBoneState = 3
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	EInertializationState = 0
	EInertializationState = 1
	EInertializationState = 2
	EInertializationState = 3
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EEvaluatorMode = 0
	EEvaluatorMode = 1
	EEvaluatorMode = 2
	EEvaluatorMode = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EEvaluatorDataSource = 0
	EEvaluatorDataSource = 1
	EEvaluatorDataSource = 2
};

// Enum Engine.ECopyType
enum class ECopyType : uint8 {
	ECopyType = 0
	ECopyType = 1
	ECopyType = 2
	ECopyType = 3
	ECopyType = 4
	ECopyType = 5
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	EPostCopyOperation = 0
	EPostCopyOperation = 1
	EPostCopyOperation = 2
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	EPinHidingMode = 0
	EPinHidingMode = 1
	EPinHidingMode = 2
	EPinHidingMode = 3
	EPinHidingMode = 4
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	AnimPhysCollisionType = 0
	AnimPhysCollisionType = 1
	AnimPhysCollisionType = 2
	AnimPhysCollisionType = 3
	AnimPhysCollisionType = 4
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AnimPhysTwistAxis = 0
	AnimPhysTwistAxis = 1
	AnimPhysTwistAxis = 2
	AnimPhysTwistAxis = 3
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 {
	ETAA_Default = 0
	ETAA_Finished = 1
	ETAA_Looped = 2
	ETAA_MAX = 3
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 {
	ETransitionLogicType = 0
	ETransitionLogicType = 1
	ETransitionLogicType = 2
	ETransitionLogicType = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	ETransitionBlendMode = 0
	ETransitionBlendMode = 1
	ETransitionBlendMode = 2
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 {
	EComponentType = 0
	EComponentType = 1
	EComponentType = 2
	EComponentType = 3
	EComponentType = 4
	EComponentType = 5
	EComponentType = 6
	EComponentType = 7
	EComponentType = 8
	EComponentType = 9
	EComponentType = 10
	EComponentType = 11
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	EAxisOption = 0
	EAxisOption = 1
	EAxisOption = 2
	EAxisOption = 3
	EAxisOption = 4
	EAxisOption = 5
	EAxisOption = 6
	EAxisOption = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	EAnimInterpolationType = 0
	EAnimInterpolationType = 1
	EAnimInterpolationType = 2
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	ECurveBlendOption = 0
	ECurveBlendOption = 1
	ECurveBlendOption = 2
	ECurveBlendOption = 3
	ECurveBlendOption = 4
	ECurveBlendOption = 5
	ECurveBlendOption = 6
	ECurveBlendOption = 7
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None = 0
	AAT_LocalSpaceBase = 1
	AAT_RotationOffsetMeshSpace = 2
	AAT_MAX = 3
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	ENotifyFilterType = 0
	ENotifyFilterType = 1
	ENotifyFilterType = 2
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	EMontageNotifyTickType = 0
	EMontageNotifyTickType = 1
	EMontageNotifyTickType = 2
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	B = 0
	B = 1
	B = 2
	B = 3
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace = 0
	BCS_ComponentSpace = 1
	BCS_ParentBoneSpace = 2
	BCS_BoneSpace = 3
	BCS_MAX = 4
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X = 0
	BA_Y = 1
	BA_Z = 2
	BA_MAX = 3
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	EPrimaryAssetCookRule = 0
	EPrimaryAssetCookRule = 1
	EPrimaryAssetCookRule = 2
	EPrimaryAssetCookRule = 3
	EPrimaryAssetCookRule = 4
	EPrimaryAssetCookRule = 5
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8 {
	ENaturalSoundFalloffMode = 0
	ENaturalSoundFalloffMode = 1
	ENaturalSoundFalloffMode = 2
	ENaturalSoundFalloffMode = 3
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	EAttenuationShape = 0
	EAttenuationShape = 1
	EAttenuationShape = 2
	EAttenuationShape = 3
	EAttenuationShape = 4
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	EAttenuationDistanceModel = 0
	EAttenuationDistanceModel = 1
	EAttenuationDistanceModel = 2
	EAttenuationDistanceModel = 3
	EAttenuationDistanceModel = 4
	EAttenuationDistanceModel = 5
	EAttenuationDistanceModel = 6
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 {
	EAudioFaderCurve = 0
	EAudioFaderCurve = 1
	EAudioFaderCurve = 2
	EAudioFaderCurve = 3
	EAudioFaderCurve = 4
	EAudioFaderCurve = 5
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 {
	EAudioComponentPlayState = 0
	EAudioComponentPlayState = 1
	EAudioComponentPlayState = 2
	EAudioComponentPlayState = 3
	EAudioComponentPlayState = 4
	EAudioComponentPlayState = 5
	EAudioComponentPlayState = 6
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	EAudioOutputTarget = 0
	EAudioOutputTarget = 1
	EAudioOutputTarget = 2
	EAudioOutputTarget = 3
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 {
	EMonoChannelUpmixMethod = 0
	EMonoChannelUpmixMethod = 1
	EMonoChannelUpmixMethod = 2
	EMonoChannelUpmixMethod = 3
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 {
	EPanningMethod = 0
	EPanningMethod = 1
	EPanningMethod = 2
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : int32 {
	EVoiceSampleRate = 16000
	EVoiceSampleRate = 24000
	EVoiceSampleRate = 24001
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 {
	BL_AfterTonemapping = 0
	BL_BeforeTonemapping = 1
	BL_BeforeTranslucency = 2
	BL_ReplacingTonemapper = 3
	BL_SSRInput = 4
	BL_MAX = 5
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	ENotifyTriggerMode = 0
	ENotifyTriggerMode = 1
	ENotifyTriggerMode = 2
	ENotifyTriggerMode = 3
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 {
	BSA_None = 0
	BSA_X = 1
	BSA_Y = 2
	BSA_Max = 3
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	EBlueprintNativizationFlag = 0
	EBlueprintNativizationFlag = 1
	EBlueprintNativizationFlag = 2
	EBlueprintNativizationFlag = 3
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	EBlueprintCompileMode = 0
	EBlueprintCompileMode = 1
	EBlueprintCompileMode = 2
	EBlueprintCompileMode = 3
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal = 0
	BPTYPE_Const = 1
	BPTYPE_MacroLibrary = 2
	BPTYPE_Interface = 3
	BPTYPE_LevelScript = 4
	BPTYPE_FunctionLibrary = 5
	BPTYPE_MAX = 6
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown = 0
	BS_Dirty = 1
	BS_Error = 2
	BS_UpToDate = 3
	BS_BeingCreated = 4
	BS_UpToDateWithWarnings = 5
	BS_MAX = 6
};

// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8 {
	EBodyCollisionResponse = 0
	EBodyCollisionResponse = 1
	EBodyCollisionResponse = 2
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default = 0
	PhysType_Kinematic = 1
	PhysType_Simulated = 2
	PhysType_MAX = 3
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault = 0
	CTF_UseSimpleAndComplex = 1
	CTF_UseSimpleAsComplex = 2
	CTF_UseComplexAsSimple = 3
	CTF_MAX = 4
};

// Enum Engine.EBrushType
enum class EBrushType : uint8 {
	Brush_Default = 0
	Brush_Add = 1
	Brush_Subtract = 2
	Brush_MAX = 3
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8 {
	CSG_Active = 0
	CSG_Add = 1
	CSG_Subtract = 2
	CSG_Intersect = 3
	CSG_Deintersect = 4
	CSG_None = 5
	CSG_MAX = 6
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom = 0
	EOO_OffsetZero = 1
	EOO_MAX = 2
};

// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 {
	EOscillatorWaveform = 0
	EOscillatorWaveform = 1
	EOscillatorWaveform = 2
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8 {
	ECameraShakeAttenuation = 0
	ECameraShakeAttenuation = 1
	ECameraShakeAttenuation = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	ECameraAlphaBlendMode = 0
	ECameraAlphaBlendMode = 1
	ECameraAlphaBlendMode = 2
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	ECameraProjectionMode = 0
	ECameraProjectionMode = 1
	ECameraProjectionMode = 2
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 {
	CSD_KeyValueReadComplete = 0
	CSD_KeyValueWriteComplete = 1
	CSD_ValueChanged = 2
	CSD_DocumentQueryComplete = 3
	CSD_DocumentReadComplete = 4
	CSD_DocumentWriteComplete = 5
	CSD_DocumentConflictDetected = 6
	CSD_MAX = 7
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	EAngularDriveMode = 0
	EAngularDriveMode = 1
	EAngularDriveMode = 2
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8 {
	LCM_Free = 0
	LCM_Limited = 1
	LCM_Locked = 2
	LCM_MAX = 3
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8 {
	ECurveTableMode = 0
	ECurveTableMode = 1
	ECurveTableMode = 2
	ECurveTableMode = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	EEvaluateCurveTableResult = 0
	EEvaluateCurveTableResult = 1
	EEvaluateCurveTableResult = 2
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	EGrammaticalNumber = 0
	EGrammaticalNumber = 1
	EGrammaticalNumber = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	EGrammaticalGender = 0
	EGrammaticalGender = 1
	EGrammaticalGender = 2
	EGrammaticalGender = 3
	EGrammaticalGender = 4
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 {
	DPM_Normal = 0
	DPM_Abs = 1
	DPM_Direct = 2
	DPM_MAX = 3
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 {
	EDVMF_Same = 0
	EDVMF_Different = 1
	EDVMF_Mirror = 2
	EDVMF_MAX = 3
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 {
	EDVLF_None = 0
	EDVLF_XY = 1
	EDVLF_XZ = 2
	EDVLF_YZ = 3
	EDVLF_XYZ = 4
	EDVLF_MAX = 5
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	ENodeEnabledState = 0
	ENodeEnabledState = 1
	ENodeEnabledState = 2
	ENodeEnabledState = 3
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	ENodeAdvancedPins = 0
	ENodeAdvancedPins = 1
	ENodeAdvancedPins = 2
	ENodeAdvancedPins = 3
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	ENodeTitleType = 0
	ENodeTitleType = 1
	ENodeTitleType = 2
	ENodeTitleType = 3
	ENodeTitleType = 4
	ENodeTitleType = 5
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	EPinContainerType = 0
	EPinContainerType = 1
	EPinContainerType = 2
	EPinContainerType = 3
	EPinContainerType = 4
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input = 0
	EGPD_Output = 1
	EGPD_MAX = 2
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 {
	BPST_Original = 0
	BPST_VariantA = 1
	BPST_MAX = 2
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 {
	CONNECT_RESPONSE_MAKE = 0
	CONNECT_RESPONSE_DISALLOW = 1
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5
	CONNECT_RESPONSE_MAX = 6
};

// Enum Engine.EGraphType
enum class EGraphType : uint8 {
	GT_Function = 0
	GT_Ubergraph = 1
	GT_Macro = 2
	GT_Animation = 3
	GT_StateMachine = 4
	GT_MAX = 5
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	ETransitionType = 0
	ETransitionType = 1
	ETransitionType = 2
	ETransitionType = 3
	ETransitionType = 4
	ETransitionType = 5
	ETransitionType = 6
	ETransitionType = 7
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 {
	FULLYLOAD_Map = 0
	FULLYLOAD_Game_PreLoadClass = 1
	FULLYLOAD_Game_PostLoadClass = 2
	FULLYLOAD_Always = 3
	FULLYLOAD_Mutator = 4
	FULLYLOAD_MAX = 5
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 {
	VMI_BrushWireframe = 0
	VMI_Wireframe = 1
	VMI_Unlit = 2
	VMI_Lit = 3
	VMI_Lit_DetailLighting = 4
	VMI_LightingOnly = 5
	VMI_LightComplexity = 6
	VMI_ShaderComplexity = 8
	VMI_LightmapDensity = 9
	VMI_LitLightmapDensity = 10
	VMI_ReflectionOverride = 11
	VMI_VisualizeBuffer = 12
	VMI_StationaryLightOverlap = 14
	VMI_CollisionPawn = 15
	VMI_CollisionVisibility = 16
	VMI_LODColoration = 18
	VMI_QuadOverdraw = 19
	VMI_PrimitiveDistanceAccuracy = 20
	VMI_MeshUVDensityAccuracy = 21
	VMI_ShaderComplexityWithQuadOverdraw = 22
	VMI_HLODColoration = 23
	VMI_GroupLODColoration = 24
	VMI_MaterialTextureScaleAccuracy = 25
	VMI_RequiredTextureResolution = 26
	VMI_PathTracing = 27
	VMI_RayTracingDebug = 28
	VMI_Max = 29
	VMI_Unknown = 255
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 {
	EDemoPlayFailure = 0
	EDemoPlayFailure = 1
	EDemoPlayFailure = 2
	EDemoPlayFailure = 3
	EDemoPlayFailure = 4
	EDemoPlayFailure = 5
	EDemoPlayFailure = 6
	EDemoPlayFailure = 7
	EDemoPlayFailure = 8
	EDemoPlayFailure = 9
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	ENetworkLagState = 0
	ENetworkLagState = 1
	ENetworkLagState = 2
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	EMouseCaptureMode = 0
	EMouseCaptureMode = 1
	EMouseCaptureMode = 2
	EMouseCaptureMode = 3
	EMouseCaptureMode = 4
	EMouseCaptureMode = 5
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 {
	ECustomTimeStepSynchronizationState = 0
	ECustomTimeStepSynchronizationState = 1
	ECustomTimeStepSynchronizationState = 2
	ECustomTimeStepSynchronizationState = 3
	ECustomTimeStepSynchronizationState = 4
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	EMeshBufferAccess = 0
	EMeshBufferAccess = 1
	EMeshBufferAccess = 2
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 {
	EConstraintFrame = 0
	EConstraintFrame = 1
	EConstraintFrame = 2
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8 {
	ACM_Free = 0
	ACM_Limited = 1
	ACM_Locked = 2
	ACM_MAX = 3
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	EComponentSocketType = 0
	EComponentSocketType = 1
	EComponentSocketType = 2
	EComponentSocketType = 3
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8 {
	EPhysicalMaterialMaskColor = 0
	EPhysicalMaterialMaskColor = 1
	EPhysicalMaterialMaskColor = 2
	EPhysicalMaterialMaskColor = 3
	EPhysicalMaterialMaskColor = 4
	EPhysicalMaterialMaskColor = 5
	EPhysicalMaterialMaskColor = 6
	EPhysicalMaterialMaskColor = 7
	EPhysicalMaterialMaskColor = 8
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	EUpdateRateShiftBucket = 0
	EUpdateRateShiftBucket = 1
	EUpdateRateShiftBucket = 2
	EUpdateRateShiftBucket = 3
	EUpdateRateShiftBucket = 4
	EUpdateRateShiftBucket = 5
	EUpdateRateShiftBucket = 6
	EUpdateRateShiftBucket = 7
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 {
	SMF_None = 0
	SMF_Streamed = 1
	SMF_MAX = 2
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 {
	LMPT_NormalPadding = 0
	LMPT_PrePadding = 1
	LMPT_NoPadding = 2
	LMPT_MAX = 3
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 {
	ETS_EventSignature = 0
	ETS_FloatSignature = 1
	ETS_VectorSignature = 2
	ETS_LinearColorSignature = 3
	ETS_InvalidSignature = 4
	ETS_MAX = 5
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 {
	BSIT_Average = 0
	BSIT_Linear = 1
	BSIT_Cubic = 2
	BSIT_MAX = 3
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 {
	OverlapFilter_All = 0
	OverlapFilter_DynamicOnly = 1
	OverlapFilter_StaticOnly = 2
	OverlapFilter_MAX = 3
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 {
	Quality_Preview = 0
	Quality_Medium = 1
	Quality_High = 2
	Quality_Production = 3
	Quality_MAX = 4
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8 {
	MSC_Less = 0
	MSC_LessEqual = 1
	MSC_Greater = 2
	MSC_GreaterEqual = 3
	MSC_Equal = 4
	MSC_NotEqual = 5
	MSC_Never = 6
	MSC_Always = 7
	MSC_Count = 8
	MSC_MAX = 9
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color = 0
	SAMPLERTYPE_Grayscale = 1
	SAMPLERTYPE_Alpha = 2
	SAMPLERTYPE_Normal = 3
	SAMPLERTYPE_Masks = 4
	SAMPLERTYPE_DistanceFieldFont = 5
	SAMPLERTYPE_LinearColor = 6
	SAMPLERTYPE_LinearGrayscale = 7
	SAMPLERTYPE_Data = 8
	SAMPLERTYPE_External = 9
	SAMPLERTYPE_VirtualColor = 10
	SAMPLERTYPE_VirtualGrayscale = 11
	SAMPLERTYPE_VirtualAlpha = 12
	SAMPLERTYPE_VirtualNormal = 13
	SAMPLERTYPE_VirtualMasks = 14
	SAMPLERTYPE_VirtualLinearColor = 15
	SAMPLERTYPE_VirtualLinearGrayscale = 16
	SAMPLERTYPE_MAX = 17
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8 {
	MTM_NoTessellation = 0
	MTM_FlatTessellation = 1
	MTM_PNTriangles = 2
	MTM_MAX = 3
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit = 0
	MSM_DefaultLit = 1
	MSM_Subsurface = 2
	MSM_PreintegratedSkin = 3
	MSM_ClearCoat = 4
	MSM_SubsurfaceProfile = 5
	MSM_TwoSidedFoliage = 6
	MSM_Hair = 7
	MSM_Cloth = 8
	MSM_Eye = 9
	MSM_SingleLayerWater = 10
	MSM_ThinTranslucent = 11
	MSM_Bark = 12
	MSM_NUM = 13
	MSM_FromMaterialExpression = 14
	MSM_MAX = 15
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	EParticleCollisionMode = 0
	EParticleCollisionMode = 1
	EParticleCollisionMode = 2
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 {
	ETrailWidthMode_FromCentre = 0
	ETrailWidthMode_FromFirst = 1
	ETrailWidthMode_FromSecond = 2
	ETrailWidthMode_MAX = 3
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	EGBufferFormat = 0
	EGBufferFormat = 1
	EGBufferFormat = 3
	EGBufferFormat = 5
	EGBufferFormat = 6
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 {
	SCCM_Overwrite = 0
	SCCM_Additive = 1
	SCCM_Composite = 2
	SCCM_MAX = 3
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR = 0
	SCS_SceneColorHDRNoAlpha = 1
	SCS_FinalColorLDR = 2
	SCS_SceneColorSceneDepth = 3
	SCS_SceneDepth = 4
	SCS_DeviceDepth = 5
	SCS_Normal = 6
	SCS_BaseColor = 7
	SCS_FinalColorHDR = 8
	SCS_FinalToneCurveHDR = 9
	SCS_MAX = 10
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	ETranslucentSortPolicy = 0
	ETranslucentSortPolicy = 1
	ETranslucentSortPolicy = 2
	ETranslucentSortPolicy = 3
};

// Enum Engine.E
enum class E : uint8 {
	RM_IndexOfRefraction = 0
	RM_PixelNormalOffset = 1
	RM_MAX = 2
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional = 0
	TLM_VolumetricDirectional = 1
	TLM_VolumetricPerVertexNonDirectional = 2
	TLM_VolumetricPerVertexDirectional = 3
	TLM_Surface = 4
	TLM_SurfacePerPixelLighting = 5
	TLM_MAX = 6
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 {
	SSM_FromTextureAsset = 0
	SSM_Wrap_WorldGroupSettings = 1
	SSM_Clamp_WorldGroupSettings = 2
	SSM_MAX = 3
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 {
	OCM_Minimum = 0
	OCM_Multiply = 1
	OCM_MAX = 2
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV = 0
	AspectRatio_MaintainXFOV = 1
	AspectRatio_MajorAxisFOV = 2
	AspectRatio_MAX = 3
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	EFontCacheType = 0
	EFontCacheType = 1
	EFontCacheType = 2
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 {
	FontICS_Default = 0
	FontICS_Ansi = 1
	FontICS_Symbol = 2
	FontICS_MAX = 3
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8 {
	STDBY_Rx = 0
	STDBY_Tx = 1
	STDBY_BadPing = 2
	STDBY_MAX = 3
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	ESuggestProjVelocityTraceOption = 0
	ESuggestProjVelocityTraceOption = 1
	ESuggestProjVelocityTraceOption = 2
	ESuggestProjVelocityTraceOption = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	EWindowMode = 0
	EWindowMode = 1
	EWindowMode = 2
	EWindowMode = 3
};

// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8 {
	HPP_World = 0
	HPP_Wireframe = 1
	HPP_Foreground = 2
	HPP_UI = 3
	HPP_MAX = 4
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 {
	EImportanceWeight = 0
	EImportanceWeight = 1
	EImportanceWeight = 2
	EImportanceWeight = 3
	EImportanceWeight = 4
	EImportanceWeight = 5
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner = 0
	AMD_UserClosedAd = 1
	AMD_MAX = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	EAnimAlphaInputType = 0
	EAnimAlphaInputType = 1
	EAnimAlphaInputType = 2
	EAnimAlphaInputType = 3
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8 {
	ETAC_Always = 0
	ETAC_GoreEnabled = 1
	ETAC_GoreDisabled = 2
	ETAC_MAX = 3
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8 {
	IMR_Keyframed = 0
	IMR_LookAtGroup = 1
	IMR_Ignore = 2
	IMR_MAX = 3
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8 {
	AXIS_TranslationX = 0
	AXIS_TranslationY = 1
	AXIS_TranslationZ = 2
	AXIS_RotationX = 3
	AXIS_RotationY = 4
	AXIS_RotationZ = 5
	AXIS_MAX = 6
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8 {
	ETTA_Off = 0
	ETTA_On = 1
	ETTA_Toggle = 2
	ETTA_Trigger = 3
	ETTA_MAX = 4
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8 {
	EVTC_Always = 0
	EVTC_GoreEnabled = 1
	EVTC_GoreDisabled = 2
	EVTC_MAX = 3
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8 {
	EVTA_Hide = 0
	EVTA_Show = 1
	EVTA_Toggle = 2
	EVTA_MAX = 3
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 {
	ESlateGesture = 0
	ESlateGesture = 1
	ESlateGesture = 2
	ESlateGesture = 3
	ESlateGesture = 4
	ESlateGesture = 5
	ESlateGesture = 6
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 {
	EMatrixColumns = 0
	EMatrixColumns = 1
	EMatrixColumns = 2
	EMatrixColumns = 3
	EMatrixColumns = 4
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	ELerpInterpolationMode = 0
	ELerpInterpolationMode = 1
	ELerpInterpolationMode = 2
	ELerpInterpolationMode = 3
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	EEasingFunc = 0
	EEasingFunc = 1
	EEasingFunc = 2
	EEasingFunc = 3
	EEasingFunc = 4
	EEasingFunc = 5
	EEasingFunc = 6
	EEasingFunc = 7
	EEasingFunc = 8
	EEasingFunc = 9
	EEasingFunc = 10
	EEasingFunc = 11
	EEasingFunc = 12
	EEasingFunc = 13
	EEasingFunc = 14
};

// Enum Engine.E
enum class E : uint8 {
	HalfToEven = 0
	HalfFromZero = 1
	HalfToZero = 2
	FromZero = 3
	ToZero = 4
	ToNegativeInfinity = 5
	ToPositiveInfinity = 6
	E = 7
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 {
	SVB_Loading = 0
	SVB_LoadingAndVisibility = 1
	SVB_VisibilityBlockingOnLoad = 2
	SVB_BlockingOnLoad = 3
	SVB_LoadingNotVisible = 4
	SVB_MAX = 5
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 {
	MDR_None = 0
	MDR_ColorNormalRoughness = 1
	MDR_Color = 2
	MDR_ColorNormal = 3
	MDR_ColorRoughness = 4
	MDR_Normal = 5
	MDR_NormalRoughness = 6
	MDR_Roughness = 7
	MDR_MAX = 8
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 {
	DBM_Translucent = 0
	DBM_Stain = 1
	DBM_Normal = 2
	DBM_Emissive = 3
	DBM_DBuffer_ColorNormalRoughness = 4
	DBM_DBuffer_Color = 5
	DBM_DBuffer_ColorNormal = 6
	DBM_DBuffer_ColorRoughness = 7
	DBM_DBuffer_Normal = 8
	DBM_DBuffer_NormalRoughness = 9
	DBM_DBuffer_Roughness = 10
	DBM_DBuffer_Emissivs = 11
	DBM_DBuffer_AlphaComposite = 12
	DBM_DBuffer_Emissiv = 13
	DBM_Volumetric_DistanceFunction = 14
	DBM_AlphaComposite = 15
	DBM_AmbientOcclusion = 16
	DBM_MAX = 17
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 {
	TCC_Red = 0
	TCC_Green = 1
	TCC_Blue = 2
	TCC_Alpha = 3
	TCC_MAX = 4
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	EMaterialAttributeBlend = 0
	EMaterialAttributeBlend = 1
	EMaterialAttributeBlend = 2
	EMaterialAttributeBlend = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 {
	EChannelMaskParameterColor = 0
	EChannelMaskParameterColor = 1
	EChannelMaskParameterColor = 2
	EChannelMaskParameterColor = 3
	EChannelMaskParameterColor = 4
};

// Enum Engine.EClampMode
enum class EClampMode : uint8 {
	CMODE_Clamp = 0
	CMODE_ClampMin = 1
	CMODE_ClampMax = 2
	CMODE_MAX = 3
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 {
	CMOT_Float1 = 0
	CMOT_Float2 = 1
	CMOT_Float3 = 2
	CMOT_Float4 = 3
	CMOT_MAX = 4
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 {
	TDOF_NearAndFarMask = 0
	TDOF_NearMask = 1
	TDOF_FarMask = 2
	TDOF_CircleOfConfusionRadius = 3
	TDOF_MAX = 4
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 {
	FunctionInput_Scalar = 0
	FunctionInput_Vector2 = 1
	FunctionInput_Vector3 = 2
	FunctionInput_Vector4 = 3
	FunctionInput_Texture2D = 4
	FunctionInput_TextureCube = 5
	FunctionInput_Texture2DArray = 6
	FunctionInput_VolumeTexture = 7
	FunctionInput_StaticBool = 8
	FunctionInput_MaterialAttributes = 9
	FunctionInput_TextureExternal = 10
	FunctionInput_MAX = 11
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex = 0
	NOISEFUNCTION_GradientTex = 1
	NOISEFUNCTION_GradientTex3D = 2
	NOISEFUNCTION_GradientALU = 3
	NOISEFUNCTION_ValueALU = 4
	NOISEFUNCTION_VoronoiALU = 5
	NOISEFUNCTION_MAX = 6
};

// Enum Engine.E
enum class E : uint8 {
	RVTMVM_None = 0
	RVTMVM_MipLevel = 1
	RVTMVM_MipBias = 2
	RVTMVM_MAX = 3
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	EMaterialSceneAttributeInputMode = 0
	EMaterialSceneAttributeInputMode = 1
	EMaterialSceneAttributeInputMode = 2
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 {
	STLOD_Pop = 0
	STLOD_Smooth = 1
	STLOD_MAX = 2
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 {
	STW_None = 0
	STW_Fastest = 1
	STW_Fast = 2
	STW_Better = 3
	STW_Best = 4
	STW_Palm = 5
	STW_BestPlus = 6
	STW_MAX = 7
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 {
	STG_Branch = 0
	STG_Frond = 1
	STG_Leaf = 2
	STG_FacingLeaf = 3
	STG_Billboard = 4
	STG_MAX = 5
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize = 0
	TMTM_TexelSize = 1
	TMTM_MAX = 2
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 {
	TMVM_None = 0
	TMVM_MipLevel = 1
	TMVM_MipBias = 2
	TMVM_Derivative = 3
	TMVM_MAX = 4
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	T = 0
	T = 1
	T = 2
	T = 3
	T = 4
	T = 5
	T = 6
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	T = 0
	T = 1
	T = 2
	T = 3
	T = 4
	T = 5
	T = 6
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	T = 0
	T = 1
	T = 2
	T = 3
	T = 4
	T = 5
	T = 6
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 {
	VNF_CellnoiseALU = 0
	VNF_VectorALU = 1
	VNF_GradientALU = 2
	VNF_CurlALU = 3
	VNF_VoronoiALU = 4
	VNF_MAX = 5
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize = 0
	MEVP_FieldOfView = 1
	MEVP_TanHalfFieldOfView = 2
	MEVP_ViewSize = 3
	MEVP_WorldSpaceViewPosition = 4
	MEVP_WorldSpaceCameraPosition = 5
	MEVP_ViewportOffset = 6
	MEVP_TemporalSampleCount = 7
	MEVP_TemporalSampleIndex = 8
	MEVP_TemporalSampleOffset = 9
	MEVP_RuntimeVirtualTextureOutputLevel = 10
	MEVP_RuntimeVirtualTextureOutputDerivative = 11
	MEVP_PreExposure = 12
	MEVP_MAX = 13
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 {
	WPT_Default = 0
	WPT_ExcludeAllShaderOffsets = 1
	WPT_CameraRelative = 2
	WPT_CameraRelativeNoOffsets = 3
	WPT_MAX = 4
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 {
	EMaterialFunctionUsage = 0
	EMaterialFunctionUsage = 1
	EMaterialFunctionUsage = 2
	EMaterialFunctionUsage = 3
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 {
	MATUSAGE_SkeletalMesh = 0
	MATUSAGE_ParticleSprites = 1
	MATUSAGE_BeamTrails = 2
	MATUSAGE_MeshParticles = 3
	MATUSAGE_StaticLighting = 4
	MATUSAGE_MorphTargets = 5
	MATUSAGE_SplineMesh = 6
	MATUSAGE_InstancedStaticMeshes = 7
	MATUSAGE_GeometryCollections = 8
	MATUSAGE_Clothing = 9
	MATUSAGE_NiagaraSprites = 10
	MATUSAGE_NiagaraRibbons = 11
	MATUSAGE_NiagaraMeshParticles = 12
	MATUSAGE_GeometryCache = 13
	MATUSAGE_Water = 14
	MATUSAGE_HairStrands = 15
	MATUSAGE_LidarPointCloud = 16
	MATUSAGE_MAX = 17
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 {
	LayerParameter = 0
	BlendParameter = 1
	GlobalParameter = 2
	EMaterialParameterAssociation_MAX = 3
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default = 0
	MaterialMergeType_Simplygon = 1
	MaterialMergeType_MAX = 2
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize = 0
	TextureSizingType_UseAutomaticBiasedSizes = 1
	TextureSizingType_UseManualOverrideTextureSize = 2
	TextureSizingType_UseSimplygonAutomaticSizing = 3
	TextureSizingType_MAX = 4
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor = 0
	PPI_SceneDepth = 1
	PPI_DiffuseColor = 2
	PPI_SpecularColor = 3
	PPI_SubsurfaceColor = 4
	PPI_BaseColor = 5
	PPI_Specular = 6
	PPI_Metallic = 7
	PPI_WorldNormal = 8
	PPI_SeparateTranslucency = 9
	PPI_Opacity = 10
	PPI_Roughness = 11
	PPI_MaterialAO = 12
	PPI_CustomDepth = 13
	PPI_PostProcessInput0 = 14
	PPI_PostProcessInput1 = 15
	PPI_PostProcessInput2 = 16
	PPI_PostProcessInput3 = 17
	PPI_PostProcessInput4 = 18
	PPI_PostProcessInput5 = 19
	PPI_PostProcessInput6 = 20
	PPI_DecalMask = 21
	PPI_ShadingModelColor = 22
	PPI_ShadingModelID = 23
	PPI_AmbientOcclusion = 24
	PPI_CustomStencil = 25
	PPI_StoredBaseColor = 26
	PPI_StoredSpecular = 27
	PPI_Velocity = 28
	PPI_WorldTangent = 29
	PPI_Anisotropy = 30
	PPI_MAX = 31
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface = 0
	MD_DeferredDecal = 1
	MD_LightFunction = 2
	MD_Volume = 3
	MD_PostProcess = 4
	MD_UI = 5
	MD_RuntimeVirtualTexture = 6
	MD_MAX = 7
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8 {
	EMeshInstancingReplacementMethod = 0
	EMeshInstancingReplacementMethod = 1
	EMeshInstancingReplacementMethod = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	EUVOutput = 0
	EUVOutput = 1
	EUVOutput = 2
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	EMeshMergeType = 0
	EMeshMergeType = 1
	EMeshMergeType = 2
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	EMeshLODSelectionType = 0
	EMeshLODSelectionType = 1
	EMeshLODSelectionType = 2
	EMeshLODSelectionType = 3
	EMeshLODSelectionType = 4
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 {
	EProxyNormalComputationMethod = 0
	EProxyNormalComputationMethod = 1
	EProxyNormalComputationMethod = 2
	EProxyNormalComputationMethod = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	ELandscapeCullingPrecision = 0
	ELandscapeCullingPrecision = 1
	ELandscapeCullingPrecision = 2
	ELandscapeCullingPrecision = 3
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	EStaticMeshReductionTerimationCriterion = 0
	EStaticMeshReductionTerimationCriterion = 1
	EStaticMeshReductionTerimationCriterion = 2
	EStaticMeshReductionTerimationCriterion = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	EMeshFeatureImportance = 0
	EMeshFeatureImportance = 1
	EMeshFeatureImportance = 2
	EMeshFeatureImportance = 3
	EMeshFeatureImportance = 4
	EMeshFeatureImportance = 5
	EMeshFeatureImportance = 6
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	EVertexPaintAxis = 0
	EVertexPaintAxis = 1
	EVertexPaintAxis = 2
	EVertexPaintAxis = 3
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 {
	MTR_Succeeded = 0
	MTR_Failed = 1
	MTR_Canceled = 2
	MTR_RestoredFromServer = 3
	MTR_MAX = 4
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 {
	MTD_PurchaseQueryComplete = 0
	MTD_PurchaseComplete = 1
	MTD_MAX = 2
};

// Enum Engine.EKillType
enum class EKillType : uint8 {
	EKillType = 0
	EKillType = 1
	EKillType = 2
	EKillType = 3
	EKillType = 4
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
	E = 4
	E = 5
	E = 6
	E = 7
	E = 8
	E = 9
	E = 10
	E = 11
	E = 12
	E = 13
	E = 14
	E = 15
	E = 16
	E = 17
	E = 18
	E = 19
	E = 20
	E = 21
	E = 22
	E = 23
	E = 24
	E = 25
	E = 26
	E = 27
	E = 28
	E = 29
	E = 30
	E = 31
	E = 32
	E = 33
	E = 34
	E = 35
	E = 36
	E = 37
	E = 38
	E = 39
	E = 40
	E = 41
	E = 42
	E = 43
	E = 44
	E = 45
	E = 46
	E = 47
	E = 48
	E = 49
	E = 50
	E = 51
	E = 52
	E = 53
	E = 54
	E = 55
	E = 56
	E = 57
	E = 58
	E = 59
	E = 60
	E = 61
	E = 62
	E = 63
	E = 64
	E = 65
	E = 66
	E = 67
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	FNavigationSystemRunMode = 0
	FNavigationSystemRunMode = 1
	FNavigationSystemRunMode = 2
	FNavigationSystemRunMode = 3
	FNavigationSystemRunMode = 4
	FNavigationSystemRunMode = 5
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	ENavigationQueryResult = 0
	ENavigationQueryResult = 1
	ENavigationQueryResult = 2
	ENavigationQueryResult = 3
	ENavigationQueryResult = 4
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	ENavPathEvent = 0
	ENavPathEvent = 1
	ENavPathEvent = 2
	ENavPathEvent = 3
	ENavPathEvent = 4
	ENavPathEvent = 5
	ENavPathEvent = 6
	ENavPathEvent = 7
	ENavPathEvent = 8
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	ENavDataGatheringModeConfig = 0
	ENavDataGatheringModeConfig = 1
	ENavDataGatheringModeConfig = 2
	ENavDataGatheringModeConfig = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	ENavDataGatheringMode = 0
	ENavDataGatheringMode = 1
	ENavDataGatheringMode = 2
	ENavDataGatheringMode = 3
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	ENavigationOptionFlag = 0
	ENavigationOptionFlag = 1
	ENavigationOptionFlag = 2
	ENavigationOptionFlag = 3
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	ENavLinkDirection = 0
	ENavLinkDirection = 1
	ENavLinkDirection = 2
	ENavLinkDirection = 3
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
	E = 4
	E = 5
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None = 0
	PSUVIM_Linear = 1
	PSUVIM_Linear_Blend = 2
	PSUVIM_Random = 3
	PSUVIM_Random_Blend = 4
	PSUVIM_MAX = 5
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 {
	EPBM_Instant = 0
	EPBM_Interpolated = 1
	EPBM_MAX = 2
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	EParticleSystemInsignificanceReaction = 0
	EParticleSystemInsignificanceReaction = 1
	EParticleSystemInsignificanceReaction = 2
	EParticleSystemInsignificanceReaction = 3
	EParticleSystemInsignificanceReaction = 4
	EParticleSystemInsignificanceReaction = 5
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	EParticleSignificanceLevel = 0
	EParticleSignificanceLevel = 1
	EParticleSignificanceLevel = 2
	EParticleSignificanceLevel = 3
	EParticleSignificanceLevel = 4
	EParticleSignificanceLevel = 5
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8 {
	PDM_Low = 0
	PDM_Medium = 1
	PDM_High = 2
	PDM_MAX = 3
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 {
	EPSSM_Random = 0
	EPSSM_Sequential = 1
	EPSSM_MAX = 2
};

// Enum Engine.EModuleType
enum class EModuleType : uint8 {
	EPMT_General = 0
	EPMT_TypeData = 1
	EPMT_Beam = 2
	EPMT_Trail = 3
	EPMT_Spawn = 4
	EPMT_Required = 5
	EPMT_Event = 6
	EPMT_Light = 7
	EPMT_SubUV = 8
	EPMT_MAX = 9
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 {
	EAPSM_Random = 0
	EAPSM_Sequential = 1
	EAPSM_MAX = 2
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 {
	PEB2STTM_Direct = 0
	PEB2STTM_UserSet = 1
	PEB2STTM_Distribution = 2
	PEB2STTM_Emitter = 3
	PEB2STTM_MAX = 4
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 {
	PEB2STM_Default = 0
	PEB2STM_UserSet = 1
	PEB2STM_Emitter = 2
	PEB2STM_Particle = 3
	PEB2STM_Actor = 4
	PEB2STM_MAX = 5
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 {
	PEB2MT_Source = 0
	PEB2MT_Target = 1
	PEB2MT_MAX = 2
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 {
	EPCOUM_DirectSet = 0
	EPCOUM_Additive = 1
	EPCOUM_Scalar = 2
	EPCOUM_MAX = 3
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 {
	EPCC_Kill = 0
	EPCC_Freeze = 1
	EPCC_HaltCollisions = 2
	EPCC_FreezeTranslation = 3
	EPCC_FreezeRotation = 4
	EPCC_FreezeMovement = 5
	EPCC_MAX = 6
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	EParticleCollisionResponse = 0
	EParticleCollisionResponse = 1
	EParticleCollisionResponse = 2
	EParticleCollisionResponse = 3
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 {
	BONESOCKETSEL_Sequential = 0
	BONESOCKETSEL_Random = 1
	BONESOCKETSEL_MAX = 2
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 {
	BONESOCKETSOURCE_Bones = 0
	BONESOCKETSOURCE_Sockets = 1
	BONESOCKETSOURCE_MAX = 2
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 {
	ELESM_Random = 0
	ELESM_Sequential = 1
	ELESM_MAX = 2
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 {
	PMLPC_HEIGHTAXIS_X = 0
	PMLPC_HEIGHTAXIS_Y = 1
	PMLPC_HEIGHTAXIS_Z = 2
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 {
	VERTSURFACESOURCE_Vert = 0
	VERTSURFACESOURCE_Surface = 1
	VERTSURFACESOURCE_MAX = 2
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 {
	EOChainMode_Add = 0
	EOChainMode_Scale = 1
	EOChainMode_Link = 2
	EOChainMode_MAX = 3
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 {
	EPAL_NONE = 0
	EPAL_X = 1
	EPAL_Y = 2
	EPAL_Z = 3
	EPAL_NEGATIVE_X = 4
	EPAL_NEGATIVE_Y = 5
	EPAL_NEGATIVE_Z = 6
	EPAL_ROTATE_X = 7
	EPAL_ROTATE_Y = 8
	EPAL_ROTATE_Z = 9
	EPAL_MAX = 10
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 {
	EDPV_UserSet = 0
	EDPV_AutoSet = 1
	EDPV_VelocityX = 2
	EDPV_VelocityY = 3
	EDPV_VelocityZ = 4
	EDPV_VelocityMag = 5
	EDPV_MAX = 6
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 {
	ENM_CameraFacing = 0
	ENM_Spherical = 1
	ENM_Cylindrical = 2
	ENM_MAX = 3
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 {
	PSORTMODE_None = 0
	PSORTMODE_ViewProjDepth = 1
	PSORTMODE_DistanceToView = 2
	PSORTMODE_Age_OldestFirst = 3
	PSORTMODE_Age_NewestFirst = 4
	PSORTMODE_MAX = 5
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	EParticleUVFlipMode = 0
	EParticleUVFlipMode = 1
	EParticleUVFlipMode = 2
	EParticleUVFlipMode = 3
	EParticleUVFlipMode = 4
	EParticleUVFlipMode = 5
	EParticleUVFlipMode = 6
	EParticleUVFlipMode = 7
	EParticleUVFlipMode = 8
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 {
	PET2SRCM_Default = 0
	PET2SRCM_Particle = 1
	PET2SRCM_Actor = 2
	PET2SRCM_MAX = 3
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 {
	PEBTM_None = 0
	PEBTM_Full = 1
	PEBTM_Partial = 2
	PEBTM_MAX = 3
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 {
	PEB2M_Distance = 0
	PEB2M_Target = 1
	PEB2M_Branch = 2
	PEB2M_MAX = 3
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 {
	XAxisFacing_NoUp = 0
	XAxisFacing_ZUp = 1
	XAxisFacing_Negativ = 2
	XAxisFacing_YUp = 3
	XAxisFacing_Negativ = 4
	LockedAxis_ZAxisFacing = 5
	LockedAxis_NegativeZAxisFacing = 6
	LockedAxis_YAxisFacing = 7
	LockedAxis_NegativeYAxisFacing = 8
	VelocityAligned_ZAxisFacing = 9
	VelocityAligned_NegativeZAxisFacing = 10
	VelocityAligned_YAxisFacing = 11
	VelocityAligned_NegativeYAxisFacing = 12
	EMeshCameraFacingOptions_MAX = 13
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 {
	CameraFacing_NoneUP = 0
	CameraFacing_ZUp = 1
	CameraFacing_NegativeZUp = 2
	CameraFacing_YUp = 3
	CameraFacing_NegativeYUp = 4
	CameraFacing_MAX = 5
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 {
	PSMA_MeshFaceCameraWithRoll = 0
	PSMA_MeshFaceCameraWithSpin = 1
	PSMA_MeshFaceCameraWithLockedAxis = 2
	PSMA_MAX = 3
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 {
	Trails_CameraUp = 0
	Trails_SourceUp = 1
	Trails_WorldUp = 2
	Trails_MAX = 3
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 {
	PSA_FacingCameraPosition = 0
	PSA_Square = 1
	PSA_Rectangle = 2
	PSA_Velocity = 3
	PSA_AwayFromCenter = 4
	PSA_TypeSpecific = 5
	PSA_FacingCameraDistanceBlend = 6
	PSA_MAX = 7
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 {
	EPSOBM_None = 0
	EPSOBM_ParticleBounds = 1
	EPSOBM_CustomBounds = 2
	EPSOBM_MAX = 3
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 {
	PARTICLESYSTEMLODMETHOD_Automatic = 0
	PARTICLESYSTEMLODMETHOD_DirectSet = 1
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 {
	EPSUM_RealTime = 0
	EPSUM_FixedTime = 1
	EPSUM_MAX = 2
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any = 0
	EPET_Spawn = 1
	EPET_Death = 2
	EPET_Collision = 3
	EPET_Burst = 4
	EPET_Blueprint = 5
	EPET_MAX = 6
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 {
	P = 0
	P = 1
	P = 2
	P = 3
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 {
	PSPT_None = 0
	PSPT_Scalar = 1
	PSPT_ScalarRand = 2
	PSPT_Vector = 3
	PSPT_VectorRand = 4
	PSPT_Color = 5
	PSPT_Actor = 6
	PSPT_Material = 7
	PSPT_VectorUnitRand = 8
	PSPT_MAX = 9
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	ESettingsLockedAxis = 0
	ESettingsLockedAxis = 1
	ESettingsLockedAxis = 2
	ESettingsLockedAxis = 3
	ESettingsLockedAxis = 4
	ESettingsLockedAxis = 5
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	ESettingsDO = 0
	ESettingsDO = 1
	ESettingsDO = 2
	ESettingsDO = 3
	ESettingsDO = 4
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	EFrictionCombineMode = 0
	EFrictionCombineMode = 1
	EFrictionCombineMode = 2
	EFrictionCombineMode = 3
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 {
	EDefaultBackBufferPixelFormat = 0
	EDefaultBackBufferPixelFormat = 1
	EDefaultBackBufferPixelFormat = 2
	EDefaultBackBufferPixelFormat = 3
	EDefaultBackBufferPixelFormat = 4
	EDefaultBackBufferPixelFormat = 5
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	EAutoExposureMethodU = 0
	EAutoExposureMethodU = 1
	EAutoExposureMethodU = 2
	EAutoExposureMethodU = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 {
	EAlphaChannelMode = 0
	EAlphaChannelMode = 1
	EAlphaChannelMode = 2
	EAlphaChannelMode = 3
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	EEarlyZPass = 0
	EEarlyZPass = 1
	EEarlyZPass = 2
	EEarlyZPass = 3
	EEarlyZPass = 4
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	ECustomDepthStencil = 0
	ECustomDepthStencil = 1
	ECustomDepthStencil = 2
	ECustomDepthStencil = 3
	ECustomDepthStencil = 4
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	EMobileMSAASampleCount = 1
	EMobileMSAASampleCount = 2
	EMobileMSAASampleCount = 4
	EMobileMSAASampleCount = 8
	EMobileMSAASampleCount = 9
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	ECompositingSampleCount = 1
	ECompositingSampleCount = 2
	ECompositingSampleCount = 4
	ECompositingSampleCount = 8
	ECompositingSampleCount = 9
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	EClearSceneOptions = 0
	EClearSceneOptions = 1
	EClearSceneOptions = 2
	EClearSceneOptions = 3
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	ELegendPosition = 0
	ELegendPosition = 1
	ELegendPosition = 2
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	EGraphDataStyle = 0
	EGraphDataStyle = 1
	EGraphDataStyle = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	EGraphAxisStyle = 0
	EGraphAxisStyle = 1
	EGraphAxisStyle = 2
	EGraphAxisStyle = 3
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default = 0
	REVERB_Bathroom = 1
	REVERB_StoneRoom = 2
	REVERB_Auditorium = 3
	REVERB_ConcertHall = 4
	REVERB_Cave = 5
	REVERB_Hallway = 6
	REVERB_StoneCorridor = 7
	REVERB_Alley = 8
	REVERB_Forest = 9
	REVERB_City = 10
	REVERB_Mountains = 11
	REVERB_Quarry = 12
	REVERB_Plain = 13
	REVERB_ParkingLot = 14
	REVERB_SewerPipe = 15
	REVERB_Underwater = 16
	REVERB_SmallRoom = 17
	REVERB_MediumRoom = 18
	REVERB_LargeRoom = 19
	REVERB_MediumHall = 20
	REVERB_LargeHall = 21
	REVERB_Plate = 22
	REVERB_MAX = 23
};

// Enum Engine.E
enum class E : uint8 {
	RCKTCF_uint16 = 0
	RCKTCF_float32 = 1
	RCKTCF_MAX = 2
};

// Enum Engine.E
enum class E : uint8 {
	RCCF_Empty = 0
	RCCF_Constant = 1
	RCCF_Linear = 2
	RCCF_Cubic = 3
	RCCF_Mixed = 4
	RCCF_MAX = 5
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	EConstraintTransform = 0
	EConstraintTransform = 1
	EConstraintTransform = 2
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	EControlConstraint = 0
	EControlConstraint = 1
	EControlConstraint = 2
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.E
enum class E : uint8 {
	E = 1
	E = 2
	E = 4
	E = 5
};

// Enum Engine.E
enum class E : uint8 {
	E = 1
	E = 2
	E = 4
	E = 5
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
	E = 4
	E = 5
	E = 6
	E = 7
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 {
	ELightUnits = 0
	ELightUnits = 1
	ELightUnits = 2
	ELightUnits = 3
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None = 0
	AAM_FXAA = 1
	AAM_TemporalAA = 2
	AAM_MSAA = 3
	AAM_MAX = 4
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF = 0
	DOFM_Gaussian = 1
	DOFM_CircleDOF = 2
	DOFM_MAX = 3
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 {
	ESceneCapturePrimitiveRenderMode = 0
	ESceneCapturePrimitiveRenderMode = 1
	ESceneCapturePrimitiveRenderMode = 2
	ESceneCapturePrimitiveRenderMode = 3
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor = 0
	MP_Opacity = 1
	MP_OpacityMask = 2
	MP_DiffuseColor = 3
	MP_SpecularColor = 4
	MP_BaseColor = 5
	MP_Metallic = 6
	MP_Specular = 7
	MP_Roughness = 8
	MP_Anisotropy = 9
	MP_Normal = 10
	MP_Tangent = 11
	MP_WorldPositionOffset = 12
	MP_WorldDisplacement = 13
	MP_TessellationMultiplier = 14
	MP_SubsurfaceColor = 15
	MP_CustomData0 = 16
	MP_CustomData1 = 17
	MP_AmbientOcclusion = 18
	MP_Refraction = 19
	MP_CustomizedUVs0 = 20
	MP_CustomizedUVs1 = 21
	MP_CustomizedUVs2 = 22
	MP_CustomizedUVs3 = 23
	MP_CustomizedUVs4 = 24
	MP_CustomizedUVs5 = 25
	MP_CustomizedUVs6 = 26
	MP_CustomizedUVs7 = 27
	MP_PixelDepthOffset = 28
	MP_ShadingModel = 29
	MP_MaterialAttributes = 30
	MP_CustomOutput = 31
	MP_MAX = 32
};

// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8 {
	ESkinCacheDefaultBehavior = 0
	ESkinCacheDefaultBehavior = 1
	ESkinCacheDefaultBehavior = 2
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8 {
	ESkinCacheUsage = 0
	ESkinCacheUsage = 255
	ESkinCacheUsage = 1
	ESkinCacheUsage = 256
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	EPhysicsTransformUpdateMode = 0
	EPhysicsTransformUpdateMode = 1
	EPhysicsTransformUpdateMode = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	EAnimationMode = 0
	EAnimationMode = 1
	EAnimationMode = 2
	EAnimationMode = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	EKinematicBonesUpdateToPhysics = 0
	EKinematicBonesUpdateToPhysics = 1
	EKinematicBonesUpdateToPhysics = 2
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8 {
	EClothMassMode = 0
	EClothMassMode = 1
	EClothMassMode = 2
	EClothMassMode = 3
	EClothMassMode = 4
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	EAnimCurveType = 0
	EAnimCurveType = 1
	EAnimCurveType = 2
	EAnimCurveType = 3
	EAnimCurveType = 4
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8 {
	ESkeletalMeshSkinningImportVersions = 0
	ESkeletalMeshSkinningImportVersions = 1
	ESkeletalMeshSkinningImportVersions = 2
	ESkeletalMeshSkinningImportVersions = 1
	ESkeletalMeshSkinningImportVersions = 3
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8 {
	ESkeletalMeshGeoImportVersions = 0
	ESkeletalMeshGeoImportVersions = 1
	ESkeletalMeshGeoImportVersions = 2
	ESkeletalMeshGeoImportVersions = 1
	ESkeletalMeshGeoImportVersions = 3
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	EBoneFilterActionOption = 0
	EBoneFilterActionOption = 1
	EBoneFilterActionOption = 2
	EBoneFilterActionOption = 3
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off = 0
	SMOI_Lowest = 1
	SMOI_Low = 2
	SMOI_Normal = 3
	SMOI_High = 4
	SMOI_Highest = 5
	SMOI_MAX = 6
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles = 0
	SMOT_MaxDeviation = 1
	SMOT_TriangleOrDeviation = 2
	SMOT_MAX = 3
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles = 0
	SMTC_NumOfVerts = 1
	SMTC_TriangleOrVert = 2
	SMTC_AbsNumOfTriangles = 3
	SMTC_AbsNumOfVerts = 4
	SMTC_AbsTriangleOrVert = 5
	SMTC_MAX = 6
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	EBoneTranslationRetargetingMode = 0
	EBoneTranslationRetargetingMode = 1
	EBoneTranslationRetargetingMode = 2
	EBoneTranslationRetargetingMode = 3
	EBoneTranslationRetargetingMode = 4
	EBoneTranslationRetargetingMode = 5
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	EBoneSpaces = 0
	EBoneSpaces = 1
	EBoneSpaces = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 {
	EVisibilityBasedAnimTickOption = 0
	EVisibilityBasedAnimTickOption = 1
	EVisibilityBasedAnimTickOption = 2
	EVisibilityBasedAnimTickOption = 3
	EVisibilityBasedAnimTickOption = 4
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 {
	PBO_None = 0
	PBO_Term = 1
	PBO_MAX = 2
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 {
	BVS_HiddenByParent = 0
	BVS_Visible = 1
	BVS_ExplicitlyHidden = 2
	BVS_MAX = 3
};

// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8 {
	ESkyAtmosphereTransformMode = 0
	ESkyAtmosphereTransformMode = 1
	ESkyAtmosphereTransformMode = 2
	ESkyAtmosphereTransformMode = 3
};

// Enum Engine.ESpecularOcclusionMode
enum class ESpecularOcclusionMode : uint8 {
	SOM_NonDirectional = 0
	SOM_DirectionalCones = 1
	SOM_Combine = 2
	SOM_Maximum = 3
	SOM_MAX = 4
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 {
	SLS_CapturedScene = 0
	SLS_SpecifiedCubemap = 1
	SLS_MAX = 2
};

// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8 {
	EPriorityAttenuationMethod = 0
	EPriorityAttenuationMethod = 1
	EPriorityAttenuationMethod = 2
	EPriorityAttenuationMethod = 3
};

// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8 {
	ESubmixSendMethod = 0
	ESubmixSendMethod = 1
	ESubmixSendMethod = 2
	ESubmixSendMethod = 3
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	EAirAbsorptionMethod = 0
	EAirAbsorptionMethod = 1
	EAirAbsorptionMethod = 2
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 {
	SPATIALIZATION_Default = 0
	SPATIALIZATION_HRTF = 1
	SPATIALIZATION_MAX = 2
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 {
	SOUNDDISTANCE_Normal = 0
	SOUNDDISTANCE_InfiniteXYPlane = 1
	SOUNDDISTANCE_InfiniteXZPlane = 2
	SOUNDDISTANCE_InfiniteYZPlane = 3
	SOUNDDISTANCE_MAX = 4
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8 {
	EVirtualizationMode = 0
	EVirtualizationMode = 1
	EVirtualizationMode = 2
	EVirtualizationMode = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	EMaxConcurrentResolutionRule = 0
	EMaxConcurrentResolutionRule = 1
	EMaxConcurrentResolutionRule = 2
	EMaxConcurrentResolutionRule = 3
	EMaxConcurrentResolutionRule = 4
	EMaxConcurrentResolutionRule = 5
	EMaxConcurrentResolutionRule = 6
	EMaxConcurrentResolutionRule = 7
	EMaxConcurrentResolutionRule = 8
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default = 0
	SOUNDGROUP_Effects = 1
	SOUNDGROUP_UI = 2
	SOUNDGROUP_Music = 3
	SOUNDGROUP_Voice = 4
	SOUNDGROUP_GameSoundGroup1 = 5
	SOUNDGROUP_GameSoundGroup2 = 6
	SOUNDGROUP_GameSoundGroup3 = 7
	SOUNDGROUP_GameSoundGroup4 = 8
	SOUNDGROUP_GameSoundGroup5 = 9
	SOUNDGROUP_GameSoundGroup6 = 10
	SOUNDGROUP_GameSoundGroup7 = 11
	SOUNDGROUP_GameSoundGroup8 = 12
	SOUNDGROUP_GameSoundGroup9 = 13
	SOUNDGROUP_GameSoundGroup10 = 14
	SOUNDGROUP_GameSoundGroup11 = 15
	SOUNDGROUP_GameSoundGroup12 = 16
	SOUNDGROUP_GameSoundGroup13 = 17
	SOUNDGROUP_GameSoundGroup14 = 18
	SOUNDGROUP_GameSoundGroup15 = 19
	SOUNDGROUP_GameSoundGroup16 = 20
	SOUNDGROUP_GameSoundGroup17 = 21
	SOUNDGROUP_GameSoundGroup18 = 22
	SOUNDGROUP_GameSoundGroup19 = 23
	SOUNDGROUP_GameSoundGroup20 = 24
	SOUNDGROUP_MAX = 25
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 {
	MPM_Normal = 0
	MPM_Abs = 1
	MPM_Direct = 2
	MPM_MAX = 3
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 {
	ESourceBusChannels = 0
	ESourceBusChannels = 1
	ESourceBusChannels = 2
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 {
	ESourceBusSendLevelControlMethod = 0
	ESourceBusSendLevelControlMethod = 1
	ESourceBusSendLevelControlMethod = 2
	ESourceBusSendLevelControlMethod = 3
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 {
	ESendLevelControlMethod = 0
	ESendLevelControlMethod = 1
	ESendLevelControlMethod = 2
	ESendLevelControlMethod = 3
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 {
	EAudioRecordingExportType = 0
	EAudioRecordingExportType = 1
	EAudioRecordingExportType = 2
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 {
	ESoundWaveFFTSize_65 = 0
	ESoundWaveFFTSize_257 = 1
	ESoundWaveFFTSize_513 = 2
	ESoundWaveFFTSize_1025 = 3
	ESoundWaveFFTSize_2049 = 4
	ESoundWaveFFTSize = 5
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 {
	DTYPE_Setup = 0
	DTYPE_Invalid = 1
	DTYPE_Preview = 2
	DTYPE_Native = 3
	DTYPE_RealTime = 4
	DTYPE_Procedural = 5
	DTYPE_Xenon = 6
	DTYPE_Streaming = 7
	DTYPE_MAX = 8
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8 {
	ESoundWaveLoadingBehavior = 0
	ESoundWaveLoadingBehavior = 1
	ESoundWaveLoadingBehavior = 2
	ESoundWaveLoadingBehavior = 3
	ESoundWaveLoadingBehavior = 4
	ESoundWaveLoadingBehavior = 255
	ESoundWaveLoadingBehavior = 256
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	ESplineCoordinateSpace = 0
	ESplineCoordinateSpace = 1
	ESplineCoordinateSpace = 2
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	ESplinePointType = 0
	ESplinePointType = 1
	ESplinePointType = 2
	ESplinePointType = 3
	ESplinePointType = 4
	ESplinePointType = 5
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	ESplineMeshAxis = 0
	ESplineMeshAxis = 1
	ESplineMeshAxis = 2
	ESplineMeshAxis = 3
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 {
	OT_NumOfTriangles = 0
	OT_MaxDeviation = 1
	OT_MAX = 2
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 {
	IL_Off = 0
	IL_Lowest = 1
	IL_Low = 2
	IL_Normal = 3
	IL_High = 4
	IL_Highest = 5
	TEMP_BROKEN2 = 6
	EImportanceLevel_MAX = 7
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8 {
	NM_PreserveSmoothingGroups = 0
	NM_RecalculateNormals = 1
	NM_RecalculateNormalsSmooth = 2
	NM_RecalculateNormalsHard = 3
	TEMP_BROKEN = 4
	ENormalMode_MAX = 5
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 {
	SLSH_QuadLayer = 0
	SLSH_CylinderLayer = 1
	SLSH_CubemapLayer = 2
	SLSH_EquirectLayer = 3
	SLSH_MAX = 4
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked = 0
	SLT_TrackerLocked = 1
	SLT_FaceLocked = 2
	SLT_MAX = 3
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 {
	OSM_Alpha = 0
	OSM_ColorBrightness = 1
	OSM_RedChannel = 2
	OSM_GreenChannel = 3
	OSM_BlueChannel = 4
	OSM_MAX = 5
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 {
	BVC_FourVertices = 0
	BVC_EightVertices = 1
	BVC_MAX = 2
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 {
	EVRTA_TextTop = 0
	EVRTA_TextCenter = 1
	EVRTA_TextBottom = 2
	EVRTA_QuadTop = 3
	EVRTA_MAX = 4
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 {
	EHTA_Left = 0
	EHTA_Center = 1
	EHTA_Right = 2
	EHTA_MAX = 3
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8 {
	TLCA_Default = 0
	TLCA_None = 1
	TLCA_Lowest = 2
	TLCA_Low = 3
	TLCA_Medium = 4
	TLCA_High = 5
	TLCA_Highest = 6
	TLCA_MAX = 7
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 {
	TCQ_Default = 0
	TCQ_Lowest = 1
	TCQ_Low = 2
	TCQ_Medium = 3
	TCQ_High = 4
	TCQ_Highest = 5
	TCQ_MAX = 6
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 {
	TSF_Invalid = 0
	TSF_G8 = 1
	TSF_BGRA8 = 2
	TSF_BGRE8 = 3
	TSF_RGBA16 = 4
	TSF_RGBA16F = 5
	TSF_RGBA8 = 6
	TSF_RGBE8 = 7
	TSF_G16 = 8
	TSF_MAX = 9
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8 {
	TSAT_Uncompressed = 0
	TSAT_PNGCompressed = 1
	TSAT_DDSFile = 2
	TSAT_MAX = 3
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 {
	TMC_ResidentMips = 0
	TMC_AllMips = 1
	TMC_AllMipsBiased = 2
	TMC_MAX = 3
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 {
	CTM_Disabled = 0
	CTM_NormalRoughnessToRed = 1
	CTM_NormalRoughnessToGreen = 2
	CTM_NormalRoughnessToBlue = 3
	CTM_NormalRoughnessToAlpha = 4
	CTM_MAX = 5
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8 {
	TA_Wrap = 0
	TA_Clamp = 1
	TA_Mirror = 2
	TA_MAX = 3
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default = 0
	TC_Normalmap = 1
	TC_Masks = 2
	TC_Grayscale = 3
	TC_Displacementmap = 4
	TC_VectorDisplacementmap = 5
	TC_HDR = 6
	TC_EditorIcon = 7
	TC_Alpha = 8
	TC_DistanceFieldFont = 9
	TC_HDR_Compressed = 10
	TC_BC7 = 11
	TC_MAX = 12
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8 {
	ETextureMipLoadOptions = 0
	ETextureMipLoadOptions = 1
	ETextureMipLoadOptions = 2
	ETextureMipLoadOptions = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	ETextureSamplerFilter = 0
	ETextureSamplerFilter = 1
	ETextureSamplerFilter = 2
	ETextureSamplerFilter = 3
	ETextureSamplerFilter = 4
	ETextureSamplerFilter = 5
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	ETexturePowerOfTwoSetting = 0
	ETexturePowerOfTwoSetting = 1
	ETexturePowerOfTwoSetting = 2
	ETexturePowerOfTwoSetting = 3
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup = 0
	TMGS_SimpleAverage = 1
	TMGS_Sharpen0 = 2
	TMGS_Sharpen1 = 3
	TMGS_Sharpen2 = 4
	TMGS_Sharpen3 = 5
	TMGS_Sharpen4 = 6
	TMGS_Sharpen5 = 7
	TMGS_Sharpen6 = 8
	TMGS_Sharpen7 = 9
	TMGS_Sharpen8 = 10
	TMGS_Sharpen9 = 11
	TMGS_Sharpen10 = 12
	TMGS_NoMipmaps = 13
	TMGS_LeaveExistingMips = 14
	TMGS_Blur1 = 15
	TMGS_Blur2 = 16
	TMGS_Blur3 = 17
	TMGS_Blur4 = 18
	TMGS_Blur5 = 19
	TMGS_Unfiltered = 20
	TMGS_MAX = 21
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World = 0
	TEXTUREGROUP_WorldNormalMap = 1
	TEXTUREGROUP_WorldSpecular = 2
	TEXTUREGROUP_Character = 3
	TEXTUREGROUP_CharacterNormalMap = 4
	TEXTUREGROUP_CharacterSpecular = 5
	TEXTUREGROUP_Weapon = 6
	TEXTUREGROUP_WeaponNormalMap = 7
	TEXTUREGROUP_WeaponSpecular = 8
	TEXTUREGROUP_Vehicle = 9
	TEXTUREGROUP_VehicleNormalMap = 10
	TEXTUREGROUP_VehicleSpecular = 11
	TEXTUREGROUP_Cinematic = 12
	TEXTUREGROUP_Effects = 13
	TEXTUREGROUP_EffectsNotFiltered = 14
	TEXTUREGROUP_Skybox = 15
	TEXTUREGROUP_UI = 16
	TEXTUREGROUP_Lightmap = 17
	TEXTUREGROUP_RenderTarget = 18
	TEXTUREGROUP_MobileFlattened = 19
	TEXTUREGROUP_ProcBuilding_Face = 20
	TEXTUREGROUP_ProcBuilding_LightMap = 21
	TEXTUREGROUP_Shadowmap = 22
	TEXTUREGROUP_ColorLookupTable = 23
	TEXTUREGROUP_Terrain_Heightmap = 24
	TEXTUREGROUP_Terrain_Weightmap = 25
	TEXTUREGROUP_Bokeh = 26
	TEXTUREGROUP_IESLightProfile = 27
	TEXTUREGROUP_Pixels2D = 28
	TEXTUREGROUP_HierarchicalLOD = 29
	TEXTUREGROUP_Impostor = 30
	TEXTUREGROUP_ImpostorNormalDepth = 31
	TEXTUREGROUP_8BitData = 32
	TEXTUREGROUP_16BitData = 33
	TEXTUREGROUP_Project01 = 34
	TEXTUREGROUP_Project02 = 35
	TEXTUREGROUP_Project03 = 36
	TEXTUREGROUP_Project04 = 37
	TEXTUREGROUP_Project05 = 38
	TEXTUREGROUP_Project06 = 39
	TEXTUREGROUP_Project07 = 40
	TEXTUREGROUP_Project08 = 41
	TEXTUREGROUP_Project09 = 42
	TEXTUREGROUP_Project10 = 43
	TEXTUREGROUP_Project11 = 44
	TEXTUREGROUP_Project12 = 45
	TEXTUREGROUP_Project13 = 46
	TEXTUREGROUP_Project14 = 47
	TEXTUREGROUP_Project15 = 48
	TEXTUREGROUP_MAX = 49
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 {
	RTF_R8 = 0
	RTF_RG8 = 1
	RTF_RGBA8 = 2
	RTF_RGBA8_SRGB = 3
	RTF_R16f = 4
	RTF_RG16f = 5
	RTF_RGBA16f = 6
	RTF_R32f = 7
	RTF_RG32f = 8
	RTF_RGBA32f = 9
	RTF_RGB10A2 = 10
	RTF_MAX = 11
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8 {
	ETimecodeProviderSynchronizationState = 0
	ETimecodeProviderSynchronizationState = 1
	ETimecodeProviderSynchronizationState = 2
	ETimecodeProviderSynchronizationState = 3
	ETimecodeProviderSynchronizationState = 4
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	ETimelineDirection = 0
	ETimelineDirection = 1
	ETimelineDirection = 2
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	ETimeStretchCurveMapping = 0
	ETimeStretchCurveMapping = 1
	ETimeStretchCurveMapping = 2
	ETimeStretchCurveMapping = 3
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 {
	TID_AuthorizeComplete = 0
	TID_TweetUIComplete = 1
	TID_RequestComplete = 2
	TID_MAX = 3
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 {
	T = 0
	T = 1
	T = 2
	T = 3
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 {
	UDSS_UpToDate = 0
	UDSS_Dirty = 1
	UDSS_Error = 2
	UDSS_Duplicate = 3
	UDSS_MAX = 4
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	EUIScalingRule = 0
	EUIScalingRule = 1
	EUIScalingRule = 2
	EUIScalingRule = 3
	EUIScalingRule = 4
	EUIScalingRule = 5
};

// Enum Engine.E
enum class E : uint8 {
	E = 0
	E = 1
	E = 2
	E = 3
	E = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude = 0
	VFCO_Revolve = 1
	VFCO_MAX = 2
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	EWindSourceType = 0
	EWindSourceType = 1
	EWindSourceType = 2
};

// Enum Engine.ELevelScanRule
enum class ELevelScanRule : uint8 {
	ELevelScanRule = 0
	ELevelScanRule = 1
	ELevelScanRule = 2
	ELevelScanRule = 3
	ELevelScanRule = 4
	ELevelScanRule = 5
	ELevelScanRule = 6
	ELevelScanRule = 7
	ELevelScanRule = 8
	ELevelScanRule = 9
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 {
	EPSCPoolMethod = 0
	EPSCPoolMethod = 1
	EPSCPoolMethod = 2
	EPSCPoolMethod = 3
	EPSCPoolMethod = 4
	EPSCPoolMethod = 5
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 {
	VLM_VolumetricLightmap = 0
	VLM_SparseVolumeLightingSamples = 1
	VLM_MAX = 2
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 {
	VIS_LeastAggressive = 0
	VIS_ModeratelyAggressive = 1
	VIS_MostAggressive = 2
	VIS_Max = 3
};

// Class Engine.ActorComponent
struct UActorComponent : Object {
	struct Unknown PrimaryComponentTick; // 0x30 (48)
	struct TArray<Unknown> ComponentTags; // 0x60 (16)
	struct TArray<Unknown> AssetUserData; // 0x70 (16)
	int32_t UCSSerializationIndex; // 0x84 (4)
	char bNetAddressable : 0; // 0x88 (1)
	char b : 0; // 0x88 (1)
	char bAutoActivate : 0; // 0x89 (1)
	char bIsActive : 0; // 0x8A (1)
	char bEditableWhenInherited : 0; // 0x8A (1)
	char bCanEverAffectNavigation : 0; // 0x8A (1)
	char bIsEditorOnly : 0; // 0x8A (1)
	enum class Unknow CreationMethod; // 0x8C (1)
	struct FMulticastSparseDelegate OnComponentActivated; // 0x8D (1)
	struct FMulticastSparseDelegate OnComponentDeactivated; // 0x8E (1)
	struct TArray<Unknown> UCSModifiedProperties; // 0x90 (16)

	void ToggleActive(); // Function Engine.ActorComponent.ToggleActive(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338A6D0>
	void SetTickGroup(char NewTickGroup); // Function Engine.ActorComponent.SetTickGroup(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68FB0>
	void SetTickableWhenPaused(char bTickableWhenPaused); // Function Engine.ActorComponent.SetTickableWhenPaused(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C69030>
	void SetIsReplicated(char ShouldReplicate); // Function Engine.ActorComponent.SetIsReplicated(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68F20>
	void SetComponentTickInterval(float TickInterval); // Function Engine.ActorComponent.SetComponentTickInterval(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68EA0>
	void SetComponentTickEnabled(char bEnabled); // Function Engine.ActorComponent.SetComponentTickEnabled(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63CB0>
	void SetAutoActivate(char bNewAutoActivate); // Function Engine.ActorComponent.SetAutoActivate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68E10>
	void SetActive(char bNewActive, char b); // Function Engine.ActorComponent.SetActive(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68D40>
	void RemoveTickPrerequisiteComponent(struct Unknown PrerequisiteComponent); // Function Engine.ActorComponent.RemoveTickPrerequisiteComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68CB0>
	void RemoveTickPrerequisiteActor(struct Unknown PrerequisiteActor); // Function Engine.ActorComponent.RemoveTickPrerequisiteActor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68C20>
	void ReceiveTick(float DeltaSeconds); // Function Engine.ActorComponent.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveEndPlay(char EndPlayReason); // Function Engine.ActorComponent.ReceiveEndPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1BA0>
	void K2_DestroyComponent(struct Unknown Object); // Function Engine.ActorComponent.K2_DestroyComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68B20>
	char IsComponentTickEnabled(); // Function Engine.ActorComponent.IsComponentTickEnabled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68AF0>
	char IsBeingDestroyed(); // Function Engine.ActorComponent.IsBeingDestroyed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68AC0>
	char IsActive(); // Function Engine.ActorComponent.IsActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68A90>
	struct Unknown GetOwner(); // Function Engine.ActorComponent.GetOwner(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68A70>
	float GetComponentTickInterval(); // Function Engine.ActorComponent.GetComponentTickInterval(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68A40>
	void Deactivate(); // Function Engine.ActorComponent.Deactivate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1B80>
	char ComponentHasTag(struct FName Tag); // Function Engine.ActorComponent.ComponentHasTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68830>
	void AddTickPrerequisiteComponent(struct Unknown PrerequisiteComponent); // Function Engine.ActorComponent.AddTickPrerequisiteComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C686E0>
	void AddTickPrerequisiteActor(struct Unknown PrerequisiteActor); // Function Engine.ActorComponent.AddTickPrerequisiteActor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68650>
	void Activate(char b); // Function Engine.ActorComponent.Activate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338A970>
};

// Class Engine.SceneComponent
struct USceneComponent : UActorComponent {
	struct TWeakObjectPtr<struct Unknown> PhysicsVolume; // 0x144 (8)
	struct Unknown AttachParent; // 0x1D0 (8)
	struct FName AttachSocketName; // 0x1DC (8)
	struct TArray<Unknown> AttachChildren; // 0xB8 (16)
	struct TArray<Unknown> ClientAttachedChildren; // 0x190 (16)
	struct Unknown RelativeLocation; // 0x224 (12)
	struct Unknown RelativeRotation; // 0x1B4 (12)
	struct Unknown RelativeScale3D; // 0x1C4 (12)
	struct Unknown ComponentVelocity; // 0x164 (12)
	char bComponentToWorldUpdated : 0; // 0x140 (1)
	char bAbsoluteLocation : 0; // 0x220 (1)
	char bAbsoluteRotation : 0; // 0x1D8 (1)
	char bAbsoluteScale : 0; // 0x188 (1)
	char bVisible : 0; // 0xC8 (1)
	char bShouldBeAttached : 0; // 0x220 (1)
	char bShouldSnapLocationWhenAttached : 0; // 0x1B0 (1)
	char bShouldSnapRotationWhenAttached : 0; // 0x188 (1)
	char bShouldUpdatePhysicsVolume : 0; // 0x1A0 (1)
	char bHiddenInGame : 0; // 0x220 (1)
	char bBoundsChangeTriggersStreamingDataRebuild : 0; // 0xC8 (1)
	char bUseAttachParentBound : 0; // 0x1D8 (1)
	char Mobility; // 0x221 (1)
	char DetailMode; // 0x160 (1)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0xB0 (1)

	void ToggleVisibility(char bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8840>
	char SnapTo(struct Unknown InParent, struct FName InSocketName); // Function Engine.SceneComponent.SnapTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8780>
	void SetWorldScale3D(struct Unknown NewScale); // Function Engine.SceneComponent.SetWorldScale3D(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE85A0>
	void SetVisibility(char bNewVisibility, char bPropagateToChildren); // Function Engine.SceneComponent.SetVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE84D0>
	void SetShouldUpdatePhysicsVolume(char bInShouldUpdatePhysicsVolume); // Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8440>
	void SetRelativeScale3D(struct Unknown NewScale3D); // Function Engine.SceneComponent.SetRelativeScale3D(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE83B0>
	void SetMobility(char NewMobility); // Function Engine.SceneComponent.SetMobility(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8330>
	void SetHiddenInGame(char NewHidden, char bPropagateToChildren); // Function Engine.SceneComponent.SetHiddenInGame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8260>
	void SetAbsolute(char bNewAbsoluteLocation, char bNewAbsoluteRotation, char bNewAbsoluteScale); // Function Engine.SceneComponent.SetAbsolute(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE80C0>
	void ResetRelativeTransform(); // Function Engine.SceneComponent.ResetRelativeTransform(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE80A0>
	void OnRep_Visibility(char OldValue); // Function Engine.SceneComponent.OnRep_Visibility(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7EC0>
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7EA0>
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7E80>
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7E80>
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7E60>
	void K2_SetWorldTransform(struct Unknown& NewTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetWorldTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7C60>
	void K2_SetWorldRotation(struct Unknown NewRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetWorldRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7AC0>
	void K2_SetWorldLocationAndRotation(struct Unknown NewLocation, struct Unknown NewRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocationAndRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE78D0>
	void K2_SetWorldLocation(struct Unknown NewLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7730>
	void K2_SetRelativeTransform(struct Unknown& NewTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetRelativeTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7530>
	void K2_SetRelativeRotation(struct Unknown NewRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetRelativeRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7390>
	void K2_SetRelativeLocationAndRotation(struct Unknown NewLocation, struct Unknown NewRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE71A0>
	void K2_SetRelativeLocation(struct Unknown NewLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7000>
	struct Unknown K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6FA0>
	struct Unknown K2_GetComponentScale(); // Function Engine.SceneComponent.K2_GetComponentScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6F60>
	struct Unknown K2_GetComponentRotation(); // Function Engine.SceneComponent.K2_GetComponentRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6F20>
	struct Unknown K2_GetComponentLocation(); // Function Engine.SceneComponent.K2_GetComponentLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6EE0>
	void K2_DetachFromComponent(enum class Unknow LocationRule, enum class Unknow RotationRule, enum class Unknow ScaleRule, char bCallModify); // Function Engine.SceneComponent.K2_DetachFromComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6D90>
	char K2_AttachToComponent(struct Unknown Parent, struct FName SocketName, enum class Unknow LocationRule, enum class Unknow RotationRule, enum class Unknow ScaleRule, char bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachToComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6BE0>
	char K2_AttachTo(struct Unknown InParent, struct FName InSocketName, char AttachType, char bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6A90>
	void K2_AddWorldTransform(struct Unknown& DeltaTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddWorldTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6890>
	void K2_AddWorldRotation(struct Unknown DeltaRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddWorldRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE66F0>
	void K2_AddWorldOffset(struct Unknown DeltaLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddWorldOffset(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6550>
	void K2_AddRelativeRotation(struct Unknown DeltaRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddRelativeRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE63B0>
	void K2_AddRelativeLocation(struct Unknown DeltaLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddRelativeLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6210>
	void K2_AddLocalTransform(struct Unknown& DeltaTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddLocalTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE6010>
	void K2_AddLocalRotation(struct Unknown DeltaRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddLocalRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5E70>
	void K2_AddLocalOffset(struct Unknown DeltaLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.SceneComponent.K2_AddLocalOffset(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5CD0>
	char IsVisible(); // Function Engine.SceneComponent.IsVisible(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5CA0>
	char IsSimulatingPhysics(struct FName BoneName); // Function Engine.SceneComponent.IsSimulatingPhysics(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5C00>
	char IsAnySimulatingPhysics(); // Function Engine.SceneComponent.IsAnySimulatingPhysics(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5BD0>
	struct Unknown GetUpVector(); // Function Engine.SceneComponent.GetUpVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5A40>
	struct Unknown GetSocketTransform(struct FName InSocketName, char TransformSpace); // Function Engine.SceneComponent.GetSocketTransform(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5940>
	struct Unknown GetSocketRotation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketRotation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5890>
	struct Unknown GetSocketQuaternion(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketQuaternion(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE57F0>
	struct Unknown GetSocketLocation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketLocation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5740>
	char GetShouldUpdatePhysicsVolume(); // Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5710>
	struct Unknown GetRightVector(); // Function Engine.SceneComponent.GetRightVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE56D0>
	struct Unknown GetRelativeTransform(); // Function Engine.SceneComponent.GetRelativeTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5670>
	struct Unknown GetPhysicsVolume(); // Function Engine.SceneComponent.GetPhysicsVolume(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5640>
	void GetParentComponents(struct TArray<Unknown>& Parents); // Function Engine.SceneComponent.GetParentComponents(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5590>
	int32_t GetNumChildrenComponents(); // Function Engine.SceneComponent.GetNumChildrenComponents(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5560>
	struct Unknown GetForwardVector(); // Function Engine.SceneComponent.GetForwardVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC1E0>
	struct Unknown GetComponentVelocity(); // Function Engine.SceneComponent.GetComponentVelocity(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5520>
	void GetChildrenComponents(char bIncludeAllDescendants, struct TArray<Unknown>& Children); // Function Engine.SceneComponent.GetChildrenComponents(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5420>
	struct Unknown GetChildComponent(int32_t ChildIndex); // Function Engine.SceneComponent.GetChildComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5390>
	struct FName GetAttachSocketName(); // Function Engine.SceneComponent.GetAttachSocketName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5370>
	struct Unknown GetAttachParent(); // Function Engine.SceneComponent.GetAttachParent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5350>
	struct TArray<Unknown> GetAllSocketNames(); // Function Engine.SceneComponent.GetAllSocketNames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE52D0>
	char DoesSocketExist(struct FName InSocketName); // Function Engine.SceneComponent.DoesSocketExist(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5230>
	void DetachFromParent(char bMaintainWorldPosition, char bCallModify); // Function Engine.SceneComponent.DetachFromParent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5160>
};

// Class Engine.MKActorEx
struct UMKActorEx : Object {
	char ReplaySamplable; // 0x28 (1)
	struct Unknown* ReplaySampleClass; // 0x30 (8)
	float ReplaySamplingFrequency; // 0x38 (4)
	uint32_t ClientReplaySamplingGUID; // 0x3C (4)
	char b : 0; // 0x44 (1)
	struct TArray<Unknown> ReplaySamplesForPlayback; // 0x68 (16)
	struct Unknown SelfActor; // 0x88 (8)

	void OnTickReplaySampleRecord(struct Unknown DemoNetDriver, float MinRecordHz, float MaxRecordHz, char bSaveCheckpoint); // Function Engine.MKActorEx.OnTickReplaySampleRecord(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D957F0>
	void OnTickReplaySamplePlayback(struct Unknown DemoNetDriver); // Function Engine.MKActorEx.OnTickReplaySamplePlayback(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95770>
	void OnReplayPreScrub(struct Unknown InWorld); // Function Engine.MKActorEx.OnReplayPreScrub(Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1910>
	void OnPostRecordReplay(struct Unknown InWorld, struct Unknown& DemoURL); // Function Engine.MKActorEx.OnPostRecordReplay(Final|Native|Private|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95680>
	void LerpReplaySampleForPlayback(struct Unknown DemoNetDriver, struct Unknown L, struct Unknown R, float LerpPercent); // Function Engine.MKActorEx.LerpReplaySampleForPlayback(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95440>
	char HandleTimelineScrubbed(); // Function Engine.MKActorEx.HandleTimelineScrubbed(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1B20>
	void GatherReplaySampleForRecording(struct Unknown DemoNetDriver, float DemoCurrentTime, char bSaveCheckpoint); // Function Engine.MKActorEx.GatherReplaySampleForRecording(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D945C0>
	void ForceReplaySamplingUpdate(); // Function Engine.MKActorEx.ForceReplaySamplingUpdate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCB60>
};

// Class Engine.Actor
struct UActor : UMKActorEx {
	struct Unknown PrimaryActorTick; // 0x1D8 (48)
	char bNetTemporary : 0; // 0x284 (1)
	char bNetStartup : 0; // 0x248 (1)
	char bOnlyRelevantToOwner : 0; // 0x1C4 (1)
	char bAlwaysRelevant : 0; // 0xA1 (1)
	char b : 0; // 0x260 (1)
	char bHidden : 0; // 0x222 (1)
	char bTearOff : 0; // 0x284 (1)
	char bExchangedRoles : 0; // 0x120 (1)
	char bNetLoadOnClient : 0; // 0x138 (1)
	char bNetUseOwnerRelevancy : 0; // 0xE8 (1)
	char b : 0; // 0x170 (1)
	char b : 0; // 0x138 (1)
	char b : 0; // 0x9F (1)
	char bAllowTickBeforeBeginPlay : 0; // 0x1C4 (1)
	char bAutoDestroyWhenFinished : 0; // 0x1C4 (1)
	char bCanBeDamaged : 0; // 0x1A0 (1)
	char bBlockInput : 0; // 0x303 (1)
	char bCollideWhenPlacing : 0; // 0x301 (1)
	char bFindCameraComponentWhenViewTarget : 0; // 0x251 (1)
	char bGenerateOverlapEventsDuringLevelStreaming : 0; // 0x30E (1)
	char bIgnoresOriginShifting : 0; // 0x155 (1)
	char bEnableAutoLODGeneration : 0; // 0x251 (1)
	char bIsEditorOnlyActor : 0; // 0x120 (1)
	char bActorSeamlessTraveled : 0; // 0xEA (1)
	char b : 0; // 0x9D (1)
	char bCanBeInCluster : 0; // 0x90 (1)
	char bAllowReceiveTickEv : 0; // 0x198 (1)
	char bActorEnableCollision : 0; // 0x1B8 (1)
	char bActorIsBeingDestroyed : 0; // 0x30E (1)
	enum class Unknow UpdateOverlapsMethodDuringLevelStreaming; // 0x154 (1)
	enum class Unknow DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0xA3 (1)
	char RemoteRole; // 0x279 (1)
	struct Unknown ReplicatedMovement; // 0xEC (52)
	float InitialLifeSpan; // 0x2E0 (4)
	float CustomTimeDilation; // 0x308 (4)
	struct Unknown AttachmentReplication; // 0xA8 (64)
	struct Unknown Owner; // 0x178 (8)
	struct FName NetDriverName; // 0x94 (8)
	char Role; // 0x9E (1)
	char NetDormancy; // 0x238 (1)
	enum class Unknow SpawnCollisionHandlingMethod; // 0x304 (1)
	char AutoReceiveInput; // 0x302 (1)
	int32_t InputPriority; // 0x150 (4)
	struct Unknown InputComponent; // 0x2F8 (8)
	float NetCullDistanceSquared; // 0x280 (4)
	int32_t NetTag; // 0x24C (4)
	float NetUpdateFrequency; // 0x27C (4)
	float MinNetUpdateFrequency; // 0x288 (4)
	float NetPriority; // 0x21C (4)
	struct Unknown Instigator; // 0x258 (8)
	struct TArray<Unknown> Children; // 0x268 (16)
	struct Unknown RootComponent; // 0x158 (8)
	struct TArray<Unknown> ControllingMatineeActors; // 0x208 (16)
	struct TArray<Unknown> Layers; // 0x188 (16)
	struct TWeakObjectPtr<struct Unknown> ParentComponent; // 0x1BC (8)
	char bEnableRerunConstructionScript : 0; // 0x30C (1)
	struct TArray<Unknown> Tags; // 0x140 (16)
	struct FMulticastSparseDelegate OnTakeAnyDamage; // 0x218 (1)
	struct FMulticastSparseDelegate OnTakePointDamage; // 0x27A (1)
	struct FMulticastSparseDelegate OnTakeRadialDamage; // 0x9C (1)
	struct FMulticastSparseDelegate OnActorBeginOverlap; // 0x27B (1)
	struct FMulticastSparseDelegate OnActorEndOverlap; // 0xA0 (1)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x221 (1)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0xE9 (1)
	struct FMulticastSparseDelegate OnClicked; // 0x278 (1)
	struct FMulticastSparseDelegate OnReleased; // 0x2E4 (1)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x300 (1)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x285 (1)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0xA2 (1)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x250 (1)
	struct FMulticastSparseDelegate OnActorHit; // 0x180 (1)
	struct FMulticastSparseDelegate OnDestroyed; // 0x220 (1)
	struct FMulticastSparseDelegate OnEndPlay; // 0x30D (1)
	struct TArray<Unknown> InstanceComponents; // 0x128 (16)
	struct TArray<Unknown> BlueprintCreatedComponents; // 0x1A8 (16)
	struct TArray<Unknown> LoadedObjects; // 0x1C8 (16)

	char WasRecentlyRendered(float Tolerance); // Function Engine.Actor.WasRecentlyRendered(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C644A0>
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void TearOff(); // Function Engine.Actor.TearOff(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64480>
	void SnapRootComponentTo(struct Unknown InParentActor, struct FName InSocketName); // Function Engine.Actor.SnapRootComponentTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C643C0>
	void SetTickGroup(char NewTickGroup); // Function Engine.Actor.SetTickGroup(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C642B0>
	void SetTickableWhenPaused(char bTickableWhenPaused); // Function Engine.Actor.SetTickableWhenPaused(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64330>
	void SetReplicates(char bInReplicates); // Function Engine.Actor.SetReplicates(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64220>
	void SetReplicateMovement(char bInReplicateMovement); // Function Engine.Actor.SetReplicateMovement(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64190>
	void SetOwner(struct Unknown NewOwner); // Function Engine.Actor.SetOwner(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64100>
	void SetNetDormancy(char NewDormancy); // Function Engine.Actor.SetNetDormancy(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64080>
	void SetLifeSpan(float InLifespan); // Function Engine.Actor.SetLifeSpan(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64000>
	void SetAutoDestroyWhenFinished(char bVal); // Function Engine.Actor.SetAutoDestroyWhenFinished(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63F70>
	void SetActorTickInterval(float TickInterval); // Function Engine.Actor.SetActorTickInterval(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63EF0>
	void SetActorTickEnabled(char bEnabled); // Function Engine.Actor.SetActorTickEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63E60>
	void SetActorScale3D(struct Unknown NewScale3D); // Function Engine.Actor.SetActorScale3D(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63DD0>
	void SetActorRelativeScale3D(struct Unknown NewRelativeScale); // Function Engine.Actor.SetActorRelativeScale3D(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63D40>
	void SetActorHiddenInGame(char bNewHidden); // Function Engine.Actor.SetActorHiddenInGame(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63CB0>
	void SetActorEnableCollision(char bNewActorEnableCollision); // Function Engine.Actor.SetActorEnableCollision(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63C20>
	void RemoveTickPrerequisiteComponent(struct Unknown PrerequisiteComponent); // Function Engine.Actor.RemoveTickPrerequisiteComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63B90>
	void RemoveTickPrerequisiteActor(struct Unknown PrerequisiteActor); // Function Engine.Actor.RemoveTickPrerequisiteActor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63B00>
	void ReceiveTick(float DeltaSeconds); // Function Engine.Actor.ReceiveTick(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveRadialDamage(float DamageReceived, struct Unknown DamageType, struct Unknown Origin, struct Unknown& HitInfo, struct Unknown InstigatedBy, struct Unknown DamageCauser); // Function Engine.Actor.ReceiveRadialDamage(BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceivePointDamage(float Damage, struct Unknown DamageType, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown HitComponent, struct FName BoneName, struct Unknown ShotFromDirection, struct Unknown InstigatedBy, struct Unknown DamageCauser, struct Unknown& HitInfo); // Function Engine.Actor.ReceivePointDamage(BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveHit(struct Unknown MyComp, struct Unknown Other, struct Unknown OtherComp, char bSelfMoved, struct Unknown HitLocation, struct Unknown HitNormal, struct Unknown NormalImpulse, struct Unknown& Hit); // Function Engine.Actor.ReceiveHit(Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveEndPlay(char EndPlayReason); // Function Engine.Actor.ReceiveEndPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveAnyDamage(float Damage, struct Unknown DamageType, struct Unknown InstigatedBy, struct Unknown DamageCauser); // Function Engine.Actor.ReceiveAnyDamage(BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorOnReleased(struct Unknown ButtonReleased); // Function Engine.Actor.ReceiveActorOnReleased(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorOnInputTouchLeave(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchLeave(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorOnInputTouchEnter(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnter(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorOnInputTouchEnd(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnd(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorOnInputTouchBegin(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchBegin(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorOnClicked(struct Unknown ButtonPressed); // Function Engine.Actor.ReceiveActorOnClicked(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorEndOverlap(struct Unknown OtherActor); // Function Engine.Actor.ReceiveActorEndOverlap(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorBeginOv(struct Unknown OtherActor); // Function Engine.Actor.ReceiveActorBeginOv(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PrestreamTextures(float Seconds, char bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.Actor.PrestreamTextures(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C639F0>
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7FD0>
	void OnRep_ReplicatedMov(); // Function Engine.Actor.OnRep_ReplicatedMov(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C639D0>
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner(Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7990>
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C639B0>
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7B30>
	void MakeNoise(float Loudness, struct Unknown NoiseInstigator, struct Unknown NoiseLocation, float MaxRange, struct FName Tag); // Function Engine.Actor.MakeNoise(Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63820>
	struct Unknown MakeMIDForMaterial(struct Unknown Parent); // Function Engine.Actor.MakeMIDForMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63790>
	char K2_TeleportTo(struct Unknown DestLocation, struct Unknown DestRotation); // Function Engine.Actor.K2_TeleportTo(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C636A0>
	char K2_SetActorTransform(struct Unknown& NewTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_SetActorTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C634A0>
	char K2_SetActorRotation(struct Unknown NewRotation, char bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C633C0>
	void K2_SetActorRelativeTransform(struct Unknown& NewRelativeTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_SetActorRelativeTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C631C0>
	void K2_SetActorRelativeRotation(struct Unknown NewRelativeRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_SetActorRelativeRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C63020>
	void K2_SetActorRelativeLocation(struct Unknown NewRelativeLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_SetActorRelativeLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62E80>
	char K2_SetActorLocationAndRotation(struct Unknown NewLocation, struct Unknown NewRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_SetActorLocationAndRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62C80>
	char K2_SetActorLocation(struct Unknown NewLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_SetActorLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62AD0>
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEndViewTarget(struct Unknown PC); // Function Engine.Actor.K2_OnEndViewTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnBecomeViewTarget(struct Unknown PC); // Function Engine.Actor.K2_OnBecomeViewTarget(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown K2_GetRootComponent(); // Function Engine.Actor.K2_GetRootComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62AB0>
	struct TArray<Unknown> K2_GetComponentsByClass(struct Unknown* ComponentClass); // Function Engine.Actor.K2_GetComponentsByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C629D0>
	struct Unknown K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62910>
	struct Unknown K2_GetActorLocation(); // Function Engine.Actor.K2_GetActorLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62870>
	void K2_DetachFromActor(enum class Unknow LocationRule, enum class Unknow RotationRule, enum class Unknow ScaleRule); // Function Engine.Actor.K2_DetachFromActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62770>
	void K2_DestroyComponent(struct Unknown Component); // Function Engine.Actor.K2_DestroyComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C626F0>
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C626D0>
	void K2_AttachToComponent(struct Unknown Parent, struct FName SocketName, enum class Unknow LocationRule, enum class Unknow RotationRule, enum class Unknow ScaleRule, char bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62510>
	void K2_AttachToActor(struct Unknown ParentActor, struct FName SocketName, enum class Unknow LocationRule, enum class Unknow RotationRule, enum class Unknow ScaleRule, char bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62350>
	void K2_AttachRootComponentToActor(struct Unknown InParentActor, struct FName InSocketName, char AttachLocationType, char bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentToActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C62200>
	void K2_AttachRootComponentTo(struct Unknown InParent, struct FName InSocketName, char AttachLocationType, char bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentTo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C620B0>
	void K2_AddActorWorldTransform(struct Unknown& DeltaTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_AddActorWorldTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61EB0>
	void K2_AddActorWorldRotation(struct Unknown DeltaRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_AddActorWorldRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61D10>
	void K2_AddActorWorldOffset(struct Unknown DeltaLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_AddActorWorldOffset(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61B70>
	void K2_AddActorLocalTransform(struct Unknown& NewTransform, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_AddActorLocalTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61970>
	void K2_AddActorLocalRotation(struct Unknown DeltaRotation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_AddActorLocalRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C617D0>
	void K2_AddActorLocalOffset(struct Unknown DeltaLocation, char bSweep, struct Unknown& SweepHitResult, char bTeleport); // Function Engine.Actor.K2_AddActorLocalOffset(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61630>
	char IsOverlappingActor(struct Unknown Other); // Function Engine.Actor.IsOverlappingActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C615A0>
	char IsChildActor(); // Function Engine.Actor.IsChildActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61570>
	char IsActorTickEnabled(); // Function Engine.Actor.IsActorTickEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61540>
	char IsActorBeingDestroyed(); // Function Engine.Actor.IsActorBeingDestroyed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61510>
	char HasAuthority(); // Function Engine.Actor.HasAuthority(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C614E0>
	float GetVerticalDistanceTo(struct Unknown OtherActor); // Function Engine.Actor.GetVerticalDistanceTo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61440>
	struct Unknown GetVelocity(); // Function Engine.Actor.GetVelocity(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61400>
	struct Unknown GetTransform(); // Function Engine.Actor.GetTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C613B0>
	char GetTickableWhenPaused(); // Function Engine.Actor.GetTickableWhenPaused(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61380>
	float GetSquaredDistanceTo(struct Unknown OtherActor); // Function Engine.Actor.GetSquaredDistanceTo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C612E0>
	char GetRemoteRole(); // Function Engine.Actor.GetRemoteRole(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C612C0>
	struct Unknown GetParentComponent(); // Function Engine.Actor.GetParentComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61290>
	struct Unknown GetParentActor(); // Function Engine.Actor.GetParentActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61260>
	struct Unknown GetOwner(); // Function Engine.Actor.GetOwner(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61240>
	void GetOverlappingComponents(struct TArray<Unknown>& OverlappingComponents); // Function Engine.Actor.GetOverlappingComponents(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61190>
	void GetOverlappingActors(struct TArray<Unknown>& OverlappingActors, struct Unknown* ClassFilter); // Function Engine.Actor.GetOverlappingActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61090>
	char GetLocalRole(); // Function Engine.Actor.GetLocalRole(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61070>
	float GetLifeSpan(); // Function Engine.Actor.GetLifeSpan(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61030>
	struct Unknown GetInstigatorController(); // Function Engine.Actor.GetInstigatorController(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C61000>
	struct Unknown GetInstigator(); // Function Engine.Actor.GetInstigator(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60FD0>
	struct Unknown GetInputVectorAxisValue(struct Unknown InputAxisKey); // Function Engine.Actor.GetInputVectorAxisValue(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60ED0>
	float GetInputAxisValue(struct FName InputAxisName); // Function Engine.Actor.GetInputAxisValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60E30>
	float GetInputAxisKeyValue(struct Unknown InputAxisKey); // Function Engine.Actor.GetInputAxisKeyValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60D40>
	float GetHorizontalDotProductTo(struct Unknown OtherActor); // Function Engine.Actor.GetHorizontalDotProductTo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60CA0>
	float GetHorizontalDistanceTo(struct Unknown OtherActor); // Function Engine.Actor.GetHorizontalDistanceTo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60C00>
	float GetGameTimeSinceCreation(); // Function Engine.Actor.GetGameTimeSinceCreation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60BD0>
	float GetDotProductTo(struct Unknown OtherActor); // Function Engine.Actor.GetDotProductTo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60B30>
	float GetDistanceTo(struct Unknown OtherActor); // Function Engine.Actor.GetDistanceTo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60A90>
	struct TArray<Unknown> GetComponentsByTag(struct Unknown* ComponentClass, struct FName Tag); // Function Engine.Actor.GetComponentsByTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60980>
	struct TArray<Unknown> GetComponentsByInterface(struct Unknown* Interface); // Function Engine.Actor.GetComponentsByInterface(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C608A0>
	struct Unknown GetComponentByClass(struct Unknown* ComponentClass); // Function Engine.Actor.GetComponentByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60810>
	struct FName GetAttachParentSocketName(); // Function Engine.Actor.GetAttachParentSocketName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60590>
	void GetAttachParentActors(struct TArray<Unknown>& OutActors); // Function Engine.Actor.GetAttachParentActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C604E0>
	struct Unknown GetAttachParentActorMost(); // Function Engine.Actor.GetAttachParentActorMost(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C604B0>
	struct Unknown GetAttachParentActor(); // Function Engine.Actor.GetAttachParentActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60480>
	void GetAttachedActorsRecursive(struct TArray<Unknown>& OutActors, char bIncludeChildActor); // Function Engine.Actor.GetAttachedActorsRecursive(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60710>
	void GetAttachedActors(struct TArray<Unknown>& OutActors, char b, char bIncludeChildActor); // Function Engine.Actor.GetAttachedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C605D0>
	void GetAllChildActors(struct TArray<Unknown>& ChildActors, char bIncludeDescendants); // Function Engine.Actor.GetAllChildActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60380>
	struct Unknown GetActorUpVector(); // Function Engine.Actor.GetActorUpVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60310>
	float GetActorTimeDilation(); // Function Engine.Actor.GetActorTimeDilation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C602E0>
	float GetActorTickInterval(); // Function Engine.Actor.GetActorTickInterval(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C602B0>
	struct Unknown GetActorScale3D(); // Function Engine.Actor.GetActorScale3D(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60270>
	struct Unknown GetActorRightVector(); // Function Engine.Actor.GetActorRightVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60200>
	struct Unknown GetActorRelativeScale3D(); // Function Engine.Actor.GetActorRelativeScale3D(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C601C0>
	struct Unknown GetActorForwardVector(); // Function Engine.Actor.GetActorForwardVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60150>
	void GetActorEyesViewPoint(struct Unknown& OutLocation, struct Unknown& OutRotation); // Function Engine.Actor.GetActorEyesViewPoint(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60060>
	char GetActorEnableCollision(); // Function Engine.Actor.GetActorEnableCollision(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C60030>
	void GetActorBounds(char bOnlyCollidingComponents, struct Unknown& Origin, struct Unknown& BoxExtent, char bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FEB0>
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FE90>
	void FlushNetDormancy(); // Function Engine.Actor.FlushNetDormancy(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FE70>
	void EnableInput(struct Unknown PlayerController); // Function Engine.Actor.EnableInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FDE0>
	void DisableInput(struct Unknown PlayerController); // Function Engine.Actor.DisableInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FD50>
	void DetachRootComponentFromParent(char bMaintainWorldPosition); // Function Engine.Actor.DetachRootComponentFromParent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FCC0>
	void AddTickPrerequisiteComponent(struct Unknown PrerequisiteComponent); // Function Engine.Actor.AddTickPrerequisiteComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FC30>
	void AddTickPrerequisiteActor(struct Unknown PrerequisiteActor); // Function Engine.Actor.AddTickPrerequisiteActor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5FBA0>
	struct Unknown AddComponent(struct FName TemplateName, char bManualAttachment, struct Unknown& RelativeTransform, struct Unknown ComponentTemplateContext); // Function Engine.Actor.AddComponent(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5F9E0>
	char ActorHasTag(struct FName Tag); // Function Engine.Actor.ActorHasTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C5F950>
};

// Class Engine.SkeletalMeshActor
struct ASkeletalMeshActor : UActor {
	char bShouldDoAnimNotifies : 0; // 0x318 (1)
	char bWakeOnLevelStart : 0; // 0x318 (1)
	struct Unknown SkeletalMeshComponent; // 0x320 (8)
	struct Unknown ReplicatedMesh; // 0x328 (8)
	struct Unknown ReplicatedPhysAsset; // 0x330 (8)
	struct Unknown ReplicatedMaterial0; // 0x338 (8)
	struct Unknown ReplicatedMaterial1; // 0x340 (8)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12372B0>
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1B4E0>
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1CD70>
};

// Class Engine.PrimitiveComponent
struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x240 (4)
	float LDMaxDrawDistance; // 0x244 (4)
	float CachedMaxDrawDistance; // 0x248 (4)
	char DepthPriorityGroup; // 0x24C (1)
	char ViewOwnerDepthPriorityGroup; // 0x24D (1)
	char IndirectLightingCacheQuality; // 0x24E (1)
	enum class Unknow LightmapType; // 0x24F (1)
	char bUseMaxLODAsImposter : 0; // 0x250 (1)
	char bBatchImpostersAsInstances : 0; // 0x250 (1)
	char bNeverDistanceCull : 0; // 0x250 (1)
	char bAlwaysCreatePhysicsState : 0; // 0x250 (1)
	char bGenerateOverlapEvents : 0; // 0x251 (1)
	char bMultiBodyOverlap : 0; // 0x251 (1)
	char bTraceComplexOnMove : 0; // 0x251 (1)
	char b : 0; // 0x251 (1)
	char bUseViewOwnerDepthPriorityGroup : 0; // 0x251 (1)
	char bAllowCullDistanceVolume : 0; // 0x251 (1)
	char bHasMotionBlurVelocityMeshes : 0; // 0x251 (1)
	char bVisibleInReflectionCaptures : 0; // 0x251 (1)
	char bVisibleInRayTracing : 0; // 0x252 (1)
	char b : 0; // 0x252 (1)
	char b : 0; // 0x252 (1)
	char b : 0; // 0x252 (1)
	char bOwnerNoSee : 0; // 0x252 (1)
	char bOnlyOwnerSee : 0; // 0x252 (1)
	char bIgnoreNearClippingForOcclusion : 0; // 0x252 (1)
	char bTreatAsBackgroundForOcclusion : 0; // 0x252 (1)
	char bUseAsOccluder : 0; // 0x253 (1)
	char bSelectable : 0; // 0x253 (1)
	char bForceMipStreaming : 0; // 0x253 (1)
	char bHasPerInstanceHitProxies : 0; // 0x253 (1)
	char CastShadow : 0; // 0x253 (1)
	char bAffectDynamicIndirectLighting : 0; // 0x253 (1)
	char bAffectDistanceFieldLighting : 0; // 0x253 (1)
	char bCastDynamicShadow : 0; // 0x253 (1)
	char bCastStaticShadow : 0; // 0x254 (1)
	char bCastDirectionalShadow : 0; // 0x254 (1)
	char bCastVolumetricTranslucentShadow : 0; // 0x254 (1)
	char bSelfShadowOnly : 0; // 0x254 (1)
	char bCastFarShadow : 0; // 0x254 (1)
	char bCastInsetShadow : 0; // 0x254 (1)
	char bCastCinematicShadow : 0; // 0x254 (1)
	char bCastHiddenShadow : 0; // 0x254 (1)
	char bCastShadowAsTwoSided : 0; // 0x255 (1)
	char bLightAsIfStatic : 0; // 0x255 (1)
	char bLightAttachmentsAsGroup : 0; // 0x255 (1)
	char bExcludeFromLightAttachmentGroup : 0; // 0x255 (1)
	char b : 0; // 0x255 (1)
	char bSingleSampleShadowFromStationaryLights : 0; // 0x255 (1)
	char bIgnoreRadialImpulse : 0; // 0x255 (1)
	char bIgnoreRadialForce : 0; // 0x255 (1)
	char bApplyImpulseOnDamage : 0; // 0x256 (1)
	char b : 0; // 0x256 (1)
	char bFillCollisionUnderneathForNavmesh : 0; // 0x256 (1)
	char AlwaysLoadOnClient : 0; // 0x256 (1)
	char AlwaysLoadOnServer : 0; // 0x256 (1)
	char bUseEditorCompositing : 0; // 0x256 (1)
	char b : 0; // 0x256 (1)
	char bHasNoStreamableTextures : 0; // 0x257 (1)
	char bHasCustomNavigableGeometry; // 0x258 (1)
	char CanCharacterStepUpOn; // 0x25A (1)
	struct Unknown LightingChannels; // 0x25B (1)
	enum class Unknow CustomDepthStencilWriteMask; // 0x25C (1)
	int32_t CustomDepthStencilValue; // 0x260 (4)
	struct Unknown CustomPrimitiveData; // 0x268 (16)
	struct Unknown CustomPrimitiveDataInternal; // 0x278 (16)
	int32_t TranslucencySortPriority; // 0x288 (4)
	int32_t VisibilityId; // 0x28C (4)
	struct TArray<Unknown> RuntimeVirtualTextures; // 0x290 (16)
	int8_t VirtualTextureLodBias; // 0x2A0 (1)
	int8_t VirtualTextureCullMips; // 0x2A1 (1)
	int8_t VirtualTextureMinCoverage; // 0x2A2 (1)
	enum class Unknow VirtualTextureRenderPassType; // 0x2A3 (1)
	float LpvBiasMultiplier; // 0x2A8 (4)
	float BoundsScale; // 0x2B4 (4)
	struct TArray<Unknown> MoveIgnoreActors; // 0x2C8 (16)
	struct TArray<Unknown> MoveIgnoreComponents; // 0x2D8 (16)
	struct Unknown BodyInstance; // 0x2F8 (400)
	struct FMulticastSparseDelegate OnComponentHit; // 0x488 (1)
	struct FMulticastSparseDelegate OnComponentBeginOverlap; // 0x489 (1)
	struct FMulticastSparseDelegate OnComponentEndOverlap; // 0x48A (1)
	struct FMulticastSparseDelegate OnComponentWake; // 0x48B (1)
	struct FMulticastSparseDelegate OnComponentSleep; // 0x48C (1)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x48E (1)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x48F (1)
	struct FMulticastSparseDelegate OnClicked; // 0x490 (1)
	struct FMulticastSparseDelegate OnReleased; // 0x491 (1)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x492 (1)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x493 (1)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x494 (1)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x495 (1)
	struct Unknown LODParentPrimitive; // 0x4B0 (8)

	char WasRecentlyRendered(float Tolerance); // Function Engine.PrimitiveComponent.WasRecentlyRendered(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5B30>
	void WakeRigidBody(struct FName BoneName); // Function Engine.PrimitiveComponent.WakeRigidBody(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5AA0>
	void WakeAllRigidBodies(); // Function Engine.PrimitiveComponent.WakeAllRigidBodies(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB47A0>
	void SetWalkableSlopeOverride(struct Unknown& NewOverride); // Function Engine.PrimitiveComponent.SetWalkableSlopeOverride(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD59F0>
	void SetUseCCD(char InUseCCD, struct FName BoneName); // Function Engine.PrimitiveComponent.SetUseCCD(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5920>
	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.SetTranslucentSortPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD58A0>
	void SetSingleSampleShadowFromStationaryLights(char bNewSingleSampleShadowFromStationaryLights); // Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5810>
	void SetSimulatePhysics(char bSimulate); // Function Engine.PrimitiveComponent.SetSimulatePhysics(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5780>
	void SetRenderInMainPass(char bValue); // Function Engine.PrimitiveComponent.SetRenderInMainPass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD56F0>
	void SetRenderCustomDepth(char bValue); // Function Engine.PrimitiveComponent.SetRenderCustomDepth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5660>
	void SetReceivesDecals(char bNewReceivesDecals); // Function Engine.PrimitiveComponent.SetReceivesDecals(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD55D0>
	void SetPhysMaterialOverride(struct Unknown NewPhysMaterial); // Function Engine.PrimitiveComponent.SetPhysMaterialOverride(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4FA0>
	void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD54C0>
	void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD53B0>
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD53B0>
	void SetPhysicsLinearVelocity(struct Unknown NewVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5290>
	void SetPhysicsAngularVelocityInRadians(struct Unknown NewAngVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5170>
	void SetPhysicsAngularVelocityInDegrees(struct Unknown NewAngVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5030>
	void SetPhysicsAngularVelocity(struct Unknown NewAngVel, char bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD5030>
	void SetOwnerNoSee(char bNewOwnerNoSee); // Function Engine.PrimitiveComponent.SetOwnerNoSee(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4F10>
	void SetOnlyOwnerSee(char bNewOnlyOwnerSee); // Function Engine.PrimitiveComponent.SetOnlyOwnerSee(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4E80>
	void SetNotifyRigidBodyCollision(char bNewNotifyRigidBodyCollision); // Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4DF0>
	void SetMaterialByName(struct FName MaterialSlotName, struct Unknown Material); // Function Engine.PrimitiveComponent.SetMaterialByName(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4D20>
	void SetMaterial(int32_t ElementIndex, struct Unknown Material); // Function Engine.PrimitiveComponent.SetMaterial(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4C50>
	void SetMassScale(struct FName BoneName, float InMassScale); // Function Engine.PrimitiveComponent.SetMassScale(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4B80>
	void SetMassOverrideInKg(struct FName BoneName, float MassInKg, char bOverrideMass); // Function Engine.PrimitiveComponent.SetMassOverrideInKg(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4A80>
	void SetLinearDamping(float InDamping); // Function Engine.PrimitiveComponent.SetLinearDamping(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4A00>
	void SetLightingChannels(char bChannel0, char bChannel1, char bChannel2); // Function Engine.PrimitiveComponent.SetLightingChannels(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD48E0>
	void SetLightAttachmentsAsGroup(char bInLightAttachmentsAsGroup); // Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4850>
	void SetGenerateOverlapEvents(char bInGenerateOverlapEvents); // Function Engine.PrimitiveComponent.SetGenerateOverlapEvents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD47C0>
	void SetExcludeFromLightAttachmentGroup(char bInExcludeFromLightAttachmentGroup); // Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4730>
	void SetEnableGravity(char bGravityEnabled); // Function Engine.PrimitiveComponent.SetEnableGravity(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD46A0>
	void SetCustomPrimitiveDataVector4(int32_t DataIndex, struct Unknown Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD45D0>
	void SetCustomPrimitiveDataVector3(int32_t DataIndex, struct Unknown Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4500>
	void SetCustomPrimitiveDataVector2(int32_t DataIndex, struct Unknown Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4440>
	void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4370>
	void SetCustomDepthStencilWriteMask(enum class Unknow WriteMaskBit); // Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD42F0>
	void SetCustomDepthStencilValue(int32_t Value); // Function Engine.PrimitiveComponent.SetCustomDepthStencilValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4270>
	void SetCullDistance(float NewCullDistance); // Function Engine.PrimitiveComponent.SetCullDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD41F0>
	void SetConstraintMode(char ConstraintMode); // Function Engine.PrimitiveComponent.SetConstraintMode(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4170>
	void SetCollisionResponseToChannel(char Channel, char NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToChannel(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD40B0>
	void SetCollisionResponseToAllChannels(char NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD4030>
	void SetCollisionProfileName(struct FName InCollisionProfileName, char bUpdateOverlaps); // Function Engine.PrimitiveComponent.SetCollisionProfileName(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3F60>
	void SetCollisionObjectType(char Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3EE0>
	void SetCollisionEnabled(char NewType); // Function Engine.PrimitiveComponent.SetCollisionEnabled(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3E60>
	void SetCenterOfMass(struct Unknown CenterOfMassOffset, struct FName BoneName); // Function Engine.PrimitiveComponent.SetCenterOfMass(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3D90>
	void SetCastShadow(char NewCastShadow); // Function Engine.PrimitiveComponent.SetCastShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3D00>
	void SetCastInsetShadow(char bInCastInsetShadow); // Function Engine.PrimitiveComponent.SetCastInsetShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3C70>
	void SetBoundsScale(float NewBoundsScale); // Function Engine.PrimitiveComponent.SetBoundsScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3BF0>
	void SetAngularDamping(float InDamping); // Function Engine.PrimitiveComponent.SetAngularDamping(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3B70>
	void SetAllUseCCD(char InUseCCD); // Function Engine.PrimitiveComponent.SetAllUseCCD(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5450>
	void SetAllPhysicsLinearVelocity(struct Unknown NewVel, char bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3A90>
	void SetAllPhysicsAngularVelocityInRadians(struct Unknown& NewAngVel, char bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD39B0>
	void SetAllPhysicsAngularVelocityInDegrees(struct Unknown& NewAngVel, char bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3890>
	void SetAllMassScale(float InMassScale); // Function Engine.PrimitiveComponent.SetAllMassScale(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3660>
	struct Unknown ScaleByMomentOfInertia(struct Unknown InputVector, struct FName BoneName); // Function Engine.PrimitiveComponent.ScaleByMomentOfInertia(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3790>
	void PutRigidBodyToSleep(struct FName BoneName); // Function Engine.PrimitiveComponent.PutRigidBodyToSleep(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3710>
	char K2_SphereTraceComponent(struct Unknown TraceStart, struct Unknown TraceEnd, float SphereRadius, char bTraceComplex, char bShowTrace, char bPersistentShowTrace, struct Unknown& HitLocation, struct Unknown& HitNormal, struct FName& BoneName, struct Unknown& OutHit); // Function Engine.PrimitiveComponent.K2_SphereTraceComponent(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3380>
	char K2_SphereOverlapComponent(struct Unknown InSphereCentre, float InSphereRadius, char bTraceComplex, char bShowTrace, char bPersistentShowTrace, struct Unknown& HitLocation, struct Unknown& HitNormal, struct FName& BoneName, struct Unknown& OutHit); // Function Engine.PrimitiveComponent.K2_SphereOverlapComponent(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD3040>
	char K2_LineTraceComponent(struct Unknown TraceStart, struct Unknown TraceEnd, char bTraceComplex, char bShowTrace, char bPersistentShowTrace, struct Unknown& HitLocation, struct Unknown& HitNormal, struct FName& BoneName, struct Unknown& OutHit); // Function Engine.PrimitiveComponent.K2_LineTraceComponent(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2CF0>
	char K2_IsQueryCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2CB0>
	char K2_IsPhysicsCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2C70>
	char K2_IsCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsCollisionEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2C30>
	char K2_BoxOverlapComponent(struct Unknown InBoxCentre, struct Unknown InBox, char bTraceComplex, char bShowTrace, char bPersistentShowTrace, struct Unknown& HitLocation, struct Unknown& HitNormal, struct FName& BoneName, struct Unknown& OutHit); // Function Engine.PrimitiveComponent.K2_BoxOverlapComponent(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD28E0>
	char IsOverlappingComponent(struct Unknown OtherComp); // Function Engine.PrimitiveComponent.IsOverlappingComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2850>
	char IsOverlappingActor(struct Unknown Other); // Function Engine.PrimitiveComponent.IsOverlappingActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD27C0>
	char IsGravityEnabled(); // Function Engine.PrimitiveComponent.IsGravityEnabled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFFA0>
	char IsAnyRigidBodyAwake(); // Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake(Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2790>
	void IgnoreComponentWhenMoving(struct Unknown Component, char bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD26C0>
	void IgnoreActorWhenMoving(struct Unknown Actor, char bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreActorWhenMoving(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD25F0>
	struct Unknown GetWalkableSlopeOverride(); // Function Engine.PrimitiveComponent.GetWalkableSlopeOverride(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD25C0>
	struct Unknown GetPhysicsLinearVelocityAtPoint(struct Unknown Point, struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD24D0>
	struct Unknown GetPhysicsLinearVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2430>
	struct Unknown GetPhysicsAngularVelocityInRadians(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2390>
	struct Unknown GetPhysicsAngularVelocityInDegrees(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD22C0>
	struct Unknown GetPhysicsAngularVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD22C0>
	void GetOverlappingComponents(struct TArray<Unknown>& OutOverlappingComponents); // Function Engine.PrimitiveComponent.GetOverlappingComponents(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2210>
	void GetOverlappingActors(struct TArray<Unknown>& OverlappingActors, struct Unknown* ClassFilter); // Function Engine.PrimitiveComponent.GetOverlappingActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2110>
	int32_t GetNumMaterials(); // Function Engine.PrimitiveComponent.GetNumMaterials(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD20E0>
	struct Unknown GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex); // Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD2000>
	struct Unknown GetMaterial(int32_t ElementIndex); // Function Engine.PrimitiveComponent.GetMaterial(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1F60>
	float GetMassScale(struct FName BoneName); // Function Engine.PrimitiveComponent.GetMassScale(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1EC0>
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1E80>
	float GetLinearDamping(); // Function Engine.PrimitiveComponent.GetLinearDamping(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1E40>
	struct Unknown GetInertiaTensor(struct FName BoneName); // Function Engine.PrimitiveComponent.GetInertiaTensor(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1D90>
	char GetGenerateOverlapEvents(); // Function Engine.PrimitiveComponent.GetGenerateOverlapEvents(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1D60>
	char GetCollisionResponseToChannel(char Channel); // Function Engine.PrimitiveComponent.GetCollisionResponseToChannel(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1CD0>
	struct FName GetCollisionProfileName(); // Function Engine.PrimitiveComponent.GetCollisionProfileName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1C90>
	char GetCollisionObjectType(); // Function Engine.PrimitiveComponent.GetCollisionObjectType(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1C60>
	char GetCollisionEnabled(); // Function Engine.PrimitiveComponent.GetCollisionEnabled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1C30>
	float GetClosestPointOnCollision(struct Unknown& Point, struct Unknown& OutPointOnBody, struct FName BoneName); // Function Engine.PrimitiveComponent.GetClosestPointOnCollision(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1AF0>
	struct Unknown GetCenterOfMass(struct FName BoneName); // Function Engine.PrimitiveComponent.GetCenterOfMass(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1A50>
	float GetAngularDamping(); // Function Engine.PrimitiveComponent.GetAngularDamping(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1A10>
	struct Unknown CreateDynamicMaterialInstance(int32_t ElementIndex, struct Unknown SourceMaterial, struct FName OptionalName); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1900>
	struct Unknown CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, struct Unknown Parent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1830>
	struct Unknown CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1790>
	struct TArray<Unknown> CopyArrayOfMoveIgnoreComponents(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1710>
	struct TArray<Unknown> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1690>
	void ClearMoveIgnoreComponents(); // Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1660>
	void ClearMoveIgnoreActors(); // Function Engine.PrimitiveComponent.ClearMoveIgnoreActors(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1640>
	char CanCharacterStepUp(struct Unknown Pawn); // Function Engine.PrimitiveComponent.CanCharacterStepUp(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD15A0>
	void AddTorqueInRadians(struct Unknown Torque, struct FName BoneName, char bAccelChange); // Function Engine.PrimitiveComponent.AddTorqueInRadians(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1340>
	void AddTorqueInDegrees(struct Unknown Torque, struct FName BoneName, char bAccelChange); // Function Engine.PrimitiveComponent.AddTorqueInDegrees(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1460>
	void AddTorque(struct Unknown Torque, struct FName BoneName, char bAccelChange); // Function Engine.PrimitiveComponent.AddTorque(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1340>
	void AddRadialImpulse(struct Unknown Origin, float Radius, float Strength, char Falloff, char bVelChange); // Function Engine.PrimitiveComponent.AddRadialImpulse(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD1180>
	void AddRadialForce(struct Unknown Origin, float Radius, float Strength, char Falloff, char bAccelChange); // Function Engine.PrimitiveComponent.AddRadialForce(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0FC0>
	void AddImpulseAtLocation(struct Unknown Impulse, struct Unknown Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddImpulseAtLocation(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0E90>
	void AddImpulse(struct Unknown Impulse, struct FName BoneName, char bVelChange); // Function Engine.PrimitiveComponent.AddImpulse(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0D70>
	void AddForceAtLocationLocal(struct Unknown Force, struct Unknown Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0C40>
	void AddForceAtLocation(struct Unknown Force, struct Unknown Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocation(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0B10>
	void AddForce(struct Unknown Force, struct FName BoneName, char bAccelChange); // Function Engine.PrimitiveComponent.AddForce(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD09F0>
	void AddAngularImpulseInRadians(struct Unknown Impulse, struct FName BoneName, char bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulseInRadians(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD08D0>
	void AddAngularImpulseInDegrees(struct Unknown Impulse, struct FName BoneName, char bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0790>
	void AddAngularImpulse(struct Unknown Impulse, struct FName BoneName, char bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulse(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD0670>
};

// Class Engine.MeshComponent
struct UMeshComponent : UPrimitiveComponent {
	float MipStreamingScale; // 0x4B8 (4)
	struct TArray<Unknown> OverrideMaterials; // 0x4C0 (16)
	char bEnableMaterialParameterCaching : 0; // 0x4E0 (1)

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, struct Unknown ParameterValue); // Function Engine.MeshComponent.SetVectorParameterValueOnMaterials(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D520>
	void SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue); // Function Engine.MeshComponent.SetScalarParameterValueOnMaterials(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D450>
	void SetColorParameterValueOnMaterials(struct FName ParameterName, struct Unknown ParameterValue); // Function Engine.MeshComponent.SetColorParameterValueOnMaterials(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D220>
	void PrestreamTextures(float Seconds, char bPrioritizeCharacterTextures, int32_t CinematicTextureGroups); // Function Engine.MeshComponent.PrestreamTextures(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D110>
	char IsMaterialSlotNameValid(struct FName MaterialSlotName); // Function Engine.MeshComponent.IsMaterialSlotNameValid(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D070>
	struct TArray<Unknown> GetMaterialSlotNames(); // Function Engine.MeshComponent.GetMaterialSlotNames(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8CF70>
	struct TArray<Unknown> GetMaterials(); // Function Engine.MeshComponent.GetMaterials(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8CFF0>
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // Function Engine.MeshComponent.GetMaterialIndex(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8CED0>
};

// Class Engine.SkinnedMeshComponent
struct USkinnedMeshComponent : UMeshComponent {
	struct Unknown SkeletalMesh; // 0x4E8 (8)
	struct TWeakObjectPtr<struct Unknown> MasterPoseComponent; // 0x4F0 (8)
	struct TArray<Unknown> SkinCacheUsage; // 0x4F8 (16)
	struct Unknown PhysicsAssetOverride; // 0x600 (8)
	int32_t ForcedLodModel; // 0x608 (4)
	int32_t MinLodModel; // 0x60C (4)
	float StreamingDistanceMultiplier; // 0x618 (4)
	struct TArray<Unknown> LODInfo; // 0x628 (16)
	enum class Unknow VisibilityBasedAnimTickOption; // 0x65C (1)
	char bOverrideMinLod : 0; // 0x65E (1)
	char bUseBoundsFromMasterPoseComponent : 0; // 0x65E (1)
	char bForceWireframe : 0; // 0x65E (1)
	char bDisplayBones : 0; // 0x65E (1)
	char bDisableMorphTarget : 0; // 0x65E (1)
	char bHideSkin : 0; // 0x65E (1)
	char bPerBoneMotionBlur : 0; // 0x65F (1)
	char bComponentUseFixedSkelBounds : 0; // 0x65F (1)
	char bConsiderAllBodiesForBounds : 0; // 0x65F (1)
	char bSyncAttachParentLOD : 0; // 0x65F (1)
	char bCanHighlightSelectedSections : 0; // 0x65F (1)
	char b : 0; // 0x65F (1)
	char bCastCapsuleDirectShadow : 0; // 0x65F (1)
	char bCastCapsuleIndirectShadow : 0; // 0x65F (1)
	char bCPUSkinning : 0; // 0x660 (1)
	char bEnableUpdateRateOptimizations : 0; // 0x660 (1)
	char bDisplayDebugUpdateRateOptimizations : 0; // 0x660 (1)
	char b : 0; // 0x660 (1)
	char bIgnoreMasterPoseComponentLOD : 0; // 0x660 (1)
	char bCachedLocalBoundsUpToDate : 0; // 0x660 (1)
	char bForceMeshObjectUpdate : 0; // 0x661 (1)
	float CapsuleIndirectShadowMinVisibility; // 0x664 (4)
	struct Unknown CachedWorldSpaceBounds; // 0x678 (28)
	struct Unknown CachedWorldToLocalTransform; // 0x6A0 (64)

	void UnloadSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFC400>
	void UnHideBoneByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.UnHideBoneByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFC380>
	void TransformToBoneSpace(struct FName BoneName, struct Unknown InPosition, struct Unknown InRotation, struct Unknown& OutPosition, struct Unknown& OutRotation); // Function Engine.SkinnedMeshComponent.TransformToBoneSpace(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFC1C0>
	void TransformFromBoneSpace(struct FName BoneName, struct Unknown InPosition, struct Unknown InRotation, struct Unknown& OutPosition, struct Unknown& OutRotation); // Function Engine.SkinnedMeshComponent.TransformFromBoneSpace(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFC000>
	void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, char bShow, int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ShowMaterialSection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBEC0>
	void ShowAllMaterialSections(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ShowAllMaterialSections(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBE40>
	void SetVertexColorOverride_LinearColor(int32_t LODIndex, struct TArray<Unknown>& VertexColors); // Function Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBD50>
	char SetSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.SetSkinWeightProfile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBCC0>
	void SetSkinWeightOverride(int32_t LODIndex, struct TArray<Unknown>& SkinWeights); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBBD0>
	void SetSkeletalMesh(struct Unknown NewMesh, char b); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBB00>
	void SetRenderStatic(char bNewValue); // Function Engine.SkinnedMeshComponent.SetRenderStatic(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFBA70>
	void SetPhysicsAsset(struct Unknown NewPhysicsAsset, char bForceReInit); // Function Engine.SkinnedMeshComponent.SetPhysicsAsset(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB9A0>
	void SetMinLOD(int32_t InNewMinLOD); // Function Engine.SkinnedMeshComponent.SetMinLOD(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB920>
	void SetMasterPoseComponent(struct Unknown NewMasterBoneComponent, char bForceUpdate); // Function Engine.SkinnedMeshComponent.SetMasterPoseComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB850>
	void SetForcedLOD(int32_t InNewForcedLOD); // Function Engine.SkinnedMeshComponent.SetForcedLOD(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB7D0>
	void SetCastCapsuleIndirectShadow(char bNewValue); // Function Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB740>
	void SetCastCapsuleDirectShadow(char bNewValue); // Function Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB6B0>
	void SetCapsuleIndirectShadowMinVisibility(float NewValue); // Function Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB630>
	char IsUsingSkinWeightProfile(); // Function Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB600>
	char IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex); // Function Engine.SkinnedMeshComponent.IsMaterialSectionShown(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB540>
	char IsBoneHiddenByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.IsBoneHiddenByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB4B0>
	void HideBoneByName(struct FName BoneName, char PhysBodyOption); // Function Engine.SkinnedMeshComponent.HideBoneByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB2D0>
	char GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName BoneName, float& OutTwistAngle, float& OutSwingAngle); // Function Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB1B0>
	struct FName GetSocketBoneName(struct FName InSocketName); // Function Engine.SkinnedMeshComponent.GetSocketBoneName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB080>
	struct Unknown GetRefPosePosition(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetRefPosePosition(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAFE0>
	struct FName GetParentBone(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetParentBone(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAF50>
	int32_t GetNumLODs(); // Function Engine.SkinnedMeshComponent.GetNumLODs(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAF20>
	int32_t GetNumBones(); // Function Engine.SkinnedMeshComponent.GetNumBones(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAEF0>
	int32_t GetForcedLOD(); // Function Engine.SkinnedMeshComponent.GetForcedLOD(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAEC0>
	struct Unknown GetDeltaTransformFromRefPose(struct FName BoneName, struct FName BaseName); // Function Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFADC0>
	struct FName GetCurrentSkinWeightProfileName(); // Function Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFADA0>
	struct FName GetBoneName(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetBoneName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAD10>
	int32_t GetBoneIndex(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetBoneIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAC80>
	struct FName FindClosestBone_K2(struct Unknown TestLocation, struct Unknown& BoneLocation, float IgnoreScale, char b); // Function Engine.SkinnedMeshComponent.FindClosestBone_K2(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAAF0>
	void ClearVertexColorOverride(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ClearVertexColorOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAA70>
	void ClearSkinWeightProfile(); // Function Engine.SkinnedMeshComponent.ClearSkinWeightProfile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFAA50>
	void ClearSkinWeightOverride(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ClearSkinWeightOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFA9D0>
	char BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName); // Function Engine.SkinnedMeshComponent.BoneIsChildOf(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFA910>
};

// Class Engine.StreamableRenderAsset
struct UStreamableRenderAsset : Object {
	double ForceMipLevelsToBeResidentTimestamp; // 0x28 (8)
	int32_t NumCinematicMipLevels; // 0x30 (4)
	int32_t StreamingIndex; // 0x34 (4)
	int32_t CachedCombinedLODBias; // 0x38 (4)
	char CachedNumResidentLODs; // 0x3C (1)
	char bCachedReadyForStreaming : 0; // 0x3D (1)
	char NeverStream : 0; // 0x3D (1)
	char bGlobalForceMipLevelsToBeResident : 0; // 0x3D (1)
	char bIsStreamable : 0; // 0x3D (1)
	char bHasStreamingUpdatePending : 0; // 0x3D (1)
	char bForceMiplevelsToBeResident : 0; // 0x3D (1)
	char bIgnoreStreamingMipBias : 0; // 0x3D (1)
	char bUseCinematicMipLev : 0; // 0x3D (1)
};

// Class Engine.SkeletalMesh
struct USkeletalMesh : UStreamableRenderAsset {
	struct Unknown Skeleton; // 0x60 (8)
	struct Unknown ImportedBounds; // 0x68 (28)
	struct Unknown ExtendedBounds; // 0x84 (28)
	struct Unknown PositiveBoundsExtension; // 0xA0 (12)
	struct Unknown NegativeBoundsExtension; // 0xAC (12)
	struct TArray<Unknown> Materials; // 0xB8 (16)
	struct TArray<Unknown> SkelMirrorTable; // 0xC8 (16)
	struct TArray<Unknown> LODInfo; // 0xD8 (16)
	struct Unknown MinLOD; // 0x138 (4)
	struct Unknown DisableBelowMinLodStripping; // 0x13C (1)
	char SkelMirrorAxis; // 0x13D (1)
	char SkelMirrorFlipAxis; // 0x13E (1)
	char bUseFullPrecisionUVs : 0; // 0x13F (1)
	char bUseHighPrecisionTangentBasis : 0; // 0x13F (1)
	char bHasBeenSimplified : 0; // 0x13F (1)
	char bHasVertexColors : 0; // 0x13F (1)
	char bEnablePerPolyCollision : 0; // 0x13F (1)
	struct Unknown BodySetup; // 0x140 (8)
	struct Unknown PhysicsAsset; // 0x148 (8)
	struct Unknown ShadowPhysicsAsset; // 0x150 (8)
	struct TArray<Unknown> NodeMappingData; // 0x158 (16)
	struct TArray<Unknown> MorphTargets; // 0x168 (16)
	struct Unknown* PostProcessAnimBlueprint; // 0x2F0 (8)
	struct TArray<Unknown> MeshClothingAssets; // 0x2F8 (16)
	struct Unknown SamplingInfo; // 0x308 (48)
	struct TArray<Unknown> AssetUserData; // 0x338 (16)
	struct TArray<Unknown> Sockets; // 0x350 (16)
	struct TArray<Unknown> SkinWeightProfiles; // 0x370 (16)

	void SetLODSettings(struct Unknown InLODSettings); // Function Engine.SkeletalMesh.SetLODSettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16B4710>
	int32_t NumSockets(); // Function Engine.SkeletalMesh.NumSockets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE4C0>
	struct TArray<Unknown> K2_GetAllMorphTargetNames(); // Function Engine.SkeletalMesh.K2_GetAllMorphTargetNames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE3E0>
	char IsSectionUsingCloth(int32_t InSectionIndex, char bCheckCorrespondingSections); // Function Engine.SkeletalMesh.IsSectionUsingCloth(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE320>
	struct Unknown GetSocketByIndex(int32_t Index); // Function Engine.SkeletalMesh.GetSocketByIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE290>
	struct Unknown GetNodeMappingContainer(struct Unknown SourceAsset); // Function Engine.SkeletalMesh.GetNodeMappingContainer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE200>
	struct Unknown GetImportedBounds(); // Function Engine.SkeletalMesh.GetImportedBounds(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE1B0>
	struct Unknown GetBounds(); // Function Engine.SkeletalMesh.GetBounds(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEE160>
	struct Unknown FindSocketInfo(struct FName InSocketName, struct Unknown& OutTransform, int32_t& OutBoneIndex, int32_t& OutIndex); // Function Engine.SkeletalMesh.FindSocketInfo(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEDF90>
	struct Unknown FindSocketAndIndex(struct FName InSocketName, int32_t& OutIndex); // Function Engine.SkeletalMesh.FindSocketAndIndex(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEDEC0>
	struct Unknown FindSocket(struct FName InSocketName); // Function Engine.SkeletalMesh.FindSocket(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DEDE30>
};

// Class Engine.StaticMeshActor
struct AStaticMeshActor : UActor {
	struct Unknown StaticMeshComponent; // 0x310 (8)
	char bStaticMeshReplicateMovement : 0; // 0x318 (1)
	enum class Unknow NavigationGeometryGatheringMode; // 0x319 (1)

	void SetMobility(char InMobility); // Function Engine.StaticMeshActor.SetMobility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CF50>
};

// Class Engine.Texture
struct UTexture : UStreamableRenderAsset {
	struct Unknown LightingGuid; // 0x48 (16)
	int32_t LODBias; // 0x58 (4)
	char CompressionSettings; // 0x5C (1)
	char Filter; // 0x5D (1)
	enum class Unknow MipLoadOptions; // 0x5E (1)
	char LODGroup; // 0x5F (1)
	char S : 0; // 0x60 (1)
	char bNoTiling : 0; // 0x60 (1)
	char VirtualTextureStreaming : 0; // 0x60 (1)
	char CompressionYCoCg : 0; // 0x60 (1)
	char bAsyncResourceReleaseHasBeenStarted : 0; // 0x60 (1)
	struct TArray<Unknown> AssetUserData; // 0x68 (16)
};

// Class Engine.Texture2DDynamic
struct UTexture2DDynamic : UTexture {
	char Format; // 0xC0 (1)
};

// Class Engine.HUD
struct AHUD : UActor {
	struct Unknown PlayerOwner; // 0x310 (8)
	char bLostFocusPaused : 0; // 0x318 (1)
	char bShowHUD : 0; // 0x318 (1)
	char bShowDebugInfo : 0; // 0x318 (1)
	int32_t CurrentTargetIndex; // 0x31C (4)
	char bShowHitBoxDebugInfo : 0; // 0x320 (1)
	char bShowOverlays : 0; // 0x320 (1)
	char bEnableDebugTextShadow : 0; // 0x320 (1)
	struct TArray<Unknown> PostRenderedActors; // 0x328 (16)
	struct TArray<Unknown> DebugDisplay; // 0x340 (16)
	struct TArray<Unknown> ToggledDebugCategories; // 0x350 (16)
	struct Unknown Canvas; // 0x360 (8)
	struct Unknown DebugCanvas; // 0x368 (8)
	struct TArray<Unknown> DebugTextList; // 0x370 (16)
	struct Unknown* ShowDebugTargetDesiredClass; // 0x380 (8)
	struct Unknown ShowDebugTargetActor; // 0x388 (8)

	void ShowHUD(); // Function Engine.HUD.ShowHUD(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
	void ShowDebugToggleSubCategory(struct FName Category); // Function Engine.HUD.ShowDebugToggleSubCategory(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFC350>
	void ShowDebugForReticleTargetToggle(struct Unknown* DesiredClass); // Function Engine.HUD.ShowDebugForReticleTargetToggle(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFC2D0>
	void ShowDebug(struct FName DebugType); // Function Engine.HUD.ShowDebug(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E77990>
	void RemoveDebugText(struct Unknown SrcActor, char bLeaveDurationText); // Function Engine.HUD.RemoveDebugText(Final|Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFC0B0>
	void RemoveAllDebugStrings(); // Function Engine.HUD.RemoveAllDebugStrings(Final|Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFC090>
	void ReceiveHitBoxRelease(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxRelease(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveHitBoxEndCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxEndCursorOver(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveHitBoxClick(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxClick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveHitBoxBeginCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function Engine.HUD.ReceiveDrawHUD(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown Project(struct Unknown Location); // Function Engine.HUD.Project(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFBFE0>
	void PreviousDebugTarget(); // Function Engine.HUD.PreviousDebugTarget(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1FAC130>
	void NextDebugTarget(); // Function Engine.HUD.NextDebugTarget(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCC90>
	void GetTextSize(struct FString Text, float& OutWidth, float& OutHeight, struct Unknown Font, float Scale); // Function Engine.HUD.GetTextSize(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFBCE0>
	struct Unknown GetOwningPlayerController(); // Function Engine.HUD.GetOwningPlayerController(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16D1E60>
	struct Unknown GetOwningPawn(); // Function Engine.HUD.GetOwningPawn(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFBCB0>
	void GetActorsInSelectionRectangle(struct Unknown* ClassFilter, struct Unknown& FirstPoint, struct Unknown& SecondPoint, struct TArray<Unknown>& OutActors, char bIncludeNonCollidingComponents, char bActorMustBeFullyEnclosed); // Function Engine.HUD.GetActorsInSelectionRectangle(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFBAA0>
	void DrawTextureSimple(struct Unknown Texture, float ScreenX, float ScreenY, float Scale, char bScalePosition); // Function Engine.HUD.DrawTextureSimple(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFB910>
	void DrawTexture(struct Unknown Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct Unknown TintColor, char BlendMode, float Scale, char bScalePosition, float Rotation, struct Unknown RotPivot); // Function Engine.HUD.DrawTexture(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFB4F0>
	void DrawText(struct FString Text, struct Unknown TextColor, float ScreenX, float ScreenY, struct Unknown Font, float Scale, char bScalePosition); // Function Engine.HUD.DrawText(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFB2C0>
	void DrawRect(struct Unknown RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH); // Function Engine.HUD.DrawRect(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFB110>
	void DrawMaterialTriangle(struct Unknown Material, struct Unknown V0_Pos, struct Unknown V1_Pos, struct Unknown V2_Pos, struct Unknown V0_UV, struct Unknown V1_UV, struct Unknown V2_UV, struct Unknown V0_Color, struct Unknown V1_Color, struct Unknown V2_Color); // Function Engine.HUD.DrawMaterialTriangle(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFAE50>
	void DrawMaterialSimple(struct Unknown Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, char bScalePosition); // Function Engine.HUD.DrawMaterialSimple(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFAC50>
	void DrawMaterial(struct Unknown Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, char bScalePosition, float Rotation, struct Unknown RotPivot); // Function Engine.HUD.DrawMaterial(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFA8C0>
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, struct Unknown LineColor, float LineThickness); // Function Engine.HUD.DrawLine(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFA6E0>
	void Deproject(float ScreenX, float ScreenY, struct Unknown& WorldPosition, struct Unknown& WorldDirection); // Function Engine.HUD.Deproject(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFA4E0>
	void AddHitBox(struct Unknown Position, struct Unknown Size, struct FName InName, char bConsumesInput, int32_t Priority); // Function Engine.HUD.AddHitBox(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFA350>
	void AddDebugText(struct FString DebugText, struct Unknown SrcActor, float Duration, struct Unknown Offset, struct Unknown DesiredOffset, struct Unknown TextColor, char bSkipOverwriteCheck, char bAbsoluteLocation, char bKeepAttachedToActor, struct Unknown InFont, float FontScale, char bDrawShadow); // Function Engine.HUD.AddDebugText(Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF9FB0>
};

// Class Engine.Player
struct UPlayer : Object {
	struct Unknown PlayerController; // 0x30 (8)
	int32_t CurrentNetSpeed; // 0x38 (4)
	int32_t ConfiguredInternetSpeed; // 0x3C (4)
	int32_t ConfiguredLanSpeed; // 0x40 (4)
};

// Class Engine.MKNetConnectionEx
struct UMKNetConnectionEx : UPlayer {
	struct Unknown SelfNetConnection; // 0xB0 (8)
};

// Class Engine.NetConnection
struct UNetConnection : UMKNetConnectionEx {
	struct TArray<Unknown> Children; // 0xB8 (16)
	struct Unknown Driver; // 0xC8 (8)
	struct Unknown* PackageMapClass; // 0xD0 (8)
	struct Unknown PackageMap; // 0xD8 (8)
	struct TArray<Unknown> OpenChannels; // 0xE0 (16)
	struct TArray<Unknown> SentTemporaries; // 0xF0 (16)
	struct Unknown ViewTarget; // 0x100 (8)
	struct Unknown OwningActor; // 0x108 (8)
	int32_t MaxPacket; // 0x110 (4)
	char InternalAck : 0; // 0x114 (1)
	struct Unknown PlayerId; // 0x1D0 (40)
	double LastReceiveTime; // 0x240 (8)
	struct TArray<Unknown> ChannelsToTick; // 0x1580 (16)
};

// Class Engine.NetDriver
struct UNetDriver : Object {
	struct FString NetConnectionClassName; // 0x30 (16)
	struct FString ReplicationDriverClassName; // 0x40 (16)
	int32_t MaxDownloadSize; // 0x50 (4)
	char bClampListenServerTickRate : 0; // 0x54 (1)
	int32_t NetServerMaxTickRate; // 0x58 (4)
	int32_t MaxNetTickRate; // 0x5C (4)
	int32_t MaxInternetClientRate; // 0x60 (4)
	int32_t MaxClientRate; // 0x64 (4)
	float ServerTravelPause; // 0x68 (4)
	float SpawnPrioritySeconds; // 0x6C (4)
	float RelevantTimeout; // 0x70 (4)
	float KeepAliveTime; // 0x74 (4)
	float InitialConnectTimeout; // 0x78 (4)
	float ConnectionTimeout; // 0x7C (4)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80 (4)
	char bNoTimeouts : 0; // 0x84 (1)
	char bNeverApplyNetworkEmulationSettings : 0; // 0x85 (1)
	struct Unknown ServerConnection; // 0x88 (8)
	struct TArray<Unknown> ClientConnections; // 0x90 (16)
	int32_t RecentlyDisconnectedTrackingTime; // 0x100 (4)
	struct Unknown World; // 0x140 (8)
	struct Unknown WorldPackage; // 0x148 (8)
	struct Unknown* NetConnectionClass; // 0x170 (8)
	struct Unknown* ReplicationDriverClass; // 0x178 (8)
	struct FName NetDriverName; // 0x190 (8)
	struct TArray<Unknown> ChannelDefinitions; // 0x198 (16)
	struct TMap<Unknown, Unknown>Unknown ChannelDefinitionMap; // 0x1A8 (80)
	struct TArray<Unknown> ActorChannelPool; // 0x1F8 (16)
	float Time; // 0x210 (4)
	struct Unknown ReplicationDriver; // 0x6E8 (8)
};

// Class Engine.Engine
struct UEngine : Object {
	struct Unknown TinyFont; // 0x30 (8)
	struct Unknown TinyFontName; // 0x38 (24)
	struct Unknown SmallFont; // 0x50 (8)
	struct Unknown SmallFontName; // 0x58 (24)
	struct Unknown MediumFont; // 0x70 (8)
	struct Unknown MediumFontName; // 0x78 (24)
	struct Unknown LargeFont; // 0x90 (8)
	struct Unknown LargeFontName; // 0x98 (24)
	struct Unknown SubtitleFont; // 0xB0 (8)
	struct Unknown SubtitleFontName; // 0xB8 (24)
	struct TArray<Unknown> AdditionalFonts; // 0xD0 (16)
	struct TArray<Unknown> AdditionalFontNames; // 0xE8 (16)
	struct Unknown* ConsoleClass; // 0xF8 (8)
	struct Unknown ConsoleClassName; // 0x100 (24)
	struct Unknown* GameViewportClientClass; // 0x118 (8)
	struct Unknown GameViewportClientClassName; // 0x120 (24)
	struct Unknown* LocalPlayerClass; // 0x138 (8)
	struct Unknown LocalPlayerClassName; // 0x140 (24)
	struct Unknown* WorldSettingsClass; // 0x158 (8)
	struct Unknown WorldSettingsClassName; // 0x160 (24)
	struct Unknown NavigationSystemClassName; // 0x178 (24)
	struct Unknown* NavigationSystemClass; // 0x190 (8)
	struct Unknown NavigationSystemConfigClassName; // 0x198 (24)
	struct Unknown* NavigationSystemConfigClass; // 0x1B0 (8)
	struct Unknown AvoidanceManagerClassName; // 0x1B8 (24)
	struct Unknown* AvoidanceManagerClass; // 0x1D0 (8)
	struct Unknown* PhysicsCollisionHandlerClass; // 0x1D8 (8)
	struct Unknown PhysicsCollisionHandlerClassName; // 0x1E0 (24)
	struct Unknown GameUserSettingsClassName; // 0x1F8 (24)
	struct Unknown* GameUserSettingsClass; // 0x210 (8)
	struct Unknown AIControllerClassName; // 0x218 (24)
	struct Unknown GameUserSettings; // 0x230 (8)
	struct Unknown* LevelScriptActorClass; // 0x238 (8)
	struct Unknown LevelScriptActorClassName; // 0x240 (24)
	struct Unknown DefaultBlueprintBaseClassName; // 0x258 (24)
	struct Unknown GameSingletonClassName; // 0x270 (24)
	struct Unknown GameSingleton; // 0x288 (8)
	struct Unknown AssetManagerClassName; // 0x290 (24)
	struct Unknown AssetManager; // 0x2A8 (8)
	struct Unknown DefaultTexture; // 0x2B0 (8)
	struct Unknown DefaultTextureName; // 0x2B8 (24)
	struct Unknown DefaultDiffuseTexture; // 0x2D0 (8)
	struct Unknown DefaultDiffuseTextureName; // 0x2D8 (24)
	struct Unknown DefaultBSPVertexTexture; // 0x2F0 (8)
	struct Unknown DefaultBSPVertexTextureName; // 0x2F8 (24)
	struct Unknown HighFrequencyNoiseTexture; // 0x310 (8)
	struct Unknown HighFrequencyNoiseTextureName; // 0x318 (24)
	struct Unknown DefaultBokehTexture; // 0x330 (8)
	struct Unknown DefaultBokehTextureName; // 0x338 (24)
	struct Unknown DefaultBloomKernelTexture; // 0x350 (8)
	struct Unknown DefaultBloomKernelTextureName; // 0x358 (24)
	struct Unknown WireframeMaterial; // 0x370 (8)
	struct FString WireframeMaterialName; // 0x378 (16)
	struct Unknown DebugMeshMaterial; // 0x388 (8)
	struct Unknown DebugMeshMaterialName; // 0x390 (24)
	struct Unknown EmissiveMeshMaterial; // 0x3A8 (8)
	struct Unknown EmissiveMeshMaterialName; // 0x3B0 (24)
	struct Unknown LevelColorationLitMaterial; // 0x3C8 (8)
	struct FString LevelColorationLitMaterialName; // 0x3D0 (16)
	struct Unknown LevelColorationUnlitMaterial; // 0x3E0 (8)
	struct FString LevelColorationUnlitMaterialName; // 0x3E8 (16)
	struct Unknown LightingTexelDensityMaterial; // 0x3F8 (8)
	struct FString LightingTexelDensityName; // 0x400 (16)
	struct Unknown ShadedLevelColorationLitMaterial; // 0x410 (8)
	struct FString ShadedLevelColorationLitMaterialName; // 0x418 (16)
	struct Unknown ShadedLevelColorationUnlitMaterial; // 0x428 (8)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x430 (16)
	struct Unknown RemoveSurfaceMaterial; // 0x440 (8)
	struct Unknown RemoveSurfaceMaterialName; // 0x448 (24)
	struct Unknown VertexColorMaterial; // 0x460 (8)
	struct FString VertexColorMaterialName; // 0x468 (16)
	struct Unknown VertexColorViewModeMaterial_ColorOnly; // 0x478 (8)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x480 (16)
	struct Unknown VertexColorViewModeMaterial_AlphaAsColor; // 0x490 (8)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x498 (16)
	struct Unknown VertexColorViewModeMaterial_RedOnly; // 0x4A8 (8)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x4B0 (16)
	struct Unknown VertexColorViewModeMaterial_GreenOnly; // 0x4C0 (8)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x4C8 (16)
	struct Unknown VertexColorViewModeMaterial_BlueOnly; // 0x4D8 (8)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x4E0 (16)
	struct Unknown DebugEditorMaterialName; // 0x4F0 (24)
	struct Unknown ConstraintLimitMaterial; // 0x508 (8)
	struct Unknown ConstraintLimitMaterialX; // 0x510 (8)
	struct Unknown ConstraintLimitMaterialXAxis; // 0x518 (8)
	struct Unknown ConstraintLimitMaterialY; // 0x520 (8)
	struct Unknown ConstraintLimitMaterialYAxis; // 0x528 (8)
	struct Unknown ConstraintLimitMaterialZ; // 0x530 (8)
	struct Unknown ConstraintLimitMaterialZAxis; // 0x538 (8)
	struct Unknown ConstraintLimitMaterialPrismatic; // 0x540 (8)
	struct Unknown InvalidLightmapSettingsMaterial; // 0x548 (8)
	struct Unknown InvalidLightmapSettingsMaterialName; // 0x550 (24)
	struct Unknown PreviewShadowsIndicatorMaterial; // 0x568 (8)
	struct Unknown PreviewShadowsIndicatorMaterialName; // 0x570 (24)
	struct Unknown ArrowMaterial; // 0x588 (8)
	struct Unknown ArrowMaterialYellow; // 0x590 (8)
	struct Unknown ArrowMaterialName; // 0x598 (24)
	struct Unknown LightingOnlyBrightness; // 0x5B0 (16)
	struct TArray<Unknown> ShaderComplexityColors; // 0x5C0 (16)
	struct TArray<Unknown> QuadComplexityColors; // 0x5D0 (16)
	struct TArray<Unknown> LightComplexityColors; // 0x5E0 (16)
	struct TArray<Unknown> StationaryLightOverlapColors; // 0x5F0 (16)
	struct TArray<Unknown> LODColorationColors; // 0x600 (16)
	struct TArray<Unknown> HLODColorationColors; // 0x610 (16)
	struct TArray<Unknown> StreamingAccuracyColors; // 0x620 (16)
	float MaxPixelShaderAdditiveComplexityCount; // 0x630 (4)
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x634 (4)
	float MinLightMapDensity; // 0x638 (4)
	float IdealLightMapDensity; // 0x63C (4)
	float MaxLightMapDensity; // 0x640 (4)
	char b : 0; // 0x644 (1)
	float RenderLightMapDensityGrayscaleScale; // 0x648 (4)
	float RenderLightMapDensityColorScale; // 0x64C (4)
	struct Unknown LightMapDensityVertexMappedColor; // 0x650 (16)
	struct Unknown LightMapDensitySelectedColor; // 0x660 (16)
	struct TArray<Unknown> StatColorMappings; // 0x670 (16)
	struct Unknown DefaultPhysMaterial; // 0x680 (8)
	struct Unknown DefaultPhysMaterialName; // 0x688 (24)
	struct TArray<Unknown> ActiveGameNameRedirects; // 0x6A0 (16)
	struct TArray<Unknown> ActiveClassRedirects; // 0x6B0 (16)
	struct TArray<Unknown> ActivePluginRedirects; // 0x6C0 (16)
	struct TArray<Unknown> ActiveStructRedirects; // 0x6D0 (16)
	struct Unknown PreIntegratedSkinBRDFTexture; // 0x6E0 (8)
	struct Unknown PreIntegratedSkinBRDFTextureName; // 0x6E8 (24)
	struct Unknown BlueNoiseTexture; // 0x700 (8)
	struct Unknown BlueNoiseTextureName; // 0x708 (24)
	struct Unknown MiniFontTexture; // 0x720 (8)
	struct Unknown MiniFontTextureName; // 0x728 (24)
	struct Unknown WeightMapPlaceholderTexture; // 0x740 (8)
	struct Unknown WeightMapPlaceholderTextureName; // 0x748 (24)
	struct Unknown LightMapDensityTexture; // 0x760 (8)
	struct Unknown LightMapDensityTextureName; // 0x768 (24)
	struct Unknown GameViewport; // 0x788 (8)
	struct TArray<Unknown> DeferredCommands; // 0x790 (16)
	int32_t TickCycles; // 0x7A0 (4)
	int32_t GameCycles; // 0x7A4 (4)
	int32_t ClientCycles; // 0x7A8 (4)
	float NearClipPlane; // 0x7AC (4)
	float EditorNearClipPlane; // 0x7B0 (4)
	char bUseCustomAudioModule : 0; // 0x7B4 (1)
	char bHardwareSurveyEnabled : 0; // 0x7B8 (1)
	char bSubtitlesEnabled : 0; // 0x7B8 (1)
	char bSubtitlesForcedOff : 0; // 0x7B8 (1)
	int32_t MaximumLoopIterationCount; // 0x7BC (4)
	char bCanBlueprintsTickByDefault : 0; // 0x7C0 (1)
	char bOptimizeAnimBlueprintMemberVariableAccess : 0; // 0x7C0 (1)
	char bAllowMultiThreadedAnimationUpdate : 0; // 0x7C0 (1)
	char bEnableEditorPSysRealtimeLOD : 0; // 0x7C0 (1)
	char bSmoothFrameRate : 0; // 0x7C0 (1)
	char bUseFixedFrameRate : 0; // 0x7C0 (1)
	float FixedFrameRate; // 0x7C4 (4)
	struct Unknown SmoothedFrameRateRange; // 0x7C8 (16)
	struct Unknown CustomTimeStep; // 0x7D8 (8)
	struct Unknown CustomTimeStepClassName; // 0x800 (24)
	struct Unknown TimecodeProvider; // 0x818 (8)
	struct Unknown TimecodeProviderClassName; // 0x840 (24)
	char bGenerateDefaultTimecode : 0; // 0x858 (1)
	struct Unknown GenerateDefaultTimecodeFrameRate; // 0x85C (8)
	float GenerateDefaultTimecodeFrameDelay; // 0x864 (4)
	char bCheckForMultiplePawnsSpawnedInAFrame : 0; // 0x868 (1)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x86C (4)
	char bShouldGenerateLowQualityLightmaps : 0; // 0x870 (1)
	struct Unknown C_WorldBox; // 0x874 (4)
	struct Unknown C_BrushWire; // 0x878 (4)
	struct Unknown C_AddWire; // 0x87C (4)
	struct Unknown C_SubtractWire; // 0x880 (4)
	struct Unknown C_SemiSolidWire; // 0x884 (4)
	struct Unknown C_NonSolidWire; // 0x888 (4)
	struct Unknown C_WireBackground; // 0x88C (4)
	struct Unknown C_ScaleBoxHi; // 0x890 (4)
	struct Unknown C_VolumeCollision; // 0x894 (4)
	struct Unknown C_BSPCollision; // 0x898 (4)
	struct Unknown C_OrthoBackground; // 0x89C (4)
	struct Unknown C_Volume; // 0x8A0 (4)
	struct Unknown C_BrushShape; // 0x8A4 (4)
	float StreamingDistanceFactor; // 0x8A8 (4)
	struct Unknown GameScreenshotSaveDirectory; // 0x8B0 (16)
	enum class Unknow TransitionType; // 0x8C0 (1)
	struct FString TransitionDescription; // 0x8C8 (16)
	struct FString TransitionGameMode; // 0x8D8 (16)
	float MeshLODRange; // 0x8E8 (4)
	char bAllowMatureLanguage : 0; // 0x8EC (1)
	float CameraRotationThreshold; // 0x8F0 (4)
	float CameraTranslationThreshold; // 0x8F4 (4)
	float PrimitiveProbablyVisibleTime; // 0x8F8 (4)
	float MaxOcclusionPixelsFraction; // 0x8FC (4)
	char bPauseOnLossOfFocus : 0; // 0x900 (1)
	int32_t MaxParticleResize; // 0x904 (4)
	int32_t MaxParticleResizeWarn; // 0x908 (4)
	struct TArray<Unknown> PendingDroppedNotes; // 0x910 (16)
	float NetClientTicksPerSecond; // 0x920 (4)
	float DisplayGamma; // 0x924 (4)
	float MinDesiredFrameRate; // 0x928 (4)
	struct Unknown DefaultSelectedMaterialColor; // 0x92C (16)
	struct Unknown SelectedMaterialColor; // 0x93C (16)
	struct Unknown SelectionOutlineColor; // 0x94C (16)
	struct Unknown SubduedSelectionOutlineColor; // 0x95C (16)
	struct Unknown SelectedMaterialColorOverride; // 0x96C (16)
	char bIsOverridingSelectedColor : 0; // 0x97C (1)
	char bEnableOnScreenDebugMessages : 0; // 0x980 (1)
	char bEnableOnScreenDebugMessagesDisplay : 0; // 0x980 (1)
	char bSuppressMapWarnings : 0; // 0x980 (1)
	char bDisableAILogging : 0; // 0x980 (1)
	uint32_t bEnableVisualLogRecordingOnStart; // 0x984 (4)
	int32_t ScreenSaverInhibitorSemaphore; // 0x98C (4)
	char bLockReadOnlyLevels : 0; // 0x990 (1)
	struct FString ParticleEventManagerClass; // 0x998 (16)
	float SelectionHighlightIntensity; // 0x9A8 (4)
	float BSPSelectionHighlightIntensity; // 0x9AC (4)
	float SelectionHighlightIntensityBillboards; // 0x9B0 (4)
	struct TArray<Unknown> NetDriverDefinitions; // 0xC00 (16)
	struct TArray<Unknown> ServerActors; // 0xC10 (16)
	struct TArray<Unknown> RuntimeServerActors; // 0xC20 (16)
	float NetErrorLogInterval; // 0xC30 (4)
	char bStartedLoadMapMovie : 0; // 0xC34 (1)
	int32_t NextWorldContextHandle; // 0xC50 (4)
};

// Class Engine.LocalPlayer
struct ULocalPlayer : UPlayer {
	struct Unknown ViewportClient; // 0x70 (8)
	char AspectRatioAxisConstraint; // 0x94 (1)
	struct Unknown* PendingLevelPlayerControllerClass; // 0x98 (8)
	char bSentSplitJoin : 0; // 0xA0 (1)
	int32_t ControllerId; // 0xB8 (4)
};

// Class Engine.SkeletalMeshComponent
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct Unknown* AnimBlueprintGeneratedClass; // 0x700 (8)
	struct Unknown* AnimClass; // 0x708 (8)
	struct Unknown AnimScriptInstance; // 0x710 (8)
	struct Unknown PostprocessAnimInstance; // 0x718 (8)
	struct Unknown AnimationData; // 0x720 (24)
	struct Unknown RootBoneTranslation; // 0x748 (12)
	struct Unknown LineCheckBoundsScale; // 0x754 (12)
	struct TArray<Unknown> LinkedInstances; // 0x780 (16)
	struct TArray<Unknown> CachedBoneSpaceTransforms; // 0x790 (16)
	struct TArray<Unknown> CachedComponentSpaceTransforms; // 0x7A0 (16)
	float GlobalAnimRateScale; // 0x7D0 (4)
	char KinematicBonesUpdateType; // 0x7D4 (1)
	char PhysicsTransformUpdateMode; // 0x7D5 (1)
	char AnimationMode; // 0x7DD (1)
	char bDisablePostProcessBlueprint : 0; // 0x7DF (1)
	char bUpdateOverlapsOnAnimationFinalize : 0; // 0x7DF (1)
	char bHasValidBodies : 0; // 0x7DF (1)
	char bBlendPhysics : 0; // 0x7DF (1)
	char bEnablePhysicsOnDedicatedServer : 0; // 0x7DF (1)
	char bUpdateJointsFromAnimation : 0; // 0x7E0 (1)
	char bDisableClothSimulation : 0; // 0x7E0 (1)
	char bDisableRigidBodyAnimNode : 0; // 0x7E0 (1)
	char bAllowAnimCurveEvaluation : 0; // 0x7E0 (1)
	char bDisableAnimCurves : 0; // 0x7E0 (1)
	char bCollideWithEnvironment : 0; // 0x7E1 (1)
	char bCollideWithAttachedChildren : 0; // 0x7E1 (1)
	char bLocalSpaceSimulation : 0; // 0x7E1 (1)
	char b : 0; // 0x7E1 (1)
	char bDeferKinematicBoneUpdate : 0; // 0x7E1 (1)
	char bNoSkeletonUpdate : 0; // 0x7E1 (1)
	char bPauseAnims : 0; // 0x7E1 (1)
	char bUseRefPoseOnInitAnim : 0; // 0x7E2 (1)
	char bEnablePerPolyCollision : 0; // 0x7E2 (1)
	char bForceRefpose : 0; // 0x7E2 (1)
	char bOnlyAllowAutonomousTickPose : 0; // 0x7E2 (1)
	char bIsAutonomousTickPose : 0; // 0x7E2 (1)
	char bOldForceRefPose : 0; // 0x7E2 (1)
	char bShowPrePhysBones : 0; // 0x7E2 (1)
	char b : 0; // 0x7E2 (1)
	char bAnimTreeInitialised : 0; // 0x7E3 (1)
	char bIncludeComponentLocationIntoBounds : 0; // 0x7E3 (1)
	char bEnableLineCheckWithBounds : 0; // 0x7E3 (1)
	char bUseBendingElements : 0; // 0x7E3 (1)
	char bUseTetrahedralConstraints : 0; // 0x7E3 (1)
	char bUseThinShellVolumeConstraints : 0; // 0x7E3 (1)
	char bUseSelfCollisions : 0; // 0x7E3 (1)
	char bUseContinuousCollisionDetection : 0; // 0x7E3 (1)
	char bPropagateCurvesToSlaves : 0; // 0x7E4 (1)
	char bSkipKinematicUpdateWhenInterpolating : 0; // 0x7E4 (1)
	char bSkipBoundsUpdateWhenInterpolating : 0; // 0x7E4 (1)
	char bNeedsQueuedAnimEventsDispatched : 0; // 0x7E4 (1)
	uint16_t CachedAnimCurveUidVersion; // 0x7E6 (2)
	enum class Unknow MassMode; // 0x7E8 (1)
	float UniformMass; // 0x7EC (4)
	float TotalMass; // 0x7F0 (4)
	float Density; // 0x7F4 (4)
	float MinPerParticleMass; // 0x7F8 (4)
	float ClothBlendWeight; // 0x7FC (4)
	float EdgeStiffness; // 0x800 (4)
	float BendingStiffness; // 0x804 (4)
	float AreaStiffness; // 0x808 (4)
	float VolumeStiffness; // 0x80C (4)
	float StrainLimitingStiffness; // 0x810 (4)
	float ShapeTargetStiffness; // 0x814 (4)
	struct TArray<Unknown> DisallowedAnimCurves; // 0x818 (16)
	struct Unknown BodySetup; // 0x828 (8)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x838 (16)
	struct Unknown* ClothingSimulationFactory; // 0x848 (8)
	float TeleportDistanceThreshold; // 0x918 (4)
	float TeleportRotationThreshold; // 0x91C (4)
	uint32_t LastPoseTickFrame; // 0x928 (4)
	struct Unknown ClothingInteractor; // 0x980 (8)
	struct FMulticastInlineDelegate OnAnimInitialized; // 0xA50 (16)

	void UnlinkAnimClassLayers(struct Unknown* InClass); // Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3F90>
	void UnbindClothFromMasterPoseComponent(char b); // Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3F00>
	void ToggleDisablePostProcessBlueprint(); // Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3EE0>
	void TermBodiesBelow(struct FName ParentBoneName); // Function Engine.SkeletalMeshComponent.TermBodiesBelow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3E60>
	void SuspendClothingSimulation(); // Function Engine.SkeletalMeshComponent.SuspendClothingSimulation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3E40>
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3E20>
	void SnapshotPose(struct Unknown& Snapshot); // Function Engine.SkeletalMeshComponent.SnapshotPose(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3D50>
	void SetUpdateAnimationInEditor(char NewUpdateState); // Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CBC0>
	void SetTeleportRotationThreshold(float threshold); // Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3CD0>
	void SetTeleportDistanceThreshold(float threshold); // Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3C50>
	void SetPosition(float InPos, char bFireNotifies); // Function Engine.SkeletalMeshComponent.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3B80>
	void SetPlayRate(float Rate); // Function Engine.SkeletalMeshComponent.SetPlayRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3B00>
	void SetPhysicsBlendWeight(float PhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3A80>
	void SetNotifyRigidBodyCollisionBelow(char bNewNotifyRigidBodyCollision, struct FName BoneName, char bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3970>
	void SetMorphTarget(struct FName MorphTargetName, float Value, char b); // Function Engine.SkeletalMeshComponent.SetMorphTarget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3860>
	void SetEnablePhysicsBlending(char bNewBlendPhysics); // Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF37D0>
	void SetEnableGravityOnAllBodiesBelow(char bEnableGravity, struct FName BoneName, char bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF36C0>
	void SetEnableBodyGravity(char bEnableGravity, struct FName BoneName); // Function Engine.SkeletalMeshComponent.SetEnableBodyGravity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3600>
	void SetDisablePostProcessBlueprint(char bInDisablePostProcess); // Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3570>
	void SetDisableAnimCurves(char bInDisableAnimCurves); // Function Engine.SkeletalMeshComponent.SetDisableAnimCurves(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF34E0>
	void SetConstraintProfileForAll(struct FName ProfileName, char bDefaultIfNotFound); // Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3410>
	void SetConstraintProfile(struct FName JointName, struct FName ProfileName, char bDefaultIfNotFound); // Function Engine.SkeletalMeshComponent.SetConstraintProfile(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3300>
	void SetClothMaxDistanceScale(float Scale); // Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3280>
	void SetBodyNotifyRigidBodyCollision(char bNewNotifyRigidBodyCollision, struct FName BoneName); // Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF31B0>
	void SetAnimClass(struct Unknown* NewClass); // Function Engine.SkeletalMeshComponent.SetAnimClass(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3020>
	void SetAnimationMode(char InAnimationMode); // Function Engine.SkeletalMeshComponent.SetAnimationMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF3130>
	void SetAnimation(struct Unknown NewAnimToPlay); // Function Engine.SkeletalMeshComponent.SetAnimation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF30B0>
	void SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle); // Function Engine.SkeletalMeshComponent.SetAngularLimits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2ED0>
	void SetAllowRigidBodyAnimNode(char bInAllow, char b); // Function Engine.SkeletalMeshComponent.SetAllowRigidBodyAnimNode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2D00>
	void SetAllowedAnimCurvesEvaluation(struct TArray<Unknown>& List, char bAllow); // Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2DD0>
	void SetAllowAnimCurveEvnt(char bInAllow); // Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvnt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2C70>
	void SetAllMotorsAngularVelocityDrive(char bEnableSwingDrive, char bEnableTwistDrive, char bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2B50>
	void SetAllMotorsAngularPositionDrive(char bEnableSwingDrive, char bEnableTwistDrive, char bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2A30>
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, char bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF28D0>
	void SetAllBodiesSimulatePhysics(char bNewSimulate); // Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2840>
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, char bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2770>
	void SetAllBodiesBelowSimulate(struct FName& InBoneName, char bNewSimulate, char bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulate(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2650>
	void SetAllBodiesBelowPhysicsBlendWeight(struct FName& InBoneName, float PhysicsBlendWeight, char bSkipCustomPhysicsType, char bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF24E0>
	void ResumeClothingSimulation(); // Function Engine.SkeletalMeshComponent.ResumeClothingSimulation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF24C0>
	void ResetClothTeleportMode(); // Function Engine.SkeletalMeshComponent.ResetClothTeleportMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF24A0>
	void ResetAnimInstanceDynamics(enum class Unknow InTeleportType); // Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2420>
	void ResetAllowedAnimCurveEvaluation(); // Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2400>
	void ResetAllBodiesSimulatePhysics(); // Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF23E0>
	void PlayAnimation(struct Unknown NewAnimToPlay, char bLooping); // Function Engine.SkeletalMeshComponent.PlayAnimation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2310>
	void Play(char bLooping); // Function Engine.SkeletalMeshComponent.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2280>
	void OverrideAnimationData(struct Unknown InAnimToPlay, char bIsLooping, char bIsPlaying, float Position, float PlayRate); // Function Engine.SkeletalMeshComponent.OverrideAnimationData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF20E0>
	void LinkAnimGraphByTag(struct FName InTag, struct Unknown* InClass); // Function Engine.SkeletalMeshComponent.LinkAnimGraphByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF2020>
	void LinkAnimClassLayers(struct Unknown* InClass); // Function Engine.SkeletalMeshComponent.LinkAnimClassLayers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1FA0>
	char K2_GetClosestPointOnPhysicsAsset(struct Unknown& WorldPosition, struct Unknown& ClosestWorldPosition, struct Unknown& Normal, struct FName& BoneName, float& Distance); // Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1DA0>
	char IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1D70>
	char IsClothingSimulationSuspended(); // Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1D40>
	char IsBodyGravityEnabled(struct FName BoneName); // Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1CB0>
	char HasValidAnimationInstance(); // Function Engine.SkeletalMeshComponent.HasValidAnimationInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1C80>
	float GetTeleportRotationThreshold(); // Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1C50>
	float GetTeleportDistanceThreshold(); // Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1C50>
	struct Unknown GetSkeletalCenterOfMass(); // Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1C10>
	struct Unknown GetPostProcessInstance(); // Function Engine.SkeletalMeshComponent.GetPostProcessInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E51470>
	float GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1BE0>
	float GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1BB0>
	float GetMorphTarget(struct FName MorphTargetName); // Function Engine.SkeletalMeshComponent.GetMorphTarget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1B10>
	struct Unknown GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1A80>
	struct Unknown GetLinkedAnimLayerInstanceByClass(struct Unknown* InClass); // Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF19F0>
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<Unknown>& OutLinkedInstances); // Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstancesByTag(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1900>
	struct Unknown GetLinkedAnimGraphInstanceByTag(struct FName InTag); // Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstanceByTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1870>
	char GetDisablePostProcessBlueprint(); // Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1840>
	char GetDisableAnimCurves(); // Function Engine.SkeletalMeshComponent.GetDisableAnimCurves(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1810>
	void GetCurrentJointAngles(struct FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle); // Function Engine.SkeletalMeshComponent.GetCurrentJointAngles(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1690>
	float GetClothMaxDistanceScale(); // Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1630>
	struct Unknown GetClothingSimulationInteractor(); // Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1660>
	float GetBoneMass(struct FName BoneName, char bScaleMass); // Function Engine.SkeletalMeshComponent.GetBoneMass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1560>
	struct Unknown GetAnimInstance(); // Function Engine.SkeletalMeshComponent.GetAnimInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1500>
	struct Unknown* GetAnimClass(); // Function Engine.SkeletalMeshComponent.GetAnimClass(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF14D0>
	char GetAnimationMode(); // Function Engine.SkeletalMeshComponent.GetAnimationMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1530>
	char GetAllowRigidBodyAnimNode(); // Function Engine.SkeletalMeshComponent.GetAllowRigidBodyAnimNode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1470>
	char GetAllowedAnimCurveEvaluate(); // Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF14A0>
	void ForceClothNextUpdateTeleportAndReset(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1450>
	void ForceClothNextUpdateTeleport(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1430>
	struct FName FindConstraintBoneName(int32_t ConstraintIndex); // Function Engine.SkeletalMeshComponent.FindConstraintBoneName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF13A0>
	void ClearMorphTargets(); // Function Engine.SkeletalMeshComponent.ClearMorphTargets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1380>
	void BreakConstraint(struct Unknown Impulse, struct Unknown HitLocation, struct FName InBoneName); // Function Engine.SkeletalMeshComponent.BreakConstraint(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1250>
	void BindClothToMasterPoseComponent(); // Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1230>
	void AllowAnimCurveEvaluation(struct FName NameOfCurve, char bAllow); // Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF1160>
	void AddImpulseToAllBodiesBelow(struct Unknown Impulse, struct FName BoneName, char bVelChange, char bIncludeSelf); // Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF0FF0>
	void AddForceToAllBodiesBelow(struct Unknown Force, struct FName BoneName, char bAccelChange, char bIncludeSelf); // Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF0E80>
	void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName& InBoneName, float AddPhysicsBlendWeight, char bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DF0D60>
};

// Class Engine.AnimInstance
struct UAnimInstance : Object {
	struct Unknown CurrentSkeleton; // 0x28 (8)
	char RootMotionMode; // 0x30 (1)
	char bUseMultiThreadedAnimationUpdate : 0; // 0x31 (1)
	char bUsingCopyPoseFromMesh : 0; // 0x31 (1)
	char b : 0; // 0x31 (1)
	char bPropagateNotifiesToLinkedInstances : 0; // 0x31 (1)
	char bQueueMontageEvents : 0; // 0x31 (1)
	struct FMulticastInlineDelegate OnMontageBlendingOut; // 0x38 (16)
	struct FMulticastInlineDelegate OnMontageStarted; // 0x48 (16)
	struct FMulticastInlineDelegate OnMontageEnded; // 0x58 (16)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68 (16)
	struct Unknown NotifyQueue; // 0x100 (112)
	struct TArray<Unknown> ActiveAnimNotifyState; // 0x170 (16)

	void UnlockAIResources(char bUnlockMovement, char UnlockAILogic); // Function Engine.AnimInstance.UnlockAIResources(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EDF3B0>
	void UnlinkAnimClassLayers(struct Unknown* InClass); // Function Engine.AnimInstance.UnlinkAnimClassLayers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C74530>
	struct Unknown TryGetPawnOwner(); // Function Engine.AnimInstance.TryGetPawnOwner(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C74500>
	void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName); // Function Engine.AnimInstance.StopSlotAnimation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C74430>
	void SnapshotPose(struct Unknown& Snapshot); // Function Engine.AnimInstance.SnapshotPose(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C74360>
	void SetRootMotionMode(char Value); // Function Engine.AnimInstance.SetRootMotionMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C742E0>
	void SetReceiveNotifiesFromLinkedInstances(char bSet); // Function Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C74250>
	void SetPropagateNotifiesToLinkedInstances(char bSet); // Function Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C741C0>
	void SetMorphTarget(struct FName MorphTargetName, float Value); // Function Engine.AnimInstance.SetMorphTarget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C740F0>
	void SavePoseSnapshot(struct FName SnapshotName); // Function Engine.AnimInstance.SavePoseSnapshot(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C74060>
	void ResetDynamics(enum class Unknow InTeleportType); // Function Engine.AnimInstance.ResetDynamics(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73FE0>
	struct Unknown PlaySlotAnimationAsDynamicMontage(struct Unknown Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73DA0>
	float PlaySlotAnimation(struct Unknown Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount); // Function Engine.AnimInstance.PlaySlotAnimation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73BE0>
	void Montage_StopGroupByName(float InBlendOutTime, struct FName GroupName); // Function Engine.AnimInstance.Montage_StopGroupByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73B10>
	void Montage_Stop(float InBlendOutTime, struct Unknown Montage); // Function Engine.AnimInstance.Montage_Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73A40>
	void Montage_SetPosition(struct Unknown Montage, float NewPosition); // Function Engine.AnimInstance.Montage_SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73970>
	void Montage_SetPlayRate(struct Unknown Montage, float NewPlayRate); // Function Engine.AnimInstance.Montage_SetPlayRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C738A0>
	void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct Unknown Montage); // Function Engine.AnimInstance.Montage_SetNextSection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C737A0>
	void Montage_Resume(struct Unknown Montage); // Function Engine.AnimInstance.Montage_Resume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73720>
	float Montage_Play(struct Unknown MontageToPlay, float InPlayRate, enum class Unknow ReturnValueType, float InTimeToStartMontageAt, char bStopAllMontages); // Function Engine.AnimInstance.Montage_Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73590>
	void Montage_Pause(struct Unknown Montage); // Function Engine.AnimInstance.Montage_Pause(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73510>
	void Montage_JumpToSectionsEnd(struct FName SectionName, struct Unknown Montage); // Function Engine.AnimInstance.Montage_JumpToSectionsEnd(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73450>
	void Montage_JumpToSection(struct FName SectionName, struct Unknown Montage); // Function Engine.AnimInstance.Montage_JumpToSection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73390>
	char Montage_IsPlaying(struct Unknown Montage); // Function Engine.AnimInstance.Montage_IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73300>
	char Montage_IsActive(struct Unknown Montage); // Function Engine.AnimInstance.Montage_IsActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73270>
	float Montage_GetPosition(struct Unknown Montage); // Function Engine.AnimInstance.Montage_GetPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C731D0>
	float Montage_GetPlayRate(struct Unknown Montage); // Function Engine.AnimInstance.Montage_GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73130>
	char Montage_GetIsStopped(struct Unknown Montage); // Function Engine.AnimInstance.Montage_GetIsStopped(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C730A0>
	struct FName Montage_GetCurrentSection(struct Unknown Montage); // Function Engine.AnimInstance.Montage_GetCurrentSection(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C73010>
	float Montage_GetBlendTime(struct Unknown Montage); // Function Engine.AnimInstance.Montage_GetBlendTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72F70>
	void LockAIResources(char bLockMovement, char LockAILogic); // Function Engine.AnimInstance.LockAIResources(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EDF3B0>
	void LinkAnimGraphByTag(struct FName InTag, struct Unknown* InClass); // Function Engine.AnimInstance.LinkAnimGraphByTag(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72EB0>
	void LinkAnimClassLayers(struct Unknown* InClass); // Function Engine.AnimInstance.LinkAnimClassLayers(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72E30>
	char IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, char b); // Function Engine.AnimInstance.IsSyncGroupBetweenMarkers(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72CE0>
	char IsPlayingSlotAnimation(struct Unknown Asset, struct FName SlotNodeName); // Function Engine.AnimInstance.IsPlayingSlotAnimation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72C20>
	char IsAnyMontagePlaying(); // Function Engine.AnimInstance.IsAnyMontagePlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72BF0>
	char HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName); // Function Engine.AnimInstance.HasMarkerBeenHitThisFrame(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72B30>
	char GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float& OutMarkerTime); // Function Engine.AnimInstance.GetTimeToClosestMarker(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72A20>
	struct Unknown GetSyncGroupPosition(struct FName InSyncGroupName); // Function Engine.AnimInstance.GetSyncGroupPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72980>
	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C728C0>
	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemaining(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72800>
	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeFraction(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72740>
	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTime(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72680>
	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimLength(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C725C0>
	char GetReceiveNotifiesFromLinkedInstances(); // Function Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72590>
	char GetPropagateNotifiesToLinkedInstances(); // Function Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72560>
	struct Unknown GetOwningComponent(); // Function Engine.AnimInstance.GetOwningComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72530>
	struct Unknown GetOwningActor(); // Function Engine.AnimInstance.GetOwningActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72500>
	struct Unknown GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72470>
	struct Unknown GetLinkedAnimLayerInstanceByClass(struct Unknown* InClass); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C723E0>
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<Unknown>& OutLinkedInstances); // Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C722F0>
	struct Unknown GetLinkedAnimGraphInstanceByTag(struct FName InTag); // Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72260>
	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C721A0>
	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C720E0>
	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C72020>
	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetInstanceStateWeight(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71F60>
	float GetInstanceMachineWeight(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceMachineWeight(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71ED0>
	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71E40>
	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71DB0>
	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71D20>
	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71C90>
	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTime(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71C00>
	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerLength(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71B70>
	float GetCurveValue(struct FName CurveName); // Function Engine.AnimInstance.GetCurveValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71AD0>
	struct FName GetCurrentStateName(int32_t MachineIndex); // Function Engine.AnimInstance.GetCurrentStateName(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71A40>
	struct Unknown GetCurrentActiveMontage(); // Function Engine.AnimInstance.GetCurrentActiveMontage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71A10>
	void GetAllCurveNames(struct TArray<Unknown>& OutNames); // Function Engine.AnimInstance.GetAllCurveNames(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71960>
	void GetActiveCurveNames(enum class Unknow CurveType, struct TArray<Unknown>& OutNames); // Function Engine.AnimInstance.GetActiveCurveNames(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71870>
	void ClearMorphTargets(); // Function Engine.AnimInstance.ClearMorphTargets(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71850>
	float CalculateDirection(struct Unknown& Velocity, struct Unknown& BaseRotation); // Function Engine.AnimInstance.CalculateDirection(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C71750>
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Engine.AnimInstance.BlueprintUpdateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlueprintLinkedAnimationLayersInitialized(); // Function Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlueprintBeginPlay(); // Function Engine.AnimInstance.BlueprintBeginPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class Engine.Exporter
struct UExporter : Object {
	struct Unknown* SupportedClass; // 0x28 (8)
	struct Unknown ExportRootScope; // 0x30 (8)
	struct TArray<Unknown> FormatExtension; // 0x38 (16)
	struct TArray<Unknown> FormatDescription; // 0x48 (16)
	int32_t PreferredFormatIndex; // 0x58 (4)
	int32_t TextIndent; // 0x5C (4)
	char bText : 0; // 0x60 (1)
	char bSelectedOnly : 0; // 0x60 (1)
	char bForceFileOperations : 0; // 0x60 (1)
	struct Unknown ExportTask; // 0x68 (8)

	char ScriptRunAssetExportTask(struct Unknown Task); // Function Engine.Exporter.ScriptRunAssetExportTask(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char RunAssetExportTasks(struct TArray<Unknown>& ExportTasks); // Function Engine.Exporter.RunAssetExportTasks(Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3370>
	char RunAssetExportTask(struct Unknown Task); // Function Engine.Exporter.RunAssetExportTask(Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x17D8130>
};

// Class Engine.LevelScriptActor
struct ALevelScriptActor : UActor {
	char bInputEnabled : 0; // 0x310 (1)

	void WorldOriginLocationChanged(struct Unknown OldOriginLocation, struct Unknown NewOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged(Event|Public|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void SetCinematicMode(char bCinematicMode, char bHidePlayer, char bAffectsHUD, char bAffectsMovement, char bAffectsTurning); // Function Engine.LevelScriptActor.SetCinematicMode(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D780>
	char RemoteEvent(struct FName EventName); // Function Engine.LevelScriptActor.RemoteEvent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D230>
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset(BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class Engine.FXSystemAsset
struct UFXSystemAsset : Object {
	uint32_t MaxPoolSize; // 0x28 (4)
};

// Class Engine.Brush
struct ABrush : UActor {
	char BrushType; // 0x310 (1)
	struct Unknown BrushColor; // 0x314 (4)
	int32_t PolyFlags; // 0x318 (4)
	char bColored : 0; // 0x31C (1)
	char bSolidWhenSelected : 0; // 0x31C (1)
	char bPlaceableFromClassBrowser : 0; // 0x31C (1)
	char bNotForClientOrServ : 0; // 0x31C (1)
	struct Unknown Brush; // 0x320 (8)
	struct Unknown BrushComponent; // 0x328 (8)
	char bInManipulation : 0; // 0x330 (1)
	struct TArray<Unknown> SavedSelections; // 0x338 (16)
};

// Class Engine.MKWorldEx
struct UMKWorldEx : Object {
	struct Unknown SelfWorld; // 0x38 (8)
};

// Class Engine.World
struct UWorld : UMKWorldEx {
	struct Unknown PersistentLevel; // 0x48 (8)
	struct Unknown NetDriver; // 0x50 (8)
	struct Unknown LineBatcher; // 0x58 (8)
	struct Unknown PersistentLineBatcher; // 0x60 (8)
	struct Unknown ForegroundLineBatcher; // 0x68 (8)
	struct Unknown NetworkManager; // 0x70 (8)
	struct Unknown PhysicsCollisionHandler; // 0x78 (8)
	struct TArray<Unknown> ExtraReferencedObjects; // 0x80 (16)
	struct TArray<Unknown> PerModuleDataObjects; // 0x90 (16)
	struct TArray<Unknown> LevelSequenceActors; // 0xA0 (16)
	struct TArray<Unknown> StreamingLevels; // 0xB0 (16)
	struct Unknown StreamingLevelsToConsider; // 0xC0 (72)
	struct FString StreamingLevelsPrefix; // 0x120 (16)
	struct Unknown CurrentLevelPendingVisibility; // 0x130 (8)
	struct Unknown CurrentLevelPendingInvisibility; // 0x138 (8)
	struct Unknown DemoNetDriver; // 0x140 (8)
	struct Unknown MyParticleEventManager; // 0x148 (8)
	struct Unknown DefaultPhysicsVolume; // 0x150 (8)
	char bAreConstraintsDirty : 0; // 0x16E (1)
	struct Unknown NavigationSystem; // 0x170 (8)
	struct Unknown AuthorityGameMode; // 0x178 (8)
	struct Unknown GameState; // 0x180 (8)
	struct Unknown AISystem; // 0x188 (8)
	struct Unknown AvoidanceManager; // 0x190 (8)
	struct TArray<Unknown> Levels; // 0x198 (16)
	struct TArray<Unknown> LevelCollections; // 0x1A8 (16)
	struct Unknown OwningGameInstance; // 0x1D8 (8)
	struct TArray<Unknown> ParameterCollectionInstances; // 0x1E0 (16)
	struct Unknown CanvasForRenderingToTarget; // 0x1F0 (8)
	struct Unknown CanvasForDrawMaterialToRenderTarget; // 0x1F8 (8)
	struct TArray<Unknown> ComponentsThatNeedEndOfFrameUpdate; // 0x250 (16)
	struct TArray<Unknown> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x260 (16)
	struct Unknown WorldComposition; // 0x5B0 (8)
	struct Unknown PSCPool; // 0x650 (88)

	struct Unknown K2_GetWorldSettings(); // Function Engine.World.K2_GetWorldSettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2E050>
	void HandleTimelineScrubbed(); // Function Engine.World.HandleTimelineScrubbed(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2E030>
};

// Class Engine.InterpTrack
struct UInterpTrack : Object {
	struct TArray<Unknown> SubTracks; // 0x38 (16)
	struct Unknown* TrackInstClass; // 0x48 (8)
	char ActiveCondition; // 0x50 (1)
	struct FString TrackTitle; // 0x58 (16)
	char bOnePerGroup : 0; // 0x68 (1)
	char bDirGroupOnly : 0; // 0x68 (1)
	char bDisableTrack : 0; // 0x68 (1)
	char bIsSelected : 0; // 0x68 (1)
	char bIsAnimControlTrack : 0; // 0x68 (1)
	char bSubTrackOnly : 0; // 0x68 (1)
	char bVisible : 0; // 0x68 (1)
	char bIsRecording : 0; // 0x68 (1)
};

// Class Engine.InterpTrackVectorBase
struct UInterpTrackVectorBase : UInterpTrack {
	struct Unknown VectorTrack; // 0x70 (24)
	float CurveTension; // 0x88 (4)
};

// Class Engine.InterpTrackFloatBase
struct UInterpTrackFloatBase : UInterpTrack {
	struct Unknown FloatTrack; // 0x70 (24)
	float CurveTension; // 0x88 (4)
};

// Class Engine.DataAsset
struct UDataAsset : Object {
	struct Unknown* NativeClass; // 0x28 (8)
};

// Class Engine.MaterialExpression
struct UMaterialExpression : Object {
	struct Unknown Material; // 0x28 (8)
	struct Unknown Function; // 0x30 (8)
	char bIsParameterExpression : 0; // 0x38 (1)
};

// Class Engine.MaterialExpressionTextureBase
struct UMaterialExpressionTextureBase : UMaterialExpression {
	struct Unknown Texture; // 0x40 (8)
	char SamplerType; // 0x48 (1)
	char IsDefaultMeshpaintTexture : 0; // 0x49 (1)
};

// Class Engine.MaterialExpressionTextureSample
struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	struct Unknown Coordinates; // 0x50 (12)
	struct Unknown TextureObject; // 0x64 (12)
	struct Unknown MipValue; // 0x78 (12)
	struct Unknown CoordinatesDX; // 0x8C (12)
	struct Unknown CoordinatesDY; // 0xA0 (12)
	struct Unknown AutomaticViewMipBiasValue; // 0xB4 (12)
	char MipValueMode; // 0xC8 (1)
	char SamplerSource; // 0xC9 (1)
	char AutomaticViewMipBias : 0; // 0xCA (1)
	char ConstCoordinate; // 0xCB (1)
	int32_t ConstMipValue; // 0xCC (4)
};

// Class Engine.MaterialExpressionTextureSampleParameter
struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0xD0 (8)
	struct Unknown ExpressionGUID; // 0xD8 (16)
	struct FName Group; // 0xE8 (8)
};

// Class Engine.MKPawnEx
struct AMKPawnEx : UActor {
	struct Unknown SelfPawn; // 0x318 (8)

	void OnChangedViewMode(); // Function Engine.MKPawnEx.OnChangedViewMode(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
};

// Class Engine.Pawn
struct APawn : AMKPawnEx {
	char bUseControllerRotationPitch : 0; // 0x328 (1)
	char bUseControllerRotationYaw : 0; // 0x328 (1)
	char bUseControllerRotationRoll : 0; // 0x328 (1)
	char bCanAffectNavigationGeneration : 0; // 0x328 (1)
	float BaseEyeHeight; // 0x32C (4)
	char AutoPossessPlayer; // 0x330 (1)
	enum class Unknow AutoPossessAI; // 0x331 (1)
	uint16_t RemoteViewPitch; // 0x332 (2)
	uint16_t RemoteViewYaw; // 0x334 (2)
	struct Unknown* AIControllerClass; // 0x338 (8)
	struct Unknown PlayerState; // 0x340 (8)
	struct Unknown LastHitBy; // 0x350 (8)
	struct Unknown Controller; // 0x358 (8)
	struct Unknown ControlInputVector; // 0x364 (12)
	struct Unknown LastControlInputVector; // 0x370 (12)

	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB47A0>
	void SetCanAffectNavigationGeneration(char bNewValue, char bForceUpdate); // Function Engine.Pawn.SetCanAffectNavigationGeneration(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB45D0>
	void ReceiveUnpossessed(struct Unknown OldController); // Function Engine.Pawn.ReceiveUnpossessed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceivePossessed(struct Unknown NewController); // Function Engine.Pawn.ReceivePossessed(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PawnMakeNoise(float Loudness, struct Unknown NoiseLocation, char bUseNoiseMakerLocation, struct Unknown NoiseMaker); // Function Engine.Pawn.PawnMakeNoise(Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4460>
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1F240>
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0150>
	void LaunchPawn(struct Unknown LaunchVelocity, char bXYOverride, char bZOverride); // Function Engine.Pawn.LaunchPawn(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4220>
	struct Unknown K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4090>
	char IsPlayerControlled(); // Function Engine.Pawn.IsPlayerControlled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB41F0>
	char IsPawnControlled(); // Function Engine.Pawn.IsPawnControlled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB41C0>
	char IsMoveInputIgnored(); // Function Engine.Pawn.IsMoveInputIgnored(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4160>
	char IsLocallyControlled(); // Function Engine.Pawn.IsLocallyControlled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4130>
	char IsControlled(); // Function Engine.Pawn.IsControlled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4100>
	char IsBotControlled(); // Function Engine.Pawn.IsBotControlled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB40D0>
	struct Unknown GetPendingMovementInputVector(); // Function Engine.Pawn.GetPendingMovementInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4090>
	struct Unknown GetNavAgentLocation(); // Function Engine.Pawn.GetNavAgentLocation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3FD0>
	struct Unknown GetMovementComponent(); // Function Engine.Pawn.GetMovementComponent(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3FA0>
	struct Unknown GetMovementBaseActor(struct Unknown Pawn); // Function Engine.Pawn.GetMovementBaseActor(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3F20>
	struct Unknown GetLastMovementInputVector(); // Function Engine.Pawn.GetLastMovementInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3EE0>
	struct Unknown GetControlRotation(); // Function Engine.Pawn.GetControlRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3E40>
	struct Unknown GetController(); // Function Engine.Pawn.GetController(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3E80>
	struct Unknown GetBaseAimRotation(); // Function Engine.Pawn.GetBaseAimRotation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3D40>
	void DetachFromControllerPendingDestroy(); // Function Engine.Pawn.DetachFromControllerPendingDestroy(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F2B3B0>
	struct Unknown ConsumeMovementInputVector(); // Function Engine.Pawn.ConsumeMovementInputVector(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3D00>
	void AddMovementInput(struct Unknown WorldDirection, float ScaleValue, char bForce); // Function Engine.Pawn.AddMovementInput(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3840>
	void AddControllerYawInput(float Val); // Function Engine.Pawn.AddControllerYawInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB36E0>
	void AddControllerRollInput(float Val); // Function Engine.Pawn.AddControllerRollInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3660>
	void AddControllerPitchInput(float Val); // Function Engine.Pawn.AddControllerPitchInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB35E0>
};

// Class Engine.MKCharacterEx
struct AMKCharacterEx : APawn {
	struct Unknown SelfCharacter; // 0x388 (8)
};

// Class Engine.Character
struct ACharacter : AMKCharacterEx {
	struct Unknown Mesh; // 0x398 (8)
	struct Unknown CharacterMovement; // 0x3A0 (8)
	struct Unknown CapsuleComponent; // 0x3A8 (8)
	struct Unknown BasedMovement; // 0x3B8 (48)
	struct Unknown ReplicatedBasedMovement; // 0x3E8 (48)
	float AnimRootMotionTranslationScale; // 0x418 (4)
	struct Unknown BaseTranslationOffset; // 0x41C (12)
	struct Unknown BaseRotationOffset; // 0x430 (16)
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x440 (4)
	float ReplayLastTransformUpdateTimeStamp; // 0x444 (4)
	char ReplicatedMovementMode; // 0x448 (1)
	char bInBaseReplication : 0; // 0x449 (1)
	float CrouchedEyeHeight; // 0x44C (4)
	char bIsCrouched : 0; // 0x450 (1)
	char bProxyIsJumpForceApplied : 0; // 0x450 (1)
	char bPressedJump : 0; // 0x450 (1)
	char bClientUpdating : 0; // 0x450 (1)
	char bClientWasFalling : 0; // 0x450 (1)
	char bClientResimulateRootMotion : 0; // 0x450 (1)
	char bClientResimulateRootMotionSources : 0; // 0x450 (1)
	char bSimGravityDisabled : 0; // 0x450 (1)
	char bClientCheckEncroachmentOnNetUpdate : 0; // 0x451 (1)
	char bServerMoveIgnoreRootMotion : 0; // 0x451 (1)
	char bWasJumping : 0; // 0x451 (1)
	float JumpKeyHoldTime; // 0x454 (4)
	float JumpForceTimeRemaining; // 0x458 (4)
	float ProxyJumpForceStartedTime; // 0x45C (4)
	float JumpMaxHoldTime; // 0x460 (4)
	int32_t JumpMaxCount; // 0x464 (4)
	int32_t JumpCurrentCount; // 0x468 (4)
	struct FMulticastInlineDelegate OnReachedJumpApex; // 0x470 (16)
	struct FMulticastInlineDelegate MovementModeChangedDelegate; // 0x490 (16)
	struct FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x4A0 (16)
	struct Unknown SavedRootMotion; // 0x4B0 (56)
	struct Unknown ClientRootMotionParams; // 0x4F0 (64)
	struct TArray<Unknown> RootMotionRepMoves; // 0x530 (16)
	struct Unknown RepRootMotion; // 0x540 (152)

	void UnCrouch(char bClientSimulation); // Function Engine.Character.UnCrouch(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202DF60>
	void StopJumping(); // Function Engine.Character.StopJumping(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202F670>
	void StopAnimMontage(struct Unknown AnimMontage); // Function Engine.Character.StopAnimMontage(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4FC0>
	void ServerMoveOld(float OldTimeStamp, struct Unknown OldAccel, struct Unknown InVel, char OldMoveFlags); // Function Engine.Character.ServerMoveOld(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4B50>
	void ServerMoveNoBase(float Timestamp, struct Unknown InAccel, struct Unknown InVel, struct Unknown ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // Function Engine.Character.ServerMoveNoBase(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4860>
	void ServerMoveDualNoBase(float TimeStamp0, struct Unknown InAccel0, struct Unknown InVel, char PendingFlags, uint32_t View0, float Timestamp, struct Unknown InAccel, struct Unknown ClientLoc, char NewFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // Function Engine.Character.ServerMoveDualNoBase(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4420>
	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct Unknown InAccel0, struct Unknown InVel, char PendingFlags, uint32_t View0, float Timestamp, struct Unknown InAccel, struct Unknown ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct Unknown ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMoveDualHybridRootMotion(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3F70>
	void ServerMoveDual(float TimeStamp0, struct Unknown InAccel0, struct Unknown InVel, char PendingFlags, uint32_t View0, float Timestamp, struct Unknown InAccel, struct Unknown ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct Unknown ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMoveDual(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3AC0>
	void ServerMove(float Timestamp, struct Unknown InAccel, struct Unknown InVel, struct Unknown ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, struct Unknown ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMove(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3740>
	void RootMotionDebugClientPrintOnScreen(struct FString inString); // Function Engine.Character.RootMotionDebugClientPrintOnScreen(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3690>
	float PlayAnimMontage(struct Unknown AnimMontage, float InPlayRate, struct FName StartSectionName); // Function Engine.Character.PlayAnimMontage(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3580>
	void OnWalkingOffLedge(struct Unknown& PreviousFloorImpactNormal, struct Unknown& PreviousFloorContactNormal, struct Unknown& PreviousLocation, float TimeDelta); // Function Engine.Character.OnWalkingOffLedge(Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB33E0>
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB33C0>
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB33A0>
	void OnRep_ReplayLastTransformUpdateTimeStamp(); // Function Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3380>
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3360>
	void OnLaunched(struct Unknown LaunchVelocity, char bXYOverride, char bZOverride); // Function Engine.Character.OnLaunched(Event|Public|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnLanded(struct Unknown& Hit); // Function Engine.Character.OnLanded(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnJumped(); // Function Engine.Character.OnJumped(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3340>
	void LaunchCharacter(struct Unknown LaunchVelocity, char bXYOverride, char bZOverride); // Function Engine.Character.LaunchCharacter(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3220>
	void K2_UpdateCustomMovement(float DeltaTime); // Function Engine.Character.K2_UpdateCustomMovement(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnStartCrouch(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnMovementModeChanged(char PrevMovementMode, char NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Engine.Character.K2_OnMovementModeChanged(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnEndCrouch(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Jump(); // Function Engine.Character.Jump(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202DFF0>
	char IsPlayingRootMotion(); // Function Engine.Character.IsPlayingRootMotion(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB31F0>
	char IsPlayingNetworkedRootMotionMontage(); // Function Engine.Character.IsPlayingNetworkedRootMotionMontage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB31C0>
	char IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202DDE0>
	char HasAnyRootMotion(); // Function Engine.Character.HasAnyRootMotion(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB3190>
	struct Unknown GetCurrentMontage(); // Function Engine.Character.GetCurrentMontage(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2B00>
	struct Unknown GetBaseTranslationOffset(); // Function Engine.Character.GetBaseTranslationOffset(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2AD0>
	struct Unknown GetBaseRotationOffsetRotator(); // Function Engine.Character.GetBaseRotationOffsetRotator(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2A80>
	float GetAnimRootMotionTranslationScale(); // Function Engine.Character.GetAnimRootMotionTranslationScale(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2A50>
	void ForceLastAckMove(); // Function Engine.Character.ForceLastAckMove(Net|Native|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2A30>
	void Crouch(char bClientSimulation); // Function Engine.Character.Crouch(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB29A0>
	void ClientVeryShortAdjustPosition(float Timestamp, struct Unknown NewLoc, struct Unknown NewBase, struct FName NewBaseBoneName, char bHasBase, char bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientVeryShortAdjustPosition(Net|Native|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2650>
	void ClientCheatWalk(); // Function Engine.Character.ClientCheatWalk(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA8FB0>
	void ClientCheatGhost(); // Function Engine.Character.ClientCheatGhost(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2026C80>
	void ClientCheatFly(); // Function Engine.Character.ClientCheatFly(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3394E80>
	void ClientAdjustRootMotionSourcePosition(float Timestamp, struct Unknown ServerRootMotion, char bHasAnimRootMotion, float ServerMontageTrackPosition, struct Unknown ServerLoc, struct Unknown ServerRotation, float ServerVelZ, struct Unknown ServerBase, struct FName ServerBoneName, char bHasBase, char bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionSourcePosition(Net|Native|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2190>
	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct Unknown ServerLoc, struct Unknown ServerRotation, float ServerVelZ, struct Unknown ServerBase, struct FName ServerBoneName, char bHasBase, char bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionPosition(Net|Native|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1EA0>
	void ClientAdjustPosition(float Timestamp, struct Unknown NewLoc, struct Unknown NewVel, struct Unknown NewBase, struct FName NewBaseBoneName, char bHasBase, char bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustPosition(Net|Native|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1C30>
	void ClientAckGoodMove(float Timestamp); // Function Engine.Character.ClientAckGoodMove(Net|Native|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1BB0>
	char CanJumpInternal(); // Function Engine.Character.CanJumpInternal(Native|Event|Protected|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1B80>
	char CanJump(); // Function Engine.Character.CanJump(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1B50>
	char CanCrouch(); // Function Engine.Character.CanCrouch(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1B20>
	void CacheInitialMeshOffset(struct Unknown MeshRelativeLocation, struct Unknown MeshRelativeRotation); // Function Engine.Character.CacheInitialMeshOffset(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB1A40>
};

// Class Engine.SplineComponent
struct USplineComponent : UPrimitiveComponent {
	struct Unknown SplineCurves; // 0x4B8 (104)
	struct Unknown SplineInfo; // 0x520 (24)
	struct Unknown SplineRotInfo; // 0x538 (24)
	struct Unknown SplineScaleInfo; // 0x550 (24)
	struct Unknown SplineReparamTable; // 0x568 (24)
	char bAllowSplineEditingPerInstance : 0; // 0x580 (1)
	int32_t ReparamStepsPerSegment; // 0x584 (4)
	float Duration; // 0x588 (4)
	char bStationaryEndpoints : 0; // 0x58C (1)
	char bSplineHasBeenEdited : 0; // 0x58D (1)
	char bModifiedByConstructionScript : 0; // 0x58E (1)
	char bInputSplinePointsToConstructionScript : 0; // 0x58F (1)
	char bDrawDebug : 0; // 0x590 (1)
	char bClosedLoop : 0; // 0x591 (1)
	char bLoopPositionOverride : 0; // 0x592 (1)
	float LoopPosition; // 0x594 (4)
	struct Unknown DefaultUpVector; // 0x598 (12)

	void UpdateSpline(); // Function Engine.SplineComponent.UpdateSpline(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E118F0>
	void SetWorldLocationAtSplinePoint(int32_t PointIndex, struct Unknown& InLocation); // Function Engine.SplineComponent.SetWorldLocationAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E11810>
	void SetUpVectorAtSplinePoint(int32_t PointIndex, struct Unknown& InUpVector, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.SetUpVectorAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E116B0>
	void SetUnselectedSplineSegmentColor(struct Unknown& SegmentColor); // Function Engine.SplineComponent.SetUnselectedSplineSegmentColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10EA0>
	void SetTangentsAtSplinePoint(int32_t PointIndex, struct Unknown& InArriveTangent, struct Unknown& InLeaveTangent, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.SetTangentsAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E114F0>
	void SetTangentAtSplinePoint(int32_t PointIndex, struct Unknown& InTangent, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.SetTangentAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E11390>
	void SetSplineWorldPoints(struct TArray<Unknown>& Points); // Function Engine.SplineComponent.SetSplineWorldPoints(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E112E0>
	void SetSplinePointType(int32_t PointIndex, char Type, char bUpdateSpline); // Function Engine.SplineComponent.SetSplinePointType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E110B0>
	void SetSplinePoints(struct TArray<Unknown>& Points, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.SetSplinePoints(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E111B0>
	void SetSplineLocalPoints(struct TArray<Unknown>& Points); // Function Engine.SplineComponent.SetSplineLocalPoints(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E11000>
	void SetSelectedSplineSegmentColor(struct Unknown& SegmentColor); // Function Engine.SplineComponent.SetSelectedSplineSegmentColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10EA0>
	void SetLocationAtSplinePoint(int32_t PointIndex, struct Unknown& InLocation, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.SetLocationAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10D40>
	void SetDrawDebug(char bShow); // Function Engine.SplineComponent.SetDrawDebug(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10CB0>
	void SetDefaultUpVector(struct Unknown& UpVector, char CoordinateSpace); // Function Engine.SplineComponent.SetDefaultUpVector(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10BD0>
	void SetClosedLoopAtPosition(char bInClosedLoop, float Key, char bUpdateSpline); // Function Engine.SplineComponent.SetClosedLoopAtPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10AC0>
	void SetClosedLoop(char bInClosedLoop, char bUpdateSpline); // Function Engine.SplineComponent.SetClosedLoop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E109F0>
	void RemoveSplinePoint(int32_t Index, char bUpdateSpline); // Function Engine.SplineComponent.RemoveSplinePoint(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10930>
	char IsClosedLoop(); // Function Engine.SplineComponent.IsClosedLoop(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10900>
	struct Unknown GetWorldTangentAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10850>
	struct Unknown GetWorldRotationAtTime(float Time, char bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldRotationAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10760>
	struct Unknown GetWorldRotationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E106B0>
	struct Unknown GetWorldLocationAtTime(float Time, char bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldLocationAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E105C0>
	struct Unknown GetWorldLocationAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetWorldLocationAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10510>
	struct Unknown GetWorldLocationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10460>
	struct Unknown GetWorldDirectionAtTime(float Time, char bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldDirectionAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10370>
	struct Unknown GetWorldDirectionAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E102C0>
	struct Unknown GetVectorPropertyAtSplinePint(int32_t Index, struct FName PropertyName); // Function Engine.SplineComponent.GetVectorPropertyAtSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E101F0>
	struct Unknown GetVectorPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // Function Engine.SplineComponent.GetVectorPropertyAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10110>
	struct Unknown GetUpVectorAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetUpVectorAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0FFF0>
	struct Unknown GetUpVectorAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0FF20>
	struct Unknown GetUpVectorAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0FE40>
	struct Unknown GetUpVectorAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0FD60>
	struct Unknown GetTransformAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity, char bUseScale); // Function Engine.SplineComponent.GetTransformAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0FBD0>
	struct Unknown GetTransformAtSplinePoint(int32_t PointIndex, char CoordinateSpace, char bUseScale); // Function Engine.SplineComponent.GetTransformAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0FA90>
	struct Unknown GetTransformAtSplineInputKey(float InKey, char CoordinateSpace, char bUseScale); // Function Engine.SplineComponent.GetTransformAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F940>
	struct Unknown GetTransformAtDistanceAlongSpline(float Distance, char CoordinateSpace, char bUseScale); // Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F7F0>
	struct Unknown GetTangentAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetTangentAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F6D0>
	struct Unknown GetTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DEB0>
	struct Unknown GetTangentAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F5F0>
	struct Unknown GetTangentAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F510>
	char GetSplinePointType(int32_t PointIndex); // Function Engine.SplineComponent.GetSplinePointType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F480>
	float GetSplineLength(); // Function Engine.SplineComponent.GetSplineLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F450>
	struct Unknown GetScaleAtTime(float Time, char bUseConstantVelocity); // Function Engine.SplineComponent.GetScaleAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F2E0>
	struct Unknown GetScaleAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetScaleAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F240>
	struct Unknown GetScaleAtSplineInputKey(float InKey); // Function Engine.SplineComponent.GetScaleAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F1A0>
	struct Unknown GetScaleAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F100>
	struct Unknown GetRotationAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetRotationAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0EFE0>
	struct Unknown GetRotationAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0EF10>
	struct Unknown GetRotationAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0EE30>
	struct Unknown GetRotationAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0ED50>
	float GetRollAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetRollAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0EC40>
	float GetRollAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplinePoint(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0EB80>
	float GetRollAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplineInputKey(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0EAB0>
	float GetRollAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtDistanceAlongSpline(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E9E0>
	struct Unknown GetRightVectorAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetRightVectorAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E8C0>
	struct Unknown GetRightVectorAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E7F0>
	struct Unknown GetRightVectorAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E710>
	struct Unknown GetRightVectorAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E630>
	int32_t GetNumberOfSplineSegments(); // Function Engine.SplineComponent.GetNumberOfSplineSegments(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E600>
	int32_t GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E5D0>
	struct Unknown GetLocationAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetLocationAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E4B0>
	struct Unknown GetLocationAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E3E0>
	struct Unknown GetLocationAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E300>
	struct Unknown GetLocationAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E220>
	void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, struct Unknown& Location, struct Unknown& Tangent, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0E0B0>
	void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, struct Unknown& LocalLocation, struct Unknown& LocalTangent); // Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DF80>
	struct Unknown GetLeaveTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DEB0>
	float GetInputKeyAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DE20>
	float GetFloatPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // Function Engine.SplineComponent.GetFloatPropertyAtSplinePoint(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DD60>
	float GetFloatPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // Function Engine.SplineComponent.GetFloatPropertyAtSplineInputKey(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DC90>
	float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DC00>
	struct Unknown GetDirectionAtTime(float Time, char CoordinateSpace, char bUseConstantVelocity); // Function Engine.SplineComponent.GetDirectionAtTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DAE0>
	struct Unknown GetDirectionAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0DA10>
	struct Unknown GetDirectionAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplineInputKey(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D930>
	struct Unknown GetDirectionAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D850>
	struct Unknown GetDefaultUpVector(char CoordinateSpace); // Function Engine.SplineComponent.GetDefaultUpVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D7B0>
	struct Unknown GetArriveTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetArriveTangentAtSplinePoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D6E0>
	struct Unknown FindUpVectorClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D5F0>
	struct Unknown FindTransformClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace, char bUseScale); // Function Engine.SplineComponent.FindTransformClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D4A0>
	struct Unknown FindTangentClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindTangentClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D3B0>
	struct Unknown FindScaleClosestToWorldLocation(struct Unknown& WorldLocation); // Function Engine.SplineComponent.FindScaleClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D300>
	struct Unknown FindRotationClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindRotationClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D210>
	float FindRollClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindRollClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D130>
	struct Unknown FindRightVectorClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0D040>
	struct Unknown FindLocationClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindLocationClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CF50>
	float FindInputKeyClosestToWorldLocation(struct Unknown& WorldLocation); // Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CEB0>
	struct Unknown FindDirectionClosestToWorldLocation(struct Unknown& WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindDirectionClosestToWorldLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CDC0>
	void ClearSplinePoints(char bUpdateSpline); // Function Engine.SplineComponent.ClearSplinePoints(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CD30>
	void AddSplineWorldPoint(struct Unknown& Position); // Function Engine.SplineComponent.AddSplineWorldPoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CC90>
	void AddSplinePointAtIndex(struct Unknown& Position, int32_t Index, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.AddSplinePointAtIndex(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CB30>
	void AddSplinePoint(struct Unknown& Position, char CoordinateSpace, char bUpdateSpline); // Function Engine.SplineComponent.AddSplinePoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0CA20>
	void AddSplineLocalPoint(struct Unknown& Position); // Function Engine.SplineComponent.AddSplineLocalPoint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0C990>
	void AddPoints(struct TArray<Unknown>& Points, char bUpdateSpline); // Function Engine.SplineComponent.AddPoints(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0C890>
	void AddPoint(struct Unknown& Point, char bUpdateSpline); // Function Engine.SplineComponent.AddPoint(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0C780>
};

// Class Engine.Commandlet
struct UCommandlet : Object {
	struct FString HelpDescription; // 0x28 (16)
	struct FString HelpUsage; // 0x38 (16)
	struct FString HelpWebLink; // 0x48 (16)
	struct TArray<Unknown> HelpParamNames; // 0x58 (16)
	struct TArray<Unknown> HelpParamDescriptions; // 0x68 (16)
	char IsServer : 0; // 0x78 (1)
	char IsClient : 0; // 0x78 (1)
	char IsEditor : 0; // 0x78 (1)
	char LogToConsole : 0; // 0x78 (1)
	char ShowErrorCount : 0; // 0x78 (1)
	char ShowProgress : 0; // 0x78 (1)
};

// Class Engine.AudioComponent
struct UAudioComponent : USceneComponent {
	struct Unknown Sound; // 0x238 (8)
	struct TArray<Unknown> InstanceParameters; // 0x240 (16)
	struct Unknown SoundClassOverride; // 0x250 (8)
	char bAutoDestroy : 0; // 0x258 (1)
	char bStopWhenOwnerDestroyed : 0; // 0x258 (1)
	char bShouldRemainActiveIfDropped : 0; // 0x258 (1)
	char bAllowSpatialization : 0; // 0x258 (1)
	char bOverrideAttenuation : 0; // 0x258 (1)
	char bOverrideSubtitlePriority : 0; // 0x258 (1)
	char bIsUISound : 0; // 0x258 (1)
	char bEnableLowPassFilter : 0; // 0x258 (1)
	char bOverridePriority : 0; // 0x259 (1)
	char bSuppressSubtitles : 0; // 0x259 (1)
	char bAutoManageAttachment : 0; // 0x25A (1)
	struct FName AudioComponentUserID; // 0x260 (8)
	float PitchModulationMin; // 0x268 (4)
	float PitchModulationMax; // 0x26C (4)
	float VolumeModulationMin; // 0x270 (4)
	float VolumeModulationMax; // 0x274 (4)
	float VolumeMultiplier; // 0x278 (4)
	int32_t EnvelopeFollowerAttackTime; // 0x27C (4)
	int32_t EnvelopeFollowerReleaseTime; // 0x280 (4)
	float Priority; // 0x284 (4)
	float SubtitlePriority; // 0x288 (4)
	struct Unknown SourceEffectChain; // 0x290 (8)
	float PitchMultiplier; // 0x298 (4)
	float LowPassFilterFrequency; // 0x29C (4)
	struct Unknown AttenuationSettings; // 0x2A8 (8)
	struct Unknown AttenuationOverrides; // 0x2B0 (928)
	struct Unknown ConcurrencySettings; // 0x650 (8)
	struct TSet<Unknown> ConcurrencySet; // 0x658 (80)
	enum class Unknow AutoAttachLocationRule; // 0x6B4 (1)
	enum class Unknow AutoAttachRotationRule; // 0x6B5 (1)
	enum class Unknow AutoAttachScaleRule; // 0x6B6 (1)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x6B8 (16)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x6E0 (16)
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x708 (16)
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x730 (16)
	struct Unknown Modulation; // 0x758 (16)
	struct FDelegate OnQueueSubtitles; // 0x768 (16)
	struct TWeakObjectPtr<struct Unknown> AutoAttachParent; // 0x778 (8)
	struct FName AutoAttachSocketName; // 0x780 (8)

	void StopDelayed(float DelayTime); // Function Engine.AudioComponent.StopDelayed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90F70>
	void Stop(); // Function Engine.AudioComponent.Stop(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90F50>
	void SetWaveParameter(struct FName InName, struct Unknown InWave); // Function Engine.AudioComponent.SetWaveParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90E90>
	void SetVolumeMultiplier(float NewVolumeMultiplier); // Function Engine.AudioComponent.SetVolumeMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90E10>
	void SetUISound(char bInUISound); // Function Engine.AudioComponent.SetUISound(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90D80>
	void SetSubmixSend(struct Unknown Submix, float SendLevel); // Function Engine.AudioComponent.SetSubmixSend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90CB0>
	void SetSourceBusSendPreEffect(struct Unknown SoundSourceBus, float SourceBusSendLevel); // Function Engine.AudioComponent.SetSourceBusSendPreEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90BE0>
	void SetSourceBusSendPostEffect(struct Unknown SoundSourceBus, float SourceBusSendLevel); // Function Engine.AudioComponent.SetSourceBusSendPostEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90B10>
	void SetSound(struct Unknown NewSound); // Function Engine.AudioComponent.SetSound(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90A90>
	void SetPitchMultiplier(float NewPitchMultiplier); // Function Engine.AudioComponent.SetPitchMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C908E0>
	void SetPaused(char bPause); // Function Engine.AudioComponent.SetPaused(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90850>
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function Engine.AudioComponent.SetLowPassFilterFrequency(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C907D0>
	void SetLowPassFilterEnabled(char InLowPassFilterEnabled); // Function Engine.AudioComponent.SetLowPassFilterEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90740>
	void SetIntParameter(struct FName InName, int32_t inInt); // Function Engine.AudioComponent.SetIntParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C905E0>
	void SetFloatParameter(struct FName InName, float InFloat); // Function Engine.AudioComponent.SetFloatParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90510>
	void SetBoolParameter(struct FName InName, char InBool); // Function Engine.AudioComponent.SetBoolParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C903B0>
	void Play(float StartTime); // Function Engine.AudioComponent.Play(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90330>
	char IsPlaying(); // Function Engine.AudioComponent.IsPlaying(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C902E0>
	char HasCookedFFTData(); // Function Engine.AudioComponent.HasCookedFFTData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C902B0>
	char HasCookedAmplitudeEnvelopeData(); // Function Engine.AudioComponent.HasCookedAmplitudeEnvelopeData(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90280>
	enum class Unknow GetPlayState(); // Function Engine.AudioComponent.GetPlayState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90250>
	char GetCookedFFTDataForAllPlayingSounds(struct TArray<Unknown>& OutSoundWaveSpectralData); // Function Engine.AudioComponent.GetCookedFFTDataForAllPlayingSounds(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90170>
	char GetCookedFFTData(struct TArray<Unknown>& FrequenciesToGet, struct TArray<Unknown>& OutSoundWaveSpectralData); // Function Engine.AudioComponent.GetCookedFFTData(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90040>
	char GetCookedEnvelopeDataForAllPlayingSounds(struct TArray<Unknown>& OutEnvelopeData); // Function Engine.AudioComponent.GetCookedEnvelopeDataForAllPlayingSounds(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8FF80>
	char GetCookedEnvelopeData(float& OutEnvelopeData); // Function Engine.AudioComponent.GetCookedEnvelopeData(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8FED0>
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class Unknow FadeCurve); // Function Engine.AudioComponent.FadeOut(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8FDC0>
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class Unknow FadeCurve); // Function Engine.AudioComponent.FadeIn(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8FC70>
	char BP_GetAttenuationSettingsToApply(struct Unknown& OutAttenuationSettings); // Function Engine.AudioComponent.BP_GetAttenuationSettingsToApply(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8FBA0>
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class Unknow FadeCurve); // Function Engine.AudioComponent.AdjustVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8FAA0>
	void AdjustAttenuation(struct Unknown& InAttenuationSettings); // Function Engine.AudioComponent.AdjustAttenuation(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8F9D0>
};

// Class Engine.GameModeBase
struct AGameModeBase : AInfo {
	struct FString OptionsString; // 0x310 (16)
	struct Unknown* GameSessionClass; // 0x320 (8)
	struct Unknown* GameStateClass; // 0x328 (8)
	struct Unknown* PlayerControllerClass; // 0x330 (8)
	struct Unknown* PlayerStateClass; // 0x338 (8)
	struct Unknown* HUDClass; // 0x340 (8)
	struct Unknown* DefaultPawnClass; // 0x348 (8)
	struct Unknown* SpectatorClass; // 0x350 (8)
	struct Unknown* ReplaySpectatorPlayerControllerClass; // 0x358 (8)
	struct Unknown* ServerStatReplicatorClass; // 0x360 (8)
	struct Unknown GameSession; // 0x368 (8)
	struct Unknown GameState; // 0x370 (8)
	struct Unknown ServerStatReplicator; // 0x378 (8)
	struct FText DefaultPlayerName; // 0x380 (24)
	char bUseSeamlessTravel : 0; // 0x398 (1)
	char bStartPlayersAsSpectators : 0; // 0x398 (1)
	char bPauseable : 0; // 0x398 (1)

	void StartPlay(); // Function Engine.GameModeBase.StartPlay(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE7380>
	struct Unknown SpawnDefaultPawnFor(struct Unknown NewPlayer, struct Unknown StartSpot); // Function Engine.GameModeBase.SpawnDefaultPawnFor(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE7290>
	struct Unknown SpawnDefaultPawnAtTransform(struct Unknown NewPlayer, struct Unknown& SpawnTransform); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform(Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE7170>
	char ShouldReset(struct Unknown ActorToReset); // Function Engine.GameModeBase.ShouldReset(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE70D0>
	void ReturnToMainMenuHost(); // Function Engine.GameModeBase.ReturnToMainMenuHost(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6F80>
	void RestartPlayerAtTransform(struct Unknown NewPlayer, struct Unknown& SpawnTransform); // Function Engine.GameModeBase.RestartPlayerAtTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6E60>
	void RestartPlayerAtPlayerStart(struct Unknown NewPlayer, struct Unknown StartSpot); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6D90>
	void RestartPlayer(struct Unknown NewPlayer); // Function Engine.GameModeBase.RestartPlayer(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6D00>
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6CC0>
	char PlayerCanRestart(struct Unknown Player); // Function Engine.GameModeBase.PlayerCanRestart(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6BC0>
	char MustSpectate(struct Unknown NewPlayerController); // Function Engine.GameModeBase.MustSpectate(Native|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6B20>
	void K2_PostLogin(struct Unknown NewPlayer); // Function Engine.GameModeBase.K2_PostLogin(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnSwapPlayerControllers(struct Unknown OldPC, struct Unknown NewPC); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnRestartPlayer(struct Unknown NewPlayer); // Function Engine.GameModeBase.K2_OnRestartPlayer(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnLogout(struct Unknown ExitingController); // Function Engine.GameModeBase.K2_OnLogout(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void K2_OnChangeName(struct Unknown Other, struct FString NewName, char bNameChange); // Function Engine.GameModeBase.K2_OnChangeName(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown K2_FindPlayerStart(struct Unknown Player, struct FString IncomingName); // Function Engine.GameModeBase.K2_FindPlayerStart(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6A30>
	void InitStartSpot(struct Unknown StartSpot, struct Unknown NewPlayer); // Function Engine.GameModeBase.InitStartSpot(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6930>
	void InitializeHUDForPlayer(struct Unknown NewPlayer); // Function Engine.GameModeBase.InitializeHUDForPlayer(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1770>
	char HasMatchStarted(); // Function Engine.GameModeBase.HasMatchStarted(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6900>
	void HandleStartingNewPlayer(struct Unknown NewPlayer); // Function Engine.GameModeBase.HandleStartingNewPlayer(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6840>
	int32_t GetNumSpectators(); // Function Engine.GameModeBase.GetNumSpectators(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6810>
	int32_t GetNumPlayers(); // Function Engine.GameModeBase.GetNumPlayers(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE67E0>
	struct Unknown* GetDefaultPawnClassForController(struct Unknown InController); // Function Engine.GameModeBase.GetDefaultPawnClassForController(Native|Event|Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6720>
	struct Unknown FindPlayerStart(struct Unknown Player, struct FString IncomingName); // Function Engine.GameModeBase.FindPlayerStart(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6620>
	struct Unknown ChoosePlayerStart(struct Unknown Player); // Function Engine.GameModeBase.ChoosePlayerStart(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6440>
	void ChangeName(struct Unknown Controller, struct FString NewName, char bNameChange); // Function Engine.GameModeBase.ChangeName(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6310>
	char CanSpectate(struct Unknown Viewer, struct Unknown ViewTarget); // Function Engine.GameModeBase.CanSpectate(Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6240>
};

// Class Engine.GameMode
struct AGameMode : AGameModeBase {
	struct FName MatchState; // 0x3B0 (8)
	char bDelayedStart : 0; // 0x3B8 (1)
	int32_t NumSpectators; // 0x3BC (4)
	int32_t NumPlayers; // 0x3C0 (4)
	int32_t NumBots; // 0x3C4 (4)
	float MinRespawnDelay; // 0x3C8 (4)
	int32_t NumTravellingPlayers; // 0x3CC (4)
	struct Unknown* EngineMessageClass; // 0x3D0 (8)
	struct TArray<Unknown> InactivePlayerArray; // 0x3D8 (16)
	float InactivePlayerStateLifeSpan; // 0x3E8 (4)
	int32_t MaxInactivePlayers; // 0x3EC (4)
	char bHandleDedicatedServerReplays : 0; // 0x3F0 (1)

	void StartMatch(); // Function Engine.GameMode.StartMatch(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE7360>
	void SetBandwidthLimit(float AsyncIOBandwidthLimit); // Function Engine.GameMode.SetBandwidthLimit(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE7050>
	void Say(struct FString Msg); // Function Engine.GameMode.Say(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6FA0>
	void RestartGame(); // Function Engine.GameMode.RestartGame(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6CE0>
	char ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6C90>
	char ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6C60>
	void K2_OnSetMatchState(struct FName NewState); // Function Engine.GameMode.K2_OnSetMatchState(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsMatchInProgress(); // Function Engine.GameMode.IsMatchInProgress(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6A00>
	char HasMatchEnded(); // Function Engine.GameMode.HasMatchEnded(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE68D0>
	struct FName GetMatchState(); // Function Engine.GameMode.GetMatchState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE67C0>
	void EndMatch(); // Function Engine.GameMode.EndMatch(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6600>
	void AbortMatch(); // Function Engine.GameMode.AbortMatch(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2025690>
};

// Class Engine.GameStateBase
struct AGameStateBase : AInfo {
	struct Unknown* GameModeClass; // 0x310 (8)
	struct Unknown AuthorityGameMode; // 0x318 (8)
	struct Unknown* SpectatorClass; // 0x320 (8)
	struct TArray<Unknown> PlayerArray; // 0x328 (16)
	char b : 0; // 0x338 (1)
	float ReplicatedWorldTimeSeconds; // 0x33C (4)
	float ServerWorldTimeSecondsDelta; // 0x340 (4)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x344 (4)

	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass(Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1F240>
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds(Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1FAC130>
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay(Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1F260>
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass(Native|Protected) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0150>
	char HasMatchStarted(); // Function Engine.GameStateBase.HasMatchStarted(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6B20>
	char HasBegunPlay(); // Function Engine.GameStateBase.HasBegunPlay(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6AF0>
	float GetServerWorldTimeSeconds(); // Function Engine.GameStateBase.GetServerWorldTimeSeconds(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6A20>
	float GetPlayerStartTime(struct Unknown Controller); // Function Engine.GameStateBase.GetPlayerStartTime(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6530>
	float GetPlayerRespawnDelay(struct Unknown Controller); // Function Engine.GameStateBase.GetPlayerRespawnDelay(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6490>
};

// Class Engine.GameState
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x360 (8)
	struct FName PreviousMatchState; // 0x368 (8)
	int32_t ElapsedTime; // 0x370 (4)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6CC0>
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6F80>
};

// Class Engine.Controller
struct AController : UActor {
	struct Unknown PlayerState; // 0x348 (8)
	struct FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x388 (16)
	struct FName StateName; // 0x324 (8)
	struct Unknown Pawn; // 0x378 (8)
	struct Unknown Character; // 0x338 (8)
	struct Unknown TransformComponent; // 0x330 (8)
	struct Unknown ControlRotation; // 0x39C (12)
	char bAttachToPawn : 0; // 0x32C (1)

	void UnPossess(); // Function Engine.Controller.UnPossess(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC04B0>
	void StopMovement(); // Function Engine.Controller.StopMovement(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F2B3B0>
	void SetInitialLocationAndRotation(struct Unknown& NewLocation, struct Unknown& NewRotation); // Function Engine.Controller.SetInitialLocationAndRotation(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC03C0>
	void SetIgnoreMoveInput(char bNewMoveInput); // Function Engine.Controller.SetIgnoreMoveInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0330>
	void SetIgnoreLookInput(char bNewLookInput); // Function Engine.Controller.SetIgnoreLookInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC02A0>
	void SetControlRotation(struct Unknown& NewRotation); // Function Engine.Controller.SetControlRotation(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0210>
	void ResetIgnoreMoveInput(); // Function Engine.Controller.ResetIgnoreMoveInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202DC40>
	void ResetIgnoreLookInput(); // Function Engine.Controller.ResetIgnoreLookInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E51370>
	void ResetIgnoreInputFlags(); // Function Engine.Controller.ResetIgnoreInputFlags(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC01F0>
	void ReceiveUnPossess(struct Unknown UnpossessedPawn); // Function Engine.Controller.ReceiveUnPossess(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceivePossess(struct Unknown PossessedPawn); // Function Engine.Controller.ReceivePossess(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveInstigatedAnyDamage(float Damage, struct Unknown DamageType, struct Unknown DamagedActor, struct Unknown DamageCauser); // Function Engine.Controller.ReceiveInstigatedAnyDamage(BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void Possess(struct Unknown InPawn); // Function Engine.Controller.Possess(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0170>
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0150>
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CF820>
	char LineOfSightTo(struct Unknown Other, struct Unknown ViewPoint, char bAlternateChecks); // Function Engine.Controller.LineOfSightTo(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0030>
	struct Unknown K2_GetPawn(); // Function Engine.Controller.K2_GetPawn(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC0000>
	char IsPlayerController(); // Function Engine.Controller.IsPlayerController(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFFD0>
	char IsMoveInputIgnored(); // Function Engine.Controller.IsMoveInputIgnored(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFFA0>
	char IsLookInputIgnored(); // Function Engine.Controller.IsLookInputIgnored(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFF70>
	char IsLocalPlayerController(); // Function Engine.Controller.IsLocalPlayerController(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFF20>
	char IsLocalController(); // Function Engine.Controller.IsLocalController(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFEF0>
	struct Unknown GetViewTarget(); // Function Engine.Controller.GetViewTarget(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFEC0>
	struct Unknown GetDesiredRotation(); // Function Engine.Controller.GetDesiredRotation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFE80>
	struct Unknown GetControlRotation(); // Function Engine.Controller.GetControlRotation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFE40>
	void ClientSetRotation(struct Unknown NewRotation, char b); // Function Engine.Controller.ClientSetRotation(Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFD60>
	void ClientSetLocation(struct Unknown NewLocation, struct Unknown NewRotation); // Function Engine.Controller.ClientSetLocation(Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFC80>
	struct Unknown CastToPlayerController(); // Function Engine.Controller.CastToPlayerController(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBFC50>
};

// Class Engine.MKPlayerControllerEx
struct AMKPlayerControllerEx : AController {
	struct Unknown SelfPlayerController; // 0x3B0 (8)
};

// Class Engine.PlayerController
struct APlayerController : AMKPlayerControllerEx {
	struct Unknown Player; // 0x510 (8)
	struct Unknown AcknowledgedPawn; // 0x428 (8)
	struct Unknown ControllingDirTrackInst; // 0x4F8 (8)
	struct Unknown MyHUD; // 0x5E8 (8)
	struct Unknown PlayerCameraManager; // 0x438 (8)
	struct Unknown* PlayerCameraManagerClass; // 0x480 (8)
	char bAutoManageActiveCameraTarget : 0; // 0x6E4 (1)
	struct Unknown TargetViewRotation; // 0x664 (12)
	float SmoothTargetViewRotationSpeed; // 0x640 (4)
	struct TArray<Unknown> HiddenActors; // 0x5B8 (16)
	struct TArray<Unknown> HiddenPrimitiveComponents; // 0x4D0 (16)
	float LastSpectatorStateSynchTime; // 0x674 (4)
	struct Unknown LastSpectatorSyncLocation; // 0x558 (12)
	struct Unknown LastSpectatorSyncRotation; // 0x45C (12)
	int32_t ClientCap; // 0x478 (4)
	struct Unknown CheatManager; // 0x568 (8)
	struct Unknown* CheatClass; // 0x590 (8)
	struct Unknown PlayerInput; // 0x518 (8)
	struct TArray<Unknown> ActiveForceFeedbackEffects; // 0x580 (16)
	char bPlayerIsWaiting : 0; // 0x498 (1)
	char NetPlayerIndex; // 0x4BC (1)
	struct Unknown PendingSwapConnection; // 0x468 (8)
	struct Unknown NetConnection; // 0x3E0 (8)
	float InputYawScale; // 0x5E0 (4)
	float InputPitchScale; // 0x5A8 (4)
	float InputRollScale; // 0x578 (4)
	char bShowMouseCursor : 0; // 0x670 (1)
	char bEnableClickEvents : 0; // 0x5B4 (1)
	char bEnableTouchEvents : 0; // 0x4E0 (1)
	char bEnableMouseOverEvents : 0; // 0x670 (1)
	char bEnableTouchOverEvents : 0; // 0x670 (1)
	char bForceFeedbackEnabled : 0; // 0x57C (1)
	float ForceFeedbackScale; // 0x488 (4)
	struct TArray<Unknown> ClickEventKeys; // 0x4A0 (16)
	char DefaultMouseCursor; // 0x618 (1)
	char CurrentMouseCursor; // 0x5E4 (1)
	char DefaultClickTraceChannel; // 0x47C (1)
	char CurrentClickTraceChannel; // 0x48C (1)
	float HitResultTraceDistance; // 0x3EC (4)
	uint16_t SeamlessTravelCount; // 0x5AC (2)
	uint16_t LastCompletedSeamlessTravelCount; // 0x540 (2)
	struct Unknown InactiveStateInputComponent; // 0x490 (8)
	char bShouldPerformFullTickWhenPaused : 0; // 0x570 (1)
	struct Unknown CurrentTouchInterface; // 0x550 (8)
	struct Unknown SpectatorPawn; // 0x470 (8)
	char bIsLocalPlayerController : 0; // 0x5C8 (1)
	struct Unknown SpawnLocation; // 0x61C (12)

	char WasInputKeyJustReleased(struct Unknown Key); // Function Engine.PlayerController.WasInputKeyJustReleased(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7710>
	char WasInputKeyJustPressed(struct Unknown Key); // Function Engine.PlayerController.WasInputKeyJustPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7620>
	void ToggleSpeaking(char bInSpeaking); // Function Engine.PlayerController.ToggleSpeaking(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7590>
	void TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename); // Function Engine.PlayerController.TestServerLevelVisibilityChange(Final|Exec|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F70B30>
	void SwitchLevel(struct FString U); // Function Engine.PlayerController.SwitchLevel(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC74E0>
	void StopHapticEffect(enum class Unknow Hand); // Function Engine.PlayerController.StopHapticEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7460>
	void StartFire(char FireModeNum); // Function Engine.PlayerController.StartFire(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC73E0>
	void SetVirtualJoystickVisibility(char bVisible); // Function Engine.PlayerController.SetVirtualJoystickVisibility(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7350>
	void SetViewTargetWithBlend(struct Unknown NewViewTarget, float BlendTime, char BlendFunc, float BlendExp, char bLockOutgoing); // Function Engine.PlayerController.SetViewTargetWithBlend(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC71D0>
	void SetName(struct FString S); // Function Engine.PlayerController.SetName(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7120>
	void SetMouseLocation(int32_t X, int32_t Y); // Function Engine.PlayerController.SetMouseLocation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC7060>
	void SetMouseCursorWidget(char Cursor, struct Unknown CursorWidget); // Function Engine.PlayerController.SetMouseCursorWidget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6FA0>
	void SetHapticsByValue(float Frequency, float Amplitude, enum class Unknow Hand); // Function Engine.PlayerController.SetHapticsByValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6EA0>
	void SetDisableHaptics(char bNewDisabled); // Function Engine.PlayerController.SetDisableHaptics(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6E10>
	void SetControllerLightColor(struct Unknown Color); // Function Engine.PlayerController.SetControllerLightColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6DA0>
	void SetCinematicMode(char bInCinematicMode, char bHidePlayer, char bAffectsHUD, char bAffectsMovement, char bAffectsTurning); // Function Engine.PlayerController.SetCinematicMode(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6BE0>
	void SetAudioListenerOverride(struct Unknown AttachToComponent, struct Unknown Location, struct Unknown Rotation); // Function Engine.PlayerController.SetAudioListenerOverride(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6AC0>
	void SetAudioListenerAttenuationOverride(struct Unknown AttachToComponent, struct Unknown AttenuationLocationOVerride); // Function Engine.PlayerController.SetAudioListenerAttenuationOverride(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC69F0>
	void ServerViewSelf(struct Unknown TransitionParams); // Function Engine.PlayerController.ServerViewSelf(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6900>
	void ServerViewPrevPlayer(); // Function Engine.PlayerController.ServerViewPrevPlayer(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC68B0>
	void ServerViewNextPlayer(); // Function Engine.PlayerController.ServerViewNextPlayer(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6860>
	void ServerVerifyViewTarget(); // Function Engine.PlayerController.ServerVerifyViewTarget(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6810>
	void ServerUpdateMultipleLevelsVisibility(struct TArray<Unknown> LevelVisibilities); // Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility(Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6750>
	void ServerUpdateLevelVisibility(struct Unknown LevelVisibility); // Function Engine.PlayerController.ServerUpdateLevelVisibility(Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6690>
	void ServerUpdateCamera(struct Unknown CamLoc, int32_t CamPitchAndYaw); // Function Engine.PlayerController.ServerUpdateCamera(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6570>
	void ServerUnmutePlayer(struct Unknown PlayerId); // Function Engine.PlayerController.ServerUnmutePlayer(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6410>
	void ServerToggleAILogging(); // Function Engine.PlayerController.ServerToggleAILogging(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC63C0>
	void ServerShortTimeout(); // Function Engine.PlayerController.ServerShortTimeout(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6370>
	void ServerSetSpectatorWaiting(char bWaiting); // Function Engine.PlayerController.ServerSetSpectatorWaiting(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC62B0>
	void ServerSetSpectatorLocation(struct Unknown NewLoc, struct Unknown NewRot); // Function Engine.PlayerController.ServerSetSpectatorLocation(Net|Native|Event|Public|NetServer|HasDefaults|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6180>
	void ServerRestartPlayer(); // Function Engine.PlayerController.ServerRestartPlayer(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6130>
	void ServerPause(); // Function Engine.PlayerController.ServerPause(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC60E0>
	void ServerNotifyLoadedWorld(struct FName WorldPackageName); // Function Engine.PlayerController.ServerNotifyLoadedWorld(Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC6030>
	void ServerMutePlayer(struct Unknown PlayerId); // Function Engine.PlayerController.ServerMutePlayer(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5ED0>
	void ServerExecRPC(struct FString Msg); // Function Engine.PlayerController.ServerExecRPC(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5E00>
	void ServerExec(struct FString Msg); // Function Engine.PlayerController.ServerExec(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EDDDD0>
	void ServerCheckClientPossessionReliable(); // Function Engine.PlayerController.ServerCheckClientPossessionReliable(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5DB0>
	void ServerCheckClientPossession(); // Function Engine.PlayerController.ServerCheckClientPossession(Net|Native|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5D60>
	void ServerChangeName(struct FString S); // Function Engine.PlayerController.ServerChangeName(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5C90>
	void ServerCamera(struct FName NewMode); // Function Engine.PlayerController.ServerCamera(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5BD0>
	void ServerAcknowledgePossession(struct Unknown P); // Function Engine.PlayerController.ServerAcknowledgePossession(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5B10>
	void SendToConsole(struct FString Command); // Function Engine.PlayerController.SendToConsole(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5A60>
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5A40>
	void ResetMouseCursorWidget(); // Function Engine.PlayerController.ResetMouseCursorWidget(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5A20>
	void ResetControllerLightColor(); // Function Engine.PlayerController.ResetControllerLightColor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5A00>
	char ProjectWorldLocationToScreen(struct Unknown WorldLocation, struct Unknown& ScreenLocation, char bPlayerViewportRelative); // Function Engine.PlayerController.ProjectWorldLocationToScreen(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC58D0>
	void PlayHapticEffect(struct Unknown HapticEffect, enum class Unknow Hand, float Scale, char bLoop); // Function Engine.PlayerController.PlayHapticEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5780>
	void PlayDynamicForceFeedback(float Intensity, float Duration, char bAffectsLeftLarge, char bAffectsLeftSmall, char bAffectsRightLarge, char bAffectsRightSmall, char Action, struct Unknown LatentInfo); // Function Engine.PlayerController.PlayDynamicForceFeedback(Final|Native|Private|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5500>
	void Pause(); // Function Engine.PlayerController.Pause(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC54E0>
	void OnServerStartedVisualLogger(char bIsLogging); // Function Engine.PlayerController.OnServerStartedVisualLogger(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5450>
	void LocalTravel(struct FString U); // Function Engine.PlayerController.LocalTravel(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC53A0>
	void K2_ClientPlayForceFeedback(struct Unknown ForceFeedbackEffect, struct FName Tag, char bLooping, char bIgnoreTimeDilation, char bPlayWhilePaused); // Function Engine.PlayerController.K2_ClientPlayForceFeedback(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC51F0>
	char IsInputKeyDown(struct Unknown Key); // Function Engine.PlayerController.IsInputKeyDown(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5100>
	void GetViewportSize(int32_t& SizeX, int32_t& SizeY); // Function Engine.PlayerController.GetViewportSize(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5020>
	struct Unknown GetSpectatorPawn(); // Function Engine.PlayerController.GetSpectatorPawn(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC5000>
	char GetMousePosition(float& LocationX, float& LocationY); // Function Engine.PlayerController.GetMousePosition(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4F10>
	struct Unknown GetInputVectorKeyState(struct Unknown Key); // Function Engine.PlayerController.GetInputVectorKeyState(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4E10>
	void GetInputTouchState(char FingerIndex, float& LocationX, float& LocationY, char& bIsCurrentlyPressed); // Function Engine.PlayerController.GetInputTouchState(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4C90>
	void GetInputMouseDelta(float& DeltaX, float& DeltaY); // Function Engine.PlayerController.GetInputMouseDelta(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4BB0>
	void GetInputMotionState(struct Unknown& Tilt, struct Unknown& RotationRate, struct Unknown& Gravity, struct Unknown& Acceleration); // Function Engine.PlayerController.GetInputMotionState(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4A20>
	float GetInputKeyTimeDown(struct Unknown Key); // Function Engine.PlayerController.GetInputKeyTimeDown(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4930>
	void GetInputAnalogStickState(char WhichStick, float& StickX, float& StickY); // Function Engine.PlayerController.GetInputAnalogStickState(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4810>
	float GetInputAnalogKeyState(struct Unknown Key); // Function Engine.PlayerController.GetInputAnalogKeyState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4720>
	struct Unknown GetHUD(); // Function Engine.PlayerController.GetHUD(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3D50>
	char GetHitResultUnderFingerForObjects(char FingerIndex, struct TArray<Unknown>& ObjectTypes, char bTraceComplex, struct Unknown& HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerForObjects(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4550>
	char GetHitResultUnderFingerByChannel(char FingerIndex, char TraceChannel, char bTraceComplex, struct Unknown& HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerByChannel(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC43B0>
	char GetHitResultUnderFinger(char FingerIndex, char TraceChannel, char bTraceComplex, struct Unknown& HitResult); // Function Engine.PlayerController.GetHitResultUnderFinger(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4210>
	char GetHitResultUnderCursorForObjects(struct TArray<Unknown>& ObjectTypes, char bTraceComplex, struct Unknown& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorForObjects(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC4080>
	char GetHitResultUnderCursorByChannel(char TraceChannel, char bTraceComplex, struct Unknown& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorByChannel(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3F00>
	char GetHitResultUnderCursor(char TraceChannel, char bTraceComplex, struct Unknown& HitResult); // Function Engine.PlayerController.GetHitResultUnderCursor(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3D80>
	struct Unknown GetFocalLocation(); // Function Engine.PlayerController.GetFocalLocation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3D10>
	void FOV(float NewFOV); // Function Engine.PlayerController.FOV(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3C90>
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3C70>
	char DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct Unknown& WorldLocation, struct Unknown& WorldDirection); // Function Engine.PlayerController.DeprojectScreenPositionToWorld(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3AF0>
	char DeprojectMousePositionToWorld(struct Unknown& WorldLocation, struct Unknown& WorldDirection); // Function Engine.PlayerController.DeprojectMousePositionToWorld(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC39F0>
	void ConsoleKey(struct Unknown Key); // Function Engine.PlayerController.ConsoleKey(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3900>
	void ClientWasKicked(struct FText KickReason); // Function Engine.PlayerController.ClientWasKicked(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3840>
	void ClientVoiceHandshakeComplete(); // Function Engine.PlayerController.ClientVoiceHandshakeComplete(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3820>
	void ClientUpdateMultipleLevelsStreamingStatus(struct TArray<Unknown> LevelStatuses); // Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3780>
	void ClientUpdateLevelStreamingStatus(struct FName PackageName, char bNewShouldBeLoaded, char bNewShouldBeVisible, char bNewShouldBlockOnLoad, int32_t LODIndex); // Function Engine.PlayerController.ClientUpdateLevelStreamingStatus(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC35D0>
	void ClientUnmutePlayer(struct Unknown PlayerId); // Function Engine.PlayerController.ClientUnmutePlayer(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC34B0>
	void ClientTravelInternal(struct FString U, char TravelType, char bSeamless, struct Unknown MapPackageGuid); // Function Engine.PlayerController.ClientTravelInternal(Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3330>
	void ClientTravel(struct FString U, char TravelType, char bSeamless, struct Unknown MapPackageGuid); // Function Engine.PlayerController.ClientTravel(Final|Native|Public|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC31C0>
	void ClientTeamMessage(struct Unknown SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientTeamMessage(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC3060>
	void ClientStopForceFeedback(struct Unknown ForceFeedbackEffect, struct FName Tag); // Function Engine.PlayerController.ClientStopForceFeedback(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2F90>
	void ClientStopCameraShakesFromSource(struct Unknown SourceComponent, char bImmediately); // Function Engine.PlayerController.ClientStopCameraShakesFromSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2EC0>
	void ClientStopCameraShake(struct Unknown* Shake, char bImmediately); // Function Engine.PlayerController.ClientStopCameraShake(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2DF0>
	void ClientStopCameraAnim(struct Unknown AnimToStop); // Function Engine.PlayerController.ClientStopCameraAnim(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2D60>
	void ClientStartOnlineSession(); // Function Engine.PlayerController.ClientStartOnlineSession(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2D40>
	void ClientSpawnCameraLensEffect(struct Unknown* LensEffectEmitterClass); // Function Engine.PlayerController.ClientSpawnCameraLensEffect(Net|Native|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2CB0>
	void ClientSetViewTarget(struct Unknown A, struct Unknown TransitionParams); // Function Engine.PlayerController.ClientSetViewTarget(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2BC0>
	void ClientSetSpectatorWaiting(char bWaiting); // Function Engine.PlayerController.ClientSetSpectatorWaiting(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2B30>
	void ClientSetHUD(struct Unknown* NewHUDClass); // Function Engine.PlayerController.ClientSetHUD(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2AA0>
	void ClientSetForceMipLevelsToBeResident(struct Unknown Material, float ForceDuration, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC29A0>
	void ClientSetCinematicMode(char bInCinematicMode, char bAffectsMovement, char bAffectsTurning, char bAffectsHUD); // Function Engine.PlayerController.ClientSetCinematicMode(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2830>
	void ClientSetCameraMode(struct FName NewCamMode); // Function Engine.PlayerController.ClientSetCameraMode(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC27A0>
	void ClientSetCameraFade(char bEnableFading, struct Unknown FadeColor, struct Unknown FadeAlpha, float FadeTime, char bFadeAudio); // Function Engine.PlayerController.ClientSetCameraFade(Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2610>
	void ClientSetBlockOnAsyncLoading(); // Function Engine.PlayerController.ClientSetBlockOnAsyncLoading(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC25F0>
	void ClientReturnToMainMenuWithTextReason(struct FText ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2530>
	void ClientReturnToMainMenu(struct FString ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenu(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2480>
	void ClientRetryClientRestart(struct Unknown NewPawn); // Function Engine.PlayerController.ClientRetryClientRestart(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC23F0>
	void ClientRestart(struct Unknown NewPawn); // Function Engine.PlayerController.ClientRestart(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2360>
	void ClientReset(); // Function Engine.PlayerController.ClientReset(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2340>
	void ClientRepObjRef(struct Unknown Object); // Function Engine.PlayerController.ClientRepObjRef(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC22B0>
	void ClientReceiveLocalizedMessage(struct Unknown* Message, int32_t Switch, struct Unknown RelatedPlayerState_2, struct Unknown RelatedPlayerState_3, struct Unknown OptionalObject); // Function Engine.PlayerController.ClientReceiveLocalizedMessage(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC2130>
	void ClientPrestreamTextures(struct Unknown ForcedActor, float ForceDuration, char bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientPrestreamTextures(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1FE0>
	void ClientPrepareMapChange(struct FName LevelName, char bFirst, char bLast); // Function Engine.PlayerController.ClientPrepareMapChange(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1ED0>
	void ClientPlaySoundAtLocation(struct Unknown Sound, struct Unknown Location, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySoundAtLocation(Net|Native|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1D80>
	void ClientPlaySound(struct Unknown Sound, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySound(Net|Native|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1C80>
	void ClientPlayForceFeedback_Internal(struct Unknown ForceFeedbackEffect, struct Unknown Params); // Function Engine.PlayerController.ClientPlayForceFeedback_Internal(Final|Net|Native|Event|Private|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1B90>
	void ClientPlayCameraShakeFromSource(struct Unknown* Shake, struct Unknown SourceComponent); // Function Engine.PlayerController.ClientPlayCameraShakeFromSource(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1AD0>
	void ClientPlayCameraShake(struct Unknown* Shake, float Scale, char PlaySpace, struct Unknown UserPlaySpaceRot); // Function Engine.PlayerController.ClientPlayCameraShake(Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1970>
	void ClientPlayCameraAnim(struct Unknown AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, char bLoop, char b, char Space, struct Unknown CustomPlaySpace); // Function Engine.PlayerController.ClientPlayCameraAnim(Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC16D0>
	void ClientMutePlayer(struct Unknown PlayerId); // Function Engine.PlayerController.ClientMutePlayer(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC15B0>
	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientMessage(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1480>
	void ClientIgnoreMoveInput(char bIgnore); // Function Engine.PlayerController.ClientIgnoreMoveInput(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC13F0>
	void ClientIgnoreLookInput(char bIgnore); // Function Engine.PlayerController.ClientIgnoreLookInput(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1360>
	void ClientGotoState(struct FName NewState); // Function Engine.PlayerController.ClientGotoState(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC12D0>
	void ClientGameEnded(struct Unknown EndGameFocus, char bIsWinner); // Function Engine.PlayerController.ClientGameEnded(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1200>
	void ClientForceGarbageCollection(); // Function Engine.PlayerController.ClientForceGarbageCollection(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC11E0>
	void ClientFlushLevelStreaming(); // Function Engine.PlayerController.ClientFlushLevelStreaming(Final|Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC11C0>
	void ClientEndOnlineSession(); // Function Engine.PlayerController.ClientEndOnlineSession(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC11A0>
	void ClientEnableNetworkVoice(char bEnable); // Function Engine.PlayerController.ClientEnableNetworkVoice(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1110>
	void ClientCommitMapChange(); // Function Engine.PlayerController.ClientCommitMapChange(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC10F0>
	void ClientClearCameraLensEffects(); // Function Engine.PlayerController.ClientClearCameraLensEffects(Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC10D0>
	void ClientCapBandwidth(int32_t Cap); // Function Engine.PlayerController.ClientCapBandwidth(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1040>
	void ClientCancelPendingMapChange(); // Function Engine.PlayerController.ClientCancelPendingMapChange(Net|NetReliableNative|Event|Public|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC1020>
	void ClientAddTextureStreamingLoc(struct Unknown InLoc, float Duration, char bOverrideLocation); // Function Engine.PlayerController.ClientAddTextureStreamingLoc(Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0F00>
	void ClearAudioListenerOverride(); // Function Engine.PlayerController.ClearAudioListenerOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0EE0>
	void ClearAudioListenerAttenuationOverride(); // Function Engine.PlayerController.ClearAudioListenerAttenuationOverride(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0EC0>
	char CanRestartPlayer(); // Function Engine.PlayerController.CanRestartPlayer(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0E90>
	void Camera(struct FName NewMode); // Function Engine.PlayerController.Camera(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0E00>
	void AddYawInput(float Val); // Function Engine.PlayerController.AddYawInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0D80>
	void AddRollInput(float Val); // Function Engine.PlayerController.AddRollInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0D00>
	void AddPitchInput(float Val); // Function Engine.PlayerController.AddPitchInput(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0C80>
	void ActivateTouchInterface(struct Unknown NewTouchInterface); // Function Engine.PlayerController.ActivateTouchInterface(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DC0BF0>
};

// Class Engine.ApplicationLifecycleComponent
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xB0 (16)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xC0 (16)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xD0 (16)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xE0 (16)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xF0 (16)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x100 (16)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x110 (16)
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x120 (16)
	struct FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x130 (16)
};

// Class Engine.MovementComponent
struct UMovementComponent : UActorComponent {
	struct Unknown UpdatedComponent; // 0xB0 (8)
	struct Unknown UpdatedPrimitive; // 0xB8 (8)
	struct Unknown Velocity; // 0xC4 (12)
	struct Unknown PlaneConstraintNormal; // 0xD0 (12)
	struct Unknown PlaneConstraintOrigin; // 0xDC (12)
	char bUpdateOnlyIfRendered : 0; // 0xE8 (1)
	char bAutoUpdateTickRegistration : 0; // 0xE8 (1)
	char bTickBeforeOwner : 0; // 0xE8 (1)
	char bAutoRegisterUpdatedComponent : 0; // 0xE8 (1)
	char bConstrainToPlane : 0; // 0xE8 (1)
	char bSnapToPlaneAtStart : 0; // 0xE8 (1)
	char bAutoRegisterPhysicsVolumeUpdates : 0; // 0xE8 (1)
	char bComponentShouldUpdatePhysicsVolume : 0; // 0xE8 (1)
	enum class Unknow PlaneConstraintAxisSetting; // 0xEB (1)

	void StopMovementImmediately(); // Function Engine.MovementComponent.StopMovementImmediately(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2053B20>
	void SnapUpdatedComponentToPlane(); // Function Engine.MovementComponent.SnapUpdatedComponentToPlane(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A4A0>
	void SetUpdatedComponent(struct Unknown NewUpdatedComponent); // Function Engine.MovementComponent.SetUpdatedComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F78A0>
	void SetPlaneConstraintOrigin(struct Unknown PlaneOrigin); // Function Engine.MovementComponent.SetPlaneConstraintOrigin(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A410>
	void SetPlaneConstraintNormal(struct Unknown PlaneNormal); // Function Engine.MovementComponent.SetPlaneConstraintNormal(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A380>
	void SetPlaneConstraintFromVectors(struct Unknown Forward, struct Unknown Up); // Function Engine.MovementComponent.SetPlaneConstraintFromVectors(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A2A0>
	void SetPlaneConstraintEnabled(char bEnabled); // Function Engine.MovementComponent.SetPlaneConstraintEnabled(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A210>
	void SetPlaneConstraintAxisSetting(enum class Unknow NewAxisSetting); // Function Engine.MovementComponent.SetPlaneConstraintAxisSetting(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A190>
	void PhysicsVolumeChanged(struct Unknown NewVolume); // Function Engine.MovementComponent.PhysicsVolumeChanged(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9A100>
	char K2_MoveUpdatedComponent(struct Unknown Delta, struct Unknown NewRotation, struct Unknown& OutHit, char bSweep, char bTeleport); // Function Engine.MovementComponent.K2_MoveUpdatedComponent(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99F00>
	float K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99EC0>
	float K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99E80>
	char IsExceedingMaxSpeed(float MaxSpeed); // Function Engine.MovementComponent.IsExceedingMaxSpeed(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99DF0>
	struct Unknown GetPlaneConstraintOrigin(); // Function Engine.MovementComponent.GetPlaneConstraintOrigin(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99DB0>
	struct Unknown GetPlaneConstraintNormal(); // Function Engine.MovementComponent.GetPlaneConstraintNormal(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99D70>
	enum class Unknow GetPlaneConstraintAxisSetting(); // Function Engine.MovementComponent.GetPlaneConstraintAxisSetting(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99D50>
	struct Unknown GetPhysicsVolume(); // Function Engine.MovementComponent.GetPhysicsVolume(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99D20>
	float GetMaxSpeed(); // Function Engine.MovementComponent.GetMaxSpeed(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99CE0>
	float GetGravityZ(); // Function Engine.MovementComponent.GetGravityZ(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99CA0>
	struct Unknown ConstrainNormalToPlane(struct Unknown Normal); // Function Engine.MovementComponent.ConstrainNormalToPlane(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99BF0>
	struct Unknown ConstrainLocationToPlane(struct Unknown Location); // Function Engine.MovementComponent.ConstrainLocationToPlane(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99B40>
	struct Unknown ConstrainDirectionToPlane(struct Unknown Direction); // Function Engine.MovementComponent.ConstrainDirectionToPlane(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D99A90>
};

// Class Engine.NavMovementComponent
struct UNavMovementComponent : UMovementComponent {
	struct Unknown NavAgentProps; // 0xF0 (48)
	float FixedPathBrakingDistance; // 0x120 (4)
	char bUpdateNavAgentWithOwnersCollision : 0; // 0x124 (1)
	char bUseAccelerationForPaths : 0; // 0x124 (1)
	char bUseFixedBrakingDistanceForPaths : 0; // 0x124 (1)
	struct Unknown MovementState; // 0x125 (1)
	struct Unknown PathFollowingComp; // 0x128 (8)

	void StopMovementKeepPathing(); // Function Engine.NavMovementComponent.StopMovementKeepPathing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9F1A0>
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9F180>
	char IsSwimming(); // Function Engine.NavMovementComponent.IsSwimming(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9EFB0>
	char IsMovingOnGround(); // Function Engine.NavMovementComponent.IsMovingOnGround(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6DC0>
	char IsFlying(); // Function Engine.NavMovementComponent.IsFlying(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9EF80>
	char IsFalling(); // Function Engine.NavMovementComponent.IsFalling(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D9EF50>
	char IsCrouching(); // Function Engine.NavMovementComponent.IsCrouching(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C902E0>
};

// Class Engine.PawnMovementComponent
struct UPawnMovementComponent : UNavMovementComponent {
	struct Unknown PawnOwner; // 0x130 (8)

	struct Unknown K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4050>
	char IsMoveInputIgnored(); // Function Engine.PawnMovementComponent.IsMoveInputIgnored(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4190>
	struct Unknown GetPendingInputVector(); // Function Engine.PawnMovementComponent.GetPendingInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4050>
	struct Unknown GetPawnOwner(); // Function Engine.PawnMovementComponent.GetPawnOwner(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4020>
	struct Unknown GetLastInputVector(); // Function Engine.PawnMovementComponent.GetLastInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3EA0>
	struct Unknown ConsumeInputVector(); // Function Engine.PawnMovementComponent.ConsumeInputVector(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3CC0>
	void AddInputVector(struct Unknown WorldVector, char bForce); // Function Engine.PawnMovementComponent.AddInputVector(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3760>
};

// Class Engine.CharacterMovementComponent
struct UCharacterMovementComponent : UPawnMovementComponent {
	struct Unknown CharacterOwner; // 0x2B0 (8)
	float GravityScale; // 0x2EC (4)
	float MaxStepHeight; // 0x468 (4)
	float JumpZVelocity; // 0x474 (4)
	float JumpOffJumpZFactor; // 0x6C8 (4)
	float WalkableFloorAngle; // 0x4F8 (4)
	float WalkableFloorZ; // 0x488 (4)
	char MovementMode; // 0x438 (1)
	char CustomMovementMode; // 0x56C (1)
	enum class Unknow NetworkSmoothingMode; // 0x280 (1)
	float GroundFriction; // 0x470 (4)
	float MaxWalkSpeed; // 0x300 (4)
	float MaxWalkSpeedCrouched; // 0x6E0 (4)
	float MaxSwimSpeed; // 0x548 (4)
	float MaxFlySpeed; // 0x4E8 (4)
	float MaxCustomMovementSpeed; // 0x460 (4)
	float MaxAcceleration; // 0x484 (4)
	float MinAnalogWalkSpeed; // 0x4E0 (4)
	float BrakingFrictionFactor; // 0x2A0 (4)
	float BrakingFriction; // 0x54C (4)
	float BrakingSubStepTime; // 0x6BC (4)
	float BrakingDecelerationWalking; // 0x554 (4)
	float BrakingDecelerationFalling; // 0x51C (4)
	float BrakingDecelerationSwimming; // 0x414 (4)
	float BrakingDecelerationFlying; // 0x568 (4)
	float AirControl; // 0x544 (4)
	float AirControlBoostMultiplier; // 0x308 (4)
	float AirControlBoostVelocityThreshold; // 0x3F4 (4)
	float FallingLateralFriction; // 0x3F0 (4)
	float CrouchedHalfHeight; // 0x264 (4)
	float Buoyancy; // 0x40C (4)
	float PerchRadiusThreshold; // 0x244 (4)
	float PerchAdditionalHeight; // 0x248 (4)
	struct Unknown RotationRate; // 0x520 (12)
	char bUseSeparateBrakingFriction : 0; // 0x298 (1)
	char bApplyGravityWhileJumping : 0; // 0x2D4 (1)
	char bUseControllerDesiredRotation : 0; // 0x2E4 (1)
	char bOrientRotationToMovement : 0; // 0x550 (1)
	char bSweepWhileNavWalking : 0; // 0x620 (1)
	char bMovementInProgress : 0; // 0x3C0 (1)
	char bEnableScopedMovementUpdates : 0; // 0x5D0 (1)
	char bEnableServerDualMoveScopedMovementUpdates : 0; // 0x4E4 (1)
	char bForceMaxAccel : 0; // 0x4B8 (1)
	char b : 0; // 0x2F3 (1)
	char bForceNextFloorCheck : 0; // 0x490 (1)
	char bShrinkProxyCapsule : 0; // 0x2FC (1)
	char bCanWalkOffLedges : 0; // 0x2E4 (1)
	char bCanWalkOffLedgesWhenCrouching : 0; // 0x44C (1)
	char bNetworkSkipProxyPredictionOnNetUpdate : 0; // 0x490 (1)
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 0; // 0x490 (1)
	char bDeferUpdateMoveComponent : 0; // 0x510 (1)
	char bEnablePhysicsInteraction : 0; // 0x4DC (1)
	char bTouchForceScaledToMass : 0; // 0x304 (1)
	char bPushForceScaledToMass : 0; // 0x540 (1)
	char bPushForceUsingZOffset : 0; // 0x5AC (1)
	char bScalePushForceToVelocity : 0; // 0x6DC (1)
	struct Unknown DeferredUpdatedMoveComponent; // 0x3E8 (8)
	float MaxOutOfWaterStepHeight; // 0x240 (4)
	float OutofWaterZ; // 0x22C (4)
	float Mass; // 0x23C (4)
	float StandingDownwardForceScale; // 0x4C8 (4)
	float InitialPushForceFactor; // 0x294 (4)
	float PushForceFactor; // 0x2C0 (4)
	float PushForcePointZOffsetFactor; // 0x2D0 (4)
	float TouchForceFactor; // 0x434 (4)
	float MinTouchForce; // 0x3A8 (4)
	float MaxTouchForce; // 0x5A8 (4)
	float RepulsionForce; // 0x3AC (4)
	struct Unknown Acceleration; // 0x6D0 (12)
	struct Unknown LastUpdateRotation; // 0x270 (16)
	struct Unknown LastUpdateLocation; // 0x288 (12)
	struct Unknown LastUpdateVelocity; // 0x2D8 (12)
	float ServerLastTransformUpdateTimeStamp; // 0x310 (4)
	float ServerLastClientGoodMoveAckTime; // 0x50C (4)
	float ServerLastClientAdjustmentTime; // 0x4BC (4)
	struct Unknown PendingImpulseToApply; // 0x21C (12)
	struct Unknown PendingForceToApply; // 0x5C4 (12)
	float AnalogInputModifier; // 0x4D4 (4)
	float MaxSimulationTimeStep; // 0x2F4 (4)
	int32_t MaxSimulationIterations; // 0x444 (4)
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x47C (4)
	float MaxDepenetrationWithGeometry; // 0x4AC (4)
	float MaxDepenetrationWithGeometryAsProxy; // 0x494 (4)
	float MaxDepenetrationWithPawn; // 0x25C (4)
	float MaxDepenetrationWithPawnAsProxy; // 0x564 (4)
	float NetworkSimulatedSmoothLocationTime; // 0x3F8 (4)
	float NetworkSimulatedSmoothRotationTime; // 0x6CC (4)
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x62C (4)
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x3E4 (4)
	float NetProxyShrinkRadius; // 0x6C4 (4)
	float NetProxyShrinkHalfHeight; // 0x440 (4)
	float NetworkMaxSmoothUpdateDistance; // 0x258 (4)
	float NetworkNoSmoothUpdateDistance; // 0x4D8 (4)
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x530 (4)
	float NetworkMinTimeBetweenClientAdjustments; // 0x284 (4)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2E8 (4)
	float NetworkLargeClientCorrectionDistance; // 0x410 (4)
	float LedgeCheckThreshold; // 0x514 (4)
	float JumpOutOfWaterPitch; // 0x4CC (4)
	struct Unknown CurrentFloor; // 0x314 (148)
	char DefaultLandMovementMode; // 0x3FC (1)
	char DefaultWaterMovementMode; // 0x2F2 (1)
	char GroundMovementMode; // 0x305 (1)
	char bMaintainHorizontalGroundVelocity : 0; // 0x518 (1)
	char bImpartBaseVelocityX : 0; // 0x5C0 (1)
	char bImpartBaseVelocityY : 0; // 0x2FC (1)
	char bImpartBaseVelocityZ : 0; // 0x4C0 (1)
	char bImpartBaseAngularVelocity : 0; // 0x518 (1)
	char bJustTeleported : 0; // 0x44C (1)
	char bNetworkUpdateReceived : 0; // 0x2FC (1)
	char bNetworkMovementModeChanged : 0; // 0x230 (1)
	char bIgnoreClientMovementErrorChecksAndCorrection : 0; // 0x6C0 (1)
	char bServerAcceptClientAuthoritativePosition : 0; // 0x480 (1)
	char bNotifyApex : 0; // 0x464 (1)
	char bCheatFlying : 0; // 0x24C (1)
	char bWantsToCrouch : 0; // 0x4B8 (1)
	char bCrouchMaintainsBaseLocation : 0; // 0x2B8 (1)
	char bIgnoreBaseRotation : 0; // 0x538 (1)
	char bFastAttachedMove : 0; // 0x218 (1)
	char bAlwaysCheckFloor : 0; // 0x430 (1)
	char bUseFlatBaseForFloorChecks : 0; // 0x238 (1)
	char bPerformingJumpOff : 0; // 0x2F1 (1)
	char bWantsToLeaveNavWalking : 0; // 0x46C (1)
	char bUseRVOAvoidance : 0; // 0x6C0 (1)
	char b : 0; // 0x498 (1)
	char bWasSimulatingRootMotion : 0; // 0x478 (1)
	char bAllowPhysicsRotationDuringAnimRootMotion : 0; // 0x44C (1)
	char bHasRequestedVelocity : 0; // 0x304 (1)
	char b : 0; // 0x52C (1)
	char bWasAvoidanceUpdated : 0; // 0x2FC (1)
	char bProjectNavMeshWalking : 0; // 0x508 (1)
	char bProjectNavMeshOnBothWorldChannels : 0; // 0x228 (1)
	float AvoidanceConsiderationRadius; // 0x448 (4)
	struct Unknown RequestedVelocity; // 0x4A0 (12)
	int32_t AvoidanceUID; // 0x250 (4)
	struct Unknown AvoidanceGroup; // 0x48C (4)
	struct Unknown GroupsToAvoid; // 0x2BC (4)
	struct Unknown GroupsToIgnore; // 0x4C4 (4)
	float AvoidanceWeight; // 0x2A8 (4)
	struct Unknown PendingLaunchVelocity; // 0x558 (12)
	float NavMeshProjectionInterval; // 0x2A4 (4)
	float NavMeshProjectionTimer; // 0x30C (4)
	float NavMeshProjectionInterpSpeed; // 0x254 (4)
	float NavMeshProjectionHeightScaleUp; // 0x234 (4)
	float NavMeshProjectionHeightScaleDown; // 0x408 (4)
	float NavWalkingFloorDistTolerance; // 0x2F8 (4)
	struct Unknown PostPhysicsTickFunction; // 0x148 (48)
	float MinTimeBetweenTimeStampResets; // 0x5B0 (4)
	struct Unknown ClientAutonomuousBase; // 0x4F0 (8)
	struct Unknown CurrentRootMotion; // 0x570 (56)
	struct Unknown RootMotionParams; // 0x5E0 (64)
	struct Unknown AnimRootMotionVelocity; // 0x2C4 (12)
	float BlockingHit_SlideAccelerator; // 0x628 (4)
	struct Unknown BlockingPhysMaterial; // 0x4B0 (8)

	void SetWalkableFloorZ(float InWalkableFloorZ); // Function Engine.CharacterMovementComponent.SetWalkableFloorZ(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB76B0>
	void SetWalkableFloorAngle(float InWalkableFloorAngle); // Function Engine.CharacterMovementComponent.SetWalkableFloorAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7630>
	void SetMovementMode(char NewMovementMode, char NewCustomMode); // Function Engine.CharacterMovementComponent.SetMovementMode(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7570>
	void SetGroupsToIgnoreMask(struct Unknown& GroupMask); // Function Engine.CharacterMovementComponent.SetGroupsToIgnoreMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB74E0>
	void SetGroupsToIgnore(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToIgnore(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7460>
	void SetGroupsToAvoidMask(struct Unknown& GroupMask); // Function Engine.CharacterMovementComponent.SetGroupsToAvoidMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB73D0>
	void SetGroupsToAvoid(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToAvoid(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7350>
	void SetAvoidanceGroupMask(struct Unknown& GroupMask); // Function Engine.CharacterMovementComponent.SetAvoidanceGroupMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB72C0>
	void SetAvoidanceGroup(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetAvoidanceGroup(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7240>
	void SetAvoidanceEnabled(char bEnable); // Function Engine.CharacterMovementComponent.SetAvoidanceEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB71B0>
	float K2_GetWalkableFloorZ(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorZ(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7180>
	float K2_GetWalkableFloorAngle(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168D6C0>
	float K2_GetModifiedMaxAcceleration(); // Function Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB7140>
	void K2_FindFloor(struct Unknown CapsuleLocation, struct Unknown& FloorResult); // Function Engine.CharacterMovementComponent.K2_FindFloor(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6FF0>
	void K2_ComputeFloorDist(struct Unknown CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct Unknown& FloorResult); // Function Engine.CharacterMovementComponent.K2_ComputeFloorDist(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6DF0>
	char IsWalking(); // Function Engine.CharacterMovementComponent.IsWalking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6DC0>
	char IsWalkable(struct Unknown& Hit); // Function Engine.CharacterMovementComponent.IsWalkable(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6CD0>
	float GetValidPerchRadius(); // Function Engine.CharacterMovementComponent.GetValidPerchRadius(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6CA0>
	float GetPerchRadiusThreshold(); // Function Engine.CharacterMovementComponent.GetPerchRadiusThreshold(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6C70>
	struct Unknown GetMovementBase(); // Function Engine.CharacterMovementComponent.GetMovementBase(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6C40>
	float GetMinAnalogSpeed(); // Function Engine.CharacterMovementComponent.GetMinAnalogSpeed(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6C00>
	float GetMaxJumpHeightWithJumpTime(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeightWithJumpTime(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6BC0>
	float GetMaxJumpHeight(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeight(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1F200>
	float GetMaxBrakingDeceleration(); // Function Engine.CharacterMovementComponent.GetMaxBrakingDeceleration(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6B80>
	float GetMaxAcceleration(); // Function Engine.CharacterMovementComponent.GetMaxAcceleration(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6B40>
	struct Unknown GetLastUpdateVelocity(); // Function Engine.CharacterMovementComponent.GetLastUpdateVelocity(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6B10>
	struct Unknown GetLastUpdateRotation(); // Function Engine.CharacterMovementComponent.GetLastUpdateRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6AC0>
	struct Unknown GetLastUpdateLocation(); // Function Engine.CharacterMovementComponent.GetLastUpdateLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6A90>
	struct Unknown GetImpartedMovementBaseVelocity(); // Function Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6A50>
	struct Unknown GetCurrentAcceleration(); // Function Engine.CharacterMovementComponent.GetCurrentAcceleration(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6A10>
	struct Unknown GetCharacterOwner(); // Function Engine.CharacterMovementComponent.GetCharacterOwner(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB69F0>
	float GetAnalogInputModifier(); // Function Engine.CharacterMovementComponent.GetAnalogInputModifier(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB69C0>
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB69A0>
	void ClearAccumulatedForces(); // Function Engine.CharacterMovementComponent.ClearAccumulatedForces(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6980>
	void CapsuleTouched(struct Unknown OverlappedComp, struct Unknown Other, struct Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, struct Unknown& SweepResult); // Function Engine.CharacterMovementComponent.CapsuleTouched(Native|Protected|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6780>
	void CalcVelocity(float DeltaTime, float Friction, char bFluid, float BrakingDeceleration); // Function Engine.CharacterMovementComponent.CalcVelocity(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6620>
	void AddImpulse(struct Unknown Impulse, char bVelocityChange); // Function Engine.CharacterMovementComponent.AddImpulse(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB6540>
	void AddForce(struct Unknown Force); // Function Engine.CharacterMovementComponent.AddForce(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB64B0>
};

// Class Engine.SceneCapture
struct ASceneCapture : UActor {
	struct Unknown MeshComp; // 0x310 (8)
	struct Unknown SceneComponent; // 0x318 (8)
};

// Class Engine.SceneCapture2D
struct ASceneCapture2D : ASceneCapture {
	struct Unknown CaptureComponent2D; // 0x320 (8)

	void OnInterpToggle(char bEnable); // Function Engine.SceneCapture2D.OnInterpToggle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC2C0>
};

// Class Engine.AssetManager
struct UAssetManager : Object {
	struct TArray<Unknown> ObjectReferenceList; // 0x2C0 (16)
	char bIsGlobalAsyncScanEnvironment : 0; // 0x2D0 (1)
	char bShouldGuessTypeAndName : 0; // 0x2D1 (1)
	char bShouldUseSynchronousLoad : 0; // 0x2D2 (1)
	char bIsLoadingFromPakFiles : 0; // 0x2D3 (1)
	char bShouldAcquireMissingChunksOnLoad : 0; // 0x2D4 (1)
	char bOnlyCookProductionAssets : 0; // 0x2D5 (1)
	char bIsBulkScanning : 0; // 0x2D6 (1)
	char bIsPrimaryAssetDirectoryCurrent : 0; // 0x2D7 (1)
	char bIsManagementDatabaseCurrent : 0; // 0x2D8 (1)
	char bUpdateManagementDatabaseAfterScan : 0; // 0x2D9 (1)
	char bIncludeOnlyOnDiskAssets : 0; // 0x2DA (1)
	int32_t NumberOfSpawnedNotifications; // 0x2DC (4)
};

// Class Engine.ShapeComponent
struct UShapeComponent : UPrimitiveComponent {
	struct Unknown ShapeBodySetup; // 0x4B8 (8)
	struct Unknown* AreaClass; // 0x4C0 (8)
	struct Unknown ShapeColor; // 0x4C8 (4)
	char bDrawOnlyIfSelected : 0; // 0x4CC (1)
	char bShouldCollideWhenPlacing : 0; // 0x4CC (1)
	char bDynamicObstacle : 0; // 0x4CC (1)
};

// Class Engine.BoxComponent
struct UBoxComponent : UShapeComponent {
	struct Unknown BoxExtent; // 0x4D0 (12)
	float LineThickness; // 0x4DC (4)

	void SetBoxExtent(struct Unknown InBoxExtent, char bUpdateOverlaps); // Function Engine.BoxComponent.SetBoxExtent(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9300>
	struct Unknown GetUnscaledBoxExtent(); // Function Engine.BoxComponent.GetUnscaledBoxExtent(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9120>
	struct Unknown GetScaledBoxExtent(); // Function Engine.BoxComponent.GetScaledBoxExtent(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA90C0>
};

// Class Engine.CameraComponent
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x238 (4)
	float OrthoWidth; // 0x23C (4)
	float OrthoNearClipPlane; // 0x240 (4)
	float OrthoFarClipPlane; // 0x244 (4)
	float AspectRatio; // 0x248 (4)
	char bConstrainAspectRatio : 0; // 0x24C (1)
	char bUseFieldOfViewForLOD : 0; // 0x24C (1)
	char bLockToHmd : 0; // 0x254 (1)
	char bUsePawnControlRotation : 0; // 0x254 (1)
	char ProjectionMode; // 0x255 (1)
	float PostProcessBlendWeight; // 0x290 (4)
	struct Unknown PostProcessSettings; // 0x2C0 (1472)

	void SetUseFieldOfViewForLOD(char bInUseFieldOfViewForLOD); // Function Engine.CameraComponent.SetUseFieldOfViewForLOD(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9870>
	void SetProjectionMode(char InProjectionMode); // Function Engine.CameraComponent.SetProjectionMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9770>
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight); // Function Engine.CameraComponent.SetPostProcessBlendWeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA96F0>
	void SetOrthoWidth(float InOrthoWidth); // Function Engine.CameraComponent.SetOrthoWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9670>
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane); // Function Engine.CameraComponent.SetOrthoNearClipPlane(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA95F0>
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane); // Function Engine.CameraComponent.SetOrthoFarClipPlane(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9570>
	void SetFieldOfView(float InFieldOfView); // Function Engine.CameraComponent.SetFieldOfView(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA94F0>
	void SetConstraintAspectRatio(char bInConstrainAspectRatio); // Function Engine.CameraComponent.SetConstraintAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA93E0>
	void SetAspectRatio(float InAspectRatio); // Function Engine.CameraComponent.SetAspectRatio(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9280>
	void RemoveBlendable(struct TScriptInterface<IUnknown> InBlendableObject); // Function Engine.CameraComponent.RemoveBlendable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9150>
	void OnCameraMeshHiddenChanged(); // Function Engine.CameraComponent.OnCameraMeshHiddenChanged(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151AF10>
	void GetCameraView(float DeltaTime, struct Unknown& DesiredView); // Function Engine.CameraComponent.GetCameraView(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA8F20>
	void AddOrUpdateBlendable(struct TScriptInterface<IUnknown> InBlendableObject, float InWeight); // Function Engine.CameraComponent.AddOrUpdateBlendable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA8DA0>
};

// Class Engine.CheatManager
struct UCheatManager : Object {
	struct Unknown DebugCameraControllerRef; // 0x28 (8)
	struct Unknown* DebugCameraControllerClass; // 0x30 (8)

	void Walk(); // Function Engine.CheatManager.Walk(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1A20>
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA80D0>
	void ViewPlayer(struct FString S); // Function Engine.CheatManager.ViewPlayer(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCD20>
	void ViewClass(struct Unknown* DesiredClass); // Function Engine.CheatManager.ViewClass(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCC90>
	void ViewActor(struct FName ActorName); // Function Engine.CheatManager.ViewActor(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCC00>
	void UpdateSafeArea(); // Function Engine.CheatManager.UpdateSafeArea(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCBE0>
	void ToggleServerStatReplicatorUpdateStatNet(); // Function Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCBC0>
	void ToggleServerStatReplicatorClientOverwrite(); // Function Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCBA0>
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C639B0>
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCB80>
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EBDF10>
	void Teleport(); // Function Engine.CheatManager.Teleport(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCB60>
	void Summon(struct FString ClassName); // Function Engine.CheatManager.Summon(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCAB0>
	void StreamLevelOut(struct FName PackageName); // Function Engine.CheatManager.StreamLevelOut(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBCA20>
	void StreamLevelIn(struct FName PackageName); // Function Engine.CheatManager.StreamLevelIn(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC990>
	void SpawnServerStatReplicator(); // Function Engine.CheatManager.SpawnServerStatReplicator(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC970>
	void Slomo(float NewTimeDilation); // Function Engine.CheatManager.Slomo(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC8F0>
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC8D0>
	void SetReflexLatencyGraph(int32_t Type, float Min, float MAX); // Function Engine.CheatManager.SetReflexLatencyGraph(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC7D0>
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC7B0>
	void ServerToggleAILogging(); // Function Engine.CheatManager.ServerToggleAILogging(Net|NetReliableNative|Event|Public|NetServer|NetValidate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC6D0>
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7890>
	void OnlyLoadLevel(struct FName PackageName); // Function Engine.CheatManager.OnlyLoadLevel(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC640>
	void LogLoc(); // Function Engine.CheatManager.LogLoc(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC620>
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC600>
	void God(); // Function Engine.CheatManager.God(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7FD0>
	void Ghost(); // Function Engine.CheatManager.Ghost(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC610>
	void FreezeFrame(float Delay); // Function Engine.CheatManager.FreezeFrame(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC580>
	void Fly(); // Function Engine.CheatManager.Fly(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34D6640>
	void FlushLog(); // Function Engine.CheatManager.FlushLog(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC560>
	void EnableDebugCamera(); // Function Engine.CheatManager.EnableDebugCamera(Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E538B0>
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC540>
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC520>
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC500>
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC4E0>
	void DisableDebugCamera(); // Function Engine.CheatManager.DisableDebugCamera(Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11F7880>
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7F00>
	void DestroyServerStatReplicator(); // Function Engine.CheatManager.DestroyServerStatReplicator(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC4C0>
	void DestroyPawns(struct Unknown* a); // Function Engine.CheatManager.DestroyPawns(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC430>
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7990>
	void DestroyAll(struct Unknown* a); // Function Engine.CheatManager.DestroyAll(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC3A0>
	void DebugCapsuleSweepSize(float HalfHeight, float Radius); // Function Engine.CheatManager.DebugCapsuleSweepSize(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC2D0>
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC2B0>
	void DebugCapsuleSweepComplex(char bTraceComplex); // Function Engine.CheatManager.DebugCapsuleSweepComplex(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC220>
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC200>
	void DebugCapsuleSweepChannel(char Channel); // Function Engine.CheatManager.DebugCapsuleSweepChannel(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC180>
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC160>
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC140>
	void DamageTarget(float DamageAmount); // Function Engine.CheatManager.DamageTarget(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC0C0>
	void CheatScript(struct FString ScriptName); // Function Engine.CheatManager.CheatScript(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBBFD0>
	void ChangeSize(float F); // Function Engine.CheatManager.ChangeSize(Exec|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBBF50>
	void BugItStringCreator(struct Unknown ViewLocation, struct Unknown ViewRotation, struct FString& GoString, struct FString& LocString); // Function Engine.CheatManager.BugItStringCreator(Exec|Native|Public|HasOutParms|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBBD80>
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Engine.CheatManager.BugItGo(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBBBB0>
	void BugIt(struct FString ScreenShotDescription); // Function Engine.CheatManager.BugIt(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBBB00>
};

// Class Engine.DamageType
struct UDamageType : Object {
	char bCausedByWorld : 0; // 0x28 (1)
	char bScaleMomentumByMass : 0; // 0x28 (1)
	char b : 0; // 0x28 (1)
	float DamageImpulse; // 0x2C (4)
	float DestructibleImpulse; // 0x30 (4)
	float DestructibleDamageSpreadScale; // 0x34 (4)
	float DamageFalloff; // 0x38 (4)
};

// Class Engine.MKDemoNetDriverEx
struct UMKDemoNetDriverEx : UNetDriver {
	struct Unknown* SpectatorControllerClass; // 0x928 (8)
	struct Unknown SelfDemoNetDriver; // 0x930 (8)

	void SetReplaySample(struct Unknown Target, struct Unknown ReplaySample, char bSaveCheckpoint); // Function Engine.MKDemoNetDriverEx.SetReplaySample(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95B20>
	void GetReplaySampleArray(struct Unknown Target, struct TArray<Unknown>& OutReplaySampleArray); // Function Engine.MKDemoNetDriverEx.GetReplaySampleArray(Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D94D90>
};

// Class Engine.DemoNetDriver
struct UDemoNetDriver : UMKDemoNetDriverEx {
	struct TMap<Unknown, Unknown>Unknown RollbackNetStartupActors; // 0xA50 (80)
	float CheckpointSaveMaxMSPerFrame; // 0xECC (4)
	struct TArray<Unknown> MulticastRecordOptions; // 0xF00 (16)
	char bIsLocalReplay : 0; // 0xF60 (1)
	struct TArray<Unknown> SpectatorControllers; // 0xF68 (16)
};

// Class Engine.StaticMeshComponent
struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x4E8 (4)
	int32_t PreviousLODLevel; // 0x4EC (4)
	int32_t MinLOD; // 0x4F0 (4)
	int32_t SubDivisionStepSize; // 0x4F4 (4)
	struct Unknown StaticMesh; // 0x4F8 (8)
	struct Unknown WireframeColorOverride; // 0x500 (4)
	char bEvaluateWorldPositionOffset : 0; // 0x504 (1)
	char bOverrideWireframeColor : 0; // 0x504 (1)
	char pad_50C_0 : 7; // 0x50C (1)
	char bOverrideMinLod : 1; // 0x504 (1)
	char bOverrideNavigationExport : 0; // 0x504 (1)
	char bForceNavigationObstacle : 0; // 0x504 (1)
	char bDisallowMeshPaintPerInstance : 0; // 0x504 (1)
	char bIgnoreInstanceForTextureStreaming : 0; // 0x504 (1)
	char bOverrideLightMapRes : 0; // 0x504 (1)
	char bCastDistanceFieldIndirectShadow : 0; // 0x505 (1)
	char bOverrideDistanceFieldSelfShadowBias : 0; // 0x505 (1)
	char bUseSubDivisions : 0; // 0x505 (1)
	char bUseDefaultCollision : 0; // 0x505 (1)
	char b : 0; // 0x505 (1)
	int32_t OverriddenLightMapRes; // 0x508 (4)
	float DistanceFieldIndirectShadowMinVisibility; // 0x50C (4)
	float DistanceFieldSelfShadowBias; // 0x510 (4)
	float StreamingDistanceMultiplier; // 0x514 (4)
	struct TArray<Unknown> LODData; // 0x518 (16)
	struct TArray<Unknown> StreamingTextureData; // 0x528 (16)
	struct Unknown LightmassSettings; // 0x538 (24)

	char SetStaticMesh(struct Unknown NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x168DBB0>
	void SetReverseCulling(char ReverseCulling); // Function Engine.StaticMeshComponent.SetReverseCulling(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1ADE0>
	void SetForcedLodModel(int32_t NewForcedLodModel); // Function Engine.StaticMeshComponent.SetForcedLodModel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1AA60>
	void SetDistanceFieldSelfShadowBias(float NewValue); // Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A7E0>
	void OnRep_StaticMesh(struct Unknown OldStaticMesh); // Function Engine.StaticMeshComponent.OnRep_StaticMesh(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A760>
	void GetLocalBounds(struct Unknown& Min, struct Unknown& MAX); // Function Engine.StaticMeshComponent.GetLocalBounds(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A5C0>
};

// Class Engine.GameEngine
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xDE8 (4)
	float ServerFlushLogInterval; // 0xDEC (4)
	struct Unknown GameInstance; // 0xDF0 (8)
};

// Class Engine.MKGameInstanceEx
struct UMKGameInstanceEx : Object {
	struct TArray<Unknown> ReplayListItemInfos; // 0x28 (16)
	struct FMulticastInlineDelegate OnEnumerateReplayListCompleteEvent; // 0x38 (16)
	struct FMulticastInlineDelegate OnDeleteReplayCompleteEvent; // 0x48 (16)
	struct FMulticastInlineDelegate OnKeepAndDeleteOldetsReplaysCompleteEvent; // 0x58 (16)
	struct FMulticastInlineDelegate OnKeepAndDeleteOldVersionReplaysCompleteEvent; // 0x68 (16)
	struct Unknown SelfGameInstance; // 0x80 (8)
	char bLoadingWidgetVisible : 0; // 0x88 (1)

	void SetTargetCamera(char bKiller); // Function Engine.MKGameInstanceEx.SetTargetCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95C30>
	void PlayReplayCommand(struct FString DemoName); // Function Engine.MKGameInstanceEx.PlayReplayCommand(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95A30>
	char PlayReplay(struct Unknown LocalPlayer, struct FString DemoName); // Function Engine.MKGameInstanceEx.PlayReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95940>
	void OnKeepAndDeleteOldVersionReplaysCompleteEvent__DelegateSignature(); // DelegateFunction Engine.MKGameInstanceEx.OnKeepAndDeleteOldVersionReplaysCompleteEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnKeepAndDeleteOldestReplaysCompleteEvent__DelegateSignature(int32_t n, char bSuccess); // DelegateFunction Engine.MKGameInstanceEx.OnKeepAndDeleteOldestReplaysCompleteEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnEnumerateStreamsCompleteEvent__DelegateSignature(int32_t OutPageIndex, int32_t OutPageSize); // DelegateFunction Engine.MKGameInstanceEx.OnEnumerateStreamsCompleteEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnDeleteStreamCompleteEvent__DelegateSignature(struct FString StreamName, char bSuccess); // DelegateFunction Engine.MKGameInstanceEx.OnDeleteStreamCompleteEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetNumOfReplays(int32_t& TotalReplays, int32_t& ReplaysToKeep); // Function Engine.MKGameInstanceEx.GetNumOfReplays(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D94CB0>
	void EnumerateReplayList(int32_t PageIndex, int32_t PageSize); // Function Engine.MKGameInstanceEx.EnumerateReplayList(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D94500>
};

// Class Engine.GameInstance
struct UGameInstance : UMKGameInstanceEx {
	struct TArray<Unknown> LocalPlayers; // 0xB8 (16)
	struct Unknown OnlineSession; // 0xC8 (8)
	struct TArray<Unknown> ReferencedObjects; // 0xD0 (16)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HandleTravelError(char FailureType); // Function Engine.GameInstance.HandleTravelError(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void HandleNetworkError(char FailureType, char bIsServer); // Function Engine.GameInstance.HandleNetworkError(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void DebugRemovePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugRemovePlayer(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6570>
	void DebugCreatePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugCreatePlayer(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE64E0>
};

// Class Engine.GameSession
struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x310 (4)
	int32_t MaxPlayers; // 0x314 (4)
	int32_t MaxPartySize; // 0x318 (4)
	char MaxSplitscreensPerConnection; // 0x31C (1)
	char b : 0; // 0x31D (1)
	struct FName SessionName; // 0x320 (8)
};

// Class Engine.InstancedStaticMeshComponent
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<Unknown> PerInstanceSMData; // 0x550 (16)
	int32_t NumCustomDataFloats; // 0x560 (4)
	struct TArray<Unknown> PerInstanceSMCustomData; // 0x568 (16)
	char bMergeCollision : 0; // 0x578 (1)
	int32_t InstancingRandomSeed; // 0x57C (4)
	int32_t InstanceStartCullDistance; // 0x580 (4)
	int32_t InstanceEndCullDistance; // 0x584 (4)
	int8_t CulldistanceType; // 0x588 (1)
	float MinScreenSizeScale; // 0x58C (4)
	char InstanceBodiesSplitRatio; // 0x590 (1)
	struct TArray<Unknown> InstanceReorderTable; // 0x598 (16)
	int32_t NumPendingLightmaps; // 0x604 (4)
	struct TArray<Unknown> CachedMappings; // 0x608 (16)

	char UpdateInstanceTransform(int32_t InstanceIndex, struct Unknown& NewInstanceTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D08220>
	char SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, char bMarkRenderStateDirty); // Function Engine.InstancedStaticMeshComponent.SetCustomDataValue(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D080D0>
	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance); // Function Engine.InstancedStaticMeshComponent.SetCullDistances(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D08010>
	char RemoveInstance(int32_t InstanceIndex); // Function Engine.InstancedStaticMeshComponent.RemoveInstance(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07F70>
	char GetInstanceTransform(int32_t InstanceIndex, struct Unknown& OutInstanceTransform, char bWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstanceTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07B70>
	struct TArray<Unknown> GetInstancesOverlappingSphere(struct Unknown& Center, float Radius, char bSphereInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07E00>
	struct TArray<Unknown> GetInstancesOverlappingBox(struct Unknown& Box, char bBoxInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07CD0>
	int32_t GetInstanceCount(); // Function Engine.InstancedStaticMeshComponent.GetInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07B40>
	void ClearInstances(char bClearBodies); // Function Engine.InstancedStaticMeshComponent.ClearInstances(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07AB0>
	char BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, struct TArray<Unknown>& NewInstancesTransforms, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D078C0>
	char BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, struct Unknown& NewInstancesTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D07690>
	int32_t AddInstanceWorldSpace(struct Unknown& WorldTransform); // Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D075B0>
	int32_t AddInstance(struct Unknown& InstanceTransform); // Function Engine.InstancedStaticMeshComponent.AddInstance(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D074D0>
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	struct TArray<Unknown> SortedInstances; // 0x628 (16)
	int32_t NumBuiltInstances; // 0x638 (4)
	struct Unknown BuiltInstanceBounds; // 0x640 (28)
	struct Unknown UnbuiltInstanceBounds; // 0x65C (28)
	struct TArray<Unknown> UnbuiltInstanceBoundsList; // 0x678 (16)
	char bEnableDensityScaling : 0; // 0x688 (1)
	int32_t OcclusionLayerNumNodes; // 0x690 (4)
	struct Unknown CacheMeshExtendedBounds; // 0x694 (28)
	char bDisableCollision : 0; // 0x6B0 (1)
	int32_t InstanceCountToRender; // 0x6B4 (4)

	char RemoveInstances(struct TArray<Unknown>& InstancesToRemove); // Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFC180>
	char DisableInstance(int32_t InstanceIndex); // Function Engine.HierarchicalInstancedStaticMeshComponent.DisableInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFA650>
};

// Class Engine.MK3DReplayController
struct AMK3DReplayController : APlayerController {
	struct FMulticastInlineDelegate OnReplayPauseEvent; // 0x6F0 (16)
	struct FMulticastInlineDelegate OnReplayJumpEvent; // 0x700 (16)
	struct FMulticastInlineDelegate OnReplayJumpCompleteEvent; // 0x710 (16)
	struct FString PlayerCameraManagerClassName; // 0x7A8 (16)
	struct FString SpectatorPawnClassName; // 0x7B8 (16)
	struct FMulticastInlineDelegate ChangeViewModeDelegate; // 0x7C8 (16)
	struct FMulticastInlineDelegate ChangeCameraTypeDelegate; // 0x7D8 (16)
	struct FMulticastInlineDelegate ChangeCameraTypeByNetGuidDelegate; // 0x7E8 (16)
	struct TArray<Unknown> WidgetInfoArray; // 0x800 (16)
	struct TMap<Unknown, Unknown>Unknown ReplayWidgetMap; // 0x810 (80)
	struct Unknown KillcamComponent; // 0x8C0 (8)
	struct Unknown TargetcamComponent; // 0x8C8 (8)
	struct Unknown pTargetPlayerInRecording; // 0x8E0 (8)
	struct FString AfterKillcamHUDClassName; // 0x8E8 (16)
	struct Unknown* AfterKillcamHUDClass; // 0x8F8 (8)
	struct FString ReplayHUDClassName; // 0x910 (16)
	struct Unknown* ReplayHUDClass; // 0x920 (8)

	void ToggleReplayPauseAndResume(); // Function Engine.MK3DReplayController.ToggleReplayPauseAndResume(Final|Native|Protected|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D913B0>
	void TimerFuncPendingSetPlayerCameraNetGuid(); // Function Engine.MK3DReplayController.TimerFuncPendingSetPlayerCameraNetGuid(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91390>
	void TimerFuncPendingSetPlayerCamera(); // Function Engine.MK3DReplayController.TimerFuncPendingSetPlayerCamera(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91370>
	void TimerFuncClearTimerSetPlayerCameraNetGuid(); // Function Engine.MK3DReplayController.TimerFuncClearTimerSetPlayerCameraNetGuid(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91350>
	void TimerFuncClearTimerSetPlayerCamera(); // Function Engine.MK3DReplayController.TimerFuncClearTimerSetPlayerCamera(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91330>
	void ShowInGameReplayHUD(); // Function Engine.MK3DReplayController.ShowInGameReplayHUD(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91310>
	void SetSpeedByIndex(int32_t WantSpeedIndex); // Function Engine.MK3DReplayController.SetSpeedByIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91290>
	void SetSpeed(float PlayTimeDilation); // Function Engine.MK3DReplayController.SetSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91210>
	char SetPlayerCamera(struct FString TargetName); // Function Engine.MK3DReplayController.SetPlayerCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D91160>
	void SetKillcamTargetCamera(char bKiller); // Function Engine.MK3DReplayController.SetKillcamTargetCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D910D0>
	char SetFreeCamera(struct Unknown& Pos, struct Unknown& Rot); // Function Engine.MK3DReplayController.SetFreeCamera(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90FD0>
	char ResumeReplay(); // Function Engine.MK3DReplayController.ResumeReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90FA0>
	void RestoreCameraLag(); // Function Engine.MK3DReplayController.RestoreCameraLag(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90F80>
	char PauseReplay(); // Function Engine.MK3DReplayController.PauseReplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90E20>
	void OnSetSpeedDelegate__DelegateSignature(); // DelegateFunction Engine.MK3DReplayController.OnSetSpeedDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnReplayPause__DelegateSignature(char bPaused); // DelegateFunction Engine.MK3DReplayController.OnReplayPause__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnReplayJumpComplete__DelegateSignature(char bSuccess); // DelegateFunction Engine.MK3DReplayController.OnReplayJumpComplete__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnReplayJump__DelegateSignature(float TimeInSec); // DelegateFunction Engine.MK3DReplayController.OnReplayJump__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnGoToEndTime(); // Function Engine.MK3DReplayController.OnGoToEndTime(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90AB0>
	void OnGoToBeginTime(); // Function Engine.MK3DReplayController.OnGoToBeginTime(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90A90>
	void OnFreeCamera(); // Function Engine.MK3DReplayController.OnFreeCamera(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90A70>
	void OnFindActorsByCursorStop(); // Function Engine.MK3DReplayController.OnFindActorsByCursorStop(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90A50>
	void OnFindActorsByCursorStart(); // Function Engine.MK3DReplayController.OnFindActorsByCursorStart(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90A30>
	void MK3DReplayController_EnableReplayKillcamUI(char bEnable); // Function Engine.MK3DReplayController.MK3DReplayController_EnableReplayKillcamUI(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D909A0>
	char IsReplaying(); // Function Engine.MK3DReplayController.IsReplaying(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90970>
	char IsPlayingReplay(); // Function Engine.MK3DReplayController.IsPlayingReplay(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90940>
	char IsPlayingLiveReplay(); // Function Engine.MK3DReplayController.IsPlayingLiveReplay(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90910>
	char IsPlayingKillcamAndBlockUI(); // Function Engine.MK3DReplayController.IsPlayingKillcamAndBlockUI(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D908E0>
	char IsPlayingKillcam(); // Function Engine.MK3DReplayController.IsPlayingKillcam(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D908B0>
	char IsPlayerViewMode(); // Function Engine.MK3DReplayController.IsPlayerViewMode(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90880>
	char IsPlayerCamera(); // Function Engine.MK3DReplayController.IsPlayerCamera(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90850>
	char IsPaused(); // Function Engine.MK3DReplayController.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90820>
	char IsFreeCamera(); // Function Engine.MK3DReplayController.IsFreeCamera(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D907F0>
	char IsFollowViewMode(); // Function Engine.MK3DReplayController.IsFollowViewMode(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D907C0>
	void IncreaseSpeedByIndex(); // Function Engine.MK3DReplayController.IncreaseSpeedByIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D907A0>
	float GetTotalTimeInSec(); // Function Engine.MK3DReplayController.GetTotalTimeInSec(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90770>
	struct Unknown GetTargetPlayer(); // Function Engine.MK3DReplayController.GetTargetPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90740>
	float GetSpeed(); // Function Engine.MK3DReplayController.GetSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90710>
	float GetReplayJumpDelay(); // Function Engine.MK3DReplayController.GetReplayJumpDelay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D906E0>
	enum class Unknow GetReplayCameraType(); // Function Engine.MK3DReplayController.GetReplayCameraType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D906B0>
	struct Unknown GetPlayerCharacter(); // Function Engine.MK3DReplayController.GetPlayerCharacter(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90680>
	enum class Unknow GetLatestReplayCameraType(); // Function Engine.MK3DReplayController.GetLatestReplayCameraType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90650>
	int32_t GetCurrnetSpeedIndex(); // Function Engine.MK3DReplayController.GetCurrnetSpeedIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90620>
	float GetCurrentTimeInSec(); // Function Engine.MK3DReplayController.GetCurrentTimeInSec(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D905F0>
	char FindViewTargetByName(struct FString TargetName, struct Unknown& OutTarget); // Function Engine.MK3DReplayController.FindViewTargetByName(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D904F0>
	int32_t FindSpeedIndex(float fSpeed); // Function Engine.MK3DReplayController.FindSpeedIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90460>
	void DecreaseSpeedByIndex(); // Function Engine.MK3DReplayController.DecreaseSpeedByIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90440>
	void ChangeViewModeDelegate__DelegateSignature(char ViewMode); // DelegateFunction Engine.MK3DReplayController.ChangeViewModeDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeCameraTypeDelegate__DelegateSignature(enum class Unknow CameraType, struct FString TargetPlayerName); // DelegateFunction Engine.MK3DReplayController.ChangeCameraTypeDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ChangeCameraTypeByNetGuidDelegate__DelegateSignature(enum class Unknow CameraType, struct FString TargetPlayerNetGuid); // DelegateFunction Engine.MK3DReplayController.ChangeCameraTypeByNetGuidDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class Engine.DefaultPawn
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x380 (4)
	float BaseLookUpRate; // 0x384 (4)
	struct Unknown MovementComponent; // 0x388 (8)
	struct Unknown CollisionComponent; // 0x390 (8)
	struct Unknown MeshComponent; // 0x398 (8)
	char bAddDefaultMovementBindings : 0; // 0x3A0 (1)

	void TurnAtRate(float Rate); // Function Engine.DefaultPawn.TurnAtRate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC95D0>
	void MoveUp_World(float Val); // Function Engine.DefaultPawn.MoveUp_World(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8C60>
	void MoveRight(float Val); // Function Engine.DefaultPawn.MoveRight(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8BE0>
	void MoveForward(float Val); // Function Engine.DefaultPawn.MoveForward(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8B60>
	void LookUpAtRate(float Rate); // Function Engine.DefaultPawn.LookUpAtRate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8AE0>
};

// Class Engine.PhysicalMaterial
struct UPhysicalMaterial : Object {
	float Friction; // 0x28 (4)
	char FrictionCombineMode; // 0x2C (1)
	char bOverrideFrictionCombineMode : 0; // 0x2D (1)
	float Restitution; // 0x30 (4)
	char RestitutionCombineMode; // 0x34 (1)
	char bOverrideRestitutionCombineMode : 0; // 0x35 (1)
	float Density; // 0x38 (4)
	float RaiseMassToPower; // 0x3C (4)
	float DestructibleDamageThresholdScale; // 0x40 (4)
	struct Unknown PhysicalMaterialProperty; // 0x48 (8)
	char SurfaceType; // 0x50 (1)
	float TireFrictionScale; // 0x54 (4)
	struct TArray<Unknown> TireFrictionScales; // 0x58 (16)
};

// Class Engine.PlayerCameraManager
struct APlayerCameraManager : UActor {
	struct Unknown PCOwner; // 0x310 (8)
	struct Unknown TransformComponent; // 0x318 (8)
	float DefaultFOV; // 0x328 (4)
	float DefaultOrthoWidth; // 0x330 (4)
	float DefaultAspectRatio; // 0x338 (4)
	struct Unknown CameraCache; // 0x380 (1632)
	struct Unknown LastFrameCameraCache; // 0x9E0 (1632)
	struct Unknown ViewTarget; // 0x1040 (1648)
	struct Unknown PendingViewTarget; // 0x16B0 (1648)
	struct Unknown CameraCachePrivate; // 0x1D50 (1632)
	struct Unknown LastFrameCameraCachePrivate; // 0x23B0 (1632)
	struct TArray<Unknown> ModifierList; // 0x2A10 (16)
	struct TArray<Unknown> DefaultModifiers; // 0x2A20 (16)
	float FreeCamDistance; // 0x2A30 (4)
	struct Unknown FreeCamOffset; // 0x2A34 (12)
	struct Unknown ViewTargetOffset; // 0x2A40 (12)
	struct TArray<Unknown> CameraLensEffects; // 0x2A60 (16)
	struct Unknown CachedCameraShakeMod; // 0x2A70 (8)
	struct Unknown AnimInstPool[0x8]; // 0x2A78 (64)
	struct TArray<Unknown> PostProcessBlendCache; // 0x2AB8 (16)
	struct TArray<Unknown> ActiveAnims; // 0x2AD8 (16)
	struct TArray<Unknown> FreeAnims; // 0x2AE8 (16)
	struct Unknown AnimCameraActor; // 0x2AF8 (8)
	char bIsOrthographic : 0; // 0x2B00 (1)
	char bDefaultConstrainAspectRatio : 0; // 0x2B00 (1)
	char bClientSimulatingViewTarget : 0; // 0x2B00 (1)
	char bUseClientSideCameraUpdates : 0; // 0x2B00 (1)
	char bGameCameraCutThisFrame : 0; // 0x2B01 (1)
	float ViewPitchMin; // 0x2B04 (4)
	float ViewPitchMax; // 0x2B08 (4)
	float ViewYawMin; // 0x2B0C (4)
	float ViewYawMax; // 0x2B10 (4)
	float ViewRollMin; // 0x2B14 (4)
	float ViewRollMax; // 0x2B18 (4)
	float ServerUpdateCameraTimeout; // 0x2B20 (4)

	void StopCameraShake(struct Unknown ShakeInstance, char bImmediately); // Function Engine.PlayerCameraManager.StopCameraShake(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBD200>
	void StopCameraFade(); // Function Engine.PlayerCameraManager.StopCameraFade(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202F670>
	void StopCameraAnimInst(struct Unknown AnimInst, char bImmediate); // Function Engine.PlayerCameraManager.StopCameraAnimInst(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBD130>
	void StopAllInstancesOfCameraShakeFromSource(struct Unknown SourceComponent, char bImmediately); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBD060>
	void StopAllInstancesOfCameraShake(struct Unknown* Shake, char bImmediately); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShake(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCF90>
	void StopAllInstancesOfCameraAnim(struct Unknown Anim, char bImmediate); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCEC0>
	void StopAllCameraShakes(char bImmediately); // Function Engine.PlayerCameraManager.StopAllCameraShakes(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCE30>
	void StopAllCameraAnims(char bImmediate); // Function Engine.PlayerCameraManager.StopAllCameraAnims(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCDA0>
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct Unknown Color, char bShouldFadeAudio, char bHoldWhenFinished); // Function Engine.PlayerCameraManager.StartCameraFade(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCBD0>
	void SetManualCameraFade(float InFadeAmount, struct Unknown Color, char bInFadeAudio); // Function Engine.PlayerCameraManager.SetManualCameraFade(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCAB0>
	void SetGameCameraCutThisFrame(); // Function Engine.PlayerCameraManager.SetGameCameraCutThisFrame(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBCA90>
	char RemoveCameraModifier(struct Unknown ModifierToRemove); // Function Engine.PlayerCameraManager.RemoveCameraModifier(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC9F0>
	void RemoveCameraLensEffect(struct Unknown Emitter); // Function Engine.PlayerCameraManager.RemoveCameraLensEffect(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE6D00>
	struct Unknown PlayCameraShakeFromSource(struct Unknown* ShakeClass, struct Unknown SourceComponent); // Function Engine.PlayerCameraManager.PlayCameraShakeFromSource(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC920>
	struct Unknown PlayCameraShake(struct Unknown* ShakeClass, float Scale, char PlaySpace, struct Unknown UserPlaySpaceRot); // Function Engine.PlayerCameraManager.PlayCameraShake(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC7B0>
	struct Unknown PlayCameraAnim(struct Unknown Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, char bLoop, char b, float Duration, char PlaySpace, struct Unknown UserPlaySpaceRot); // Function Engine.PlayerCameraManager.PlayCameraAnim(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC4D0>
	void PhotographyCameraModify(struct Unknown NewCameraLocation, struct Unknown PreviousCameraLocation, struct Unknown OriginalCameraLocation, struct Unknown& ResultCameraLocation); // Function Engine.PlayerCameraManager.PhotographyCameraModify(BlueprintCosmetic|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC350>
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart(BlueprintCosmetic|Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1B4E0>
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd(BlueprintCosmetic|Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1CD70>
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart(BlueprintCosmetic|Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12372B0>
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd(BlueprintCosmetic|Native|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
	struct Unknown GetOwningPlayerController(); // Function Engine.PlayerCameraManager.GetOwningPlayerController(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC170>
	float GetFOVAngle(); // Function Engine.PlayerCameraManager.GetFOVAngle(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBEA0>
	struct Unknown GetCameraRotation(); // Function Engine.PlayerCameraManager.GetCameraRotation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBE60>
	struct Unknown GetCameraLocation(); // Function Engine.PlayerCameraManager.GetCameraLocation(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBE20>
	struct Unknown FindCameraModifierByClass(struct Unknown* ModifierClass); // Function Engine.PlayerCameraManager.FindCameraModifierByClass(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBD80>
	void ClearCameraLensEffects(); // Function Engine.PlayerCameraManager.ClearCameraLensEffects(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x202DE70>
	char BlueprintUpdateCamera(struct Unknown CameraTarget, struct Unknown& NewCameraLocation, struct Unknown& NewCameraRotation, float& NewCameraFOV); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown AddNewCameraModifier(struct Unknown* ModifierClass); // Function Engine.PlayerCameraManager.AddNewCameraModifier(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBCE0>
	struct Unknown AddCameraLensEffect(struct Unknown* LensEffectEmitterClass); // Function Engine.PlayerCameraManager.AddCameraLensEffect(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBC40>
};

// Class Engine.MKPlayerStateEx
struct AMKPlayerStateEx : AInfo {
	struct Unknown SelfPlayerState; // 0x310 (8)
};

// Class Engine.PlayerState
struct APlayerState : AMKPlayerStateEx {
	float Score; // 0x318 (4)
	int32_t PlayerId; // 0x31C (4)
	char Ping; // 0x320 (1)
	char bShouldUpdateReplicatedPing : 0; // 0x322 (1)
	char bIsSpectator : 0; // 0x322 (1)
	char bOnlySpectator : 0; // 0x322 (1)
	char bIsABot : 0; // 0x322 (1)
	char bIsInactive : 0; // 0x322 (1)
	char bFromPreviousLevel : 0; // 0x322 (1)
	int32_t StartTime; // 0x324 (4)
	struct Unknown* EngineMessageClass; // 0x328 (8)
	struct FString SavedNetworkAddress; // 0x338 (16)
	struct Unknown UniqueID; // 0x348 (40)
	struct Unknown PawnPrivate; // 0x378 (8)
	struct FString PlayerNamePrivate; // 0x3F8 (16)

	void ReceiveOverrideWith(struct Unknown OldPlayerState); // Function Engine.PlayerState.ReceiveOverrideWith(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveCopyProperties(struct Unknown NewPlayerState); // Function Engine.PlayerState.ReceiveCopyProperties(Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1237520>
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1B4E0>
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCBF0>
	void OnRep_PlayerId(); // Function Engine.PlayerState.OnRep_PlayerId(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12371E0>
	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90310>
	struct FString GetPlayerName(); // Function Engine.PlayerState.GetPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCC2E0>
};

// Class Engine.SceneCaptureComponent
struct USceneCaptureComponent : USceneComponent {
	enum class Unknow PrimitiveRenderMode; // 0x238 (1)
	char bTonemapPropagateAlpha : 0; // 0x239 (1)
	char bUsePostProcessMaterial : 0; // 0x239 (1)
	char bUseDirectionalLights : 0; // 0x239 (1)
	char CaptureSource; // 0x23A (1)
	char bCaptureEveryFrame : 0; // 0x23B (1)
	char bCaptureOnMovement : 0; // 0x23B (1)
	char bAlwaysPersistRenderingState : 0; // 0x23C (1)
	struct TArray<Unknown> HiddenComponents; // 0x240 (16)
	struct TArray<Unknown> HiddenActors; // 0x250 (16)
	struct TArray<Unknown> ShowOnlyComponents; // 0x260 (16)
	struct TArray<Unknown> ShowOnlyActors; // 0x270 (16)
	float LODDistanceFactor; // 0x280 (4)
	float MaxViewDistanceOverride; // 0x284 (4)
	int32_t CaptureSortPriority; // 0x288 (4)
	char bUseRayTracingIfEnabled : 0; // 0x28C (1)
	struct TArray<Unknown> ShowFlagSettings; // 0x290 (16)
	struct FString ProfilingEventName; // 0x2B0 (16)

	void ShowOnlyComponent(struct Unknown InComponent); // Function Engine.SceneCaptureComponent.ShowOnlyComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8700>
	void ShowOnlyActorComponents(struct Unknown InActor, char bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.ShowOnlyActorComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8630>
	void SetCaptureSortPriority(int32_t NewCaptureSortPriority); // Function Engine.SceneCaptureComponent.SetCaptureSortPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE81E0>
	void RemoveShowOnlyComponent(struct Unknown InComponent); // Function Engine.SceneCaptureComponent.RemoveShowOnlyComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE8020>
	void RemoveShowOnlyActorComponents(struct Unknown InActor, char bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.RemoveShowOnlyActorComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE7F50>
	void HideComponent(struct Unknown InComponent); // Function Engine.SceneCaptureComponent.HideComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5B50>
	void HideActorComponents(struct Unknown InActor, char bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.HideActorComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5A80>
	void ClearShowOnlyComponents(); // Function Engine.SceneCaptureComponent.ClearShowOnlyComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5140>
	void ClearHiddenComponents(); // Function Engine.SceneCaptureComponent.ClearHiddenComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5120>
};

// Class Engine.SceneCaptureComponent2D
struct USceneCaptureComponent2D : USceneCaptureComponent {
	char ProjectionType; // 0x2D0 (1)
	float FOVAngle; // 0x2D4 (4)
	float OrthoWidth; // 0x2D8 (4)
	struct Unknown TextureTarget; // 0x2E0 (8)
	char CompositeMode; // 0x2E8 (1)
	struct Unknown PostProcessSettings; // 0x2F0 (1472)
	float PostProcessBlendWeight; // 0x8B0 (4)
	char bOverride_CustomNearClippingPlane : 0; // 0x8B4 (1)
	float CustomNearClippingPlane; // 0x8B8 (4)
	char bUseCustomProjectionMatrix : 0; // 0x8BC (1)
	struct Unknown CustomProjectionMatrix; // 0x8C0 (64)
	char bEnableClipPlane : 0; // 0x900 (1)
	struct Unknown ClipPlaneBase; // 0x904 (12)
	struct Unknown ClipPlaneNormal; // 0x910 (12)
	char bCameraCutThisFrame : 0; // 0x91C (1)
	char bConsiderUnrenderedOpaque : 0; // 0x91C (1)
	char bDisableFlipCopyGLES : 0; // 0x920 (1)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5100>
	void AddOrUpdateBlendable(struct TScriptInterface<IUnknown> InBlendableObject, float InWeight); // Function Engine.SceneCaptureComponent2D.AddOrUpdateBlendable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE4FB0>
};

// Class Engine.ArrowComponent
struct UArrowComponent : UPrimitiveComponent {
	struct Unknown ArrowColor; // 0x4B8 (4)
	float ArrowSize; // 0x4BC (4)
	float ScreenSize; // 0x4C0 (4)
	char bIsScreenSizeScaled : 0; // 0x4C4 (1)
	char bTreatAsASprite : 0; // 0x4C4 (1)

	void SetArrowColor(struct Unknown NewColor); // Function Engine.ArrowComponent.SetArrowColor(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C88900>
};

// Class Engine.NavigationObjectBase
struct ANavigationObjectBase : UActor {
	struct Unknown CapsuleComponent; // 0x318 (8)
	struct Unknown GoodSprite; // 0x320 (8)
	struct Unknown BadSprite; // 0x328 (8)
	char bIsPIEPlayerStart : 0; // 0x330 (1)
};

// Class Engine.PlayerStart
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x338 (8)
};

// Class Engine.ProjectileMovementComponent
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0xF0 (4)
	float MaxSpeed; // 0xF4 (4)
	char b : 0; // 0xF8 (1)
	char b : 0; // 0xF8 (1)
	char bShouldBounce : 0; // 0xF8 (1)
	char bInitialVelocityInLocalSpace : 0; // 0xF8 (1)
	char bForceSubStepping : 0; // 0xF8 (1)
	char bSimulationEnabled : 0; // 0xF8 (1)
	char bSweepCollision : 0; // 0xF8 (1)
	char bIsHomingProjectile : 0; // 0xF8 (1)
	char bBounceAngleAffectsFriction : 0; // 0xF9 (1)
	char bIsSliding : 0; // 0xF9 (1)
	char bInterpMovement : 0; // 0xF9 (1)
	char bInterpRotation : 0; // 0xF9 (1)
	float PreviousHitTime; // 0xFC (4)
	struct Unknown PreviousHitNormal; // 0x100 (12)
	float ProjectileGravityScale; // 0x10C (4)
	float Buoyancy; // 0x110 (4)
	float Bounciness; // 0x114 (4)
	float Friction; // 0x118 (4)
	float BounceVelocityStopSimulatingThreshold; // 0x11C (4)
	float MinFrictionFraction; // 0x120 (4)
	struct FMulticastInlineDelegate OnProjectileBounce; // 0x128 (16)
	struct FMulticastInlineDelegate OnProjectileStop; // 0x138 (16)
	float HomingAccelerationMagnitude; // 0x148 (4)
	struct TWeakObjectPtr<struct Unknown> HomingTargetComponent; // 0x14C (8)
	float MaxSimulationTimeStep; // 0x154 (4)
	int32_t MaxSimulationIterations; // 0x158 (4)
	int32_t BounceAdditionalIterations; // 0x15C (4)
	float InterpLocationTime; // 0x160 (4)
	float InterpRotationTime; // 0x164 (4)
	float InterpLocationMaxLagDistance; // 0x168 (4)
	float InterpLocationSnapToTargetDistance; // 0x16C (4)

	void StopSimulating(struct Unknown& HitResult); // Function Engine.ProjectileMovementComponent.StopSimulating(Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD84D0>
	void SetVelocityInLocalSpace(struct Unknown NewVelocity); // Function Engine.ProjectileMovementComponent.SetVelocityInLocalSpace(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD8440>
	void SetInterpolatedComponent(struct Unknown Component); // Function Engine.ProjectileMovementComponent.SetInterpolatedComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD82B0>
	void ResetInterpolation(); // Function Engine.ProjectileMovementComponent.ResetInterpolation(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD8190>
	void OnProjectileStopDelegate__DelegateSignature(struct Unknown& ImpactResult); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnProjectileBounceDelegate__DelegateSignature(struct Unknown& ImpactResult, struct Unknown& ImpactVelocity); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void MoveInterpolationTarget(struct Unknown& NewLocation, struct Unknown& NewRotation); // Function Engine.ProjectileMovementComponent.MoveInterpolationTarget(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD8020>
	struct Unknown LimitVelocity(struct Unknown NewVelocity); // Function Engine.ProjectileMovementComponent.LimitVelocity(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD7F70>
	char IsVelocityUnderSimulationThreshold(); // Function Engine.ProjectileMovementComponent.IsVelocityUnderSimulationThreshold(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD7F10>
	char IsInterpolationComplete(); // Function Engine.ProjectileMovementComponent.IsInterpolationComplete(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD7EE0>
};

// Class Engine.GameUserSettings
struct UGameUserSettings : Object {
	char bUseVSync : 0; // 0x28 (1)
	char bIsSmoothFrameRate : 0; // 0x29 (1)
	char bUseDynamicResolution : 0; // 0x2A (1)
	uint32_t ResolutionSizeX; // 0x80 (4)
	uint32_t ResolutionSizeY; // 0x84 (4)
	uint32_t LastUserConfirmedResolutionSizeX; // 0x88 (4)
	uint32_t LastUserConfirmedResolutionSizeY; // 0x8C (4)
	int32_t WindowPosX; // 0x90 (4)
	int32_t WindowPosY; // 0x94 (4)
	int32_t FullscreenMode; // 0x98 (4)
	int32_t LastConfirmedFullscreenMode; // 0x9C (4)
	int32_t PreferredFullscreenMode; // 0xA0 (4)
	uint32_t Version; // 0xA4 (4)
	int32_t AudioQualityLevel; // 0xA8 (4)
	int32_t LastConfirmedAudioQualityLevel; // 0xAC (4)
	float FrameRateLimit; // 0xB0 (4)
	float LobbyFrameRateLimit; // 0xB4 (4)
	int32_t DesiredScreenWidth; // 0xBC (4)
	char bUseDesiredScreenHeight : 0; // 0xC0 (1)
	int32_t DesiredScreenHeight; // 0xC4 (4)
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xC8 (4)
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xCC (4)
	float LastRecommendedScreenWidth; // 0xD0 (4)
	float LastRecommendedScreenHeight; // 0xD4 (4)
	float LastCPUBenchmarkResult; // 0xD8 (4)
	float LastGPUBenchmarkResult; // 0xDC (4)
	struct TArray<Unknown> LastCPUBenchmarkSteps; // 0xE0 (16)
	struct TArray<Unknown> LastGPUBenchmarkSteps; // 0xF0 (16)
	struct FString LastCPUBrand; // 0x100 (16)
	struct FString LastGPUBrand; // 0x110 (16)
	int32_t LastInstallStorageType; // 0x120 (4)
	int64_t LastTotalGraphicsMemory; // 0x128 (8)
	float LastGPUBenchmarkMultiplier; // 0x130 (4)
	char bUseHDRDisplayOutput : 0; // 0x134 (1)
	int32_t HDRDisplayOutputNits; // 0x138 (4)
	char ShowHUD : 0; // 0x13C (1)
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x140 (16)

	void ValidateSettings(); // Function Engine.GameUserSettings.ValidateSettings(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1A20>
	char SupportsHDRDisplayOutput(); // Function Engine.GameUserSettings.SupportsHDRDisplayOutput(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF79A0>
	void SetVSyncEnabled(char bEnable); // Function Engine.GameUserSettings.SetVSyncEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7810>
	void SetVisualEffectQuality(int32_t Value); // Function Engine.GameUserSettings.SetVisualEffectQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7920>
	void SetViewDistanceQuality(int32_t Value); // Function Engine.GameUserSettings.SetViewDistanceQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF78A0>
	void SetToDefaults(char bIgnoreResolutionSettings); // Function Engine.GameUserSettings.SetToDefaults(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7780>
	void SetTextureQuality(int32_t Value); // Function Engine.GameUserSettings.SetTextureQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7700>
	void SetSmoothFrameRateEnabled(char bEnable); // Function Engine.GameUserSettings.SetSmoothFrameRateEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7670>
	void SetShadowQuality(int32_t Value); // Function Engine.GameUserSettings.SetShadowQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF75F0>
	void SetShadingQuality(int32_t Value); // Function Engine.GameUserSettings.SetShadingQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7570>
	void SetScreenResolution(struct Unknown Resolution); // Function Engine.GameUserSettings.SetScreenResolution(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF74F0>
	void SetResolutionScaleValueEx(float NewScaleValue); // Function Engine.GameUserSettings.SetResolutionScaleValueEx(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7470>
	void SetResolutionScaleValue(int32_t NewScaleValue); // Function Engine.GameUserSettings.SetResolutionScaleValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF73F0>
	void SetResolutionScaleNormalized(float NewScaleNormalized); // Function Engine.GameUserSettings.SetResolutionScaleNormalized(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7370>
	void SetPostProcessingQuality(int32_t Value); // Function Engine.GameUserSettings.SetPostProcessingQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF72F0>
	void SetOverallScalabilityLevel(int32_t Value); // Function Engine.GameUserSettings.SetOverallScalabilityLevel(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7260>
	void SetLobbyFrameRateLimit(float NewLimit); // Function Engine.GameUserSettings.SetLobbyFrameRateLimit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF71E0>
	void SetFullscreenMode(char InFullscreenMode); // Function Engine.GameUserSettings.SetFullscreenMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7160>
	void SetFrameRateLimit(float NewLimit); // Function Engine.GameUserSettings.SetFrameRateLimit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF70E0>
	void SetFoliageQuality(int32_t Value); // Function Engine.GameUserSettings.SetFoliageQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF7060>
	void SetDynamicResolutionEnabled(char bEnable); // Function Engine.GameUserSettings.SetDynamicResolutionEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6FD0>
	void SetBenchmarkFallbackValues(); // Function Engine.GameUserSettings.SetBenchmarkFallbackValues(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6FB0>
	void SetAudioQualityLevel(int32_t QualityLevel); // Function Engine.GameUserSettings.SetAudioQualityLevel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6F30>
	void SetAntiAliasingQuality(int32_t Value); // Function Engine.GameUserSettings.SetAntiAliasingQuality(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6EB0>
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA7FD0>
	void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier); // Function Engine.GameUserSettings.RunHardwareBenchmark(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6DB0>
	void RevertVideoMode(); // Function Engine.GameUserSettings.RevertVideoMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6D90>
	void ResetToCurrentSettings(); // Function Engine.GameUserSettings.ResetToCurrentSettings(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C64480>
	void LoadSettings(char bForceReload); // Function Engine.GameUserSettings.LoadSettings(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6D00>
	char IsVSyncEnabled(); // Function Engine.GameUserSettings.IsVSyncEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107B020>
	char IsVSyncDirty(); // Function Engine.GameUserSettings.IsVSyncDirty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6CD0>
	char IsSmoothFrameRate(); // Function Engine.GameUserSettings.IsSmoothFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6CA0>
	char IsShowingHUD(); // Function Engine.GameUserSettings.IsShowingHUD(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6C70>
	char IsScreenResolutionDirty(); // Function Engine.GameUserSettings.IsScreenResolutionDirty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6C40>
	char IsHDREnabled(); // Function Engine.GameUserSettings.IsHDREnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6C10>
	char IsFullscreenModeDirty(); // Function Engine.GameUserSettings.IsFullscreenModeDirty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6BE0>
	char IsDynamicResolutionEnabled(); // Function Engine.GameUserSettings.IsDynamicResolutionEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6BB0>
	char IsDynamicResolutionDirty(); // Function Engine.GameUserSettings.IsDynamicResolutionDirty(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6B80>
	char IsDirty(); // Function Engine.GameUserSettings.IsDirty(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6B50>
	int32_t GetVisualEffectQuality(); // Function Engine.GameUserSettings.GetVisualEffectQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x107A980>
	int32_t GetViewDistanceQuality(); // Function Engine.GameUserSettings.GetViewDistanceQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6AC0>
	int32_t GetTextureQuality(); // Function Engine.GameUserSettings.GetTextureQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6A90>
	int32_t GetSyncInterval(); // Function Engine.GameUserSettings.GetSyncInterval(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6A60>
	int32_t GetShadowQuality(); // Function Engine.GameUserSettings.GetShadowQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1382AB0>
	int32_t GetShadingQuality(); // Function Engine.GameUserSettings.GetShadingQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1084DA0>
	struct Unknown GetScreenResolution(); // Function Engine.GameUserSettings.GetScreenResolution(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF69E0>
	float GetResolutionScaleNormalized(); // Function Engine.GameUserSettings.GetResolutionScaleNormalized(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF69B0>
	void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue); // Function Engine.GameUserSettings.GetResolutionScaleInformationEx(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6810>
	void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32_t& CurrentScaleValue, int32_t& MinScaleValue, int32_t& MaxScaleValue); // Function Engine.GameUserSettings.GetResolutionScaleInformation(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6670>
	float GetRecommendedResolutionScale(); // Function Engine.GameUserSettings.GetRecommendedResolutionScale(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6630>
	char GetPreferredFullscreenMode(); // Function Engine.GameUserSettings.GetPreferredFullscreenMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6600>
	int32_t GetPostProcessingQuality(); // Function Engine.GameUserSettings.GetPostProcessingQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF65D0>
	int32_t GetOverallScalabilityLevel(); // Function Engine.GameUserSettings.GetOverallScalabilityLevel(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6460>
	float GetLobbyFrameRateLimit(); // Function Engine.GameUserSettings.GetLobbyFrameRateLimit(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6430>
	struct Unknown GetLastConfirmedScreenResolution(); // Function Engine.GameUserSettings.GetLastConfirmedScreenResolution(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF63F0>
	char GetLastConfirmedFullscreenMode(); // Function Engine.GameUserSettings.GetLastConfirmedFullscreenMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF63C0>
	struct Unknown GetGameUserSettings(); // Function Engine.GameUserSettings.GetGameUserSettings(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6390>
	char GetFullscreenMode(); // Function Engine.GameUserSettings.GetFullscreenMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6360>
	float GetFrameRateLimit(); // Function Engine.GameUserSettings.GetFrameRateLimit(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6330>
	int32_t GetFramePace(); // Function Engine.GameUserSettings.GetFramePace(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6300>
	int32_t GetFoliageQuality(); // Function Engine.GameUserSettings.GetFoliageQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF62D0>
	struct Unknown GetDesktopResolution(); // Function Engine.GameUserSettings.GetDesktopResolution(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6290>
	struct Unknown GetDefaultWindowPosition(); // Function Engine.GameUserSettings.GetDefaultWindowPosition(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6250>
	char GetDefaultWindowMode(); // Function Engine.GameUserSettings.GetDefaultWindowMode(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6220>
	float GetDefaultResolutionScale(); // Function Engine.GameUserSettings.GetDefaultResolutionScale(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF61E0>
	struct Unknown GetDefaultResolution(); // Function Engine.GameUserSettings.GetDefaultResolution(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF61A0>
	char GetCurrentResolutionWindowMode(); // Function Engine.GameUserSettings.GetCurrentResolutionWindowMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6170>
	int32_t GetCurrentHDRDisplayNits(); // Function Engine.GameUserSettings.GetCurrentHDRDisplayNits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6140>
	int32_t GetAudioQualityLevel(); // Function Engine.GameUserSettings.GetAudioQualityLevel(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x31BD410>
	int32_t GetAntiAliasingQuality(); // Function Engine.GameUserSettings.GetAntiAliasingQuality(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x106F2E0>
	void EnableHDRDisplayOutput(char bEnable, int32_t DisplayNits); // Function Engine.GameUserSettings.EnableHDRDisplayOutput(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF6080>
	void ConfirmVideoMode(); // Function Engine.GameUserSettings.ConfirmVideoMode(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1B80>
	void ApplySettings(char bCheckForCommandLineOverrides); // Function Engine.GameUserSettings.ApplySettings(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF5FF0>
	void ApplyResolutionSettings(char bCheckForCommandLineOverrides); // Function Engine.GameUserSettings.ApplyResolutionSettings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF5F60>
	void ApplyNonResolutionSettings(); // Function Engine.GameUserSettings.ApplyNonResolutionSettings(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1BC0>
	void ApplyHardwareBenchmarkResults(); // Function Engine.GameUserSettings.ApplyHardwareBenchmarkResults(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EA80D0>
};

// Class Engine.CapsuleComponent
struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x4D0 (4)
	float CapsuleRadius; // 0x4D4 (4)

	void SetCapsuleSize(float InRadius, float InHalfHeight, char bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4EB0>
	void SetCapsuleRadius(float Radius, char bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4DE0>
	void SetCapsuleHalfHeight(float HalfHeight, char bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleHalfHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB4D10>
	void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // Function Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB30A0>
	void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // Function Engine.CapsuleComponent.GetUnscaledCapsuleSize(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2FB0>
	float GetUnscaledCapsuleRadius(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleRadius(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2F90>
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2F60>
	float GetUnscaledCapsuleHalfHeight(); // Function Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2F40>
	float GetShapeScale(); // Function Engine.CapsuleComponent.GetShapeScale(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2E20>
	void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // Function Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2D00>
	void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // Function Engine.CapsuleComponent.GetScaledCapsuleSize(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2BF0>
	float GetScaledCapsuleRadius(); // Function Engine.CapsuleComponent.GetScaledCapsuleRadius(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2BB0>
	float GetScaledCapsuleHalfHeight_WithoutHemisphere(); // Function Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2B60>
	float GetScaledCapsuleHalfHeight(); // Function Engine.CapsuleComponent.GetScaledCapsuleHalfHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2B30>
};

// Class Engine.GameViewportClient
struct UGameViewportClient : UScriptViewportClient {
	struct Unknown ViewportConsole; // 0x40 (8)
	struct TArray<Unknown> DebugProperties; // 0x48 (16)
	int32_t MaxSplitscreenPlayers; // 0x68 (4)
	struct Unknown World; // 0x78 (8)
	struct Unknown GameInstance; // 0x80 (8)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1BA0>
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1BC0>
	void SetConsoleTarget(int32_t PlayerIndex); // Function Engine.GameViewportClient.SetConsoleTarget(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CFC240>
};

// Class Engine.PhysicsVolume
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x348 (4)
	int32_t Priority; // 0x34C (4)
	float FluidFriction; // 0x350 (4)
	char bWaterVolume : 0; // 0x354 (1)
	char bPhysicsOnContact : 0; // 0x354 (1)
};

// Class Engine.WorldSettings
struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; // 0x318 (4)
	char VisibilityAggressiv; // 0x31C (1)
	char bPrecomputeVisibility : 0; // 0x31D (1)
	char bPlaceCellsOnlyAlongCameraTracks : 0; // 0x31D (1)
	char bEnableWorldBoundsChecks : 0; // 0x31D (1)
	char bEnableNavigationSystem : 0; // 0x31D (1)
	char bEnableAISystem : 0; // 0x31D (1)
	char bEnableWorldComposition : 0; // 0x31D (1)
	char bUseClientSideLevelStreamingVolumes : 0; // 0x31D (1)
	char bEnableWorldOriginRebasing : 0; // 0x31D (1)
	char bWorldGravitySet : 0; // 0x31E (1)
	char bGlobalGravitySet : 0; // 0x31E (1)
	char bMinimizeBSPSections : 0; // 0x31E (1)
	char bForceNoPrecomputedLighting : 0; // 0x31E (1)
	char bHighPriorityLoading : 0; // 0x31E (1)
	char bHighPriorityLoadingLocal : 0; // 0x31E (1)
	char bOverrideDefaultBroadphaseSettings : 0; // 0x31E (1)
	struct Unknown NavigationSystemConfig; // 0x320 (8)
	struct Unknown NavigationSystemConfigOverride; // 0x328 (8)
	float WorldToMeters; // 0x330 (4)
	float KillZ; // 0x334 (4)
	struct Unknown* KillZDamageType; // 0x338 (8)
	float WorldGravityZ; // 0x340 (4)
	float GlobalGravityZ; // 0x344 (4)
	struct Unknown* DefaultPhysicsVolumeClass; // 0x348 (8)
	struct Unknown* PhysicsCollisionHandlerClass; // 0x350 (8)
	struct Unknown* DefaultGameMode; // 0x358 (8)
	struct Unknown* GameNetworkManagerClass; // 0x360 (8)
	int32_t PackedLightAndShadowMapTextureSize; // 0x368 (4)
	struct Unknown DefaultColorScale; // 0x36C (12)
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x378 (4)
	float GlobalDistanceFieldViewDistance; // 0x37C (4)
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x380 (4)
	struct Unknown DefaultReverbSettings; // 0x388 (32)
	struct Unknown DefaultAmbientZoneSettings; // 0x3A8 (36)
	float MonoCullingDistance; // 0x3CC (4)
	struct Unknown DefaultBaseSoundMix; // 0x3D0 (8)
	float TimeDilation; // 0x3D8 (4)
	float MatineeTimeDilation; // 0x3DC (4)
	float DemoPlayTimeDilation; // 0x3E0 (4)
	float MinGlobalTimeDilation; // 0x3E4 (4)
	float MaxGlobalTimeDilation; // 0x3E8 (4)
	float MinUndilatedFrameTime; // 0x3EC (4)
	float MaxUndilatedFrameTime; // 0x3F0 (4)
	struct Unknown BroadphaseSettings; // 0x3F4 (64)
	struct Unknown Pauser; // 0x438 (8)
	struct TArray<Unknown> ReplicationViewers; // 0x440 (16)
	struct TArray<Unknown> AssetUserData; // 0x450 (16)
	struct Unknown PauserPlayerState; // 0x460 (8)
	int32_t MaxNumberOfBookmarks; // 0x468 (4)
	struct Unknown* DefaultBookmarkClass; // 0x470 (8)
	struct TArray<Unknown> BookmarkArray; // 0x478 (16)
	struct Unknown* LastBookmarkClass; // 0x488 (8)
	char bUseInstancedStaticCollision : 0; // 0x490 (1)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
};

// Class Engine.CameraModifier
struct UCameraModifier : Object {
	char bDebug : 0; // 0x28 (1)
	char bExclusive : 0; // 0x28 (1)
	char Priority; // 0x2C (1)
	struct Unknown CameraOwner; // 0x30 (8)
	float AlphaInTime; // 0x38 (4)
	float AlphaOutTime; // 0x3C (4)
	float ALPHA; // 0x40 (4)

	char IsDisabled(); // Function Engine.CameraModifier.IsDisabled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EE1B20>
	struct Unknown GetViewTarget(); // Function Engine.CameraModifier.GetViewTarget(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338A190>
	void EnableModifier(); // Function Engine.CameraModifier.EnableModifier(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC610>
	void DisableModifier(char bImmediate); // Function Engine.CameraModifier.DisableModifier(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC580>
	void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, struct Unknown& PostProcessSettings); // Function Engine.CameraModifier.BlueprintModifyPostProcess(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void BlueprintModifyCamera(float DeltaTime, struct Unknown ViewLocation, struct Unknown ViewRotation, float FOV, struct Unknown& NewViewLocation, struct Unknown& NewViewRotation, float& NewFOV); // Function Engine.CameraModifier.BlueprintModifyCamera(BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class Engine.SkyLight
struct ASkyLight : AInfo {
	struct Unknown LightComponent; // 0x310 (8)
	char bEnabled : 0; // 0x318 (1)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
};

// Class Engine.MaterialInterface
struct UMaterialInterface : Object {
	struct Unknown SubsurfaceProfile; // 0x38 (8)
	struct Unknown LightmassSettings; // 0x50 (16)
	struct TArray<Unknown> TextureStreamingData; // 0x60 (16)
	struct TArray<Unknown> AssetUserData; // 0x70 (16)

	void SetForceMipLevelsToBeResident(char OverrideForceMiplevBeResident, char bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, char bFastResponse); // Function Engine.MaterialInterface.SetForceMipLevelsToBeResident(RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D88F70>
	struct Unknown GetPhysicalMaterialMask(); // Function Engine.MaterialInterface.GetPhysicalMaterialMask(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338A160>
	struct Unknown GetPhysicalMaterialFromMap(int32_t Index); // Function Engine.MaterialInterface.GetPhysicalMaterialFromMap(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D88740>
	struct Unknown GetPhysicalMaterial(); // Function Engine.MaterialInterface.GetPhysicalMaterial(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x338A190>
	struct Unknown GetParameterInfo(char Association, struct FName ParameterName, struct Unknown LayerFunction); // Function Engine.MaterialInterface.GetParameterInfo(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D88630>
	struct Unknown GetBaseMaterial(); // Function Engine.MaterialInterface.GetBaseMaterial(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D88600>
};

// Class Engine.MaterialInstance
struct UMaterialInstance : UMaterialInterface {
	struct Unknown PhysMaterial; // 0x88 (8)
	struct Unknown PhysicalMaterialMap[0x8]; // 0x90 (64)
	struct Unknown Parent; // 0xD0 (8)
	char bHasStaticPermutationResource : 0; // 0xD8 (1)
	char bOverrideSubsurfaceProfile : 0; // 0xD8 (1)
	struct TArray<Unknown> ScalarParameterValues; // 0xE0 (16)
	struct TArray<Unknown> VectorParameterValues; // 0xF0 (16)
	struct TArray<Unknown> TextureParameterValues; // 0x100 (16)
	struct TArray<Unknown> RuntimeVirtualTextureParameterValues; // 0x110 (16)
	struct TArray<Unknown> FontParameterValues; // 0x120 (16)
	struct Unknown BasePropertyOverrides; // 0x130 (8)
	struct Unknown StaticParameters; // 0x148 (64)
	struct Unknown CachedLayerParameters; // 0x188 (416)
	struct TArray<Unknown> CachedReferencedTextures; // 0x328 (16)
};

// Class Engine.MaterialInstanceConstant
struct UMaterialInstanceConstant : UMaterialInstance {
	struct Unknown PhysMaterialMask; // 0x408 (8)

	struct Unknown K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetVectorParameterValue(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D88C70>
	struct Unknown K2_GetTextureParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetTextureParameterValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D88AA0>
	float K2_GetScalarParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetScalarParameterValue(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D888B0>
};

// Class Engine.BlueprintGeneratedClass
struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x2D0 (4)
	char bHasNativizedParent : 0; // 0x2D4 (1)
	char bHasCookedComponentInstancingData : 0; // 0x2D4 (1)
	struct TArray<Unknown> DynamicBindingObjects; // 0x2D8 (16)
	struct TArray<Unknown> ComponentTemplates; // 0x2E8 (16)
	struct TArray<Unknown> Timelines; // 0x2F8 (16)
	struct TArray<Unknown> ComponentClassOverrides; // 0x308 (16)
	struct Unknown SimpleConstructionScript; // 0x318 (8)
	struct Unknown InheritableComponentHandler; // 0x320 (8)
	struct Unknown UberGraphFramePointerProperty; // 0x328 (8)
	struct Unknown UberGraphFunction; // 0x338 (8)
	struct TMap<Unknown, Unknown>Unknown CookedComponentInstancingData; // 0x340 (80)
};

// Class Engine.CameraActor
struct ACameraActor : UActor {
	char AutoActivateForPlayer; // 0x310 (1)
	struct Unknown CameraComponent; // 0x318 (8)
	struct Unknown SceneComponent; // 0x320 (8)
	char bConstrainAspectRatio : 0; // 0x330 (1)
	float AspectRatio; // 0x334 (4)
	float FOVAngle; // 0x338 (4)
	float PostProcessBlendWeight; // 0x33C (4)
	struct Unknown PostProcessSettings; // 0x340 (1472)

	int32_t GetAutoActivatePlayerIndex(); // Function Engine.CameraActor.GetAutoActivatePlayerIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA8EF0>
};

// Class Engine.SoundBase
struct USoundBase : Object {
	struct Unknown SoundClassObject; // 0x28 (8)
	char bDebug : 0; // 0x30 (1)
	char bOverrideConcurrency : 0; // 0x30 (1)
	char bOutputToBusOnly : 0; // 0x30 (1)
	char bHasDelayNode : 0; // 0x30 (1)
	char bHasConcatenatorNode : 0; // 0x30 (1)
	char bBypassVolumeScaleForPriority : 0; // 0x30 (1)
	enum class Unknow VirtualizationMode; // 0x31 (1)
	struct TSet<Unknown> ConcurrencySet; // 0x88 (80)
	struct Unknown ConcurrencyOverrides; // 0xD8 (32)
	float Duration; // 0xF8 (4)
	float MaxDistance; // 0xFC (4)
	float TotalSamples; // 0x100 (4)
	float Priority; // 0x104 (4)
	struct Unknown AttenuationSettings; // 0x108 (8)
	struct Unknown Modulation; // 0x110 (16)
	struct Unknown SoundSubmixObject; // 0x120 (8)
	struct TArray<Unknown> SoundSubmixSends; // 0x128 (16)
	struct Unknown SourceEffectChain; // 0x138 (8)
	struct TArray<Unknown> BusSends; // 0x140 (16)
	struct TArray<Unknown> PreEffectBusSends; // 0x150 (16)
};

// Class Engine.SoundWave
struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x160 (4)
	int32_t StreamingPriority; // 0x164 (4)
	enum class Unknow SampleRateQuality; // 0x168 (1)
	char SoundGroup; // 0x16A (1)
	char bLooping : 0; // 0x16B (1)
	char bStreaming : 0; // 0x16B (1)
	char bSeekableStreaming : 0; // 0x16B (1)
	enum class Unknow LoadingBehavior; // 0x16C (1)
	char bMature : 0; // 0x16D (1)
	char bManualWordWrap : 0; // 0x16D (1)
	char bSingleLine : 0; // 0x16D (1)
	char bIsAmbisonics : 0; // 0x16E (1)
	struct TArray<Unknown> FrequenciesToAnalyze; // 0x170 (16)
	struct TArray<Unknown> CookedSpectralTimeData; // 0x180 (16)
	struct TArray<Unknown> CookedEnvelopeTimeData; // 0x190 (16)
	int32_t InitialChunkSize; // 0x1A0 (4)
	struct FString SpokenText; // 0x1E8 (16)
	float SubtitlePriority; // 0x1F8 (4)
	float Volume; // 0x1FC (4)
	float Pitch; // 0x200 (4)
	int32_t NumChannels; // 0x204 (4)
	int32_t SampleRate; // 0x208 (4)
	struct TArray<Unknown> Subtitles; // 0x218 (16)
	struct Unknown Curves; // 0x228 (8)
	struct Unknown InternalCurves; // 0x230 (8)
};

// Class Engine.BlueprintCore
struct UBlueprintCore : Object {
	struct Unknown* SkeletonGeneratedClass; // 0x28 (8)
	struct Unknown* GeneratedClass; // 0x30 (8)
	char bLegacyNeedToPurgeSkelRefs : 0; // 0x38 (1)
	struct Unknown BlueprintGuid; // 0x3C (16)
};

// Class Engine.Blueprint
struct UBlueprint : UBlueprintCore {
	struct Unknown* ParentClass; // 0x50 (8)
	char BlueprintType; // 0x58 (1)
	char b : 0; // 0x59 (1)
	char bHasBeenRegenerated : 0; // 0x59 (1)
	char bIsRegeneratingOnLoad : 0; // 0x59 (1)
	int32_t BlueprintSystemVersion; // 0x5C (4)
	struct Unknown SimpleConstructionScript; // 0x60 (8)
	struct TArray<Unknown> ComponentTemplates; // 0x68 (16)
	struct TArray<Unknown> Timelines; // 0x78 (16)
	struct TArray<Unknown> ComponentClassOverrides; // 0x88 (16)
	struct Unknown InheritableComponentHandler; // 0x98 (8)
};

// Class Engine.MKChannelEx
struct UMKChannelEx : Object {
	struct Unknown SelfChannel; // 0x30 (8)
};

// Class Engine.Channel
struct UChannel : UMKChannelEx {
	struct Unknown Connection; // 0x38 (8)
};

// Class Engine.MKActorChannelEx
struct UMKActorChannelEx : UChannel {
	struct Unknown SelfActorChannel; // 0xA0 (8)
};

// Class Engine.ActorChannel
struct UActorChannel : UMKActorChannelEx {
	struct Unknown Actor; // 0xA8 (8)
	struct TArray<Unknown> CreateSubObjects; // 0x198 (16)
};

// Class Engine.AnimationAsset
struct UAnimationAsset : Object {
	struct Unknown Skeleton; // 0x38 (8)
	struct TArray<Unknown> MetaData; // 0x60 (16)
	struct TArray<Unknown> AssetUserData; // 0x70 (16)
};

// Class Engine.BlendSpaceBase
struct UBlendSpaceBase : UAnimationAsset {
	char b : 0; // 0x88 (1)
	float AnimLength; // 0x8C (4)
	struct Unknown InterpolationParam[0x3]; // 0x90 (24)
	float TargetWeightInterpolationSpeedPerSec; // 0xA8 (4)
	char NotifyTriggerMode; // 0xAC (1)
	struct TArray<Unknown> PerBoneBlend; // 0xB0 (16)
	int32_t SampleIndexWithMarkers; // 0xC0 (4)
	struct TArray<Unknown> SampleData; // 0xC8 (16)
	struct TArray<Unknown> GridSamples; // 0xD8 (16)
	struct Unknown BlendParameters[0x3]; // 0xE8 (96)
};

// Class Engine.BlendSpace
struct UBlendSpace : UBlendSpaceBase {
	char AxisToScaleAnimation; // 0x148 (1)
};

// Class Engine.BlendSpace1D
struct UBlendSpace1D : UBlendSpaceBase {
	char bScaleAnimation : 0; // 0x148 (1)
};

// Class Engine.AISystemBase
struct UAISystemBase : Object {
	struct Unknown AISystemClassName; // 0x28 (24)
	struct FName AISystemModuleName; // 0x40 (8)
	char bInstantiateAISystemOnClient : 0; // 0x50 (1)
};

// Class Engine.AmbientSound
struct AAmbientSound : UActor {
	struct Unknown AudioComponent; // 0x310 (8)

	void Stop(); // Function Engine.AmbientSound.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C690C0>
	void Play(float StartTime); // Function Engine.AmbientSound.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68BA0>
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeOut(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68980>
	void FadeIn(float FadeInDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeIn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C688C0>
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel); // Function Engine.AmbientSound.AdjustVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C68770>
};

// Class Engine.AnimationSettings
struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38 (4)
	struct TArray<Unknown> KeyEndEffectorsMatchNameArray; // 0x40 (16)
	char ForceRecompression : 0; // 0x50 (1)
	char bOnlyCheckForMissingSkeletalMeshes : 0; // 0x51 (1)
	char bForceBelowThreshold : 0; // 0x52 (1)
	char bFirstRecompressUsingCurrentOrDefault : 0; // 0x53 (1)
	char b : 0; // 0x54 (1)
	char bEnablePerformanceLog : 0; // 0x55 (1)
	char bStripAnimationDataOnDedicatedServer : 0; // 0x56 (1)
	char bTickAnimationOnSkeletalMeshInit : 0; // 0x57 (1)
};

// Class Engine.AnimBlueprint
struct UAnimBlueprint : UBlueprint {
	struct Unknown TargetSkeleton; // 0xA8 (8)
	struct TArray<Unknown> Groups; // 0xB0 (16)
	char bUseMultiThreadedAnimationUpdate : 0; // 0xC0 (1)
	char bWarnAboutBlueprintUsage : 0; // 0xC1 (1)
};

// Class Engine.AnimBlueprintGeneratedClass
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct TArray<Unknown> BakedStateMachines; // 0x3D0 (16)
	struct Unknown TargetSkeleton; // 0x3E0 (8)
	struct TArray<Unknown> AnimNotifies; // 0x3E8 (16)
	struct TMap<Unknown, Unknown>Unknown OrderedSavedPoseIndicesMap; // 0x3F8 (80)
	struct TArray<Unknown> SyncGroupNames; // 0x4C8 (16)
	struct TArray<Unknown> EvaluateGraphExposedInputs; // 0x4D8 (16)
	struct TMap<Unknown, Unknown>Unknown GraphAssetPlayerInformation; // 0x4E8 (80)
	struct TMap<Unknown, Unknown>Unknown GraphBlendOptions; // 0x538 (80)
};

// Class Engine.AnimBoneCompressionCodec
struct UAnimBoneCompressionCodec : Object {
	struct FString Description; // 0x28 (16)
};

// Class Engine.AnimBoneCompressionSettings
struct UAnimBoneCompressionSettings : Object {
	struct TArray<Unknown> Codecs; // 0x28 (16)
};

// Class Engine.AnimClassData
struct UAnimClassData : Object {
	struct TArray<Unknown> BakedStateMachines; // 0x30 (16)
	struct Unknown TargetSkeleton; // 0x40 (8)
	struct TArray<Unknown> AnimNotifies; // 0x48 (16)
	struct TMap<Unknown, Unknown>Unknown OrderedSavedPoseIndicesMap; // 0x58 (80)
	struct TArray<Unknown> AnimBlueprintFunctions; // 0xA8 (16)
	struct TArray<Unknown> AnimBlueprintFunctionData; // 0xB8 (16)
	struct TArray<Unknown> AnimNodeProperties; // 0xC8 (16)
	struct TArray<Unknown> LinkedAnimGraphNodeProperties; // 0xE8 (16)
	struct TArray<Unknown> LinkedAnimLayerNodeProperties; // 0x108 (16)
	struct TArray<Unknown> PreUpdateNodeProperties; // 0x128 (16)
	struct TArray<Unknown> DynamicResetNodeProperties; // 0x148 (16)
	struct TArray<Unknown> StateMachineNodeProperties; // 0x168 (16)
	struct TArray<Unknown> InitializationNodeProperties; // 0x188 (16)
	struct TMap<Unknown, Unknown>Unknown GraphNameAssetPlayers; // 0x1A8 (80)
	struct TArray<Unknown> SyncGroupNames; // 0x1F8 (16)
	struct TArray<Unknown> EvaluateGraphExposedInputs; // 0x208 (16)
	struct TMap<Unknown, Unknown>Unknown GraphBlendOptions; // 0x218 (80)
};

// Class Engine.AnimSequenceBase
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<Unknown> Notifies; // 0x80 (16)
	float SequenceLength; // 0x90 (4)
	float RateScale; // 0x94 (4)
	struct Unknown RawCurveData; // 0x98 (16)

	float GetPlayLength(); // Function Engine.AnimSequenceBase.GetPlayLength(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82B30>
};

// Class Engine.AnimComposite
struct UAnimComposite : UAnimCompositeBase {
	struct Unknown AnimationTrack; // 0xA8 (16)
};

// Class Engine.AnimCompress
struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 0; // 0x38 (1)
	char TranslationCompressionFormat; // 0x3C (1)
	char RotationCompressionFormat; // 0x3D (1)
	char ScaleCompressionFormat; // 0x3E (1)
};

// Class Engine.AnimCompress_RemoveLinearKeys
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; // 0x40 (4)
	float MaxAngleDiff; // 0x44 (4)
	float MaxScaleDiff; // 0x48 (4)
	float MaxEffectorDiff; // 0x4C (4)
	float MinEffectorDiff; // 0x50 (4)
	float EffectorDiffSocket; // 0x54 (4)
	float ParentKeyScale; // 0x58 (4)
	char b : 0; // 0x5C (1)
	char bActuallyFilterLinearKeys : 0; // 0x5C (1)
};

// Class Engine.AnimCompress_PerTrackCompression
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x60 (4)
	float MaxPosDiffBitwise; // 0x64 (4)
	float MaxAngleDiffBitwise; // 0x68 (4)
	float MaxScaleDiffBitwise; // 0x6C (4)
	struct TArray<Unknown> AllowedRotationFormats; // 0x70 (16)
	struct TArray<Unknown> AllowedTranslationFormats; // 0x80 (16)
	struct TArray<Unknown> AllowedScaleFormats; // 0x90 (16)
	char b : 0; // 0xA0 (1)
	float ResampledFramerate; // 0xA4 (4)
	int32_t MinKeysForResampling; // 0xA8 (4)
	char bUseAdaptiveError : 0; // 0xAC (1)
	char bUseOverrideForEndEffectors : 0; // 0xAC (1)
	int32_t TrackHeightBias; // 0xB0 (4)
	float ParentingDivisor; // 0xB4 (4)
	float ParentingDivisorExponent; // 0xB8 (4)
	char bUseAdaptiveError2 : 0; // 0xBC (1)
	float RotationErrorSourceRatio; // 0xC0 (4)
	float TranslationErrorSourceRatio; // 0xC4 (4)
	float ScaleErrorSourceRatio; // 0xC8 (4)
	float MaxErrorPerTrackRatio; // 0xCC (4)
	float PerturbationProbeSize; // 0xD0 (4)
};

// Class Engine.AnimCompress_RemoveEverySecondKey
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40 (4)
	char bStartAtSecondKey : 0; // 0x44 (1)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40 (4)
	float MaxAngleDiff; // 0x44 (4)
	float MaxScaleDiff; // 0x48 (4)
};

// Class Engine.AnimCurveCompressionSettings
struct UAnimCurveCompressionSettings : Object {
	struct Unknown Codec; // 0x28 (8)
};

// Class Engine.AnimMontage
struct UAnimMontage : UAnimCompositeBase {
	struct Unknown BlendIn; // 0xA8 (48)
	float BlendInTime; // 0xD8 (4)
	struct Unknown BlendOut; // 0xE0 (48)
	float BlendOutTime; // 0x110 (4)
	float BlendOutTriggerTime; // 0x114 (4)
	struct FName SyncGroup; // 0x118 (8)
	int32_t SyncSlotIndex; // 0x120 (4)
	struct Unknown MarkerData; // 0x128 (32)
	struct TArray<Unknown> CompositeSections; // 0x148 (16)
	struct TArray<Unknown> SlotAnimTracks; // 0x158 (16)
	struct TArray<Unknown> BranchingPoints; // 0x168 (16)
	char bEnableRootMotionTranslation : 0; // 0x178 (1)
	char bEnableRootMotionRotation : 0; // 0x179 (1)
	char bEnableAutoBlendOut : 0; // 0x17A (1)
	char RootMotionRootLock; // 0x17B (1)
	struct TArray<Unknown> BranchingPointMarkers; // 0x180 (16)
	struct TArray<Unknown> BranchingPointStateNotifyIndices; // 0x190 (16)
	struct Unknown TimeStretchCurve; // 0x1A0 (40)
	struct FName TimeStretchCurveName; // 0x1C8 (8)

	float GetDefaultBlendOutTime(); // Function Engine.AnimMontage.GetDefaultBlendOutTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x328FC80>
};

// Class Engine.AnimNotify_PlayParticleEffect
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct Unknown PSTemplate; // 0x38 (8)
	struct Unknown LocationOffset; // 0x40 (12)
	struct Unknown RotationOffset; // 0x4C (12)
	struct Unknown Scale; // 0x58 (12)
	char Attached : 0; // 0x80 (1)
	struct FName SocketName; // 0x84 (8)
};

// Class Engine.AnimNotify_PlaySound
struct UAnimNotify_PlaySound : UAnimNotify {
	struct Unknown Sound; // 0x38 (8)
	float VolumeMultiplier; // 0x40 (4)
	float PitchMultiplier; // 0x44 (4)
	char bFollow : 0; // 0x48 (1)
	struct FName AttachName; // 0x4C (8)
};

// Class Engine.AnimNotifyState_TimedParticleEffect
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct Unknown PSTemplate; // 0x30 (8)
	struct FName SocketName; // 0x38 (8)
	struct Unknown LocationOffset; // 0x40 (12)
	struct Unknown RotationOffset; // 0x4C (12)
	char bDestroyAtEnd : 0; // 0x58 (1)
};

// Class Engine.AnimNotifyState_Trail
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct Unknown PSTemplate; // 0x30 (8)
	struct FName FirstSocketName; // 0x38 (8)
	struct FName SecondSocketName; // 0x40 (8)
	char WidthScaleMode; // 0x48 (1)
	struct FName WidthScaleCurve; // 0x4C (8)
	char b : 0; // 0x54 (1)

	struct Unknown OverridePSTemplate(struct Unknown MeshComp, struct Unknown Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate(Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class Engine.AnimSequence
struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0xA8 (4)
	struct TArray<Unknown> TrackToSkeletonMapTable; // 0xB0 (16)
	struct Unknown BoneCompressionSettings; // 0xD0 (8)
	struct Unknown CurveCompressionSettings; // 0xD8 (8)
	char AdditiveAnimType; // 0x150 (1)
	char RefPoseType; // 0x151 (1)
	struct Unknown RefPoseSeq; // 0x158 (8)
	int32_t RefFrameIndex; // 0x160 (4)
	struct FName RetargetSource; // 0x164 (8)
	enum class Unknow Interpolation; // 0x16C (1)
	char bEnableRootMotion : 0; // 0x16D (1)
	char RootMotionRootLock; // 0x16E (1)
	char bForceRootLock : 0; // 0x16F (1)
	char bUseNormalizedRootMotionScale : 0; // 0x170 (1)
	char b : 0; // 0x171 (1)
	struct TArray<Unknown> AuthoredSyncMarkers; // 0x178 (16)
};

// Class Engine.AnimSet
struct UAnimSet : Object {
	char bAnimRotationOnly : 0; // 0x28 (1)
	struct TArray<Unknown> TrackBoneNames; // 0x30 (16)
	struct TArray<Unknown> LinkupCache; // 0x40 (16)
	struct TArray<Unknown> BoneUseAnimTranslation; // 0x50 (16)
	struct TArray<Unknown> ForceUseMeshTranslation; // 0x60 (16)
	struct TArray<Unknown> UseTranslationBoneNames; // 0x70 (16)
	struct TArray<Unknown> ForceMeshTranslationBoneNames; // 0x80 (16)
	struct FName PreviewSkelMeshName; // 0x90 (8)
	struct FName BestRatioSkelMeshName; // 0x98 (8)
};

// Class Engine.AnimSingleNodeInstance
struct UAnimSingleNodeInstance : UAnimInstance {
	struct Unknown CurrentAsset; // 0x268 (8)
	struct FDelegate PostEvaluateAnimEvent; // 0x270 (16)

	void StopAnim(); // Function Engine.AnimSingleNodeInstance.StopAnim(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C83340>
	void SetReverse(char bInReverse); // Function Engine.AnimSingleNodeInstance.SetReverse(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C832B0>
	void SetPreviewCurveOverride(struct FName& PoseName, float Value, char b); // Function Engine.AnimSingleNodeInstance.SetPreviewCurveOverride(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C83190>
	void SetPositionWithPrev(float InPosition, float InPreviousTime, char bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPositionWithPrev(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C83080>
	void SetPosition(float InPosition, char bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82FB0>
	void SetPlayRate(float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetPlayRate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82EA0>
	void SetPlaying(char bIsPlaying); // Function Engine.AnimSingleNodeInstance.SetPlaying(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82F20>
	void SetLooping(char bIsLooping); // Function Engine.AnimSingleNodeInstance.SetLooping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82E10>
	void SetBlendSpaceInput(struct Unknown& InBlendInput); // Function Engine.AnimSingleNodeInstance.SetBlendSpaceInput(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82D80>
	void SetAnimationAsset(struct Unknown NewAsset, char bIsLooping, float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetAnimationAsset(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82C70>
	void PlayAnim(char bIsLooping, float InPlayRate, float InStartPosition); // Function Engine.AnimSingleNodeInstance.PlayAnim(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82B70>
	float GetLength(); // Function Engine.AnimSingleNodeInstance.GetLength(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82B00>
	struct Unknown GetAnimationAsset(); // Function Engine.AnimSingleNodeInstance.GetAnimationAsset(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C82AD0>
};

// Class Engine.AnimStreamable
struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; // 0xA8 (4)
	enum class Unknow Interpolation; // 0xAC (1)
	struct FName RetargetSource; // 0xB0 (8)
	struct Unknown BoneCompressionSettings; // 0xC8 (8)
	struct Unknown CurveCompressionSettings; // 0xD0 (8)
	char bEnableRootMotion : 0; // 0xD8 (1)
	char RootMotionRootLock; // 0xD9 (1)
	char bForceRootLock : 0; // 0xDA (1)
	char bUseNormalizedRootMotionScale : 0; // 0xDB (1)
};

// Class Engine.AssetExportTask
struct UAssetExportTask : Object {
	struct Unknown Object; // 0x28 (8)
	struct Unknown Exporter; // 0x30 (8)
	struct FString Filename; // 0x38 (16)
	char bSelected : 0; // 0x48 (1)
	char b : 0; // 0x49 (1)
	char bPrompt : 0; // 0x4A (1)
	char bAutomated : 0; // 0x4B (1)
	char bUseFileArchive : 0; // 0x4C (1)
	char bWriteEmptyFiles : 0; // 0x4D (1)
	struct TArray<Unknown> IgnoreObjectList; // 0x50 (16)
	struct Unknown options; // 0x60 (8)
	struct TArray<Unknown> Errors; // 0x68 (16)
};

// Class Engine.AssetManagerSettings
struct UAssetManagerSettings : UDeveloperSettings {
	struct TArray<Unknown> PrimaryAssetTypesToScan; // 0x38 (16)
	struct TArray<Unknown> DirectoriesToExclude; // 0x48 (16)
	struct TArray<Unknown> PrimaryAssetRules; // 0x58 (16)
	struct TArray<Unknown> CustomPrimaryAssetRules; // 0x68 (16)
	char bOnlyCookProductionAssets : 0; // 0x78 (1)
	char bShouldManagerDetermineTypeAndName : 0; // 0x79 (1)
	char bShouldGuessTypeAndNameInEditor : 0; // 0x7A (1)
	char bShouldAcquireMissingChunksOnLoad : 0; // 0x7B (1)
	struct TArray<Unknown> PrimaryAssetIdRedirects; // 0x80 (16)
	struct TArray<Unknown> PrimaryAssetTypeRedirects; // 0x90 (16)
	struct TArray<Unknown> AssetPathRedirects; // 0xA0 (16)
	struct TSet<Unknown> MetaDataTagsForAssetRegistry; // 0xB0 (80)
	char bUsePathExcludedFromScan : 0; // 0x100 (1)
	char b : 0; // 0x101 (1)
};

// Class Engine.AssetMappingTable
struct UAssetMappingTable : Object {
	struct TArray<Unknown> MappedAssets; // 0x28 (16)
};

// Class Engine.AsyncActionHandleSaveGame
struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30 (16)
	struct Unknown SaveGameObject; // 0x60 (8)

	struct Unknown AsyncSaveGameToSlot(struct Unknown WorldContextObject, struct Unknown SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CA60>
	struct Unknown AsyncLoadGameFromSlot(struct Unknown WorldContextObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncLoadGameFromSlot(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C400>
};

// Class Engine.AsyncActionLoadPrimaryAsset
struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78 (16)

	struct Unknown AsyncLoadPrimaryAsset(struct Unknown WorldContextObject, struct Unknown PrimaryAsset, struct TArray<Unknown>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C520>
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78 (16)

	struct Unknown AsyncLoadPrimaryAssetClass(struct Unknown WorldContextObject, struct Unknown PrimaryAsset, struct TArray<Unknown>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClass.AsyncLoadPrimaryAssetClass(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C660>
};

// Class Engine.AsyncActionLoadPrimaryAssetList
struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78 (16)

	struct Unknown AsyncLoadPrimaryAssetList(struct Unknown WorldContextObject, struct TArray<Unknown>& PrimaryAssetList, struct TArray<Unknown>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C900>
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78 (16)

	struct Unknown AsyncLoadPrimaryAssetClassList(struct Unknown WorldContextObject, struct TArray<Unknown>& PrimaryAssetList, struct TArray<Unknown>& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C7A0>
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78 (16)

	struct Unknown AsyncChangeBundleStateFor(struct Unknown WorldContextObject, struct TArray<Unknown>& PrimaryAssetList, struct TArray<Unknown>& AddBundles, struct TArray<Unknown>& RemoveBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateFor(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C240>
	struct Unknown AsyncChangeBundleStateForMatchingPrimaryAssets(struct Unknown WorldContextObject, struct TArray<Unknown>& NewBundles, struct TArray<Unknown>& OldBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForMatchingPrimaryAssets(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8C0E0>
};

// Class Engine.AtmosphericFog
struct AAtmosphericFog : AInfo {
	struct Unknown AtmosphericFogComponent; // 0x310 (8)
};

// Class Engine.AtmosphericFogComponent
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x238 (4)
	float FogMultiplier; // 0x23C (4)
	float DensityMultiplier; // 0x240 (4)
	float DensityOffset; // 0x244 (4)
	float DistanceScale; // 0x248 (4)
	float AltitudeScale; // 0x24C (4)
	float DistanceOffset; // 0x250 (4)
	float GroundOffset; // 0x254 (4)
	float StartDistance; // 0x258 (4)
	float SunDiscScale; // 0x25C (4)
	float DefaultBrightness; // 0x260 (4)
	struct Unknown DefaultLightColor; // 0x264 (4)
	char bDisableSunDisk : 0; // 0x268 (1)
	char bAtmosphereAffectsSunIlluminance : 0; // 0x268 (1)
	char bDisableGroundScattering : 0; // 0x268 (1)
	struct Unknown PrecomputeParams; // 0x26C (44)
	struct Unknown TransmittanceTexture; // 0x298 (8)
	struct Unknown IrradianceTexture; // 0x2A0 (8)

	void StartPrecompute(); // Function Engine.AtmosphericFogComponent.StartPrecompute(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151AF10>
	void SetSunMultiplier(float NewSunMultiplier); // Function Engine.AtmosphericFogComponent.SetSunMultiplier(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8D260>
	void SetStartDistance(float NewStartDistance); // Function Engine.AtmosphericFogComponent.SetStartDistance(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8D1E0>
	void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum); // Function Engine.AtmosphericFogComponent.SetPrecomputeParams(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8D0D0>
	void SetFogMultiplier(float NewFogMultiplier); // Function Engine.AtmosphericFogComponent.SetFogMultiplier(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8D050>
	void SetDistanceScale(float NewDistanceScale); // Function Engine.AtmosphericFogComponent.SetDistanceScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CFD0>
	void SetDistanceOffset(float NewDistanceOffset); // Function Engine.AtmosphericFogComponent.SetDistanceOffset(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CF50>
	void SetDensityOffset(float NewDensityOffset); // Function Engine.AtmosphericFogComponent.SetDensityOffset(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CED0>
	void SetDensityMultiplier(float NewDensityMultiplier); // Function Engine.AtmosphericFogComponent.SetDensityMultiplier(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CE50>
	void SetDefaultLightColor(struct Unknown NewLightColor); // Function Engine.AtmosphericFogComponent.SetDefaultLightColor(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CDD0>
	void SetDefaultBrightness(float NewBrightness); // Function Engine.AtmosphericFogComponent.SetDefaultBrightness(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CD50>
	void SetAltitudeScale(float NewAltitudeScale); // Function Engine.AtmosphericFogComponent.SetAltitudeScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CCD0>
	void DisableSunDisk(char NewSunDisk); // Function Engine.AtmosphericFogComponent.DisableSunDisk(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CC40>
	void DisableGroundScattering(char NewGroundScattering); // Function Engine.AtmosphericFogComponent.DisableGroundScattering(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8CBB0>
};

// Class Engine.AudioSettings
struct UAudioSettings : UDeveloperSettings {
	struct Unknown DefaultSoundClassName; // 0x38 (24)
	struct Unknown DefaultMediaSoundClassName; // 0x50 (24)
	struct Unknown DefaultSoundConcurrencyName; // 0x68 (24)
	struct Unknown DefaultBaseSoundMix; // 0x80 (24)
	struct Unknown VoiPSoundClass; // 0x98 (24)
	struct Unknown MasterSubmix; // 0xB0 (24)
	struct Unknown ReverbSubmix; // 0xC8 (24)
	struct Unknown EQSubmix; // 0xE0 (24)
	enum class Unknow VoiPSampleRate; // 0xF8 (4)
	float DefaultReverbSendLevel; // 0xFC (4)
	int32_t MaximumConcurrentStreams; // 0x100 (4)
	float GlobalMinPitchScale; // 0x104 (4)
	float GlobalMaxPitchScale; // 0x108 (4)
	struct TArray<Unknown> QualityLevels; // 0x110 (16)
	char bAllowPlayWhenSilent : 0; // 0x120 (1)
	char bDisableMasterEQ : 0; // 0x120 (1)
	char bAllowCenterChannel3DPanning : 0; // 0x120 (1)
	uint32_t NumStoppingSources; // 0x124 (4)
	enum class Unknow PanningMethod; // 0x128 (1)
	enum class Unknow MonoChannelUpmixMethod; // 0x129 (1)
	struct FString DialogueFilenameFormat; // 0x130 (16)
};

// Class Engine.AudioVolume
struct AAudioVolume : AVolume {
	float Priority; // 0x348 (4)
	char bEnabled : 0; // 0x34C (1)
	struct Unknown Settings; // 0x350 (32)
	struct Unknown AmbientZoneSettings; // 0x370 (36)

	void SetReverbSettings(struct Unknown& NewReverbSettings); // Function Engine.AudioVolume.SetReverbSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C909E0>
	void SetPriority(float NewPriority); // Function Engine.AudioVolume.SetPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90960>
	void SetInteriorSettings(struct Unknown& NewInteriorSettings); // Function Engine.AudioVolume.SetInteriorSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C906A0>
	void SetEnabled(char bNewEnabled); // Function Engine.AudioVolume.SetEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90480>
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90310>
};

// Class Engine.AutoDestroySubsystem
struct UAutoDestroySubsystem : UWorldSubsystem {
	struct TArray<Unknown> ActorsToPoll; // 0x38 (16)

	void OnActorEndPlay(struct Unknown Actor, char EndPlayReason); // Function Engine.AutoDestroySubsystem.OnActorEndPlay(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C97220>
};

// Class Engine.AutomationTestSettings
struct UAutomationTestSettings : Object {
	struct TArray<Unknown> EngineTestModules; // 0x28 (16)
	struct TArray<Unknown> EditorTestModules; // 0x38 (16)
	struct Unknown AutomationTestmap; // 0x48 (24)
	struct TArray<Unknown> EditorPerformanceTestMaps; // 0x60 (16)
	struct TArray<Unknown> AssetsToOpen; // 0x70 (16)
	struct Unknown BuildPromotionTest; // 0x80 (496)
	struct Unknown MaterialEditorPromotionTest; // 0x270 (48)
	struct Unknown ParticleEditorPromotionTest; // 0x2A0 (16)
	struct Unknown BlueprintEditorPromotionTest; // 0x2B0 (48)
	struct TArray<Unknown> TestLevelFolders; // 0x2E0 (16)
	struct TArray<Unknown> ExternalTools; // 0x2F0 (16)
	struct TArray<Unknown> ImportExportTestDefinitions; // 0x300 (16)
	struct TArray<Unknown> LaunchOnSettings; // 0x310 (16)
	struct Unknown DefaultScreenshotResolution; // 0x320 (8)
};

// Class Engine.AvoidanceManager
struct UAvoidanceManager : Object {
	float DefaultTimeToLive; // 0x30 (4)
	float LockTimeAfterAvoid; // 0x34 (4)
	float LockTimeAfterClean; // 0x38 (4)
	float DeltaTimeToPredict; // 0x3C (4)
	float ArtificialRadiusExpansion; // 0x40 (4)
	float TestHeightDifference; // 0x44 (4)
	float HeightCheckMargin; // 0x48 (4)

	char RegisterMovementComponent(struct Unknown MovementComp, float AvoidanceWeight); // Function Engine.AvoidanceManager.RegisterMovementComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C972E0>
	int32_t GetObjectCount(); // Function Engine.AvoidanceManager.GetObjectCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C971F0>
	int32_t GetNewAvoidanceUID(); // Function Engine.AvoidanceManager.GetNewAvoidanceUID(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C971C0>
	struct Unknown GetAvoidanceVelocityForComponent(struct Unknown MovementComp); // Function Engine.AvoidanceManager.GetAvoidanceVelocityForComponent(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C97120>
};

// Class Engine.BandwidthTestActor
struct ABandwidthTestActor : UActor {
	struct Unknown BandwidthGenerator; // 0x310 (32)
};

// Class Engine.BillboardComponent
struct UBillboardComponent : UPrimitiveComponent {
	struct Unknown Sprite; // 0x4B8 (8)
	char bIsScreenSizeScaled : 0; // 0x4C0 (1)
	float ScreenSize; // 0x4C4 (4)
	float U; // 0x4C8 (4)
	float UL; // 0x4CC (4)
	float V; // 0x4D0 (4)
	float VL; // 0x4D4 (4)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetUV(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C975C0>
	void SetSpriteAndUV(struct Unknown NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetSpriteAndUV(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C97440>
	void SetSprite(struct Unknown NewSprite); // Function Engine.BillboardComponent.SetSprite(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C973B0>
};

// Class Engine.Skeleton
struct USkeleton : Object {
	struct TArray<Unknown> BoneTree; // 0x38 (16)
	struct TArray<Unknown> RefLocalPoses; // 0x48 (16)
	struct Unknown VirtualBoneGuid; // 0x170 (16)
	struct TArray<Unknown> VirtualBones; // 0x180 (16)
	struct TArray<Unknown> Sockets; // 0x190 (16)
	struct Unknown SmartNames; // 0x1F0 (80)
	struct TArray<Unknown> BlendProfiles; // 0x270 (16)
	struct TArray<Unknown> SlotGroups; // 0x280 (16)
	struct TArray<Unknown> AssetUserData; // 0x358 (16)
};

// Class Engine.BlendProfile
struct UBlendProfile : Object {
	struct Unknown OwningSkeleton; // 0x30 (8)
	struct TArray<Unknown> ProfileEntries; // 0x38 (16)
};

// Class Engine.PlatformGameInstance
struct UPlatformGameInstance : UGameInstance {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x218 (16)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x228 (16)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x238 (16)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x248 (16)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x258 (16)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x268 (16)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x278 (16)
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x288 (16)
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x298 (16)
	struct FMulticastInlineDelegate ApplicationFailedToRegister; // 0x2A8 (16)
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x2B8 (16)
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x2C8 (16)
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x2D8 (16)
};

// Class Engine.BodySetup
struct UBodySetup : Object {
	struct Unknown AggGeom; // 0x28 (88)
	struct FName BoneName; // 0x80 (8)
	char PhysicsType; // 0x88 (1)
	char bAlwaysFullAnimWeight : 0; // 0x89 (1)
	char bConsiderForBounds : 0; // 0x89 (1)
	char bMeshCollideAll : 0; // 0x89 (1)
	char bDoubleSidedGeometry : 0; // 0x89 (1)
	char bGenerateNonMirroredCollision : 0; // 0x89 (1)
	char bSharedCookedData : 0; // 0x89 (1)
	char bGenerateMirroredCollision : 0; // 0x89 (1)
	char bSupportUVsAndFaceRemap : 0; // 0x89 (1)
	char CollisionReponse; // 0x8B (1)
	char CollisionTraceFlag; // 0x8C (1)
	struct Unknown PhysMaterial; // 0x90 (8)
	struct Unknown WalkableSlopeOverride; // 0x98 (16)
	struct Unknown DefaultInstance; // 0x120 (400)
	struct Unknown BuildScale3D; // 0x2B8 (12)
};

// Class Engine.BoneMaskFilter
struct UBoneMaskFilter : Object {
	struct TArray<Unknown> BlendPoses; // 0x28 (16)
};

// Class Engine.BookMark
struct UBookMark : UBookmarkBase {
	struct Unknown Location; // 0x28 (12)
	struct Unknown Rotation; // 0x34 (12)
	struct TArray<Unknown> HiddenLevels; // 0x40 (16)
};

// Class Engine.BookMark2D
struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28 (4)
	struct Unknown Location; // 0x2C (8)
};

// Class Engine.ReflectionCapture
struct AReflectionCapture : UActor {
	struct Unknown CaptureComponent; // 0x310 (8)
};

// Class Engine.ReflectionCaptureComponent
struct UReflectionCaptureComponent : USceneComponent {
	struct Unknown VisualizationMesh; // 0x238 (8)
	struct Unknown CaptureOffsetComponent; // 0x240 (8)
	enum class Unknow ReflectionSourceType; // 0x248 (1)
	struct Unknown Cubemap; // 0x250 (8)
	float SourceCubemapAngle; // 0x258 (4)
	float Brightness; // 0x25C (4)
	float DiffuseRadiance; // 0x260 (4)
	struct Unknown CaptureOffset; // 0x264 (12)
	struct Unknown MapBuildDataId; // 0x270 (16)
};

// Class Engine.BoxReflectionCaptureComponent
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x2C0 (4)
	struct Unknown PreviewInfluenceBox; // 0x2C8 (8)
	struct Unknown PreviewCaptureBox; // 0x2D0 (8)
};

// Class Engine.Breakpoint
struct UBreakpoint : Object {
	char bEnabled : 0; // 0x28 (1)
	struct Unknown Node; // 0x30 (8)
	char bStepOnce : 0; // 0x38 (1)
	char bStepOnce_WasPreviouslyDisabled : 0; // 0x38 (1)
	char bStepOnce_RemoveAfterHit : 0; // 0x38 (1)
};

// Class Engine.BrushBuilder
struct UBrushBuilder : Object {
	struct FString BitmapFilename; // 0x28 (16)
	struct FString Tooltip; // 0x38 (16)
	char NotifyBadParams : 0; // 0x48 (1)
	struct TArray<Unknown> Vertices; // 0x50 (16)
	struct TArray<Unknown> Polys; // 0x60 (16)
	struct FName Layer; // 0x70 (8)
	char MergeCoplanars : 0; // 0x78 (1)
};

// Class Engine.BrushComponent
struct UBrushComponent : UPrimitiveComponent {
	struct Unknown Brush; // 0x4B8 (8)
	struct Unknown BrushBodySetup; // 0x4C0 (8)
};

// Class Engine.ButtonStyleAsset
struct UButtonStyleAsset : Object {
	struct Unknown ButtonStyle; // 0x28 (632)
};

// Class Engine.CameraAnim
struct UCameraAnim : Object {
	struct Unknown CameraInterpGroup; // 0x28 (8)
	float AnimLength; // 0x30 (4)
	struct Unknown BoundingBox; // 0x34 (28)
	char b : 0; // 0x50 (1)
	char b : 0; // 0x50 (1)
	float BaseFOV; // 0x54 (4)
	struct Unknown BasePostProcessSettings; // 0x60 (1472)
	float BasePostProcessBlendWeight; // 0x620 (4)
};

// Class Engine.CameraAnimInst
struct UCameraAnimInst : Object {
	struct Unknown CamAnim; // 0x28 (8)
	struct Unknown InterpGroupInst; // 0x30 (8)
	float PlayRate; // 0x50 (4)
	struct Unknown MoveTrack; // 0x68 (8)
	struct Unknown MoveInst; // 0x70 (8)
	char PlaySpace; // 0x78 (1)

	void Stop(char bImmediate); // Function Engine.CameraAnimInst.Stop(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9900>
	void SetScale(float NewDuration); // Function Engine.CameraAnimInst.SetScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA97F0>
	void SetDuration(float NewDuration); // Function Engine.CameraAnimInst.SetDuration(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA9470>
};

// Class Engine.CameraModifier_CameraShake
struct UCameraModifier_CameraShake : UCameraModifier {
	struct TArray<Unknown> ActiveShakes; // 0x48 (16)
	struct TMap<Unknown, Unknown>Unknown ExpiredPooledShakesMap; // 0x58 (80)
	float SplitScreenShakeScale; // 0xA8 (4)
};

// Class Engine.CameraShake
struct UCameraShake : Object {
	char bSingleInstance : 0; // 0x28 (1)
	float OscillationDuration; // 0x2C (4)
	float OscillationBlendInTime; // 0x30 (4)
	float OscillationBlendOutTime; // 0x34 (4)
	struct Unknown RotOscillation; // 0x38 (36)
	struct Unknown LocOscillation; // 0x5C (36)
	struct Unknown FOVOscillation; // 0x80 (12)
	float AnimPlayRate; // 0x8C (4)
	float AnimScale; // 0x90 (4)
	float AnimBlendInTime; // 0x94 (4)
	float AnimBlendOutTime; // 0x98 (4)
	float RandomAnimSegmentDuration; // 0x9C (4)
	struct Unknown Anim; // 0xA0 (8)
	char b : 0; // 0xA8 (1)
	struct Unknown CameraOwner; // 0xC0 (8)
	float ShakeScale; // 0x148 (4)
	float OscillatorTimeRemaining; // 0x14C (4)
	struct Unknown AnimInst; // 0x150 (8)

	void ReceiveStopShake(char bImmediately); // Function Engine.CameraShake.ReceiveStopShake(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceivePlayShake(float Scale); // Function Engine.CameraShake.ReceivePlayShake(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished(Native|Event|Public|BlueprintEvent|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x176E7C0>
	void BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, struct Unknown& POV, struct Unknown& ModifiedPOV); // Function Engine.CameraShake.BlueprintUpdateCameraShake(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
};

// Class Engine.CameraShakeSourceActor
struct ACameraShakeSourceActor : UActor {
	struct Unknown CameraShakeSourceComponent; // 0x310 (8)
};

// Class Engine.CameraShakeSourceComponent
struct UCameraShakeSourceComponent : USceneComponent {
	enum class Unknow Attenuation; // 0x238 (1)
	float InnerAttenuationRadius; // 0x23C (4)
	float OuterAttenuationRadius; // 0x240 (4)
	struct Unknown* CameraShake; // 0x248 (8)
	char bAutoPlay : 0; // 0x250 (1)

	void StopAllCameraShakes(char bImmediately); // Function Engine.CameraShakeSourceComponent.StopAllCameraShakes(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADE50>
	void PlayCameraShake(struct Unknown* InCameraShake); // Function Engine.CameraShakeSourceComponent.PlayCameraShake(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADDD0>
	void Play(); // Function Engine.CameraShakeSourceComponent.Play(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADDB0>
	float GetAttenuationFactor(struct Unknown& Location); // Function Engine.CameraShakeSourceComponent.GetAttenuationFactor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC630>
};

// Class Engine.Canvas
struct UCanvas : Object {
	float OrgX; // 0x28 (4)
	float OrgY; // 0x2C (4)
	float ClipX; // 0x30 (4)
	float ClipY; // 0x34 (4)
	struct Unknown DrawColor; // 0x38 (4)
	char bCenterX : 0; // 0x3C (1)
	char bCenterY : 0; // 0x3C (1)
	char bNoSmooth : 0; // 0x3C (1)
	int32_t SizeX; // 0x40 (4)
	int32_t SizeY; // 0x44 (4)
	struct Unknown ColorModulate; // 0x50 (16)
	struct Unknown DefaultTexture; // 0x60 (8)
	struct Unknown GradientTexture0; // 0x68 (8)
	struct Unknown ReporterGraph; // 0x70 (8)

	struct Unknown K2_TextSize(struct Unknown RenderFont, struct FString RenderText, struct Unknown Scale); // Function Engine.Canvas.K2_TextSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADC80>
	struct Unknown K2_StrLen(struct Unknown RenderFont, struct FString RenderText); // Function Engine.Canvas.K2_StrLen(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADB90>
	struct Unknown K2_Project(struct Unknown WorldLocation); // Function Engine.Canvas.K2_Project(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CADAE0>
	void K2_DrawTriangle(struct Unknown RenderTexture, struct TArray<Unknown> Triangles); // Function Engine.Canvas.K2_DrawTriangle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD9C0>
	void K2_DrawTexture(struct Unknown RenderTexture, struct Unknown ScreenPosition, struct Unknown ScreenSize, struct Unknown CoordinatePosition, struct Unknown CoordinateSize, struct Unknown RenderColor, char BlendMode, float Rotation, struct Unknown PivotPoint); // Function Engine.Canvas.K2_DrawTexture(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD740>
	void K2_DrawText(struct Unknown RenderFont, struct FString RenderText, struct Unknown ScreenPosition, struct Unknown Scale, struct Unknown RenderColor, float Kerning, struct Unknown ShadowColor, struct Unknown ShadowOffset, char bCentreX, char bCentreY, char bOutlined, struct Unknown OutlineColor); // Function Engine.Canvas.K2_DrawText(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD3A0>
	void K2_DrawPolygon(struct Unknown RenderTexture, struct Unknown ScreenPosition, struct Unknown Radius, int32_t NumberOfSides, struct Unknown RenderColor); // Function Engine.Canvas.K2_DrawPolygon(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD210>
	void K2_DrawMaterialTriangle(struct Unknown RenderMaterial, struct TArray<Unknown> Triangles); // Function Engine.Canvas.K2_DrawMaterialTriangle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAD0F0>
	void K2_DrawMaterial(struct Unknown RenderMaterial, struct Unknown ScreenPosition, struct Unknown ScreenSize, struct Unknown CoordinatePosition, struct Unknown CoordinateSize, float Rotation, struct Unknown PivotPoint); // Function Engine.Canvas.K2_DrawMaterial(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACED0>
	void K2_DrawLine(struct Unknown ScreenPositionA, struct Unknown ScreenPositionB, float Thickness, struct Unknown RenderColor); // Function Engine.Canvas.K2_DrawLine(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACD80>
	void K2_DrawBox(struct Unknown ScreenPosition, struct Unknown ScreenSize, float Thickness, struct Unknown RenderColor); // Function Engine.Canvas.K2_DrawBox(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CACC30>
	void K2_DrawBorder(struct Unknown BorderTexture, struct Unknown BackgroundTexture, struct Unknown LeftBorderTexture, struct Unknown RightBorderTexture, struct Unknown TopBorderTexture, struct Unknown BottomBorderTexture, struct Unknown ScreenPosition, struct Unknown ScreenSize, struct Unknown CoordinatePosition, struct Unknown CoordinateSize, struct Unknown RenderColor, struct Unknown BorderScale, struct Unknown BackgroundScale, float Rotation, struct Unknown PivotPoint, struct Unknown CornerSize); // Function Engine.Canvas.K2_DrawBorder(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC7F0>
	void K2_Deproject(struct Unknown ScreenPosition, struct Unknown& WorldOrigin, struct Unknown& WorldDirection); // Function Engine.Canvas.K2_Deproject(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CAC6D0>
};

// Class Engine.TextureRenderTarget
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xB8 (4)
};

// Class Engine.TextureRenderTarget2D
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xC0 (4)
	int32_t SizeY; // 0xC4 (4)
	struct Unknown ClearColor; // 0xC8 (16)
	char AddressX; // 0xD8 (1)
	char AddressY; // 0xD9 (1)
	char bForceLinearGamma : 0; // 0xDA (1)
	char bHDR : 0; // 0xDA (1)
	char bGPUSharedFlag : 0; // 0xDA (1)
	char RenderTargetFormat; // 0xDB (1)
	char bAutoGenerateMips : 0; // 0xDC (1)
	char MipsSamplerFilter; // 0xDD (1)
	char MipsAddressU; // 0xDE (1)
	char MipsAddressV; // 0xDF (1)
	char OverrideFormat; // 0xE0 (1)
};

// Class Engine.CanvasRenderTarget2D
struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xE8 (16)
	struct TWeakObjectPtr<struct Unknown> World; // 0xF8 (8)
	char bShouldClearRenderTargetOnReceiveUpdate : 0; // 0x100 (1)

	void UpdateResource(); // Function Engine.CanvasRenderTarget2D.UpdateResource(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB5050>
	void ReceiveUpdate(struct Unknown Canvas, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.ReceiveUpdate(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void GetSize(int32_t& Width, int32_t& Height); // Function Engine.CanvasRenderTarget2D.GetSize(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2E60>
	struct Unknown CreateCanvasRenderTarget2D(struct Unknown WorldContextObject, struct Unknown* CanvasRenderTarget2DClass, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2870>
};

// Class Engine.ChaosPhysicalMaterial
struct UChaosPhysicalMaterial : Object {
	float Friction; // 0x28 (4)
	float StaticFriction; // 0x2C (4)
	float Restitution; // 0x30 (4)
	float LinearEtherDrag; // 0x34 (4)
	float AngularEtherDrag; // 0x38 (4)
	float SleepingLinearVelocityThreshold; // 0x3C (4)
	float SleepingAngularVelocityThreshold; // 0x40 (4)
};

// Class Engine.CheckBoxStyleAsset
struct UCheckBoxStyleAsset : Object {
	struct Unknown CheckBoxStyle; // 0x28 (1408)
};

// Class Engine.ChildActorComponent
struct UChildActorComponent : USceneComponent {
	struct Unknown* ChildActorClass; // 0x238 (8)
	struct Unknown ChildActor; // 0x240 (8)
	struct Unknown ChildActorTemplate; // 0x248 (8)

	void SetChildActorClass(struct Unknown* InClass); // Function Engine.ChildActorComponent.SetChildActorClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CBC720>
};

// Class Engine.ChildConnection
struct UChildConnection : UNetConnection {
	struct Unknown Parent; // 0x1AA0 (8)
};

// Class Engine.PlatformInterfaceBase
struct UPlatformInterfaceBase : Object {
	struct TArray<Unknown> AllDelegates; // 0x28 (16)
};

// Class Engine.CloudStorageBase
struct UCloudStorageBase : UPlatformInterfaceBase {
	struct TArray<Unknown> LocalCloudFiles; // 0x38 (16)
	char bSuppressDelegateCalls : 0; // 0x48 (1)
};

// Class Engine.CollisionProfile
struct UCollisionProfile : UDeveloperSettings {
	struct TArray<Unknown> Profiles; // 0x38 (16)
	struct TArray<Unknown> DefaultChannelResponses; // 0x48 (16)
	struct TArray<Unknown> EditProfiles; // 0x58 (16)
	struct TArray<Unknown> ProfileRedirects; // 0x68 (16)
	struct TArray<Unknown> CollisionChannelRedirects; // 0x78 (16)
};

// Class Engine.ComponentDelegateBinding
struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<Unknown> ComponentDelegateBindings; // 0x28 (16)
};

// Class Engine.CompositeCurveTable
struct UCompositeCurveTable : UCurveTable {
	struct TArray<Unknown> ParentTables; // 0xA0 (16)
	struct TArray<Unknown> OldParentTables; // 0xB0 (16)
};

// Class Engine.DataTable
struct UDataTable : Object {
	struct Unknown RowStruct; // 0x28 (8)
	char bStripFromClientBuilds : 0; // 0x80 (1)
	char bIgnoreExtraFields : 0; // 0x80 (1)
	char bIgnoreMissingFields : 0; // 0x80 (1)
	struct FString ImportKeyField; // 0x88 (16)
};

// Class Engine.CompositeDataTable
struct UCompositeDataTable : UDataTable {
	struct TArray<Unknown> ParentTables; // 0xC8 (16)
	struct TArray<Unknown> OldParentTables; // 0xD8 (16)
};

// Class Engine.Console
struct UConsole : Object {
	struct Unknown ConsoleTargetPlayer; // 0x38 (8)
	struct Unknown DefaultTexture_Black; // 0x40 (8)
	struct Unknown DefaultTexture_White; // 0x48 (8)
	struct TArray<Unknown> HistoryBuffer; // 0x68 (16)
};

// Class Engine.StreamingSettings
struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 0; // 0x38 (1)
	char AsyncPostLoadEnabled : 0; // 0x38 (1)
	char WarnIfTimeLimitExceeded : 0; // 0x38 (1)
	float TimeLimitExceededMultiplier; // 0x3C (4)
	float TimeLimitExceededMinTime; // 0x40 (4)
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44 (4)
	char UseBackgroundLevelStreaming : 0; // 0x48 (1)
	char AsyncLoadingUseFullTimeLimit : 0; // 0x48 (1)
	float AsyncLoadingTimeLimit; // 0x4C (4)
	float PriorityAsyncLoadingExtraTime; // 0x50 (4)
	float LevelStreamingActorsUpdateTimeLimit; // 0x54 (4)
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58 (4)
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5C (4)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60 (4)
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64 (4)
	char FlushStreamingOnExit : 0; // 0x68 (1)
	char EventDrivenLoaderEnabled : 0; // 0x68 (1)
};

// Class Engine.GarbageCollectionSettings
struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38 (4)
	char FlushStreamingOnGC : 0; // 0x3C (1)
	char AllowParallelGC : 0; // 0x3C (1)
	char IncrementalBeginDestroyEnabled : 0; // 0x3C (1)
	char MultithreadedDestructionEnabled : 0; // 0x3C (1)
	char CreateGCClusters : 0; // 0x3C (1)
	char AssetClusteringEnabled : 0; // 0x3C (1)
	char ActorClusteringEnabled : 0; // 0x3C (1)
	char BlueprintClusteringEnabled : 0; // 0x3C (1)
	char UseDisregardForGCOnDedicatedServers : 0; // 0x3D (1)
	int32_t MinGCClusterSize; // 0x40 (4)
	int32_t NumRetriesBeforeForcingGC; // 0x44 (4)
	int32_t MaxObjectsNotConsideredByGC; // 0x48 (4)
	int32_t SizeOfPermanentObjectPool; // 0x4C (4)
	int32_t MaxObjectsInGame; // 0x50 (4)
	int32_t MaxObjectsInEditor; // 0x54 (4)
};

// Class Engine.CullDistanceVolume
struct ACullDistanceVolume : AVolume {
	struct TArray<Unknown> CullDistances; // 0x348 (16)
	char bEnabled : 0; // 0x358 (1)
};

// Class Engine.CurveFloat
struct UCurveFloat : UCurveBase {
	struct Unknown FloatCurve; // 0x30 (128)
	char bIsEventCurve : 0; // 0xB0 (1)

	float GetFloatValue(float InTime); // Function Engine.CurveFloat.GetFloatValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC4CB0>
};

// Class Engine.CurveLinearColor
struct UCurveLinearColor : UCurveBase {
	struct Unknown FloatCurves[0x4]; // 0x30 (512)
	float AdjustHue; // 0x230 (4)
	float AdjustSaturation; // 0x234 (4)
	float AdjustBrightness; // 0x238 (4)
	float AdjustBrightnessCurve; // 0x23C (4)
	float AdjustVibrance; // 0x240 (4)
	float AdjustMinAlpha; // 0x244 (4)
	float AdjustMaxAlpha; // 0x248 (4)

	struct Unknown GetLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetLinearColorValue(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC4D40>
	struct Unknown GetClampedLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetClampedLinearColorValue(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC4340>
};

// Class Engine.Texture2D
struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xB8 (4)
	int32_t FirstResourceMemMip; // 0xBC (4)
	char bTemporarilyDisableStreaming : 0; // 0xC0 (1)
	char AddressX; // 0xC1 (1)
	char AddressY; // 0xC2 (1)
	struct Unknown ImportedSize; // 0xC4 (8)

	int32_t Blueprint_GetSizeY(); // Function Engine.Texture2D.Blueprint_GetSizeY(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23030>
	int32_t Blueprint_GetSizeX(); // Function Engine.Texture2D.Blueprint_GetSizeX(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23000>
};

// Class Engine.CurveLinearColorAtlas
struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0xE8 (4)
	struct TArray<Unknown> GradientCurves; // 0xF0 (16)

	char GetCurvePosition(struct Unknown InCurve, float& Position); // Function Engine.CurveLinearColorAtlas.GetCurvePosition(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC43E0>
};

// Class Engine.CurveVector
struct UCurveVector : UCurveBase {
	struct Unknown FloatCurves[0x3]; // 0x30 (384)

	struct Unknown GetVectorValue(float InTime); // Function Engine.CurveVector.GetVectorValue(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC4FD0>
};

// Class Engine.DebugCameraController
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 0; // 0x6F0 (1)
	char bIsFrozenRendering : 0; // 0x6F0 (1)
	char bOverrideInitialMaxSpeed : 0; // 0x6F0 (1)
	float OverrideInitialMaxSpeed; // 0x6F4 (4)
	char bIsOrbitingSelectedActor : 0; // 0x6F8 (1)
	char bOrbitPivotUseCenter : 0; // 0x6F8 (1)
	char bEnableBufferVisualization : 0; // 0x6F8 (1)
	char bEnableBufferVisualizationFullMode : 0; // 0x6F8 (1)
	char bIsBufferVisualizationInputSetup : 0; // 0x6F8 (1)
	char bLastDisplayEnabled : 0; // 0x6F8 (1)
	struct Unknown DrawFrustum; // 0x700 (8)
	struct Unknown SelectedActor; // 0x708 (8)
	struct Unknown SelectedComponent; // 0x710 (8)
	struct Unknown SelectedHitPoint; // 0x718 (136)
	struct Unknown OriginalControllerRef; // 0x7A0 (8)
	struct Unknown OriginalPlayer; // 0x7A8 (8)
	float SpeedScale; // 0x7B0 (4)
	float InitialMaxSpeed; // 0x7B4 (4)
	float InitialAccel; // 0x7B8 (4)
	float InitialDecel; // 0x7BC (4)

	void ToggleDisplay(); // Function Engine.DebugCameraController.ToggleDisplay(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC5110>
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo(Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC50F0>
	void SetPawnMovementSpeedScale(float NewSpeedScale); // Function Engine.DebugCameraController.SetPawnMovementSpeedScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC5070>
	void ReceiveOnDeactivate(struct Unknown RestoredPC); // Function Engine.DebugCameraController.ReceiveOnDeactivate(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveOnActorSelected(struct Unknown NewSelectedActor, struct Unknown& SelectHitLocation, struct Unknown& SelectHitNormal, struct Unknown& Hit); // Function Engine.DebugCameraController.ReceiveOnActorSelected(Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void ReceiveOnActivate(struct Unknown OriginalPC); // Function Engine.DebugCameraController.ReceiveOnActivate(Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	struct Unknown GetSelectedActor(); // Function Engine.DebugCameraController.GetSelectedActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC4DE0>
};

// Class Engine.DebugCameraControllerSettings
struct UDebugCameraControllerSettings : UDeveloperSettings {
	struct TArray<Unknown> CycleViewModes; // 0x38 (16)
};

// Class Engine.DecalActor
struct ADecalActor : UActor {
	struct Unknown Decal; // 0x310 (8)

	void SetDecalMaterial(struct Unknown NewDecalMaterial); // Function Engine.DecalActor.SetDecalMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8DE0>
	struct Unknown GetDecalMaterial(); // Function Engine.DecalActor.GetDecalMaterial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC89C0>
	struct Unknown CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8960>
};

// Class Engine.DecalComponent
struct UDecalComponent : USceneComponent {
	struct Unknown DecalMaterial; // 0x238 (8)
	int32_t SortOrder; // 0x240 (4)
	float FadeScreenSize; // 0x244 (4)
	float FadeStartDelay; // 0x248 (4)
	float FadeDuration; // 0x24C (4)
	float FadeInDuration; // 0x250 (4)
	float FadeInStartDelay; // 0x254 (4)
	char bDestroyOwnerAfterFade : 0; // 0x258 (1)
	struct Unknown DecalSize; // 0x25C (12)

	void SetSortOrder(int32_t Value); // Function Engine.DecalComponent.SetSortOrder(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC9550>
	void SetFadeScreenSize(float NewFadeScreenSize); // Function Engine.DecalComponent.SetFadeScreenSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC92C0>
	void SetFadeOut(float StartDelay, float Duration, char DestroyOwnerAfterFade); // Function Engine.DecalComponent.SetFadeOut(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC91B0>
	void SetFadeIn(float StartDelay, float Duaration); // Function Engine.DecalComponent.SetFadeIn(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC90F0>
	void SetDecalMaterial(struct Unknown NewDecalMaterial); // Function Engine.DecalComponent.SetDecalMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8E60>
	float GetFadeStartDelay(); // Function Engine.DecalComponent.GetFadeStartDelay(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8AB0>
	float GetFadeInStartDelay(); // Function Engine.DecalComponent.GetFadeInStartDelay(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8A80>
	float GetFadeInDuration(); // Function Engine.DecalComponent.GetFadeInDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8A50>
	float GetFadeDuration(); // Function Engine.DecalComponent.GetFadeDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8A20>
	struct Unknown GetDecalMaterial(); // Function Engine.DecalComponent.GetDecalMaterial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC89F0>
	struct Unknown CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8990>
};

// Class Engine.MKDemoNetConnectionEx
struct UMKDemoNetConnectionEx : UNetConnection {
	struct Unknown SelfDemoNetConnection; // 0x1BE8 (8)
};

// Class Engine.PendingNetGame
struct UPendingNetGame : Object {
	struct Unknown NetDriver; // 0x30 (8)
	struct Unknown DemoNetDriver; // 0x38 (8)
};

// Class Engine.TextureLODSettings
struct UTextureLODSettings : Object {
	struct TArray<Unknown> TextureLODGroups; // 0x28 (16)
};

// Class Engine.DeviceProfile
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x38 (16)
	struct FString BaseProfileName; // 0x48 (16)
	struct Unknown Parent; // 0x58 (8)
	struct TArray<Unknown> CVars; // 0x78 (16)
};

// Class Engine.DeviceProfileManager
struct UDeviceProfileManager : Object {
	struct TArray<Unknown> Profiles; // 0x28 (16)
};

// Class Engine.DialogueVoice
struct UDialogueVoice : Object {
	enum class Unknown gender; // 0x28 (1)
	char Plurality; // 0x29 (1)
	struct Unknown LocalizationGUID; // 0x2C (16)
};

// Class Engine.DialogueWave
struct UDialogueWave : Object {
	char bMature : 0; // 0x28 (1)
	char bOverride_SubtitleOverride : 0; // 0x28 (1)
	struct FString SpokenText; // 0x30 (16)
	struct FString SubtitleOverride; // 0x40 (16)
	struct TArray<Unknown> ContextMappings; // 0x50 (16)
	struct Unknown LocalizationGUID; // 0x60 (16)
};

// Class Engine.Light
struct ALight : UActor {
	struct Unknown LightComponent; // 0x310 (8)
	char bEnabled : 0; // 0x318 (1)

	void ToggleEnabled(); // Function Engine.Light.ToggleEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E8B0>
	void SetLightFunctionScale(struct Unknown NewLightFunctionScale); // Function Engine.Light.SetLightFunctionScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E140>
	void SetLightFunctionMaterial(struct Unknown NewLightFunctionMaterial); // Function Engine.Light.SetLightFunctionMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E040>
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.Light.SetLightFunctionFadeDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DF40>
	void SetLightColor(struct Unknown NewLightColor); // Function Engine.Light.SetLightColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DD70>
	void SetEnabled(char bSetEnabled); // Function Engine.Light.SetEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D9D0>
	void SetCastShadows(char bNewValue); // Function Engine.Light.SetCastShadows(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D6F0>
	void SetBrightness(float NewBrightness); // Function Engine.Light.SetBrightness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D670>
	void SetAffectTranslucentLighting(char bNewValue); // Function Engine.Light.SetAffectTranslucentLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D360>
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
	char IsEnabled(); // Function Engine.Light.IsEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CD30>
	struct Unknown GetLightColor(); // Function Engine.Light.GetLightColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CC90>
	float GetBrightness(); // Function Engine.Light.GetBrightness(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CC30>
};

// Class Engine.LightComponentBase
struct ULightComponentBase : USceneComponent {
	struct Unknown LightGuid; // 0x238 (16)
	float Brightness; // 0x248 (4)
	float Intensity; // 0x24C (4)
	struct Unknown LightColor; // 0x250 (4)
	char bAffectsWorld : 0; // 0x254 (1)
	char CastShadows : 0; // 0x254 (1)
	char CastStaticShadows : 0; // 0x254 (1)
	char CastDynamicShadows : 0; // 0x254 (1)
	char bAffectTranslucentLighting : 0; // 0x254 (1)
	char bTransmission : 0; // 0x254 (1)
	char bCastVolumetricShadow : 0; // 0x254 (1)
	char bCastDeepShadow : 0; // 0x254 (1)
	char bCastRaytracedShadow : 0; // 0x255 (1)
	char bAffectReflection : 0; // 0x255 (1)
	char bAffectGlobalIllumination : 0; // 0x255 (1)
	float IndirectLightingIntensity; // 0x258 (4)
	float VolumetricScatteringIntensity; // 0x25C (4)
	float VolumetricAttenuationScale; // 0x260 (4)
	float VolumetricSourceRadiusScale; // 0x264 (4)
	int32_t SamplesPerPixel; // 0x268 (4)

	void SetSamplesPerPixel(int32_t NewValue); // Function Engine.LightComponentBase.SetSamplesPerPixel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D71530>
	void SetCastVolumetricShadow(char bNewValue); // Function Engine.LightComponentBase.SetCastVolumetricShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D71420>
	void SetCastShadows(char bNewValue); // Function Engine.LightComponentBase.SetCastShadows(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D71390>
	void SetCastRaytracedShadow(char bNewValue); // Function Engine.LightComponentBase.SetCastRaytracedShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D71300>
	void SetCastDeepShadow(char bNewValue); // Function Engine.LightComponentBase.SetCastDeepShadow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D71270>
	void SetAffectReflection(char bNewValue); // Function Engine.LightComponentBase.SetAffectReflection(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D71160>
	void SetAffectGlobalIllumination(char bNewValue); // Function Engine.LightComponentBase.SetAffectGlobalIllumination(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D710D0>
	struct Unknown GetLightColor(); // Function Engine.LightComponentBase.GetLightColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D70F90>
};

// Class Engine.LightComponent
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x270 (4)
	float MaxDrawDistance; // 0x274 (4)
	float MaxDistanceFadeRange; // 0x278 (4)
	char bUseTemperature : 0; // 0x27C (1)
	int32_t ShadowMapChannel; // 0x280 (4)
	float MinRoughness; // 0x288 (4)
	float SpecularScale; // 0x28C (4)
	float ShadowResolutionScale; // 0x290 (4)
	float ShadowBias; // 0x294 (4)
	float ShadowSlopeBias; // 0x298 (4)
	float ShadowSharpen; // 0x29C (4)
	float ContactShadowLength; // 0x2A0 (4)
	char ContactShadowLengthInWS : 0; // 0x2A4 (1)
	float ContactShadowStartDistance; // 0x2A8 (4)
	float ContactShadowFadeDistance; // 0x2AC (4)
	float ShadowStrength; // 0x2B0 (4)
	float TranslucentShadowDensity; // 0x2B4 (4)
	char InverseSquaredFalloff : 0; // 0x2B8 (1)
	char CastTranslucentShadows : 0; // 0x2B8 (1)
	char bCastShadowsFromCinematicObjectsOnly : 0; // 0x2B8 (1)
	char bAffectDynamicIndirectLighting : 0; // 0x2B8 (1)
	char bForceCachedShadowsFromMovablePrimitivesAsStatic : 0; // 0x2B8 (1)
	char bForceCachedShadowsForMovablePrimitives : 0; // 0x2B8 (1)
	struct Unknown LightingChannels; // 0x2BC (1)
	struct Unknown LightFunctionMaterial; // 0x2C0 (8)
	struct Unknown LightFunctionScale; // 0x2C8 (12)
	struct Unknown IESTexture; // 0x2D8 (8)
	char bUseIESBrightness : 0; // 0x2E0 (1)
	float IESBrightnessScale; // 0x2E4 (4)
	float LightFunctionFadeDistance; // 0x2E8 (4)
	float DisabledBrightness; // 0x2EC (4)
	char bEnableLightShaftBloom : 0; // 0x2F0 (1)
	float BloomScale; // 0x2F4 (4)
	float BloomThreshold; // 0x2F8 (4)
	float BloomMaxBrightness; // 0x2FC (4)
	struct Unknown BloomTint; // 0x300 (4)
	char bUseFoliageLighting : 0; // 0x304 (1)
	char bUseRayTracedDistanceFieldShadows : 0; // 0x305 (1)
	float RayStartOffsetDepthScale; // 0x308 (4)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.LightComponent.SetVolumetricScatteringIntensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E830>
	void SetUseIESBrightness(char bNewValue); // Function Engine.LightComponent.SetUseIESBrightness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E7A0>
	void SetTransmission(char bNewValue); // Function Engine.LightComponent.SetTransmission(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E710>
	void SetTemperature(float NewTemperature); // Function Engine.LightComponent.SetTemperature(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E690>
	void SetSpecularScale(float NewValue); // Function Engine.LightComponent.SetSpecularScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E610>
	void SetShadowSlopeBias(float NewValue); // Function Engine.LightComponent.SetShadowSlopeBias(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E500>
	void SetShadowResolutionScale(float NewValue); // Function Engine.LightComponent.SetShadowResolutionScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E480>
	void SetShadowBias(float NewValue); // Function Engine.LightComponent.SetShadowBias(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E400>
	void SetLightingChannels(char bChannel0, char bChannel1, char bChannel2); // Function Engine.LightComponent.SetLightingChannels(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E260>
	void SetLightFunctionScale(struct Unknown NewLightFunctionScale); // Function Engine.LightComponent.SetLightFunctionScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E1D0>
	void SetLightFunctionMaterial(struct Unknown NewLightFunctionMaterial); // Function Engine.LightComponent.SetLightFunctionMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E0C0>
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.LightComponent.SetLightFunctionFadeDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DFC0>
	void SetLightFunctionDisabledBrightness(float NewValue); // Function Engine.LightComponent.SetLightFunctionDisabledBrightness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DEC0>
	void SetLightColor(struct Unknown NewLightColor, char bSRGB); // Function Engine.LightComponent.SetLightColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DDF0>
	void SetIntensity(float NewIntensity); // Function Engine.LightComponent.SetIntensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DC70>
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.LightComponent.SetIndirectLightingIntensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DBF0>
	void SetIESTexture(struct Unknown NewValue); // Function Engine.LightComponent.SetIESTexture(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DB70>
	void SetIESBrightnessScale(float NewValue); // Function Engine.LightComponent.SetIESBrightnessScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DAF0>
	void SetForceCachedShadowsForMovablePrimitives(char bNewValue); // Function Engine.LightComponent.SetForceCachedShadowsForMovablePrimitives(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DA60>
	void SetEnableLightShaftBloom(char bNewValue); // Function Engine.LightComponent.SetEnableLightShaftBloom(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D940>
	void SetBloomTint(struct Unknown NewValue); // Function Engine.LightComponent.SetBloomTint(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D600>
	void SetBloomThreshold(float NewValue); // Function Engine.LightComponent.SetBloomThreshold(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D580>
	void SetBloomScale(float NewValue); // Function Engine.LightComponent.SetBloomScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D500>
	void SetBloomMaxBrightness(float NewValue); // Function Engine.LightComponent.SetBloomMaxBrightness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D480>
	void SetAffectTranslucentLighting(char bNewValue); // Function Engine.LightComponent.SetAffectTranslucentLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D3F0>
	void SetAffectDynamicIndirectLighting(char bNewValue); // Function Engine.LightComponent.SetAffectDynamicIndirectLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D2D0>
};

// Class Engine.DirectionalLightComponent
struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x380 (4)
	char bEnableLightShaftOcclusion : 0; // 0x384 (1)
	float OcclusionMaskDarkness; // 0x388 (4)
	float OcclusionDepthRange; // 0x38C (4)
	struct Unknown LightShaftOverrideDirection; // 0x390 (12)
	float WholeSceneDynamicShadowRadius; // 0x39C (4)
	float DynamicShadowDistanceMovableLight; // 0x3A0 (4)
	float DynamicShadowDistanceStationaryLight; // 0x3A4 (4)
	int32_t DynamicShadowCascades; // 0x3A8 (4)
	float CascadeDistributionExponent; // 0x3AC (4)
	float CascadeTransitionFraction; // 0x3B0 (4)
	float ShadowDistanceFadeoutFraction; // 0x3B4 (4)
	char bUseInsetShadowsForMovableObjects : 0; // 0x3B8 (1)
	int32_t FarShadowCascadeCount; // 0x3BC (4)
	float FarShadowDistance; // 0x3C0 (4)
	char bUseFarShadowAsStaticWorldShadow : 0; // 0x3C4 (1)
	float DistanceFieldShadowDistance; // 0x3C8 (4)
	float LightSourceAngle; // 0x3CC (4)
	float LightSourceSoftAngle; // 0x3D0 (4)
	float TraceDistance; // 0x3D4 (4)
	struct Unknown LightmassSettings; // 0x3D8 (16)
	char bCastModulatedShadows : 0; // 0x3E8 (1)
	struct Unknown ModulatedShadowColor; // 0x3EC (4)
	float ShadowAmount; // 0x3F0 (4)
	char bUsedAsAtmosphereSunLight : 0; // 0x3F4 (1)
	int32_t AtmosphereSunLightIndex; // 0x3F8 (4)

	void SetShadowDistanceFadeoutFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC94D0>
	void SetShadowAmount(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowAmount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC9450>
	void SetOcclusionMaskDarkness(float NewValue); // Function Engine.DirectionalLightComponent.SetOcclusionMaskDarkness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC93D0>
	void SetLightShaftOverrideDirection(struct Unknown NewValue); // Function Engine.DirectionalLightComponent.SetLightShaftOverrideDirection(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC9340>
	void SetEnableLightShaftOcclusion(char bNewValue); // Function Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC9060>
	void SetDynamicShadowDistanceStationaryLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8FE0>
	void SetDynamicShadowDistanceMovableLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8F60>
	void SetDynamicShadowCascades(int32_t NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowCascades(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8EE0>
	void SetCascadeTransitionFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeTransitionFraction(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8D60>
	void SetCascadeDistributionExponent(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeDistributionExponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CC8CE0>
};

// Class Engine.DistributionFloat
struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 0; // 0x30 (1)
	char bBakedDataSuccesfully : 0; // 0x30 (1)
};

// Class Engine.DistributionFloatConstant
struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38 (4)
};

// Class Engine.DistributionFloatConstantCurve
struct UDistributionFloatConstantCurve : UDistributionFloat {
	struct Unknown ConstantCurve; // 0x38 (24)
};

// Class Engine.DistributionFloatParameterBase
struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	struct FName ParameterName; // 0x40 (8)
	float MinInput; // 0x48 (4)
	float MaxInput; // 0x4C (4)
	float MinOutput; // 0x50 (4)
	float MaxOutput; // 0x54 (4)
	char ParamMode; // 0x58 (1)
};

// Class Engine.DistributionFloatUniform
struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38 (4)
	float MAX; // 0x3C (4)
};

// Class Engine.DistributionFloatUniformCurve
struct UDistributionFloatUniformCurve : UDistributionFloat {
	struct Unknown ConstantCurve; // 0x38 (24)
};

// Class Engine.DistributionVector
struct UDistributionVector : UDistribution {
	char bCanBeBaked : 0; // 0x30 (1)
	char bIsDirty : 0; // 0x30 (1)
	char bBakedDataSuccesfully : 0; // 0x30 (1)
};

// Class Engine.DistributionVectorConstant
struct UDistributionVectorConstant : UDistributionVector {
	struct Unknown Constant; // 0x38 (12)
	char bLockAxes : 0; // 0x44 (1)
	char LockedAxes; // 0x48 (1)
};

// Class Engine.DistributionVectorConstantCurve
struct UDistributionVectorConstantCurve : UDistributionVector {
	struct Unknown ConstantCurve; // 0x38 (24)
	char bLockAxes : 0; // 0x50 (1)
	char LockedAxes; // 0x54 (1)
};

// Class Engine.DistributionVectorParameterBase
struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	struct FName ParameterName; // 0x50 (8)
	struct Unknown MinInput; // 0x58 (12)
	struct Unknown MaxInput; // 0x64 (12)
	struct Unknown MinOutput; // 0x70 (12)
	struct Unknown MaxOutput; // 0x7C (12)
	char ParamModes[0x3]; // 0x88 (3)
};

// Class Engine.DistributionVectorUniform
struct UDistributionVectorUniform : UDistributionVector {
	struct Unknown MAX; // 0x38 (12)
	struct Unknown Min; // 0x44 (12)
	char bLockAxes : 0; // 0x50 (1)
	char LockedAxes; // 0x54 (1)
	char MirrorFlags[0x3]; // 0x55 (3)
	char bUseExtremes : 0; // 0x58 (1)
};

// Class Engine.DistributionVectorUniformCurve
struct UDistributionVectorUniformCurve : UDistributionVector {
	struct Unknown ConstantCurve; // 0x38 (24)
	char bLockAxes1 : 0; // 0x50 (1)
	char bLockAxes2 : 0; // 0x50 (1)
	char LockedAxes[0x2]; // 0x54 (2)
	char MirrorFlags[0x3]; // 0x56 (3)
	char bUseExtremes : 0; // 0x5C (1)
};

// Class Engine.DrawFrustumComponent
struct UDrawFrustumComponent : UPrimitiveComponent {
	struct Unknown FrustumColor; // 0x4B8 (4)
	float FrustumAngle; // 0x4BC (4)
	float FrustumAspectRatio; // 0x4C0 (4)
	float FrustumStartDist; // 0x4C4 (4)
	float FrustumEndDist; // 0x4C8 (4)
	struct Unknown Texture; // 0x4D0 (8)
};

// Class Engine.SphereComponent
struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x4D0 (4)

	void SetSphereRadius(float InSphereRadius, char bUpdateOverlaps); // Function Engine.SphereComponent.SetSphereRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E10F30>
	float GetUnscaledSphereRadius(); // Function Engine.SphereComponent.GetUnscaledSphereRadius(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CB2F40>
	float GetShapeScale(); // Function Engine.SphereComponent.GetShapeScale(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F410>
	float GetScaledSphereRadius(); // Function Engine.SphereComponent.GetScaledSphereRadius(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E0F3C0>
};

// Class Engine.EdGraph
struct UEdGraph : Object {
	struct Unknown* Schema; // 0x28 (8)
	struct TArray<Unknown> Nodes; // 0x30 (16)
	char bEditable : 0; // 0x40 (1)
	char bAllowDeletion : 0; // 0x40 (1)
	char bAllowRenaming : 0; // 0x40 (1)
};

// Class Engine.GraphNodeContextMenuContext
struct UGraphNodeContextMenuContext : Object {
	struct Unknown Blueprint; // 0x28 (8)
	struct Unknown Graph; // 0x30 (8)
	struct Unknown Node; // 0x38 (8)
	char bIsDebugging : 0; // 0x48 (1)
};

// Class Engine.EdGraphNode
struct UEdGraphNode : Object {
	struct TArray<Unknown> DeprecatedPins; // 0x38 (16)
	int32_t NodePosX; // 0x48 (4)
	int32_t NodePosY; // 0x4C (4)
	int32_t NodeWidth; // 0x50 (4)
	int32_t NodeHeight; // 0x54 (4)
	char AdvancedPinDisplay; // 0x58 (1)
	enum class Unknow EnabledState; // 0x59 (1)
	char bDisplayAsDisabled : 0; // 0x5B (1)
	char bUserSetEnabledState : 0; // 0x5B (1)
	char bIsNodeEnabled : 0; // 0x5B (1)
	char bHasCompilerMessage : 0; // 0x5B (1)
	struct FString NodeComment; // 0x60 (16)
	int32_t ErrorType; // 0x70 (4)
	struct FString ErrorMsg; // 0x78 (16)
	struct Unknown NodeGuid; // 0x88 (16)
};

// Class Engine.EdGraphNode_Documentation
struct UEdGraphNode_Documentation : UEdGraphNode {
	struct FString Link; // 0x98 (16)
	struct FString Excerpt; // 0xA8 (16)
};

// Class Engine.EdGraphPin_Deprecated
struct UEdGraphPin_Deprecated : Object {
	struct FString PinName; // 0x28 (16)
	struct FString PinToolTip; // 0x38 (16)
	char Direction; // 0x48 (1)
	struct Unknown PinType; // 0x50 (88)
	struct FString DefaultValue; // 0xA8 (16)
	struct FString AutogeneratedDefaultValue; // 0xB8 (16)
	struct Unknown DefaultObject; // 0xC8 (8)
	struct FText DefaultTextValue; // 0xD0 (24)
	struct TArray<Unknown> LinkedTo; // 0xE8 (16)
	struct TArray<Unknown> SubPins; // 0xF8 (16)
	struct Unknown ParentPin; // 0x108 (8)
	struct Unknown ReferencePassThroughConnection; // 0x110 (8)
};

// Class Engine.Emitter
struct AEmitter : UActor {
	struct Unknown ParticleSystemComponent; // 0x310 (8)
	char bDestroyOnSystemFinish : 0; // 0x318 (1)
	char bPostUpdateTickGroup : 0; // 0x318 (1)
	char bCurrentlyActive : 0; // 0x318 (1)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x320 (16)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x330 (16)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x340 (16)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x350 (16)

	void ToggleActive(); // Function Engine.Emitter.ToggleActive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1BF0>
	void SetVectorParameter(struct FName ParameterName, struct Unknown Param); // Function Engine.Emitter.SetVectorParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1B20>
	void SetTemplate(struct Unknown NewTemplate); // Function Engine.Emitter.SetTemplate(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12372D0>
	void SetMaterialParameter(struct FName ParameterName, struct Unknown Param); // Function Engine.Emitter.SetMaterialParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1A60>
	void SetFloatParameter(struct FName ParameterName, float Param); // Function Engine.Emitter.SetFloatParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1990>
	void SetColorParameter(struct FName ParameterName, struct Unknown Param); // Function Engine.Emitter.SetColorParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD18C0>
	void SetActorParameter(struct FName ParameterName, struct Unknown Param); // Function Engine.Emitter.SetActorParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1800>
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12372B0>
	void OnParticleSystemFinished(struct Unknown FinishedComponent); // Function Engine.Emitter.OnParticleSystemFinished(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1770>
	char IsActive(); // Function Engine.Emitter.IsActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1740>
	void Deactivate(); // Function Engine.Emitter.Deactivate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1720>
	void Activate(); // Function Engine.Emitter.Activate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CD1700>
};

// Class Engine.EmitterCameraLensEffectBase
struct AEmitterCameraLensEffectBase : AEmitter {
	struct Unknown PS_CameraEffect; // 0x360 (8)
	struct Unknown PS_CameraEffectNonExtremeContent; // 0x368 (8)
	struct Unknown BaseCamera; // 0x370 (8)
	struct Unknown RelativeTransform; // 0x380 (48)
	float BaseFOV; // 0x3B0 (4)
	char bAllowMultipleInstances : 0; // 0x3B4 (1)
	char b : 0; // 0x3B4 (1)
	struct TArray<Unknown> EmittersToTreatAsSame; // 0x3B8 (16)
	float DistFromCamera; // 0x3C8 (4)
};

// Class Engine.EngineMessage
struct UEngineMessage : ULocalMessage {
	struct FString FailedPlaceMessage; // 0x28 (16)
	struct FString MaxedOutMessage; // 0x38 (16)
	struct FString EnteredMessage; // 0x48 (16)
	struct FString LeftMessage; // 0x58 (16)
	struct FString GlobalNameChange; // 0x68 (16)
	struct FString SpecEnteredMessage; // 0x78 (16)
	struct FString NewPlayerMessage; // 0x88 (16)
	struct FString NewSpecMessage; // 0x98 (16)
};

// Class Engine.ExponentialHeightFog
struct AExponentialHeightFog : AInfo {
	struct Unknown Component; // 0x310 (8)
	char bEnabled : 0; // 0x318 (1)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
};

// Class Engine.ExponentialHeightFogComponent
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x238 (4)
	float FogHeightFalloff; // 0x23C (4)
	struct Unknown SecondFogData; // 0x240 (12)
	struct Unknown FogInscatteringColor; // 0x24C (16)
	struct Unknown InscatteringColorCubemap; // 0x260 (8)
	float InscatteringColorCubemapAngle; // 0x268 (4)
	struct Unknown InscatteringTextureTint; // 0x26C (16)
	float FullyDirectionalInscatteringColorDistance; // 0x27C (4)
	float NonDirectionalInscatteringColorDistance; // 0x280 (4)
	float DirectionalInscatteringExponent; // 0x284 (4)
	float DirectionalInscatteringStartDistance; // 0x288 (4)
	struct Unknown DirectionalInscatteringColor; // 0x28C (16)
	float FogMaxOpacity; // 0x29C (4)
	float StartDistance; // 0x2A0 (4)
	float FogCutoffDistance; // 0x2A4 (4)
	char bEnableVolumetricFog : 0; // 0x2A8 (1)
	float VolumetricFogScatteringDistribution; // 0x2AC (4)
	struct Unknown VolumetricFogAlbedo; // 0x2B0 (4)
	struct Unknown VolumetricFogEmissive; // 0x2B4 (16)
	float VolumetricFogExtinctionScale; // 0x2C4 (4)
	float VolumetricFogDistance; // 0x2C8 (4)
	float VolumetricFogStaticLightingScatteringIntensity; // 0x2CC (4)
	char bOverrideLightColorsWithFogInscatteringColors : 0; // 0x2D0 (1)

	void SetVolumetricFogScatteringDistribution(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3DA0>
	void SetVolumetricFogExtinctionScale(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogExtinctionScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3D20>
	void SetVolumetricFogEmissive(struct Unknown NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogEmissive(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3CA0>
	void SetVolumetricFogDistance(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3C20>
	void SetVolumetricFogAlbedo(struct Unknown NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogAlbedo(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3BB0>
	void SetVolumetricFog(char bNewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFog(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3B20>
	void SetStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetStartDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3AA0>
	void SetNonDirectionalInscatteringColorDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetNonDirectionalInscatteringColorDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3A20>
	void SetInscatteringTextureTint(struct Unknown Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringTextureTint(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3920>
	void SetInscatteringColorCubemapAngle(float Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemapAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE38A0>
	void SetInscatteringColorCubemap(struct Unknown Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3820>
	void SetFullyDirectionalInscatteringColorDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetFullyDirectionalInscatteringColorDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE37A0>
	void SetFogMaxOpacity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogMaxOpacity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE36A0>
	void SetFogInscatteringColor(struct Unknown Value); // Function Engine.ExponentialHeightFogComponent.SetFogInscatteringColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3620>
	void SetFogHeightFalloff(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogHeightFalloff(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8D050>
	void SetFogDensity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogDensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C8D260>
	void SetFogCutoffDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogCutoffDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE35A0>
	void SetDirectionalInscatteringStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3520>
	void SetDirectionalInscatteringExponent(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE34A0>
	void SetDirectionalInscatteringColor(struct Unknown Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3420>
};

// Class Engine.FloatingPawnMovement
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138 (4)
	float Acceleration; // 0x13C (4)
	float Deceleration; // 0x140 (4)
	float TurningBoost; // 0x144 (4)
	char bPositionCorrected : 0; // 0x148 (1)
};

// Class Engine.Font
struct UFont : Object {
	enum class Unknow FontCacheType; // 0x30 (1)
	struct TArray<Unknown> Characters; // 0x38 (16)
	struct TArray<Unknown> Textures; // 0x48 (16)
	int32_t IsRemapped; // 0x58 (4)
	float EmScale; // 0x5C (4)
	float Ascent; // 0x60 (4)
	float Descent; // 0x64 (4)
	float Leading; // 0x68 (4)
	int32_t Kerning; // 0x6C (4)
	struct Unknown ImportOptions; // 0x70 (176)
	int32_t NumCharacters; // 0x120 (4)
	struct TArray<Unknown> MaxCharHeight; // 0x128 (16)
	float ScalingFactor; // 0x138 (4)
	int32_t LegacyFontSize; // 0x13C (4)
	struct FName LegacyFontName; // 0x140 (8)
	struct Unknown CompositeFont; // 0x148 (56)
};

// Class Engine.FontFace
struct UFontFace : Object {
	struct FString SourceFilename; // 0x30 (16)
	enum class Unknow Hinting; // 0x40 (1)
	enum class Unknow LoadingPolicy; // 0x41 (1)
	enum class Unknow LayoutMethod; // 0x42 (1)
};

// Class Engine.FontImportOptions
struct UFontImportOptions : Object {
	struct Unknown Data; // 0x28 (176)
};

// Class Engine.ForceFeedbackAttenuation
struct UForceFeedbackAttenuation : Object {
	struct Unknown Attenuation; // 0x28 (176)
};

// Class Engine.ForceFeedbackComponent
struct UForceFeedbackComponent : USceneComponent {
	struct Unknown ForceFeedbackEffect; // 0x238 (8)
	char bAutoDestroy : 0; // 0x240 (1)
	char bStopWhenOwnerDestroyed : 0; // 0x240 (1)
	char bLooping : 0; // 0x240 (1)
	char bIgnoreTimeDilation : 0; // 0x240 (1)
	char bOverrideAttenuation : 0; // 0x240 (1)
	float IntensityMultiplier; // 0x244 (4)
	struct Unknown AttenuationSettings; // 0x248 (8)
	struct Unknown AttenuationOverrides; // 0x250 (176)
	struct FMulticastInlineDelegate OnForceFeedbackFinished; // 0x300 (16)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3E20>
	void SetIntensityMultiplier(float NewIntensityMultiplier); // Function Engine.ForceFeedbackComponent.SetIntensityMultiplier(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE39A0>
	void SetForceFeedbackEffect(struct Unknown NewForceFeedbackEffect); // Function Engine.ForceFeedbackComponent.SetForceFeedbackEffect(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3720>
	void Play(float StartTime); // Function Engine.ForceFeedbackComponent.Play(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CA94F0>
	char BP_GetAttenuationSettingsToApply(struct Unknown& OutAttenuationSettings); // Function Engine.ForceFeedbackComponent.BP_GetAttenuationSettingsToApply(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3270>
	void AdjustAttenuation(struct Unknown& InAttenuationSettings); // Function Engine.ForceFeedbackComponent.AdjustAttenuation(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CE3170>
};

// Class Engine.ForceFeedbackEffect
struct UForceFeedbackEffect : Object {
	struct TArray<Unknown> ChannelDetails; // 0x28 (16)
	float Duration; // 0x38 (4)
};

// Class Engine.GameNetworkManager
struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; // 0x310 (4)
	float SeverePacketLossThreshold; // 0x314 (4)
	int32_t BadPingThreshold; // 0x318 (4)
	int32_t SeverePingThreshold; // 0x31C (4)
	int32_t AdjustedNetSpeed; // 0x320 (4)
	float LastNetSpeedUpdateTime; // 0x324 (4)
	int32_t TotalNetBandwidth; // 0x328 (4)
	int32_t MinDynamicBandwidth; // 0x32C (4)
	int32_t MaxDynamicBandwidth; // 0x330 (4)
	char bIsStandbyCheckingEnabled : 0; // 0x334 (1)
	char bHasStandbyCheatTriggered : 0; // 0x334 (1)
	float StandbyRxCheatTime; // 0x338 (4)
	float StandbyTxCheatTime; // 0x33C (4)
	float PercentMissingForRxStandby; // 0x340 (4)
	float PercentMissingForTxStandby; // 0x344 (4)
	float PercentForBadPing; // 0x348 (4)
	float JoinInProgressStandbyWaitTime; // 0x34C (4)
	float MoveRepSize; // 0x350 (4)
	float MAXPOSITIONERRORSQUARED; // 0x354 (4)
	float MAXNEARZEROVELOCITYSQUARED; // 0x358 (4)
	float CLIENTADJUSTUPDATECOST; // 0x35C (4)
	float MAXCLIENTUPDATEINTERVAL; // 0x360 (4)
	float MaxClientForcedUpdateDuration; // 0x364 (4)
	float ServerForcedUpdateHitchThreshold; // 0x368 (4)
	float ServerForcedUpdateHitchCooldown; // 0x36C (4)
	float MaxMoveDeltaTime; // 0x370 (4)
	float MaxClientSmoothingDeltaTime; // 0x374 (4)
	float ClientNetSendMoveDeltaTime; // 0x378 (4)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x37C (4)
	float ClientNetSendMoveDeltaTimeStationary; // 0x380 (4)
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x384 (4)
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x388 (4)
	char ClientAuthorativePosition : 0; // 0x38C (1)
	float ClientErrorUpdateRateLimit; // 0x390 (4)
	float ClientNetCamUpdateDeltaTime; // 0x394 (4)
	float ClientNetCamUpdatePositionLimit; // 0x398 (4)
	char bMovementTimeDiscrepancyDetection : 0; // 0x39C (1)
	char bMovementTimeDiscrepancyResolution : 0; // 0x39D (1)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x3A0 (4)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x3A4 (4)
	float MovementTimeDiscrepancyResolutionRate; // 0x3A8 (4)
	float MovementTimeDiscrepancyDriftAllowance; // 0x3AC (4)
	char bMovementTimeDiscrepancyForceCorrectionsDuringResolution : 0; // 0x3B0 (1)
	char bUseDistanceBasedRelevancy : 0; // 0x3B1 (1)
};

// Class Engine.SpotLight
struct ASpotLight : ALight {
	struct Unknown SpotLightComponent; // 0x320 (8)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLight.SetOuterConeAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15CE0>
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLight.SetInnerConeAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15BE0>
};

// Class Engine.HapticFeedbackEffect_Buffer
struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	struct TArray<Unknown> Amplitudes; // 0x28 (16)
	int32_t SampleRate; // 0x38 (4)
};

// Class Engine.HapticFeedbackEffect_Curve
struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	struct Unknown HapticDetails; // 0x28 (272)
};

// Class Engine.HapticFeedbackEffect_SoundWave
struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	struct Unknown SoundWave; // 0x28 (8)
};

// Class Engine.HLODProxy
struct UHLODProxy : Object {
	struct TArray<Unknown> ProxyMeshes; // 0x28 (16)
};

// Class Engine.InGameAdManager
struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 0; // 0x38 (1)
	struct TArray<Unknown> ClickedBannerDelegates; // 0x40 (16)
	struct TArray<Unknown> ClosedAdDelegates; // 0x50 (16)
};

// Class Engine.InheritableComponentHandler
struct UInheritableComponentHandler : Object {
	struct TArray<Unknown> Records; // 0x28 (16)
	struct TArray<Unknown> UnnecessaryComponents; // 0x38 (16)
};

// Class Engine.InputActionDelegateBinding
struct UInputActionDelegateBinding : UInputDelegateBinding {
	struct TArray<Unknown> InputActionDelegateBindings; // 0x28 (16)
};

// Class Engine.InputAxisDelegateBinding
struct UInputAxisDelegateBinding : UInputDelegateBinding {
	struct TArray<Unknown> InputAxisDelegateBindings; // 0x28 (16)
};

// Class Engine.InputAxisKeyDelegateBinding
struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<Unknown> InputAxisKeyDelegateBindings; // 0x28 (16)
};

// Class Engine.InputComponent
struct UInputComponent : UActorComponent {
	struct TArray<Unknown> CachedKeyToActionInfo; // 0x120 (16)

	char WasControllerKeyJustReleased(struct Unknown Key); // Function Engine.InputComponent.WasControllerKeyJustReleased(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D02480>
	char WasControllerKeyJustPressed(struct Unknown Key); // Function Engine.InputComponent.WasControllerKeyJustPressed(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D02480>
	char IsControllerKeyDown(struct Unknown Key); // Function Engine.InputComponent.IsControllerKeyDown(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D02480>
	void GetTouchState(int32_t FingerIndex, float& LocationX, float& LocationY, char& bIsCurrentlyPressed); // Function Engine.InputComponent.GetTouchState(Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D02000>
	struct Unknown GetControllerVectorKeyState(struct Unknown Key); // Function Engine.InputComponent.GetControllerVectorKeyState(Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01ED0>
	void GetControllerMouseDelta(float& DeltaX, float& DeltaY); // Function Engine.InputComponent.GetControllerMouseDelta(Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01DF0>
	float GetControllerKeyTimeDown(struct Unknown Key); // Function Engine.InputComponent.GetControllerKeyTimeDown(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01BE0>
	void GetControllerAnalogStickState(char WhichStick, float& StickX, float& StickY); // Function Engine.InputComponent.GetControllerAnalogStickState(Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01CD0>
	float GetControllerAnalogKeyState(struct Unknown Key); // Function Engine.InputComponent.GetControllerAnalogKeyState(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01BE0>
};

// Class Engine.InputKeyDelegateBinding
struct UInputKeyDelegateBinding : UInputDelegateBinding {
	struct TArray<Unknown> InputKeyDelegateBindings; // 0x28 (16)
};

// Class Engine.InputSettings
struct UInputSettings : Object {
	struct TArray<Unknown> AxisConfig; // 0x28 (16)
	char bAltEnterTogglesFullscreen : 0; // 0x38 (1)
	char bF11TogglesFullscreen : 0; // 0x38 (1)
	char bUseMouseForTouch : 0; // 0x38 (1)
	char bEnableMouseSmoothing : 0; // 0x38 (1)
	char bEnableFOVScaling : 0; // 0x38 (1)
	char bCaptureMouseOnLaunch : 0; // 0x38 (1)
	char bDefaultViewportMouseLock : 0; // 0x38 (1)
	char bAlwaysShowTouchInterface : 0; // 0x38 (1)
	char bShowConsoleOnFourFingerTap : 0; // 0x39 (1)
	char bEnableGestureRecognizer : 0; // 0x39 (1)
	char bUseAutocorrect : 0; // 0x3A (1)
	struct TArray<Unknown> ExcludedAutocorrectOS; // 0x40 (16)
	struct TArray<Unknown> ExcludedAutocorrectCultures; // 0x50 (16)
	struct TArray<Unknown> ExcludedAutocorrectDeviceModels; // 0x60 (16)
	enum class Unknow DefaultViewportMouseCaptureMode; // 0x70 (1)
	enum class Unknow DefaultViewportMouseLockMode; // 0x71 (1)
	float FOVScale; // 0x74 (4)
	float DoubleClickTime; // 0x78 (4)
	struct TArray<Unknown> ActionMappings; // 0x80 (16)
	struct TArray<Unknown> AxisMappings; // 0x90 (16)
	struct TArray<Unknown> SpeechMappings; // 0xA0 (16)
	struct Unknown DefaultTouchInterface; // 0xB0 (24)
	struct Unknown ConsoleKey; // 0xC8 (24)
	struct TArray<Unknown> ConsoleKeys; // 0xE0 (16)

	void SaveKeyMappings(); // Function Engine.InputSettings.SaveKeyMappings(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D03170>
	void RemoveAxisMapping(struct Unknown& KeyMapping, char bForceRebuildKeymaps); // Function Engine.InputSettings.RemoveAxisMapping(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D02FD0>
	void RemoveActionMapping(struct Unknown& KeyMapping, char bForceRebuildKeymaps); // Function Engine.InputSettings.RemoveActionMapping(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D02E30>
	struct Unknown GetInputSettings(); // Function Engine.InputSettings.GetInputSettings(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01FD0>
	void GetAxisNames(struct TArray<Unknown>& AxisNames); // Function Engine.InputSettings.GetAxisNames(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01B30>
	void GetAxisMappingByName(struct FName InAxisName, struct TArray<Unknown>& OutMappings); // Function Engine.InputSettings.GetAxisMappingByName(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01A00>
	void GetActionNames(struct TArray<Unknown>& ActionNames); // Function Engine.InputSettings.GetActionNames(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01950>
	void GetActionMappingByName(struct FName InActionName, struct TArray<Unknown>& OutMappings); // Function Engine.InputSettings.GetActionMappingByName(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01820>
	void ForceRebuildKeymaps(); // Function Engine.InputSettings.ForceRebuildKeymaps(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01800>
	void AddAxisMapping(struct Unknown& KeyMapping, char bForceRebuildKeymaps); // Function Engine.InputSettings.AddAxisMapping(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D014D0>
	void AddActionMapping(struct Unknown& KeyMapping, char bForceRebuildKeymaps); // Function Engine.InputSettings.AddActionMapping(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D01330>
};

// Class Engine.InputTouchDelegateBinding
struct UInputTouchDelegateBinding : UInputDelegateBinding {
	struct TArray<Unknown> InputTouchDelegateBindings; // 0x28 (16)
};

// Class Engine.InstancedCollisionComponent
struct UInstancedCollisionComponent : UActorComponent {
	struct TArray<Unknown> StaticMeshComponents; // 0xB0 (16)
	struct Unknown StaticMeshComponent; // 0xD0 (8)
};

// Class Engine.InstancedStaticCollisionActor
struct AInstancedStaticCollisionActor : UActor {
	struct TMap<Unknown, Unknown>Unknown InstancedCollisionComponentMap; // 0x310 (80)
};

// Class Engine.InterpCurveEdSetup
struct UInterpCurveEdSetup : Object {
	struct TArray<Unknown> Tabs; // 0x28 (16)
	int32_t ActiveTab; // 0x38 (4)
};

// Class Engine.InterpData
struct UInterpData : Object {
	float InterpLength; // 0x28 (4)
	float PathBuildTime; // 0x2C (4)
	struct TArray<Unknown> InterpGroups; // 0x30 (16)
	struct Unknown CurveEdSetup; // 0x40 (8)
	float EdSectionStart; // 0x48 (4)
	float EdSectionEnd; // 0x4C (4)
	char bShouldBakeAndPrune : 0; // 0x50 (1)
	struct Unknown CachedDirectorGroup; // 0x58 (8)
	struct TArray<Unknown> AllEventNames; // 0x60 (16)
};

// Class Engine.InterpFilter
struct UInterpFilter : Object {
	struct FString Caption; // 0x28 (16)
};

// Class Engine.InterpGroup
struct UInterpGroup : Object {
	struct TArray<Unknown> InterpTracks; // 0x30 (16)
	struct FName GroupName; // 0x40 (8)
	struct Unknown GroupColor; // 0x48 (4)
	char bCollapsed : 0; // 0x4C (1)
	char bVisible : 0; // 0x4C (1)
	char bIsFolder : 0; // 0x4C (1)
	char bIsParented : 0; // 0x4C (1)
	char bIsSelected : 0; // 0x4C (1)
};

// Class Engine.InterpGroupCamera
struct UInterpGroupCamera : UInterpGroup {
	struct Unknown CameraAnimInst; // 0x50 (8)
	float CompressTolerance; // 0x58 (4)
};

// Class Engine.InterpGroupInst
struct UInterpGroupInst : Object {
	struct Unknown Group; // 0x28 (8)
	struct Unknown GroupActor; // 0x30 (8)
	struct TArray<Unknown> TrackInst; // 0x38 (16)
};

// Class Engine.InterpToMovementComponent
struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0xF0 (4)
	char bPauseOnImpact : 0; // 0xF4 (1)
	char bSweep : 0; // 0xF8 (1)
	enum class Unknow TeleportType; // 0xF9 (1)
	enum class Unknow BehaviourType; // 0xFA (1)
	char bCheckIfStillInWorld : 0; // 0xFB (1)
	char bForceSubStepping : 0; // 0xFC (1)
	struct FMulticastInlineDelegate OnInterpToReverse; // 0x100 (16)
	struct FMulticastInlineDelegate OnInterpToStop; // 0x110 (16)
	struct FMulticastInlineDelegate OnWaitBeginDelegate; // 0x120 (16)
	struct FMulticastInlineDelegate OnWaitEndDelegate; // 0x130 (16)
	struct FMulticastInlineDelegate OnResetDelegate; // 0x140 (16)
	float MaxSimulationTimeStep; // 0x150 (4)
	int32_t MaxSimulationIterations; // 0x154 (4)
	struct TArray<Unknown> ControlPoints; // 0x158 (16)

	void StopSimulating(struct Unknown& HitResult); // Function Engine.InterpToMovementComponent.StopSimulating(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D0C1B0>
	void RestartMovement(float InitialDirection); // Function Engine.InterpToMovementComponent.RestartMovement(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D0C130>
	void OnInterpToWaitEndDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInterpToWaitBeginDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInterpToStopDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInterpToReverseDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void OnInterpToResetDelegate__DelegateSignature(struct Unknown& ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	void FinaliseControlPoints(); // Function Engine.InterpToMovementComponent.FinaliseControlPoints(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D0C110>
};

// Class Engine.InterpTrackAnimControl
struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	struct FName SlotName; // 0x90 (8)
	struct TArray<Unknown> AnimSeqs; // 0x98 (16)
	char bSkipAnimNotifiers : 0; // 0xA8 (1)
};

// Class Engine.InterpTrackBoolProp
struct UInterpTrackBoolProp : UInterpTrack {
	struct TArray<Unknown> BoolTrack; // 0x70 (16)
	struct FName PropertyName; // 0x80 (8)
};

// Class Engine.InterpTrackColorProp
struct UInterpTrackColorProp : UInterpTrackVectorBase {
	struct FName PropertyName; // 0x90 (8)
};

// Class Engine.InterpTrackDirector
struct UInterpTrackDirector : UInterpTrack {
	struct TArray<Unknown> CutTrack; // 0x70 (16)
	char bSimulateCameraCutsOnClients : 0; // 0x80 (1)
};

// Class Engine.InterpTrackEvent
struct UInterpTrackEvent : UInterpTrack {
	struct TArray<Unknown> EventTrack; // 0x70 (16)
	char bFireEventsWhenForwards : 0; // 0x80 (1)
	char bFireEventsWhenBackwards : 0; // 0x80 (1)
	char bFireEventsWhenJumpingForwards : 0; // 0x80 (1)
	char bUseCustomEventName : 0; // 0x80 (1)
};

// Class Engine.InterpTrackFade
struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 0; // 0x90 (1)
	char bFadeAudio : 0; // 0x90 (1)
	struct Unknown FadeColor; // 0x94 (16)
};

// Class Engine.InterpTrackFloatAnimBPParam
struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	struct Unknown* AnimBlueprintClass; // 0x90 (8)
	struct Unknown* AnimClass; // 0x98 (8)
	struct FName ParamName; // 0xA0 (8)
};

// Class Engine.InterpTrackFloatMaterialParam
struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	struct TArray<Unknown> TargetMaterials; // 0x90 (16)
	struct FName ParamName; // 0xA0 (8)
};

// Class Engine.InterpTrackFloatParticleParam
struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	struct FName ParamName; // 0x90 (8)
};

// Class Engine.InterpTrackFloatProp
struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	struct FName PropertyName; // 0x90 (8)
};

// Class Engine.InterpTrackInstAnimControl
struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28 (4)
};

// Class Engine.InterpTrackInstProperty
struct UInterpTrackInstProperty : UInterpTrackInst {
	struct TFieldPath<FUnknown> InterpProperty; // 0x28 (32)
	struct Unknown PropertyOuterObjectInst; // 0x48 (8)
};

// Class Engine.InterpTrackInstBoolProp
struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	char ResetBool : 0; // 0x60 (1)
};

// Class Engine.InterpTrackInstColorProp
struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	struct Unknown ResetColor; // 0x58 (4)
};

// Class Engine.InterpTrackInstDirector
struct UInterpTrackInstDirector : UInterpTrackInst {
	struct Unknown OldViewTarget; // 0x28 (8)
};

// Class Engine.InterpTrackInstEvent
struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28 (4)
};

// Class Engine.InterpTrackInstFloatAnimB
struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	struct Unknown AnimScriptInstance; // 0x28 (8)
	float ResetFloat; // 0x30 (4)
};

// Class Engine.InterpTrackInstFloatMaterialParam
struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	struct TArray<Unknown> MaterialInstances; // 0x28 (16)
	struct TArray<Unknown> ResetFloats; // 0x38 (16)
	struct TArray<Unknown> PrimitiveMaterialRefs; // 0x48 (16)
	struct Unknown InstancedTrack; // 0x58 (8)
};

// Class Engine.InterpTrackInstFloatParticleParam
struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28 (4)
};

// Class Engine.InterpTrackInstFloatProp
struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58 (4)
};

// Class Engine.InterpTrackInstLinearColorProp
struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	struct Unknown ResetColor; // 0x58 (16)
};

// Class Engine.InterpTrackInstMove
struct UInterpTrackInstMove : UInterpTrackInst {
	struct Unknown ResetLocation; // 0x28 (12)
	struct Unknown ResetRotation; // 0x34 (12)
};

// Class Engine.InterpTrackInstParticleReplay
struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28 (4)
};

// Class Engine.InterpTrackInstSlomo
struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28 (4)
};

// Class Engine.InterpTrackInstSound
struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28 (4)
	struct Unknown PlayAudioComp; // 0x30 (8)
};

// Class Engine.InterpTrackInstToggle
struct UInterpTrackInstToggle : UInterpTrackInst {
	char Action; // 0x28 (1)
	float LastUpdatePosition; // 0x2C (4)
	char bSavedActiveState : 0; // 0x30 (1)
};

// Class Engine.InterpTrackInstVectorMaterialParam
struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	struct TArray<Unknown> MaterialInstances; // 0x28 (16)
	struct TArray<Unknown> ResetVectors; // 0x38 (16)
	struct TArray<Unknown> PrimitiveMaterialRefs; // 0x48 (16)
	struct Unknown InstancedTrack; // 0x58 (8)
};

// Class Engine.InterpTrackInstVectorProp
struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	struct Unknown ResetVector; // 0x58 (12)
};

// Class Engine.InterpTrackInstVisibility
struct UInterpTrackInstVisibility : UInterpTrackInst {
	char Action; // 0x28 (1)
	float LastUpdatePosition; // 0x2C (4)
};

// Class Engine.InterpTrackLinearColorBase
struct UInterpTrackLinearColorBase : UInterpTrack {
	struct Unknown LinearColorTrack; // 0x70 (24)
	float CurveTension; // 0x88 (4)
};

// Class Engine.InterpTrackLinearColorProp
struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	struct FName PropertyName; // 0x90 (8)
};

// Class Engine.InterpTrackMove
struct UInterpTrackMove : UInterpTrack {
	struct Unknown PosTrack; // 0x70 (24)
	struct Unknown EulerTrack; // 0x88 (24)
	struct Unknown LookupTrack; // 0xA0 (16)
	struct FName LookAtGroupName; // 0xB0 (8)
	float LinCurveTension; // 0xB8 (4)
	float AngCurveTension; // 0xBC (4)
	char bUseQuatInterpolation : 0; // 0xC0 (1)
	char bShowArrowAtKeys : 0; // 0xC0 (1)
	char bDisableMovement : 0; // 0xC0 (1)
	char bShowTranslationOnCurveEd : 0; // 0xC0 (1)
	char bShowRotationOnCurv : 0; // 0xC0 (1)
	char bHide3DTrack : 0; // 0xC0 (1)
	char RotMode; // 0xC4 (1)
};

// Class Engine.InterpTrackMoveAxis
struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	char MoveAxis; // 0x90 (1)
	struct Unknown LookupTrack; // 0x98 (16)
};

// Class Engine.InterpTrackParticleReplay
struct UInterpTrackParticleReplay : UInterpTrack {
	struct TArray<Unknown> TrackKeys; // 0x70 (16)
};

// Class Engine.InterpTrackSound
struct UInterpTrackSound : UInterpTrackVectorBase {
	struct TArray<Unknown> Sounds; // 0x90 (16)
	char bPlayOnReverse : 0; // 0xA0 (1)
	char bContinueSoundOnMatineeEnd : 0; // 0xA0 (1)
	char bSuppressSubtitles : 0; // 0xA0 (1)
	char bTreatAsDialogue : 0; // 0xA0 (1)
	char bAttach : 0; // 0xA0 (1)
};

// Class Engine.InterpTrackToggle
struct UInterpTrackToggle : UInterpTrack {
	struct TArray<Unknown> ToggleTrack; // 0x70 (16)
	char bActivateSystemEachUpdate : 0; // 0x80 (1)
	char bActivateWithJustAttachedFlag : 0; // 0x80 (1)
	char bFireEventsWhenForwards : 0; // 0x80 (1)
	char bFireEventsWhenBackwards : 0; // 0x80 (1)
	char bFireEventsWhenJumpingForwards : 0; // 0x80 (1)
};

// Class Engine.InterpTrackVectorMaterial
struct UInterpTrackVectorMaterialPlag : UInterpTrackVectorBase {
	struct TArray<Unknown> TargetMaterials; // 0x90 (16)
	struct FName ParamName; // 0xA0 (8)
};

// Class Engine.InterpTrackVectorProp
struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	struct FName PropertyName; // 0x90 (8)
};

// Class Engine.InterpTrackVisibility
struct UInterpTrackVisibility : UInterpTrack {
	struct TArray<Unknown> VisibilityTrack; // 0x70 (16)
	char bFireEventsWhenForwards : 0; // 0x80 (1)
	char bFireEventsWhenBackwards : 0; // 0x80 (1)
	char bFireEventsWhenJumpingForwards : 0; // 0x80 (1)
};

// Class Engine.IntSerialization
struct UIntSerialization : Object {
	uint16_t UnsignedInt16Variable; // 0x28 (2)
	uint32_t UnsignedInt32Variable; // 0x2C (4)
	uint64_t UnsignedInt64Variable; // 0x30 (8)
	int8_t SignedInt8Variable; // 0x38 (1)
	int16_t SignedInt16Variable; // 0x3A (2)
	int64_t SignedInt64Variable; // 0x40 (8)
	char UnsignedInt8Variable; // 0x48 (1)
	int32_t SignedInt32Variable; // 0x4C (4)
};

// Class Engine.Layer
struct ULayer : Object {
	struct FName LayerName; // 0x28 (8)
	char bIsVisible : 0; // 0x30 (1)
	struct TArray<Unknown> ActorStats; // 0x38 (16)
};

// Class Engine.Level
struct ULevel : Object {
	struct Unknown OwningWorld; // 0xB8 (8)
	struct Unknown Model; // 0xC0 (8)
	struct TArray<Unknown> ModelComponents; // 0xC8 (16)
	struct Unknown ActorCluster; // 0xD8 (8)
	int32_t NumTextureStreamingUnbuiltComponents; // 0xE0 (4)
	int32_t NumTextureStreamingDirtyResources; // 0xE4 (4)
	struct Unknown LevelScriptActor; // 0xE8 (8)
	struct Unknown NavListStart; // 0xF0 (8)
	struct Unknown NavListEnd; // 0xF8 (8)
	struct TArray<Unknown> NavDataChunks; // 0x100 (16)
	float LightmapTotalSize; // 0x110 (4)
	float ShadowmapTotalSize; // 0x114 (4)
	struct TArray<Unknown> StaticNavigableGeometry; // 0x118 (16)
	struct TArray<Unknown> StreamingTextureGuids; // 0x128 (16)
	struct Unknown LevelBuildDataId; // 0x1D0 (16)
	struct Unknown MapBuildData; // 0x1E0 (8)
	struct Unknown LightBuildLevelOffset; // 0x1E8 (12)
	char bIsLightingScenario : 0; // 0x1F4 (1)
	char bTextureStreamingRotationChanged : 0; // 0x1F4 (1)
	char bStaticComponentsRegisteredInStreamingManager : 0; // 0x1F4 (1)
	char bIsVisible : 0; // 0x1F4 (1)
	struct Unknown WorldSettings; // 0x240 (8)
	struct TArray<Unknown> AssetUserData; // 0x250 (16)
	struct TArray<Unknown> DestroyedReplicatedStaticActors; // 0x270 (16)
};

// Class Engine.LevelActorContainer
struct ULevelActorContainer : Object {
	struct TArray<Unknown> Actors; // 0x28 (16)
};

// Class Engine.LevelBounds
struct ALevelBounds : UActor {
	struct Unknown BoxComponent; // 0x310 (8)
	char bAutoUpdateBounds : 0; // 0x318 (1)
};

// Class Engine.LevelStreaming
struct ULevelStreaming : Object {
	struct TSoftObjectPtr<Unknown> WorldAsset; // 0x28 (40)
	struct FName PackageNameToLoad; // 0x50 (8)
	struct TArray<Unknown> LODPackageNames; // 0x58 (16)
	struct Unknown LevelTransform; // 0x80 (48)
	int32_t LevelLODIndex; // 0xB0 (4)
	int32_t StreamingPriority; // 0xB4 (4)
	char bShouldBeVisible : 0; // 0xC0 (1)
	char bShouldBeLoaded : 0; // 0xC0 (1)
	char bLocked : 0; // 0xC0 (1)
	char bIsStatic : 0; // 0xC0 (1)
	char bShouldBlockOnLoad : 0; // 0xC0 (1)
	char bShouldBlockOnUnload : 0; // 0xC0 (1)
	char bDisableDistanceStreaming : 0; // 0xC0 (1)
	char bDrawOnLevelStatusMap : 0; // 0xC0 (1)
	struct Unknown LevelColor; // 0xC4 (16)
	struct TArray<Unknown> EditorStreamingVolumes; // 0xD8 (16)
	float MinTimeBetweenVolumeUnloadRequests; // 0xE8 (4)
	struct FMulticastInlineDelegate OnLevelLoaded; // 0xF0 (16)
	struct FMulticastInlineDelegate OnLevelUnloaded; // 0x100 (16)
	struct FMulticastInlineDelegate OnLevelShown; // 0x110 (16)
	struct FMulticastInlineDelegate OnLevelHidden; // 0x120 (16)
	struct Unknown LoadedLevel; // 0x130 (8)
	struct Unknown PendingUnloadLevel; // 0x138 (8)

	char ShouldBeLoaded(); // Function Engine.LevelStreaming.ShouldBeLoaded(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x34F41F0>
	void SetShouldBeVisible(char bInShouldBeVisible); // Function Engine.LevelStreaming.SetShouldBeVisible(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E580>
	void SetShouldBeLoaded(char bInShouldBeLoaded); // Function Engine.LevelStreaming.SetShouldBeLoaded(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3CF5FF0>
	void SetPriority(int32_t NewPriority); // Function Engine.LevelStreaming.SetPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E380>
	void SetLevelLODIndex(int32_t LODIndex); // Function Engine.LevelStreaming.SetLevelLODIndex(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6DCF0>
	char IsStreamingStatePending(); // Function Engine.LevelStreaming.IsStreamingStatePending(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CDC0>
	char IsLevelVisible(); // Function Engine.LevelStreaming.IsLevelVisible(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CD90>
	char IsLevelLoaded(); // Function Engine.LevelStreaming.IsLevelLoaded(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CD60>
	struct FName GetWorldAssetPackageFName(); // Function Engine.LevelStreaming.GetWorldAssetPackageFName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CCF0>
	struct Unknown GetLoadedLevel(); // Function Engine.LevelStreaming.GetLoadedLevel(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CCD0>
	struct Unknown GetLevelScriptActor(); // Function Engine.LevelStreaming.GetLevelScriptActor(Final|Native|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CC60>
	struct Unknown CreateInstance(struct FString UniqueInstanceName); // Function Engine.LevelStreaming.CreateInstance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CB80>
};

// Class Engine.LevelStreamingDynamic
struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 0; // 0x158 (1)
	char bInitiallyVisible : 0; // 0x158 (1)

	struct Unknown LoadLevelInstanceBySoftObjectPtr(struct Unknown WorldContextObject, struct TSoftObjectPtr<Unknown> Level, struct Unknown Location, struct Unknown Rotation, char& bOutSuccess); // Function Engine.LevelStreamingDynamic.LoadLevelInstanceBySoftObjectPtr(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6D000>
	struct Unknown LoadLevelInstance(struct Unknown WorldContextObject, struct FString LevelName, struct Unknown Location, struct Unknown Rotation, char& bOutSuccess); // Function Engine.LevelStreamingDynamic.LoadLevelInstance(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6CDF0>
};

// Class Engine.LevelStreamingVolume
struct ALevelStreamingVolume : AVolume {
	struct TArray<Unknown> StreamingLevelNames; // 0x348 (16)
	char bEditorPreVisOnly : 0; // 0x358 (1)
	char bDisabled : 0; // 0x358 (1)
	char StreamingUsage; // 0x35C (1)
};

// Class Engine.LightmappedSurfaceCollection
struct ULightmappedSurfaceCollection : Object {
	struct Unknown SourceModel; // 0x28 (8)
	struct TArray<Unknown> Surfaces; // 0x30 (16)
};

// Class Engine.LightmassPortal
struct ALightmassPortal : UActor {
	struct Unknown PortalComponent; // 0x310 (8)
};

// Class Engine.LightmassPortalComponent
struct ULightmassPortalComponent : USceneComponent {
	struct Unknown PreviewBox; // 0x238 (8)
};

// Class Engine.LightmassPrimitiveSettingsObject
struct ULightmassPrimitiveSettingsObject : Object {
	struct Unknown LightmassSettings; // 0x28 (24)
};

// Class Engine.LocalLightComponent
struct ULocalLightComponent : ULightComponent {
	enum class Unknow IntensityUnits; // 0x380 (1)
	float Radius; // 0x384 (4)
	float AttenuationRadius; // 0x388 (4)
	struct Unknown LightmassSettings; // 0x38C (12)

	void SetIntensityUnits(enum class Unknow NewIntensityUnits); // Function Engine.LocalLightComponent.SetIntensityUnits(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D714B0>
	void SetAttenuationRadius(float NewRadius); // Function Engine.LocalLightComponent.SetAttenuationRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D711F0>
	float GetUnitsConversionFactor(enum class Unknow SrcUnits, enum class Unknow TargetUnits, float CosHalfConeAngle); // Function Engine.LocalLightComponent.GetUnitsConversionFactor(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D70FD0>
};

// Class Engine.LODActor
struct ALODActor : UActor {
	struct Unknown StaticMeshComponent; // 0x310 (8)
	struct TMap<Unknown, Unknown>Unknown ImpostersStaticMeshComponents; // 0x318 (80)
	struct Unknown Proxy; // 0x368 (8)
	struct FName Key; // 0x370 (8)
	float LODDrawDistance; // 0x378 (4)
	int32_t LODLevel; // 0x37C (4)
	struct TArray<Unknown> SubActors; // 0x380 (16)
	char CachedNumHLODLevels; // 0x390 (1)
};

// Class Engine.MapBuildDataRegistry
struct UMapBuildDataRegistry : Object {
	char LevelLightingQuality; // 0x28 (1)
};

// Class Engine.Material
struct UMaterial : UMaterialInterface {
	struct Unknown PhysMaterial; // 0x88 (8)
	struct Unknown PhysMaterialMask; // 0x90 (8)
	struct Unknown PhysicalMaterialMap[0x8]; // 0x98 (64)
	struct Unknown Metallic; // 0xD8 (12)
	struct Unknown Specular; // 0xEC (12)
	struct Unknown Anisotropy; // 0x100 (12)
	struct Unknown Normal; // 0x114 (12)
	struct Unknown Tangent; // 0x128 (12)
	struct Unknown EmissiveColor; // 0x13C (12)
	char MaterialDomain; // 0x150 (1)
	char BlendMode; // 0x151 (1)
	char DecalBlendMode; // 0x152 (1)
	char MaterialDecalResponse; // 0x153 (1)
	char ShadingModel; // 0x154 (1)
	char bCastDynamicShadowAsMasked : 0; // 0x155 (1)
	struct Unknown ShadingModels; // 0x156 (2)
	float OpacityMaskClipValue; // 0x158 (4)
	struct Unknown WorldPositionOffset; // 0x15C (12)
	struct Unknown Refraction; // 0x170 (12)
	struct Unknown MaterialAttributes; // 0x184 (16)
	struct Unknown PixelDepthOffset; // 0x19C (12)
	struct Unknown ShadingModelFromMaterialExpression; // 0x1B0 (12)
	char bEnableSeparateTranslucency : 0; // 0x1C4 (1)
	char bEnableResponsiveAA : 0; // 0x1C4 (1)
	char bEnableTranslucentVelocity : 0; // 0x1C8 (1)
	char bScreenSpaceReflections : 0; // 0x1CC (1)
	char bContactShadows : 0; // 0x1CC (1)
	char TwoSided : 0; // 0x1CC (1)
	char DitheredLODTransition : 0; // 0x1CC (1)
	char DitherOpacityMask : 0; // 0x1CC (1)
	char bAllowNegativeEmissiveColor : 0; // 0x1CC (1)
	char TranslucencyLightingMode; // 0x1CD (1)
	char bEnableMobileSeparateTranslucency : 0; // 0x1CE (1)
	int32_t NumCustomizedUVs; // 0x1D0 (4)
	float TranslucencyDirectionalLightingIntensity; // 0x1D4 (4)
	float TranslucentShadowDensityScale; // 0x1D8 (4)
	float TranslucentSelfShadowDensityScale; // 0x1DC (4)
	float TranslucentSelfShadowSecondDensityScale; // 0x1E0 (4)
	float TranslucentSelfShadowSecondOpacity; // 0x1E4 (4)
	float TranslucentBackscatteringExponent; // 0x1E8 (4)
	struct Unknown TranslucentMultipleScatteringExtinction; // 0x1EC (16)
	float TranslucentShadowStartOffset; // 0x1FC (4)
	char bDisableDepthTest : 0; // 0x200 (1)
	char bWriteOnlyAlpha : 0; // 0x200 (1)
	char bGenerateSphericalParticleNormals : 0; // 0x200 (1)
	char bTangentSpaceNormal : 0; // 0x200 (1)
	char bUseEmissiveForDynamicAreaLighting : 0; // 0x200 (1)
	char bBlockGI : 0; // 0x200 (1)
	char bUsedAsSpecialEngineMaterial : 0; // 0x200 (1)
	char bUsedWithSkeletalMesh : 0; // 0x200 (1)
	char bUsedWithEditorCompositing : 0; // 0x201 (1)
	char bUsedWithParticleSprites : 0; // 0x201 (1)
	char bUsedWithBeamTrails : 0; // 0x201 (1)
	char bUsedWithMeshParticles : 0; // 0x201 (1)
	char bUsedWithNiagaraSprites : 0; // 0x201 (1)
	char bUsedWithNiagaraRibbons : 0; // 0x201 (1)
	char bUsedWithNiagaraMeshParticles : 0; // 0x201 (1)
	char bUsedWithGeometryCache : 0; // 0x201 (1)
	char bUsedWithStaticLighting : 0; // 0x202 (1)
	char bUsedWithMorphTargets : 0; // 0x202 (1)
	char bUsedWithSplineMeshes : 0; // 0x202 (1)
	char bUsedWithInstancedStaticMeshes : 0; // 0x202 (1)
	char bUsedWithGeometryCollections : 0; // 0x202 (1)
	char bUsesDistortion : 0; // 0x202 (1)
	char bUsedWithClothing : 0; // 0x202 (1)
	char bUsedWithWater : 0; // 0x204 (1)
	char bUsedWithHairStrands : 0; // 0x204 (1)
	char bUsedWithLidarPointCloud : 0; // 0x204 (1)
	char bUsedWithUI : 0; // 0x208 (1)
	char bAutomaticallySetUsageInEditor : 0; // 0x208 (1)
	char bFullyRough : 0; // 0x208 (1)
	char bUseFullPrecision : 0; // 0x208 (1)
	char bUseLightmapDirectionality : 0; // 0x208 (1)
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 0; // 0x20C (1)
	char bUseHQForwardReflections : 0; // 0x210 (1)
	char bUsePlanarForwardReflections : 0; // 0x210 (1)
	char bNormalCurvatureToRoughness : 0; // 0x210 (1)
	char D3D11TessellationMode; // 0x211 (1)
	char bEnableCrackFreeDisplacement : 0; // 0x212 (1)
	char bEnableAdaptiveTessellation : 0; // 0x212 (1)
	char AllowTranslucentCustomDepthWrites : 0; // 0x212 (1)
	char Wireframe : 0; // 0x212 (1)
	char bCanMaskedBeAssumedOpaque : 0; // 0x212 (1)
	char bIsMasked : 0; // 0x212 (1)
	char bIsPreviewMaterial : 0; // 0x212 (1)
	char bIsFunctionPreviewMaterial : 0; // 0x212 (1)
	char bUseMaterialAttributes : 0; // 0x213 (1)
	char bCastRayTracedShadows : 0; // 0x213 (1)
	char bUseTranslucencyVertexFog : 0; // 0x213 (1)
	char bIsSky : 0; // 0x213 (1)
	char bComputeFogPerPixel : 0; // 0x213 (1)
	char bOutputTranslucentVelocity : 0; // 0x213 (1)
	char bAllowDevelopmentShaderCompile : 0; // 0x213 (1)
	char bIsMaterialEditorStatsMaterial : 0; // 0x213 (1)
	char BlendableLocation; // 0x214 (1)
	char BlendableOutputAlpha : 0; // 0x215 (1)
	char bEnableStencilTest : 0; // 0x215 (1)
	char StencilCompare; // 0x216 (1)
	char StencilRefValue; // 0x217 (1)
	char RefractionMode; // 0x218 (1)
	int32_t BlendablePriority; // 0x21C (4)
	char bIsBlendable : 0; // 0x220 (1)
	uint32_t UsageFlagWarnings; // 0x224 (4)
	float RefractionDepthBias; // 0x228 (4)
	struct Unknown StateID; // 0x22C (16)
	float MaxDisplacement; // 0x23C (4)
	struct Unknown CachedExpressionData; // 0x2C8 (552)
};

// Class Engine.MaterialBillboardComponent
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<Unknown> Elements; // 0x4B8 (16)

	void SetElements(struct TArray<Unknown>& NewElements); // Function Engine.MaterialBillboardComponent.SetElements(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D75EE0>
	void AddElement(struct Unknown Material, struct Unknown DistanceToOpacityCurve, char bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, struct Unknown DistanceToSizeCurve); // Function Engine.MaterialBillboardComponent.AddElement(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D75D10>
};

// Class Engine.MaterialExpressionAbs
struct UMaterialExpressionAbs : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionAdd
struct UMaterialExpressionAdd : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	float ConstA; // 0x68 (4)
	float ConstB; // 0x6C (4)
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float threshold; // 0xF0 (4)
	char Channel; // 0xF4 (1)
};

// Class Engine.MaterialExpressionAppendVector
struct UMaterialExpressionAppendVector : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
};

// Class Engine.MaterialExpressionArccosine
struct UMaterialExpressionArccosine : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionArccosine
struct UMaterialExpressionArccosine : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionArcsine
struct UMaterialExpressionArcsine : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionArcsineFast
struct UMaterialExpressionArcsineFast : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionArctangent
struct UMaterialExpressionArctangent : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionArctangent2
struct UMaterialExpressionArctangent2 : UMaterialExpression {
	struct Unknown Y; // 0x40 (12)
	struct Unknown X; // 0x54 (12)
};

// Class Engine.MaterialExpressionArctangent2Fast
struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	struct Unknown Y; // 0x40 (12)
	struct Unknown X; // 0x54 (12)
};

// Class Engine.MaterialExpressionArctangentFast
struct UMaterialExpressionArctangentFast : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionAtmosphericFogColor
struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	struct Unknown WorldPosition; // 0x40 (12)
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionBlackBody
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct Unknown Temp; // 0x40 (12)
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	struct Unknown A; // 0x40 (16)
	struct Unknown B; // 0x58 (16)
	struct Unknown ALPHA; // 0x70 (12)
	char PixelAttributeBlendType; // 0x84 (1)
	char VertexAttributeBlendType; // 0x85 (1)
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	struct Unknown MaterialAttributes; // 0x40 (16)
};

// Class Engine.MaterialExpressionBumpOffset
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct Unknown Coordinate; // 0x40 (12)
	struct Unknown Height; // 0x54 (12)
	struct Unknown HeightRatioInput; // 0x68 (12)
	float HeightRatio; // 0x7C (4)
	float ReferencePlane; // 0x80 (4)
	uint32_t ConstCoordinate; // 0x84 (4)
};

// Class Engine.MaterialExpressionCeil
struct UMaterialExpressionCeil : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionParameter
struct UMaterialExpressionParameter : UMaterialExpression {
	struct FName ParameterName; // 0x40 (8)
	struct Unknown ExpressionGUID; // 0x48 (16)
};

// Class Engine.MaterialExpressionVectorParameter
struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	struct Unknown DefaultValue; // 0x58 (16)
	char bUseCustomPrimitiveData : 0; // 0x68 (1)
	char PrimitiveDataIndex; // 0x69 (1)
};

// Class Engine.MaterialExpressionChannelMaskParameter
struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	char MaskChannel; // 0x70 (1)
	struct Unknown Input; // 0x74 (12)
};

// Class Engine.MaterialExpressionClamp
struct UMaterialExpressionClamp : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	struct Unknown Min; // 0x54 (12)
	struct Unknown MAX; // 0x68 (12)
	char ClampMode; // 0x7C (1)
	float MinDefault; // 0x80 (4)
	float MaxDefault; // 0x84 (4)
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionCollectionParameter
struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	struct Unknown Collection; // 0x40 (8)
	struct FName ParameterName; // 0x48 (8)
	struct Unknown ParameterId; // 0x50 (16)
};

// Class Engine.MaterialExpressionComment
struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40 (4)
	int32_t SizeY; // 0x44 (4)
	struct FString Text; // 0x48 (16)
	struct Unknown CommentColor; // 0x58 (16)
	int32_t FontSize; // 0x68 (4)
};

// Class Engine.MaterialExpressionComponentMask
struct UMaterialExpressionComponentMask : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	char R : 0; // 0x54 (1)
	char G : 0; // 0x54 (1)
	char B : 0; // 0x54 (1)
	char A : 0; // 0x54 (1)
};

// Class Engine.MaterialExpressionConstant
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40 (4)
};

// Class Engine.MaterialExpressionConstant2Vector
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40 (4)
	float G; // 0x44 (4)
};

// Class Engine.MaterialExpressionConstant3Vector
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct Unknown Constant; // 0x40 (16)
};

// Class Engine.MaterialExpressionConstant4Vector
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct Unknown Constant; // 0x40 (16)
};

// Class Engine.MaterialExpressionConstantBiasScale
struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	float Bias; // 0x54 (4)
	float Scale; // 0x58 (4)
};

// Class Engine.MaterialExpressionCosine
struct UMaterialExpressionCosine : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	float Period; // 0x54 (4)
};

// Class Engine.MaterialExpressionCrossProduct
struct UMaterialExpressionCrossProduct : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
};

// Class Engine.MaterialExpressionScalarParameter
struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58 (4)
	char bUseCustomPrimitiveData : 0; // 0x5C (1)
	char PrimitiveDataIndex; // 0x5D (1)
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	struct Unknown Curve; // 0x60 (8)
	struct Unknown Atlas; // 0x68 (8)
	struct Unknown InputTime; // 0x70 (12)
};

// Class Engine.MaterialExpressionCustom
struct UMaterialExpressionCustom : UMaterialExpression {
	struct FString Code; // 0x40 (16)
	char OutputType; // 0x50 (1)
	struct FString Description; // 0x58 (16)
	struct TArray<Unknown> Inputs; // 0x68 (16)
	struct TArray<Unknown> AdditionalDefines; // 0x78 (16)
	struct TArray<Unknown> IncludeFilePaths; // 0x88 (16)
};

// Class Engine.MaterialExpressionDDX
struct UMaterialExpressionDDX : UMaterialExpression {
	struct Unknown Value; // 0x40 (12)
};

// Class Engine.MaterialExpressionDDY
struct UMaterialExpressionDDY : UMaterialExpression {
	struct Unknown Value; // 0x40 (12)
};

// Class Engine.MaterialExpressionDecalMipmapLevel
struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	struct Unknown TextureSize; // 0x40 (12)
	float ConstWidth; // 0x54 (4)
	float ConstHeight; // 0x58 (4)
};

// Class Engine.MaterialExpressionDepthFade
struct UMaterialExpressionDepthFade : UMaterialExpression {
	struct Unknown InOpacity; // 0x40 (12)
	struct Unknown FadeDistance; // 0x54 (12)
	float OpacityDefault; // 0x68 (4)
	float FadeDistanceDefault; // 0x6C (4)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	char FunctionValue; // 0x40 (1)
	struct Unknown Depth; // 0x44 (12)
};

// Class Engine.MaterialExpressionDeriveNormalZ
struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	struct Unknown InXY; // 0x40 (12)
};

// Class Engine.MaterialExpressionDesaturation
struct UMaterialExpressionDesaturation : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	struct Unknown Fraction; // 0x54 (12)
	struct Unknown LuminanceFactors; // 0x68 (16)
};

// Class Engine.MaterialExpressionDistance
struct UMaterialExpressionDistance : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
};

// Class Engine.MaterialExpressionDistanceFieldGradient
struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	struct Unknown Position; // 0x40 (12)
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	struct Unknown Position; // 0x40 (12)
};

// Class Engine.MaterialExpressionDivide
struct UMaterialExpressionDivide : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	float ConstA; // 0x68 (4)
	float ConstB; // 0x6C (4)
};

// Class Engine.MaterialExpressionDotProduct
struct UMaterialExpressionDotProduct : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
};

// Class Engine.MaterialExpressionDynamicPct
struct UMaterialExpressionDynamic : UMaterialExpression {
	struct TArray<Unknown> ParamNames; // 0x40 (16)
	struct Unknown DefaultValue; // 0x50 (16)
	uint32_t ParameterIndex; // 0x60 (4)
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	struct Unknown Default; // 0x40 (12)
	struct Unknown Inputs[0x4]; // 0x54 (48)
};

// Class Engine.MaterialExpressionFloor
struct UMaterialExpressionFloor : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionFmod
struct UMaterialExpressionFmod : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
};

// Class Engine.MaterialExpressionFontSample
struct UMaterialExpressionFontSample : UMaterialExpression {
	struct Unknown Font; // 0x40 (8)
	int32_t FontTexturePage; // 0x48 (4)
};

// Class Engine.MaterialExpressionFontSampleParameter
struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	struct FName ParameterName; // 0x50 (8)
	struct Unknown ExpressionGUID; // 0x58 (16)
	struct FName Group; // 0x68 (8)
};

// Class Engine.MaterialExpressionFrac
struct UMaterialExpressionFrac : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionFresnel
struct UMaterialExpressionFresnel : UMaterialExpression {
	struct Unknown ExponentIn; // 0x40 (12)
	float Exponent; // 0x54 (4)
	struct Unknown BaseReflectFractionIn; // 0x58 (12)
	float BaseReflectFraction; // 0x6C (4)
	struct Unknown Normal; // 0x70 (12)
};

// Class Engine.MaterialExpressionFunctionInput
struct UMaterialExpressionFunctionInput : UMaterialExpression {
	struct Unknown Preview; // 0x40 (12)
	struct FName InputName; // 0x54 (8)
	struct FString Description; // 0x60 (16)
	struct Unknown ID; // 0x70 (16)
	char InputType; // 0x80 (1)
	struct Unknown PreviewValue; // 0x90 (16)
	char bUsePreviewValueAsDefault : 0; // 0xA0 (1)
	int32_t SortPriority; // 0xA4 (4)
	char bCompilingFunctionPreview : 0; // 0xA8 (1)
};

// Class Engine.MaterialExpressionFunctionOutput
struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	struct FName OutputName; // 0x40 (8)
	struct FString Description; // 0x48 (16)
	int32_t SortPriority; // 0x58 (4)
	struct Unknown A; // 0x5C (12)
	char bLastPreviewed : 0; // 0x70 (1)
	struct Unknown ID; // 0x74 (16)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct Unknown MaterialAttributes; // 0x40 (16)
	struct TArray<Unknown> AttributeGetTypes; // 0x58 (16)
};

// Class Engine.MaterialExpressionGIReplace
struct UMaterialExpressionGIReplace : UMaterialExpression {
	struct Unknown Default; // 0x40 (12)
	struct Unknown StaticIndirect; // 0x54 (12)
	struct Unknown DynamicIndirect; // 0x68 (12)
};

// Class Engine.MaterialExpressionIf
struct UMaterialExpressionIf : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	struct Unknown AGreaterThanB; // 0x68 (12)
	struct Unknown AEqualsB; // 0x7C (12)
	struct Unknown ALessThanB; // 0x90 (12)
	float EqualsThreshold; // 0xA4 (4)
	float ConstB; // 0xA8 (4)
	float ConstAEqualsB; // 0xAC (4)
};

// Class Engine.MaterialExpressionLightmassReplace
struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	struct Unknown Realtime; // 0x40 (12)
	struct Unknown Lightmass; // 0x54 (12)
};

// Class Engine.MaterialExpressionLinearInterpolate
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	struct Unknown ALPHA; // 0x68 (12)
	float ConstA; // 0x7C (4)
	float ConstB; // 0x80 (4)
	float ConstAlpha; // 0x84 (4)
};

// Class Engine.MaterialExpressionLogarithm10
struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	struct Unknown X; // 0x40 (12)
};

// Class Engine.MaterialExpressionLogarithm2
struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	struct Unknown X; // 0x40 (12)
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	struct Unknown BaseColor; // 0x40 (12)
	struct Unknown Metallic; // 0x54 (12)
	struct Unknown Specular; // 0x68 (12)
	struct Unknown Roughness; // 0x7C (12)
	struct Unknown Anisotropy; // 0x90 (12)
	struct Unknown EmissiveColor; // 0xA4 (12)
	struct Unknown Opacity; // 0xB8 (12)
	struct Unknown OpacityMask; // 0xCC (12)
	struct Unknown Normal; // 0xE0 (12)
	struct Unknown Tangent; // 0xF4 (12)
	struct Unknown WorldPositionOffset; // 0x108 (12)
	struct Unknown WorldDisplacement; // 0x11C (12)
	struct Unknown TessellationMultiplier; // 0x130 (12)
	struct Unknown SubsurfaceColor; // 0x144 (12)
	struct Unknown ClearCoat; // 0x158 (12)
	struct Unknown ClearCoatRoughness; // 0x16C (12)
	struct Unknown AmbientOcclusion; // 0x180 (12)
	struct Unknown Refraction; // 0x194 (12)
	struct Unknown CustomizedUVs[0x8]; // 0x1A8 (96)
	struct Unknown PixelDepthOffset; // 0x248 (12)
	struct Unknown ShadingModel; // 0x25C (12)
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	struct Unknown Coordinates; // 0x40 (12)
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	struct FName ParameterName; // 0x40 (8)
	struct Unknown ExpressionGUID; // 0x48 (16)
	struct Unknown Input; // 0x58 (16)
	struct Unknown DefaultLayers; // 0x70 (64)
	struct TArray<Unknown> LayerCallers; // 0xB0 (16)
	int32_t NumActiveLayerCallers; // 0xC0 (4)
	struct TArray<Unknown> BlendCallers; // 0xC8 (16)
	int32_t NumActiveBlendCallers; // 0xD8 (4)
	char bIsLayerGraphBuilt : 0; // 0xDC (1)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct Unknown MaterialFunction; // 0x40 (8)
	struct Unknown FunctionParameterInfo; // 0x48 (16)
};

// Class Engine.MaterialExpressionMaterialProxyReplace
struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	struct Unknown Realtime; // 0x40 (12)
	struct Unknown MaterialProxy; // 0x54 (12)
};

// Class Engine.MaterialExpressionMax
struct UMaterialExpressionMax : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	float ConstA; // 0x68 (4)
	float ConstB; // 0x6C (4)
};

// Class Engine.MaterialExpressionMin
struct UMaterialExpressionMin : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	float ConstA; // 0x68 (4)
	float ConstB; // 0x6C (4)
};

// Class Engine.MaterialExpressionMultiply
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	float ConstA; // 0x68 (4)
	float ConstB; // 0x6C (4)
};

// Class Engine.MaterialExpressionNoise
struct UMaterialExpressionNoise : UMaterialExpression {
	struct Unknown Position; // 0x40 (12)
	struct Unknown FilterWidth; // 0x54 (12)
	float Scale; // 0x68 (4)
	int32_t Quality; // 0x6C (4)
	char NoiseFunction; // 0x70 (1)
	char bTurbulence : 0; // 0x74 (1)
	int32_t Levels; // 0x78 (4)
	float OutputMin; // 0x7C (4)
	float OutputMax; // 0x80 (4)
	float LevelScale; // 0x84 (4)
	char bTiling : 0; // 0x88 (1)
	uint32_t RepeatSize; // 0x8C (4)
};

// Class Engine.MaterialExpressionNormalize
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct Unknown VectorInput; // 0x40 (12)
};

// Class Engine.MaterialExpressionOneMinus
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionPanner
struct UMaterialExpressionPanner : UMaterialExpression {
	struct Unknown Coordinate; // 0x40 (12)
	struct Unknown Time; // 0x54 (12)
	struct Unknown Speed; // 0x68 (12)
	float SpeedX; // 0x7C (4)
	float SpeedY; // 0x80 (4)
	uint32_t ConstCoordinate; // 0x84 (4)
	char bFractionalPart : 0; // 0x88 (1)
};

// Class Engine.MaterialExpressionParticleSubUV
struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 0; // 0xD0 (1)
};

// Class Engine.MaterialExpressionPerInstanceCustomData
struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	struct Unknown DefaultValue; // 0x40 (12)
	float ConstDefaultValue; // 0x54 (4)
	uint32_t DataIndex; // 0x58 (4)
};

// Class Engine.MaterialExpressionPower
struct UMaterialExpressionPower : UMaterialExpression {
	struct Unknown Base; // 0x40 (12)
	struct Unknown Exponent; // 0x54 (12)
	float ConstExponent; // 0x68 (4)
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	struct Unknown CurrentFrame; // 0x40 (12)
	struct Unknown PreviousFrame; // 0x54 (12)
};

// Class Engine.MaterialExpressionQualitySwitch
struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	struct Unknown Default; // 0x40 (12)
	struct Unknown Inputs[0x3]; // 0x54 (36)
};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	struct Unknown Normal; // 0x40 (12)
	struct Unknown RayTraced; // 0x54 (12)
};

// Class Engine.MaterialExpressionRebaseToZeroOrigin
struct UMaterialExpressionRebaseToZeroOrigin : UMaterialExpression {
	struct Unknown InputVector; // 0x40 (12)
};

// Class Engine.MaterialExpressionReflectionVectorWS
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct Unknown CustomWorldNormal; // 0x40 (12)
	char bNormalizeCustomWorldNormal : 0; // 0x54 (1)
};

// Class Engine.MaterialExpressionReroute
struct UMaterialExpressionReroute : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionRotateAboutAxis
struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	struct Unknown NormalizedRotationAxis; // 0x40 (12)
	struct Unknown RotationAngle; // 0x54 (12)
	struct Unknown PivotPoint; // 0x68 (12)
	struct Unknown Position; // 0x7C (12)
	float Period; // 0x90 (4)
};

// Class Engine.MaterialExpressionRotator
struct UMaterialExpressionRotator : UMaterialExpression {
	struct Unknown Coordinate; // 0x40 (12)
	struct Unknown Time; // 0x54 (12)
	float CenterX; // 0x68 (4)
	float CenterY; // 0x6C (4)
	float Speed; // 0x70 (4)
	uint32_t ConstCoordinate; // 0x74 (4)
};

// Class Engine.MaterialExpressionRound
struct UMaterialExpressionRound : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	struct Unknown BaseColor; // 0x40 (12)
	struct Unknown Specular; // 0x54 (12)
	struct Unknown Roughness; // 0x68 (12)
	struct Unknown Normal; // 0x7C (12)
	struct Unknown WorldHeight; // 0x90 (12)
	struct Unknown Opacity; // 0xA4 (12)
	struct Unknown Mask; // 0xB8 (12)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	struct Unknown Default; // 0x40 (12)
	struct Unknown VirtualTextureOutput; // 0x54 (12)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	struct Unknown Coordinates; // 0x40 (12)
	struct Unknown WorldPosition; // 0x54 (12)
	struct Unknown MipValue; // 0x68 (12)
	struct Unknown VirtualTexture; // 0x80 (8)
	enum class Unknow MaterialType; // 0x88 (1)
	char bSinglePhysicalSpace : 0; // 0x89 (1)
	char MipValueMode; // 0x8A (1)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	struct FName ParameterName; // 0x90 (8)
	struct Unknown ExpressionGUID; // 0x98 (16)
	struct FName Group; // 0xA8 (8)
};

// Class Engine.MaterialExpressionSaturate
struct UMaterialExpressionSaturate : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionSceneColor
struct UMaterialExpressionSceneColor : UMaterialExpression {
	char InputMode; // 0x40 (1)
	struct Unknown Input; // 0x44 (12)
	struct Unknown OffsetFraction; // 0x58 (12)
	struct Unknown ConstInput; // 0x6C (8)
};

// Class Engine.MaterialExpressionSceneDepth
struct UMaterialExpressionSceneDepth : UMaterialExpression {
	char InputMode; // 0x40 (1)
	struct Unknown Input; // 0x44 (12)
	struct Unknown Coordinates; // 0x58 (12)
	struct Unknown ConstInput; // 0x6C (8)
};

// Class Engine.MaterialExpressionSceneTexture
struct UMaterialExpressionSceneTexture : UMaterialExpression {
	struct Unknown Coordinates; // 0x40 (12)
	char SceneTextureId; // 0x54 (1)
	char bFiltered : 0; // 0x55 (1)
};

// Class Engine.MaterialExpressionSetMaterialAttributes
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<Unknown> Inputs; // 0x40 (16)
	struct TArray<Unknown> AttributeSetTypes; // 0x50 (16)
};

// Class Engine.MaterialExpressionShaderStageSwitch
struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	struct Unknown PixelShader; // 0x40 (12)
	struct Unknown VertexShader; // 0x54 (12)
};

// Class Engine.MaterialExpressionShadingModel
struct UMaterialExpressionShadingModel : UMaterialExpression {
	char ShadingModel; // 0x40 (1)
};

// Class Engine.MaterialExpressionShading
struct UMaterialExpressionShadingPodel : UMaterialExpression {
	struct Unknown Default; // 0x40 (12)
	struct Unknown Inputs[0x3]; // 0x54 (36)
};

// Class Engine.MaterialExpressionShadowReplace
struct UMaterialExpressionShadowReplace : UMaterialExpression {
	struct Unknown Default; // 0x40 (12)
	struct Unknown Shadow; // 0x54 (12)
};

// Class Engine.MaterialExpressionSign
struct UMaterialExpressionSign : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionSine
struct UMaterialExpressionSine : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	float Period; // 0x54 (4)
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	struct Unknown ScatteringCoefficients; // 0x40 (12)
	struct Unknown AbsorptionCoefficients; // 0x54 (12)
	struct Unknown PhaseG; // 0x68 (12)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40 (4)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40 (4)
	struct Unknown WorldPosition; // 0x44 (12)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40 (4)
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	struct Unknown WorldPosition; // 0x40 (12)
};

// Class Engine.MaterialExpressionSobol
struct UMaterialExpressionSobol : UMaterialExpression {
	struct Unknown cell; // 0x40 (12)
	struct Unknown Index; // 0x54 (12)
	struct Unknown Seed; // 0x68 (12)
	uint32_t ConstIndex; // 0x7C (4)
	struct Unknown ConstSeed; // 0x80 (8)
};

// Class Engine.MaterialExpressionSpeedTree
struct UMaterialExpressionSpeedTree : UMaterialExpression {
	struct Unknown GeometryInput; // 0x40 (12)
	struct Unknown WindInput; // 0x54 (12)
	struct Unknown LODInput; // 0x68 (12)
	struct Unknown ExtraBendWS; // 0x7C (12)
	char GeometryType; // 0x90 (1)
	char WindType; // 0x91 (1)
	char LODType; // 0x92 (1)
	float BillboardThreshold; // 0x94 (4)
	char bAccurateWindVelocities : 0; // 0x98 (1)
};

// Class Engine.MaterialExpressionSphereMask
struct UMaterialExpressionSphereMask : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	struct Unknown Radius; // 0x68 (12)
	struct Unknown Hardness; // 0x7C (12)
	float AttenuationRadius; // 0x90 (4)
	float HardnessPercent; // 0x94 (4)
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	struct Unknown Density; // 0x40 (12)
	float ConstantDensity; // 0x54 (4)
};

// Class Engine.MaterialExpressionSquareRoot
struct UMaterialExpressionSquareRoot : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionStaticBool
struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 0; // 0x40 (1)
};

// Class Engine.MaterialExpressionStaticBoolParameter
struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 0; // 0x58 (1)
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	struct Unknown Input; // 0x58 (12)
	char DefaultR : 0; // 0x6C (1)
	char DefaultG : 0; // 0x6C (1)
	char DefaultB : 0; // 0x6C (1)
	char DefaultA : 0; // 0x6C (1)
};

// Class Engine.MaterialExpressionStaticSwitch
struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 0; // 0x40 (1)
	struct Unknown A; // 0x44 (12)
	struct Unknown B; // 0x58 (12)
	struct Unknown Value; // 0x6C (12)
};

// Class Engine.MaterialExpressionStaticSwitchParameter
struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	struct Unknown A; // 0x60 (12)
	struct Unknown B; // 0x74 (12)
};

// Class Engine.MaterialExpressionSubtract
struct UMaterialExpressionSubtract : UMaterialExpression {
	struct Unknown A; // 0x40 (12)
	struct Unknown B; // 0x54 (12)
	float ConstA; // 0x68 (4)
	float ConstB; // 0x6C (4)
};

// Class Engine.MaterialExpressionTangent
struct UMaterialExpressionTangent : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	float Period; // 0x54 (4)
};

// Class Engine.MaterialExpressionTangentOutput
struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionTemporalSobol
struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	struct Unknown Index; // 0x40 (12)
	struct Unknown Seed; // 0x54 (12)
	uint32_t ConstIndex; // 0x68 (4)
	struct Unknown ConstSeed; // 0x6C (8)
};

// Class Engine.MaterialExpressionTextureCoordinate
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40 (4)
	float UTiling; // 0x44 (4)
	float VTiling; // 0x48 (4)
	char UnMirrorU : 0; // 0x4C (1)
	char UnMirrorV : 0; // 0x4C (1)
};

// Class Engine.MaterialExpressionTexture
struct UMaterialExpressionTexture : UMaterialExpression {
	struct Unknown TextureObject; // 0x40 (12)
	char Property; // 0x54 (1)
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 0; // 0xF0 (1)
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	struct Unknown TransmittanceColor; // 0x40 (12)
};

// Class Engine.MaterialExpressionTime
struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 0; // 0x40 (1)
	char bOverride_Period : 0; // 0x40 (1)
	float Period; // 0x44 (4)
};

// Class Engine.MaterialExpressionTransform
struct UMaterialExpressionTransform : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	char TransformSourceType; // 0x54 (1)
	char TransformType; // 0x55 (1)
};

// Class Engine.MaterialExpressionTransformPosition
struct UMaterialExpressionTransformPosition : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
	char TransformSourceType; // 0x54 (1)
	char TransformType; // 0x55 (1)
};

// Class Engine.MaterialExpressionTruncate
struct UMaterialExpressionTruncate : UMaterialExpression {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionVectorNoise
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct Unknown Position; // 0x40 (12)
	char NoiseFunction; // 0x54 (1)
	int32_t Quality; // 0x58 (4)
	char bTiling : 0; // 0x5C (1)
	uint32_t TileSize; // 0x60 (4)
};

// Class Engine.MaterialExpressionVertexInterpolator
struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	struct Unknown Input; // 0x40 (12)
};

// Class Engine.MaterialExpressionViewProperty
struct UMaterialExpressionViewProperty : UMaterialExpression {
	char Property; // 0x40 (1)
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	struct Unknown No; // 0x40 (12)
	struct Unknown Yes; // 0x54 (12)
};

// Class Engine.MaterialExpressionWorldPosition
struct UMaterialExpressionWorldPosition : UMaterialExpression {
	char WorldPositionShaderOffset; // 0x40 (1)
};

// Class Engine.MaterialFunctionInterface
struct UMaterialFunctionInterface : Object {
	struct Unknown StateID; // 0x28 (16)
	enum class Unknow MaterialFunctionUsage; // 0x38 (1)
};

// Class Engine.MaterialFunction
struct UMaterialFunction : UMaterialFunctionInterface {
	struct FString Description; // 0x40 (16)
	char bExposeToLibrary : 0; // 0x50 (1)
	char bPrefixParameterNames : 0; // 0x50 (1)
	char b : 0; // 0x50 (1)
};

// Class Engine.MaterialFunctionInstance
struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	struct Unknown Parent; // 0x40 (8)
	struct Unknown Base; // 0x48 (8)
	struct TArray<Unknown> ScalarParameterValues; // 0x50 (16)
	struct TArray<Unknown> VectorParameterValues; // 0x60 (16)
	struct TArray<Unknown> TextureParameterValues; // 0x70 (16)
	struct TArray<Unknown> FontParameterValues; // 0x80 (16)
	struct TArray<Unknown> StaticSwitchParameterValues; // 0x90 (16)
	struct TArray<Unknown> StaticComponentMaskParameterValues; // 0xA0 (16)
	struct TArray<Unknown> RuntimeVirtualTextureParameterValues; // 0xB0 (16)
};

// Class Engine.MaterialInstanceActor
struct AMaterialInstanceActor : UActor {
	struct TArray<Unknown> TargetActors; // 0x310 (16)
};

// Class Engine.MaterialParameterCollection
struct UMaterialParameterCollection : Object {
	struct Unknown StateID; // 0x28 (16)
	struct TArray<Unknown> ScalarParameters; // 0x38 (16)
	struct TArray<Unknown> VectorParameters; // 0x48 (16)
};

// Class Engine.MaterialParameterCollectionInstance
struct UMaterialParameterCollectionInstance : Object {
	struct Unknown Collection; // 0x30 (8)
};

// Class Engine.MatineeActor
struct AMatineeActor : UActor {
	struct Unknown MatineeData; // 0x310 (8)
	struct FName MatineeControllerName; // 0x318 (8)
	float PlayRate; // 0x320 (4)
	char bPlayOnLevelLoad : 0; // 0x324 (1)
	char bForceStartPos : 0; // 0x324 (1)
	float ForceStartPosition; // 0x328 (4)
	char bLooping : 0; // 0x32C (1)
	char b : 0; // 0x32C (1)
	char bNoResetOnRewind : 0; // 0x32C (1)
	char b : 0; // 0x32C (1)
	char bDisableRadioFilter : 0; // 0x32C (1)
	char bClientSideOnly : 0; // 0x32C (1)
	char bSkipUpdateIfNotVisible : 0; // 0x32C (1)
	char bIsSkippable : 0; // 0x32C (1)
	int32_t PreferredSplitScreenNum; // 0x330 (4)
	char bDisableMovementInput : 0; // 0x334 (1)
	char bDisableLookAtInput : 0; // 0x334 (1)
	char bHidePlayer : 0; // 0x334 (1)
	char bHideHud : 0; // 0x334 (1)
	struct TArray<Unknown> GroupActorInfos; // 0x338 (16)
	char bShouldShowGore : 0; // 0x348 (1)
	struct TArray<Unknown> GroupInst; // 0x350 (16)
	struct TArray<Unknown> CameraCuts; // 0x360 (16)
	char bIsPlaying : 0; // 0x370 (1)
	char b : 0; // 0x370 (1)
	char bPaused : 0; // 0x370 (1)
	char bPendingStop : 0; // 0x370 (1)
	float InterpPosition; // 0x374 (4)
	char ReplicationForceIsPlaying; // 0x37C (1)
	struct FMulticastInlineDelegate OnPlay; // 0x380 (16)
	struct FMulticastInlineDelegate OnStop; // 0x390 (16)
	struct FMulticastInlineDelegate OnPause; // 0x3A0 (16)

	void Stop(); // Function Engine.MatineeActor.Stop(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1CD70>
	void SetPosition(float NewPosition, char bJump); // Function Engine.MatineeActor.SetPosition(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D380>
	void SetLoopingState(char bNewLooping); // Function Engine.MatineeActor.SetLoopingState(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8D2F0>
	void Reverse(); // Function Engine.MatineeActor.Reverse(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1B4E0>
	void Play(); // Function Engine.MatineeActor.Play(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12372B0>
	void Pause(); // Function Engine.MatineeActor.Pause(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x11CCBF0>
	void EnableGroupByName(struct FString GroupName, char bEnable); // Function Engine.MatineeActor.EnableGroupByName(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D8CD90>
	void ChangePlaybackDirection(); // Function Engine.MatineeActor.ChangePlaybackDirection(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3C90310>
};

// Class Engine.MatineeActorCameraAnim
struct AMatineeActorCameraAnim : AMatineeActor {
	struct Unknown CameraAnim; // 0x3B8 (8)
};

// Class Engine.MeshSimplificationSettings
struct UMeshSimplificationSettings : UDeveloperSettings {
	struct FName MeshReductionModuleName; // 0x38 (8)
};

// Class Engine.MicroTransactionBase
struct UMicroTransactionBase : UPlatformInterfaceBase {
	struct TArray<Unknown> AvailableProducts; // 0x38 (16)
	struct FString LastError; // 0x48 (16)
	struct FString LastErrorSolution; // 0x58 (16)
};

// Class Engine.MK3DKillcamComponent
struct UMK3DKillcamComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMK3DKillcamCompleteEvent; // 0xB0 (16)
	struct TArray<Unknown> MK3DKillEvents; // 0xD8 (16)
	float KillcamBeforeSec; // 0xE8 (4)
	float KillcamAfterSec; // 0xEC (4)

	void OnJumpCompleteForKillcam(char bSuccess); // Function Engine.MK3DKillcamComponent.OnJumpCompleteForKillcam(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D90AD0>
};

// Class Engine.MK3DTargetcamComponent
struct UMK3DTargetcamComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMK3DTargetcamCompleteEvent; // 0xB0 (16)
	struct TArray<Unknown> MK3DTargetEvents; // 0xD8 (16)

	void EnumerateMK3DTargetEvents(struct Unknown World); // Function Engine.MK3DTargetcamComponent.EnumerateMK3DTargetEvents(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D94480>
};

// Class Engine.MKDemoActorChannel
struct UMKDemoActorChannel : UActorChannel {
	struct TArray<Unknown> PendingNetObjectsHolder; // 0x2F0 (16)
};

// Class Engine.ReplaySampleBase
struct UReplaySampleBase : Object {
	char DataVersion; // 0x30 (1)
	float Time; // 0x34 (4)

	struct Unknown MakeReplaySample(struct Unknown Actor); // Function Engine.ReplaySampleBase.MakeReplaySample(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D95600>
};

// Class Engine.ModelComponent
struct UModelComponent : UPrimitiveComponent {
	struct Unknown ModelBodySetup; // 0x4D0 (8)
};

// Class Engine.MorphTarget
struct UMorphTarget : Object {
	struct Unknown BaseSkelMesh; // 0x28 (8)
};

// Class Engine.NavCollisionBase
struct UNavCollisionBase : Object {
	char bIsDynamicObstacle : 0; // 0x28 (1)
};

// Class Engine.NavigationDataChunk
struct UNavigationDataChunk : Object {
	struct FName NavigationDataName; // 0x28 (8)
};

// Class Engine.NavigationSystemConfig
struct UNavigationSystemConfig : Object {
	struct Unknown NavigationSystemClass; // 0x28 (24)
	struct Unknown SupportedAgentsMask; // 0x40 (4)
	struct FName DefaultAgentName; // 0x44 (8)
	char bIsOverriden : 0; // 0x4C (1)
};

// Class Engine.NavLinkDefinition
struct UNavLinkDefinition : Object {
	struct TArray<Unknown> LINKS; // 0x28 (16)
	struct TArray<Unknown> SegmentLinks; // 0x38 (16)
};

// Class Engine.NetworkSettings
struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 0; // 0x38 (1)
	char bEnableMultiplayerWorldOriginRebasing : 0; // 0x38 (1)
	int32_t MaxRepArraySize; // 0x3C (4)
	int32_t MaxRepArrayMemory; // 0x40 (4)
	struct TArray<Unknown> NetworkEmulationProfiles; // 0x48 (16)
};

// Class Engine.NodeMappingContainer
struct UNodeMappingContainer : Object {
	struct TMap<Unknown, Unknown>Unknown SourceItems; // 0x28 (80)
	struct TMap<Unknown, Unknown>Unknown TargetItems; // 0x78 (80)
	struct TMap<Unknown, Unknown>Unknown SourceToTarget; // 0xC8 (80)
	struct TSoftObjectPtr<Unknown> SourceAsset; // 0x118 (40)
	struct TSoftObjectPtr<Unknown> TargetAsset; // 0x140 (40)
};

// Class Engine.ObjectLibrary
struct UObjectLibrary : Object {
	struct Unknown* ObjectBaseClass; // 0x28 (8)
	char bHasBlueprintClasses : 0; // 0x30 (1)
	struct TArray<Unknown> Objects; // 0x38 (16)
	struct TArray<Unknown> WeakObjects; // 0x48 (16)
	char bUseWeakReferences : 0; // 0x58 (1)
	char bIsFullyLoaded : 0; // 0x59 (1)
};

// Class Engine.ObjectReferencer
struct UObjectReferencer : Object {
	struct TArray<Unknown> ReferencedObjects; // 0x28 (16)
};

// Class Engine.PainCausingVolume
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 0; // 0x358 (1)
	float DamagePerSec; // 0x35C (4)
	struct Unknown* DamageType; // 0x360 (8)
	float PainInterval; // 0x368 (4)
	char bEntryPain : 0; // 0x36C (1)
	char BACKUP_bPainCausing : 0; // 0x36C (1)
	struct Unknown DamageInstigator; // 0x370 (8)
};

// Class Engine.ParticleEmitter
struct UParticleEmitter : Object {
	struct FName EmitterName; // 0x28 (8)
	int32_t SubUVDataOffset; // 0x30 (4)
	char EmitterRenderMode; // 0x34 (1)
	enum class Unknow SignificanceLevel; // 0x35 (1)
	char bUseLegacySpawningBehavior : 0; // 0x37 (1)
	char ConvertedModules : 0; // 0x37 (1)
	char bIsSoloing : 0; // 0x37 (1)
	char bCookedOut : 0; // 0x37 (1)
	char bDisabledLODsKeepEmitterAlive : 0; // 0x37 (1)
	char bDisableWhenInsignficant : 0; // 0x38 (1)
	struct TArray<Unknown> LODLevels; // 0x40 (16)
	int32_t PeakActiveParticles; // 0x50 (4)
	int32_t InitialAllocationCount; // 0x54 (4)
	float QualityLevelSpawnRateScale; // 0x58 (4)
	uint32_t DetailModeBitmask; // 0x5C (4)
};

// Class Engine.ParticleLODLevel
struct UParticleLODLevel : Object {
	int32_t Level; // 0x28 (4)
	char bEnabled : 0; // 0x2C (1)
	struct Unknown RequiredModule; // 0x30 (8)
	struct TArray<Unknown> Modules; // 0x38 (16)
	struct Unknown TypeDataModule; // 0x48 (8)
	struct Unknown SpawnModule; // 0x50 (8)
	struct Unknown EventGenerator; // 0x58 (8)
	struct TArray<Unknown> SpawningModules; // 0x60 (16)
	struct TArray<Unknown> SpawnModules; // 0x70 (16)
	struct TArray<Unknown> UpdateModules; // 0x80 (16)
	struct TArray<Unknown> OrbitModules; // 0x90 (16)
	struct TArray<Unknown> EventReceiverModules; // 0xA0 (16)
	char ConvertedModules : 0; // 0xB0 (1)
	int32_t PeakActiveParticles; // 0xB4 (4)
};

// Class Engine.ParticleModule
struct UParticleModule : Object {
	char bSpawnModule : 0; // 0x28 (1)
	char bUpdateModule : 0; // 0x28 (1)
	char bFinalUpdateModule : 0; // 0x28 (1)
	char bUpdateForGPUEmitter : 0; // 0x28 (1)
	char bCurvesAsColor : 0; // 0x28 (1)
	char b3DDrawMode : 0; // 0x28 (1)
	char bSupported3DDrawMode : 0; // 0x28 (1)
	char bEnabled : 0; // 0x28 (1)
	char bEditable : 0; // 0x29 (1)
	char LODDuplicate : 0; // 0x29 (1)
	char bSupportsRandomSeed : 0; // 0x29 (1)
	char b : 0; // 0x29 (1)
	char LODValidity; // 0x2A (1)
};

// Class Engine.ParticleModuleAccelerationBase
struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 0; // 0x30 (1)
};

// Class Engine.ParticleModuleAcceleration
struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	struct Unknown Acceleration; // 0x38 (72)
	char bApplyOwnerScale : 0; // 0x80 (1)
};

// Class Engine.ParticleModuleAccelerationConstant
struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	struct Unknown Acceleration; // 0x38 (12)
};

// Class Engine.ParticleModuleAccelerationDrag
struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	struct Unknown DragCoefficient; // 0x38 (8)
	struct Unknown DragCoefficientRaw; // 0x40 (48)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	struct Unknown DragScale; // 0x38 (8)
	struct Unknown DragScaleRaw; // 0x40 (48)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	struct Unknown AccelOverLife; // 0x38 (72)
};

// Class Engine.ParticleModuleAttractorLine
struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	struct Unknown EndPoint0; // 0x30 (12)
	struct Unknown EndPoint1; // 0x3C (12)
	struct Unknown Range; // 0x48 (48)
	struct Unknown Strength; // 0x78 (48)
};

// Class Engine.ParticleModuleAttractorParticle
struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	struct FName EmitterName; // 0x30 (8)
	struct Unknown Range; // 0x38 (48)
	char bStrengthByDistance : 0; // 0x68 (1)
	struct Unknown Strength; // 0x70 (48)
	char bAffectBaseVelocity : 0; // 0xA0 (1)
	char SelectionMethod; // 0xA4 (1)
	char b : 0; // 0xA8 (1)
	char bInheritSourceVel : 0; // 0xA8 (1)
	int32_t LastSelIndex; // 0xAC (4)
};

// Class Engine.ParticleModuleAttractorPoint
struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	struct Unknown Position; // 0x30 (72)
	struct Unknown Range; // 0x78 (48)
	struct Unknown Strength; // 0xA8 (48)
	char StrengthByDistance : 0; // 0xD8 (1)
	char bAffectBaseVelocity : 0; // 0xD8 (1)
	char bOverrideVelocity : 0; // 0xD8 (1)
	char bUseWorldSpacePosition : 0; // 0xD8 (1)
	char Positive_X : 0; // 0xD8 (1)
	char Positive_Y : 0; // 0xD8 (1)
	char Positive_Z : 0; // 0xD8 (1)
	char Negative_X : 0; // 0xD8 (1)
	char Negative_Y : 0; // 0xD9 (1)
	char Negative_Z : 0; // 0xD9 (1)
};

// Class Engine.ParticleModuleAttractorPointGravity
struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	struct Unknown Position; // 0x30 (12)
	float Radius; // 0x3C (4)
	struct Unknown Strength; // 0x40 (8)
	struct Unknown StrengthRaw; // 0x48 (48)
};

// Class Engine.ParticleModuleBeamModifier
struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	char ModifierType; // 0x30 (1)
	struct Unknown PositionOptions; // 0x34 (4)
	struct Unknown Position; // 0x38 (72)
	struct Unknown TangentOptions; // 0x80 (4)
	struct Unknown Tangent; // 0x88 (72)
	char bAbsoluteTangent : 0; // 0xD0 (1)
	struct Unknown StrengthOptions; // 0xD4 (4)
	struct Unknown Strength; // 0xD8 (48)
};

// Class Engine.ParticleModuleBeamNoise
struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 0; // 0x30 (1)
	int32_t Frequency; // 0x34 (4)
	int32_t Frequency_LowRange; // 0x38 (4)
	struct Unknown NoiseRange; // 0x40 (72)
	struct Unknown NoiseRangeScale; // 0x88 (48)
	char bNRScaleEmitterTime : 0; // 0xB8 (1)
	struct Unknown NoiseSpeed; // 0xC0 (72)
	char bSmooth : 0; // 0x108 (1)
	float NoiseLockRadius; // 0x10C (4)
	char bNoiseLock : 0; // 0x110 (1)
	char bOscillate : 0; // 0x110 (1)
	float NoiseLockTime; // 0x114 (4)
	float NoiseTension; // 0x118 (4)
	char bUseNoiseTangents : 0; // 0x11C (1)
	struct Unknown NoiseTangentStrength; // 0x120 (48)
	int32_t NoiseTessellation; // 0x150 (4)
	char bTargetNoise : 0; // 0x154 (1)
	float FrequencyDistance; // 0x158 (4)
	char bApplyNoiseScale : 0; // 0x15C (1)
	struct Unknown NoiseScale; // 0x160 (48)
};

// Class Engine.ParticleModuleBeamSource
struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	char SourceMethod; // 0x30 (1)
	struct FName SourceName; // 0x34 (8)
	char bSourceAbsolute : 0; // 0x3C (1)
	struct Unknown Source; // 0x40 (72)
	char bLockSource : 0; // 0x88 (1)
	char SourceTangentMethod; // 0x8C (1)
	struct Unknown SourceTangent; // 0x90 (72)
	char bLockSourceTangent : 0; // 0xD8 (1)
	struct Unknown SourceStrength; // 0xE0 (48)
	char bLockSourceStength : 0; // 0x110 (1)
};

// Class Engine.ParticleModuleBeamTarget
struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	char TargetMethod; // 0x30 (1)
	struct FName TargetName; // 0x34 (8)
	struct Unknown Target; // 0x40 (72)
	char bTargetAbsolute : 0; // 0x88 (1)
	char bLockTarget : 0; // 0x88 (1)
	char TargetTangentMethod; // 0x8C (1)
	struct Unknown TargetTangent; // 0x90 (72)
	char bLockTargetTangent : 0; // 0xD8 (1)
	struct Unknown TargetStrength; // 0xE0 (48)
	char bLockTargetStength : 0; // 0x110 (1)
	float LockRadius; // 0x114 (4)
};

// Class Engine.ParticleModuleCameraOffset
struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	struct Unknown CameraOffset; // 0x30 (48)
	char bSpawnTimeOnly : 0; // 0x60 (1)
	char UpdateMethod; // 0x64 (1)
};

// Class Engine.ParticleModuleCollision
struct UParticleModuleCollision : UParticleModuleCollisionBase {
	struct Unknown DampingFactor; // 0x30 (72)
	struct Unknown DampingFactorRotation; // 0x78 (72)
	struct Unknown MaxCollisions; // 0xC0 (48)
	char CollisionCompletionOption; // 0xF0 (1)
	struct TArray<Unknown> CollisionTypes; // 0xF8 (16)
	char bApplyPhysics : 0; // 0x110 (1)
	char bIgnoreTriggerVolumes : 0; // 0x110 (1)
	struct Unknown ParticleMass; // 0x118 (48)
	float DirScalar; // 0x148 (4)
	char bPawnsDoNotDecrementCount : 0; // 0x14C (1)
	char bOnlyVerticalNormalsDecrementCount : 0; // 0x14C (1)
	float VerticalFudgeFactor; // 0x150 (4)
	struct Unknown DelayAmount; // 0x158 (48)
	char bDropDetail : 0; // 0x188 (1)
	char bCollideOnlyIfVisible : 0; // 0x188 (1)
	char bIgnoreSourceActor : 0; // 0x188 (1)
	float MaxCollisionDistance; // 0x18C (4)
};

// Class Engine.ParticleModuleCollisionGPU
struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	struct Unknown Resilience; // 0x30 (48)
	struct Unknown ResilienceScaleOverLife; // 0x60 (48)
	float Friction; // 0x90 (4)
	float RandomSpread; // 0x94 (4)
	float RandomDistribution; // 0x98 (4)
	float RadiusScale; // 0x9C (4)
	float RadiusBias; // 0xA0 (4)
	char Response; // 0xA4 (1)
	char CollisionMode; // 0xA5 (1)
};

// Class Engine.ParticleModuleColor
struct UParticleModuleColor : UParticleModuleColorBase {
	struct Unknown StartColor; // 0x30 (72)
	struct Unknown StartAlpha; // 0x78 (48)
	char bClampAlpha : 0; // 0xA8 (1)
};

// Class Engine.ParticleModuleColor_Seeded
struct UParticleModuleColor_Seeded : UParticleModuleColor {
	struct Unknown RandomSeedInfo; // 0xB0 (32)
};

// Class Engine.ParticleModuleColorOverLife
struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	struct Unknown ColorOverLife; // 0x30 (72)
	struct Unknown AlphaOverLife; // 0x78 (48)
	char bClampAlpha : 0; // 0xA8 (1)
};

// Class Engine.ParticleModuleColorScaleOverLife
struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	struct Unknown ColorScaleOverLife; // 0x30 (72)
	struct Unknown AlphaScaleOverLife; // 0x78 (48)
	char bEmitterTime : 0; // 0xA8 (1)
};

// Class Engine.ParticleModuleEventGenerator
struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	struct TArray<Unknown> Events; // 0x30 (16)
};

// Class Engine.ParticleModuleEventReceiverBase
struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	char EventGeneratorType; // 0x30 (1)
	struct FName EventName; // 0x34 (8)
};

// Class Engine.ParticleModuleEventReceiverKillParticles
struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 0; // 0x40 (1)
};

// Class Engine.ParticleModuleEventReceiverSpawn
struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	struct Unknown SpawnCount; // 0x40 (48)
	char bUseParticleTime : 0; // 0x70 (1)
	char bUsePSysLocation : 0; // 0x70 (1)
	char bInheritVelocity : 0; // 0x70 (1)
	struct Unknown InheritVelocityScale; // 0x78 (72)
	struct TArray<Unknown> PhysicalMaterials; // 0xC0 (16)
	char bBanPhysicalMaterials : 0; // 0xD0 (1)
};

// Class Engine.ParticleModuleKillBox
struct UParticleModuleKillBox : UParticleModuleKillBase {
	struct Unknown LowerLeftCorner; // 0x30 (72)
	struct Unknown UpperRightCorner; // 0x78 (72)
	char bAbsolute : 0; // 0xC0 (1)
	char bKillInside : 0; // 0xC0 (1)
	char bAxisAlignedAndFixedSize : 0; // 0xC0 (1)
};

// Class Engine.ParticleModuleKillHeight
struct UParticleModuleKillHeight : UParticleModuleKillBase {
	struct Unknown Height; // 0x30 (48)
	char bAbsolute : 0; // 0x60 (1)
	char bFloor : 0; // 0x60 (1)
	char bApplyPSysScale : 0; // 0x60 (1)
};

// Class Engine.ParticleModuleLifetime
struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	struct Unknown LifeTime; // 0x30 (48)
};

// Class Engine.ParticleModuleLifetime_Seeded
struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	struct Unknown RandomSeedInfo; // 0x60 (32)
};

// Class Engine.ParticleModuleLight
struct UParticleModuleLight : UParticleModuleLightBase {
	char bUseInverseSquaredFalloff : 0; // 0x30 (1)
	char bAffectsTranslucency : 0; // 0x31 (1)
	char bPreviewLightRadius : 0; // 0x32 (1)
	float SpawnFraction; // 0x34 (4)
	struct Unknown ColorScaleOverLife; // 0x38 (72)
	struct Unknown BrightnessOverLife; // 0x80 (48)
	struct Unknown RadiusScale; // 0xB0 (48)
	struct Unknown LightExponent; // 0xE0 (48)
	struct Unknown LightingChannels; // 0x110 (1)
	float VolumetricScatteringIntensity; // 0x114 (4)
	char bHighQualityLights : 0; // 0x118 (1)
	char bShadowCastingLights : 0; // 0x119 (1)
};

// Class Engine.ParticleModuleLight_Seeded
struct UParticleModuleLight_Seeded : UParticleModuleLight {
	struct Unknown RandomSeedInfo; // 0x120 (32)
};

// Class Engine.ParticleModuleLocation
struct UParticleModuleLocation : UParticleModuleLocationBase {
	struct Unknown StartLocation; // 0x30 (72)
	float DistributeOverNPoints; // 0x78 (4)
	float DistributeThreshold; // 0x7C (4)
};

// Class Engine.ParticleModuleLocation_Seeded
struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	struct Unknown RandomSeedInfo; // 0x80 (32)
};

// Class Engine.ParticleModuleLocationBoneSocket
struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	char SourceType; // 0x30 (1)
	struct Unknown UniversalOffset; // 0x34 (12)
	struct TArray<Unknown> SourceLocations; // 0x40 (16)
	char SelectionMethod; // 0x50 (1)
	char bUpdatePositionEachFrame : 0; // 0x54 (1)
	char bOrientMeshEmitters : 0; // 0x54 (1)
	char bInheritBoneVelocity : 0; // 0x54 (1)
	float InheritVelocityScale; // 0x58 (4)
	struct FName SkelMeshActorParamName; // 0x5C (8)
	int32_t NumPreSelectedIndices; // 0x64 (4)
};

// Class Engine.ParticleModuleLocationDirect
struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	struct Unknown Location; // 0x30 (72)
	struct Unknown LocationOffset; // 0x78 (72)
	struct Unknown ScaleFactor; // 0xC0 (72)
	struct Unknown Direction; // 0x108 (72)
};

// Class Engine.ParticleModuleLocationEmitter
struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	struct FName EmitterName; // 0x30 (8)
	char SelectionMethod; // 0x38 (1)
	char InheritSourceVelocity : 0; // 0x3C (1)
	float InheritSourceVelocityScale; // 0x40 (4)
	char bInheritSourceRotation : 0; // 0x44 (1)
	float InheritSourceRotationScale; // 0x48 (4)
};

// Class Engine.ParticleModuleLocationEmitterDirect
struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	struct FName EmitterName; // 0x30 (8)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 0; // 0x30 (1)
	char Positive_Y : 0; // 0x30 (1)
	char Positive_Z : 0; // 0x30 (1)
	char Negative_X : 0; // 0x30 (1)
	char Negative_Y : 0; // 0x30 (1)
	char Negative_Z : 0; // 0x30 (1)
	char SurfaceOnly : 0; // 0x30 (1)
	char Velocity : 0; // 0x30 (1)
	struct Unknown VelocityScale; // 0x38 (48)
	struct Unknown StartLocation; // 0x68 (72)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 0; // 0xB0 (1)
	struct Unknown StartRadius; // 0xB8 (48)
	struct Unknown StartHeight; // 0xE8 (48)
	char HeightAxis; // 0x118 (1)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	struct Unknown RandomSeedInfo; // 0x120 (32)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	struct Unknown StartRadius; // 0xB0 (48)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	struct Unknown RandomSeedInfo; // 0xE0 (32)
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	struct Unknown StartOffset; // 0x30 (72)
	struct Unknown Height; // 0x78 (48)
	struct Unknown Angle; // 0xA8 (48)
	struct Unknown Thickness; // 0xD8 (48)
};

// Class Engine.ParticleModuleLocationSkelVertSurface
struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	char SourceType; // 0x30 (1)
	struct Unknown UniversalOffset; // 0x34 (12)
	char bUpdatePositionEachFrame : 0; // 0x40 (1)
	char bOrientMeshEmitters : 0; // 0x40 (1)
	char bInheritBoneVelocity : 0; // 0x40 (1)
	float InheritVelocityScale; // 0x44 (4)
	struct FName SkelMeshActorParamName; // 0x48 (8)
	struct TArray<Unknown> ValidAssociatedBones; // 0x50 (16)
	char bEnforceNormalCheck : 0; // 0x60 (1)
	struct Unknown NormalToCompare; // 0x64 (12)
	float NormalCheckToleranceDegrees; // 0x70 (4)
	float NormalCheckTolerance; // 0x74 (4)
	struct TArray<Unknown> ValidMaterialIndices; // 0x78 (16)
	char bInheritVertexColor : 0; // 0x88 (1)
	char bInheritUV : 0; // 0x88 (1)
	uint32_t InheritUVChannel; // 0x8C (4)
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	struct Unknown RandomSeedInfo; // 0x80 (32)
};

// Class Engine.ParticleModuleMeshMaterial
struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	struct TArray<Unknown> MeshMaterials; // 0x30 (16)
};

// Class Engine.ParticleModuleMeshRotation
struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	struct Unknown StartRotation; // 0x30 (72)
	char bInheritParent : 0; // 0x78 (1)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct Unknown RandomSeedInfo; // 0x80 (32)
};

// Class Engine.ParticleModuleMeshRotationRate
struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	struct Unknown StartRotationRate; // 0x30 (72)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct Unknown RandomSeedInfo; // 0x78 (32)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct Unknown LifeMultiplier; // 0x30 (72)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	struct Unknown RotRate; // 0x30 (72)
	char bScaleRotRate : 0; // 0x78 (1)
};

// Class Engine.ParticleModuleOrbitBase
struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 0; // 0x30 (1)
};

// Class Engine.ParticleModuleOrbit
struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	char ChainMode; // 0x38 (1)
	struct Unknown OffsetAmount; // 0x40 (72)
	struct Unknown OffsetOptions; // 0x88 (4)
	struct Unknown RotationAmount; // 0x90 (72)
	struct Unknown RotationOptions; // 0xD8 (4)
	struct Unknown RotationRateAmount; // 0xE0 (72)
	struct Unknown RotationRateOptions; // 0x128 (4)
};

// Class Engine.ParticleModuleOrientationAxisLock
struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	char LockAxisFlags; // 0x30 (1)
};

// Class Engine.ParticleModuleParameterDynamic
struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	struct TArray<Unknown> DynamicParams; // 0x30 (16)
	int32_t UpdateFlags; // 0x40 (4)
	char bUsesVelocity : 0; // 0x44 (1)
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	struct Unknown RandomSeedInfo; // 0x48 (32)
};

// Class Engine.ParticleModulePivotOffset
struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	struct Unknown PivotOffset; // 0x30 (8)
};

// Class Engine.ParticleModuleRequired
struct UParticleModuleRequired : UParticleModule {
	struct Unknown Material; // 0x30 (8)
	float MinFacingCameraBlendDistance; // 0x38 (4)
	float MaxFacingCameraBlendDistance; // 0x3C (4)
	struct Unknown EmitterOrigin; // 0x40 (12)
	struct Unknown EmitterRotation; // 0x4C (12)
	char ScreenAlignment; // 0x58 (1)
	char bUseLocalSpace : 0; // 0x59 (1)
	char bKillOnDeactivate : 0; // 0x59 (1)
	char bKillOnCompleted : 0; // 0x59 (1)
	char SortMode; // 0x5A (1)
	char bUseLegacyEmitterTime : 0; // 0x5B (1)
	char b : 0; // 0x5B (1)
	char bEmitterDurationUseRange : 0; // 0x5B (1)
	float EmitterDuration; // 0x5C (4)
	struct Unknown SpawnRate; // 0x60 (48)
	struct TArray<Unknown> BurstList; // 0x90 (16)
	float EmitterDelay; // 0xA0 (4)
	float EmitterDelayLow; // 0xA4 (4)
	char bDelayFirstLoopOnly : 0; // 0xA8 (1)
	char InterpolationMethod; // 0xA9 (1)
	char bScaleUV : 0; // 0xAA (1)
	char bEmitterDelayUseRange : 0; // 0xAA (1)
	char ParticleBurstMethod; // 0xAB (1)
	char bOverrideSystemMacroUV : 0; // 0xAC (1)
	char bUseMaxDrawCount : 0; // 0xAC (1)
	char OpacitySourceMode; // 0xAD (1)
	char EmitterNormalsMode; // 0xAE (1)
	char bOrbitModuleAffectsVelocityAlignment : 0; // 0xAF (1)
	int32_t SubImages_Horizontal; // 0xB0 (4)
	int32_t SubImages_Vertical; // 0xB4 (4)
	float RandomImageTime; // 0xB8 (4)
	int32_t RandomImageChanges; // 0xBC (4)
	struct Unknown MacroUVPosition; // 0xC0 (12)
	float MacroUVRadius; // 0xCC (4)
	enum class Unknow UVFlippingMode; // 0xD0 (1)
	char BoundingMode; // 0xD1 (1)
	char bDurationRecalcEachLoop : 0; // 0xD2 (1)
	struct Unknown NormalsSphereCenter; // 0xD4 (12)
	float AlphaThreshold; // 0xE0 (4)
	int32_t EmitterLoops; // 0xE4 (4)
	struct Unknown CutoutTexture; // 0xE8 (8)
	int32_t MaxDrawCount; // 0xF0 (4)
	float EmitterDurationLow; // 0xF4 (4)
	struct Unknown NormalsCylinderDirection; // 0xF8 (12)
	struct TArray<Unknown> NamedMaterialOverrides; // 0x108 (16)
};

// Class Engine.ParticleModuleRotation
struct UParticleModuleRotation : UParticleModuleRotationBase {
	struct Unknown StartRotation; // 0x30 (48)
};

// Class Engine.ParticleModuleRotation_Seeded
struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	struct Unknown RandomSeedInfo; // 0x60 (32)
};

// Class Engine.ParticleModuleRotationOverLifetime
struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	struct Unknown RotationOverLife; // 0x30 (48)
	char Scale : 0; // 0x60 (1)
};

// Class Engine.ParticleModuleRotationRate
struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	struct Unknown StartRotationRate; // 0x30 (48)
};

// Class Engine.ParticleModuleRotationRate_Seeded
struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	struct Unknown RandomSeedInfo; // 0x60 (32)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	struct Unknown LifeMultiplier; // 0x30 (48)
};

// Class Engine.ParticleModuleSize
struct UParticleModuleSize : UParticleModuleSizeBase {
	struct Unknown StartSize; // 0x30 (72)
};

// Class Engine.ParticleModuleSize_Seeded
struct UParticleModuleSize_Seeded : UParticleModuleSize {
	struct Unknown RandomSeedInfo; // 0x78 (32)
};

// Class Engine.ParticleModuleSizeMultiplyLife
struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	struct Unknown LifeMultiplier; // 0x30 (72)
	char MultiplyX : 0; // 0x78 (1)
	char MultiplyY : 0; // 0x78 (1)
	char MultiplyZ : 0; // 0x78 (1)
};

// Class Engine.ParticleModuleSizeScale
struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	struct Unknown SizeScale; // 0x30 (72)
	char EnableX : 0; // 0x78 (1)
	char EnableY : 0; // 0x78 (1)
	char EnableZ : 0; // 0x78 (1)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	struct Unknown SpeedScale; // 0x30 (8)
	struct Unknown MaxScale; // 0x38 (8)
};

// Class Engine.ParticleModuleSourceMovement
struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	struct Unknown SourceMovementScale; // 0x30 (72)
};

// Class Engine.ParticleModuleSpawnBase
struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 0; // 0x30 (1)
	char bProcessBurstList : 0; // 0x30 (1)
};

// Class Engine.ParticleModuleSpawn
struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	struct Unknown Rate; // 0x38 (48)
	struct Unknown RateScale; // 0x68 (48)
	char ParticleBurstMethod; // 0x98 (1)
	struct TArray<Unknown> BurstList; // 0xA0 (16)
	struct Unknown BurstScale; // 0xB0 (48)
	char bApplyGlobalSpawnRateScale : 0; // 0xE0 (1)
};

// Class Engine.ParticleModuleSpawnPerUnit
struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x38 (4)
	float MovementTolerance; // 0x3C (4)
	struct Unknown SpawnPerUnit; // 0x40 (48)
	float MaxFrameDistance; // 0x70 (4)
	char bIgnoreSpawnRateWhenMoving : 0; // 0x74 (1)
	char bIgnoreMovementAlongX : 0; // 0x74 (1)
	char bIgnoreMovementAlongY : 0; // 0x74 (1)
	char bIgnoreMovementAlongZ : 0; // 0x74 (1)
};

// Class Engine.ParticleModuleSubUV
struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	struct Unknown Animation; // 0x30 (8)
	struct Unknown SubImageIndex; // 0x38 (48)
	char bUseRealTime : 0; // 0x68 (1)
};

// Class Engine.ParticleModuleSubUVMovie
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 0; // 0x70 (1)
	struct Unknown FrameRate; // 0x78 (48)
	int32_t StartingFrame; // 0xA8 (4)
};

// Class Engine.ParticleModuleTrailSource
struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	char SourceMethod; // 0x30 (1)
	struct FName SourceName; // 0x34 (8)
	struct Unknown SourceStrength; // 0x40 (48)
	char bLockSourceStength : 0; // 0x70 (1)
	int32_t SourceOffsetCount; // 0x74 (4)
	struct TArray<Unknown> SourceOffsetDefaults; // 0x78 (16)
	char SelectionMethod; // 0x88 (1)
	char bInheritRotation : 0; // 0x8C (1)
};

// Class Engine.ParticleModuleTypeDataAnimTrail
struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 0; // 0x30 (1)
	char bEnablePreviousTangentRecalculation : 0; // 0x30 (1)
	char bTangentRecalculationEveryFrame : 0; // 0x30 (1)
	float TilingDistance; // 0x34 (4)
	float DistanceTessellationStepSize; // 0x38 (4)
	float TangentTessellationStepSize; // 0x3C (4)
	float WidthTessellationStepSize; // 0x40 (4)
};

// Class Engine.ParticleModuleTypeDataBeam2
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	char BeamMethod; // 0x30 (1)
	int32_t TextureTile; // 0x34 (4)
	float TextureTileDistance; // 0x38 (4)
	int32_t Sheets; // 0x3C (4)
	int32_t MaxBeamCount; // 0x40 (4)
	float Speed; // 0x44 (4)
	int32_t InterpolationPoints; // 0x48 (4)
	char bAlwaysOn : 0; // 0x4C (1)
	int32_t UpVectorStepSize; // 0x50 (4)
	struct FName BranchParentName; // 0x54 (8)
	struct Unknown Distance; // 0x60 (48)
	char TaperMethod; // 0x90 (1)
	struct Unknown TaperFactor; // 0x98 (48)
	struct Unknown TaperScale; // 0xC8 (48)
	char RenderGeometry : 0; // 0xF8 (1)
	char RenderDirectLine : 0; // 0xF8 (1)
	char RenderLines : 0; // 0xF8 (1)
	char RenderTessellation : 0; // 0xF8 (1)
};

// Class Engine.ParticleModuleTypeDataGpu
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	struct Unknown EmitterInfo; // 0x30 (640)
	struct Unknown ResourceData; // 0x2B0 (352)
	float CameraMotionBlurAmount; // 0x410 (4)
	char bClearExistingParticlesOnInit : 0; // 0x414 (1)
};

// Class Engine.ParticleModuleTypeDataMesh
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct Unknown Mesh; // 0x30 (8)
	float LODSizeScale; // 0x40 (4)
	char bUseStaticMeshLODs : 0; // 0x44 (1)
	char CastShadows : 0; // 0x44 (1)
	char DoCollisions : 0; // 0x44 (1)
	char MeshAlignment; // 0x45 (1)
	char bOverrideMaterial : 0; // 0x46 (1)
	char bOverrideDefaultMotionBlurSettings : 0; // 0x46 (1)
	char bEnableMotionBlur : 0; // 0x46 (1)
	struct Unknown RollPitchYawRange; // 0x48 (72)
	char AxisLockOption; // 0x90 (1)
	char bCameraFacing : 0; // 0x91 (1)
	char CameraFacingUpAxisOption; // 0x92 (1)
	char CameraFacingOption; // 0x93 (1)
	char bApplyParticleRotationAsSpin : 0; // 0x94 (1)
	char bFaceCameraDirectionRatherThanPosition : 0; // 0x94 (1)
	char bCollisionsConsiderPartilceSize : 0; // 0x94 (1)
};

// Class Engine.ParticleModuleTypeDataRibbon
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x30 (4)
	int32_t SheetsPerTrail; // 0x34 (4)
	int32_t MaxTrailCount; // 0x38 (4)
	int32_t MaxParticleInTrailCount; // 0x3C (4)
	char bDeadTrailsOnDeactivate : 0; // 0x40 (1)
	char bDeadTrailsOnSourceLoss : 0; // 0x40 (1)
	char bClipSourceSegement : 0; // 0x40 (1)
	char bEnablePreviousTangentRecalculation : 0; // 0x40 (1)
	char bTangentRecalculationEveryFrame : 0; // 0x40 (1)
	char bSpawnInitialParticle : 0; // 0x40 (1)
	char RenderAxis; // 0x44 (1)
	float TangentSpawningScalar; // 0x48 (4)
	char b : 0; // 0x4C (1)
	char b : 0; // 0x4C (1)
	char b : 0; // 0x4C (1)
	char b : 0; // 0x4C (1)
	float TilingDistance; // 0x50 (4)
	float DistanceTessellationStepSize; // 0x54 (4)
	char bEnableTangentDiffInterpScale : 0; // 0x58 (1)
	float TangentTessellationScalar; // 0x5C (4)
};

// Class Engine.ParticleModuleVectorFieldGlobal
struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 0; // 0x30 (1)
	float GlobalVectorFieldScale; // 0x34 (4)
	float GlobalVectorFieldTightness; // 0x38 (4)
};

// Class Engine.ParticleModuleVectorFieldLocal
struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	struct Unknown VectorField; // 0x30 (8)
	struct Unknown RelativeTranslation; // 0x38 (12)
	struct Unknown RelativeRotation; // 0x44 (12)
	struct Unknown RelativeScale3D; // 0x50 (12)
	float Intensity; // 0x5C (4)
	float Tightness; // 0x60 (4)
	char bIgnoreComponentTransform : 0; // 0x64 (1)
	char bTileX : 0; // 0x64 (1)
	char bTileY : 0; // 0x64 (1)
	char bTileZ : 0; // 0x64 (1)
	char bUseFixDT : 0; // 0x64 (1)
};

// Class Engine.ParticleModuleVectorFieldRotation
struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	struct Unknown MinInitialRotation; // 0x30 (12)
	struct Unknown MaxInitialRotation; // 0x3C (12)
};

// Class Engine.ParticleModuleVectorFieldRotationRate
struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	struct Unknown RotationRate; // 0x30 (12)
};

// Class Engine.ParticleModuleVectorFieldScale
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct Unknown VectorFieldScale; // 0x30 (8)
	struct Unknown VectorFieldScaleRaw; // 0x38 (48)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct Unknown VectorFieldScaleOverLife; // 0x30 (8)
	struct Unknown VectorFieldScaleOverLifeRaw; // 0x38 (48)
};

// Class Engine.ParticleModuleVelocityBase
struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 0; // 0x30 (1)
	char bApplyOwnerScale : 0; // 0x30 (1)
};

// Class Engine.ParticleModuleVelocity
struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	struct Unknown StartVelocity; // 0x38 (72)
	struct Unknown StartVelocityRadial; // 0x80 (48)
};

// Class Engine.ParticleModuleVelocity_Seeded
struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	struct Unknown RandomSeedInfo; // 0xB0 (32)
};

// Class Engine.ParticleModuleVelocityCone
struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	struct Unknown Angle; // 0x38 (48)
	struct Unknown Velocity; // 0x68 (48)
	struct Unknown Direction; // 0x98 (12)
};

// Class Engine.ParticleModuleVelocityInheritParent
struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	struct Unknown Scale; // 0x38 (72)
};

// Class Engine.ParticleModuleVelocityOverLifetime
struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	struct Unknown VelOverLife; // 0x38 (72)
	char Absolute : 0; // 0x80 (1)
};

// Class Engine.ParticleSystem
struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; // 0x30 (4)
	float UpdateTime_Delta; // 0x34 (4)
	float WarmupTime; // 0x38 (4)
	float WarmupTickRate; // 0x3C (4)
	struct TArray<Unknown> Emitters; // 0x40 (16)
	struct Unknown PreviewComponent; // 0x50 (8)
	struct Unknown CurveEdSetup; // 0x58 (8)
	float LODDistanceCheckTime; // 0x60 (4)
	float MacroUVRadius; // 0x64 (4)
	struct TArray<Unknown> LODDistances; // 0x68 (16)
	struct TArray<Unknown> LODSettings; // 0x78 (16)
	struct Unknown FixedRelativeBoundingBox; // 0x88 (28)
	float SecondsBeforeInactive; // 0xA4 (4)
	float Delay; // 0xA8 (4)
	float DelayLow; // 0xAC (4)
	char bOrientZAxisTowardCamera : 0; // 0xB0 (1)
	char bUseFixedRelativeBoundingBox : 0; // 0xB0 (1)
	char bShouldResetPeakCounts : 0; // 0xB0 (1)
	char bHasPhysics : 0; // 0xB0 (1)
	char bUseRealtimeThumbnail : 0; // 0xB0 (1)
	char ThumbnailImageOutOfDate : 0; // 0xB0 (1)
	char bUseDelayRange : 0; // 0xB1 (1)
	char bAllowManagedTicking : 0; // 0xB1 (1)
	char bAutoDeactivate : 0; // 0xB1 (1)
	char b : 0; // 0xB1 (1)
	char SystemUpdateMode; // 0xB2 (1)
	char LODMethod; // 0xB3 (1)
	enum class Unknow InsignificantReaction; // 0xB4 (1)
	char OcclusionBoundsMethod; // 0xB5 (1)
	enum class Unknow MaxSignificanceLevel; // 0xB7 (1)
	uint32_t MinTimeBetweenTicks; // 0xB8 (4)
	float InsignificanceDelay; // 0xBC (4)
	struct Unknown MacroUVPosition; // 0xC0 (12)
	struct Unknown CustomOcclusionBounds; // 0xCC (28)
	struct TArray<Unknown> SoloTracking; // 0xE8 (16)
	struct TArray<Unknown> NamedMaterialSlots; // 0xF8 (16)

	char ContainsEmitterType(struct Unknown* TypeData); // Function Engine.ParticleSystem.ContainsEmitterType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE3A0>
};

// Class Engine.ParticleSystemComponent
struct UParticleSystemComponent : UFXSystemComponent {
	struct Unknown Template; // 0x4B8 (8)
	struct TArray<Unknown> EmitterMaterials; // 0x4C0 (16)
	struct TArray<Unknown> SkelMeshComponents; // 0x4D0 (16)
	char b : 0; // 0x4E1 (1)
	char bUpdateOnDedicatedServer : 0; // 0x4E1 (1)
	char bAllowRecycling : 0; // 0x4E1 (1)
	char bAutoManageAttachment : 0; // 0x4E1 (1)
	char bAutoAttachWeldSimulatedBodies : 0; // 0x4E1 (1)
	char bWarmingUp : 0; // 0x4E2 (1)
	char bOverrideLODMethod : 0; // 0x4E2 (1)
	char bSkipUpdateDynamicDataDuringTick : 0; // 0x4E2 (1)
	char LODMethod; // 0x4ED (1)
	enum class Unknow RequiredSignificance; // 0x4EE (1)
	struct TArray<Unknown> InstanceParameters; // 0x4F0 (16)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x500 (16)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x510 (16)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x520 (16)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x530 (16)
	char bOldPositionValid : 0; // 0x540 (1)
	struct Unknown OldPosition; // 0x544 (12)
	struct Unknown PartSysVelocity; // 0x550 (12)
	float WarmupTime; // 0x55C (4)
	float WarmupTickRate; // 0x560 (4)
	float SecondsBeforeInactive; // 0x578 (4)
	float MaxTimeBeforeForceUpdateTransform; // 0x580 (4)
	struct TArray<Unknown> ReplayClips; // 0x5A0 (16)
	float CustomTimeDilation; // 0x5B8 (4)
	struct TWeakObjectPtr<struct Unknown> AutoAttachParent; // 0x610 (8)
	struct FName AutoAttachSocketName; // 0x618 (8)
	enum class Unknow AutoAttachLocationRule; // 0x620 (1)
	enum class Unknow AutoAttachRotationRule; // 0x621 (1)
	enum class Unknow AutoAttachScaleRule; // 0x622 (1)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x650 (16)

	void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, char InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.SetTrailSourceData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAFE50>
	void SetTemplate(struct Unknown NewTemplate); // Function Engine.ParticleSystemComponent.SetTemplate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAFDD0>
	void SetMaterialParameter(struct FName ParameterName, struct Unknown Param); // Function Engine.ParticleSystemComponent.SetMaterialParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAFD10>
	void SetBeamTargetTangent(int32_t EmitterIndex, struct Unknown NewTangentPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetTangent(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF8C0>
	void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetStrength(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF7C0>
	void SetBeamTargetPoint(int32_t EmitterIndex, struct Unknown NewTargetPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetPoint(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF6B0>
	void SetBeamSourceTangent(int32_t EmitterIndex, struct Unknown NewTangentPoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceTangent(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF5A0>
	void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceStrength(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF4A0>
	void SetBeamSourcePoint(int32_t EmitterIndex, struct Unknown NewSourcePoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourcePoint(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF390>
	void SetBeamEndPoint(int32_t EmitterIndex, struct Unknown NewEndPoint); // Function Engine.ParticleSystemComponent.SetBeamEndPoint(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF2C0>
	void SetAutoAttachParams(struct Unknown Parent, struct FName SocketName, char LocationType); // Function Engine.ParticleSystemComponent.SetAutoAttachParams(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAF020>
	int32_t GetNumActiveParticles(); // Function Engine.ParticleSystemComponent.GetNumActiveParticles(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAEF00>
	struct Unknown GetNamedMaterial(struct FName InName); // Function Engine.ParticleSystemComponent.GetNamedMaterial(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAEE60>
	char GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, struct Unknown& OutTangentPoint); // Function Engine.ParticleSystemComponent.GetBeamTargetTangent(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAED20>
	char GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength); // Function Engine.ParticleSystemComponent.GetBeamTargetStrength(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAEC00>
	char GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, struct Unknown& OutTargetPoint); // Function Engine.ParticleSystemComponent.GetBeamTargetPoint(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAEAF0>
	char GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, struct Unknown& OutTangentPoint); // Function Engine.ParticleSystemComponent.GetBeamSourceTangent(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE9E0>
	char GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength); // Function Engine.ParticleSystemComponent.GetBeamSourceStrength(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE8C0>
	char GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, struct Unknown& OutSourcePoint); // Function Engine.ParticleSystemComponent.GetBeamSourcePoint(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE7B0>
	char GetBeamEndPoint(int32_t EmitterIndex, struct Unknown& OutEndPoint); // Function Engine.ParticleSystemComponent.GetBeamEndPoint(Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE6D0>
	void GenerateParticleEvent(struct FName InEventName, float InEmitterTime, struct Unknown InLocation, struct Unknown InDirection, struct Unknown InVelocity); // Function Engine.ParticleSystemComponent.GenerateParticleEvent(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE520>
	void EndTrails(); // Function Engine.ParticleSystemComponent.EndTrails(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE500>
	struct Unknown CreateNamedDynamicMaterialInstance(struct FName InName, struct Unknown SourceMaterial); // Function Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE430>
	void BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, char InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.BeginTrails(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DAE250>
};

// Class Engine.ParticleSystemReplay
struct UParticleSystemReplay : Object {
	int32_t ClipIDNumber; // 0x28 (4)
};

// Class Engine.PawnNoiseEmitterComponent
struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 0; // 0xB0 (1)
	struct Unknown LastRemoteNoisePosition; // 0xB4 (12)
	float NoiseLifetime; // 0xC0 (4)
	float LastRemoteNoiseVolume; // 0xC4 (4)
	float LastRemoteNoiseTime; // 0xC8 (4)
	float LastLocalNoiseVolume; // 0xCC (4)
	float LastLocalNoiseTime; // 0xD0 (4)

	void MakeNoise(struct Unknown NoiseMaker, float Loudness, struct Unknown& NoiseLocation); // Function Engine.PawnNoiseEmitterComponent.MakeNoise(BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4340>
};

// Class Engine.PhysicalAnimationComponent
struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xB0 (4)
	struct Unknown SkeletalMeshComponent; // 0xB8 (8)

	void SetStrengthMultiplyer(float InStrengthMultiplyer); // Function Engine.PhysicalAnimationComponent.SetStrengthMultiplyer(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB4720>
	void SetSkeletalMeshComponent(struct Unknown InSkeletalMeshComponent); // Function Engine.PhysicalAnimationComponent.SetSkeletalMeshComponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB46A0>
	struct Unknown GetBodyTargetTransform(struct FName BodyName); // Function Engine.PhysicalAnimationComponent.GetBodyTargetTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3D80>
	void ApplyPhysicalAnimationSettingsBelow(struct FName BodyName, struct Unknown& PhysicalAnimationData, char bIncludeSelf); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettingsBelow(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3B90>
	void ApplyPhysicalAnimationSettings(struct FName BodyName, struct Unknown& PhysicalAnimationData); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3AB0>
	void ApplyPhysicalAnimationProfileBelow(struct FName BodyName, struct FName ProfileName, char bIncludeSelf, char bClearNotFound); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationProfileBelow(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB3960>
};

// Class Engine.PhysicalMaterialMask
struct UPhysicalMaterialMask : Object {
	int32_t UVChannelIndex; // 0x28 (4)
	char AddressX; // 0x2C (1)
	char AddressY; // 0x2D (1)
};

// Class Engine.PhysicsAsset
struct UPhysicsAsset : Object {
	struct TArray<Unknown> BoundsBodies; // 0x30 (16)
	struct TArray<Unknown> SkeletalBodySetups; // 0x40 (16)
	struct TArray<Unknown> ConstraintSetup; // 0x50 (16)
	struct Unknown SolverIterations; // 0x60 (24)
	char bNotForDedicatedServer : 0; // 0x78 (1)
	struct Unknown ThumbnailInfo; // 0x120 (8)
	struct TArray<Unknown> BodySetup; // 0x128 (16)
};

// Class Engine.SkeletalBodySetup
struct USkeletalBodySetup : UBodySetup {
	char bSkipScaleFromAnimation : 0; // 0x2D0 (1)
	struct TArray<Unknown> PhysicalAnimationData; // 0x2D8 (16)
};

// Class Engine.PhysicsCollisionHandler
struct UPhysicsCollisionHandler : Object {
	float ImpactThreshold; // 0x28 (4)
	float ImpactReFireDelay; // 0x2C (4)
	struct Unknown DefaultImpactSound; // 0x30 (8)
	float LastImpactSoundTime; // 0x38 (4)
};

// Class Engine.PhysicsConstraintActor
struct APhysicsConstraintActor : ARigidBodyBase {
	struct Unknown ConstraintComp; // 0x310 (8)
	struct Unknown ConstraintActor1; // 0x318 (8)
	struct Unknown ConstraintActor2; // 0x320 (8)
	char bDisableCollision : 0; // 0x328 (1)
};

// Class Engine.PhysicsConstraintComponent
struct UPhysicsConstraintComponent : USceneComponent {
	struct Unknown ConstraintActor1; // 0x238 (8)
	struct Unknown ComponentName1; // 0x240 (8)
	struct Unknown ConstraintActor2; // 0x248 (8)
	struct Unknown ComponentName2; // 0x250 (8)
	struct Unknown ConstraintSetup; // 0x268 (8)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x270 (16)
	struct Unknown ConstraintInstance; // 0x280 (440)

	void SetOrientationDriveTwistAndSwing(char bEnableTwistDrive, char bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB8160>
	void SetOrientationDriveSLERP(char bEnableSLERP); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveSLERP(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB80D0>
	void SetLinearZLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearZLimit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB8010>
	void SetLinearYLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearYLimit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7F50>
	void SetLinearXLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearXLimit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7E90>
	void SetLinearVelocityTarget(struct Unknown& InVelTarget); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityTarget(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7E00>
	void SetLinearVelocityDrive(char bEnableDriveX, char bEnableDriveY, char bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityDrive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7CE0>
	void SetLinearPositionTarget(struct Unknown& InPosTarget); // Function Engine.PhysicsConstraintComponent.SetLinearPositionTarget(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7BD0>
	void SetLinearPositionDrive(char bEnableDriveX, char bEnableDriveY, char bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearPositionDrive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7AB0>
	void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetLinearDriveParams(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB79A0>
	void SetLinearBreakable(char bLinearBreakable, float LinearBreakThreshold); // Function Engine.PhysicsConstraintComponent.SetLinearBreakable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7850>
	void SetDisableCollision(char bDisableCollision); // Function Engine.PhysicsConstraintComponent.SetDisableCollision(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7740>
	void SetConstraintReferencePosition(char Frame, struct Unknown& RefPosition); // Function Engine.PhysicsConstraintComponent.SetConstraintReferencePosition(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7670>
	void SetConstraintReferenceOrientation(char Frame, struct Unknown& PriAxis, struct Unknown& SecAxis); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7550>
	void SetConstraintReferenceFrame(char Frame, struct Unknown& RefFrame); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7430>
	void SetConstrainedComponents(struct Unknown Component1, struct FName BoneName1, struct Unknown Component2, struct FName BoneName2); // Function Engine.PhysicsConstraintComponent.SetConstrainedComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB72E0>
	void SetAngularVelocityTarget(struct Unknown& InVelTarget); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityTarget(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7250>
	void SetAngularVelocityDriveTwistAndSwing(char bEnableTwistDrive, char bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDriveTwistAndSwing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7180>
	void SetAngularVelocityDriveSLERP(char bEnableSLERP); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDriveSLERP(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB70F0>
	void SetAngularVelocityDrive(char bEnableSwingDrive, char bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDrive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7020>
	void SetAngularTwistLimit(char ConstraintType, float TwistLimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularTwistLimit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6F60>
	void SetAngularSwing2Limit(char MotionType, float Swing2LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing2Limit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6EA0>
	void SetAngularSwing1Limit(char MotionType, float Swing1LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing1Limit(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6DE0>
	void SetAngularOrientationTarget(struct Unknown& InPosTarget); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationTarget(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6CD0>
	void SetAngularOrientationDrive(char bEnableSwingDrive, char bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationDrive(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6C00>
	void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetAngularDriveParams(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6AF0>
	void SetAngularDriveMode(char DriveMode); // Function Engine.PhysicsConstraintComponent.SetAngularDriveMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6A70>
	void SetAngularBreakable(char bAngularBreakable, float AngularBreakThreshold); // Function Engine.PhysicsConstraintComponent.SetAngularBreakable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6920>
	char IsBroken(); // Function Engine.PhysicsConstraintComponent.IsBroken(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB68F0>
	float GetCurrentTwist(); // Function Engine.PhysicsConstraintComponent.GetCurrentTwist(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6400>
	float GetCurrentSwing2(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing2(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB63D0>
	float GetCurrentSwing1(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing1(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB63A0>
	void GetConstraintForce(struct Unknown& OutLinearForce, struct Unknown& OutAngularForce); // Function Engine.PhysicsConstraintComponent.GetConstraintForce(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB62C0>
	void BreakConstraint(); // Function Engine.PhysicsConstraintComponent.BreakConstraint(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB62A0>
};

// Class Engine.PhysicsConstraintTemplate
struct UPhysicsConstraintTemplate : Object {
	struct Unknown DefaultInstance; // 0x28 (440)
	struct TArray<Unknown> ProfileHandles; // 0x1E0 (16)
	struct Unknown DefaultProfile; // 0x1F0 (260)
};

// Class Engine.PhysicsHandleComponent
struct UPhysicsHandleComponent : UActorComponent {
	struct Unknown GrabbedComponent; // 0xB0 (8)
	char bSoftAngularConstraint : 0; // 0xC0 (1)
	char bSoftLinearConstraint : 0; // 0xC0 (1)
	char bInterpolateTarget : 0; // 0xC0 (1)
	float LinearDamping; // 0xC4 (4)
	float LinearStiffness; // 0xC8 (4)
	float AngularDamping; // 0xCC (4)
	float AngularStiffness; // 0xD0 (4)
	float InterpolationSpeed; // 0x140 (4)

	void SetTargetRotation(struct Unknown NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB83A0>
	void SetTargetLocationAndRotation(struct Unknown NewLocation, struct Unknown NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetLocationAndRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB82C0>
	void SetTargetLocation(struct Unknown NewLocation); // Function Engine.PhysicsHandleComponent.SetTargetLocation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB8230>
	void SetLinearStiffness(float NewLinearStiffness); // Function Engine.PhysicsHandleComponent.SetLinearStiffness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7C60>
	void SetLinearDamping(float NewLinearDamping); // Function Engine.PhysicsHandleComponent.SetLinearDamping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB7920>
	void SetInterpolationSpeed(float NewInterpolationSpeed); // Function Engine.PhysicsHandleComponent.SetInterpolationSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB77D0>
	void SetAngularStiffness(float NewAngularStiffness); // Function Engine.PhysicsHandleComponent.SetAngularStiffness(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6D60>
	void SetAngularDamping(float NewAngularDamping); // Function Engine.PhysicsHandleComponent.SetAngularDamping(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB69F0>
	void ReleaseComponent(); // Function Engine.PhysicsHandleComponent.ReleaseComponent(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x204BA30>
	void GrabComponentAtLocationWithRotation(struct Unknown Component, struct FName InBoneName, struct Unknown Location, struct Unknown Rotation); // Function Engine.PhysicsHandleComponent.GrabComponentAtLocationWithRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6770>
	void GrabComponentAtLocation(struct Unknown Component, struct FName InBoneName, struct Unknown GrabLocation); // Function Engine.PhysicsHandleComponent.GrabComponentAtLocation(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6660>
	void GrabComponent(struct Unknown Component, struct FName InBoneName, struct Unknown GrabLocation, char bConstrainRotation); // Function Engine.PhysicsHandleComponent.GrabComponent(Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6510>
	void GetTargetLocationAndRotation(struct Unknown& TargetLocation, struct Unknown& TargetRotation); // Function Engine.PhysicsHandleComponent.GetTargetLocationAndRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DB6430>
	struct Unknown GetGrabbedComponent(); // Function Engine.PhysicsHandleComponent.GetGrabbedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2EF5EC0>
};

// Class Engine.PhysicsSettings
struct UPhysicsSettings : UDeveloperSettings {
	float DefaultGravityZ; // 0x38 (4)
	float DefaultTerminalVelocity; // 0x3C (4)
	float DefaultFluidFriction; // 0x40 (4)
	int32_t SimulateScratchMemorySize; // 0x44 (4)
	int32_t RagdollAggregateThreshold; // 0x48 (4)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4C (4)
	char bEnableShapeSharing : 0; // 0x50 (1)
	char bEnablePCM : 0; // 0x51 (1)
	char bEnableStabilization : 0; // 0x52 (1)
	char bWarnMissingLocks : 0; // 0x53 (1)
	char bEnable2DPhysics : 0; // 0x54 (1)
	struct Unknown PhysicErrorCorrection; // 0x58 (52)
	char LockedAxis; // 0x8C (1)
	char DefaultDegreesOfFreedom; // 0x8D (1)
	float BounceThresholdVelocity; // 0x90 (4)
	char FrictionCombineMode; // 0x94 (1)
	char RestitutionCombineMode; // 0x95 (1)
	float MaxAngularVelocity; // 0x98 (4)
	float MaxDepenetrationVelocity; // 0x9C (4)
	float ContactOffsetMultiplier; // 0xA0 (4)
	float MinContactOffset; // 0xA4 (4)
	float MaxContactOffset; // 0xA8 (4)
	char bSimulateSkeletalMeshOnDedicatedServer : 0; // 0xAC (1)
	char DefaultShapeComplexity; // 0xAD (1)
	char bDefaultHasComplexCollision : 0; // 0xAE (1)
	char bSuppressFaceRemapTable : 0; // 0xAF (1)
	char bSupportUVFromHitResults : 0; // 0xB0 (1)
	char bDisableActiveActors : 0; // 0xB1 (1)
	char bDisableKinematicStaticPairs : 0; // 0xB2 (1)
	char bDisableKinematicKinematicPairs : 0; // 0xB3 (1)
	char bDisableCCD : 0; // 0xB4 (1)
	char bEnableEnhancedDeterminism : 0; // 0xB5 (1)
	float AnimPhysicsMinDeltaTime; // 0xB8 (4)
	char bSimulateAnimPhysicsAfterReset : 0; // 0xBC (1)
	float MaxPhysicsDeltaTime; // 0xC0 (4)
	char bSubstepping : 0; // 0xC4 (1)
	char bSubsteppingAsync : 0; // 0xC5 (1)
	float MaxSubstepDeltaTime; // 0xC8 (4)
	int32_t MaxSubsteps; // 0xCC (4)
	float SyncSceneSmoothingFactor; // 0xD0 (4)
	float InitialAverageFrameRate; // 0xD4 (4)
	int32_t PhysXTreeRebuildRate; // 0xD8 (4)
	struct TArray<Unknown> PhysicalSurfaces; // 0xE0 (16)
	struct Unknown DefaultBroadphaseSettings; // 0xF0 (64)
	struct Unknown ChaosSettings; // 0x130 (3)
};

// Class Engine.PhysicsSpringComponent
struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x238 (4)
	float SpringDamping; // 0x23C (4)
	float SpringLengthAtRest; // 0x240 (4)
	float SpringRadius; // 0x244 (4)
	char SpringChannel; // 0x248 (1)
	char bIgnoreSelf : 0; // 0x249 (1)
	float SpringCompression; // 0x24C (4)

	struct Unknown GetSpringRestingPoint(); // Function Engine.PhysicsSpringComponent.GetSpringRestingPoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC220>
	struct Unknown GetSpringDirection(); // Function Engine.PhysicsSpringComponent.GetSpringDirection(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC1E0>
	struct Unknown GetSpringCurrentEndPoint(); // Function Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC1A0>
	float GetNormalizedCompressionScalar(); // Function Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC140>
};

// Class Engine.PhysicsThruster
struct APhysicsThruster : ARigidBodyBase {
	struct Unknown ThrusterComponent; // 0x310 (8)
};

// Class Engine.PhysicsThrusterComponent
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x238 (4)
};

// Class Engine.PlanarReflection
struct APlanarReflection : ASceneCapture {
	struct Unknown PlanarReflectionComponent; // 0x320 (8)
	char bShowPreviewPlane : 0; // 0x328 (1)

	void OnInterpToggle(char bEnable); // Function Engine.PlanarReflection.OnInterpToggle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC2C0>
};

// Class Engine.PlanarReflectionComponent
struct UPlanarReflectionComponent : USceneCaptureComponent {
	struct Unknown PreviewBox; // 0x2D0 (8)
	float NormalDistortionStrength; // 0x2D8 (4)
	float PrefilterRoughness; // 0x2DC (4)
	float PrefilterRoughnessDistance; // 0x2E0 (4)
	int32_t ScreenPercentage; // 0x2E4 (4)
	float ExtraFOV; // 0x2E8 (4)
	float DistanceFromPlaneFadeStart; // 0x2EC (4)
	float DistanceFromPlaneFadeEnd; // 0x2F0 (4)
	float DistanceFromPlaneFadeoutStart; // 0x2F4 (4)
	float DistanceFromPlaneFadeoutEnd; // 0x2F8 (4)
	float AngleFromPlaneFadeStart; // 0x2FC (4)
	float AngleFromPlaneFadeEnd; // 0x300 (4)
	char bShowPreviewPlane : 0; // 0x304 (1)
	char b : 0; // 0x305 (1)
};

// Class Engine.PlaneReflectionCaptureComponent
struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x2C0 (4)
	struct Unknown PreviewInfluenceRadius; // 0x2C8 (8)
	struct Unknown PreviewCaptureBox; // 0x2D0 (8)
};

// Class Engine.PlatformEventsComponent
struct UPlatformEventsComponent : UActorComponent {
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xB0 (16)
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xC0 (16)

	char SupportsConvertibleLaptops(); // Function Engine.PlatformEventsComponent.SupportsConvertibleLaptops(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBD2D0>
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x23B1E70>
	char IsInTabletMode(); // Function Engine.PlatformEventsComponent.IsInTabletMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC290>
	char IsInLaptopMode(); // Function Engine.PlatformEventsComponent.IsInLaptopMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC260>
};

// Class Engine.PlatformInterfaceWebResponse
struct UPlatformInterfaceWebResponse : Object {
	struct FString OriginalURL; // 0x28 (16)
	int32_t responsecode; // 0x38 (4)
	int32_t Tag; // 0x3C (4)
	struct FString StringResponse; // 0x40 (16)
	struct TArray<Unknown> BinaryResponse; // 0x50 (16)

	int32_t GetNumHeaders(); // Function Engine.PlatformInterfaceWebResponse.GetNumHeaders(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151AEE0>
	struct FString GetHeaderValue(struct FString HeaderName); // Function Engine.PlatformInterfaceWebResponse.GetHeaderValue(Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC050>
	void GetHeader(int32_t HeaderIndex, struct FString& Header, struct FString& Value); // Function Engine.PlatformInterfaceWebResponse.GetHeader(Native|Public|HasOutParms) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBBEE0>
};

// Class Engine.PlayerInput
struct UPlayerInput : Object {
	struct TArray<Unknown> DebugExecBindings; // 0x120 (16)
	struct TArray<Unknown> InvertedAxis; // 0x160 (16)

	void SetMouseSensitivity(float Sensitivity); // Function Engine.PlayerInput.SetMouseSensitivity(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCBB0>
	void SetBind(struct FName BindName, struct FString Command); // Function Engine.PlayerInput.SetBind(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCC540>
	void InvertAxisKey(struct Unknown AxisKey); // Function Engine.PlayerInput.InvertAxisKey(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCC3E0>
	void InvertAxis(struct FName AxisName); // Function Engine.PlayerInput.InvertAxis(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCC360>
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing(Final|Exec|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCBED0>
};

// Class Engine.PointLight
struct APointLight : ALight {
	struct Unknown PointLightComponent; // 0x320 (8)

	void SetRadius(float NewRadius); // Function Engine.PointLight.SetRadius(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCC30>
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLight.SetLightFalloffExponent(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCAB0>
};

// Class Engine.PointLightComponent
struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 0; // 0x398 (1)
	float LightFalloffExponent; // 0x39C (4)
	float SourceRadius; // 0x3A0 (4)
	float SoftSourceRadius; // 0x3A4 (4)
	float SourceLength; // 0x3A8 (4)

	void SetSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSourceRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCDB0>
	void SetSourceLength(float NewValue); // Function Engine.PointLightComponent.SetSourceLength(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCD30>
	void SetSoftSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSoftSourceRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCCB0>
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLightComponent.SetLightFalloffExponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCB30>
};

// Class Engine.PoseAsset
struct UPoseAsset : UAnimationAsset {
	struct Unknown PoseContainer; // 0x80 (144)
	char bAdditivePose : 0; // 0x110 (1)
	int32_t BasePoseIndex; // 0x114 (4)
	struct FName RetargetSource; // 0x118 (8)
};

// Class Engine.PoseWatch
struct UPoseWatch : Object {
	struct Unknown Node; // 0x28 (8)
	struct Unknown PoseWatchColour; // 0x30 (4)
};

// Class Engine.PostProcessComponent
struct UPostProcessComponent : USceneComponent {
	struct Unknown Settings; // 0x240 (1472)
	float Priority; // 0x800 (4)
	float BlendRadius; // 0x804 (4)
	float BlendWeight; // 0x808 (4)
	char bEnabled : 0; // 0x80C (1)
	char bUnbound : 0; // 0x80C (1)

	void AddOrUpdateBlendable(struct TScriptInterface<IUnknown> InBlendableObject, float InWeight); // Function Engine.PostProcessComponent.AddOrUpdateBlendable(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCBD80>
};

// Class Engine.PostProcessVolume
struct APostProcessVolume : AVolume {
	struct Unknown Settings; // 0x350 (1472)
	float Priority; // 0x910 (4)
	float BlendRadius; // 0x914 (4)
	float BlendWeight; // 0x918 (4)
	char bEnabled : 0; // 0x91C (1)
	char bUnbound : 0; // 0x91C (1)

	void AddOrUpdateBlendable(struct TScriptInterface<IUnknown> InBlendableObject, float InWeight); // Function Engine.PostProcessVolume.AddOrUpdateBlendable(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCBC30>
};

// Class Engine.PrecomputedVisibilityOverrideVolume
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<Unknown> OverrideVisibleActors; // 0x348 (16)
	struct TArray<Unknown> OverrideInvisibleActors; // 0x358 (16)
	struct TArray<Unknown> OverrideInvisibleLevels; // 0x368 (16)
};

// Class Engine.PreviewMeshCollection
struct UPreviewMeshCollection : UDataAsset {
	struct Unknown Skeleton; // 0x38 (8)
	struct TArray<Unknown> SkeletalMeshes; // 0x40 (16)
};

// Class Engine.PrimaryAssetLabel
struct UPrimaryAssetLabel : UPrimaryDataAsset {
	struct Unknown Rules; // 0x30 (12)
	char bLabelAssetsInMyDirectory : 0; // 0x3C (1)
	char bIsRuntimeLabel : 0; // 0x3C (1)
	struct TArray<Unknown> ExplicitAssets; // 0x40 (16)
	struct TArray<Unknown> ExplicitBlueprints; // 0x50 (16)
	struct Unknown AssetCollection; // 0x60 (8)
};

// Class Engine.ProxyLODMeshSimplificationSettings
struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	struct FName ProxyLODMeshReductionModuleName; // 0x38 (8)
};

// Class Engine.RadialForceActor
struct ARadialForceActor : ARigidBodyBase {
	struct Unknown ForceComponent; // 0x310 (8)

	void ToggleForce(); // Function Engine.RadialForceActor.ToggleForce(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1B4E0>
	void FireImpulse(); // Function Engine.RadialForceActor.FireImpulse(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1E52540>
	void EnableForce(); // Function Engine.RadialForceActor.EnableForce(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x12372B0>
	void DisableForce(); // Function Engine.RadialForceActor.DisableForce(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1CD70>
};

// Class Engine.RadialForceComponent
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x238 (4)
	char Falloff; // 0x23C (1)
	float ImpulseStrength; // 0x240 (4)
	char bImpulseVelChange : 0; // 0x244 (1)
	char bIgnoreOwningActor : 0; // 0x244 (1)
	float ForceStrength; // 0x248 (4)
	float DestructibleDamage; // 0x24C (4)
	struct TArray<Unknown> ObjectTypesToAffect; // 0x250 (16)

	void RemoveObjectTypeToAffect(char ObjectType); // Function Engine.RadialForceComponent.RemoveObjectTypeToAffect(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD8110>
	void FireImpulse(); // Function Engine.RadialForceComponent.FireImpulse(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD7EC0>
	void AddObjectTypeToAffect(char ObjectType); // Function Engine.RadialForceComponent.AddObjectTypeToAffect(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD7E40>
};

// Class Engine.RectLight
struct ARectLight : ALight {
	struct Unknown RectLightComponent; // 0x320 (8)
};

// Class Engine.RectLightComponent
struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x398 (4)
	float SourceHeight; // 0x39C (4)
	float BarnDoorAngle; // 0x3A0 (4)
	float BarnDoorLength; // 0x3A4 (4)
	struct Unknown SourceTexture; // 0x3A8 (8)

	void SetSourceWidth(float bNewValue); // Function Engine.RectLightComponent.SetSourceWidth(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD83C0>
	void SetSourceTexture(struct Unknown bNewValue); // Function Engine.RectLightComponent.SetSourceTexture(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD8340>
	void SetSourceHeight(float NewValue); // Function Engine.RectLightComponent.SetSourceHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DCCB30>
	void SetBarnDoorLength(float NewValue); // Function Engine.RectLightComponent.SetBarnDoorLength(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD8230>
	void SetBarnDoorAngle(float NewValue); // Function Engine.RectLightComponent.SetBarnDoorAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DD81B0>
};

// Class Engine.RendererSettings
struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 0; // 0x38 (1)
	int32_t MaxMobileCascades; // 0x3C (4)
	char MobileMSAASampleCount; // 0x40 (1)
	char bMobileUseLegacyShadingModel : 0; // 0x44 (1)
	char bMobileAllowDitheredLODTransition : 0; // 0x44 (1)
	char bMobileAllowSoftwareOcclusionCulling : 0; // 0x44 (1)
	char bMobileVirtualTextures : 0; // 0x44 (1)
	char bDiscardUnusedQualityLevels : 0; // 0x44 (1)
	char bOcclusionCulling : 0; // 0x44 (1)
	float MinScreenRadiusForLights; // 0x48 (4)
	float MinScreenRadiusForEarlyZPass; // 0x4C (4)
	float MinScreenRadiusForCSMdepth; // 0x50 (4)
	char bPrecomputedVisibilityWarning : 0; // 0x54 (1)
	char bUseCullDistanceVolumes : 0; // 0x54 (1)
	char bTextureStreaming : 0; // 0x54 (1)
	char bUseDXT5NormalMaps : 0; // 0x54 (1)
	char bVirtualTextures : 0; // 0x54 (1)
	char bVirtualTexturedLightmaps : 0; // 0x54 (1)
	uint32_t VirtualTextureTileSize; // 0x58 (4)
	uint32_t VirtualTextureTileBorderSize; // 0x5C (4)
	uint32_t VirtualTextureFeedbackFactor; // 0x60 (4)
	char bVirtualTextureEnableCompressZlib : 0; // 0x64 (1)
	char bVirtualTextureEnableCompressCrunch : 0; // 0x64 (1)
	char bClearCoatEnableSecondNormal : 0; // 0x64 (1)
	char bPreIntegratedSkinBRDF : 0; // 0x64 (1)
	char bAnisotropicBRDF : 0; // 0x64 (1)
	int32_t ReflectionCaptureResolution; // 0x68 (4)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 0; // 0x6C (1)
	char bForwardShading : 0; // 0x6C (1)
	char bVertexFoggingForOpaque : 0; // 0x6C (1)
	char bAllowStaticLighting : 0; // 0x6C (1)
	char bUseNormalMapsForStaticLighting : 0; // 0x6C (1)
	char bGenerateMeshDistanceFields : 0; // 0x6C (1)
	char bEightBitMeshDistanceFields : 0; // 0x6C (1)
	char bGenerateLandscapeGIData : 0; // 0x6C (1)
	char bCompressMeshDistanceFields : 0; // 0x6D (1)
	float TessellationAdaptiv; // 0x70 (4)
	char bSeparateTranslucency : 0; // 0x74 (1)
	char TranslucentSortPolicy; // 0x78 (1)
	struct Unknown TranslucentSortAxis; // 0x7C (12)
	char CustomDepthStencil; // 0x88 (1)
	char bCustomDepthTaaJitter : 0; // 0x8C (1)
	char bEnableAlphaChannelInPost; // 0x90 (1)
	char bDefaultFeatureBloom : 0; // 0x94 (1)
	char bDefaultFeatureAmbientOcclusion : 0; // 0x94 (1)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 0; // 0x94 (1)
	char bDefaultFeatureAutoExposure : 0; // 0x94 (1)
	char DefaultFeatureAutoExposure; // 0x98 (1)
	float DefaultFeatureAutoExposureBias; // 0x9C (4)
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 0; // 0xA0 (1)
	char bUsePreExposure : 0; // 0xA0 (1)
	char bEnablePreExposureOnlyInTheEditor : 0; // 0xA0 (1)
	char bDefaultFeatureMotionBlur : 0; // 0xA0 (1)
	char bDefaultFeatureLensFlare : 0; // 0xA0 (1)
	char bTemporalUpsampling : 0; // 0xA0 (1)
	char bSSGI : 0; // 0xA0 (1)
	char DefaultFeatureAntiAliasing; // 0xA4 (1)
	enum class Unknow DefaultLightUnits; // 0xA5 (1)
	char DefaultBackBufferPixelFormat; // 0xA6 (1)
	char b : 0; // 0xA8 (1)
	char bStencilForLODDither : 0; // 0xA8 (1)
	char EarlyZPass; // 0xAC (1)
	char bEarlyZPassOnlyMaterialMasking : 0; // 0xB0 (1)
	char bDBuffer : 0; // 0xB0 (1)
	char ClearSceneMethod; // 0xB4 (1)
	char bBasePassOutputsVelocity : 0; // 0xB8 (1)
	char bVertexDeformationOutputsVelocity : 0; // 0xB8 (1)
	char bSelectiveBasePassOutputs : 0; // 0xB8 (1)
	char bDefaultParticleCutouts : 0; // 0xB8 (1)
	int32_t GPUSimulationTextureSizeX; // 0xBC (4)
	int32_t GPUSimulationTextureSizeY; // 0xC0 (4)
	char bGlobalClipPlane : 0; // 0xC4 (1)
	char GBufferFormat; // 0xC8 (1)
	char bUseGPUMorphTargets : 0; // 0xCC (1)
	char bNvidiaAftermathEnabled : 0; // 0xCC (1)
	char bMultiView : 0; // 0xCC (1)
	char bMobilePostProcessing : 0; // 0xCC (1)
	char bMobileMultiView : 0; // 0xCC (1)
	char bMobileUseHWsRGBEncoding : 0; // 0xCC (1)
	char b : 0; // 0xCC (1)
	char bODSCapture : 0; // 0xCC (1)
	char bMeshStreaming : 0; // 0xCD (1)
	float WireframeCullThreshold; // 0xD0 (4)
	char bEnableRayTracing : 0; // 0xD4 (1)
	char bEnableRayTracingTextureLOD : 0; // 0xD4 (1)
	char bSupportStationarySkylight : 0; // 0xD4 (1)
	char bSupportLowQualityLightmaps : 0; // 0xD4 (1)
	char bSupportPointLightWholeSceneShadows : 0; // 0xD4 (1)
	char bSupportAtmosphericFog : 0; // 0xD4 (1)
	char bSupportSkyAtmosphere : 0; // 0xD4 (1)
	char bSupportSkyAtmosphereAffectsHeightFog : 0; // 0xD4 (1)
	char bSupportSkinCacheShaders : 0; // 0xD5 (1)
	enum class Unknow DefaultSkinCacheBehavior; // 0xD8 (1)
	float SkinCacheSceneMemoryLimitInMB; // 0xDC (4)
	char bMobileEnableStaticAndCSMShadowReceivers : 0; // 0xE0 (1)
	char bMobileEnableMovableLightCSMShaderCulling : 0; // 0xE0 (1)
	char bMobileAllowDistanceFieldShadows : 0; // 0xE0 (1)
	char bMobileAllowMovableDirectionalLights : 0; // 0xE0 (1)
	uint32_t MobileNumDynamicPointLights; // 0xE4 (4)
	char bMobileDynamicPointLightsUseStaticBranch : 0; // 0xE8 (1)
	char bMobileAllowMovableSpotlights : 0; // 0xE8 (1)
	char bSupport16BitBoneIndex : 0; // 0xE8 (1)
	char bGPUSkinLimit2BoneInfluences : 0; // 0xE8 (1)
	char bSupportDepthOnlyIndexBuffers : 0; // 0xE8 (1)
	char bSupportReversedIndexBuffers : 0; // 0xE8 (1)
	char bSupportMaterialLayers : 0; // 0xE8 (1)
	char bLPV : 0; // 0xE8 (1)
};

// Class Engine.RendererOverrideSettings
struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 0; // 0x38 (1)
	char bForceRecomputeTangents : 0; // 0x38 (1)
};

// Class Engine.ReverbEffect
struct UReverbEffect : Object {
	float Density; // 0x28 (4)
	float Diffusion; // 0x2C (4)
	float Gain; // 0x30 (4)
	float GainHF; // 0x34 (4)
	float DecayTime; // 0x38 (4)
	float DecayHFRatio; // 0x3C (4)
	float ReflectionsGain; // 0x40 (4)
	float ReflectionsDelay; // 0x44 (4)
	float LateGain; // 0x48 (4)
	float LateDelay; // 0x4C (4)
	float AirAbsorptionGainHF; // 0x50 (4)
	float RoomRolloffFactor; // 0x54 (4)
};

// Class Engine.Rig
struct URig : Object {
	struct TArray<Unknown> TransformBases; // 0x30 (16)
	struct TArray<Unknown> Nodes; // 0x40 (16)
};

// Class Engine.RotatingMovementComponent
struct URotatingMovementComponent : UMovementComponent {
	struct Unknown RotationRate; // 0xF0 (12)
	struct Unknown PivotTranslation; // 0xFC (12)
	char b : 0; // 0x108 (1)
};

// Class Engine.RuntimeVirtualTexture
struct URuntimeVirtualTexture : Object {
	enum class Unknow MaterialType; // 0x28 (1)
	char bCompressTextures : 0; // 0x29 (1)
	char bEnable : 0; // 0x2A (1)
	char bClearTextures : 0; // 0x2B (1)
	char bSinglePhysicalSpace : 0; // 0x2C (1)
	char bPrivateSpace : 0; // 0x2D (1)
	char bEnableScalability : 0; // 0x2E (1)
	int32_t Size; // 0x30 (4)
	int32_t TileCount; // 0x34 (4)
	int32_t TileSize; // 0x38 (4)
	int32_t TileBorderSize; // 0x3C (4)
	int32_t StreamLowMips; // 0x40 (4)
	struct Unknown StreamingTexture; // 0x48 (8)
	char bEnableCompressCrunch : 0; // 0x50 (1)
	int32_t RemoveLowMips; // 0x54 (4)

	int32_t GetTileSize(); // Function Engine.RuntimeVirtualTexture.GetTileSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DDE330>
	int32_t GetTileCount(); // Function Engine.RuntimeVirtualTexture.GetTileCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DDE2F0>
	int32_t GetTileBorderSize(); // Function Engine.RuntimeVirtualTexture.GetTileBorderSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DDE2B0>
	int32_t GetSize(); // Function Engine.RuntimeVirtualTexture.GetSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DDE240>
};

// Class Engine.RuntimeVirtualTextureComponent
struct URuntimeVirtualTextureComponent : USceneComponent {
	struct Unknown VirtualTexture; // 0x238 (8)
	char bUseStreamingLowMipsInEditor : 0; // 0x240 (1)
	struct Unknown BoundsSourceActor; // 0x248 (8)

	struct Unknown GetVirtualTextureTransform(); // Function Engine.RuntimeVirtualTextureComponent.GetVirtualTextureTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DDE380>
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
struct URuntimeVirtualTextureStreamingProxy : UTexture2D {
	struct Unknown Settings; // 0xE8 (12)
	char bSinglePhysicalSpace : 0; // 0xF4 (1)
	uint32_t BuildHash; // 0xF8 (4)
};

// Class Engine.RuntimeVirtualTextureVolume
struct ARuntimeVirtualTextureVolume : UActor {
	struct Unknown VirtualTextureComponent; // 0x310 (8)
};

// Class Engine.SceneCaptureComponentCube
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct Unknown TextureTarget; // 0x2D0 (8)
	char bCaptureRotation : 0; // 0x2D8 (1)
	struct Unknown TextureTargetLeft; // 0x2E0 (8)
	struct Unknown TextureTargetRight; // 0x2E8 (8)
	struct Unknown TextureTargetODS; // 0x2F0 (8)
	float IPD; // 0x2F8 (4)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DE5100>
};

// Class Engine.SceneCaptureCube
struct ASceneCaptureCube : ASceneCapture {
	struct Unknown CaptureComponentCube; // 0x320 (8)

	void OnInterpToggle(char bEnable); // Function Engine.SceneCaptureCube.OnInterpToggle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DBC2C0>
};

// Class Engine.SCS_Node
struct USCS_Node : Object {
	struct Unknown* ComponentClass; // 0x28 (8)
	struct Unknown ComponentTemplate; // 0x30 (8)
	struct Unknown CookedComponentInstancingData; // 0x38 (72)
	struct FName AttachToName; // 0x80 (8)
	struct FName ParentComponentOrVariableName; // 0x88 (8)
	struct FName ParentComponentOwnerClassName; // 0x90 (8)
	char bIsParentComponentNative : 0; // 0x98 (1)
	struct TArray<Unknown> ChildNodes; // 0xA0 (16)
	struct TArray<Unknown> MetaDataArray; // 0xB0 (16)
	struct Unknown VariableGuid; // 0xC0 (16)
	struct FName InternalVariableName; // 0xD0 (8)
};

// Class Engine.ServerStatReplicator
struct AServerStatReplicator : AInfo {
	char bUpdateStatNet : 0; // 0x310 (1)
	char bOverwriteClientStats : 0; // 0x311 (1)
	uint32_t Channels; // 0x314 (4)
	uint32_t InRate; // 0x318 (4)
	uint32_t OutRate; // 0x31C (4)
	uint32_t MaxPacketOverhead; // 0x324 (4)
	uint32_t InRateClientMax; // 0x328 (4)
	uint32_t InRateClientMin; // 0x32C (4)
	uint32_t InRateClientAvg; // 0x330 (4)
	uint32_t InPacketsClientMax; // 0x334 (4)
	uint32_t InPacketsClientMin; // 0x338 (4)
	uint32_t InPacketsClientAvg; // 0x33C (4)
	uint32_t OutRateClientMax; // 0x340 (4)
	uint32_t OutRateClientMin; // 0x344 (4)
	uint32_t OutRateClientAvg; // 0x348 (4)
	uint32_t OutPacketsClientMax; // 0x34C (4)
	uint32_t OutPacketsClientMin; // 0x350 (4)
	uint32_t OutPacketsClientAvg; // 0x354 (4)
	uint32_t NetNumClients; // 0x358 (4)
	uint32_t InPackets; // 0x35C (4)
	uint32_t OutPackets; // 0x360 (4)
	uint32_t InBunches; // 0x364 (4)
	uint32_t OutBunches; // 0x368 (4)
	uint32_t OutLoss; // 0x36C (4)
	uint32_t InLoss; // 0x370 (4)
	uint32_t VoiceBytesSent; // 0x374 (4)
	uint32_t VoiceBytesRecv; // 0x378 (4)
	uint32_t VoicePacketsSent; // 0x37C (4)
	uint32_t VoicePacketsRecv; // 0x380 (4)
	uint32_t PercentInVoice; // 0x384 (4)
	uint32_t PercentOutVoice; // 0x388 (4)
	uint32_t NumActorChannels; // 0x38C (4)
	uint32_t NumConsideredActors; // 0x390 (4)
	uint32_t PrioritizedActors; // 0x394 (4)
	uint32_t NumRelevantActors; // 0x398 (4)
	uint32_t NumRelevantDeletedActors; // 0x39C (4)
	uint32_t NumReplicatedActorAttempts; // 0x3A0 (4)
	uint32_t NumReplicatedActors; // 0x3A4 (4)
	uint32_t NumActors; // 0x3A8 (4)
	uint32_t NumNetActors; // 0x3AC (4)
	uint32_t NumDormantActors; // 0x3B0 (4)
	uint32_t NumInitiallyDormantActors; // 0x3B4 (4)
	uint32_t NumNetGUIDsAckd; // 0x3B8 (4)
	uint32_t NumNetGUIDsPending; // 0x3BC (4)
	uint32_t NumNetGUIDsUnAckd; // 0x3C0 (4)
	uint32_t ObjPathBytes; // 0x3C4 (4)
	uint32_t NetGUIDOutRate; // 0x3C8 (4)
	uint32_t NetGUIDInRate; // 0x3CC (4)
	uint32_t NetSaturated; // 0x3D0 (4)
};

// Class Engine.ShadowMapTexture2D
struct UShadowMapTexture2D : UTexture2D {
	char ShadowmapFlags; // 0xE8 (1)
};

// Class Engine.SimpleConstructionScript
struct USimpleConstructionScript : Object {
	struct TArray<Unknown> RootNodes; // 0x28 (16)
	struct TArray<Unknown> AllNodes; // 0x38 (16)
	struct Unknown DefaultSceneRootNode; // 0x48 (8)
};

// Class Engine.SkeletalMeshLODSettings
struct USkeletalMeshLODSettings : UDataAsset {
	struct Unknown MinLOD; // 0x30 (4)
	struct Unknown DisableBelowMinLodStripping; // 0x34 (1)
	struct Unknown bSupportLODStreaming; // 0x35 (1)
	struct Unknown MaxNumStreamedLODs; // 0x38 (4)
	struct Unknown MaxNumOptionalLODs; // 0x3C (4)
	struct TArray<Unknown> LODGroups; // 0x40 (16)
};

// Class Engine.SkeletalMeshSimplificationSettings
struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	struct FName SkeletalMeshReductionModuleName; // 0x38 (8)
};

// Class Engine.SkeletalMeshSocket
struct USkeletalMeshSocket : Object {
	struct FName SocketName; // 0x28 (8)
	struct FName BoneName; // 0x30 (8)
	struct Unknown RelativeLocation; // 0x38 (12)
	struct Unknown RelativeRotation; // 0x44 (12)
	struct Unknown RelativeScale; // 0x50 (12)
	char bForceAlwaysAnimated : 0; // 0x5C (1)

	void InitializeSocketFromLocation(struct Unknown SkelComp, struct Unknown WorldLocation, struct Unknown WorldNormal); // Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB390>
	struct Unknown GetSocketLocation(struct Unknown SkelComp); // Function Engine.SkeletalMeshSocket.GetSocketLocation(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DFB110>
};

// Class Engine.SkyAtmosphereComponent
struct USkyAtmosphereComponent : USceneComponent {
	enum class Unknow TransformMode; // 0x238 (1)
	float BottomRadius; // 0x23C (4)
	struct Unknown GroundAlbedo; // 0x240 (4)
	float AtmosphereHeight; // 0x244 (4)
	float MultiScatteringFactor; // 0x248 (4)
	float RayleighScatteringScale; // 0x24C (4)
	struct Unknown RayleighScattering; // 0x250 (16)
	float RayleighExponentialDistribution; // 0x260 (4)
	float MieScatteringScale; // 0x264 (4)
	struct Unknown MieScattering; // 0x268 (16)
	float MieAbsorptionScale; // 0x278 (4)
	struct Unknown MieAbsorption; // 0x27C (16)
	float MieAnisotropy; // 0x28C (4)
	float MieExponentialDistribution; // 0x290 (4)
	float OtherAbsorptionScale; // 0x294 (4)
	struct Unknown OtherAbsorption; // 0x298 (16)
	struct Unknown OtherTentDistribution; // 0x2A8 (12)
	struct Unknown SkyLuminanceFactor; // 0x2B4 (16)
	float AerialPespectiveViewDistanceScale; // 0x2C4 (4)
	float HeightFogContribution; // 0x2C8 (4)
	float TransmittanceMinLightElevationAngle; // 0x2CC (4)
	struct Unknown bStaticLightingBuiltGUID; // 0x2F4 (16)

	void SetSkyLuminanceFactor(struct Unknown NewValue); // Function Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E01430>
	void SetRayleighScatteringScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighScatteringScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E013B0>
	void SetRayleighScattering(struct Unknown NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighScattering(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E01330>
	void SetRayleighExponentialDistribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighExponentialDistribution(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E012B0>
	void SetOtherAbsorptionScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetOtherAbsorptionScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E400>
	void SetOtherAbsorption(struct Unknown NewValue); // Function Engine.SkyAtmosphereComponent.SetOtherAbsorption(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E01230>
	void SetMieScatteringScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieScatteringScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00E80>
	void SetMieScattering(struct Unknown NewValue); // Function Engine.SkyAtmosphereComponent.SetMieScattering(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00E00>
	void SetMieExponentialDistribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieExponentialDistribution(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E480>
	void SetMieAnisotropy(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAnisotropy(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3D6E610>
	void SetMieAbsorptionScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAbsorptionScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00D80>
	void SetMieAbsorption(struct Unknown NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAbsorption(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00D00>
	void SetHeightFogContribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetHeightFogContribution(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00A70>
	void SetAerialPespectiveViewDistanceScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetAerialPespectiveViewDistanceScale(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E007D0>
	void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, struct Unknown& LightDirection); // Function Engine.SkyAtmosphereComponent.OverrideAtmosphereLightDirection(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E006E0>
};

// Class Engine.SkyAtmosphere
struct ASkyAtmosphere : AInfo {
	struct Unknown SkyAtmosphereComponent; // 0x310 (8)
};

// Class Engine.SkyLightComponent
struct USkyLightComponent : ULightComponentBase {
	char SourceType; // 0x270 (1)
	struct Unknown Cubemap; // 0x278 (8)
	float SourceCubemapAngle; // 0x280 (4)
	int32_t CubemapResolution; // 0x284 (4)
	float SkyDistanceThreshold; // 0x288 (4)
	char bCaptureEmissiveOnly : 0; // 0x28C (1)
	char bLowerHemisphereIsBlack : 0; // 0x28D (1)
	struct Unknown LowerHemisphereColor; // 0x290 (16)
	char bAffectDynamicIndirectLighting : 0; // 0x2A0 (1)
	float OcclusionMaxDistance; // 0x2A4 (4)
	float Contrast; // 0x2A8 (4)
	float OcclusionExponent; // 0x2AC (4)
	struct Unknown OcclusionFoliageTint; // 0x2B0 (4)
	float MinOcclusion; // 0x2B4 (4)
	struct Unknown OcclusionBarkTint; // 0x2B8 (4)
	struct Unknown OcclusionTint; // 0x2BC (4)
	char OcclusionCombineMode; // 0x2C0 (1)
	char SpecularOcclusionMode; // 0x2C1 (1)
	float SpecularOcclusionStrength; // 0x2C4 (4)
	float SelfShadowBiasForObjectAO; // 0x2C8 (4)
	float OcclusionTranslucencyForTwoSidedFoliages; // 0x2CC (4)
	struct Unknown BlendDestinationCubemap; // 0x388 (8)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetVolumetricScatteringIntensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E014B0>
	void SetOcclusionTint(struct Unknown& InTint); // Function Engine.SkyLightComponent.SetOcclusionTint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E011A0>
	void SetOcclusionFoliageTint(struct Unknown& InTint); // Function Engine.SkyLightComponent.SetOcclusionFoliageTint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E01110>
	void SetOcclusionExponent(float InOcclusionExponent); // Function Engine.SkyLightComponent.SetOcclusionExponent(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E01090>
	void SetOcclusionContrast(float InOcclusionContrast); // Function Engine.SkyLightComponent.SetOcclusionContrast(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E01010>
	void SetOcclusionBarkTint(struct Unknown& InTint); // Function Engine.SkyLightComponent.SetOcclusionBarkTint(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00F80>
	void SetMinOcclusion(float InMinOcclusion); // Function Engine.SkyLightComponent.SetMinOcclusion(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00F00>
	void SetLowerHemisphereColor(struct Unknown& InLowerHemisphereColor); // Function Engine.SkyLightComponent.SetLowerHemisphereColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00C70>
	void SetLightColor(struct Unknown NewLightColor); // Function Engine.SkyLightComponent.SetLightColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00BF0>
	void SetIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIntensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00B70>
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIndirectLightingIntensity(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00AF0>
	void SetCubemapBlend(struct Unknown SourceCubemap, struct Unknown DestinationCubemap, float InBlendFraction); // Function Engine.SkyLightComponent.SetCubemapBlend(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00960>
	void SetCubemap(struct Unknown NewCubemap); // Function Engine.SkyLightComponent.SetCubemap(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E008E0>
	void SetAffectDynamicIndirectLighting(char bNewValue); // Function Engine.SkyLightComponent.SetAffectDynamicIndirectLighting(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E00850>
	void RecaptureSky(); // Function Engine.SkyLightComponent.RecaptureSky(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E007B0>
};

// Class Engine.SlateBrushAsset
struct USlateBrushAsset : Object {
	struct Unknown Brush; // 0x28 (136)
};

// Class Engine.SoundAttenuation
struct USoundAttenuation : Object {
	struct Unknown Attenuation; // 0x28 (928)
};

// Class Engine.SoundClass
struct USoundClass : Object {
	struct Unknown Properties; // 0x28 (88)
	struct TArray<Unknown> ChildClasses; // 0x80 (16)
	struct TArray<Unknown> PassiveSoundMixModifiers; // 0x90 (16)
	struct Unknown Modulation; // 0xA0 (16)
	struct Unknown ParentClass; // 0xB0 (8)
};

// Class Engine.SoundConcurrency
struct USoundConcurrency : Object {
	struct Unknown Concurrency; // 0x28 (32)
};

// Class Engine.SoundCue
struct USoundCue : USoundBase {
	char bPrimeOnLoad : 0; // 0x160 (1)
	struct Unknown FirstNode; // 0x168 (8)
	float VolumeMultiplier; // 0x170 (4)
	float PitchMultiplier; // 0x174 (4)
	struct Unknown AttenuationOverrides; // 0x178 (928)
	float SubtitlePriority; // 0x518 (4)
	char bOverrideAttenuation : 0; // 0x520 (1)
	char bExcludeFromRandomNodeBranchCulling : 0; // 0x520 (1)
	int32_t CookedQualityIndex; // 0x524 (4)
	char bHasPlayWhenSilent : 0; // 0x528 (1)
};

// Class Engine.SoundEffectSourcePresetChain
struct USoundEffectSourcePresetChain : Object {
	struct TArray<Unknown> Chain; // 0x28 (16)
	char bPlayEffectChainTails : 0; // 0x38 (1)
};

// Class Engine.SoundGroups
struct USoundGroups : Object {
	struct TArray<Unknown> SoundGroupProfiles; // 0x28 (16)
};

// Class Engine.SoundMix
struct USoundMix : Object {
	char bApplyEQ : 0; // 0x28 (1)
	float EQPriority; // 0x2C (4)
	struct Unknown EQSettings; // 0x30 (64)
	struct TArray<Unknown> SoundClassEffects; // 0x70 (16)
	float InitialDelay; // 0x80 (4)
	float FadeInTime; // 0x84 (4)
	float Duration; // 0x88 (4)
	float FadeOutTime; // 0x8C (4)
};

// Class Engine.SoundNode
struct USoundNode : Object {
	struct TArray<Unknown> ChildNodes; // 0x28 (16)
};

// Class Engine.SoundNodeAttenuation
struct USoundNodeAttenuation : USoundNode {
	struct Unknown AttenuationSettings; // 0x48 (8)
	struct Unknown AttenuationOverrides; // 0x50 (928)
	char bOverrideAttenuation : 0; // 0x3F0 (1)
};

// Class Engine.SoundNodeBranch
struct USoundNodeBranch : USoundNode {
	struct FName BoolParameterName; // 0x48 (8)
};

// Class Engine.SoundNodeConcatenator
struct USoundNodeConcatenator : USoundNode {
	struct TArray<Unknown> InputVolume; // 0x48 (16)
};

// Class Engine.SoundNodeDelay
struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48 (4)
	float DelayMax; // 0x4C (4)
};

// Class Engine.SoundNodeDialoguePlayer
struct USoundNodeDialoguePlayer : USoundNode {
	struct Unknown DialogueWaveParameter; // 0x48 (32)
	char bLooping : 0; // 0x68 (1)
};

// Class Engine.SoundNodeDistanceCrossFade
struct USoundNodeDistanceCrossFade : USoundNode {
	struct TArray<Unknown> CrossFadeInput; // 0x48 (16)
};

// Class Engine.SoundNodeDoppler
struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48 (4)
	char bUseSmoothing : 0; // 0x4C (1)
	float SmoothingInterpSpeed; // 0x50 (4)
};

// Class Engine.SoundNodeEnveloper
struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x48 (4)
	float LoopEnd; // 0x4C (4)
	float DurationAfterLoop; // 0x50 (4)
	int32_t LoopCount; // 0x54 (4)
	char bLoopIndefinitely : 0; // 0x58 (1)
	char bLoop : 0; // 0x58 (1)
	struct Unknown VolumeInterpCurve; // 0x60 (8)
	struct Unknown PitchInterpCurve; // 0x68 (8)
	struct Unknown VolumeCurve; // 0x70 (136)
	struct Unknown PitchCurve; // 0xF8 (136)
	float PitchMin; // 0x180 (4)
	float PitchMax; // 0x184 (4)
	float VolumeMin; // 0x188 (4)
	float VolumeMax; // 0x18C (4)
};

// Class Engine.SoundNodeGroupControl
struct USoundNodeGroupControl : USoundNode {
	struct TArray<Unknown> GroupSizes; // 0x48 (16)
};

// Class Engine.SoundNodeLooping
struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48 (4)
	char bLoopIndefinitely : 0; // 0x4C (1)
};

// Class Engine.SoundNodeMixer
struct USoundNodeMixer : USoundNode {
	struct TArray<Unknown> InputVolume; // 0x48 (16)
};

// Class Engine.SoundNodeModulator
struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48 (4)
	float PitchMax; // 0x4C (4)
	float VolumeMin; // 0x50 (4)
	float VolumeMax; // 0x54 (4)
};

// Class Engine.SoundNodeModulatorContinuous
struct USoundNodeModulatorContinuous : USoundNode {
	struct Unknown PitchModulationParams; // 0x48 (32)
	struct Unknown VolumeModulationParams; // 0x68 (32)
};

// Class Engine.SoundNodeOscillator
struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 0; // 0x48 (1)
	char bModulatePitch : 0; // 0x48 (1)
	float AmplitudeMin; // 0x4C (4)
	float AmplitudeMax; // 0x50 (4)
	float FrequencyMin; // 0x54 (4)
	float FrequencyMax; // 0x58 (4)
	float OffsetMin; // 0x5C (4)
	float OffsetMax; // 0x60 (4)
	float CenterMin; // 0x64 (4)
	float CenterMax; // 0x68 (4)
};

// Class Engine.SoundNodeParamCrossFade
struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	struct FName ParamName; // 0x58 (8)
};

// Class Engine.SoundNodeRandom
struct USoundNodeRandom : USoundNode {
	struct TArray<Unknown> Weights; // 0x48 (16)
	struct TArray<Unknown> HasBeenUsed; // 0x58 (16)
	int32_t NumRandomUsed; // 0x68 (4)
	int32_t PreselectAtLevelLoad; // 0x6C (4)
	char bShouldExcludeFromBranchCulling : 0; // 0x70 (1)
	char bSoundCueExcludedFromBranchCulling : 0; // 0x70 (1)
	char b : 0; // 0x70 (1)
};

// Class Engine.SoundNodeSoundClass
struct USoundNodeSoundClass : USoundNode {
	struct Unknown SoundClassOverride; // 0x48 (8)
};

// Class Engine.SoundNodeSwitch
struct USoundNodeSwitch : USoundNode {
	struct FName IntParameterName; // 0x48 (8)
};

// Class Engine.SoundNodeWaveParam
struct USoundNodeWaveParam : USoundNode {
	struct FName WaveParameterName; // 0x48 (8)
};

// Class Engine.SoundNodeWavePlayer
struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	struct TSoftObjectPtr<Unknown> SoundWaveAssetPtr; // 0x48 (40)
	struct Unknown SoundWave; // 0x70 (8)
	char bLooping : 0; // 0x78 (1)
};

// Class Engine.SoundSourceBus
struct USoundSourceBus : USoundWave {
	enum class Unknow SourceBusChannels; // 0x308 (1)
	float SourceBusDuration; // 0x30C (4)
	char bAutoDeactivateWhenSilent : 0; // 0x310 (1)
};

// Class Engine.SoundSubmixBase
struct USoundSubmixBase : Object {
	struct TArray<Unknown> ChildSubmixes; // 0x28 (16)
};

// Class Engine.SoundSubmixWithParentBase
struct USoundSubmixWithParentBase : USoundSubmixBase {
	struct Unknown ParentSubmix; // 0x38 (8)
};

// Class Engine.SoundSubmix
struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 0; // 0x40 (1)
	struct TArray<Unknown> SubmixEffectChain; // 0x48 (16)
	struct Unknown AmbisonicsPluginSettings; // 0x58 (8)
	int32_t EnvelopeFollowerAttackTime; // 0x60 (4)
	int32_t EnvelopeFollowerReleaseTime; // 0x64 (4)
	float OutputVolume; // 0x68 (4)
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x70 (16)

	void StopRecordingOutput(struct Unknown WorldContextObject, enum class Unknow ExportType, struct FString Name, struct FString Path, struct Unknown ExistingSoundWaveToOverwrite); // Function Engine.SoundSubmix.StopRecordingOutput(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E09460>
	void StopEnvelopeFollowing(struct Unknown WorldContextObject); // Function Engine.SoundSubmix.StopEnvelopeFollowing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E093E0>
	void StartRecordingOutput(struct Unknown WorldContextObject, float ExpectedDuration); // Function Engine.SoundSubmix.StartRecordingOutput(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E09310>
	void StartEnvelopeFollowing(struct Unknown WorldContextObject); // Function Engine.SoundSubmix.StartEnvelopeFollowing(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E09290>
	void SetSubmixOutputVolume(struct Unknown WorldContextObject, float InOutputVolume); // Function Engine.SoundSubmix.SetSubmixOutputVolume(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E091C0>
	void AddEnvelopeFollowerDelegate(struct Unknown WorldContextObject, struct FDelegate& OnSubmixEnvelopeBP); // Function Engine.SoundSubmix.AddEnvelopeFollowerDelegate(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E090D0>
};

// Class Engine.SoundfieldSubmix
struct USoundfieldSubmix : USoundSubmixWithParentBase {
	struct FName SoundfieldEncodingFormat; // 0x40 (8)
	struct Unknown EncodingSettings; // 0x48 (8)
	struct TArray<Unknown> SoundfieldEffectChain; // 0x50 (16)
	struct Unknown* EncodingSettingsClass; // 0x60 (8)
};

// Class Engine.EndpointSubmix
struct UEndpointSubmix : USoundSubmixBase {
	struct FName EndpointType; // 0x38 (8)
	struct Unknown* EndpointSettingsClass; // 0x40 (8)
	struct Unknown EndpointSettings; // 0x48 (8)
};

// Class Engine.SoundfieldEndpointSubmix
struct USoundfieldEndpointSubmix : USoundSubmixBase {
	struct FName SoundfieldEndpointType; // 0x38 (8)
	struct Unknown* EndpointSettingsClass; // 0x40 (8)
	struct Unknown EndpointSettings; // 0x48 (8)
	struct Unknown* EncodingSettingsClass; // 0x50 (8)
	struct Unknown EncodingSettings; // 0x58 (8)
	struct TArray<Unknown> SoundfieldEffectChain; // 0x60 (16)
};

// Class Engine.SpectatorPawnMovement
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 0; // 0x150 (1)
};

// Class Engine.SphereReflectionCapture
struct ASphereReflectionCapture : AReflectionCapture {
	struct Unknown DrawCaptureRadius; // 0x318 (8)
};

// Class Engine.SphereReflectionCaptureComponent
struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x2C0 (4)
	float CaptureDistanceScale; // 0x2C4 (4)
	struct Unknown PreviewInfluenceRadius; // 0x2C8 (8)
};

// Class Engine.SplineMeshActor
struct ASplineMeshActor : UActor {
	struct Unknown SplineMeshComponent; // 0x310 (8)
};

// Class Engine.SplineMeshComponent
struct USplineMeshComponent : UStaticMeshComponent {
	struct Unknown SplineParams; // 0x558 (88)
	struct Unknown SplineUpDir; // 0x5B0 (12)
	float SplineBoundaryMin; // 0x5BC (4)
	struct Unknown CachedMeshBodySetupGuid; // 0x5C0 (16)
	struct Unknown BodySetup; // 0x5D0 (8)
	float SplineBoundaryMax; // 0x5D8 (4)
	char bAllowSplineEditingPerInstance : 0; // 0x5DC (1)
	char bSmoothInterpRollScale : 0; // 0x5DC (1)
	char bMeshDirty : 0; // 0x5DC (1)
	char ForwardAxis; // 0x5DD (1)
	float VirtualTextureMainPassMaxDrawDistance; // 0x5E0 (4)

	void UpdateMesh(); // Function Engine.SplineMeshComponent.UpdateMesh(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E16490>
	void SetStartTangent(struct Unknown StartTangent, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartTangent(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E163B0>
	void SetStartScale(struct Unknown StartScale, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E162F0>
	void SetStartRoll(float StartRoll, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartRoll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E16220>
	void SetStartPosition(struct Unknown StartPos, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartPosition(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E16140>
	void SetStartOffset(struct Unknown StartOffset, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E16080>
	void SetStartAndEnd(struct Unknown StartPos, struct Unknown StartTangent, struct Unknown EndPos, struct Unknown EndTangent, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartAndEnd(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15EC0>
	void SetSplineUpDir(struct Unknown& InSplineUpDir, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetSplineUpDir(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15DE0>
	void SetForwardAxis(char InForwardAxis, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetForwardAxis(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15B10>
	void SetEndTangent(struct Unknown EndTangent, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndTangent(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15A30>
	void SetEndScale(struct Unknown EndScale, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15970>
	void SetEndRoll(float EndRoll, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndRoll(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E158A0>
	void SetEndPosition(struct Unknown EndPos, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndPosition(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E157C0>
	void SetEndOffset(struct Unknown EndOffset, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15700>
	void SetBoundaryMin(float InBoundaryMin, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMin(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15630>
	void SetBoundaryMax(float InBoundaryMax, char bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMax(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15560>
	struct Unknown GetStartTangent(); // Function Engine.SplineMeshComponent.GetStartTangent(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15470>
	struct Unknown GetStartScale(); // Function Engine.SplineMeshComponent.GetStartScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15430>
	float GetStartRoll(); // Function Engine.SplineMeshComponent.GetStartRoll(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15400>
	struct Unknown GetStartPosition(); // Function Engine.SplineMeshComponent.GetStartPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E153C0>
	struct Unknown GetStartOffset(); // Function Engine.SplineMeshComponent.GetStartOffset(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15380>
	struct Unknown GetSplineUpDir(); // Function Engine.SplineMeshComponent.GetSplineUpDir(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15340>
	char GetForwardAxis(); // Function Engine.SplineMeshComponent.GetForwardAxis(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14E80>
	struct Unknown GetEndTangent(); // Function Engine.SplineMeshComponent.GetEndTangent(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14E40>
	struct Unknown GetEndScale(); // Function Engine.SplineMeshComponent.GetEndScale(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14E00>
	float GetEndRoll(); // Function Engine.SplineMeshComponent.GetEndRoll(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14DD0>
	struct Unknown GetEndPosition(); // Function Engine.SplineMeshComponent.GetEndPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14D90>
	struct Unknown GetEndOffset(); // Function Engine.SplineMeshComponent.GetEndOffset(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14D50>
	float GetBoundaryMin(); // Function Engine.SplineMeshComponent.GetBoundaryMin(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14C80>
	float GetBoundaryMax(); // Function Engine.SplineMeshComponent.GetBoundaryMax(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14C50>
};

// Class Engine.SpotLightComponent
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x3B0 (4)
	float OuterConeAngle; // 0x3B4 (4)
	float LightShaftConeAngle; // 0x3B8 (4)
	char bUsePCSS : 0; // 0x3BC (1)
	float PCSSSharpness; // 0x3C0 (4)
	float PCSSContrast; // 0x3C4 (4)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLightComponent.SetOuterConeAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15D60>
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLightComponent.SetInnerConeAngle(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15C60>
};

// Class Engine.SpringArmComponent
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x238 (4)
	struct Unknown SocketOffset; // 0x23C (12)
	struct Unknown TargetOffset; // 0x248 (12)
	float ProbeSize; // 0x254 (4)
	char ProbeChannel; // 0x258 (1)
	char bDoCollisionTest : 0; // 0x25C (1)
	char bUsePawnControlRotation : 0; // 0x25C (1)
	char bInheritPitch : 0; // 0x25C (1)
	char bInheritYaw : 0; // 0x25C (1)
	char bInheritRoll : 0; // 0x25C (1)
	char bEnableCameraLag : 0; // 0x25C (1)
	char bEnableCameraRotationLag : 0; // 0x25C (1)
	char bUseCameraLagSubstepping : 0; // 0x25C (1)
	char bDrawDebugLagMarkers : 0; // 0x25D (1)
	float CameraLagSpeed; // 0x260 (4)
	float CameraRotationLagSpeed; // 0x264 (4)
	float CameraLagMaxTimeStep; // 0x268 (4)
	float CameraLagMaxDistance; // 0x26C (4)

	char IsCollisionFixApplied(); // Function Engine.SpringArmComponent.IsCollisionFixApplied(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15530>
	struct Unknown GetUnfixedCameraPosition(); // Function Engine.SpringArmComponent.GetUnfixedCameraPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E154F0>
	struct Unknown GetTargetRotation(); // Function Engine.SpringArmComponent.GetTargetRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E154B0>
};

// Class Engine.StaticMesh
struct UStaticMesh : UStreamableRenderAsset {
	char bUseAsOccluderForSoftwareOcclusion : 0; // 0x60 (1)
	struct FName LODGroup; // 0x64 (8)
	struct FName MeshStreamingGroup; // 0x6C (8)
	struct Unknown MinLOD; // 0x80 (4)
	float LpvBiasMultiplier; // 0x84 (4)
	struct TArray<Unknown> StaticMaterials; // 0x88 (16)
	float LightmapUVDensity; // 0x98 (4)
	int32_t LightMapResolution; // 0x9C (4)
	int32_t LightMapCoordinateIndex; // 0xA0 (4)
	float DistanceFieldSelfShadowBias; // 0xA4 (4)
	struct Unknown BodySetup; // 0xA8 (8)
	int32_t LODForCollision; // 0xB0 (4)
	char bGenerateMeshDistanceField : 0; // 0xB4 (1)
	char bStripComplexCollisionForConsole : 0; // 0xB4 (1)
	char bHasNavigationData : 0; // 0xB4 (1)
	char bSupportUniformlyDistributedSampling : 0; // 0xB4 (1)
	char bSupportPhysicalMaterialMasks : 0; // 0xB4 (1)
	char bIsBuiltAtRuntime : 0; // 0xB4 (1)
	char bAllowCPUAccess : 0; // 0xB4 (1)
	char bSupportGpuUniformlyDistributedSampling : 0; // 0xB5 (1)
	struct TArray<Unknown> Sockets; // 0xD8 (16)
	struct Unknown PositiveBoundsExtension; // 0xF8 (12)
	struct Unknown NegativeBoundsExtension; // 0x104 (12)
	struct Unknown ExtendedBounds; // 0x110 (28)
	int32_t ElementToIgnoreForTexFactor; // 0x12C (4)
	struct TArray<Unknown> AssetUserData; // 0x130 (16)
	struct Unknown EditableMesh; // 0x148 (8)
	struct Unknown NavCollision; // 0x150 (8)

	void RemoveSocket(struct Unknown Socket); // Function Engine.StaticMesh.RemoveSocket(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F83180>
	int32_t GetNumTriangles(int32_t LODIndex); // Function Engine.StaticMesh.GetNumTriangles(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E152B0>
	int32_t GetNumSections(int32_t InLOD); // Function Engine.StaticMesh.GetNumSections(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15220>
	int32_t GetNumMaterial(); // Function Engine.StaticMesh.GetNumMaterial(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15200>
	int32_t GetNumLODs(); // Function Engine.StaticMesh.GetNumLODs(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E151D0>
	void GetMinimumLODForPlatforms(struct TMap<Unknown, Unknown>Unknown& PlatformMinimumLODs); // Function Engine.StaticMesh.GetMinimumLODForPlatforms(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E15050>
	int32_t GetMinimumLODForPlatform(struct FName& PlatformName); // Function Engine.StaticMesh.GetMinimumLODForPlatform(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14FD0>
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // Function Engine.StaticMesh.GetMaterialIndex(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14F40>
	struct Unknown GetMaterial(int32_t MaterialIndex); // Function Engine.StaticMesh.GetMaterial(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14EB0>
	struct Unknown GetBounds(); // Function Engine.StaticMesh.GetBounds(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14D00>
	struct Unknown GetBoundingBox(); // Function Engine.StaticMesh.GetBoundingBox(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14CB0>
	struct Unknown FindSocket(struct FName InSocketName); // Function Engine.StaticMesh.FindSocket(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14BC0>
	struct Unknown CreateStaticMeshDescription(struct Unknown Outer); // Function Engine.StaticMesh.CreateStaticMeshDescription(Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14B40>
	void BuildFromStaticMeshDescriptions(struct TArray<Unknown>& StaticMeshDescriptions, char bBuildSimpleCollision); // Function Engine.StaticMesh.BuildFromStaticMeshDescriptions(Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E14A40>
	void AddSocket(struct Unknown Socket); // Function Engine.StaticMesh.AddSocket(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F83100>
	struct FName AddMaterial(struct Unknown Material); // Function Engine.StaticMesh.AddMaterial(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E149B0>
};

// Class Engine.StaticMeshSocket
struct UStaticMeshSocket : Object {
	struct FName SocketName; // 0x28 (8)
	struct Unknown RelativeLocation; // 0x30 (12)
	struct Unknown RelativeRotation; // 0x3C (12)
	struct Unknown RelativeScale; // 0x48 (12)
	struct FString Tag; // 0x58 (16)
};

// Class Engine.StereoLayerComponent
struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 0; // 0x238 (1)
	char bSupportsDepth : 0; // 0x238 (1)
	char bNoAlphaChannel : 0; // 0x238 (1)
	struct Unknown Texture; // 0x240 (8)
	struct Unknown LeftTexture; // 0x248 (8)
	char bQuadPreserveTextureRatio : 0; // 0x250 (1)
	struct Unknown QuadSize; // 0x254 (8)
	struct Unknown UVRect; // 0x25C (20)
	float CylinderRadius; // 0x270 (4)
	float CylinderOverlayArc; // 0x274 (4)
	int32_t CylinderHeight; // 0x278 (4)
	struct Unknown EquirectProps; // 0x27C (72)
	char StereoLayerType; // 0x2C4 (1)
	char StereoLayerShape; // 0x2C5 (1)
	struct Unknown Shape; // 0x2C8 (8)
	int32_t Priority; // 0x2D0 (4)

	void SetUVRect(struct Unknown InUVRect); // Function Engine.StereoLayerComponent.SetUVRect(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1B090>
	void SetTexture(struct Unknown InTexture); // Function Engine.StereoLayerComponent.SetTexture(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1B010>
	void SetQuadSize(struct Unknown InQuadSize); // Function Engine.StereoLayerComponent.SetQuadSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1ACE0>
	void SetPriority(int32_t InPriority); // Function Engine.StereoLayerComponent.SetPriority(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1AC60>
	void SetLeftTexture(struct Unknown InTexture); // Function Engine.StereoLayerComponent.SetLeftTexture(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1AB60>
	void SetEquirectProps(struct Unknown InScaleBiases); // Function Engine.StereoLayerComponent.SetEquirectProps(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A860>
	void MarkTextureForUpdate(); // Function Engine.StereoLayerComponent.MarkTextureForUpdate(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A740>
	struct Unknown GetUVRect(); // Function Engine.StereoLayerComponent.GetUVRect(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A710>
	struct Unknown GetTexture(); // Function Engine.StereoLayerComponent.GetTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A6F0>
	struct Unknown GetQuadSize(); // Function Engine.StereoLayerComponent.GetQuadSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A6C0>
	int32_t GetPriority(); // Function Engine.StereoLayerComponent.GetPriority(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A6A0>
	struct Unknown GetLeftTexture(); // Function Engine.StereoLayerComponent.GetLeftTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A5A0>
};

// Class Engine.StereoLayerShapeCylinder
struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28 (4)
	float OverlayArc; // 0x2C (4)
	int32_t Height; // 0x30 (4)

	void SetRadius(float InRadius); // Function Engine.StereoLayerShapeCylinder.SetRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1AD60>
	void SetOverlayArc(float InOverlayArc); // Function Engine.StereoLayerShapeCylinder.SetOverlayArc(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1ABE0>
	void SetHeight(int32_t InHeight); // Function Engine.StereoLayerShapeCylinder.SetHeight(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1AAE0>
};

// Class Engine.StereoLayerShapeEquirect
struct UStereoLayerShapeEquirect : UStereoLayerShape {
	struct Unknown LeftUVRect; // 0x28 (20)
	struct Unknown RightUVRect; // 0x3C (20)
	struct Unknown LeftScale; // 0x50 (8)
	struct Unknown RightScale; // 0x58 (8)
	struct Unknown LeftBias; // 0x60 (8)
	struct Unknown RightBias; // 0x68 (8)

	void SetEquirectProps(struct Unknown InScaleBiases); // Function Engine.StereoLayerShapeEquirect.SetEquirectProps(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1A960>
};

// Class Engine.SubsurfaceProfile
struct USubsurfaceProfile : Object {
	struct Unknown Settings; // 0x28 (140)
};

// Class Engine.SubUVAnimation
struct USubUVAnimation : Object {
	struct Unknown SubUVTexture; // 0x28 (8)
	int32_t SubImages_Horizontal; // 0x30 (4)
	int32_t SubImages_Vertical; // 0x34 (4)
	char BoundingMode; // 0x38 (1)
	char OpacitySourceMode; // 0x39 (1)
	float AlphaThreshold; // 0x3C (4)
};

// Class Engine.TimecodeProvider
struct UTimecodeProvider : Object {
	float FrameDelay; // 0x28 (4)

	struct Unknown GetTimecode(); // Function Engine.TimecodeProvider.GetTimecode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23220>
	enum class Unknow GetSynchronizationState(); // Function Engine.TimecodeProvider.GetSynchronizationState(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E231F0>
	struct Unknown GetQualifiedFrameTime(); // Function Engine.TimecodeProvider.GetQualifiedFrameTime(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E231B0>
	struct Unknown GetFrameRate(); // Function Engine.TimecodeProvider.GetFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E230E0>
	struct Unknown GetDelayedTimecode(); // Function Engine.TimecodeProvider.GetDelayedTimecode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E230A0>
	struct Unknown GetDelayedQualifiedFrameTime(); // Function Engine.TimecodeProvider.GetDelayedQualifiedFrameTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23060>
};

// Class Engine.SystemTimeTimecodeProvider
struct USystemTimeTimecodeProvider : UTimecodeProvider {
	struct Unknown FrameRate; // 0x30 (8)
	char bGenerateFullFrame : 0; // 0x38 (1)
	char bUseHighPerformanceClock : 0; // 0x39 (1)
};

// Class Engine.TextPropertyTestObject
struct UTextPropertyTestObject : Object {
	struct FText DefaultedText; // 0x28 (24)
	struct FText UndefaultedText; // 0x40 (24)
	struct FText TransientText; // 0x58 (24)
};

// Class Engine.TextRenderActor
struct ATextRenderActor : UActor {
	struct Unknown TextRender; // 0x310 (8)
};

// Class Engine.TextRenderComponent
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x4B8 (24)
	struct Unknown TextMaterial; // 0x4D0 (8)
	struct Unknown Font; // 0x4D8 (8)
	char HorizontalAlignment; // 0x4E0 (1)
	char VerticalAlignment; // 0x4E1 (1)
	struct Unknown TextRenderColor; // 0x4E4 (4)
	float XScale; // 0x4E8 (4)
	float YScale; // 0x4EC (4)
	float WorldSize; // 0x4F0 (4)
	float InvDefaultSize; // 0x4F4 (4)
	float HorizSpacingAdjust; // 0x4F8 (4)
	float VertSpacingAdjust; // 0x4FC (4)
	char bAlwaysRenderAsText : 0; // 0x500 (1)

	void SetYScale(float Value); // Function Engine.TextRenderComponent.SetYScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F660>
	void SetXScale(float Value); // Function Engine.TextRenderComponent.SetXScale(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F5E0>
	void SetWorldSize(float Value); // Function Engine.TextRenderComponent.SetWorldSize(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F560>
	void SetVertSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetVertSpacingAdjust(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F460>
	void SetVerticalAlignment(char Value); // Function Engine.TextRenderComponent.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F4E0>
	void SetTextRenderColor(struct Unknown Value); // Function Engine.TextRenderComponent.SetTextRenderColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F3F0>
	void SetTextMaterial(struct Unknown Material); // Function Engine.TextRenderComponent.SetTextMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F370>
	void SetText(struct FString Value); // Function Engine.TextRenderComponent.SetText(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F2D0>
	void SetHorizSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetHorizSpacingAdjust(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F1D0>
	void SetHorizontalAlignment(char Value); // Function Engine.TextRenderComponent.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F250>
	void SetFont(struct Unknown Value); // Function Engine.TextRenderComponent.SetFont(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F150>
	void K2_SetText(struct FText& Value); // Function Engine.TextRenderComponent.K2_SetText(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1F080>
	struct Unknown GetTextWorldSize(); // Function Engine.TextRenderComponent.GetTextWorldSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1EF80>
	struct Unknown GetTextLocalSize(); // Function Engine.TextRenderComponent.GetTextLocalSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E1EF40>
};

// Class Engine.TextureLightProfile
struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0xE8 (4)
	float TextureMultiplier; // 0xEC (4)
};

// Class Engine.TextureRenderTargetCube
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xC0 (4)
	struct Unknown ClearColor; // 0xC4 (16)
	char OverrideFormat; // 0xD4 (1)
	char bHDR : 0; // 0xD5 (1)
	char bForceLinearGamma : 0; // 0xD5 (1)
};

// Class Engine.TimelineComponent
struct UTimelineComponent : UActorComponent {
	struct Unknown TheTimeline; // 0xB0 (152)
	char bIgnoreTimeDilation : 0; // 0x148 (1)

	void Stop(); // Function Engine.TimelineComponent.Stop(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23A30>
	void SetVectorCurve(struct Unknown NewVectorCurve, struct FName VectorTrackName); // Function Engine.TimelineComponent.SetVectorCurve(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23970>
	void SetTimelineLengthMode(char NewLengthMode); // Function Engine.TimelineComponent.SetTimelineLengthMode(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E238F0>
	void SetTimelineLength(float NewLength); // Function Engine.TimelineComponent.SetTimelineLength(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23870>
	void SetPlayRate(float NewRate); // Function Engine.TimelineComponent.SetPlayRate(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E236E0>
	void SetPlaybackPosition(float NewPosition, char bFireEvents, char bFireUpdate); // Function Engine.TimelineComponent.SetPlaybackPosition(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23760>
	void SetNewTime(float NewTime); // Function Engine.TimelineComponent.SetNewTime(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23660>
	void SetLooping(char bNewLooping); // Function Engine.TimelineComponent.SetLooping(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E235D0>
	void SetLinearColorCurve(struct Unknown NewLinearColorCurve, struct FName LinearColorTrackName); // Function Engine.TimelineComponent.SetLinearColorCurve(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23510>
	void SetIgnoreTimeDilation(char bNewIgnoreTimeDilation); // Function Engine.TimelineComponent.SetIgnoreTimeDilation(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23480>
	void SetFloatCurve(struct Unknown NewFloatCurve, struct FName FloatTrackName); // Function Engine.TimelineComponent.SetFloatCurve(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E233C0>
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E233A0>
	void Reverse(); // Function Engine.TimelineComponent.Reverse(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23380>
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23360>
	void Play(); // Function Engine.TimelineComponent.Play(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23340>
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23320>
	char IsReversing(); // Function Engine.TimelineComponent.IsReversing(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E232F0>
	char IsPlaying(); // Function Engine.TimelineComponent.IsPlaying(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E232C0>
	char IsLooping(); // Function Engine.TimelineComponent.IsLooping(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23290>
	float GetTimelineLength(); // Function Engine.TimelineComponent.GetTimelineLength(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23260>
	float GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23150>
	float GetPlaybackPosition(); // Function Engine.TimelineComponent.GetPlaybackPosition(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23180>
	char GetIgnoreTimeDilation(); // Function Engine.TimelineComponent.GetIgnoreTimeDilation(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E23120>
};

// Class Engine.TimelineTemplate
struct UTimelineTemplate : Object {
	float TimelineLength; // 0x28 (4)
	char LengthMode; // 0x2C (1)
	char bAutoPlay : 0; // 0x2D (1)
	char bLoop : 0; // 0x2D (1)
	char b : 0; // 0x2D (1)
	char bIgnoreTimeDilation : 0; // 0x2D (1)
	struct TArray<Unknown> EventTracks; // 0x30 (16)
	struct TArray<Unknown> FloatTracks; // 0x40 (16)
	struct TArray<Unknown> VectorTracks; // 0x50 (16)
	struct TArray<Unknown> LinearColorTracks; // 0x60 (16)
	struct TArray<Unknown> MetaDataArray; // 0x70 (16)
	struct Unknown TimelineGuid; // 0x80 (16)
	struct FName VariableName; // 0x90 (8)
	struct FName DirectionPropertyName; // 0x98 (8)
	struct FName UpdateFunctionName; // 0xA0 (8)
	struct FName FinishedFunctionName; // 0xA8 (8)
};

// Class Engine.TireType
struct UTireType : UDataAsset {
	float FrictionScale; // 0x30 (4)
};

// Class Engine.TouchInterface
struct UTouchInterface : Object {
	struct TArray<Unknown> Controls; // 0x28 (16)
	float ActiveOpacity; // 0x38 (4)
	float InactiveOpacity; // 0x3C (4)
	float TimeUntilDeactive; // 0x40 (4)
	float TimeUntilReset; // 0x44 (4)
	float ActivationDelay; // 0x48 (4)
	char bPreventRecenter : 0; // 0x4C (1)
	float StartupDelay; // 0x50 (4)
};

// Class Engine.TriggerBase
struct ATriggerBase : UActor {
	struct Unknown CollisionComponent; // 0x310 (8)
};

// Class Engine.UserDefinedEnum
struct UUserDefinedEnum : UEnum {
	struct TMap<Unknown, Unknown>Unknown DisplayNameMap; // 0x60 (80)
};

// Class Engine.UserDefinedStruct
struct UUserDefinedStruct : UScriptStruct {
	enum class Unknown status; // 0xC0 (1)
	struct Unknown Guid; // 0xC4 (16)
};

// Class Engine.UserInterfaceSettings
struct UUserInterfaceSettings : UDeveloperSettings {
	enum class Unknow RenderFocusRule; // 0x38 (1)
	struct TMap<Unknown, Unknown>Unknown HardwareCursors; // 0x40 (80)
	struct TMap<Unknown, Unknown>Unknown SoftwareCursors; // 0x90 (80)
	struct Unknown DefaultCursor; // 0xE0 (24)
	struct Unknown TextEditBeamCursor; // 0xF8 (24)
	struct Unknown CrosshairsCursor; // 0x110 (24)
	struct Unknown HandCursor; // 0x128 (24)
	struct Unknown GrabHandCursor; // 0x140 (24)
	struct Unknown GrabHandClosedCursor; // 0x158 (24)
	struct Unknown SlashedCircleCursor; // 0x170 (24)
	float ApplicationScale; // 0x188 (4)
	enum class Unknow UIScaleRule; // 0x18C (1)
	struct Unknown CustomScalingRuleClass; // 0x190 (24)
	struct Unknown UIScaleCurve; // 0x1A8 (136)
	char bAllowHighDPIInGameMode : 0; // 0x230 (1)
	char bLoadWidgetsOnDedicatedServer : 0; // 0x231 (1)
	struct TArray<Unknown> CursorClasses; // 0x238 (16)
	struct Unknown* CustomScalingRuleClassInstance; // 0x248 (8)
	struct Unknown CustomScalingRule; // 0x250 (8)
};

// Class Engine.VectorField
struct UVectorField : Object {
	struct Unknown Bounds; // 0x28 (28)
	float Intensity; // 0x44 (4)
};

// Class Engine.VectorFieldAnimated
struct UVectorFieldAnimated : UVectorField {
	struct Unknown Texture; // 0x48 (8)
	char ConstructionOp; // 0x50 (1)
	int32_t VolumeSizeX; // 0x54 (4)
	int32_t VolumeSizeY; // 0x58 (4)
	int32_t VolumeSizeZ; // 0x5C (4)
	int32_t SubImagesX; // 0x60 (4)
	int32_t SubImagesY; // 0x64 (4)
	int32_t FrameCount; // 0x68 (4)
	float FramesPerSecond; // 0x6C (4)
	char bLoop : 0; // 0x70 (1)
	struct Unknown NoiseField; // 0x78 (8)
	float NoiseScale; // 0x80 (4)
	float NoiseMax; // 0x84 (4)
};

// Class Engine.VectorFieldComponent
struct UVectorFieldComponent : UPrimitiveComponent {
	struct Unknown VectorField; // 0x4B8 (8)
	float Intensity; // 0x4C0 (4)
	float Tightness; // 0x4C4 (4)
	char bPreviewVectorField : 0; // 0x4C8 (1)

	void SetIntensity(float NewIntensity); // Function Engine.VectorFieldComponent.SetIntensity(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E27D40>
};

// Class Engine.VectorFieldStatic
struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48 (4)
	int32_t SizeY; // 0x4C (4)
	int32_t SizeZ; // 0x50 (4)
	char bAllowCPUAccess : 0; // 0x54 (1)
	struct TArray<Unknown> CPUData; // 0x80 (16)
};

// Class Engine.VectorFieldVolume
struct AVectorFieldVolume : UActor {
	struct Unknown VectorFieldComponent; // 0x310 (8)
};

// Class Engine.LightMapVirtualTexture2D
struct ULightMapVirtualTexture2D : UTexture2D {
	struct TArray<Unknown> TypeToLayer; // 0xE8 (16)
};

// Class Engine.VirtualTexturePoolConfig
struct UVirtualTexturePoolConfig : Object {
	int32_t DefaultSizeInMegabyte; // 0x28 (4)
	struct TArray<Unknown> Pools; // 0x30 (16)
};

// Class Engine.VOIPTalker
struct UVOIPTalker : UActorComponent {
	struct Unknown Settings; // 0xB0 (24)

	void RegisterWithPlayerState(struct Unknown OwningState); // Function Engine.VOIPTalker.RegisterWithPlayerState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2E9B0>
	float GetVoiceLevel(); // Function Engine.VOIPTalker.GetVoiceLevel(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2E000>
	struct Unknown CreateTalkerForPlayer(struct Unknown OwningState); // Function Engine.VOIPTalker.CreateTalkerForPlayer(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2DF80>
	void BPOnTalkingEnd(); // Function Engine.VOIPTalker.BPOnTalkingEnd(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x120D180>
	void BPOnTalkingBegin(struct Unknown AudioComponent); // Function Engine.VOIPTalker.BPOnTalkingBegin(Native|Event|Protected|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2DEF0>
};

// Class Engine.VolumetricLightmapDensityVolume
struct AVolumetricLightmapDensityVolume : AVolume {
	struct Unknown AllowedMipLevelRange; // 0x348 (8)
};

// Class Engine.WindDirectionalSource
struct AWindDirectionalSource : AInfo {
	struct Unknown Component; // 0x310 (8)
};

// Class Engine.WindDirectionalSourceComponent
struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x238 (4)
	float Speed; // 0x23C (4)
	float MinGustAmount; // 0x240 (4)
	float MaxGustAmount; // 0x244 (4)
	float Radius; // 0x248 (4)
	char bPointWind : 0; // 0x24C (1)

	void SetWindType(enum class Unknow InNewType); // Function Engine.WindDirectionalSourceComponent.SetWindType(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2ED20>
	void SetStrength(float InNewStrength); // Function Engine.WindDirectionalSourceComponent.SetStrength(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2ECA0>
	void SetSpeed(float InNewSpeed); // Function Engine.WindDirectionalSourceComponent.SetSpeed(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2EC20>
	void SetRadius(float InNewRadius); // Function Engine.WindDirectionalSourceComponent.SetRadius(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2EBA0>
	void SetMinimumGustAmount(float InNewMinGust); // Function Engine.WindDirectionalSourceComponent.SetMinimumGustAmount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2EB20>
	void SetMaximumGustAmount(float InNewMaxGust); // Function Engine.WindDirectionalSourceComponent.SetMaximumGustAmount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3E2EA30>
};

// Class Engine.WorldComposition
struct UWorldComposition : Object {
	struct TArray<Unknown> TilesStreaming; // 0x130 (16)
	double TilesStreamingTimeThreshold; // 0x140 (8)
	char bLoadAllTilesDuringCinematic : 0; // 0x148 (1)
	char b : 0; // 0x149 (1)
	float RebaseOriginDistance; // 0x14C (4)
	char bApplyMinStreamingPriorityToLOD : 0; // 0x150 (1)
	char bApplyStreamingDistanceScaleToLOD : 0; // 0x151 (1)
	struct TArray<Unknown> DevFilterRule; // 0x158 (16)
};

// Class Engine.HierarchicalLODSetup
struct UHierarchicalLODSetup : Object {
	struct TArray<Unknown> HierarchicalLODSetup; // 0x28 (16)
	struct TSoftObjectPtr<Unknown> OverrideBaseMaterial; // 0x38 (40)
};

// Class Engine.WorldTileLODSetup
struct UWorldTileLODSetup : Object {
	int32_t NumLOD; // 0x28 (4)
	struct Unknown LOD1; // 0x2C (316)
	struct Unknown LOD2; // 0x168 (316)
	struct Unknown LOD3; // 0x2A4 (316)
	struct Unknown LOD4; // 0x3E0 (316)
};

