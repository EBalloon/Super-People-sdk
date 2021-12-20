// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	ETextGender = 0,
	ETextGender = 1,
	ETextGender = 2,
	ETextGender = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	EFormatArgumentType = 0,
	EFormatArgumentType = 1,
	EFormatArgumentType = 2,
	EFormatArgumentType = 3,
	EFormatArgumentType = 4,
	EFormatArgumentType = 5,
	EFormatArgumentType = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	EEndPlayReason = 0,
	EEndPlayReason = 1,
	EEndPlayReason = 2,
	EEndPlayReason = 3,
	EEndPlayReason = 4,
	EEndPlayReason = 5
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
	EComponentCreationMethod = 0,
	EComponentCreationMethod = 1,
	EComponentCreationMethod = 2,
	EComponentCreationMethod = 3,
	EComponentCreationMethod = 4
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	ETemperatureSeverityType = 0,
	ETemperatureSeverityType = 1,
	ETemperatureSeverityType = 2,
	ETemperatureSeverityType = 3,
	ETemperatureSeverityType = 4,
	ETemperatureSeverityType = 5,
	ETemperatureSeverityType = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	EPlaneConstraintAxisSetting = 0,
	EPlaneConstraintAxisSetting = 1,
	EPlaneConstraintAxisSetting = 2,
	EPlaneConstraintAxisSetting = 3,
	EPlaneConstraintAxisSetting = 4,
	EPlaneConstraintAxisSetting = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	EInterpToBehaviourType = 0,
	EInterpToBehaviourType = 1,
	EInterpToBehaviourType = 2,
	EInterpToBehaviourType = 3,
	EInterpToBehaviourType = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 {
	ETeleportType = 0,
	ETeleportType = 1,
	ETeleportType = 2,
	ETeleportType = 3
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
	ENetworkFailure = 0,
	ENetworkFailure = 1,
	ENetworkFailure = 2,
	ENetworkFailure = 3,
	ENetworkFailure = 4,
	ENetworkFailure = 5,
	ENetworkFailure = 6,
	ENetworkFailure = 7,
	ENetworkFailure = 8,
	ENetworkFailure = 9,
	ENetworkFailure = 10,
	ENetworkFailure = 11,
	ENetworkFailure = 12,
	ENetworkFailure = 13
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	ETravelFailure = 0,
	ETravelFailure = 1,
	ETravelFailure = 2,
	ETravelFailure = 3,
	ETravelFailure = 4,
	ETravelFailure = 5,
	ETravelFailure = 6,
	ETravelFailure = 7,
	ETravelFailure = 8,
	ETravelFailure = 9,
	ETravelFailure = 10,
	ETravelFailure = 11,
	ETravelFailure = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	EScreenOrientation = 0,
	EScreenOrientation = 1,
	EScreenOrientation = 2,
	EScreenOrientation = 3,
	EScreenOrientation = 4,
	EScreenOrientation = 5,
	EScreenOrientation = 6,
	EScreenOrientation = 7
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	EApplicationState = 0,
	EApplicationState = 1,
	EApplicationState = 2,
	EApplicationState = 3,
	EApplicationState = 4
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
	EDrawDebugTrace = 0,
	EDrawDebugTrace = 1,
	EDrawDebugTrace = 2,
	EDrawDebugTrace = 3,
	EDrawDebugTrace = 4
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
	EMoveComponentAction = 0,
	EMoveComponentAction = 1,
	EMoveComponentAction = 2,
	EMoveComponentAction = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	EQuitPreference = 0,
	EQuitPreference = 1,
	EQuitPreference = 2
};

// Enum Engine.EMKReplaySampling
enum class EMKReplaySampling : uint8 {
	EMKReplaySampling = 0,
	EMKReplaySampling = 1,
	EMKReplaySampling = 2,
	EMKReplaySampling = 3,
	EMKReplaySampling = 4,
	EMKReplaySampling = 5
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
	EAttachLocation = 0,
	EAttachLocation = 1,
	EAttachLocation = 2,
	EAttachLocation = 3,
	EAttachLocation = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	EAttachmentRule = 0,
	EAttachmentRule = 1,
	EAttachmentRule = 2,
	EAttachmentRule = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	EDetachmentRule = 0,
	EDetachmentRule = 1,
	EDetachmentRule = 2
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
	EAutoReceiveInput = 0,
	EAutoReceiveInput = 1,
	EAutoReceiveInput = 2,
	EAutoReceiveInput = 3,
	EAutoReceiveInput = 4,
	EAutoReceiveInput = 5,
	EAutoReceiveInput = 6,
	EAutoReceiveInput = 7,
	EAutoReceiveInput = 8,
	EAutoReceiveInput = 9
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	ESpawnActorCollisionHandlingMethod = 0,
	ESpawnActorCollisionHandlingMethod = 1,
	ESpawnActorCollisionHandlingMethod = 2,
	ESpawnActorCollisionHandlingMethod = 3,
	ESpawnActorCollisionHandlingMethod = 4,
	ESpawnActorCollisionHandlingMethod = 5
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 {
	ERotatorQuantization = 0,
	ERotatorQuantization = 1,
	ERotatorQuantization = 2
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	EVectorQuantization = 0,
	EVectorQuantization = 1,
	EVectorQuantization = 2,
	EVectorQuantization = 3,
	EVectorQuantization = 4
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	EActorUpdateOverlapsMethod = 0,
	EActorUpdateOverlapsMethod = 1,
	EActorUpdateOverlapsMethod = 2,
	EActorUpdateOverlapsMethod = 3,
	EActorUpdateOverlapsMethod = 4
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	ECameraAnimPlaySpace = 0,
	ECameraAnimPlaySpace = 1,
	ECameraAnimPlaySpace = 2,
	ECameraAnimPlaySpace = 3
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
	EControllerAnalogStick = 0,
	EControllerAnalogStick = 1,
	EControllerAnalogStick = 2
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	EDynamicForceFeedbackAction = 0,
	EDynamicForceFeedbackAction = 1,
	EDynamicForceFeedbackAction = 2,
	EDynamicForceFeedbackAction = 3
};

// Enum Engine.ECameraType
enum class ECameraType : uint8 {
	ECameraType = 0,
	ECameraType = 1,
	ECameraType = 2
};

// Enum Engine.EReplayViewMode
enum class EReplayViewMode : uint8 {
	EReplayViewMode = 0,
	EReplayViewMode = 1,
	EReplayViewMode = 2,
	EReplayViewMode = 3
};

// Enum Engine.EFractureSoundType
enum class EFractureSoundType : uint8 {
	EFractureSoundType = 0,
	EFractureSoundType = 1,
	EFractureSoundType = 2,
	EFractureSoundType = 3,
	EFractureSoundType = 4,
	EFractureSoundType = 5,
	EFractureSoundType = 6
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	EMouseLockMode = 0,
	EMouseLockMode = 1,
	EMouseLockMode = 2,
	EMouseLockMode = 3,
	EMouseLockMode = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	EWindowTitleBarMode = 0,
	EWindowTitleBarMode = 1,
	EWindowTitleBarMode = 2
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
	EComponentMobility = 0,
	EComponentMobility = 1,
	EComponentMobility = 2,
	EComponentMobility = 3
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
	EAutoPossessA = 0,
	EAutoPossessA = 1,
	EAutoPossessA = 2,
	EAutoPossessA = 3,
	EAutoPossessA = 4
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	ENetworkSmoothingMode = 0,
	ENetworkSmoothingMode = 1,
	ENetworkSmoothingMode = 2,
	ENetworkSmoothingMode = 3,
	ENetworkSmoothingMode = 4
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8 {
	EReflectedAndRefractedRayTracedShadows = 0,
	EReflectedAndRefractedRayTracedShadows = 1,
	EReflectedAndRefractedRayTracedShadows = 2,
	EReflectedAndRefractedRayTracedShadows = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 {
	ETranslucencyType = 0,
	ETranslucencyType = 1,
	ETranslucencyType = 2
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8 {
	EReflectionsType = 0,
	EReflectionsType = 1,
	EReflectionsType = 2
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8 {
	ERayTracingGlobalIlluminationType = 0,
	ERayTracingGlobalIlluminationType = 1,
	ERayTracingGlobalIlluminationType = 2,
	ERayTracingGlobalIlluminationType = 3
};

// Enum Engine.EFilmicTonemapperType
enum class EFilmicTonemapperType : uint8 {
	EFilmicTonemapperType = 0,
	EFilmicTonemapperType = 1,
	EFilmicTonemapperType = 2,
	EFilmicTonemapperType = 3
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
	EFastArraySerializerDeltaFlags = 0,
	EFastArraySerializerDeltaFlags = 1,
	EFastArraySerializerDeltaFlags = 2,
	EFastArraySerializerDeltaFlags = 4,
	EFastArraySerializerDeltaFlags = 5
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
	RCTWM_WeightedArriv = 1,
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
	ECollisionEnabled = 0,
	ECollisionEnabled = 1,
	ECollisionEnabled = 2,
	ECollisionEnabled = 3,
	ECollisionEnabled = 4
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Enum Engine.EWalkableSlopeBehav1
enum class EWalkableSlopeBehav : uint8 {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	EDOFMode = 0,
	EDOFMode = 1,
	EDOFMode = 2,
	EDOFMode = 3,
	EDOFMode = 4,
	EDOFMode = 5,
	EDOFMode = 6,
	EDOFMode = 7
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 {
	ERendererStencilMask = 0,
	ERendererStencilMask_256 = 1,
	ERendererStencilMask_2 = 2,
	ERendererStencilMask_3 = 3,
	ERendererStencilMask_5 = 4,
	ERendererStencilMask_9 = 5,
	ERendererStencilMask_17 = 6,
	ERendererStencilMask_33 = 7,
	ERendererStencilMask_65 = 8,
	ERendererStencilMask_129 = 9,
	ERendererStencilMask = 10
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	ESleepFamily = 0,
	ESleepFamily = 1,
	ESleepFamily = 2,
	ESleepFamily = 3
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8 {
	ERuntimeVirtualTextureMainPassType = 0,
	ERuntimeVirtualTextureMainPassType = 1,
	ERuntimeVirtualTextureMainPassType = 2,
	ERuntimeVirtualTextureMainPassType = 3
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
	EHasCustomNavigableGeometry = 0,
	EHasCustomNavigableGeometry = 1,
	EHasCustomNavigableGeometry = 2,
	EHasCustomNavigableGeometry = 3,
	EHasCustomNavigableGeometry = 4
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	ELightmapType = 0,
	ELightmapType = 1,
	ELightmapType = 2,
	ELightmapType = 3
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
	EAlphaBlendOption = 0,
	EAlphaBlendOption = 1,
	EAlphaBlendOption = 2,
	EAlphaBlendOption = 3,
	EAlphaBlendOption = 4,
	EAlphaBlendOption = 5,
	EAlphaBlendOption = 6,
	EAlphaBlendOption = 7,
	EAlphaBlendOption = 8,
	EAlphaBlendOption = 9,
	EAlphaBlendOption = 10,
	EAlphaBlendOption = 11,
	EAlphaBlendOption = 12,
	EAlphaBlendOption = 13,
	EAlphaBlendOption = 14,
	EAlphaBlendOption = 15
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	EAnimGroupRole = 0,
	EAnimGroupRole = 1,
	EAnimGroupRole = 2,
	EAnimGroupRole = 3,
	EAnimGroupRole = 4,
	EAnimGroupRole = 5
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
	EPreviewAnimationBlueprintApplicationMethod = 0,
	EPreviewAnimationBlueprintApplicationMethod = 1,
	EPreviewAnimationBlueprintApplicationMethod = 2
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
	ERawCurveTrackTypes = 0,
	ERawCurveTrackTypes = 1,
	ERawCurveTrackTypes = 2,
	ERawCurveTrackTypes = 3
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
	ERootMotionMode = 0,
	ERootMotionMode = 1,
	ERootMotionMode = 2,
	ERootMotionMode = 3,
	ERootMotionMode = 4
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	ERootMotionRootLock = 0,
	ERootMotionRootLock = 1,
	ERootMotionRootLock = 2,
	ERootMotionRootLock = 3
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	EMontagePlayReturnType = 0,
	EMontagePlayReturnType = 1,
	EMontagePlayReturnType = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	EDrawDebugItemType = 0,
	EDrawDebugItemType = 1,
	EDrawDebugItemType = 2,
	EDrawDebugItemType = 3,
	EDrawDebugItemType = 4,
	EDrawDebugItemType = 5
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	EAnimLinkMethod = 0,
	EAnimLinkMethod = 1,
	EAnimLinkMethod = 2,
	EAnimLinkMethod = 3
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	EMontageSubStepResult = 0,
	EMontageSubStepResult = 1,
	EMontageSubStepResult = 2,
	EMontageSubStepResult = 3,
	EMontageSubStepResult = 4
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	EAnimNotifyEventType = 0,
	EAnimNotifyEventType = 1,
	EAnimNotifyEventType = 2
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	EInertializationSpace = 0,
	EInertializationSpace = 1,
	EInertializationSpace = 2,
	EInertializationSpace = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	EInertializationBoneState = 0,
	EInertializationBoneState = 1,
	EInertializationBoneState = 2,
	EInertializationBoneState = 3
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	EInertializationState = 0,
	EInertializationState = 1,
	EInertializationState = 2,
	EInertializationState = 3
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EEvaluatorMode = 0,
	EEvaluatorMode = 1,
	EEvaluatorMode = 2,
	EEvaluatorMode = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EEvaluatorDataSource = 0,
	EEvaluatorDataSource = 1,
	EEvaluatorDataSource = 2
};

// Enum Engine.ECopyType
enum class ECopyType : uint8 {
	ECopyType = 0,
	ECopyType = 1,
	ECopyType = 2,
	ECopyType = 3,
	ECopyType = 4,
	ECopyType = 5
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	EPostCopyOperation = 0,
	EPostCopyOperation = 1,
	EPostCopyOperation = 2
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	EPinHidingMode = 0,
	EPinHidingMode = 1,
	EPinHidingMode = 2,
	EPinHidingMode = 3,
	EPinHidingMode = 4
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	AnimPhysCollisionType = 0,
	AnimPhysCollisionType = 1,
	AnimPhysCollisionType = 2,
	AnimPhysCollisionType = 3,
	AnimPhysCollisionType = 4
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AnimPhysTwistAxis = 0,
	AnimPhysTwistAxis = 1,
	AnimPhysTwistAxis = 2,
	AnimPhysTwistAxis = 3
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
	ETransitionLogicType = 0,
	ETransitionLogicType = 1,
	ETransitionLogicType = 2,
	ETransitionLogicType = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	ETransitionBlendMode = 0,
	ETransitionBlendMode = 1,
	ETransitionBlendMode = 2
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 {
	EComponentType = 0,
	EComponentType = 1,
	EComponentType = 2,
	EComponentType = 3,
	EComponentType = 4,
	EComponentType = 5,
	EComponentType = 6,
	EComponentType = 7,
	EComponentType = 8,
	EComponentType = 9,
	EComponentType = 10,
	EComponentType = 11
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	EAxisOption = 0,
	EAxisOption = 1,
	EAxisOption = 2,
	EAxisOption = 3,
	EAxisOption = 4,
	EAxisOption = 5,
	EAxisOption = 6,
	EAxisOption = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	EAnimInterpolationType = 0,
	EAnimInterpolationType = 1,
	EAnimInterpolationType = 2
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	ECurveBlendOption = 0,
	ECurveBlendOption = 1,
	ECurveBlendOption = 2,
	ECurveBlendOption = 3,
	ECurveBlendOption = 4,
	ECurveBlendOption = 5,
	ECurveBlendOption = 6,
	ECurveBlendOption = 7
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
	ENotifyFilterType = 0,
	ENotifyFilterType = 1,
	ENotifyFilterType = 2
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	EMontageNotifyTickType = 0,
	EMontageNotifyTickType = 1,
	EMontageNotifyTickType = 2
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
	EPrimaryAssetCookRule = 0,
	EPrimaryAssetCookRule = 1,
	EPrimaryAssetCookRule = 2,
	EPrimaryAssetCookRule = 3,
	EPrimaryAssetCookRule = 4,
	EPrimaryAssetCookRule = 5
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8 {
	ENaturalSoundFalloffMode = 0,
	ENaturalSoundFalloffMode = 1,
	ENaturalSoundFalloffMode = 2,
	ENaturalSoundFalloffMode = 3
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	EAttenuationShape = 0,
	EAttenuationShape = 1,
	EAttenuationShape = 2,
	EAttenuationShape = 3,
	EAttenuationShape = 4
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	EAttenuationDistanceModel = 0,
	EAttenuationDistanceModel = 1,
	EAttenuationDistanceModel = 2,
	EAttenuationDistanceModel = 3,
	EAttenuationDistanceModel = 4,
	EAttenuationDistanceModel = 5,
	EAttenuationDistanceModel = 6
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 {
	EAudioFaderCurve = 0,
	EAudioFaderCurve = 1,
	EAudioFaderCurve = 2,
	EAudioFaderCurve = 3,
	EAudioFaderCurve = 4,
	EAudioFaderCurve = 5
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 {
	EAudioComponentPlayState = 0,
	EAudioComponentPlayState = 1,
	EAudioComponentPlayState = 2,
	EAudioComponentPlayState = 3,
	EAudioComponentPlayState = 4,
	EAudioComponentPlayState = 5,
	EAudioComponentPlayState = 6
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	EAudioOutputTarget = 0,
	EAudioOutputTarget = 1,
	EAudioOutputTarget = 2,
	EAudioOutputTarget = 3
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 {
	EMonoChannelUpmixMethod = 0,
	EMonoChannelUpmixMethod = 1,
	EMonoChannelUpmixMethod = 2,
	EMonoChannelUpmixMethod = 3
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 {
	EPanningMethod = 0,
	EPanningMethod = 1,
	EPanningMethod = 2
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : int32 {
	EVoiceSampleRate = 16000,
	EVoiceSampleRate = 24000,
	EVoiceSampleRate = 24001
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
	ENotifyTriggerMode = 0,
	ENotifyTriggerMode = 1,
	ENotifyTriggerMode = 2,
	ENotifyTriggerMode = 3
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
	EBlueprintNativizationFlag = 0,
	EBlueprintNativizationFlag = 1,
	EBlueprintNativizationFlag = 2,
	EBlueprintNativizationFlag = 3
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	EBlueprintCompileMode = 0,
	EBlueprintCompileMode = 1,
	EBlueprintCompileMode = 2,
	EBlueprintCompileMode = 3
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
	EBodyCollisionResponse = 0,
	EBodyCollisionResponse = 1,
	EBodyCollisionResponse = 2
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
	EOscillatorWaveform = 0,
	EOscillatorWaveform = 1,
	EOscillatorWaveform = 2
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8 {
	ECameraShakeAttenuation = 0,
	ECameraShakeAttenuation = 1,
	ECameraShakeAttenuation = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	ECameraAlphaBlendMode = 0,
	ECameraAlphaBlendMode = 1,
	ECameraAlphaBlendMode = 2
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	ECameraProjectionMode = 0,
	ECameraProjectionMode = 1,
	ECameraProjectionMode = 2
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
	EAngularDriveMode = 0,
	EAngularDriveMode = 1,
	EAngularDriveMode = 2
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
	ECurveTableMode = 0,
	ECurveTableMode = 1,
	ECurveTableMode = 2,
	ECurveTableMode = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	EEvaluateCurveTableResult = 0,
	EEvaluateCurveTableResult = 1,
	EEvaluateCurveTableResult = 2
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	EGrammaticalNumber = 0,
	EGrammaticalNumber = 1,
	EGrammaticalNumber = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	EGrammaticalGender = 0,
	EGrammaticalGender = 1,
	EGrammaticalGender = 2,
	EGrammaticalGender = 3,
	EGrammaticalGender = 4
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
	ENodeEnabledState = 0,
	ENodeEnabledState = 1,
	ENodeEnabledState = 2,
	ENodeEnabledState = 3
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	ENodeAdvancedPins = 0,
	ENodeAdvancedPins = 1,
	ENodeAdvancedPins = 2,
	ENodeAdvancedPins = 3
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	ENodeTitleType = 0,
	ENodeTitleType = 1,
	ENodeTitleType = 2,
	ENodeTitleType = 3,
	ENodeTitleType = 4,
	ENodeTitleType = 5
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	EPinContainerType = 0,
	EPinContainerType = 1,
	EPinContainerType = 2,
	EPinContainerType = 3,
	EPinContainerType = 4
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
	ETransitionType = 0,
	ETransitionType = 1,
	ETransitionType = 2,
	ETransitionType = 3,
	ETransitionType = 4,
	ETransitionType = 5,
	ETransitionType = 6,
	ETransitionType = 7
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
	EDemoPlayFailure = 0,
	EDemoPlayFailure = 1,
	EDemoPlayFailure = 2,
	EDemoPlayFailure = 3,
	EDemoPlayFailure = 4,
	EDemoPlayFailure = 5,
	EDemoPlayFailure = 6,
	EDemoPlayFailure = 7,
	EDemoPlayFailure = 8,
	EDemoPlayFailure = 9
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	ENetworkLagState = 0,
	ENetworkLagState = 1,
	ENetworkLagState = 2
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	EMouseCaptureMode = 0,
	EMouseCaptureMode = 1,
	EMouseCaptureMode = 2,
	EMouseCaptureMode = 3,
	EMouseCaptureMode = 4,
	EMouseCaptureMode = 5
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 {
	ECustomTimeStepSynchronizationState = 0,
	ECustomTimeStepSynchronizationState = 1,
	ECustomTimeStepSynchronizationState = 2,
	ECustomTimeStepSynchronizationState = 3,
	ECustomTimeStepSynchronizationState = 4
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	EMeshBufferAccess = 0,
	EMeshBufferAccess = 1,
	EMeshBufferAccess = 2
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 {
	EConstraintFrame = 0,
	EConstraintFrame = 1,
	EConstraintFrame = 2
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
	EComponentSocketType = 0,
	EComponentSocketType = 1,
	EComponentSocketType = 2,
	EComponentSocketType = 3
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8 {
	EPhysicalMaterialMaskColor = 0,
	EPhysicalMaterialMaskColor = 1,
	EPhysicalMaterialMaskColor = 2,
	EPhysicalMaterialMaskColor = 3,
	EPhysicalMaterialMaskColor = 4,
	EPhysicalMaterialMaskColor = 5,
	EPhysicalMaterialMaskColor = 6,
	EPhysicalMaterialMaskColor = 7,
	EPhysicalMaterialMaskColor = 8
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	EUpdateRateShiftBucket = 0,
	EUpdateRateShiftBucket = 1,
	EUpdateRateShiftBucket = 2,
	EUpdateRateShiftBucket = 3,
	EUpdateRateShiftBucket = 4,
	EUpdateRateShiftBucket = 5,
	EUpdateRateShiftBucket = 6,
	EUpdateRateShiftBucket = 7
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
	SAMPLERTYPE_DistanceFieldFo = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearCo = 15,
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
	EParticleCollisionMode = 0,
	EParticleCollisionMode = 1,
	EParticleCollisionMode = 2
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
	EGBufferFormat = 0,
	EGBufferFormat = 1,
	EGBufferFormat = 3,
	EGBufferFormat = 5,
	EGBufferFormat = 6
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
	ETranslucentSortPolicy = 0,
	ETranslucentSortPolicy = 1,
	ETranslucentSortPolicy = 2,
	ETranslucentSortPolicy = 3
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
	EFontCacheType = 0,
	EFontCacheType = 1,
	EFontCacheType = 2
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
	ESuggestProjVelocityTraceOption = 0,
	ESuggestProjVelocityTraceOption = 1,
	ESuggestProjVelocityTraceOption = 2,
	ESuggestProjVelocityTraceOption = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	EWindowMode = 0,
	EWindowMode = 1,
	EWindowMode = 2,
	EWindowMode = 3
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
	EImportanceWeight = 0,
	EImportanceWeight = 1,
	EImportanceWeight = 2,
	EImportanceWeight = 3,
	EImportanceWeight = 4,
	EImportanceWeight = 5
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	EAnimAlphaInputType = 0,
	EAnimAlphaInputType = 1,
	EAnimAlphaInputType = 2,
	EAnimAlphaInputType = 3
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
	ESlateGesture = 0,
	ESlateGesture = 1,
	ESlateGesture = 2,
	ESlateGesture = 3,
	ESlateGesture = 4,
	ESlateGesture = 5,
	ESlateGesture = 6
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 {
	EMatrixColumns = 0,
	EMatrixColumns = 1,
	EMatrixColumns = 2,
	EMatrixColumns = 3,
	EMatrixColumns = 4
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	ELerpInterpolationMode = 0,
	ELerpInterpolationMode = 1,
	ELerpInterpolationMode = 2,
	ELerpInterpolationMode = 3
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	EEasingFunc = 0,
	EEasingFunc = 1,
	EEasingFunc = 2,
	EEasingFunc = 3,
	EEasingFunc = 4,
	EEasingFunc = 5,
	EEasingFunc = 6,
	EEasingFunc = 7,
	EEasingFunc = 8,
	EEasingFunc = 9,
	EEasingFunc = 10,
	EEasingFunc = 11,
	EEasingFunc = 12,
	EEasingFunc = 13,
	EEasingFunc = 14
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
	DBM_DBuffer_Emissiv = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_Emissiv = 13,
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
	EMaterialAttributeBlend = 0,
	EMaterialAttributeBlend = 1,
	EMaterialAttributeBlend = 2,
	EMaterialAttributeBlend = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 {
	EChannelMaskParameterColor = 0,
	EChannelMaskParameterColor = 1,
	EChannelMaskParameterColor = 2,
	EChannelMaskParameterColor = 3,
	EChannelMaskParameterColor = 4
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
	EMaterialSceneAttributeInputMode = 0,
	EMaterialSceneAttributeInputMode = 1,
	EMaterialSceneAttributeInputMode = 2
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

// Enum Engine.EMaterialVectorCoordTransfo
enum class EMaterialVectorCoordTransfo : uint8 {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Enum Engine.EMaterialVectorCoordTransfo
enum class EMaterialVectorCoordTransfo : uint8 {
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
	EMaterialFunctionUsage = 0,
	EMaterialFunctionUsage = 1,
	EMaterialFunctionUsage = 2,
	EMaterialFunctionUsage = 3
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
	Globd = 2,
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
	EMeshInstancingReplacementMethod = 0,
	EMeshInstancingReplacementMethod = 1,
	EMeshInstancingReplacementMethod = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	EUVOutput = 0,
	EUVOutput = 1,
	EUVOutput = 2
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	EMeshMergeType = 0,
	EMeshMergeType = 1,
	EMeshMergeType = 2
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	EMeshLODSelectionType = 0,
	EMeshLODSelectionType = 1,
	EMeshLODSelectionType = 2,
	EMeshLODSelectionType = 3,
	EMeshLODSelectionType = 4
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 {
	EProxyNormalComputationMethod = 0,
	EProxyNormalComputationMethod = 1,
	EProxyNormalComputationMethod = 2,
	EProxyNormalComputationMethod = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	ELandscapeCullingPrecision = 0,
	ELandscapeCullingPrecision = 1,
	ELandscapeCullingPrecision = 2,
	ELandscapeCullingPrecision = 3
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	EStaticMeshReductionTerimationCriterion = 0,
	EStaticMeshReductionTerimationCriterion = 1,
	EStaticMeshReductionTerimationCriterion = 2,
	EStaticMeshReductionTerimationCriterion = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	EMeshFeatureImportance = 0,
	EMeshFeatureImportance = 1,
	EMeshFeatureImportance = 2,
	EMeshFeatureImportance = 3,
	EMeshFeatureImportance = 4,
	EMeshFeatureImportance = 5,
	EMeshFeatureImportance = 6
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	EVertexPaintAxis = 0,
	EVertexPaintAxis = 1,
	EVertexPaintAxis = 2,
	EVertexPaintAxis = 3
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
	EKillType = 0,
	EKillType = 1,
	EKillType = 2,
	EKillType = 3,
	EKillType = 4
};

// Enum Engine.EReplayFailure
enum class EReplayFailure : uint8 {
	EReplayFailure = 0,
	EReplayFailure = 1,
	EReplayFailure = 2,
	EReplayFailure = 3,
	EReplayFailure = 4,
	EReplayFailure = 5,
	EReplayFailure = 6,
	EReplayFailure = 7,
	EReplayFailure = 8,
	EReplayFailure = 9,
	EReplayFailure = 10,
	EReplayFailure = 11,
	EReplayFailure = 12,
	EReplayFailure = 13,
	EReplayFailure = 14,
	EReplayFailure = 15,
	EReplayFailure = 16,
	EReplayFailure = 17,
	EReplayFailure = 18,
	EReplayFailure = 19,
	EReplayFailure = 20,
	EReplayFailure = 21,
	EReplayFailure = 22,
	EReplayFailure = 23,
	EReplayFailure = 24,
	EReplayFailure = 25,
	EReplayFailure = 26,
	EReplayFailure = 27,
	EReplayFailure = 28,
	EReplayFailure = 29,
	EReplayFailure = 30,
	EReplayFailure = 31,
	EReplayFailure = 32,
	EReplayFailure = 33,
	EReplayFailure = 34,
	EReplayFailure = 35,
	EReplayFailure = 36,
	EReplayFailure = 37,
	EReplayFailure = 38,
	EReplayFailure = 39,
	EReplayFailure = 40,
	EReplayFailure = 41,
	EReplayFailure = 42,
	EReplayFailure = 43,
	EReplayFailure = 44,
	EReplayFailure = 45,
	EReplayFailure = 46,
	EReplayFailure = 47,
	EReplayFailure = 48,
	EReplayFailure = 49,
	EReplayFailure = 50,
	EReplayFailure = 51,
	EReplayFailure = 52,
	EReplayFailure = 53,
	EReplayFailure = 54,
	EReplayFailure = 55,
	EReplayFailure = 56,
	EReplayFailure = 57,
	EReplayFailure = 58,
	EReplayFailure = 59,
	EReplayFailure = 60,
	EReplayFailure = 61,
	EReplayFailure = 62,
	EReplayFailure = 63,
	EReplayFailure = 64,
	EReplayFailure = 65,
	EReplayFailure = 66,
	EReplayFailure = 67
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	FNavigationSystemRunMode = 0,
	FNavigationSystemRunMode = 1,
	FNavigationSystemRunMode = 2,
	FNavigationSystemRunMode = 3,
	FNavigationSystemRunMode = 4,
	FNavigationSystemRunMode = 5
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	ENavigationQueryResult = 0,
	ENavigationQueryResult = 1,
	ENavigationQueryResult = 2,
	ENavigationQueryResult = 3,
	ENavigationQueryResult = 4
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	ENavPathEvent = 0,
	ENavPathEvent = 1,
	ENavPathEvent = 2,
	ENavPathEvent = 3,
	ENavPathEvent = 4,
	ENavPathEvent = 5,
	ENavPathEvent = 6,
	ENavPathEvent = 7,
	ENavPathEvent = 8
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	ENavDataGatheringModeConfig = 0,
	ENavDataGatheringModeConfig = 1,
	ENavDataGatheringModeConfig = 2,
	ENavDataGatheringModeConfig = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	ENavDataGatheringMode = 0,
	ENavDataGatheringMode = 1,
	ENavDataGatheringMode = 2,
	ENavDataGatheringMode = 3
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	ENavigationOptionFlag = 0,
	ENavigationOptionFlag = 1,
	ENavigationOptionFlag = 2,
	ENavigationOptionFlag = 3
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	ENavLinkDirection = 0,
	ENavLinkDirection = 1,
	ENavLinkDirection = 2,
	ENavLinkDirection = 3
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
	EParticleSystemInsignificanceReaction = 0,
	EParticleSystemInsignificanceReaction = 1,
	EParticleSystemInsignificanceReaction = 2,
	EParticleSystemInsignificanceReaction = 3,
	EParticleSystemInsignificanceReaction = 4,
	EParticleSystemInsignificanceReaction = 5
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	EParticleSignificanceLevel = 0,
	EParticleSignificanceLevel = 1,
	EParticleSignificanceLevel = 2,
	EParticleSignificanceLevel = 3,
	EParticleSignificanceLevel = 4,
	EParticleSignificanceLevel = 5
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
	EParticleCollisionResponse = 0,
	EParticleCollisionResponse = 1,
	EParticleCollisionResponse = 2,
	EParticleCollisionResponse = 3
};

// Enum Engine.ELocationBoneSocketSelectio
enum class ELocationBoneSocketSelectio : uint8 {
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

// Enum Engine.EOrb
enum class EOrbd : uint8 {
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
	EParticleUVFlipMode = 0,
	EParticleUVFlipMode = 1,
	EParticleUVFlipMode = 2,
	EParticleUVFlipMode = 3,
	EParticleUVFlipMode = 4,
	EParticleUVFlipMode = 5,
	EParticleUVFlipMode = 6,
	EParticleUVFlipMode = 7,
	EParticleUVFlipMode = 8
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
	XAxisFacing_Negativ = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_Negativ = 4,
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
	ESettingsLockedAxis = 0,
	ESettingsLockedAxis = 1,
	ESettingsLockedAxis = 2,
	ESettingsLockedAxis = 3,
	ESettingsLockedAxis = 4,
	ESettingsLockedAxis = 5
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	ESettingsDO = 0,
	ESettingsDO = 1,
	ESettingsDO = 2,
	ESettingsDO = 3,
	ESettingsDO = 4
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	EFrictionCombineMode = 0,
	EFrictionCombineMode = 1,
	EFrictionCombineMode = 2,
	EFrictionCombineMode = 3
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 {
	EReflectionSourceType = 0,
	EReflectionSourceType = 1,
	EReflectionSourceType = 2
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 {
	EDefaultBackBufferPixelFormat = 0,
	EDefaultBackBufferPixelFormat = 1,
	EDefaultBackBufferPixelFormat = 2,
	EDefaultBackBufferPixelFormat = 3,
	EDefaultBackBufferPixelFormat = 4,
	EDefaultBackBufferPixelFormat = 5
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	EAutoExposureMethodU = 0,
	EAutoExposureMethodU = 1,
	EAutoExposureMethodU = 2,
	EAutoExposureMethodU = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 {
	EAlphaChannelMode = 0,
	EAlphaChannelMode = 1,
	EAlphaChannelMode = 2,
	EAlphaChannelMode = 3
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	EEarlyZPass = 0,
	EEarlyZPass = 1,
	EEarlyZPass = 2,
	EEarlyZPass = 3,
	EEarlyZPass = 4
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	ECustomDepthStencil = 0,
	ECustomDepthStencil = 1,
	ECustomDepthStencil = 2,
	ECustomDepthStencil = 3,
	ECustomDepthStencil = 4
};

// Enum Engine.EMob
enum class EMobd : uint8 {
	EMob = 1,
	EMobd = 2,
	EMobd = 4,
	EMobd = 8,
	EMobd = 9
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	ECompositingSampleCount = 1,
	ECompositingSampleCount = 2,
	ECompositingSampleCount = 4,
	ECompositingSampleCount = 8,
	ECompositingSampleCount = 9
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	EClearSceneOptions = 0,
	EClearSceneOptions = 1,
	EClearSceneOptions = 2,
	EClearSceneOptions = 3
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	EReporterLineStyle = 0,
	EReporterLineStyle = 1,
	EReporterLineStyle = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	ELegendPosition = 0,
	ELegendPosition = 1,
	ELegendPosition = 2
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	EGraphDataStyle = 0,
	EGraphDataStyle = 1,
	EGraphDataStyle = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	EGraphAxisStyle = 0,
	EGraphAxisStyle = 1,
	EGraphAxisStyle = 2,
	EGraphAxisStyle = 3
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

// Enum Engine.ERichCurveKeyTimeCompressio
enum class ERichCurveKeyTimeCompressio : uint8 {
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
	EConstraintTransform = 0,
	EConstraintTransform = 1,
	EConstraintTransform = 2
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	EControlConstraint = 0,
	EControlConstraint = 1,
	EControlConstraint = 2
};

// Enum Engine.ERootMotionFinishVelocityMo
enum class ERootMotionFinishVelocityMo : uint8 {
	ERootMotionFinishVelocityMo = 0,
	ERootMotionFinishVelocityMotion = 1,
	ERootMotionFinishVelocityMo = 2,
	ERootMotionFinishVelocityMotion = 3
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 {
	ERootMotionSourceSettingsFlags = 1,
	ERootMotionSourceSettingsFlags = 2,
	ERootMotionSourceSettingsFlags = 4,
	ERootMotionSourceSettingsFlags = 5
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	ERootMotionSourceStatusFlags = 1,
	ERootMotionSourceStatusFlags = 2,
	ERootMotionSourceStatusFlags = 4,
	ERootMotionSourceStatusFlags = 5
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	ERootMotionAccumulateMode = 0,
	ERootMotionAccumulateMode = 1,
	ERootMotionAccumulateMode = 2
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8 {
	ERuntimeVirtualTextureMaterialType = 0,
	ERuntimeVirtualTextureMaterialType = 1,
	ERuntimeVirtualTextureMaterialType = 2,
	ERuntimeVirtualTextureMaterialType = 3,
	ERuntimeVirtualTextureMaterialType = 4,
	ERuntimeVirtualTextureMaterialType = 5,
	ERuntimeVirtualTextureMaterialType = 6,
	ERuntimeVirtualTextureMaterialType = 7
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 {
	ELightUnits = 0,
	ELightUnits = 1,
	ELightUnits = 2,
	ELightUnits = 3
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
	ESceneCapturePrimitiveRenderMode = 0,
	ESceneCapturePrimitiveRenderMode = 1,
	ESceneCapturePrimitiveRenderMode = 2,
	ESceneCapturePrimitiveRenderMode = 3
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
	ESkinCacheDefaultBehavior = 0,
	ESkinCacheDefaultBehavior = 1,
	ESkinCacheDefaultBehavior = 2
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8 {
	ESkinCacheUsage = 0,
	ESkinCacheUsage = 255,
	ESkinCacheUsage = 1,
	ESkinCacheUsage = 256
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	EPhysicsTransformUpdateMode = 0,
	EPhysicsTransformUpdateMode = 1,
	EPhysicsTransformUpdateMode = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	EAnimationMode = 0,
	EAnimationMode = 1,
	EAnimationMode = 2,
	EAnimationMode = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	EKinematicBonesUpdateToPhysics = 0,
	EKinematicBonesUpdateToPhysics = 1,
	EKinematicBonesUpdateToPhysics = 2
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8 {
	EClothMassMode = 0,
	EClothMassMode = 1,
	EClothMassMode = 2,
	EClothMassMode = 3,
	EClothMassMode = 4
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	EAnimCurveType = 0,
	EAnimCurveType = 1,
	EAnimCurveType = 2,
	EAnimCurveType = 3,
	EAnimCurveType = 4
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8 {
	ESkeletalMeshSkinningImportVersions = 0,
	ESkeletalMeshSkinningImportVersions = 1,
	ESkeletalMeshSkinningImportVersions = 2,
	ESkeletalMeshSkinningImportVersions = 1,
	ESkeletalMeshSkinningImportVersions = 3
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8 {
	ESkeletalMeshGeoImportVersions = 0,
	ESkeletalMeshGeoImportVersions = 1,
	ESkeletalMeshGeoImportVersions = 2,
	ESkeletalMeshGeoImportVersions = 1,
	ESkeletalMeshGeoImportVersions = 3
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	EBoneFilterActionOption = 0,
	EBoneFilterActionOption = 1,
	EBoneFilterActionOption = 2,
	EBoneFilterActionOption = 3
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
	EBoneTranslationRetargetingMode = 0,
	EBoneTranslationRetargetingMode = 1,
	EBoneTranslationRetargetingMode = 2,
	EBoneTranslationRetargetingMode = 3,
	EBoneTranslationRetargetingMode = 4,
	EBoneTranslationRetargetingMode = 5
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	EBoneSpaces = 0,
	EBoneSpaces = 1,
	EBoneSpaces = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 {
	EVisibilityBasedAnimTickOption = 0,
	EVisibilityBasedAnimTickOption = 1,
	EVisibilityBasedAnimTickOption = 2,
	EVisibilityBasedAnimTickOption = 3,
	EVisibilityBasedAnimTickOption = 4
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
	ESkyAtmosphereTransformMode = 0,
	ESkyAtmosphereTransformMode = 1,
	ESkyAtmosphereTransformMode = 2,
	ESkyAtmosphereTransformMode = 3
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
	EPriorityAttenuationMethod = 0,
	EPriorityAttenuationMethod = 1,
	EPriorityAttenuationMethod = 2,
	EPriorityAttenuationMethod = 3
};

// Enum Engine.ESub
enum class ESubd : uint8 {
	ESub = 0,
	ESubd = 1,
	ESubd = 2,
	ESubd = 3
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 {
	EReverbSendMethod = 0,
	EReverbSendMethod = 1,
	EReverbSendMethod = 2,
	EReverbSendMethod = 3
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	EAirAbsorptionMethod = 0,
	EAirAbsorptionMethod = 1,
	EAirAbsorptionMethod = 2
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
	EVirtualizationMode = 0,
	EVirtualizationMode = 1,
	EVirtualizationMode = 2,
	EVirtualizationMode = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	EMaxConcurrentResolutionRule = 0,
	EMaxConcurrentResolutionRule = 1,
	EMaxConcurrentResolutionRule = 2,
	EMaxConcurrentResolutionRule = 3,
	EMaxConcurrentResolutionRule = 4,
	EMaxConcurrentResolutionRule = 5,
	EMaxConcurrentResolutionRule = 6,
	EMaxConcurrentResolutionRule = 7,
	EMaxConcurrentResolutionRule = 8
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
	ESourceBusChannels = 0,
	ESourceBusChannels = 1,
	ESourceBusChannels = 2
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 {
	ESourceBusSendLevelControlMethod = 0,
	ESourceBusSendLevelControlMethod = 1,
	ESourceBusSendLevelControlMethod = 2,
	ESourceBusSendLevelControlMethod = 3
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 {
	ESendLevelControlMethod = 0,
	ESendLevelControlMethod = 1,
	ESendLevelControlMethod = 2,
	ESendLevelControlMethod = 3
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 {
	EAudioRecordingExportType = 0,
	EAudioRecordingExportType = 1,
	EAudioRecordingExportType = 2
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 {
	ESoundWaveFFTSize_65 = 0,
	ESoundWaveFFTSize_257 = 1,
	ESoundWaveFFTSize_513 = 2,
	ESoundWaveFFTSize_1025 = 3,
	ESoundWaveFFTSize_2049 = 4,
	ESoundWaveFFTSize = 5
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
	ESoundWaveLoadingBehavior = 0,
	ESoundWaveLoadingBehavior = 1,
	ESoundWaveLoadingBehavior = 2,
	ESoundWaveLoadingBehavior = 3,
	ESoundWaveLoadingBehavior = 4,
	ESoundWaveLoadingBehavior = 255,
	ESoundWaveLoadingBehavior = 256
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	ESplineCoordinateSpace = 0,
	ESplineCoordinateSpace = 1,
	ESplineCoordinateSpace = 2
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	ESplinePointType = 0,
	ESplinePointType = 1,
	ESplinePointType = 2,
	ESplinePointType = 3,
	ESplinePointType = 4,
	ESplinePointType = 5
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	ESplineMeshAxis = 0,
	ESplineMeshAxis = 1,
	ESplineMeshAxis = 2,
	ESplineMeshAxis = 3
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

// Enum Engine.ESub
enum class ESubd : uint8 {
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

// Enum Engine.ETextureLossyCompressionAmo
enum class ETextureLossyCompressionAmo : uint8 {
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
	ETextureMipLoadOptions = 0,
	ETextureMipLoadOptions = 1,
	ETextureMipLoadOptions = 2,
	ETextureMipLoadOptions = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	ETextureSamplerFilter = 0,
	ETextureSamplerFilter = 1,
	ETextureSamplerFilter = 2,
	ETextureSamplerFilter = 3,
	ETextureSamplerFilter = 4,
	ETextureSamplerFilter = 5
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	ETexturePowerOfTwoSetting = 0,
	ETexturePowerOfTwoSetting = 1,
	ETexturePowerOfTwoSetting = 2,
	ETexturePowerOfTwoSetting = 3
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
	ETimecodeProviderSynchronizationState = 0,
	ETimecodeProviderSynchronizationState = 1,
	ETimecodeProviderSynchronizationState = 2,
	ETimecodeProviderSynchronizationState = 3,
	ETimecodeProviderSynchronizationState = 4
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	ETimelineDirection = 0,
	ETimelineDirection = 1,
	ETimelineDirection = 2
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	ETimeStretchCurveMapping = 0,
	ETimeStretchCurveMapping = 1,
	ETimeStretchCurveMapping = 2,
	ETimeStretchCurveMapping = 3
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
	EUIScalingRule = 0,
	EUIScalingRule = 1,
	EUIScalingRule = 2,
	EUIScalingRule = 3,
	EUIScalingRule = 4,
	EUIScalingRule = 5
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	ERenderFocusRule = 0,
	ERenderFocusRule = 1,
	ERenderFocusRule = 2,
	ERenderFocusRule = 3,
	ERenderFocusRule = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	EWindSourceType = 0,
	EWindSourceType = 1,
	EWindSourceType = 2
};

// Enum Engine.ELevelScanRule
enum class ELevelScanRule : uint8 {
	ELevelScanRule = 0,
	ELevelScanRule = 1,
	ELevelScanRule = 2,
	ELevelScanRule = 3,
	ELevelScanRule = 4,
	ELevelScanRule = 5,
	ELevelScanRule = 6,
	ELevelScanRule = 7,
	ELevelScanRule = 8,
	ELevelScanRule = 9
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 {
	EPSCPoolMethod = 0,
	EPSCPoolMethod = 1,
	EPSCPoolMethod = 2,
	EPSCPoolMethod = 3,
	EPSCPoolMethod = 4,
	EPSCPoolMethod = 5
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

// Class Engine.ActorComponent
struct UActorComponent : Object {
	Unknown PrimaryComponentTick; //  0x30 Size(30)
	Unknown ComponentTags; //  0x60 Size(10)
	Unknown AssetUserData; //  0x70 Size(10)
	int32_t UCSSerializationIndex; //  0x84 Size(4)
	char bNetAddressable; //  0x88 Size(1)
	char bReplicates; //  0x88 Size(1)
	char bAutoActivate; //  0x89 Size(1)
	char bIsActive; //  0x8a Size(1)
	char bEditableWhenInherited; //  0x8a Size(1)
	char bCanEverAffectNavigation; //  0x8a Size(1)
	char bIsEditorOnly; //  0x8a Size(1)
	Unknown CreationMethod; //  0x8c Size(1)
	struct FMulticastSparseDelegate OnComponentActivated; //  0x8d Size(1)
	struct FMulticastSparseDelegate OnComponentDeactivated; //  0x8e Size(1)
	Unknown UCSModifiedProperties; //  0x90 Size(10)

	void ToggleActive(); // Function Engine.ActorComponent.ToggleActive(Native|Public|BlueprintCallable) // <Game+0x337f170>
};

// Class Engine.SceneComponent
struct USceneComponent : UActorComponent {
	Unknown PhysicsVolume; //  0x144 Size(8)
	Unknown AttachParent; //  0x1d0 Size(8)
	struct FName AttachSocketName; //  0x1dc Size(8)
	Unknown AttachChildren; //  0xb8 Size(10)
	Unknown ClientAttachedChildren; //  0x190 Size(10)
	Unknown RelativeLocation; //  0x224 Size(c)
	Unknown RelativeRotation; //  0x1b4 Size(c)
	Unknown RelativeScale3D; //  0x1c4 Size(c)
	Unknown ComponentVelocity; //  0x164 Size(c)
	char bComponentToWorldUpdated; //  0x140 Size(1)
	char bAbsoluteLocation; //  0x220 Size(1)
	char bAbsoluteRotation; //  0x1d8 Size(1)
	char bAbsoluteScale; //  0x188 Size(1)
	char bVisible; //  0xc8 Size(1)
	char bShouldBeAttached; //  0x220 Size(1)
	char bShouldSnapLocationWhenAttached; //  0x1b0 Size(1)
	char bShouldSnapRotationWhenAttached; //  0x188 Size(1)
	char bShouldUpdatePhysicsVolume; //  0x1a0 Size(1)
	char bHiddenInGame; //  0x220 Size(1)
	char bBoundsChangeTriggersStreamingDataRebuild; //  0xc8 Size(1)
	char bUseAttachParentBound; //  0x1d8 Size(1)
	Unknown Mobility; //  0x221 Size(1)
	Unknown DetailMode; //  0x160 Size(1)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; //  0xb0 Size(1)

	void ToggleVisibility(char bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility(Final|Native|Public|BlueprintCallable) // <Game+0x3ddb810>
};

// Class Engine.MKActorEx
struct UMKActorEx : Object {
	Unknown ReplaySamplable; //  0x28 Size(1)
	Unknown ReplaySampleClass; //  0x30 Size(8)
	float ReplaySamplingFrequency; //  0x38 Size(4)
	uint32_t ClientReplaySamplingGUID; //  0x3c Size(4)
	char bReplayLevelAttached; //  0x44 Size(1)
	Unknown ReplaySamplesForPlayback; //  0x68 Size(10)
	Unknown SelfActor; //  0x88 Size(8)

	void OnTickReplaySampleRecord(Unknown DemoNetDriver, float MinRecordHz, float MaxRecordHz, char bSaveCheckpoint); // Function Engine.MKActorEx.OnTickReplaySampleRecord(Final|Native|Private) // <Game+0x3d88db0>
};

// Class Engine.Actor
struct UActor : UMKActorEx {
	Unknown PrimaryActorTick; //  0x1d8 Size(30)
	char bNetTemporary; //  0x284 Size(1)
	char bNetStartup; //  0x248 Size(1)
	char bOnlyRelevantToOwner; //  0x1c4 Size(1)
	char bAlwaysRelevant; //  0xa1 Size(1)
	char bReplicateMovement; //  0x260 Size(1)
	char bHidden; //  0x222 Size(1)
	char bTearOff; //  0x284 Size(1)
	char bExchangedRoles; //  0x120 Size(1)
	char bNetLoadOnClient; //  0x138 Size(1)
	char bNetUseOwnerRelevancy; //  0xe8 Size(1)
	char bRelevantForNetworkReplays; //  0x170 Size(1)
	char bRelevantForLevelBounds; //  0x138 Size(1)
	char bReplayRewindable; //  0x9f Size(1)
	char bAllowTickBeforeBeginPlay; //  0x1c4 Size(1)
	char bAutoDestroyWhenFinished; //  0x1c4 Size(1)
	char bCanBeDamaged; //  0x1a0 Size(1)
	char bBlockInput; //  0x303 Size(1)
	char bCollideWhenPlacing; //  0x301 Size(1)
	char bFindCameraComponentWhenViewTarget; //  0x251 Size(1)
	char bGenerateOverlapEventsDuringLevelStreaming; //  0x30e Size(1)
	char bIgnoresOriginShifting; //  0x155 Size(1)
	char bEnableAutoLODGeneration; //  0x251 Size(1)
	char bIsEditorOnlyActor; //  0x120 Size(1)
	char bActorSeamlessTraveled; //  0xea Size(1)
	char bReplicates; //  0x9d Size(1)
	char bCanBeInCluster; //  0x90 Size(1)
	char bAllowReceiveTickEv; //  0x198 Size(1)
	char bActorEnableCollision; //  0x1b8 Size(1)
	char bActorIsBeingDestroyed; //  0x30e Size(1)
	Unknown UpdateOverlapsMethodDuringLevelStreaming; //  0x154 Size(1)
	Unknown DefaultUpdateOverlapsMethodDuringLevelStreaming; //  0xa3 Size(1)
	Unknown RemoteRole; //  0x279 Size(1)
	Unknown ReplicatedMovement; //  0xec Size(34)
	float InitialLifeSpan; //  0x2e0 Size(4)
	float CustomTimeDilation; //  0x308 Size(4)
	Unknown AttachmentReplication; //  0xa8 Size(40)
	Unknown Owner; //  0x178 Size(8)
	struct FName NetDriverName; //  0x94 Size(8)
	Unknown Role; //  0x9e Size(1)
	Unknown NetDormancy; //  0x238 Size(1)
	Unknown SpawnCollisionHandlingMetho; //  0x304 Size(1)
	Unknown AutoReceiveInput; //  0x302 Size(1)
	int32_t InputPriority; //  0x150 Size(4)
	Unknown InputComponent; //  0x2f8 Size(8)
	float NetCullDistanceSquared; //  0x280 Size(4)
	int32_t NetTag; //  0x24c Size(4)
	float NetUpdateFrequency; //  0x27c Size(4)
	float MinNetUpdateFrequency; //  0x288 Size(4)
	float NetPriority; //  0x21c Size(4)
	Unknown Instigator; //  0x258 Size(8)
	Unknown Children; //  0x268 Size(10)
	Unknown RootComponent; //  0x158 Size(8)
	Unknown ControllingMatineeActors; //  0x208 Size(10)
	Unknown Layers; //  0x188 Size(10)
	Unknown ParentComponent; //  0x1bc Size(8)
	char bEnableRerunConstructionScript; //  0x30c Size(1)
	Unknown Tags; //  0x140 Size(10)
	struct FMulticastSparseDelegate OnTakeAnyDamage; //  0x218 Size(1)
	struct FMulticastSparseDelegate OnTakePointDamage; //  0x27a Size(1)
	struct FMulticastSparseDelegate OnTakeRadialDamage; //  0x9c Size(1)
	struct FMulticastSparseDelegate OnActorBeginOverlap; //  0x27b Size(1)
	struct FMulticastSparseDelegate OnActorEndOverlap; //  0xa0 Size(1)
	struct FMulticastSparseDelegate OnBeginCursorOver; //  0x221 Size(1)
	struct FMulticastSparseDelegate OnEndCursorOver; //  0xe9 Size(1)
	struct FMulticastSparseDelegate OnClicked; //  0x278 Size(1)
	struct FMulticastSparseDelegate OnReleased; //  0x2e4 Size(1)
	struct FMulticastSparseDelegate OnInputTouchBegin; //  0x300 Size(1)
	struct FMulticastSparseDelegate OnInputTouchEnd; //  0x285 Size(1)
	struct FMulticastSparseDelegate OnInputTouchEnter; //  0xa2 Size(1)
	struct FMulticastSparseDelegate OnInputTouchLeave; //  0x250 Size(1)
	struct FMulticastSparseDelegate OnActorHit; //  0x180 Size(1)
	struct FMulticastSparseDelegate OnDestroyed; //  0x220 Size(1)
	struct FMulticastSparseDelegate OnEndPlay; //  0x30d Size(1)
	Unknown InstanceComponents; //  0x128 Size(10)
	Unknown BlueprintCreatedComponents; //  0x1a8 Size(10)
	Unknown LoadedObjects; //  0x1c8 Size(10)

	char WasRecentlyRendered(float Tolerance); // Function Engine.Actor.WasRecentlyRendered(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3c58a10>
};

// Class Engine.SkeletalMeshActor
struct ASkeletalMeshActor : UActor {
	char bShouldDoAnimNotifies; //  0x318 Size(1)
	char bWakeOnLevelStart; //  0x318 Size(1)
	Unknown SkeletalMeshComponent; //  0x320 Size(8)
	Unknown ReplicatedMesh; //  0x328 Size(8)
	Unknown ReplicatedPhysAsset; //  0x330 Size(8)
	Unknown ReplicatedMaterial0; //  0x338 Size(8)
	Unknown ReplicatedMaterial1; //  0x340 Size(8)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset(Native|Public) // <Game+0x1236d40>
};

// Class Engine.PrimitiveComponent
struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; //  0x240 Size(4)
	float LDMaxDrawDistance; //  0x244 Size(4)
	float CachedMaxDrawDistance; //  0x248 Size(4)
	Unknown DepthPriorityGroup; //  0x24c Size(1)
	Unknown ViewOwnerDepthPriorityGroup; //  0x24d Size(1)
	Unknown IndirectLightingCacheQuality; //  0x24e Size(1)
	Unknown LightmapType; //  0x24f Size(1)
	char bUseMaxLODAsImposter; //  0x250 Size(1)
	char bBatchImpostersAsInstances; //  0x250 Size(1)
	char bNeverDistanceCull; //  0x250 Size(1)
	char bAlwaysCreatePhysicsState; //  0x250 Size(1)
	char bGenerateOverlapEvents; //  0x251 Size(1)
	char bMultiBodyOverlap; //  0x251 Size(1)
	char bTraceComplexOnMove; //  0x251 Size(1)
	char bReturnMaterialOnMove; //  0x251 Size(1)
	char bUseViewOwnerDepthPriorityGroup; //  0x251 Size(1)
	char bAllowCullDistanceVolume; //  0x251 Size(1)
	char bHasMotionBlurVelocityMeshes; //  0x251 Size(1)
	char bVisibleInReflectionCaptures; //  0x251 Size(1)
	char bVisibleInRayTracing; //  0x252 Size(1)
	char bRenderInMainPass; //  0x252 Size(1)
	char bRenderInDepthPass; //  0x252 Size(1)
	char bReceivesDecals; //  0x252 Size(1)
	char bOwnerNoSee; //  0x252 Size(1)
	char bOnlyOwnerSee; //  0x252 Size(1)
	char bIgnoreNearClippingForOcclusion; //  0x252 Size(1)
	char bTreatAsBackgroundForOcclusion; //  0x252 Size(1)
	char bUseAsOccluder; //  0x253 Size(1)
	char bSelectable; //  0x253 Size(1)
	char bForceMipStreaming; //  0x253 Size(1)
	char bHasPerInstanceHitProxies; //  0x253 Size(1)
	char CastShadow; //  0x253 Size(1)
	char bAffectDynamicIndirectLighting; //  0x253 Size(1)
	char bAffectDistanceFieldLighting; //  0x253 Size(1)
	char bCastDynamicShadow; //  0x253 Size(1)
	char bCastStaticShadow; //  0x254 Size(1)
	char bCastDirectionalShadow; //  0x254 Size(1)
	char bCastVolumetricTranslucentShadow; //  0x254 Size(1)
	char bSelfShadowOnly; //  0x254 Size(1)
	char bCastFarShadow; //  0x254 Size(1)
	char bCastInsetShadow; //  0x254 Size(1)
	char bCastCinematicShadow; //  0x254 Size(1)
	char bCastHiddenShadow; //  0x254 Size(1)
	char bCastShadowAsTwoSided; //  0x255 Size(1)
	char bLightAsIfStatic; //  0x255 Size(1)
	char bLightAttachmentsAsGroup; //  0x255 Size(1)
	char bExcludeFromLightAttachmentGroup; //  0x255 Size(1)
	char bReceiveMobileCSMShadows; //  0x255 Size(1)
	char bSingleSampleShadowFromStationaryLights; //  0x255 Size(1)
	char bIgnoreRadialImpulse; //  0x255 Size(1)
	char bIgnoreRadialForce; //  0x255 Size(1)
	char bApplyImpulseOnDamage; //  0x256 Size(1)
	char bReplicatePhysicsToAutonomo; //  0x256 Size(1)
	char bFillCollisionUnderneathForNavmesh; //  0x256 Size(1)
	char AlwaysLoadOnClient; //  0x256 Size(1)
	char AlwaysLoadOnServer; //  0x256 Size(1)
	char bUseEditorCompositing; //  0x256 Size(1)
	char bRenderCustomDepth; //  0x256 Size(1)
	char bHasNoStreamableTextures; //  0x257 Size(1)
	Unknown bHasCustomNavigableGeometry; //  0x258 Size(1)
	Unknown CanCharacterStepUpOn; //  0x25a Size(1)
	Unknown LightingChannels; //  0x25b Size(1)
	Unknown CustomDepthStencilWriteMask; //  0x25c Size(1)
	int32_t CustomDepthStencilValue; //  0x260 Size(4)
	Unknown CustomPrimitiveData; //  0x268 Size(10)
	Unknown CustomPrimitiveDataInternal; //  0x278 Size(10)
	int32_t TranslucencySortPriority; //  0x288 Size(4)
	int32_t VisibilityId; //  0x28c Size(4)
	Unknown RuntimeVirtualTextures; //  0x290 Size(10)
	int8_t VirtualTextureLodBias; //  0x2a0 Size(1)
	int8_t VirtualTextureCullMips; //  0x2a1 Size(1)
	int8_t VirtualTextureMinCoverage; //  0x2a2 Size(1)
	Unknown VirtualTextureRenderPassType; //  0x2a3 Size(1)
	float LpvBiasMultiplier; //  0x2a8 Size(4)
	float BoundsScale; //  0x2b4 Size(4)
	Unknown MoveIgnoreActors; //  0x2c8 Size(10)
	Unknown MoveIgnoreComponents; //  0x2d8 Size(10)
	Unknown BodyInstance; //  0x2f8 Size(190)
	struct FMulticastSparseDelegate OnComponentHit; //  0x488 Size(1)
	struct FMulticastSparseDelegate OnComponentBeginOverlap; //  0x489 Size(1)
	struct FMulticastSparseDelegate OnComponentEndOverlap; //  0x48a Size(1)
	struct FMulticastSparseDelegate OnComponentWake; //  0x48b Size(1)
	struct FMulticastSparseDelegate OnComponentSleep; //  0x48c Size(1)
	struct FMulticastSparseDelegate OnBeginCursorOver; //  0x48e Size(1)
	struct FMulticastSparseDelegate OnEndCursorOver; //  0x48f Size(1)
	struct FMulticastSparseDelegate OnClicked; //  0x490 Size(1)
	struct FMulticastSparseDelegate OnReleased; //  0x491 Size(1)
	struct FMulticastSparseDelegate OnInputTouchBegin; //  0x492 Size(1)
	struct FMulticastSparseDelegate OnInputTouchEnd; //  0x493 Size(1)
	struct FMulticastSparseDelegate OnInputTouchEnter; //  0x494 Size(1)
	struct FMulticastSparseDelegate OnInputTouchLeave; //  0x495 Size(1)
	Unknown LODParentPrimitive; //  0x4b0 Size(8)

	char WasRecentlyRendered(float Tolerance); // Function Engine.PrimitiveComponent.WasRecentlyRendered(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3dc8c90>
};

// Class Engine.MeshComponent
struct UMeshComponent : UPrimitiveComponent {
	float MipStreamingScale; //  0x4b8 Size(4)
	Unknown OverrideMaterials; //  0x4c0 Size(10)
	char bEnableMaterialParameterCaching; //  0x4e0 Size(1)

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, Unknown ParameterValue); // Function Engine.MeshComponent.SetVectorParameterValueOnMaterials(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3d80b90>
};

// Class Engine.SkinnedMeshComponent
struct USkinnedMeshComponent : UMeshComponent {
	Unknown SkeletalMesh; //  0x4e8 Size(8)
	Unknown MasterPoseComponent; //  0x4f0 Size(8)
	Unknown SkinCacheUsage; //  0x4f8 Size(10)
	Unknown PhysicsAssetOverride; //  0x600 Size(8)
	int32_t ForcedLodModel; //  0x608 Size(4)
	int32_t MinLodModel; //  0x60c Size(4)
	float StreamingDistanceMultiplier; //  0x618 Size(4)
	Unknown LODInfo; //  0x628 Size(10)
	Unknown VisibilityBasedAnimTickOption; //  0x65c Size(1)
	char bOverrideMinLod; //  0x65e Size(1)
	char bUseBoundsFromMasterPoseComponent; //  0x65e Size(1)
	char bForceWireframe; //  0x65e Size(1)
	char bDisplayBones; //  0x65e Size(1)
	char bDisableMorphTarget; //  0x65e Size(1)
	char bHideSkin; //  0x65e Size(1)
	char bPerBoneMotionBlur; //  0x65f Size(1)
	char bComponentUseFixedSkelBounds; //  0x65f Size(1)
	char bConsiderAllBodiesForBounds; //  0x65f Size(1)
	char bSyncAttachParentLOD; //  0x65f Size(1)
	char bCanHighlightSelectedSectio; //  0x65f Size(1)
	char bRecentlyRendered; //  0x65f Size(1)
	char bCastCapsuleDirectShadow; //  0x65f Size(1)
	char bCastCapsuleIndirectShadow; //  0x65f Size(1)
	char bCPUSkinning; //  0x660 Size(1)
	char bEnableUpdateRateOptimizations; //  0x660 Size(1)
	char bDisplayDebugUpdateRateOptimizations; //  0x660 Size(1)
	char bRenderStatic; //  0x660 Size(1)
	char bIgnoreMasterPoseComponentLOD; //  0x660 Size(1)
	char bCachedLocalBoundsUpToDate; //  0x660 Size(1)
	char bForceMeshObjectUpdate; //  0x661 Size(1)
	float CapsuleIndirectShadowMinVisibility; //  0x664 Size(4)
	Unknown CachedWorldSpaceBounds; //  0x678 Size(1c)
	Unknown CachedWorldToLocalTransform; //  0x6a0 Size(40)

	void UnloadSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile(Final|Native|Public|BlueprintCallable) // <Game+0x3def250>
};

// Class Engine.StreamableRenderAsset
struct UStreamableRenderAsset : Object {
	Unknown ForceMipLevelsToBeResidentTimestamp; //  0x28 Size(8)
	int32_t NumCinematicMipLevels; //  0x30 Size(4)
	int32_t StreamingIndex; //  0x34 Size(4)
	int32_t CachedCombinedLODBias; //  0x38 Size(4)
	Unknown CachedNumResidentLODs; //  0x3c Size(1)
	char bCachedReadyForStreaming; //  0x3d Size(1)
	char NeverStream; //  0x3d Size(1)
	char bGlobalForceMipLevelsToBeResident; //  0x3d Size(1)
	char bIsStreamable; //  0x3d Size(1)
	char bHasStreamingUpdatePending; //  0x3d Size(1)
	char bForceMiplevelsToBeResident; //  0x3d Size(1)
	char bIgnoreStreamingMipBias; //  0x3d Size(1)
	char bUseCinematicMipLev; //  0x3d Size(1)
};

// Class Engine.SkeletalMesh
struct USkeletalMesh : UStreamableRenderAsset {
	Unknown Skeleton; //  0x60 Size(8)
	Unknown ImportedBounds; //  0x68 Size(1c)
	Unknown ExtendedBounds; //  0x84 Size(1c)
	Unknown PositiveBoundsExtension; //  0xa0 Size(c)
	Unknown NegativeBoundsExtension; //  0xac Size(c)
	Unknown Materials; //  0xb8 Size(10)
	Unknown SkelMirrorTable; //  0xc8 Size(10)
	Unknown LODInfo; //  0xd8 Size(10)
	Unknown MinLOD; //  0x138 Size(4)
	Unknown DisableBelowMinLodStripping; //  0x13c Size(1)
	Unknown SkelMirrorAxis; //  0x13d Size(1)
	Unknown SkelMirrorFlipAxis; //  0x13e Size(1)
	char bUseFullPrecisionUVs; //  0x13f Size(1)
	char bUseHighPrecisionTangentBasis; //  0x13f Size(1)
	char bHasBeenSimplified; //  0x13f Size(1)
	char bHasVertexColors; //  0x13f Size(1)
	char bEnablePerPolyCollision; //  0x13f Size(1)
	Unknown BodySetup; //  0x140 Size(8)
	Unknown PhysicsAsset; //  0x148 Size(8)
	Unknown ShadowPhysicsAsset; //  0x150 Size(8)
	Unknown NodeMappingData; //  0x158 Size(10)
	Unknown MorphTargets; //  0x168 Size(10)
	Unknown PostProcessAnimBlueprint; //  0x2f0 Size(8)
	Unknown MeshClothingAssets; //  0x2f8 Size(10)
	Unknown SamplingInfo; //  0x308 Size(30)
	Unknown AssetUserData; //  0x338 Size(10)
	Unknown Sockets; //  0x350 Size(10)
	Unknown SkinWeightProfiles; //  0x370 Size(10)

	void SetLODSettings(Unknown InLODSettings); // Function Engine.SkeletalMesh.SetLODSettings(Final|Native|Public|BlueprintCallable) // <Game+0x16b3b30>
};

// Class Engine.StaticMeshActor
struct AStaticMeshActor : UActor {
	Unknown StaticMeshComponent; //  0x310 Size(8)
	char bStaticMeshReplicateMovement; //  0x318 Size(1)
	Unknown NavigationGeometryGatheringMode; //  0x319 Size(1)

	void SetMobility(Unknown InMobility); // Function Engine.StaticMeshActor.SetMobility(Final|Native|Public|BlueprintCallable) // <Game+0x124c9f0>
};

// Class Engine.Texture
struct UTexture : UStreamableRenderAsset {
	Unknown LightingGuid; //  0x48 Size(10)
	int32_t LODBias; //  0x58 Size(4)
	Unknown CompressionSettings; //  0x5c Size(1)
	Unknown Filter; //  0x5d Size(1)
	Unknown MipLoadOptions; //  0x5e Size(1)
	Unknown LODGroup; //  0x5f Size(1)
	char SRGB; //  0x60 Size(1)
	char bNoTiling; //  0x60 Size(1)
	char VirtualTextureStreaming; //  0x60 Size(1)
	char CompressionYCoCg; //  0x60 Size(1)
	char bAsyncResourceReleaseHasBeenStarted; //  0x60 Size(1)
	Unknown AssetUserData; //  0x68 Size(10)
};

// Class Engine.Texture2DDynamic
struct UTexture2DDynamic : UTexture {
	Unknown Format; //  0xc0 Size(1)
};

// Class Engine.HUD
struct AHUD : UActor {
	Unknown PlayerOwner; //  0x310 Size(8)
	char bLostFocusPaused; //  0x318 Size(1)
	char bShowHUD; //  0x318 Size(1)
	char bShowDebugInfo; //  0x318 Size(1)
	int32_t CurrentTargetIndex; //  0x31c Size(4)
	char bShowHitBoxDebugInfo; //  0x320 Size(1)
	char bShowOverlays; //  0x320 Size(1)
	char bEnableDebugTextShadow; //  0x320 Size(1)
	Unknown PostRenderedActors; //  0x328 Size(10)
	Unknown DebugDisplay; //  0x340 Size(10)
	Unknown ToggledDebugCategories; //  0x350 Size(10)
	Unknown Canvas; //  0x360 Size(8)
	Unknown DebugCanvas; //  0x368 Size(8)
	Unknown DebugTextList; //  0x370 Size(10)
	Unknown ShowDebugTargetDesiredClass; //  0x380 Size(8)
	Unknown ShowDebugTargetActor; //  0x388 Size(8)

	void ShowHUD(); // Function Engine.HUD.ShowHUD(Exec|Native|Public) // <Game+0x1e4be10>
};

// Class Engine.Player
struct UPlayer : Object {
	Unknown PlayerController; //  0x30 Size(8)
	int32_t CurrentNetSpeed; //  0x38 Size(4)
	int32_t ConfiguredInternetSpeed; //  0x3c Size(4)
	int32_t ConfiguredLanSpeed; //  0x40 Size(4)
};

// Class Engine.MKNetConnectionEx
struct UMKNetConnectionEx : UPlayer {
	Unknown SelfNetConnection; //  0xb0 Size(8)
};

// Class Engine.NetConnection
struct UNetConnection : UMKNetConnectionEx {
	Unknown Children; //  0xb8 Size(10)
	Unknown Driver; //  0xc8 Size(8)
	Unknown PackageMapClass; //  0xd0 Size(8)
	Unknown PackageMap; //  0xd8 Size(8)
	Unknown OpenChannels; //  0xe0 Size(10)
	Unknown SentTemporaries; //  0xf0 Size(10)
	Unknown ViewTarget; //  0x100 Size(8)
	Unknown OwningActor; //  0x108 Size(8)
	int32_t MaxPacket; //  0x110 Size(4)
	char InternalAck; //  0x114 Size(1)
	Unknown PlayerId; //  0x1d0 Size(28)
	Unknown LastReceiveTime; //  0x240 Size(8)
	Unknown ChannelsToTick; //  0x1580 Size(10)
};

// Class Engine.NetDriver
struct UNetDriver : Object {
	struct FString NetConnectionClassName; //  0x30 Size(10)
	struct FString ReplicationDriverClassName; //  0x40 Size(10)
	int32_t MaxDownloadSize; //  0x50 Size(4)
	char bClampListenServerTickRate; //  0x54 Size(1)
	int32_t NetServerMaxTickRate; //  0x58 Size(4)
	int32_t MaxNetTickRate; //  0x5c Size(4)
	int32_t MaxInternetClientRate; //  0x60 Size(4)
	int32_t MaxClientRate; //  0x64 Size(4)
	float ServerTravelPause; //  0x68 Size(4)
	float SpawnPrioritySeconds; //  0x6c Size(4)
	float RelevantTimeout; //  0x70 Size(4)
	float KeepAliveTime; //  0x74 Size(4)
	float InitialConnectTimeout; //  0x78 Size(4)
	float ConnectionTimeout; //  0x7c Size(4)
	float TimeoutMultiplierForUnoptimizedBuilds; //  0x80 Size(4)
	char bNoTimeouts; //  0x84 Size(1)
	char bNeverApplyNetworkEmulationSettings; //  0x85 Size(1)
	Unknown ServerConnection; //  0x88 Size(8)
	Unknown ClientConnections; //  0x90 Size(10)
	int32_t RecentlyDisconnectedTrackingTime; //  0x100 Size(4)
	Unknown World; //  0x140 Size(8)
	Unknown WorldPackage; //  0x148 Size(8)
	Unknown NetConnectionClass; //  0x170 Size(8)
	Unknown ReplicationDriverClass; //  0x178 Size(8)
	struct FName NetDriverName; //  0x190 Size(8)
	Unknown ChannelDefinitions; //  0x198 Size(10)
	Unknown ChannelDefinitionMap; //  0x1a8 Size(50)
	Unknown ActorChannelPool; //  0x1f8 Size(10)
	float Time; //  0x210 Size(4)
	Unknown ReplicationDriver; //  0x6e8 Size(8)
};

// Class Engine.Engine
struct UEngine : Object {
	Unknown TinyFont; //  0x30 Size(8)
	Unknown TinyFontName; //  0x38 Size(18)
	Unknown SmallFont; //  0x50 Size(8)
	Unknown SmallFontName; //  0x58 Size(18)
	Unknown MediumFont; //  0x70 Size(8)
	Unknown MediumFontName; //  0x78 Size(18)
	Unknown LargeFont; //  0x90 Size(8)
	Unknown LargeFontName; //  0x98 Size(18)
	Unknown SubtitleFont; //  0xb0 Size(8)
	Unknown SubtitleFontName; //  0xb8 Size(18)
	Unknown AdditionalFonts; //  0xd0 Size(10)
	Unknown AdditionalFontNames; //  0xe8 Size(10)
	Unknown ConsoleClass; //  0xf8 Size(8)
	Unknown ConsoleClassName; //  0x100 Size(18)
	Unknown GameViewportClientClass; //  0x118 Size(8)
	Unknown GameViewportClientClassName; //  0x120 Size(18)
	Unknown LocalPlayerClass; //  0x138 Size(8)
	Unknown LocalPlayerClassName; //  0x140 Size(18)
	Unknown WorldSettingsClass; //  0x158 Size(8)
	Unknown WorldSettingsClassName; //  0x160 Size(18)
	Unknown NavigationSystemClassName; //  0x178 Size(18)
	Unknown NavigationSystemClass; //  0x190 Size(8)
	Unknown NavigationSystemConfigClassName; //  0x198 Size(18)
	Unknown NavigationSystemConfigClass; //  0x1b0 Size(8)
	Unknown AvoidanceManagerClassName; //  0x1b8 Size(18)
	Unknown AvoidanceManagerClass; //  0x1d0 Size(8)
	Unknown PhysicsCollisionHandlerClass; //  0x1d8 Size(8)
	Unknown PhysicsCollisionHandlerClassName; //  0x1e0 Size(18)
	Unknown GameUserSettingsClassName; //  0x1f8 Size(18)
	Unknown GameUserSettingsClass; //  0x210 Size(8)
	Unknown AIControllerClassName; //  0x218 Size(18)
	Unknown GameUserSettings; //  0x230 Size(8)
	Unknown LevelScriptActorClass; //  0x238 Size(8)
	Unknown LevelScriptActorClassName; //  0x240 Size(18)
	Unknown DefaultBlueprintBaseClassName; //  0x258 Size(18)
	Unknown GameSingletonClassName; //  0x270 Size(18)
	Unknown GameSingleton; //  0x288 Size(8)
	Unknown AssetManagerClassName; //  0x290 Size(18)
	Unknown AssetManager; //  0x2a8 Size(8)
	Unknown DefaultTexture; //  0x2b0 Size(8)
	Unknown DefaultTextureName; //  0x2b8 Size(18)
	Unknown DefaultDiffuseTexture; //  0x2d0 Size(8)
	Unknown DefaultDiffuseTextureName; //  0x2d8 Size(18)
	Unknown DefaultBSPVertexTexture; //  0x2f0 Size(8)
	Unknown DefaultBSPVertexTextureName; //  0x2f8 Size(18)
	Unknown HighFrequencyNoiseTexture; //  0x310 Size(8)
	Unknown HighFrequencyNoiseTextureName; //  0x318 Size(18)
	Unknown DefaultBokehTexture; //  0x330 Size(8)
	Unknown DefaultBokehTextureName; //  0x338 Size(18)
	Unknown DefaultBloomKernelTexture; //  0x350 Size(8)
	Unknown DefaultBloomKernelTextureName; //  0x358 Size(18)
	Unknown WireframeMaterial; //  0x370 Size(8)
	struct FString WireframeMaterialName; //  0x378 Size(10)
	Unknown DebugMeshMaterial; //  0x388 Size(8)
	Unknown DebugMeshMaterialName; //  0x390 Size(18)
	Unknown EmissiveMeshMaterial; //  0x3a8 Size(8)
	Unknown EmissiveMeshMaterialName; //  0x3b0 Size(18)
	Unknown LevelColorationLitMaterial; //  0x3c8 Size(8)
	struct FString LevelColorationLitMaterialName; //  0x3d0 Size(10)
	Unknown LevelColorationUnlitMaterial; //  0x3e0 Size(8)
	struct FString LevelColorationUnlitMaterialName; //  0x3e8 Size(10)
	Unknown LightingTexelDensityMaterial; //  0x3f8 Size(8)
	struct FString LightingTexelDensityName; //  0x400 Size(10)
	Unknown ShadedLevelColorationLitMaterial; //  0x410 Size(8)
	struct FString ShadedLevelColorationLitMaterialName; //  0x418 Size(10)
	Unknown ShadedLevelColorationUnlitMaterial; //  0x428 Size(8)
	struct FString ShadedLevelColorationUnlitMaterialName; //  0x430 Size(10)
	Unknown RemoveSurfaceMaterial; //  0x440 Size(8)
	Unknown RemoveSurfaceMaterialName; //  0x448 Size(18)
	Unknown VertexColorMaterial; //  0x460 Size(8)
	struct FString VertexColorMaterialName; //  0x468 Size(10)
	Unknown VertexColorViewModeMaterial_ColorOnly; //  0x478 Size(8)
	struct FString VertexColorViewModeMaterialName_; //  0x480 Size(10)
	Unknown VertexColorViewModeMaterial_AlphaAsColor; //  0x490 Size(8)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; //  0x498 Size(10)
	Unknown VertexColorViewModeMaterial_RedOnly; //  0x4a8 Size(8)
	struct FString VertexColorViewModeMaterialName_RedOnly; //  0x4b0 Size(10)
	Unknown VertexColorViewModeMaterial_GreenOnly; //  0x4c0 Size(8)
	struct FString VertexColorViewModeMaterialName_GreenOnly; //  0x4c8 Size(10)
	Unknown VertexColorViewModeMaterial_BlueOnly; //  0x4d8 Size(8)
	struct FString VertexColorViewModeMaterialName_BlueOnly; //  0x4e0 Size(10)
	Unknown DebugEditorMaterialName; //  0x4f0 Size(18)
	Unknown ConstraintLimitMaterial; //  0x508 Size(8)
	Unknown ConstraintLimitMaterialX; //  0x510 Size(8)
	Unknown ConstraintLimitMaterialXAxis; //  0x518 Size(8)
	Unknown ConstraintLimitMaterialY; //  0x520 Size(8)
	Unknown ConstraintLimitMaterialYAxis; //  0x528 Size(8)
	Unknown ConstraintLimitMaterialZ; //  0x530 Size(8)
	Unknown ConstraintLimitMaterialZAxis; //  0x538 Size(8)
	Unknown ConstraintLimitMaterialPrismatic; //  0x540 Size(8)
	Unknown InvalidLightmapSettingsMaterial; //  0x548 Size(8)
	Unknown InvalidLightmapSettingsMaterialName; //  0x550 Size(18)
	Unknown PreviewShadowsIndicatorMaterial; //  0x568 Size(8)
	Unknown PreviewShadowsIndicatorMaterialName; //  0x570 Size(18)
	Unknown ArrowMaterial; //  0x588 Size(8)
	Unknown ArrowMaterialYellow; //  0x590 Size(8)
	Unknown ArrowMaterialName; //  0x598 Size(18)
	Unknown LightingOnlyBrightness; //  0x5b0 Size(10)
	Unknown ShaderComplexityColors; //  0x5c0 Size(10)
	Unknown QuadComplexityColors; //  0x5d0 Size(10)
	Unknown LightComplexityColors; //  0x5e0 Size(10)
	Unknown StationaryLightOverlapColors; //  0x5f0 Size(10)
	Unknown LODColorationColors; //  0x600 Size(10)
	Unknown HLODColorationColors; //  0x610 Size(10)
	Unknown StreamingAccuracyColors; //  0x620 Size(10)
	float MaxPixelShaderAdditiveComplexity; //  0x630 Size(4)
	float MaxES3PixelShaderAdditiveCo; //  0x634 Size(4)
	float MinLightMapDensity; //  0x638 Size(4)
	float IdealLightMapDensity; //  0x63c Size(4)
	float MaxLightMapDensity; //  0x640 Size(4)
	char bRenderLightMapDensityGrayscale; //  0x644 Size(1)
	float RenderLightMapDensityGrayscaleScale; //  0x648 Size(4)
	float RenderLightMapDensityColorScale; //  0x64c Size(4)
	Unknown LightMapDensityVertexMappedColor; //  0x650 Size(10)
	Unknown LightMapDensitySelectedColo; //  0x660 Size(10)
	Unknown StatColorMappings; //  0x670 Size(10)
	Unknown DefaultPhysMaterial; //  0x680 Size(8)
	Unknown DefaultPhysMaterialName; //  0x688 Size(18)
	Unknown ActiveGameNameRedirects; //  0x6a0 Size(10)
	Unknown ActiveClassRedirects; //  0x6b0 Size(10)
	Unknown ActivePluginRedirects; //  0x6c0 Size(10)
	Unknown ActiveStructRedirects; //  0x6d0 Size(10)
	Unknown PreIntegratedSkinBRDFTexture; //  0x6e0 Size(8)
	Unknown PreIntegratedSkinBRDFTextureName; //  0x6e8 Size(18)
	Unknown BlueNoiseTexture; //  0x700 Size(8)
	Unknown BlueNoiseTextureName; //  0x708 Size(18)
	Unknown MiniFontTexture; //  0x720 Size(8)
	Unknown MiniFontTextureName; //  0x728 Size(18)
	Unknown WeightMapPlaceholderTexture; //  0x740 Size(8)
	Unknown WeightMapPlaceholderTextureName; //  0x748 Size(18)
	Unknown LightMapDensityTexture; //  0x760 Size(8)
	Unknown LightMapDensityTextureName; //  0x768 Size(18)
	Unknown GameViewport; //  0x788 Size(8)
	Unknown DeferredCommands; //  0x790 Size(10)
	int32_t TickCycles; //  0x7a0 Size(4)
	int32_t GameCycles; //  0x7a4 Size(4)
	int32_t ClientCycles; //  0x7a8 Size(4)
	float NearClipPlane; //  0x7ac Size(4)
	float EditorNearClipPlane; //  0x7b0 Size(4)
	char bUseCustomAudioModule; //  0x7b4 Size(1)
	char bHardwareSurveyEnabled; //  0x7b8 Size(1)
	char bSub; //  0x7b8 Size(1)
	char bSubdwareSurveyEn; //  0x7b8 Size(1)
	int32_t MaximumLoopIterationCount; //  0x7bc Size(4)
	char bCanBlueprintsTickByDefault; //  0x7c0 Size(1)
	char bOptimizeAnimBlueprintMemberVariableAccess; //  0x7c0 Size(1)
	char bAllowMultiThreadedAnimatio; //  0x7c0 Size(1)
	char bEnableEditorPSysRealtimeLOD; //  0x7c0 Size(1)
	char bSmoothFrameRate; //  0x7c0 Size(1)
	char bUseFixedFrameRate; //  0x7c0 Size(1)
	float FixedFrameRate; //  0x7c4 Size(4)
	Unknown SmoothedFrameRateRange; //  0x7c8 Size(10)
	Unknown CustomTimeStep; //  0x7d8 Size(8)
	Unknown CustomTimeStepClassName; //  0x800 Size(18)
	Unknown TimecodeProvider; //  0x818 Size(8)
	Unknown TimecodeProviderClassName; //  0x840 Size(18)
	char bGenerateDefaultTimecode; //  0x858 Size(1)
	Unknown GenerateDefaultTimecodeFrameRate; //  0x85c Size(8)
	float GenerateDefaultTimecodeFrameDelay; //  0x864 Size(4)
	char bCheckForMultiplePawnsSpawnedInAFrame; //  0x868 Size(1)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; //  0x86c Size(4)
	char bShouldGenerateLowQualityLightmaps; //  0x870 Size(1)
	Unknown C_WorldBox; //  0x874 Size(4)
	Unknown C_BrushWire; //  0x878 Size(4)
	Unknown C_AddWire; //  0x87c Size(4)
	Unknown C_SubtractWire; //  0x880 Size(4)
	Unknown C_SemiSolidWire; //  0x884 Size(4)
	Unknown C_NonSolidWire; //  0x888 Size(4)
	Unknown C_WireBackground; //  0x88c Size(4)
	Unknown C_ScaleBoxHi; //  0x890 Size(4)
	Unknown C_VolumeCollision; //  0x894 Size(4)
	Unknown C_BSPCollision; //  0x898 Size(4)
	Unknown C_OrthoBackground; //  0x89c Size(4)
	Unknown C_Volume; //  0x8a0 Size(4)
	Unknown C_BrushShape; //  0x8a4 Size(4)
	float StreamingDistanceFactor; //  0x8a8 Size(4)
	Unknown GameScreenshotSaveDirectory; //  0x8b0 Size(10)
	Unknown TransitionType; //  0x8c0 Size(1)
	struct FString TransitionDescription; //  0x8c8 Size(10)
	struct FString TransitionGameMode; //  0x8d8 Size(10)
	float MeshLODRange; //  0x8e8 Size(4)
	char bAllowMatureLanguage; //  0x8ec Size(1)
	float CameraRotationThreshold; //  0x8f0 Size(4)
	float CameraTranslationThreshold; //  0x8f4 Size(4)
	float PrimitiveProbablyVisibleTime; //  0x8f8 Size(4)
	float MaxOcclusionPixelsFraction; //  0x8fc Size(4)
	char bPauseOnLossOfFocus; //  0x900 Size(1)
	int32_t MaxParticleResize; //  0x904 Size(4)
	int32_t MaxParticleResizeWarn; //  0x908 Size(4)
	Unknown PendingDroppedNotes; //  0x910 Size(10)
	float NetClientTicksPerSecond; //  0x920 Size(4)
	float DisplayGamma; //  0x924 Size(4)
	float MinDesiredFrameRate; //  0x928 Size(4)
	Unknown DefaultSelectedMaterialColo; //  0x92c Size(10)
	Unknown SelectedMaterialColor; //  0x93c Size(10)
	Unknown SelectionOutlineColor; //  0x94c Size(10)
	Unknown SubduedSelectionOutlineColoe; //  0x95c Size(10)
	Unknown SelectedMaterialColorOverride; //  0x96c Size(10)
	char bIsOverridingSelectedColor; //  0x97c Size(1)
	char bEnableOnScreenDebugMessages; //  0x980 Size(1)
	char bEnableOnScreenDebugMessagesDisplay; //  0x980 Size(1)
	char bSuppressMapWarnings; //  0x980 Size(1)
	char bDisableAILogging; //  0x980 Size(1)
	uint32_t bEnableVisualLogRecordingOnStart; //  0x984 Size(4)
	int32_t ScreenSaverInhibitorSemapho; //  0x98c Size(4)
	char bLockReadOnlyLevels; //  0x990 Size(1)
	struct FString ParticleEventManagerClassPath; //  0x998 Size(10)
	float SelectionHighlightIntensity; //  0x9a8 Size(4)
	float BSPSelectionHighlightIntensity; //  0x9ac Size(4)
	float SelectionHighlightIntensityBillboards; //  0x9b0 Size(4)
	Unknown NetDriverDefinitions; //  0xc00 Size(10)
	Unknown ServerActors; //  0xc10 Size(10)
	Unknown RuntimeServerActors; //  0xc20 Size(10)
	float NetErrorLogInterval; //  0xc30 Size(4)
	char bStartedLoadMapMovie; //  0xc34 Size(1)
	int32_t NextWorldContextHandle; //  0xc50 Size(4)
};

// Class Engine.LocalPlayer
struct ULocalPlayer : UPlayer {
	Unknown ViewportClient; //  0x70 Size(8)
	Unknown AspectRatioAxisConstraint; //  0x94 Size(1)
	Unknown PendingLevelPlayerControllerClass; //  0x98 Size(8)
	char bSentSplitJoin; //  0xa0 Size(1)
	int32_t ControllerId; //  0xb8 Size(4)
};

// Class Engine.SkeletalMeshComponent
struct USkeletalMeshComponent : USkinnedMeshComponent {
	Unknown AnimBlueprintGeneratedClass; //  0x700 Size(8)
	Unknown AnimClass; //  0x708 Size(8)
	Unknown AnimScriptInstance; //  0x710 Size(8)
	Unknown PostprocessAnimInstance; //  0x718 Size(8)
	Unknown AnimationData; //  0x720 Size(18)
	Unknown RootBoneTranslation; //  0x748 Size(c)
	Unknown LineCheckBoundsScale; //  0x754 Size(c)
	Unknown LinkedInstances; //  0x780 Size(10)
	Unknown CachedBoneSpaceTransforms; //  0x790 Size(10)
	Unknown CachedComponentSpaceTransfo; //  0x7a0 Size(10)
	float Glob; //  0x7d0 Size(4)
	Unknown KinematicBonesUpdateType; //  0x7d4 Size(1)
	Unknown PhysicsTransformUpdateMode; //  0x7d5 Size(1)
	Unknown AnimationMode; //  0x7dd Size(1)
	char bDisablePostProcessBlueprint; //  0x7df Size(1)
	char bUpdateOverlapsOnAnimationFinalize; //  0x7df Size(1)
	char bHasValidBodies; //  0x7df Size(1)
	char bBlendPhysics; //  0x7df Size(1)
	char bEnablePhysicsOnDedicatedServer; //  0x7df Size(1)
	char bUpdateJointsFromAnimation; //  0x7e0 Size(1)
	char bDisableClothSimulation; //  0x7e0 Size(1)
	char bDisableRigidBodyAnimNode; //  0x7e0 Size(1)
	char bAllowAnimCurveEvaluation; //  0x7e0 Size(1)
	char bDisableAnimCurves; //  0x7e0 Size(1)
	char bCollideWithEnvironment; //  0x7e1 Size(1)
	char bCollideWithAttachedChildren; //  0x7e1 Size(1)
	char bLocalSpaceSimulation; //  0x7e1 Size(1)
	char bResetAfterTeleport; //  0x7e1 Size(1)
	char bDeferKinematicBoneUpdate; //  0x7e1 Size(1)
	char bNoSkeletonUpdate; //  0x7e1 Size(1)
	char bPauseAnims; //  0x7e1 Size(1)
	char bUseRefPoseOnInitAnim; //  0x7e2 Size(1)
	char bEnablePerPolyCollision; //  0x7e2 Size(1)
	char bForceRefpose; //  0x7e2 Size(1)
	char bOnlyAllowAutonomousTickPose; //  0x7e2 Size(1)
	char bIsAutonomousTickPose; //  0x7e2 Size(1)
	char bOldForceRefPose; //  0x7e2 Size(1)
	char bShowPrePhysBones; //  0x7e2 Size(1)
	char bRequiredBonesUpToDate; //  0x7e2 Size(1)
	char bAnimTreeInitialised; //  0x7e3 Size(1)
	char bIncludeComponentLocationIntoBounds; //  0x7e3 Size(1)
	char bEnableLineCheckWithBounds; //  0x7e3 Size(1)
	char bUseBendingElements; //  0x7e3 Size(1)
	char bUseTetrahedralConstraints; //  0x7e3 Size(1)
	char bUseThinShellVolumeConstraints; //  0x7e3 Size(1)
	char bUseSelfCollisions; //  0x7e3 Size(1)
	char bUseContinuousCollisionDetection; //  0x7e3 Size(1)
	char bPropagateCurvesToSlaves; //  0x7e4 Size(1)
	char bSkipKinematicUpdateWhenInterpolating; //  0x7e4 Size(1)
	char bSkipBoundsUpdateWhenInterpolating; //  0x7e4 Size(1)
	char bNeedsQueuedAnimEventsDispatched; //  0x7e4 Size(1)
	uint16_t CachedAnimCurveUidVersion; //  0x7e6 Size(2)
	Unknown MassMode; //  0x7e8 Size(1)
	float UniformMass; //  0x7ec Size(4)
	float TotalMass; //  0x7f0 Size(4)
	float Density; //  0x7f4 Size(4)
	float MinPerParticleMass; //  0x7f8 Size(4)
	float ClothBlendWeight; //  0x7fc Size(4)
	float EdgeStiffness; //  0x800 Size(4)
	float BendingStiffness; //  0x804 Size(4)
	float AreaStiffness; //  0x808 Size(4)
	float VolumeStiffness; //  0x80c Size(4)
	float StrainLimitingStiffness; //  0x810 Size(4)
	float ShapeTargetStiffness; //  0x814 Size(4)
	Unknown DisallowedAnimCurves; //  0x818 Size(10)
	Unknown BodySetup; //  0x828 Size(8)
	struct FMulticastInlineDelegate OnConstraintBroken; //  0x838 Size(10)
	Unknown ClothingSimulationFactory; //  0x848 Size(8)
	float TeleportDistanceThreshold; //  0x918 Size(4)
	float TeleportRotationThreshold; //  0x91c Size(4)
	uint32_t LastPoseTickFrame; //  0x928 Size(4)
	Unknown ClothingInteractor; //  0x980 Size(8)
	struct FMulticastInlineDelegate OnAnimInitialized; //  0xa50 Size(10)

	void UnlinkAnimClassLayers(Unknown InClass); // Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers(Final|Native|Public|BlueprintCallable) // <Game+0x3de6e40>
};

// Class Engine.AnimInstance
struct UAnimInstance : Object {
	Unknown CurrentSkeleton; //  0x28 Size(8)
	Unknown RootMotionMode; //  0x30 Size(1)
	char bUseMultiThreadedAnimationUpdate; //  0x31 Size(1)
	char bUsingCopyPoseFromMesh; //  0x31 Size(1)
	char bReceiveNotifiesFromLinkedInstances; //  0x31 Size(1)
	char bPropagateNotifiesToLinkedInstances; //  0x31 Size(1)
	char bQueueMontageEvents; //  0x31 Size(1)
	struct FMulticastInlineDelegate OnMontageBlendingOut; //  0x38 Size(10)
	struct FMulticastInlineDelegate OnMontageStarted; //  0x48 Size(10)
	struct FMulticastInlineDelegate OnMontageEnded; //  0x58 Size(10)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; //  0x68 Size(10)
	Unknown NotifyQueue; //  0x100 Size(70)
	Unknown ActiveAnimNotifyState; //  0x170 Size(10)

	void UnlockAIResources(char bUnlockMovement, char UnlockAILogic); // Function Engine.AnimInstance.UnlockAIResources(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <Game+0x1ed8b20>
};

// Class Engine.Exporter
struct UExporter : Object {
	Unknown SupportedClass; //  0x28 Size(8)
	Unknown ExportRootScope; //  0x30 Size(8)
	Unknown FormatExtension; //  0x38 Size(10)
	Unknown FormatDescription; //  0x48 Size(10)
	int32_t PreferredFormatIndex; //  0x58 Size(4)
	int32_t TextIndent; //  0x5c Size(4)
	char bText; //  0x60 Size(1)
	char bSelectedOnly; //  0x60 Size(1)
	char bForceFileOperations; //  0x60 Size(1)
	Unknown ExportTask; //  0x68 Size(8)

	char ScriptRunAssetExportTask(Unknown Task); // Function Engine.Exporter.ScriptRunAssetExportTask(Event|Public|BlueprintEvent) // <Game+0x23a73f0>
};

// Class Engine.LevelScriptActor
struct ALevelScriptActor : UActor {
	char bInputEnabled; //  0x310 Size(1)

	void WorldOriginLocationChanged(Unknown OldOriginLocation, Unknown NewOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged(Event|Public|HasDefaults|BlueprintEvent) // <Game+0x23a73f0>
};

// Class Engine.FXSystemAsset
struct UFXSystemAsset : Object {
	uint32_t MaxPoolSize; //  0x28 Size(4)
};

// Class Engine.Brush
struct ABrush : UActor {
	Unknown BrushType; //  0x310 Size(1)
	Unknown BrushColor; //  0x314 Size(4)
	int32_t PolyFlags; //  0x318 Size(4)
	char bColored; //  0x31c Size(1)
	char bSolidWhenSelected; //  0x31c Size(1)
	char bPlaceableFromClassBrowser; //  0x31c Size(1)
	char bNotForClientOrServ; //  0x31c Size(1)
	Unknown Brush; //  0x320 Size(8)
	Unknown BrushComponent; //  0x328 Size(8)
	char bInManipulation; //  0x330 Size(1)
	Unknown SavedSelections; //  0x338 Size(10)
};

// Class Engine.MKWorldEx
struct UMKWorldEx : Object {
	Unknown SelfWorld; //  0x38 Size(8)
};

// Class Engine.World
struct UWorld : UMKWorldEx {
	Unknown PersistentLevel; //  0x48 Size(8)
	Unknown NetDriver; //  0x50 Size(8)
	Unknown LineBatcher; //  0x58 Size(8)
	Unknown PersistentLineBatcher; //  0x60 Size(8)
	Unknown ForegroundLineBatcher; //  0x68 Size(8)
	Unknown NetworkManager; //  0x70 Size(8)
	Unknown PhysicsCollisionHandler; //  0x78 Size(8)
	Unknown ExtraReferencedObjects; //  0x80 Size(10)
	Unknown PerModuleDataObjects; //  0x90 Size(10)
	Unknown LevelSequenceActors; //  0xa0 Size(10)
	Unknown StreamingLevels; //  0xb0 Size(10)
	Unknown StreamingLevelsToConsider; //  0xc0 Size(48)
	struct FString StreamingLevelsPrefix; //  0x120 Size(10)
	Unknown CurrentLevelPendingVisibility; //  0x130 Size(8)
	Unknown CurrentLevelPendingInvisibility; //  0x138 Size(8)
	Unknown DemoNetDriver; //  0x140 Size(8)
	Unknown MyParticleEventManager; //  0x148 Size(8)
	Unknown DefaultPhysicsVolume; //  0x150 Size(8)
	char bAreConstraintsDirty; //  0x16e Size(1)
	Unknown NavigationSystem; //  0x170 Size(8)
	Unknown AuthorityGameMode; //  0x178 Size(8)
	Unknown GameState; //  0x180 Size(8)
	Unknown AISystem; //  0x188 Size(8)
	Unknown AvoidanceManager; //  0x190 Size(8)
	Unknown Levels; //  0x198 Size(10)
	Unknown LevelCollections; //  0x1a8 Size(10)
	Unknown OwningGameInstance; //  0x1d8 Size(8)
	Unknown ParameterCollectionInstances; //  0x1e0 Size(10)
	Unknown CanvasForRenderingToTarget; //  0x1f0 Size(8)
	Unknown CanvasForDrawMaterialToRenderTarget; //  0x1f8 Size(8)
	Unknown ComponentsThatNeedEndOfFrameUpdate; //  0x250 Size(10)
	Unknown ComponentsThatNeedEndOfFrameUpdate_OnGameThread; //  0x260 Size(10)
	Unknown WorldComposition; //  0x5b0 Size(8)
	Unknown PSCPool; //  0x650 Size(58)

	Unknown K2_GetWorldSettings(); // Function Engine.World.K2_GetWorldSettings(Final|Native|Public|BlueprintCallable) // <Game+0x3e209f0>
};

// Class Engine.InterpTrack
struct UInterpTrack : Object {
	Unknown SubTracks; //  0x38 Size(10)
	Unknown TrackInstClass; //  0x48 Size(8)
	Unknown ActiveCondition; //  0x50 Size(1)
	struct FString TrackTitle; //  0x58 Size(10)
	char bOnePerGroup; //  0x68 Size(1)
	char bDirGroupOnly; //  0x68 Size(1)
	char bDisableTrack; //  0x68 Size(1)
	char bIsSelected; //  0x68 Size(1)
	char bIsAnimControlTrack; //  0x68 Size(1)
	char bSub; //  0x68 Size(1)
	char bVisible; //  0x68 Size(1)
	char bIsRecording; //  0x68 Size(1)
};

// Class Engine.InterpTrackVectorBase
struct UInterpTrackVectorBase : UInterpTrack {
	Unknown VectorTrack; //  0x70 Size(18)
	float CurveTension; //  0x88 Size(4)
};

// Class Engine.InterpTrackFloatBase
struct UInterpTrackFloatBase : UInterpTrack {
	Unknown FloatTrack; //  0x70 Size(18)
	float CurveTension; //  0x88 Size(4)
};

// Class Engine.DataAsset
struct UDataAsset : Object {
	Unknown NativeClass; //  0x28 Size(8)
};

// Class Engine.MaterialExpression
struct UMaterialExpression : Object {
	Unknown Material; //  0x28 Size(8)
	Unknown Function; //  0x30 Size(8)
	char bIsParameterExpression; //  0x38 Size(1)
};

// Class Engine.MaterialExpressionTextureBase
struct UMaterialExpressionTextureBase : UMaterialExpression {
	Unknown Texture; //  0x40 Size(8)
	Unknown SamplerType; //  0x48 Size(1)
	char IsDefaultMeshpaintTexture; //  0x49 Size(1)
};

// Class Engine.MaterialExpressionTextureSample
struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	Unknown Coordinates; //  0x50 Size(c)
	Unknown TextureObject; //  0x64 Size(c)
	Unknown MipValue; //  0x78 Size(c)
	Unknown CoordinatesDX; //  0x8c Size(c)
	Unknown CoordinatesDY; //  0xa0 Size(c)
	Unknown AutomaticViewMipBiasValue; //  0xb4 Size(c)
	Unknown MipValueMode; //  0xc8 Size(1)
	Unknown SamplerSource; //  0xc9 Size(1)
	char AutomaticViewMipBias; //  0xca Size(1)
	Unknown ConstCoordinate; //  0xcb Size(1)
	int32_t ConstMipValue; //  0xcc Size(4)
};

// Class Engine.MaterialExpressionTextureSampleParameter
struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	struct FName ParameterName; //  0xd0 Size(8)
	Unknown ExpressionGUID; //  0xd8 Size(10)
	struct FName Group; //  0xe8 Size(8)
};

// Class Engine.MKPawnEx
struct AMKPawnEx : UActor {
	Unknown SelfPawn; //  0x318 Size(8)

	void OnChangedViewMode(); // Function Engine.MKPawnEx.OnChangedViewMode(Native|Event|Public|BlueprintEvent) // <Game+0x1e4be10>
};

// Class Engine.Pawn
struct APawn : AMKPawnEx {
	char bUseControllerRotationPitch; //  0x328 Size(1)
	char bUseControllerRotationYaw; //  0x328 Size(1)
	char bUseControllerRotationRoll; //  0x328 Size(1)
	char bCanAffectNavigationGeneration; //  0x328 Size(1)
	float BaseEyeHeight; //  0x32c Size(4)
	Unknown AutoPossessPlayer; //  0x330 Size(1)
	Unknown AutoPossessAI; //  0x331 Size(1)
	uint16_t RemoteViewPitch; //  0x332 Size(2)
	uint16_t RemoteViewYaw; //  0x334 Size(2)
	Unknown AIControllerClass; //  0x338 Size(8)
	Unknown PlayerState; //  0x340 Size(8)
	Unknown LastHitBy; //  0x350 Size(8)
	Unknown Controller; //  0x358 Size(8)
	Unknown ControlInputVector; //  0x364 Size(c)
	Unknown LastControlInputVector; //  0x370 Size(c)

	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController(Native|Public|BlueprintCallable) // <Game+0x3da7a70>
};

// Class Engine.MKCharacterEx
struct AMKCharacterEx : APawn {
	Unknown SelfCharacter; //  0x388 Size(8)
};

// Class Engine.Character
struct ACharacter : AMKCharacterEx {
	Unknown Mesh; //  0x398 Size(8)
	Unknown CharacterMovement; //  0x3a0 Size(8)
	Unknown CapsuleComponent; //  0x3a8 Size(8)
	Unknown BasedMovement; //  0x3b8 Size(30)
	Unknown ReplicatedBasedMovement; //  0x3e8 Size(30)
	float AnimRootMotionTranslationScale; //  0x418 Size(4)
	Unknown BaseTranslationOffset; //  0x41c Size(c)
	Unknown BaseRotationOffset; //  0x430 Size(10)
	float ReplicatedServerLastTransfo; //  0x440 Size(4)
	float ReplayLastTransformUpdateTimeStamp; //  0x444 Size(4)
	Unknown ReplicatedMovementMode; //  0x448 Size(1)
	char bInBaseReplication; //  0x449 Size(1)
	float CrouchedEyeHeight; //  0x44c Size(4)
	char bIsCrouched; //  0x450 Size(1)
	char bProxyIsJumpForceApplied; //  0x450 Size(1)
	char bPressedJump; //  0x450 Size(1)
	char bClientUpdating; //  0x450 Size(1)
	char bClientWasFalling; //  0x450 Size(1)
	char bClientResimulateRootMotion; //  0x450 Size(1)
	char bClientResimulateRootMotionSources; //  0x450 Size(1)
	char bSimGravityDisabled; //  0x450 Size(1)
	char bClientCheckEncroachmentOnNetUpdate; //  0x451 Size(1)
	char bServerMoveIgnoreRootMotion; //  0x451 Size(1)
	char bWasJumping; //  0x451 Size(1)
	float JumpKeyHoldTime; //  0x454 Size(4)
	float JumpForceTimeRemaining; //  0x458 Size(4)
	float ProxyJumpForceStartedTime; //  0x45c Size(4)
	float JumpMaxHoldTime; //  0x460 Size(4)
	int32_t JumpMaxCount; //  0x464 Size(4)
	int32_t JumpCurrentCount; //  0x468 Size(4)
	struct FMulticastInlineDelegate OnReachedJumpApex; //  0x470 Size(10)
	struct FMulticastInlineDelegate MovementModeChangedDelegate; //  0x490 Size(10)
	struct FMulticastInlineDelegate OnCharacterMovementUpdated; //  0x4a0 Size(10)
	Unknown SavedRootMotion; //  0x4b0 Size(38)
	Unknown ClientRootMotionParams; //  0x4f0 Size(40)
	Unknown RootMotionRepMoves; //  0x530 Size(10)
	Unknown RepRootMotion; //  0x540 Size(98)

	void UnCrouch(char bClientSimulation); // Function Engine.Character.UnCrouch(Native|Public|BlueprintCallable) // <Game+0x2024f20>
};

// Class Engine.SplineComponent
struct USplineComponent : UPrimitiveComponent {
	Unknown SplineCurves; //  0x4b8 Size(68)
	Unknown SplineInfo; //  0x520 Size(18)
	Unknown SplineRotInfo; //  0x538 Size(18)
	Unknown SplineScaleInfo; //  0x550 Size(18)
	Unknown SplineReparamTable; //  0x568 Size(18)
	char bAllowSplineEditingPerInstance; //  0x580 Size(1)
	int32_t ReparamStepsPerSegment; //  0x584 Size(4)
	float Duration; //  0x588 Size(4)
	char bStationaryEndpoints; //  0x58c Size(1)
	char bSplineHasBeenEdited; //  0x58d Size(1)
	char bModifiedByConstructionScript; //  0x58e Size(1)
	char bInputSplinePointsToConstructionScript; //  0x58f Size(1)
	char bDrawDebug; //  0x590 Size(1)
	char bClosedLoop; //  0x591 Size(1)
	char bLoopPositionOverride; //  0x592 Size(1)
	float LoopPosition; //  0x594 Size(4)
	Unknown DefaultUpVector; //  0x598 Size(c)

	void UpdateSpline(); // Function Engine.SplineComponent.UpdateSpline(Final|Native|Public|BlueprintCallable) // <Game+0x3e04590>
};

// Class Engine.Commandlet
struct UCommandlet : Object {
	struct FString HelpDescription; //  0x28 Size(10)
	struct FString HelpUsage; //  0x38 Size(10)
	struct FString HelpWebLink; //  0x48 Size(10)
	Unknown HelpParamNames; //  0x58 Size(10)
	Unknown HelpParamDescriptions; //  0x68 Size(10)
	char IsServer; //  0x78 Size(1)
	char IsClient; //  0x78 Size(1)
	char IsEditor; //  0x78 Size(1)
	char LogToConsole; //  0x78 Size(1)
	char ShowErrorCount; //  0x78 Size(1)
	char ShowProgress; //  0x78 Size(1)
};

// Class Engine.AudioComponent
struct UAudioComponent : USceneComponent {
	Unknown Sound; //  0x238 Size(8)
	Unknown InstanceParameters; //  0x240 Size(10)
	Unknown SoundClassOverride; //  0x250 Size(8)
	char bAutoDestroy; //  0x258 Size(1)
	char bStopWhenOwnerDestroyed; //  0x258 Size(1)
	char bShouldRemainActiveIfDropped; //  0x258 Size(1)
	char bAllowSpatialization; //  0x258 Size(1)
	char bOverrideAttenuation; //  0x258 Size(1)
	char bOverrideSubtitlePriority; //  0x258 Size(1)
	char bIsUISound; //  0x258 Size(1)
	char bEnableLowPassFilter; //  0x258 Size(1)
	char bOverridePriority; //  0x259 Size(1)
	char bSuppressSubtitles; //  0x259 Size(1)
	char bAutoManageAttachment; //  0x25a Size(1)
	struct FName AudioComponentUserID; //  0x260 Size(8)
	float PitchModulationMin; //  0x268 Size(4)
	float PitchModulationMax; //  0x26c Size(4)
	float VolumeModulationMin; //  0x270 Size(4)
	float VolumeModulationMax; //  0x274 Size(4)
	float VolumeMultiplier; //  0x278 Size(4)
	int32_t EnvelopeFollowerAttackTime; //  0x27c Size(4)
	int32_t EnvelopeFollowerReleaseTime; //  0x280 Size(4)
	float Priority; //  0x284 Size(4)
	float SubtitlePriority; //  0x288 Size(4)
	Unknown SourceEffectChain; //  0x290 Size(8)
	float PitchMultiplier; //  0x298 Size(4)
	float LowPassFilterFrequency; //  0x29c Size(4)
	Unknown AttenuationSettings; //  0x2a8 Size(8)
	Unknown AttenuationOverrides; //  0x2b0 Size(3a0)
	Unknown ConcurrencySettings; //  0x650 Size(8)
	Unknown ConcurrencySet; //  0x658 Size(50)
	Unknown AutoAttachLocationRule; //  0x6b4 Size(1)
	Unknown AutoAttachRotationRule; //  0x6b5 Size(1)
	Unknown AutoAttachScaleRule; //  0x6b6 Size(1)
	struct FMulticastInlineDelegate OnAudioFinished; //  0x6b8 Size(10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; //  0x6e0 Size(10)
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue; //  0x708 Size(10)
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue; //  0x730 Size(10)
	Unknown Modulation; //  0x758 Size(10)
	struct FDelegate OnQueueSubtitles; //  0x768 Size(10)
	Unknown AutoAttachParent; //  0x778 Size(8)
	struct FName AutoAttachSocketName; //  0x780 Size(8)

	void StopDelayed(float DelayTime); // Function Engine.AudioComponent.StopDelayed(Final|Native|Public|BlueprintCallable) // <Game+0x3c85000>
};

// Class Engine.GameModeBase
struct AGameModeBase : AInfo {
	struct FString OptionsString; //  0x310 Size(10)
	Unknown GameSessionClass; //  0x320 Size(8)
	Unknown GameStateClass; //  0x328 Size(8)
	Unknown PlayerControllerClass; //  0x330 Size(8)
	Unknown PlayerStateClass; //  0x338 Size(8)
	Unknown HUDClass; //  0x340 Size(8)
	Unknown DefaultPawnClass; //  0x348 Size(8)
	Unknown SpectatorClass; //  0x350 Size(8)
	Unknown ReplaySpectatorPlayerContro; //  0x358 Size(8)
	Unknown ServerStatReplicatorClass; //  0x360 Size(8)
	Unknown GameSession; //  0x368 Size(8)
	Unknown GameState; //  0x370 Size(8)
	Unknown ServerStatReplicator; //  0x378 Size(8)
	struct FText DefaultPlayerName; //  0x380 Size(18)
	char bUseSeamlessTravel; //  0x398 Size(1)
	char bStartPlayersAsSpectators; //  0x398 Size(1)
	char bPauseable; //  0x398 Size(1)

	void StartPlay(); // Function Engine.GameModeBase.StartPlay(Native|Public|BlueprintCallable) // <Game+0x3cdadb0>
};

// Class Engine.GameMode
struct AGameMode : AGameModeBase {
	struct FName MatchState; //  0x3b0 Size(8)
	char bDelayedStart; //  0x3b8 Size(1)
	int32_t NumSpectators; //  0x3bc Size(4)
	int32_t NumPlayers; //  0x3c0 Size(4)
	int32_t NumBots; //  0x3c4 Size(4)
	float MinRespawnDelay; //  0x3c8 Size(4)
	int32_t NumTravellingPlayers; //  0x3cc Size(4)
	Unknown EngineMessageClass; //  0x3d0 Size(8)
	Unknown InactivePlayerArray; //  0x3d8 Size(10)
	float InactivePlayerStateLifeSpan; //  0x3e8 Size(4)
	int32_t MaxInactivePlayers; //  0x3ec Size(4)
	char bHandleDedicatedServerReplays; //  0x3f0 Size(1)

	void StartMatch(); // Function Engine.GameMode.StartMatch(Native|Public|BlueprintCallable) // <Game+0x3cdad90>
};

// Class Engine.GameStateBase
struct AGameStateBase : AInfo {
	Unknown GameModeClass; //  0x310 Size(8)
	Unknown AuthorityGameMode; //  0x318 Size(8)
	Unknown SpectatorClass; //  0x320 Size(8)
	Unknown PlayerArray; //  0x328 Size(10)
	char bReplicatedHasBegunPlay; //  0x338 Size(1)
	float ReplicatedWorldTimeSeconds; //  0x33c Size(4)
	float ServerWorldTimeSecondsDelta; //  0x340 Size(4)
	float ServerWorldTimeSecondsUpdateFrequency; //  0x344 Size(4)

	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass(Native|Protected) // <Game+0x1f184e0>
};

// Class Engine.GameState
struct AGameState : AGameStateBase {
	struct FName MatchState; //  0x360 Size(8)
	struct FName PreviousMatchState; //  0x368 Size(8)
	int32_t ElapsedTime; //  0x370 Size(4)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState(Native|Public) // <Game+0x3cda6f0>
};

// Class Engine.Controller
struct AController : UActor {
	Unknown PlayerState; //  0x348 Size(8)
	struct FMulticastInlineDelegate OnInstigatedAnyDamage; //  0x388 Size(10)
	struct FName StateName; //  0x324 Size(8)
	Unknown Pawn; //  0x378 Size(8)
	Unknown Character; //  0x338 Size(8)
	Unknown TransformComponent; //  0x330 Size(8)
	Unknown ControlRotation; //  0x39c Size(c)
	char bAttachToPawn; //  0x32c Size(1)

	void UnPossess(); // Function Engine.Controller.UnPossess(Final|Native|Public|BlueprintCallable) // <Game+0x3cb41f0>
};

// Class Engine.MKPlayerControllerEx
struct AMKPlayerControllerEx : AController {
	Unknown SelfPlayerController; //  0x3b0 Size(8)
};

// Class Engine.PlayerController
struct APlayerController : AMKPlayerControllerEx {
	Unknown Player; //  0x510 Size(8)
	Unknown AcknowledgedPawn; //  0x428 Size(8)
	Unknown ControllingDirTrackInst; //  0x4f8 Size(8)
	Unknown MyHUD; //  0x5e8 Size(8)
	Unknown PlayerCameraManager; //  0x438 Size(8)
	Unknown PlayerCameraManagerClass; //  0x480 Size(8)
	char bAutoManageActiveCameraTarget; //  0x6e4 Size(1)
	Unknown TargetViewRotation; //  0x664 Size(c)
	float SmoothTargetViewRotationSpeed; //  0x640 Size(4)
	Unknown HiddenActors; //  0x5b8 Size(10)
	Unknown HiddenPrimitiveComponents; //  0x4d0 Size(10)
	float LastSpectatorStateSynchTime; //  0x674 Size(4)
	Unknown LastSpectatorSyncLocation; //  0x558 Size(c)
	Unknown LastSpectatorSyncRotation; //  0x45c Size(c)
	int32_t ClientCap; //  0x478 Size(4)
	Unknown CheatManager; //  0x568 Size(8)
	Unknown CheatClass; //  0x590 Size(8)
	Unknown PlayerInput; //  0x518 Size(8)
	Unknown ActiveForceFeedbackEffects; //  0x580 Size(10)
	char bPlayerIsWaiting; //  0x498 Size(1)
	Unknown NetPlayerIndex; //  0x4bc Size(1)
	Unknown PendingSwapConnection; //  0x468 Size(8)
	Unknown NetConnection; //  0x3e0 Size(8)
	float InputYawScale; //  0x5e0 Size(4)
	float InputPitchScale; //  0x5a8 Size(4)
	float InputRollScale; //  0x578 Size(4)
	char bShowMouseCursor; //  0x670 Size(1)
	char bEnableClickEvents; //  0x5b4 Size(1)
	char bEnableTouchEvents; //  0x4e0 Size(1)
	char bEnableMouseOverEvents; //  0x670 Size(1)
	char bEnableTouchOverEvents; //  0x670 Size(1)
	char bForceFeedbackEnabled; //  0x57c Size(1)
	float ForceFeedbackScale; //  0x488 Size(4)
	Unknown ClickEventKeys; //  0x4a0 Size(10)
	Unknown DefaultMouseCursor; //  0x618 Size(1)
	Unknown CurrentMouseCursor; //  0x5e4 Size(1)
	Unknown DefaultClickTraceChannel; //  0x47c Size(1)
	Unknown CurrentClickTraceChannel; //  0x48c Size(1)
	float HitResultTraceDistance; //  0x3ec Size(4)
	uint16_t SeamlessTravelCount; //  0x5ac Size(2)
	uint16_t LastCompletedSeamlessTravelCount; //  0x540 Size(2)
	Unknown InactiveStateInputComponent; //  0x490 Size(8)
	char bShouldPerformFullTickWhenPaused; //  0x570 Size(1)
	Unknown CurrentTouchInterface; //  0x550 Size(8)
	Unknown SpectatorPawn; //  0x470 Size(8)
	char bIsLocalPlayerController; //  0x5c8 Size(1)
	Unknown SpawnLocation; //  0x61c Size(c)

	char WasInputKeyJustReleased(Unknown Key); // Function Engine.PlayerController.WasInputKeyJustReleased(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3dba970>
};

// Class Engine.ApplicationLifecycleComponent
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; //  0xb0 Size(10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; //  0xc0 Size(10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgro; //  0xd0 Size(10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; //  0xe0 Size(10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; //  0xf0 Size(10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadReso; //  0x100 Size(10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; //  0x110 Size(10)
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate; //  0x120 Size(10)
	struct FMulticastInlineDelegate OnLowPowerModeDelegate; //  0x130 Size(10)
};

// Class Engine.MovementComponent
struct UMovementComponent : UActorComponent {
	Unknown UpdatedComponent; //  0xb0 Size(8)
	Unknown UpdatedPrimitive; //  0xb8 Size(8)
	Unknown Velocity; //  0xc4 Size(c)
	Unknown PlaneConstraintNormal; //  0xd0 Size(c)
	Unknown PlaneConstraintOrigin; //  0xdc Size(c)
	char bUpdateOnlyIfRendered; //  0xe8 Size(1)
	char bAutoUpdateTickRegistration; //  0xe8 Size(1)
	char bTickBeforeOwner; //  0xe8 Size(1)
	char bAutoRegisterUpdatedComponent; //  0xe8 Size(1)
	char bConstrainToPlane; //  0xe8 Size(1)
	char bSnapToPlaneAtStart; //  0xe8 Size(1)
	char bAutoRegisterPhysicsVolumeUpdates; //  0xe8 Size(1)
	char bComponentShouldUpdatePhysicsVolume; //  0xe8 Size(1)
	Unknown PlaneConstraintAxisSetting; //  0xeb Size(1)

	void StopMovementImmediately(); // Function Engine.MovementComponent.StopMovementImmediately(Native|Public|BlueprintCallable) // <Game+0x2049f00>
};

// Class Engine.NavMovementComponent
struct UNavMovementComponent : UMovementComponent {
	Unknown NavAgentProps; //  0xf0 Size(30)
	float FixedPathBrakingDistance; //  0x120 Size(4)
	char bUpdateNavAgentWithOwnersCo; //  0x124 Size(1)
	char bUseAccelerationForPaths; //  0x124 Size(1)
	char bUseFixedBrakingDistanceForPaths; //  0x124 Size(1)
	Unknown MovementState; //  0x125 Size(1)
	Unknown PathFollowingComp; //  0x128 Size(8)

	void StopMovementKeepPathing(); // Function Engine.NavMovementComponent.StopMovementKeepPathing(Final|Native|Public|BlueprintCallable) // <Game+0x3d925a0>
};

// Class Engine.PawnMovementComponent
struct UPawnMovementComponent : UNavMovementComponent {
	Unknown PawnOwner; //  0x130 Size(8)

	Unknown K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x3da7320>
};

// Class Engine.CharacterMovementComponent
struct UCharacterMovementComponent : UPawnMovementComponent {
	Unknown CharacterOwner; //  0x2b0 Size(8)
	float GravityScale; //  0x2ec Size(4)
	float MaxStepHeight; //  0x468 Size(4)
	float JumpZVelocity; //  0x474 Size(4)
	float JumpOffJumpZFactor; //  0x6c8 Size(4)
	float WalkableFloorAngle; //  0x4f8 Size(4)
	float WalkableFloorZ; //  0x488 Size(4)
	Unknown MovementMode; //  0x438 Size(1)
	Unknown CustomMovementMode; //  0x56c Size(1)
	Unknown NetworkSmoothingMode; //  0x280 Size(1)
	float GroundFriction; //  0x470 Size(4)
	float MaxWalkSpeed; //  0x300 Size(4)
	float MaxWalkSpeedCrouched; //  0x6e0 Size(4)
	float MaxSwimSpeed; //  0x548 Size(4)
	float MaxFlySpeed; //  0x4e8 Size(4)
	float MaxCustomMovementSpeed; //  0x460 Size(4)
	float MaxAcceleration; //  0x484 Size(4)
	float MinAnalogWalkSpeed; //  0x4e0 Size(4)
	float BrakingFrictionFactor; //  0x2a0 Size(4)
	float BrakingFriction; //  0x54c Size(4)
	float BrakingSubStepTime; //  0x6bc Size(4)
	float BrakingDecelerationWalking; //  0x554 Size(4)
	float BrakingDecelerationFalling; //  0x51c Size(4)
	float BrakingDecelerationSwimming; //  0x414 Size(4)
	float BrakingDecelerationFlying; //  0x568 Size(4)
	float AirControl; //  0x544 Size(4)
	float AirControlBoostMultiplier; //  0x308 Size(4)
	float AirControlBoostVelocityThreshold; //  0x3f4 Size(4)
	float FallingLateralFriction; //  0x3f0 Size(4)
	float CrouchedHalfHeight; //  0x264 Size(4)
	float Buoyancy; //  0x40c Size(4)
	float PerchRadiusThreshold; //  0x244 Size(4)
	float PerchAdditionalHeight; //  0x248 Size(4)
	Unknown RotationRate; //  0x520 Size(c)
	char bUseSeparateBrakingFriction; //  0x298 Size(1)
	char bApplyGravityWhileJumping; //  0x2d4 Size(1)
	char bUseControllerDesiredRotation; //  0x2e4 Size(1)
	char bOrientRotationToMovement; //  0x550 Size(1)
	char bSweepWhileNavWalking; //  0x620 Size(1)
	char bMovementInProgress; //  0x3c0 Size(1)
	char bEnableScopedMovementUpdates; //  0x5d0 Size(1)
	char bEnableServerDualMoveScopedMovementUpdates; //  0x4e4 Size(1)
	char bForceMaxAccel; //  0x4b8 Size(1)
	char bRunPhysicsWithNoController; //  0x2f3 Size(1)
	char bForceNextFloorCheck; //  0x490 Size(1)
	char bShrinkProxyCapsule; //  0x2fc Size(1)
	char bCanWalkOffLedges; //  0x2e4 Size(1)
	char bCanWalkOffLedgesWhenCrouching; //  0x44c Size(1)
	char bNetworkSkipProxyPredictionOnNetUpdate; //  0x490 Size(1)
	char bNetworkAlwaysReplicateTransformUpdateTimestamp; //  0x490 Size(1)
	char bDeferUpdateMoveComponent; //  0x510 Size(1)
	char bEnablePhysicsInteraction; //  0x4dc Size(1)
	char bTouchForceScaledToMass; //  0x304 Size(1)
	char bPushForceScaledToMass; //  0x540 Size(1)
	char bPushForceUsingZOffset; //  0x5ac Size(1)
	char bScalePushForceToVelocity; //  0x6dc Size(1)
	Unknown DeferredUpdatedMoveComponent; //  0x3e8 Size(8)
	float MaxOutOfWaterStepHeight; //  0x240 Size(4)
	float OutofWaterZ; //  0x22c Size(4)
	float Mass; //  0x23c Size(4)
	float StandingDownwardForceScale; //  0x4c8 Size(4)
	float InitialPushForceFactor; //  0x294 Size(4)
	float PushForceFactor; //  0x2c0 Size(4)
	float PushForcePointZOffsetFactor; //  0x2d0 Size(4)
	float TouchForceFactor; //  0x434 Size(4)
	float MinTouchForce; //  0x3a8 Size(4)
	float MaxTouchForce; //  0x5a8 Size(4)
	float RepulsionForce; //  0x3ac Size(4)
	Unknown Acceleration; //  0x6d0 Size(c)
	Unknown LastUpdateRotation; //  0x270 Size(10)
	Unknown LastUpdateLocation; //  0x288 Size(c)
	Unknown LastUpdateVelocity; //  0x2d8 Size(c)
	float ServerLastTransformUpdateTimeStamp; //  0x310 Size(4)
	float ServerLastClientGoodMoveAckTime; //  0x50c Size(4)
	float ServerLastClientAdjustmentTime; //  0x4bc Size(4)
	Unknown PendingImpulseToApply; //  0x21c Size(c)
	Unknown PendingForceToApply; //  0x5c4 Size(c)
	float AnalogInputModifier; //  0x4d4 Size(4)
	float MaxSimulationTimeStep; //  0x2f4 Size(4)
	int32_t MaxSimulationIterations; //  0x444 Size(4)
	int32_t MaxJumpApexAttemptsPerSimulation; //  0x47c Size(4)
	float MaxDepenetrationWithGeometry; //  0x4ac Size(4)
	float MaxDepenetrationWithGeometryAsProxy; //  0x494 Size(4)
	float MaxDepenetrationWithPawn; //  0x25c Size(4)
	float MaxDepenetrationWithPawnAsProxy; //  0x564 Size(4)
	float NetworkSimulatedSmoothLocationTime; //  0x3f8 Size(4)
	float NetworkSimulatedSmoothRotationTime; //  0x6cc Size(4)
	float ListenServerNetworkSimulatedSmoothLocationTime; //  0x62c Size(4)
	float ListenServerNetworkSimulatedSmoothRotationTime; //  0x3e4 Size(4)
	float NetProxyShrinkRadius; //  0x6c4 Size(4)
	float NetProxyShrinkHalfHeight; //  0x440 Size(4)
	float NetworkMaxSmoothUpdateDistance; //  0x258 Size(4)
	float NetworkNoSmoothUpdateDistance; //  0x4d8 Size(4)
	float NetworkMinTimeBetweenClientAckGoodMoves; //  0x530 Size(4)
	float NetworkMinTimeBetweenClientAdjustments; //  0x284 Size(4)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; //  0x2e8 Size(4)
	float NetworkLargeClientCorrectio; //  0x410 Size(4)
	float LedgeCheckThreshold; //  0x514 Size(4)
	float JumpOutOfWaterPitch; //  0x4cc Size(4)
	Unknown CurrentFloor; //  0x314 Size(94)
	Unknown DefaultLandMovementMode; //  0x3fc Size(1)
	Unknown DefaultWaterMovementMode; //  0x2f2 Size(1)
	Unknown GroundMovementMode; //  0x305 Size(1)
	char bMaintainHorizontalGroundVelocity; //  0x518 Size(1)
	char bImpartBaseVelocityX; //  0x5c0 Size(1)
	char bImpartBaseVelocityY; //  0x2fc Size(1)
	char bImpartBaseVelocityZ; //  0x4c0 Size(1)
	char bImpartBaseAngularVelocity; //  0x518 Size(1)
	char bJustTeleported; //  0x44c Size(1)
	char bNetworkUpdateReceived; //  0x2fc Size(1)
	char bNetworkMovementModeChanged; //  0x230 Size(1)
	char bIgnoreClientMovementErrorChecksAndCorrection; //  0x6c0 Size(1)
	char bServerAcceptClientAuthoritativePosition; //  0x480 Size(1)
	char bNotifyApex; //  0x464 Size(1)
	char bCheatFlying; //  0x24c Size(1)
	char bWantsToCrouch; //  0x4b8 Size(1)
	char bCrouchMaintainsBaseLocatio; //  0x2b8 Size(1)
	char bIgnoreBaseRotation; //  0x538 Size(1)
	char bFastAttachedMove; //  0x218 Size(1)
	char bAlwaysCheckFloor; //  0x430 Size(1)
	char bUseFlatBaseForFloorChecks; //  0x238 Size(1)
	char bPerformingJumpOff; //  0x2f1 Size(1)
	char bWantsToLeaveNavWalking; //  0x46c Size(1)
	char bUseRVOAvoidance; //  0x6c0 Size(1)
	char bRequestedMoveUseAcceleration; //  0x498 Size(1)
	char bWasSimulatingRootMotion; //  0x478 Size(1)
	char bAllowPhysicsRotationDuringAnimRootMotion; //  0x44c Size(1)
	char bHasRequestedVelocity; //  0x304 Size(1)
	char bRequestedMoveWithMaxSpeed; //  0x52c Size(1)
	char bWasAvoidanceUpdated; //  0x2fc Size(1)
	char bProjectNavMeshWalking; //  0x508 Size(1)
	char bProjectNavMeshOnBothWorldChannels; //  0x228 Size(1)
	float AvoidanceConsiderationRadius; //  0x448 Size(4)
	Unknown RequestedVelocity; //  0x4a0 Size(c)
	int32_t AvoidanceUID; //  0x250 Size(4)
	Unknown AvoidanceGroup; //  0x48c Size(4)
	Unknown GroupsToAvoid; //  0x2bc Size(4)
	Unknown GroupsToIgnore; //  0x4c4 Size(4)
	float AvoidanceWeight; //  0x2a8 Size(4)
	Unknown PendingLaunchVelocity; //  0x558 Size(c)
	float NavMeshProjectionInterval; //  0x2a4 Size(4)
	float NavMeshProjectionTimer; //  0x30c Size(4)
	float NavMeshProjectionInterpSpeed; //  0x254 Size(4)
	float NavMeshProjectionHeightScaleUp; //  0x234 Size(4)
	float NavMeshProjectionHeightScaleDown; //  0x408 Size(4)
	float NavWalkingFloorDistTolerance; //  0x2f8 Size(4)
	Unknown PostPhysicsTickFunction; //  0x148 Size(30)
	float MinTimeBetweenTimeStampResets; //  0x5b0 Size(4)
	Unknown ClientAutonomuousBase; //  0x4f0 Size(8)
	Unknown CurrentRootMotion; //  0x570 Size(38)
	Unknown RootMotionParams; //  0x5e0 Size(40)
	Unknown AnimRootMotionVelocity; //  0x2c4 Size(c)
	float BlockingHit_SlideAccelerato; //  0x628 Size(4)
	Unknown BlockingPhysMaterial; //  0x4b0 Size(8)

	void SetWalkableFloorZ(float InWalkableFloorZ); // Function Engine.CharacterMovementComponent.SetWalkableFloorZ(Final|Native|Public|BlueprintCallable) // <Game+0x3cab4b0>
};

// Class Engine.SceneCapture
struct ASceneCapture : UActor {
	Unknown MeshComp; //  0x310 Size(8)
	Unknown SceneComponent; //  0x318 Size(8)
};

// Class Engine.SceneCapture2D
struct ASceneCapture2D : ASceneCapture {
	Unknown CaptureComponent2D; //  0x320 Size(8)

	void OnInterpToggle(char bEnable); // Function Engine.SceneCapture2D.OnInterpToggle(Final|Native|Public|BlueprintCallable) // <Game+0x3daf520>
};

// Class Engine.AssetManager
struct UAssetManager : Object {
	Unknown ObjectReferenceList; //  0x2c0 Size(10)
	char bIsGlobalAsyncScanEnvironment; //  0x2d0 Size(1)
	char bShouldGuessTypeAndName; //  0x2d1 Size(1)
	char bShouldUseSynchronousLoad; //  0x2d2 Size(1)
	char bIsLoadingFromPakFiles; //  0x2d3 Size(1)
	char bShouldAcquireMissingChunksOnLoad; //  0x2d4 Size(1)
	char bOnlyCookProductionAssets; //  0x2d5 Size(1)
	char bIsBulkScanning; //  0x2d6 Size(1)
	char bIsPrimaryAssetDirectoryCurrent; //  0x2d7 Size(1)
	char bIsManagementDatabaseCurrent; //  0x2d8 Size(1)
	char bUpdateManagementDatabaseAfterScan; //  0x2d9 Size(1)
	char bIncludeOnlyOnDiskAssets; //  0x2da Size(1)
	int32_t Numb; //  0x2dc Size(4)
};

// Class Engine.ShapeComponent
struct UShapeComponent : UPrimitiveComponent {
	Unknown ShapeBodySetup; //  0x4b8 Size(8)
	Unknown AreaClass; //  0x4c0 Size(8)
	Unknown ShapeColor; //  0x4c8 Size(4)
	char bDrawOnlyIfSelected; //  0x4cc Size(1)
	char bShouldCollideWhenPlacing; //  0x4cc Size(1)
	char bDynamicObstacle; //  0x4cc Size(1)
};

// Class Engine.BoxComponent
struct UBoxComponent : UShapeComponent {
	Unknown BoxExtent; //  0x4d0 Size(c)
	float LineThickness; //  0x4dc Size(4)

	void SetBoxExtent(Unknown InBoxExtent, char bUpdateOverlaps); // Function Engine.BoxComponent.SetBoxExtent(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3c9d1a0>
};

// Class Engine.CameraComponent
struct UCameraComponent : USceneComponent {
	float FieldOfView; //  0x238 Size(4)
	float OrthoWidth; //  0x23c Size(4)
	float OrthoNearClipPlane; //  0x240 Size(4)
	float OrthoFarClipPlane; //  0x244 Size(4)
	float AspectRatio; //  0x248 Size(4)
	char bConstrainAspectRatio; //  0x24c Size(1)
	char bUseFieldOfViewForLOD; //  0x24c Size(1)
	char bLockToHmd; //  0x254 Size(1)
	char bUsePawnControlRotation; //  0x254 Size(1)
	Unknown ProjectionMode; //  0x255 Size(1)
	float PostProcessBlendWeight; //  0x290 Size(4)
	Unknown PostProcessSettings; //  0x2c0 Size(5c0)

	void SetUseFieldOfViewForLOD(char bInUseFieldOfViewForLOD); // Function Engine.CameraComponent.SetUseFieldOfViewForLOD(Final|Native|Public|BlueprintCallable) // <Game+0x3c9d710>
};

// Class Engine.CheatManager
struct UCheatManager : Object {
	Unknown DebugCameraControllerRef; //  0x28 Size(8)
	Unknown DebugCameraControllerClass; //  0x30 Size(8)

	void Walk(); // Function Engine.CheatManager.Walk(Exec|Native|Public|BlueprintCallable) // <Game+0x2ed6cc0>
};

// Class Engine.DamageType
struct UDamageType : Object {
	char bCausedByWorld; //  0x28 Size(1)
	char bScaleMomentumByMass; //  0x28 Size(1)
	char bRadialDamageVelChange; //  0x28 Size(1)
	float DamageImpulse; //  0x2c Size(4)
	float DestructibleImpulse; //  0x30 Size(4)
	float DestructibleDamageSpreadScale; //  0x34 Size(4)
	float DamageFalloff; //  0x38 Size(4)
};

// Class Engine.MKDemoNetDriverEx
struct UMKDemoNetDriverEx : UNetDriver {
	Unknown SpectatorControllerClass; //  0x928 Size(8)
	Unknown SelfDemoNetDriver; //  0x930 Size(8)

	void SetReplaySample(Unknown Target, Unknown ReplaySample, char bSaveCheckpoint); // Function Engine.MKDemoNetDriverEx.SetReplaySample(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game+0x3d890e0>
};

// Class Engine.DemoNetDriver
struct UDemoNetDriver : UMKDemoNetDriverEx {
	Unknown RollbackNetStartupActors; //  0xa50 Size(50)
	float CheckpointSaveMaxMSPerFrame; //  0xecc Size(4)
	Unknown MulticastRecordOptions; //  0xf00 Size(10)
	char bIsLocalReplay; //  0xf60 Size(1)
	Unknown SpectatorControllers; //  0xf68 Size(10)
};

// Class Engine.StaticMeshComponent
struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; //  0x4e8 Size(4)
	int32_t PreviousLODLevel; //  0x4ec Size(4)
	int32_t MinLOD; //  0x4f0 Size(4)
	int32_t SubDivisionStepSize; //  0x4f4 Size(4)
	Unknown StaticMesh; //  0x4f8 Size(8)
	Unknown WireframeColorOverride; //  0x500 Size(4)
	char bEvaluateWorldPositionOffset; //  0x504 Size(1)
	char bOverrideWireframeColor; //  0x504 Size(1)
	char bOverrideMinLod; //  0x504 Size(1)
	char bOverrideNavigationExport; //  0x504 Size(1)
	char bForceNavigationObstacle; //  0x504 Size(1)
	char bDisallowMeshPaintPerInstance; //  0x504 Size(1)
	char bIgnoreInstanceForTextureStreaming; //  0x504 Size(1)
	char bOverrideLightMapRes; //  0x504 Size(1)
	char bCastDistanceFieldIndirectShadow; //  0x505 Size(1)
	char bOverrideDistanceFieldSelfShadowBias; //  0x505 Size(1)
	char bUseSubDivisions; //  0x505 Size(1)
	char bUseDefaultCollision; //  0x505 Size(1)
	char bReverseCulling; //  0x505 Size(1)
	int32_t OverriddenLightMapRes; //  0x508 Size(4)
	float DistanceFieldIndirectShadowMinVisibility; //  0x50c Size(4)
	float DistanceFieldSelfShadowBias; //  0x510 Size(4)
	float StreamingDistanceMultiplier; //  0x514 Size(4)
	Unknown LODData; //  0x518 Size(10)
	Unknown StreamingTextureData; //  0x528 Size(10)
	Unknown LightmassSettings; //  0x538 Size(18)

	char SetStaticMesh(Unknown NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh(Native|Public|BlueprintCallable) // <Game+0x168d070>
};

// Class Engine.GameEngine
struct UGameEngine : UEngine {
	float MaxDeltaTime; //  0xde8 Size(4)
	float ServerFlushLogInterval; //  0xdec Size(4)
	Unknown GameInstance; //  0xdf0 Size(8)
};

// Class Engine.MKGameInstanceEx
struct UMKGameInstanceEx : Object {
	Unknown ReplayListItemInfos; //  0x28 Size(10)
	struct FMulticastInlineDelegate OnEnumerateReplayListCompleteEvent; //  0x38 Size(10)
	struct FMulticastInlineDelegate OnDeleteReplayCompleteEvent; //  0x48 Size(10)
	struct FMulticastInlineDelegate OnKeepAndDeleteOldetsReplaysCompleteEvent; //  0x58 Size(10)
	struct FMulticastInlineDelegate OnKeepAndDeleteOldVersionReplays; //  0x68 Size(10)
	Unknown SelfGameInstance; //  0x80 Size(8)
	char bLoadingWidgetVisible; //  0x88 Size(1)

	void PlayReplayCommand(struct FString DemoName); // Function Engine.MKGameInstanceEx.PlayReplayCommand(Final|Exec|Native|Public) // <Game+0x3d88ff0>
};

// Class Engine.GameInstance
struct UGameInstance : UMKGameInstanceEx {
	Unknown LocalPlayers; //  0xb8 Size(10)
	Unknown OnlineSession; //  0xc8 Size(8)
	Unknown ReferencedObjects; //  0xd0 Size(10)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown(Event|Public|BlueprintEvent) // <Game+0x23a73f0>
};

// Class Engine.GameSession
struct AGameSession : AInfo {
	int32_t MaxSpectators; //  0x310 Size(4)
	int32_t MaxPlayers; //  0x314 Size(4)
	int32_t MaxPartySize; //  0x318 Size(4)
	Unknown MaxSplitscreensPerConnectio; //  0x31c Size(1)
	char bRequiresPushToTalk; //  0x31d Size(1)
	struct FName SessionName; //  0x320 Size(8)
};

// Class Engine.InstancedStaticMeshComponent
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	Unknown PerInstanceSMData; //  0x550 Size(10)
	int32_t NumCustomDataFloats; //  0x560 Size(4)
	Unknown PerInstanceSMCustomData; //  0x568 Size(10)
	char bMergeCollision; //  0x578 Size(1)
	int32_t InstancingRandomSeed; //  0x57c Size(4)
	int32_t InstanceStartCullDistance; //  0x580 Size(4)
	int32_t InstanceEndCullDistance; //  0x584 Size(4)
	int8_t CulldistanceType; //  0x588 Size(1)
	float MinScreenSizeScale; //  0x58c Size(4)
	Unknown InstanceBodiesSplitRatio; //  0x590 Size(1)
	Unknown InstanceReorderTable; //  0x598 Size(10)
	int32_t NumPendingLightmaps; //  0x604 Size(4)
	Unknown CachedMappings; //  0x608 Size(10)

	char UpdateInstanceTransform(int32_t InstanceIndex, Unknown& NewInstanceTransform, char bWorldSpace, char bMarkRenderStateDirty, char bTeleport); // Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x3cfbb20>
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	Unknown SortedInstances; //  0x628 Size(10)
	int32_t NumBuiltInstances; //  0x638 Size(4)
	Unknown BuiltInstanceBounds; //  0x640 Size(1c)
	Unknown UnbuiltInstanceBounds; //  0x65c Size(1c)
	Unknown UnbuiltInstanceBoundsList; //  0x678 Size(10)
	char bEnableDensityScaling; //  0x688 Size(1)
	int32_t OcclusionLayerNumNodes; //  0x690 Size(4)
	Unknown CacheMeshExtendedBounds; //  0x694 Size(1c)
	char bDisableCollision; //  0x6b0 Size(1)
	int32_t InstanceCountToRender; //  0x6b4 Size(4)

	char RemoveInstances(Unknown& InstancesToRemove); // Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x3cefb40>
};

// Class Engine.MK3DReplayController
struct AMK3DReplayController : APlayerController {
	struct FMulticastInlineDelegate OnReplayPauseEvent; //  0x6f0 Size(10)
	struct FMulticastInlineDelegate OnReplayJumpEvent; //  0x700 Size(10)
	struct FMulticastInlineDelegate OnReplayJumpCompleteEvent; //  0x710 Size(10)
	struct FString PlayerCameraManagerClassName; //  0x7a8 Size(10)
	struct FString SpectatorPawnClassName; //  0x7b8 Size(10)
	struct FMulticastInlineDelegate ChangeViewModeDelegate; //  0x7c8 Size(10)
	struct FMulticastInlineDelegate ChangeCameraTypeDelegate; //  0x7d8 Size(10)
	struct FMulticastInlineDelegate ChangeCameraTypeByNetGuidDelegate; //  0x7e8 Size(10)
	Unknown WidgetInfoArray; //  0x800 Size(10)
	Unknown ReplayWidgetMap; //  0x810 Size(50)
	Unknown KillcamComponent; //  0x8c0 Size(8)
	Unknown TargetcamComponent; //  0x8c8 Size(8)
	Unknown pTargetPlayerInRecording; //  0x8e0 Size(8)
	struct FString AfterKillcamHUDClassName; //  0x8e8 Size(10)
	Unknown AfterKillcamHUDClass; //  0x8f8 Size(8)
	struct FString ReplayHUDClassName; //  0x910 Size(10)
	Unknown ReplayHUDClass; //  0x920 Size(8)

	void ToggleReplayPauseAndResume(); // Function Engine.MK3DReplayController.ToggleReplayPauseAndResume(Final|Native|Protected|BlueprintCallable) // <Game+0x3d849c0>
};

// Class Engine.DefaultPawn
struct ADefaultPawn : APawn {
	float BaseTurnRate; //  0x380 Size(4)
	float BaseLookUpRate; //  0x384 Size(4)
	Unknown MovementComponent; //  0x388 Size(8)
	Unknown CollisionComponent; //  0x390 Size(8)
	Unknown MeshComponent; //  0x398 Size(8)
	char bAddDefaultMovementBindings; //  0x3a0 Size(1)

	void TurnAtRate(float Rate); // Function Engine.DefaultPawn.TurnAtRate(Native|Public|BlueprintCallable) // <Game+0x3cbd230>
};

// Class Engine.PhysicalMaterial
struct UPhysicalMaterial : Object {
	float Friction; //  0x28 Size(4)
	Unknown FrictionCombineMode; //  0x2c Size(1)
	char bOverrideFrictionCombineMode; //  0x2d Size(1)
	float Restitution; //  0x30 Size(4)
	Unknown RestitutionCombineMode; //  0x34 Size(1)
	char bOverrideRestitutionCombineMode; //  0x35 Size(1)
	float Density; //  0x38 Size(4)
	float RaiseMassToPower; //  0x3c Size(4)
	float DestructibleDamageThresholdScale; //  0x40 Size(4)
	Unknown PhysicalMaterialProperty; //  0x48 Size(8)
	Unknown SurfaceType; //  0x50 Size(1)
	float TireFrictionScale; //  0x54 Size(4)
	Unknown TireFrictionScales; //  0x58 Size(10)
};

// Class Engine.PlayerCameraManager
struct APlayerCameraManager : UActor {
	Unknown PCOwner; //  0x310 Size(8)
	Unknown TransformComponent; //  0x318 Size(8)
	float DefaultFOV; //  0x328 Size(4)
	float DefaultOrthoWidth; //  0x330 Size(4)
	float DefaultAspectRatio; //  0x338 Size(4)
	Unknown CameraCache; //  0x380 Size(660)
	Unknown LastFrameCameraCache; //  0x9e0 Size(660)
	Unknown ViewTarget; //  0x1040 Size(670)
	Unknown PendingViewTarget; //  0x16b0 Size(670)
	Unknown CameraCachePrivate; //  0x1d50 Size(660)
	Unknown LastFrameCameraCachePrivate; //  0x23b0 Size(660)
	Unknown ModifierList; //  0x2a10 Size(10)
	Unknown DefaultModifiers; //  0x2a20 Size(10)
	float FreeCamDistance; //  0x2a30 Size(4)
	Unknown FreeCamOffset; //  0x2a34 Size(c)
	Unknown ViewTargetOffset; //  0x2a40 Size(c)
	Unknown CameraLensEffects; //  0x2a60 Size(10)
	Unknown CachedCameraShakeMod; //  0x2a70 Size(8)
	Unknown AnimInstPool; //  0x2a78 Size(40)
	Unknown PostProcessBlendCache; //  0x2ab8 Size(10)
	Unknown ActiveAnims; //  0x2ad8 Size(10)
	Unknown FreeAnims; //  0x2ae8 Size(10)
	Unknown AnimCameraActor; //  0x2af8 Size(8)
	char bIsOrthographic; //  0x2b00 Size(1)
	char bDefaultConstrainAspectRatio; //  0x2b00 Size(1)
	char bClientSimulatingViewTarget; //  0x2b00 Size(1)
	char bUseClientSideCameraUpdates; //  0x2b00 Size(1)
	char bGameCameraCutThisFrame; //  0x2b01 Size(1)
	float ViewPitchMin; //  0x2b04 Size(4)
	float ViewPitchMax; //  0x2b08 Size(4)
	float ViewYawMin; //  0x2b0c Size(4)
	float ViewYawMax; //  0x2b10 Size(4)
	float ViewRollMin; //  0x2b14 Size(4)
	float ViewRollMax; //  0x2b18 Size(4)
	float ServerUpdateCameraTimeout; //  0x2b20 Size(4)

	void StopCameraShake(Unknown ShakeInstance, char bImmediately); // Function Engine.PlayerCameraManager.StopCameraShake(Native|Public|BlueprintCallable) // <Game+0x3db0460>
};

// Class Engine.MKPlayerStateEx
struct AMKPlayerStateEx : AInfo {
	Unknown SelfPlayerState; //  0x310 Size(8)
};

// Class Engine.PlayerState
struct APlayerState : AMKPlayerStateEx {
	float Score; //  0x318 Size(4)
	int32_t PlayerId; //  0x31c Size(4)
	Unknown Ping; //  0x320 Size(1)
	char bShouldUpdateReplicatedPing; //  0x322 Size(1)
	char bIsSpectator; //  0x322 Size(1)
	char bOnlySpectator; //  0x322 Size(1)
	char bIsABot; //  0x322 Size(1)
	char bIsInactive; //  0x322 Size(1)
	char bFromPreviousLevel; //  0x322 Size(1)
	int32_t StartTime; //  0x324 Size(4)
	Unknown EngineMessageClass; //  0x328 Size(8)
	struct FString SavedNetworkAddress; //  0x338 Size(10)
	Unknown UniqueID; //  0x348 Size(28)
	Unknown PawnPrivate; //  0x378 Size(8)
	struct FString PlayerNamePrivate; //  0x3f8 Size(10)

	void ReceiveOverrideWith(Unknown OldPlayerState); // Function Engine.PlayerState.ReceiveOverrideWith(Event|Protected|BlueprintEvent) // <Game+0x23a73f0>
};

// Class Engine.SceneCaptureComponent
struct USceneCaptureComponent : USceneComponent {
	Unknown PrimitiveRenderMode; //  0x238 Size(1)
	char bTonemapPropagateAlpha; //  0x239 Size(1)
	char bUsePostProcessMaterial; //  0x239 Size(1)
	char bUseDirectionalLights; //  0x239 Size(1)
	Unknown CaptureSource; //  0x23a Size(1)
	char bCaptureEveryFrame; //  0x23b Size(1)
	char bCaptureOnMovement; //  0x23b Size(1)
	char bAlwaysPersistRenderingState; //  0x23c Size(1)
	Unknown HiddenComponents; //  0x240 Size(10)
	Unknown HiddenActors; //  0x250 Size(10)
	Unknown ShowOnlyComponents; //  0x260 Size(10)
	Unknown ShowOnlyActors; //  0x270 Size(10)
	float LODDistanceFactor; //  0x280 Size(4)
	float MaxViewDistanceOverride; //  0x284 Size(4)
	int32_t CaptureSortPriority; //  0x288 Size(4)
	char bUseRayTracingIfEnabled; //  0x28c Size(1)
	Unknown ShowFlagSettings; //  0x290 Size(10)
	struct FString ProfilingEventName; //  0x2b0 Size(10)

	void ShowOnlyComponent(Unknown InComponent); // Function Engine.SceneCaptureComponent.ShowOnlyComponent(Final|Native|Public|BlueprintCallable) // <Game+0x3ddb6d0>
};

// Class Engine.SceneCaptureComponent2D
struct USceneCaptureComponent2D : USceneCaptureComponent {
	Unknown ProjectionType; //  0x2d0 Size(1)
	float FOVAngle; //  0x2d4 Size(4)
	float OrthoWidth; //  0x2d8 Size(4)
	Unknown TextureTarget; //  0x2e0 Size(8)
	Unknown CompositeMode; //  0x2e8 Size(1)
	Unknown PostProcessSettings; //  0x2f0 Size(5c0)
	float PostProcessBlendWeight; //  0x8b0 Size(4)
	char bOverride_CustomNearClippingPlane; //  0x8b4 Size(1)
	float CustomNearClippingPlane; //  0x8b8 Size(4)
	char bUseCustomProjectionMatrix; //  0x8bc Size(1)
	Unknown CustomProjectionMatrix; //  0x8c0 Size(40)
	char bEnableClipPlane; //  0x900 Size(1)
	Unknown ClipPlaneBase; //  0x904 Size(c)
	Unknown ClipPlaneNormal; //  0x910 Size(c)
	char bCameraCutThisFrame; //  0x91c Size(1)
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent; //  0x91c Size(1)
	char bDisableFlipCopyGLES; //  0x920 Size(1)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene(Final|Native|Public|BlueprintCallable) // <Game+0x3dd80d0>
};

// Class Engine.ArrowComponent
struct UArrowComponent : UPrimitiveComponent {
	Unknown ArrowColor; //  0x4b8 Size(4)
	float ArrowSize; //  0x4bc Size(4)
	float ScreenSize; //  0x4c0 Size(4)
	char bIsScreenSizeScaled; //  0x4c4 Size(1)
	char bTreatAsASprite; //  0x4c4 Size(1)

	void SetArrowColor(Unknown NewColor); // Function Engine.ArrowComponent.SetArrowColor(Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3c7c9e0>
};

// Class Engine.NavigationObjectBase
struct ANavigationObjectBase : UActor {
	Unknown CapsuleComponent; //  0x318 Size(8)
	Unknown GoodSprite; //  0x320 Size(8)
	Unknown BadSprite; //  0x328 Size(8)
	char bIsPIEPlayerStart; //  0x330 Size(1)
};

// Class Engine.PlayerStart
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; //  0x338 Size(8)
};

// Class Engine.ProjectileMovementComponent
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; //  0xf0 Size(4)
	float MaxSpeed; //  0xf4 Size(4)
	char bRotationFollowsVelocity; //  0xf8 Size(1)
	char bRotationRemainsVertical; //  0xf8 Size(1)
	char bShouldBounce; //  0xf8 Size(1)
	char bInitialVelocityInLocalSpace; //  0xf8 Size(1)
	char bForceSubStepping; //  0xf8 Size(1)
	char bSimulationEnabled; //  0xf8 Size(1)
	char bSweepCollision; //  0xf8 Size(1)
	char bIsHomingProjectile; //  0xf8 Size(1)
	char bBounceAngleAffectsFriction; //  0xf9 Size(1)
	char bIsSliding; //  0xf9 Size(1)
	char bInterpMovement; //  0xf9 Size(1)
	char bInterpRotation; //  0xf9 Size(1)
	float PreviousHitTime; //  0xfc Size(4)
	Unknown PreviousHitNormal; //  0x100 Size(c)
	float ProjectileGravityScale; //  0x10c Size(4)
	float Buoyancy; //  0x110 Size(4)
	float Bounciness; //  0x114 Size(4)
	float Friction; //  0x118 Size(4)
	float BounceVelocityStopSimulatingThreshold; //  0x11c Size(4)
	float MinFrictionFraction; //  0x120 Size(4)
	struct FMulticastInlineDelegate OnProjectileBounce; //  0x128 Size(10)
	struct FMulticastInlineDelegate OnProjectileStop; //  0x138 Size(10)
	float HomingAccelerationMagnitude; //  0x148 Size(4)
	Unknown HomingTargetComponent; //  0x14c Size(8)
	float MaxSimulationTimeStep; //  0x154 Size(4)
	int32_t MaxSimulationIterations; //  0x158 Size(4)
	int32_t BounceAdditionalIterations; //  0x15c Size(4)
	float InterpLocationTime; //  0x160 Size(4)
	float InterpRotationTime; //  0x164 Size(4)
	float InterpLocationMaxLagDistance; //  0x168 Size(4)
	float InterpLocationSnapToTargetDistance; //  0x16c Size(4)

	void StopSimulating(Unknown& HitResult); // Function Engine.ProjectileMovementComponent.StopSimulating(Native|Public|HasOutParms|BlueprintCallable) // <Game+0x3dcb620>
};

// Class Engine.GameUserSettings
struct UGameUserSettings : Object {
	char bUseVSync; //  0x28 Size(1)
	char bIsSmoothFrameRate; //  0x29 Size(1)
	char bUseDynamicResolution; //  0x2a Size(1)
	uint32_t ResolutionSizeX; //  0x80 Size(4)
	uint32_t ResolutionSizeY; //  0x84 Size(4)
	uint32_t LastUserConfirmedResolutionSizeX; //  0x88 Size(4)
	uint32_t LastUserConfirmedResolutionSizeY; //  0x8c Size(4)
	int32_t WindowPosX; //  0x90 Size(4)
	int32_t WindowPosY; //  0x94 Size(4)
	int32_t FullscreenMode; //  0x98 Size(4)
	int32_t LastConfirmedFullscreenMode; //  0x9c Size(4)
	int32_t PreferredFullscreenMode; //  0xa0 Size(4)
	uint32_t Version; //  0xa4 Size(4)
	int32_t AudioQualityLevel; //  0xa8 Size(4)
	int32_t LastConfirmedAudioQualityLevel; //  0xac Size(4)
	float FrameRateLimit; //  0xb0 Size(4)
	float Lobb; //  0xb4 Size(4)
	int32_t DesiredScreenWidth; //  0xbc Size(4)
	char bUseDesiredScreenHeight; //  0xc0 Size(1)
	int32_t DesiredScreenHeight; //  0xc4 Size(4)
	int32_t LastUserConfirmedDesiredScreenWidth; //  0xc8 Size(4)
	int32_t LastUserConfirmedDesiredScreenHeight; //  0xcc Size(4)
	float LastRecommendedScreenWidth; //  0xd0 Size(4)
	float LastRecommendedScreenHeight; //  0xd4 Size(4)
	float LastCPUBenchmarkResult; //  0xd8 Size(4)
	float LastGPUBenchmarkResult; //  0xdc Size(4)
	Unknown LastCPUBenchmarkSteps; //  0xe0 Size(10)
	Unknown LastGPUBenchmarkSteps; //  0xf0 Size(10)
	struct FString LastCPUBrand; //  0x100 Size(10)
	struct FString LastGPUBrand; //  0x110 Size(10)
	int32_t LastInstallStorageType; //  0x120 Size(4)
	int64_t LastTotalGraphicsMemory; //  0x128 Size(8)
	float LastGPUBenchmarkMultiplier; //  0x130 Size(4)
	char bUseHDRDisplayOutput; //  0x134 Size(1)
	int32_t HDRDisplayOutputNits; //  0x138 Size(4)
	char ShowHUD; //  0x13c Size(1)
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; //  0x140 Size(10)

	void ValidateSettings(); // Function Engine.GameUserSettings.ValidateSettings(Native|Public|BlueprintCallable) // <Game+0x2ed6cc0>
};

// Class Engine.CapsuleComponent
struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; //  0x4d0 Size(4)
	float CapsuleRadius; //  0x4d4 Size(4)

	void SetCapsuleSize(float InRadius, float InHalfHeight, char bUpdateOverlaps); // Function Engine.CapsuleComponent.SetCapsuleSize(Final|Native|Public|BlueprintCallable) // <Game+0x3ca8d00>
};

// Class Engine.GameViewportClient
struct UGameViewportClient : UScriptViewportClient {
	Unknown ViewportConsole; //  0x40 Size(8)
	Unknown DebugProperties; //  0x48 Size(10)
	int32_t MaxSplitscreenPlayers; //  0x68 Size(4)
	Unknown World; //  0x78 Size(8)
	Unknown GameInstance; //  0x80 Size(8)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers(Exec|Native|Public) // <Game+0x2ed6e40>
};

// Class Engine.PhysicsVolume
struct APhysicsVolume : AVolume {
	float TerminalVelocity; //  0x348 Size(4)
	int32_t Priority; //  0x34c Size(4)
	float FluidFriction; //  0x350 Size(4)
	char bWaterVolume; //  0x354 Size(1)
	char bPhysicsOnContact; //  0x354 Size(1)
};

// Class Engine.WorldSettings
struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; //  0x318 Size(4)
	Unknown VisibilityAggressiv; //  0x31c Size(1)
	char bPrecomputeVisibility; //  0x31d Size(1)
	char bPlaceCellsOnlyAlongCameraTracks; //  0x31d Size(1)
	char bEnableWorldBoundsChecks; //  0x31d Size(1)
	char bEnableNavigationSystem; //  0x31d Size(1)
	char bEnableAISystem; //  0x31d Size(1)
	char bEnableWorldComposition; //  0x31d Size(1)
	char bUseClientSideLevelStreamingVolumes; //  0x31d Size(1)
	char bEnableWorldOriginRebasing; //  0x31d Size(1)
	char bWorldGravitySet; //  0x31e Size(1)
	char bGlobalGravitySet; //  0x31e Size(1)
	char bMinimizeBSPSections; //  0x31e Size(1)
	char bForceNoPrecomputedLighting; //  0x31e Size(1)
	char bHighPriorityLoading; //  0x31e Size(1)
	char bHighPriorityLoadingLocal; //  0x31e Size(1)
	char bOverrideDefaultBroadphaseSettings; //  0x31e Size(1)
	Unknown NavigationSystemConfig; //  0x320 Size(8)
	Unknown NavigationSystemConfigOverride; //  0x328 Size(8)
	float WorldToMeters; //  0x330 Size(4)
	float KillZ; //  0x334 Size(4)
	Unknown KillZDamageType; //  0x338 Size(8)
	float WorldGravityZ; //  0x340 Size(4)
	float Glob; //  0x344 Size(4)
	Unknown DefaultPhysicsVolumeClass; //  0x348 Size(8)
	Unknown PhysicsCollisionHandlerClass; //  0x350 Size(8)
	Unknown DefaultGameMode; //  0x358 Size(8)
	Unknown GameNetworkManagerClass; //  0x360 Size(8)
	int32_t PackedLightAndShadowMapTextureSize; //  0x368 Size(4)
	Unknown DefaultColorScale; //  0x36c Size(c)
	float DefaultMaxDistanceFieldOcclusionDistance; //  0x378 Size(4)
	float Glob; //  0x37c Size(4)
	float DynamicIndirectShadowsSelfShadowingIntensity; //  0x380 Size(4)
	Unknown DefaultReverbSettings; //  0x388 Size(20)
	Unknown DefaultAmbientZoneSettings; //  0x3a8 Size(24)
	float MonoCullingDistance; //  0x3cc Size(4)
	Unknown DefaultBaseSoundMix; //  0x3d0 Size(8)
	float TimeDilation; //  0x3d8 Size(4)
	float MatineeTimeDilation; //  0x3dc Size(4)
	float DemoPlayTimeDilation; //  0x3e0 Size(4)
	float MinGlobalTimeDilation; //  0x3e4 Size(4)
	float MaxGlobalTimeDilation; //  0x3e8 Size(4)
	float MinUndilatedFrameTime; //  0x3ec Size(4)
	float MaxUndilatedFrameTime; //  0x3f0 Size(4)
	Unknown BroadphaseSettings; //  0x3f4 Size(40)
	Unknown Pauser; //  0x438 Size(8)
	Unknown ReplicationViewers; //  0x440 Size(10)
	Unknown AssetUserData; //  0x450 Size(10)
	Unknown PauserPlayerState; //  0x460 Size(8)
	int32_t MaxNumberOfBookmarks; //  0x468 Size(4)
	Unknown DefaultBookmarkClass; //  0x470 Size(8)
	Unknown BookmarkArray; //  0x478 Size(10)
	Unknown LastBookmarkClass; //  0x488 Size(8)
	char bUseInstancedStaticCollisio; //  0x490 Size(1)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ(Native|Public) // <Game+0x1e4be10>
};

// Class Engine.CameraModifier
struct UCameraModifier : Object {
	char bDeb; //  0x28 Size(1)
	char bExclusive; //  0x28 Size(1)
	Unknown Priority; //  0x2c Size(1)
	Unknown CameraOwner; //  0x30 Size(8)
	float AlphaInTime; //  0x38 Size(4)
	float AlphaOutTime; //  0x3c Size(4)
	float ALPHA; //  0x40 Size(4)

	char IsDisabled(); // Function Engine.CameraModifier.IsDisabled(Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x2ed6dc0>
};

// Class Engine.SkyLight
struct ASkyLight : AInfo {
	Unknown LightComponent; //  0x310 Size(8)
	char bEnabled; //  0x318 Size(1)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled(Native|Public) // <Game+0x1e4be10>
};

// Class Engine.MaterialInterface
struct UMaterialInterface : Object {
	Unknown SubsurfaceProfile; //  0x38 Size(8)
	Unknown LightmassSettings; //  0x50 Size(10)
	Unknown TextureStreamingData; //  0x60 Size(10)
	Unknown AssetUserData; //  0x70 Size(10)

	void SetForceMipLevelsToBeResident(char OverrideForceMiplev, char bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, char bFastResponse); // Function Engine.MaterialInterface.SetForceMipLevelsToBeResident(RequiredAPI|Native|Public|BlueprintCallable) // <Game+0x3d7c630>
};

// Class Engine.MaterialInstance
struct UMaterialInstance : UMaterialInterface {
	Unknown PhysMaterial; //  0x88 Size(8)
	Unknown PhysicalMaterialMap; //  0x90 Size(40)
	Unknown Parent; //  0xd0 Size(8)
	char bHasStaticPermutationResource; //  0xd8 Size(1)
	char bOverrideSubsurfaceProfile; //  0xd8 Size(1)
	Unknown ScalarParameterValues; //  0xe0 Size(10)
	Unknown VectorParameterValues; //  0xf0 Size(10)
	Unknown TextureParameterValues; //  0x100 Size(10)
	Unknown RuntimeVirtualTextureParameterValues; //  0x110 Size(10)
	Unknown FontParameterValues; //  0x120 Size(10)
	Unknown BasePropertyOverrides; //  0x130 Size(8)
	Unknown StaticParameters; //  0x148 Size(40)
	Unknown CachedLayerParameters; //  0x188 Size(1a0)
	Unknown CachedReferencedTextures; //  0x328 Size(10)
};

// Class Engine.MaterialInstanceConstant
struct UMaterialInstanceConstant : UMaterialInstance {
	Unknown PhysMaterialMask; //  0x408 Size(8)

	Unknown K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetVectorParameterValue(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3d7c330>
};

// Class Engine.BlueprintGeneratedClass
struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; //  0x2d0 Size(4)
	char bHasNativizedParent; //  0x2d4 Size(1)
	char bHasCookedComponentInstancingData; //  0x2d4 Size(1)
	Unknown DynamicBindingObjects; //  0x2d8 Size(10)
	Unknown ComponentTemplates; //  0x2e8 Size(10)
	Unknown Timelines; //  0x2f8 Size(10)
	Unknown ComponentClassOverrides; //  0x308 Size(10)
	Unknown SimpleConstructionScript; //  0x318 Size(8)
	Unknown InheritableComponentHandler; //  0x320 Size(8)
	Unknown UberGraphFramePointerProperty; //  0x328 Size(8)
	Unknown UberGraphFunction; //  0x338 Size(8)
	Unknown CookedComponentInstancingData; //  0x340 Size(50)
};

// Class Engine.CameraActor
struct ACameraActor : UActor {
	Unknown AutoActivateForPlayer; //  0x310 Size(1)
	Unknown CameraComponent; //  0x318 Size(8)
	Unknown SceneComponent; //  0x320 Size(8)
	char bConstrainAspectRatio; //  0x330 Size(1)
	float AspectRatio; //  0x334 Size(4)
	float FOVAngle; //  0x338 Size(4)
	float PostProcessBlendWeight; //  0x33c Size(4)
	Unknown PostProcessSettings; //  0x340 Size(5c0)

	int32_t GetAutoActivatePlayerIndex(); // Function Engine.CameraActor.GetAutoActivatePlayerIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3c9cd90>
};

// Class Engine.SoundBase
struct USoundBase : Object {
	Unknown SoundClassObject; //  0x28 Size(8)
	char bDeb; //  0x30 Size(1)
	char bOverrideConcurrency; //  0x30 Size(1)
	char bOutputToBusOnly; //  0x30 Size(1)
	char bHasDelayNode; //  0x30 Size(1)
	char bHasConcatenatorNode; //  0x30 Size(1)
	char bBypassVolumeScaleForPriority; //  0x30 Size(1)
	Unknown VirtualizationMode; //  0x31 Size(1)
	Unknown ConcurrencySet; //  0x88 Size(50)
	Unknown ConcurrencyOverrides; //  0xd8 Size(20)
	float Duration; //  0xf8 Size(4)
	float MaxDistance; //  0xfc Size(4)
	float TotalSamples; //  0x100 Size(4)
	float Priority; //  0x104 Size(4)
	Unknown AttenuationSettings; //  0x108 Size(8)
	Unknown Modulation; //  0x110 Size(10)
	Unknown SoundSubmixObject; //  0x120 Size(8)
	Unknown SoundSubmixSends; //  0x128 Size(10)
	Unknown SourceEffectChain; //  0x138 Size(8)
	Unknown BusSends; //  0x140 Size(10)
	Unknown PreEffectBusSends; //  0x150 Size(10)
};

// Class Engine.SoundWave
struct USoundWave : USoundBase {
	int32_t CompressionQuality; //  0x160 Size(4)
	int32_t StreamingPriority; //  0x164 Size(4)
	Unknown SampleRateQuality; //  0x168 Size(1)
	Unknown SoundGroup; //  0x16a Size(1)
	char bLooping; //  0x16b Size(1)
	char bStreaming; //  0x16b Size(1)
	char bSeekableStreaming; //  0x16b Size(1)
	Unknown LoadingBehavior; //  0x16c Size(1)
	char bMature; //  0x16d Size(1)
	char bManualWordWrap; //  0x16d Size(1)
	char bSingleLine; //  0x16d Size(1)
	char bIsAmbisonics; //  0x16e Size(1)
	Unknown FrequenciesToAnalyze; //  0x170 Size(10)
	Unknown CookedSpectralTimeData; //  0x180 Size(10)
	Unknown CookedEnvelopeTimeData; //  0x190 Size(10)
	int32_t InitialChunkSize; //  0x1a0 Size(4)
	struct FString SpokenText; //  0x1e8 Size(10)
	float SubtitlePriority; //  0x1f8 Size(4)
	float Volume; //  0x1fc Size(4)
	float Pitch; //  0x200 Size(4)
	int32_t NumChannels; //  0x204 Size(4)
	int32_t SampleRate; //  0x208 Size(4)
	Unknown Subtitles; //  0x218 Size(10)
	Unknown Curves; //  0x228 Size(8)
	Unknown InternalCurves; //  0x230 Size(8)
};

// Class Engine.BlueprintCore
struct UBlueprintCore : Object {
	Unknown SkeletonGeneratedClass; //  0x28 Size(8)
	Unknown GeneratedClass; //  0x30 Size(8)
	char bLegacyNeedToPurgeSkelRefs; //  0x38 Size(1)
	Unknown BlueprintGuid; //  0x3c Size(10)
};

// Class Engine.Blueprint
struct UBlueprint : UBlueprintCore {
	Unknown ParentClass; //  0x50 Size(8)
	Unknown BlueprintType; //  0x58 Size(1)
	char bRecompileOnLoad; //  0x59 Size(1)
	char bHasBeenRegenerated; //  0x59 Size(1)
	char bIsRegeneratingOnLoad; //  0x59 Size(1)
	int32_t BlueprintSystemVersion; //  0x5c Size(4)
	Unknown SimpleConstructionScript; //  0x60 Size(8)
	Unknown ComponentTemplates; //  0x68 Size(10)
	Unknown Timelines; //  0x78 Size(10)
	Unknown ComponentClassOverrides; //  0x88 Size(10)
	Unknown InheritableComponentHandler; //  0x98 Size(8)
};

// Class Engine.MKChannelEx
struct UMKChannelEx : Object {
	Unknown SelfChannel; //  0x30 Size(8)
};

// Class Engine.Channel
struct UChannel : UMKChannelEx {
	Unknown Connection; //  0x38 Size(8)
};

// Class Engine.MKActorChannelEx
struct UMKActorChannelEx : UChannel {
	Unknown SelfActorChannel; //  0xa0 Size(8)
};

// Class Engine.ActorChannel
struct UActorChannel : UMKActorChannelEx {
	Unknown Actor; //  0xa8 Size(8)
	Unknown CreateSubObjects; //  0x198 Size(10)
};

// Class Engine.AnimationAsset
struct UAnimationAsset : Object {
	Unknown Skeleton; //  0x38 Size(8)
	Unknown MetaData; //  0x60 Size(10)
	Unknown AssetUserData; //  0x70 Size(10)
};

// Class Engine.BlendSpaceBase
struct UBlendSpaceBase : UAnimationAsset {
	char bRotationBlendInMeshSpace; //  0x88 Size(1)
	float AnimLength; //  0x8c Size(4)
	Unknown InterpolationParam; //  0x90 Size(18)
	float TargetWeightInterpolationSpeedPerSec; //  0xa8 Size(4)
	Unknown NotifyTriggerMode; //  0xac Size(1)
	Unknown PerBoneBlend; //  0xb0 Size(10)
	int32_t SampleIndexWithMarkers; //  0xc0 Size(4)
	Unknown SampleData; //  0xc8 Size(10)
	Unknown GridSamples; //  0xd8 Size(10)
	Unknown BlendParameters; //  0xe8 Size(60)
};

// Class Engine.BlendSpace
struct UBlendSpace : UBlendSpaceBase {
	Unknown AxisToScaleAnimation; //  0x148 Size(1)
};

// Class Engine.BlendSpace1D
struct UBlendSpace1D : UBlendSpaceBase {
	char bScaleAnimation; //  0x148 Size(1)
};

// Class Engine.AISystemBase
struct UAISystemBase : Object {
	Unknown AISystemClassName; //  0x28 Size(18)
	struct FName AISystemModuleName; //  0x40 Size(8)
	char bInstantiateAISystemOnClient; //  0x50 Size(1)
};

// Class Engine.AmbientSound
struct AAmbientSound : UActor {
	Unknown AudioComponent; //  0x310 Size(8)

	void Stop(); // Function Engine.AmbientSound.Stop(Final|Native|Public|BlueprintCallable) // <Game+0x3c5d570>
};

// Class Engine.AnimationSettings
struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; //  0x38 Size(4)
	Unknown KeyEndEffectorsMatchNameArray; //  0x40 Size(10)
	char ForceRecompression; //  0x50 Size(1)
	char bOnlyCheckForMissingSkeletalMeshes; //  0x51 Size(1)
	char bForceBelowThreshold; //  0x52 Size(1)
	char bFirstRecompressUsingCurrentOrDefault; //  0x53 Size(1)
	char bRaiseMaxErrorToExisting; //  0x54 Size(1)
	char bEnablePerformanceLog; //  0x55 Size(1)
	char bStripAnimationDataOnDedicatedServer; //  0x56 Size(1)
	char bTickAnimationOnSkeletalMeshInit; //  0x57 Size(1)
};

// Class Engine.AnimBlueprint
struct UAnimBlueprint : UBlueprint {
	Unknown TargetSkeleton; //  0xa8 Size(8)
	Unknown Groups; //  0xb0 Size(10)
	char bUseMultiThreadedAnimationUpdate; //  0xc0 Size(1)
	char bWarnAboutBlueprintUsage; //  0xc1 Size(1)
};

// Class Engine.AnimBlueprintGeneratedClass
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	Unknown BakedStateMachines; //  0x3d0 Size(10)
	Unknown TargetSkeleton; //  0x3e0 Size(8)
	Unknown AnimNotifies; //  0x3e8 Size(10)
	Unknown OrderedSavedPoseIndicesMap; //  0x3f8 Size(50)
	Unknown SyncGroupNames; //  0x4c8 Size(10)
	Unknown EvaluateGraphExposedInputs; //  0x4d8 Size(10)
	Unknown GraphAssetPlayerInformation; //  0x4e8 Size(50)
	Unknown GraphBlendOptions; //  0x538 Size(50)
};

// Class Engine.AnimBoneCompressionCodec
struct UAnimBoneCompressionCodec : Object {
	struct FString Description; //  0x28 Size(10)
};

// Class Engine.AnimBoneCompressionSettings
struct UAnimBoneCompressionSettings : Object {
	Unknown Codecs; //  0x28 Size(10)
};

// Class Engine.AnimClassData
struct UAnimClassData : Object {
	Unknown BakedStateMachines; //  0x30 Size(10)
	Unknown TargetSkeleton; //  0x40 Size(8)
	Unknown AnimNotifies; //  0x48 Size(10)
	Unknown OrderedSavedPoseIndicesMap; //  0x58 Size(50)
	Unknown AnimBlueprintFunctions; //  0xa8 Size(10)
	Unknown AnimBlueprintFunctionData; //  0xb8 Size(10)
	Unknown AnimNodeProperties; //  0xc8 Size(10)
	Unknown LinkedAnimGraphNodeProperties; //  0xe8 Size(10)
	Unknown LinkedAnimLayerNodeProperties; //  0x108 Size(10)
	Unknown PreUpdateNodeProperties; //  0x128 Size(10)
	Unknown DynamicResetNodeProperties; //  0x148 Size(10)
	Unknown StateMachineNodeProperties; //  0x168 Size(10)
	Unknown InitializationNodeProperties; //  0x188 Size(10)
	Unknown GraphNameAssetPlayers; //  0x1a8 Size(50)
	Unknown SyncGroupNames; //  0x1f8 Size(10)
	Unknown EvaluateGraphExposedInputs; //  0x208 Size(10)
	Unknown GraphBlendOptions; //  0x218 Size(50)
};

// Class Engine.AnimSequenceBase
struct UAnimSequenceBase : UAnimationAsset {
	Unknown Notifies; //  0x80 Size(10)
	float SequenceLength; //  0x90 Size(4)
	float RateScale; //  0x94 Size(4)
	Unknown RawCurveData; //  0x98 Size(10)

	float GetPlayLength(); // Function Engine.AnimSequenceBase.GetPlayLength(Native|Public|BlueprintCallable) // <Game+0x3c76cb0>
};

// Class Engine.AnimComposite
struct UAnimComposite : UAnimCompositeBase {
	Unknown AnimationTrack; //  0xa8 Size(10)
};

// Class Engine.AnimCompress
struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton; //  0x38 Size(1)
	Unknown TranslationCompressionFormat; //  0x3c Size(1)
	Unknown RotationCompressionFormat; //  0x3d Size(1)
	Unknown ScaleCompressionFormat; //  0x3e Size(1)
};

// Class Engine.AnimCompress_RemoveLinearKeys
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; //  0x40 Size(4)
	float MaxAngleDiff; //  0x44 Size(4)
	float MaxScaleDiff; //  0x48 Size(4)
	float MaxEffectorDiff; //  0x4c Size(4)
	float MinEffectorDiff; //  0x50 Size(4)
	float EffectorDiffSocket; //  0x54 Size(4)
	float ParentKeyScale; //  0x58 Size(4)
	char bRetarget; //  0x5c Size(1)
	char bActuallyFilterLinearKeys; //  0x5c Size(1)
};

// Class Engine.AnimCompress_PerTrackCompression
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; //  0x60 Size(4)
	float MaxPosDiffBitwise; //  0x64 Size(4)
	float MaxAngleDiffBitwise; //  0x68 Size(4)
	float MaxScaleDiffBitwise; //  0x6c Size(4)
	Unknown AllowedRotationFormats; //  0x70 Size(10)
	Unknown AllowedTranslationFormats; //  0x80 Size(10)
	Unknown AllowedScaleFormats; //  0x90 Size(10)
	char bResampleAnimation; //  0xa0 Size(1)
	float ResampledFramerate; //  0xa4 Size(4)
	int32_t MinKeysForResampling; //  0xa8 Size(4)
	char bUseAdaptiveError; //  0xac Size(1)
	char bUseOverrideForEndEffectors; //  0xac Size(1)
	int32_t TrackHeightBias; //  0xb0 Size(4)
	float ParentingDivisor; //  0xb4 Size(4)
	float ParentingDivisorExponent; //  0xb8 Size(4)
	char bUseAdaptiveError2; //  0xbc Size(1)
	float RotationErrorSourceRatio; //  0xc0 Size(4)
	float TranslationErrorSourceRatio; //  0xc4 Size(4)
	float ScaleErrorSourceRatio; //  0xc8 Size(4)
	float MaxErrorPerTrackRatio; //  0xcc Size(4)
	float PerturbationProbeSize; //  0xd0 Size(4)
};

// Class Engine.AnimCompress_RemoveEverySecondKey
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; //  0x40 Size(4)
	char bStartAtSecondKey; //  0x44 Size(1)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; //  0x40 Size(4)
	float MaxAngleDiff; //  0x44 Size(4)
	float MaxScaleDiff; //  0x48 Size(4)
};

// Class Engine.AnimCurveCompressionSettings
struct UAnimCurveCompressionSettings : Object {
	Unknown Codec; //  0x28 Size(8)
};

// Class Engine.AnimMontage
struct UAnimMontage : UAnimCompositeBase {
	Unknown BlendIn; //  0xa8 Size(30)
	float BlendInTime; //  0xd8 Size(4)
	Unknown BlendOut; //  0xe0 Size(30)
	float BlendOutTime; //  0x110 Size(4)
	float BlendOutTriggerTime; //  0x114 Size(4)
	struct FName SyncGroup; //  0x118 Size(8)
	int32_t SyncSlotIndex; //  0x120 Size(4)
	Unknown MarkerData; //  0x128 Size(20)
	Unknown CompositeSections; //  0x148 Size(10)
	Unknown SlotAnimTracks; //  0x158 Size(10)
	Unknown BranchingPoints; //  0x168 Size(10)
	char bEnableRootMotionTranslatio; //  0x178 Size(1)
	char bEnableRootMotionRotation; //  0x179 Size(1)
	char bEnableAutoBlendOut; //  0x17a Size(1)
	Unknown RootMotionRootLock; //  0x17b Size(1)
	Unknown BranchingPointMarkers; //  0x180 Size(10)
	Unknown BranchingPointStateNotifyIndices; //  0x190 Size(10)
	Unknown TimeStretchCurve; //  0x1a0 Size(28)
	struct FName TimeStretchCurveName; //  0x1c8 Size(8)

	float GetDefaultBlendOutTime(); // Function Engine.AnimMontage.GetDefaultBlendOutTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3284800>
};

// Class Engine.AnimNotify_PlayParticleEffect
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	Unknown PSTemplate; //  0x38 Size(8)
	Unknown LocationOffset; //  0x40 Size(c)
	Unknown RotationOffset; //  0x4c Size(c)
	Unknown Scale; //  0x58 Size(c)
	char Attached; //  0x80 Size(1)
	struct FName SocketName; //  0x84 Size(8)
};

// Class Engine.AnimNotify_PlaySound
struct UAnimNotify_PlaySound : UAnimNotify {
	Unknown Sound; //  0x38 Size(8)
	float VolumeMultiplier; //  0x40 Size(4)
	float PitchMultiplier; //  0x44 Size(4)
	char bFollow; //  0x48 Size(1)
	struct FName AttachName; //  0x4c Size(8)
};

// Class Engine.AnimNotifyState_TimedParticleEffect
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	Unknown PSTemplate; //  0x30 Size(8)
	struct FName SocketName; //  0x38 Size(8)
	Unknown LocationOffset; //  0x40 Size(c)
	Unknown RotationOffset; //  0x4c Size(c)
	char bDestroyAtEnd; //  0x58 Size(1)
};

// Class Engine.AnimNotifyState_Trail
struct UAnimNotifyState_Trail : UAnimNotifyState {
	Unknown PSTemplate; //  0x30 Size(8)
	struct FName FirstSocketName; //  0x38 Size(8)
	struct FName SecondSocketName; //  0x40 Size(8)
	Unknown WidthScaleMode; //  0x48 Size(1)
	struct FName WidthScaleCurve; //  0x4c Size(8)
	char bRecycleSpawnedSystems; //  0x54 Size(1)

	Unknown OverridePSTemplate(Unknown MeshComp, Unknown Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate(Event|Public|BlueprintEvent|Const) // <Game+0x23a73f0>
};

// Class Engine.AnimSequence
struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; //  0xa8 Size(4)
	Unknown TrackToSkeletonMapTable; //  0xb0 Size(10)
	Unknown BoneCompressionSettings; //  0xd0 Size(8)
	Unknown CurveCompressionSettings; //  0xd8 Size(8)
	Unknown AdditiveAnimType; //  0x150 Size(1)
	Unknown RefPoseType; //  0x151 Size(1)
	Unknown RefPoseSeq; //  0x158 Size(8)
	int32_t RefFrameIndex; //  0x160 Size(4)
	struct FName RetargetSource; //  0x164 Size(8)
	Unknown Interpolation; //  0x16c Size(1)
	char bEnableRootMotion; //  0x16d Size(1)
	Unknown RootMotionRootLock; //  0x16e Size(1)
	char bForceRootLock; //  0x16f Size(1)
	char bUseNormalizedRootMotionScale; //  0x170 Size(1)
	char bRootMotionSettingsCopiedFromMontage; //  0x171 Size(1)
	Unknown AuthoredSyncMarkers; //  0x178 Size(10)
};

// Class Engine.AnimSet
struct UAnimSet : Object {
	char bAnimRotationOnly; //  0x28 Size(1)
	Unknown TrackBoneNames; //  0x30 Size(10)
	Unknown LinkupCache; //  0x40 Size(10)
	Unknown BoneUseAnimTranslation; //  0x50 Size(10)
	Unknown ForceUseMeshTranslation; //  0x60 Size(10)
	Unknown UseTranslationBoneNames; //  0x70 Size(10)
	Unknown ForceMeshTranslationBoneNames; //  0x80 Size(10)
	struct FName PreviewSkelMeshName; //  0x90 Size(8)
	struct FName BestRatioSkelMeshName; //  0x98 Size(8)
};

// Class Engine.AnimSingleNodeInstance
struct UAnimSingleNodeInstance : UAnimInstance {
	Unknown CurrentAsset; //  0x268 Size(8)
	struct FDelegate PostEvaluateAnimEvent; //  0x270 Size(10)

	void StopAnim(); // Function Engine.AnimSingleNodeInstance.StopAnim(Final|Native|Public|BlueprintCallable) // <Game+0x3c774c0>
};

// Class Engine.AnimStreamable
struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; //  0xa8 Size(4)
	Unknown Interpolation; //  0xac Size(1)
	struct FName RetargetSource; //  0xb0 Size(8)
	Unknown BoneCompressionSettings; //  0xc8 Size(8)
	Unknown CurveCompressionSettings; //  0xd0 Size(8)
	char bEnableRootMotion; //  0xd8 Size(1)
	Unknown RootMotionRootLock; //  0xd9 Size(1)
	char bForceRootLock; //  0xda Size(1)
	char bUseNormalizedRootMotionScale; //  0xdb Size(1)
};

// Class Engine.AssetExportTask
struct UAssetExportTask : Object {
	Unknown Object; //  0x28 Size(8)
	Unknown Exporter; //  0x30 Size(8)
	struct FString Filename; //  0x38 Size(10)
	char bSelected; //  0x48 Size(1)
	char bReplaceIdentical; //  0x49 Size(1)
	char bPrompt; //  0x4a Size(1)
	char bAutomated; //  0x4b Size(1)
	char bUseFileArchive; //  0x4c Size(1)
	char bWriteEmptyFiles; //  0x4d Size(1)
	Unknown IgnoreObjectList; //  0x50 Size(10)
	Unknown options; //  0x60 Size(8)
	Unknown Errors; //  0x68 Size(10)
};

// Class Engine.AssetManagerSettings
struct UAssetManagerSettings : UDeveloperSettings {
	Unknown PrimaryAssetTypesToScan; //  0x38 Size(10)
	Unknown DirectoriesToExclude; //  0x48 Size(10)
	Unknown PrimaryAssetRules; //  0x58 Size(10)
	Unknown CustomPrimaryAssetRules; //  0x68 Size(10)
	char bOnlyCookProductionAssets; //  0x78 Size(1)
	char bShouldManagerDetermineTypeAndName; //  0x79 Size(1)
	char bShouldGuessTypeAndNameInEditor; //  0x7a Size(1)
	char bShouldAcquireMissingChunksOnLoad; //  0x7b Size(1)
	Unknown PrimaryAssetIdRedirects; //  0x80 Size(10)
	Unknown PrimaryAssetTypeRedirects; //  0x90 Size(10)
	Unknown AssetPathRedirects; //  0xa0 Size(10)
	Unknown MetaDataTagsForAssetRegistry; //  0xb0 Size(50)
	char bUsePathExcludedFromScan; //  0x100 Size(1)
	char bRemoveRedundantDirectroyChunks; //  0x101 Size(1)
};

// Class Engine.AssetMappingTable
struct UAssetMappingTable : Object {
	Unknown MappedAssets; //  0x28 Size(10)
};

// Class Engine.AsyncActionHandleSaveGame
struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; //  0x30 Size(10)
	Unknown SaveGameObject; //  0x60 Size(8)

	Unknown AsyncSaveGameToSlot(Unknown WorldContextObject, Unknown SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot(Final|Native|Static|Public|BlueprintCallable) // <Game+0x3c80b30>
};

// Class Engine.AsyncActionLoadPrimaryAsset
struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; //  0x78 Size(10)

	Unknown AsyncLoadPrimaryAsset(Unknown WorldContextObject, Unknown PrimaryAsset, Unknown& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x3c805f0>
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; //  0x78 Size(10)

	Unknown AsyncLoadPrimaryAssetClass(Unknown WorldContextObject, Unknown PrimaryAsset, Unknown& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClass.AsyncLoadPrimaryAssetClass(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x3c80730>
};

// Class Engine.AsyncActionLoadPrimaryAssetList
struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; //  0x78 Size(10)

	Unknown AsyncLoadPrimaryAssetList(Unknown WorldContextObject, Unknown& PrimaryAssetList, Unknown& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x3c809d0>
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; //  0x78 Size(10)

	Unknown AsyncLoadPrimaryAssetClassList(Unknown WorldContextObject, Unknown& PrimaryAssetList, Unknown& LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x3c80870>
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; //  0x78 Size(10)

	Unknown AsyncChangeBundleStateForPrimaryAssetList(Unknown WorldContextObject, Unknown& PrimaryAssetList, Unknown& AddBundles, Unknown& RemoveBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <Game+0x3c80310>
};

// Class Engine.AtmosphericFog
struct AAtmosphericFog : AInfo {
	Unknown AtmosphericFogComponent; //  0x310 Size(8)
};

// Class Engine.AtmosphericFogComponent
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; //  0x238 Size(4)
	float FogMultiplier; //  0x23c Size(4)
	float DensityMultiplier; //  0x240 Size(4)
	float DensityOffset; //  0x244 Size(4)
	float DistanceScale; //  0x248 Size(4)
	float AltitudeScale; //  0x24c Size(4)
	float DistanceOffset; //  0x250 Size(4)
	float GroundOffset; //  0x254 Size(4)
	float StartDistance; //  0x258 Size(4)
	float SunDiscScale; //  0x25c Size(4)
	float DefaultBrightness; //  0x260 Size(4)
	Unknown DefaultLightColor; //  0x264 Size(4)
	char bDisableSunDisk; //  0x268 Size(1)
	char bAtmosphereAffectsSunIlluminance; //  0x268 Size(1)
	char bDisableGroundScattering; //  0x268 Size(1)
	Unknown PrecomputeParams; //  0x26c Size(2c)
	Unknown TransmittanceTexture; //  0x298 Size(8)
	Unknown IrradianceTexture; //  0x2a0 Size(8)

	void StartPrecompute(); // Function Engine.AtmosphericFogComponent.StartPrecompute(Final|Native|Public|BlueprintCallable) // <Game+0x151a800>
};

// Class Engine.AudioSettings
struct UAudioSettings : UDeveloperSettings {
	Unknown DefaultSoundClassName; //  0x38 Size(18)
	Unknown DefaultMediaSoundClassName; //  0x50 Size(18)
	Unknown DefaultSoundConcurrencyName; //  0x68 Size(18)
	Unknown DefaultBaseSoundMix; //  0x80 Size(18)
	Unknown VoiPSoundClass; //  0x98 Size(18)
	Unknown MasterSubmix; //  0xb0 Size(18)
	Unknown ReverbSubmix; //  0xc8 Size(18)
	Unknown EQSubmix; //  0xe0 Size(18)
	Unknown VoiPSampleRate; //  0xf8 Size(4)
	float DefaultReverbSendLevel; //  0xfc Size(4)
	int32_t MaximumConcurrentStreams; //  0x100 Size(4)
	float Glob; //  0x104 Size(4)
	float GlobmumConcurrentSt; //  0x108 Size(4)
	Unknown QualityLevels; //  0x110 Size(10)
	char bAllowPlayWhenSilent; //  0x120 Size(1)
	char bDisableMasterEQ; //  0x120 Size(1)
	char bAllowCenterChannel3DPanning; //  0x120 Size(1)
	uint32_t NumStoppingSources; //  0x124 Size(4)
	Unknown PanningMethod; //  0x128 Size(1)
	Unknown MonoChannelUpmixMethod; //  0x129 Size(1)
	struct FString DialogueFilenameFormat; //  0x130 Size(10)
};

// Class Engine.AudioVolume
struct AAudioVolume : AVolume {
	float Priority; //  0x348 Size(4)
	char bEnabled; //  0x34c Size(1)
	Unknown Settings; //  0x350 Size(20)
	Unknown AmbientZoneSettings; //  0x370 Size(24)

	void SetReverbSettings(Unknown& NewReverbSettings); // Function Engine.AudioVolume.SetReverbSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x3c84a70>
};

// Class Engine.AutoDestroySubsystem
struct UAutoDestroySubsystem : UWorldSubsystem {
	Unknown ActorsToPoll; //  0x38 Size(10)

	void OnActorEndPlay(Unknown Actor, Unknown EndPlayReason); // Function Engine.AutoDestroySubsystem.OnActorEndPlay(Final|Native|Private) // <Game+0x3c8b230>
};

// Class Engine.AutomationTestSettings
struct UAutomationTestSettings : Object {
	Unknown EngineTestModules; //  0x28 Size(10)
	Unknown EditorTestModules; //  0x38 Size(10)
	Unknown AutomationTestmap; //  0x48 Size(18)
	Unknown EditorPerformanceTestMaps; //  0x60 Size(10)
	Unknown AssetsToOpen; //  0x70 Size(10)
	Unknown BuildPromotionTest; //  0x80 Size(1f0)
	Unknown MaterialEditorPromotionTest; //  0x270 Size(30)
	Unknown ParticleEditorPromotionTest; //  0x2a0 Size(10)
	Unknown BlueprintEditorPromotionTest; //  0x2b0 Size(30)
	Unknown TestLevelFolders; //  0x2e0 Size(10)
	Unknown ExternalTools; //  0x2f0 Size(10)
	Unknown ImportExportTestDefinitions; //  0x300 Size(10)
	Unknown LaunchOnSettings; //  0x310 Size(10)
	Unknown DefaultScreenshotResolution; //  0x320 Size(8)
};

// Class Engine.AvoidanceManager
struct UAvoidanceManager : Object {
	float DefaultTimeToLive; //  0x30 Size(4)
	float LockTimeAfterAvoid; //  0x34 Size(4)
	float LockTimeAfterClean; //  0x38 Size(4)
	float DeltaTimeToPredict; //  0x3c Size(4)
	float ArtificialRadiusExpansion; //  0x40 Size(4)
	float TestHeightDifference; //  0x44 Size(4)
	float HeightCheckMargin; //  0x48 Size(4)

	char RegisterMovementComponent(Unknown MovementComp, float AvoidanceWeight); // Function Engine.AvoidanceManager.RegisterMovementComponent(Final|Native|Public|BlueprintCallable) // <Game+0x3c8b2f0>
};

// Class Engine.BandwidthTestActor
struct ABandwidthTestActor : UActor {
	Unknown BandwidthGenerator; //  0x310 Size(20)
};

// Class Engine.BillboardComponent
struct UBillboardComponent : UPrimitiveComponent {
	Unknown Sprite; //  0x4b8 Size(8)
	char bIsScreenSizeScaled; //  0x4c0 Size(1)
	float ScreenSize; //  0x4c4 Size(4)
	float U; //  0x4c8 Size(4)
	float UL; //  0x4cc Size(4)
	float V; //  0x4d0 Size(4)
	float VL; //  0x4d4 Size(4)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetUV(Native|Public|BlueprintCallable) // <Game+0x3c8b5d0>
};

// Class Engine.Skeleton
struct USkeleton : Object {
	Unknown BoneTree; //  0x38 Size(10)
	Unknown RefLocalPoses; //  0x48 Size(10)
	Unknown VirtualBoneGuid; //  0x170 Size(10)
	Unknown VirtualBones; //  0x180 Size(10)
	Unknown Sockets; //  0x190 Size(10)
	Unknown SmartNames; //  0x1f0 Size(50)
	Unknown BlendProfiles; //  0x270 Size(10)
	Unknown SlotGroups; //  0x280 Size(10)
	Unknown AssetUserData; //  0x358 Size(10)
};

// Class Engine.BlendProfile
struct UBlendProfile : Object {
	Unknown OwningSkeleton; //  0x30 Size(8)
	Unknown ProfileEntries; //  0x38 Size(10)
};

// Class Engine.PlatformGameInstance
struct UPlatformGameInstance : UGameInstance {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; //  0x218 Size(10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; //  0x228 Size(10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgro; //  0x238 Size(10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; //  0x248 Size(10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; //  0x258 Size(10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadReso; //  0x268 Size(10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; //  0x278 Size(10)
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; //  0x288 Size(10)
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; //  0x298 Size(10)
	struct FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; //  0x2a8 Size(10)
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNo; //  0x2b8 Size(10)
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; //  0x2c8 Size(10)
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; //  0x2d8 Size(10)
};

// Class Engine.BodySetup
struct UBodySetup : Object {
	Unknown AggGeom; //  0x28 Size(58)
	struct FName BoneName; //  0x80 Size(8)
	Unknown PhysicsType; //  0x88 Size(1)
	char bAlwaysFullAnimWeight; //  0x89 Size(1)
	char bConsiderForBounds; //  0x89 Size(1)
	char bMeshCollideAll; //  0x89 Size(1)
	char bDoubleSidedGeometry; //  0x89 Size(1)
	char bGenerateNonMirroredCollision; //  0x89 Size(1)
	char bSharedCookedData; //  0x89 Size(1)
	char bGenerateMirroredCollision; //  0x89 Size(1)
	char bSupportUVsAndFaceRemap; //  0x89 Size(1)
	Unknown CollisionReponse; //  0x8b Size(1)
	Unknown CollisionTraceFlag; //  0x8c Size(1)
	Unknown PhysMaterial; //  0x90 Size(8)
	Unknown WalkableSlopeOverride; //  0x98 Size(10)
	Unknown DefaultInstance; //  0x120 Size(190)
	Unknown BuildScale3D; //  0x2b8 Size(c)
};

// Class Engine.BoneMaskFilter
struct UBoneMaskFilter : Object {
	Unknown BlendPoses; //  0x28 Size(10)
};

// Class Engine.BookMark
struct UBookMark : UBookmarkBase {
	Unknown Location; //  0x28 Size(c)
	Unknown Rotation; //  0x34 Size(c)
	Unknown HiddenLevels; //  0x40 Size(10)
};

// Class Engine.BookMark2D
struct UBookMark2D : UBookmarkBase {
	float Zoom2D; //  0x28 Size(4)
	Unknown Location; //  0x2c Size(8)
};

// Class Engine.ReflectionCapture
struct AReflectionCapture : UActor {
	Unknown CaptureComponent; //  0x310 Size(8)
};

// Class Engine.ReflectionCaptureComponent
struct UReflectionCaptureComponent : USceneComponent {
	Unknown VisualizationMesh; //  0x238 Size(8)
	Unknown CaptureOffsetComponent; //  0x240 Size(8)
	Unknown ReflectionSourceType; //  0x248 Size(1)
	Unknown Cubemap; //  0x250 Size(8)
	float SourceCubemapAngle; //  0x258 Size(4)
	float Brightness; //  0x25c Size(4)
	float DiffuseRadiance; //  0x260 Size(4)
	Unknown CaptureOffset; //  0x264 Size(c)
	Unknown MapBuildDataId; //  0x270 Size(10)
};

// Class Engine.BoxReflectionCaptureComponent
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; //  0x2c0 Size(4)
	Unknown PreviewInfluenceBox; //  0x2c8 Size(8)
	Unknown PreviewCaptureBox; //  0x2d0 Size(8)
};

// Class Engine.Breakpoint
struct UBreakpoint : Object {
	char bEnabled; //  0x28 Size(1)
	Unknown Node; //  0x30 Size(8)
	char bStepOnce; //  0x38 Size(1)
	char bStepOnce_WasPreviouslyDisabled; //  0x38 Size(1)
	char bStepOnce_RemoveAfterHit; //  0x38 Size(1)
};

// Class Engine.BrushBuilder
struct UBrushBuilder : Object {
	struct FString BitmapFilename; //  0x28 Size(10)
	struct FString Tooltip; //  0x38 Size(10)
	char NotifyBadParams; //  0x48 Size(1)
	Unknown Vertices; //  0x50 Size(10)
	Unknown Polys; //  0x60 Size(10)
	struct FName Layer; //  0x70 Size(8)
	char MergeCoplanars; //  0x78 Size(1)
};

// Class Engine.BrushComponent
struct UBrushComponent : UPrimitiveComponent {
	Unknown Brush; //  0x4b8 Size(8)
	Unknown BrushBodySetup; //  0x4c0 Size(8)
};

// Class Engine.ButtonStyleAsset
struct UButtonStyleAsset : Object {
	Unknown ButtonStyle; //  0x28 Size(278)
};

// Class Engine.CameraAnim
struct UCameraAnim : Object {
	Unknown CameraInterpGroup; //  0x28 Size(8)
	float AnimLength; //  0x30 Size(4)
	Unknown BoundingBox; //  0x34 Size(1c)
	char bRelativeToInitialTransform; //  0x50 Size(1)
	char bRelativeToInitialFOV; //  0x50 Size(1)
	float BaseFOV; //  0x54 Size(4)
	Unknown BasePostProcessSettings; //  0x60 Size(5c0)
	float BasePostProcessBlendWeight; //  0x620 Size(4)
};

// Class Engine.CameraAnimInst
struct UCameraAnimInst : Object {
	Unknown CamAnim; //  0x28 Size(8)
	Unknown InterpGroupInst; //  0x30 Size(8)
	float PlayRate; //  0x50 Size(4)
	Unknown MoveTrack; //  0x68 Size(8)
	Unknown MoveInst; //  0x70 Size(8)
	Unknown PlaySpace; //  0x78 Size(1)

	void Stop(char bImmediate); // Function Engine.CameraAnimInst.Stop(Final|Native|Public|BlueprintCallable) // <Game+0x3c9d7a0>
};

// Class Engine.CameraModifier_CameraShake
struct UCameraModifier_CameraShake : UCameraModifier {
	Unknown ActiveShakes; //  0x48 Size(10)
	Unknown ExpiredPooledShakesMap; //  0x58 Size(50)
	float SplitScreenShakeScale; //  0xa8 Size(4)
};

// Class Engine.CameraShake
struct UCameraShake : Object {
	char bSingleInstance; //  0x28 Size(1)
	float OscillationDuration; //  0x2c Size(4)
	float OscillationBlendInTime; //  0x30 Size(4)
	float OscillationBlendOutTime; //  0x34 Size(4)
	Unknown RotOscillation; //  0x38 Size(24)
	Unknown LocOscillation; //  0x5c Size(24)
	Unknown FOVOscillation; //  0x80 Size(c)
	float AnimPlayRate; //  0x8c Size(4)
	float AnimScale; //  0x90 Size(4)
	float AnimBlendInTime; //  0x94 Size(4)
	float AnimBlendOutTime; //  0x98 Size(4)
	float RandomAnimSegmentDuration; //  0x9c Size(4)
	Unknown Anim; //  0xa0 Size(8)
	char bRandomAnimSegment; //  0xa8 Size(1)
	Unknown CameraOwner; //  0xc0 Size(8)
	float ShakeScale; //  0x148 Size(4)
	float OscillatorTimeRemaining; //  0x14c Size(4)
	Unknown AnimInst; //  0x150 Size(8)

	void ReceiveStopShake(char bImmediately); // Function Engine.CameraShake.ReceiveStopShake(Event|Public|BlueprintEvent) // <Game+0x23a73f0>
};

// Class Engine.CameraShakeSourceActor
struct ACameraShakeSourceActor : UActor {
	Unknown CameraShakeSourceComponent; //  0x310 Size(8)
};

// Class Engine.CameraShakeSourceComponent
struct UCameraShakeSourceComponent : USceneComponent {
	Unknown Attenuation; //  0x238 Size(1)
	float InnerAttenuationRadius; //  0x23c Size(4)
	float OuterAttenuationRadius; //  0x240 Size(4)
	Unknown CameraShake; //  0x248 Size(8)
	char bAutoPlay; //  0x250 Size(1)

	void StopAllCameraShakes(char bImmediately); // Function Engine.CameraShakeSourceComponent.StopAllCameraShakes(Final|Native|Public|BlueprintCallable) // <Game+0x3ca1cb0>
};

// Class Engine.Canvas
struct UCanvas : Object {
	float OrgX; //  0x28 Size(4)
	float OrgY; //  0x2c Size(4)
	float ClipX; //  0x30 Size(4)
	float ClipY; //  0x34 Size(4)
	Unknown DrawColor; //  0x38 Size(4)
	char bCenterX; //  0x3c Size(1)
	char bCenterY; //  0x3c Size(1)
	char bNoSmooth; //  0x3c Size(1)
	int32_t SizeX; //  0x40 Size(4)
	int32_t SizeY; //  0x44 Size(4)
	Unknown ColorModulate; //  0x50 Size(10)
	Unknown DefaultTexture; //  0x60 Size(8)
	Unknown GradientTexture0; //  0x68 Size(8)
	Unknown ReporterGraph; //  0x70 Size(8)

	Unknown K2_TextSize(Unknown RenderFont, struct FString RenderText, Unknown Scale); // Function Engine.Canvas.K2_TextSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3ca1ae0>
};

// Class Engine.TextureRenderTarget
struct UTextureRenderTarget : UTexture {
	float TargetGamma; //  0xb8 Size(4)
};

// Class Engine.TextureRenderTarget2D
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; //  0xc0 Size(4)
	int32_t SizeY; //  0xc4 Size(4)
	Unknown ClearColor; //  0xc8 Size(10)
	Unknown AddressX; //  0xd8 Size(1)
	Unknown AddressY; //  0xd9 Size(1)
	char bForceLinearGamma; //  0xda Size(1)
	char bHDR; //  0xda Size(1)
	char bGPUSharedFlag; //  0xda Size(1)
	Unknown RenderTargetFormat; //  0xdb Size(1)
	char bAutoGenerateMips; //  0xdc Size(1)
	Unknown MipsSamplerFilter; //  0xdd Size(1)
	Unknown MipsAddressU; //  0xde Size(1)
	Unknown MipsAddressV; //  0xdf Size(1)
	Unknown OverrideFormat; //  0xe0 Size(1)
};

// Class Engine.CanvasRenderTarget2D
struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate; //  0xe8 Size(10)
	Unknown World; //  0xf8 Size(8)
	char bShouldClearRenderTargetOnReceiveUpdate; //  0x100 Size(1)

	void UpdateResource(); // Function Engine.CanvasRenderTarget2D.UpdateResource(Native|Public|BlueprintCallable) // <Game+0x3ca8ea0>
};

// Class Engine.ChaosPhysicalMaterial
struct UChaosPhysicalMaterial : Object {
	float Friction; //  0x28 Size(4)
	float StaticFriction; //  0x2c Size(4)
	float Restitution; //  0x30 Size(4)
	float LinearEtherDrag; //  0x34 Size(4)
	float AngularEtherDrag; //  0x38 Size(4)
	float SleepingLinearVelocityThreshold; //  0x3c Size(4)
	float SleepingAngularVelocityThreshold; //  0x40 Size(4)
};

// Class Engine.CheckBoxStyleAsset
struct UCheckBoxStyleAsset : Object {
	Unknown CheckBoxStyle; //  0x28 Size(580)
};

// Class Engine.ChildActorComponent
struct UChildActorComponent : USceneComponent {
	Unknown ChildActorClass; //  0x238 Size(8)
	Unknown ChildActor; //  0x240 Size(8)
	Unknown ChildActorTemplate; //  0x248 Size(8)

	void SetChildActorClass(Unknown InClass); // Function Engine.ChildActorComponent.SetChildActorClass(Final|Native|Public|BlueprintCallable) // <Game+0x3cb04c0>
};

// Class Engine.ChildConnection
struct UChildConnection : UNetConnection {
	Unknown Parent; //  0x1aa0 Size(8)
};

// Class Engine.PlatformInterfaceBase
struct UPlatformInterfaceBase : Object {
	Unknown AllDelegates; //  0x28 Size(10)
};

// Class Engine.CloudStorageBase
struct UCloudStorageBase : UPlatformInterfaceBase {
	Unknown LocalCloudFiles; //  0x38 Size(10)
	char bSuppressDelegateCalls; //  0x48 Size(1)
};

// Class Engine.CollisionProfile
struct UCollisionProfile : UDeveloperSettings {
	Unknown Profiles; //  0x38 Size(10)
	Unknown DefaultChannelResponses; //  0x48 Size(10)
	Unknown EditProfiles; //  0x58 Size(10)
	Unknown ProfileRedirects; //  0x68 Size(10)
	Unknown CollisionChannelRedirects; //  0x78 Size(10)
};

// Class Engine.ComponentDelegateBinding
struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	Unknown ComponentDelegateBindings; //  0x28 Size(10)
};

// Class Engine.CompositeCurveTable
struct UCompositeCurveTable : UCurveTable {
	Unknown ParentTables; //  0xa0 Size(10)
	Unknown OldParentTables; //  0xb0 Size(10)
};

// Class Engine.DataTable
struct UDataTable : Object {
	Unknown RowStruct; //  0x28 Size(8)
	char bStripFromClientBuilds; //  0x80 Size(1)
	char bIgnoreExtraFields; //  0x80 Size(1)
	char bIgnoreMissingFields; //  0x80 Size(1)
	struct FString ImportKeyField; //  0x88 Size(10)
};

// Class Engine.CompositeDataTable
struct UCompositeDataTable : UDataTable {
	Unknown ParentTables; //  0xc8 Size(10)
	Unknown OldParentTables; //  0xd8 Size(10)
};

// Class Engine.Console
struct UConsole : Object {
	Unknown ConsoleTargetPlayer; //  0x38 Size(8)
	Unknown DefaultTexture_Black; //  0x40 Size(8)
	Unknown DefaultTexture_White; //  0x48 Size(8)
	Unknown HistoryBuffer; //  0x68 Size(10)
};

// Class Engine.StreamingSettings
struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled; //  0x38 Size(1)
	char AsyncPostLoadEnabled; //  0x38 Size(1)
	char WarnIfTimeLimitExceeded; //  0x38 Size(1)
	float TimeLimitExceededMultiplier; //  0x3c Size(4)
	float TimeLimitExceededMinTime; //  0x40 Size(4)
	int32_t MinBulkDataSizeForAsyncLoading; //  0x44 Size(4)
	char UseBackgroundLevelStreaming; //  0x48 Size(1)
	char AsyncLoadingUseFullTimeLimit; //  0x48 Size(1)
	float AsyncLoadingTimeLimit; //  0x4c Size(4)
	float PriorityAsyncLoadingExtraTime; //  0x50 Size(4)
	float LevelStreamingActorsUpdateTimeLimit; //  0x54 Size(4)
	float PriorityLevelStreamingActorsUpdateExtraTime; //  0x58 Size(4)
	int32_t LevelStreamingComponentsRegistrationGranularity; //  0x5c Size(4)
	float LevelStreamingUnregisterComponentsTimeLimit; //  0x60 Size(4)
	int32_t LevelStreamingComponentsUnregistrationGranularity; //  0x64 Size(4)
	char FlushStreamingOnExit; //  0x68 Size(1)
	char EventDrivenLoaderEnabled; //  0x68 Size(1)
};

// Class Engine.Garb
struct UGarb : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; //  0x38 Size(4)
	char FlushStreamingOnGC; //  0x3c Size(1)
	char AllowParallelGC; //  0x3c Size(1)
	char IncrementalBeginDestroyEnabled; //  0x3c Size(1)
	char MultithreadedDestructionEnabled; //  0x3c Size(1)
	char CreateGCClusters; //  0x3c Size(1)
	char AssetClusteringEnabled; //  0x3c Size(1)
	char ActorClusteringEnabled; //  0x3c Size(1)
	char BlueprintClusteringEnabled; //  0x3c Size(1)
	char UseDisregardForGCOnDedicatedServers; //  0x3d Size(1)
	int32_t MinGCClusterSize; //  0x40 Size(4)
	int32_t NumRetriesBeforeForcingGC; //  0x44 Size(4)
	int32_t MaxObjectsNotConsideredByGC; //  0x48 Size(4)
	int32_t SizeOfPermanentObjectPool; //  0x4c Size(4)
	int32_t MaxObjectsInGame; //  0x50 Size(4)
	int32_t MaxObjectsInEditor; //  0x54 Size(4)
};

// Class Engine.CullDistanceVolume
struct ACullDistanceVolume : AVolume {
	Unknown CullDistances; //  0x348 Size(10)
	char bEnabled; //  0x358 Size(1)
};

// Class Engine.CurveFloat
struct UCurveFloat : UCurveBase {
	Unknown FloatCurve; //  0x30 Size(80)
	char bIsEventCurve; //  0xb0 Size(1)

	float GetFloatValue(float InTime); // Function Engine.CurveFloat.GetFloatValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3cb8960>
};

// Class Engine.CurveLinearColor
struct UCurveLinearColor : UCurveBase {
	Unknown FloatCurves; //  0x30 Size(200)
	float AdjustHue; //  0x230 Size(4)
	float AdjustSaturation; //  0x234 Size(4)
	float AdjustBrightness; //  0x238 Size(4)
	float AdjustBrightnessCurve; //  0x23c Size(4)
	float AdjustVibrance; //  0x240 Size(4)
	float AdjustMinAlpha; //  0x244 Size(4)
	float AdjustMaxAlpha; //  0x248 Size(4)

	Unknown GetLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetLinearColorValue(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x3cb89f0>
};

// Class Engine.Texture2D
struct UTexture2D : UTexture {
	int32_t LevelIndex; //  0xb8 Size(4)
	int32_t FirstResourceMemMip; //  0xbc Size(4)
	char bTemporarilyDisableStreaming; //  0xc0 Size(1)
	Unknown AddressX; //  0xc1 Size(1)
	Unknown AddressY; //  0xc2 Size(1)
	Unknown ImportedSize; //  0xc4 Size(8)

	int32_t Blueprint_GetSizeY(); // Function Engine.Texture2D.Blueprint_GetSizeY(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3e15b40>
};

// Class Engine.CurveLinearColorAtlas
struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; //  0xe8 Size(4)
	Unknown GradientCurves; //  0xf0 Size(10)

	char GetCurvePosition(Unknown InCurve, float& Position); // Function Engine.CurveLinearColorAtlas.GetCurvePosition(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x3cb8090>
};

// Class Engine.CurveVector
struct UCurveVector : UCurveBase {
	Unknown FloatCurves; //  0x30 Size(180)

	Unknown GetVectorValue(float InTime); // Function Engine.CurveVector.GetVectorValue(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x3cb8c80>
};

// Class Engine.DebugCameraController
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo; //  0x6f0 Size(1)
	char bIsFrozenRendering; //  0x6f0 Size(1)
	char bOverrideInitialMaxSpeed; //  0x6f0 Size(1)
	float OverrideInitialMaxSpeed; //  0x6f4 Size(4)
	char bIsOrbitingSelectedActor; //  0x6f8 Size(1)
	char bOrb; //  0x6f8 Size(1)
	char bEnableBufferVisualization; //  0x6f8 Size(1)
	char bEnableBufferVisualizationFullMode; //  0x6f8 Size(1)
	char bIsBufferVisualizationInputSetup; //  0x6f8 Size(1)
	char bLastDisplayEnabled; //  0x6f8 Size(1)
	Unknown DrawFrustum; //  0x700 Size(8)
	Unknown SelectedActor; //  0x708 Size(8)
	Unknown SelectedComponent; //  0x710 Size(8)
	Unknown SelectedHitPoint; //  0x718 Size(88)
	Unknown OriginalControllerRef; //  0x7a0 Size(8)
	Unknown OriginalPlayer; //  0x7a8 Size(8)
	float SpeedScale; //  0x7b0 Size(4)
	float InitialMaxSpeed; //  0x7b4 Size(4)
	float InitialAccel; //  0x7b8 Size(4)
	float InitialDecel; //  0x7bc Size(4)

	void ToggleDisplay(); // Function Engine.DebugCameraController.ToggleDisplay(Final|Native|Public|BlueprintCallable) // <Game+0x3cb8dc0>
};

// Class Engine.DebugCameraControllerSettings
struct UDebugCameraControllerSettings : UDeveloperSettings {
	Unknown CycleViewModes; //  0x38 Size(10)
};

// Class Engine.DecalActor
struct ADecalActor : UActor {
	Unknown Decal; //  0x310 Size(8)

	void SetDecalMaterial(Unknown NewDecalMaterial); // Function Engine.DecalActor.SetDecalMaterial(Final|Native|Public|BlueprintCallable) // <Game+0x3cbca40>
};

// Class Engine.DecalComponent
struct UDecalComponent : USceneComponent {
	Unknown DecalMaterial; //  0x238 Size(8)
	int32_t SortOrder; //  0x240 Size(4)
	float FadeScreenSize; //  0x244 Size(4)
	float FadeStartDelay; //  0x248 Size(4)
	float FadeDuration; //  0x24c Size(4)
	float FadeInDuration; //  0x250 Size(4)
	float FadeInStartDelay; //  0x254 Size(4)
	char bDestroyOwnerAfterFade; //  0x258 Size(1)
	Unknown DecalSize; //  0x25c Size(c)

	void SetSortOrder(int32_t Value); // Function Engine.DecalComponent.SetSortOrder(Final|Native|Public|BlueprintCallable) // <Game+0x3cbd1b0>
};

// Class Engine.MKDemoNetConnectionEx
struct UMKDemoNetConnectionEx : UNetConnection {
	Unknown SelfDemoNetConnection; //  0x1be8 Size(8)
};

// Class Engine.PendingNetGame
struct UPendingNetGame : Object {
	Unknown NetDriver; //  0x30 Size(8)
	Unknown DemoNetDriver; //  0x38 Size(8)
};

// Class Engine.TextureLODSettings
struct UTextureLODSettings : Object {
	Unknown TextureLODGroups; //  0x28 Size(10)
};

// Class Engine.DeviceProfile
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; //  0x38 Size(10)
	struct FString BaseProfileName; //  0x48 Size(10)
	Unknown Parent; //  0x58 Size(8)
	Unknown CVars; //  0x78 Size(10)
};

// Class Engine.DeviceProfileManager
struct UDeviceProfileManager : Object {
	Unknown Profiles; //  0x28 Size(10)
};

// Class Engine.DialogueVoice
struct UDialogueVoice : Object {
	Unknown gender; //  0x28 Size(1)
	Unknown Plurality; //  0x29 Size(1)
	Unknown LocalizationGUID; //  0x2c Size(10)
};

// Class Engine.DialogueWave
struct UDialogueWave : Object {
	char bMature; //  0x28 Size(1)
	char bOverride_SubtitleOverride; //  0x28 Size(1)
	struct FString SpokenText; //  0x30 Size(10)
	struct FString SubtitleOverride; //  0x40 Size(10)
	Unknown ContextMappings; //  0x50 Size(10)
	Unknown LocalizationGUID; //  0x60 Size(10)
};

// Class Engine.Light
struct ALight : UActor {
	Unknown LightComponent; //  0x310 Size(8)
	char bEnabled; //  0x318 Size(1)

	void ToggleEnabled(); // Function Engine.Light.ToggleEnabled(Final|Native|Public|BlueprintCallable) // <Game+0x3d62050>
};

// Class Engine.LightComponentBase
struct ULightComponentBase : USceneComponent {
	Unknown LightGuid; //  0x238 Size(10)
	float Brightness; //  0x248 Size(4)
	float Intensity; //  0x24c Size(4)
	Unknown LightColor; //  0x250 Size(4)
	char bAffectsWorld; //  0x254 Size(1)
	char CastShadows; //  0x254 Size(1)
	char CastStaticShadows; //  0x254 Size(1)
	char CastDynamicShadows; //  0x254 Size(1)
	char bAffectTranslucentLighting; //  0x254 Size(1)
	char bTransmission; //  0x254 Size(1)
	char bCastVolumetricShadow; //  0x254 Size(1)
	char bCastDeepShadow; //  0x254 Size(1)
	char bCastRaytracedShadow; //  0x255 Size(1)
	char bAffectReflection; //  0x255 Size(1)
	char bAffectGlobalIllumination; //  0x255 Size(1)
	float IndirectLightingIntensity; //  0x258 Size(4)
	float VolumetricScatteringIntensity; //  0x25c Size(4)
	float VolumetricAttenuationScale; //  0x260 Size(4)
	float VolumetricSourceRadiusScale; //  0x264 Size(4)
	int32_t SamplesPerPixel; //  0x268 Size(4)

	void SetSamplesPerPixel(int32_t NewValue); // Function Engine.LightComponentBase.SetSamplesPerPixel(Final|Native|Public|BlueprintCallable) // <Game+0x3d64ca0>
};

// Class Engine.LightComponent
struct ULightComponent : ULightComponentBase {
	float Temperature; //  0x270 Size(4)
	float MaxDrawDistance; //  0x274 Size(4)
	float MaxDistanceFadeRange; //  0x278 Size(4)
	char bUseTemperature; //  0x27c Size(1)
	int32_t ShadowMapChannel; //  0x280 Size(4)
	float MinRoughness; //  0x288 Size(4)
	float SpecularScale; //  0x28c Size(4)
	float ShadowResolutionScale; //  0x290 Size(4)
	float ShadowBias; //  0x294 Size(4)
	float ShadowSlopeBias; //  0x298 Size(4)
	float ShadowSharpen; //  0x29c Size(4)
	float ContactShadowLength; //  0x2a0 Size(4)
	char ContactShadowLengthInWS; //  0x2a4 Size(1)
	float ContactShadowStartDistance; //  0x2a8 Size(4)
	float ContactShadowFadeDistance; //  0x2ac Size(4)
	float ShadowStrength; //  0x2b0 Size(4)
	float TranslucentShadowDensity; //  0x2b4 Size(4)
	char InverseSquaredFalloff; //  0x2b8 Size(1)
	char CastTranslucentShadows; //  0x2b8 Size(1)
	char bCastShadowsFromCinematicObjectsOnly; //  0x2b8 Size(1)
	char bAffectDynamicIndirectLighting; //  0x2b8 Size(1)
	char bForceCachedShadowsFromMovablePrimitivesAsStatic; //  0x2b8 Size(1)
	char bForceCachedShadowsForMovablePrimitives; //  0x2b8 Size(1)
	Unknown LightingChannels; //  0x2bc Size(1)
	Unknown LightFunctionMaterial; //  0x2c0 Size(8)
	Unknown LightFunctionScale; //  0x2c8 Size(c)
	Unknown IESTexture; //  0x2d8 Size(8)
	char bUseIESBrightness; //  0x2e0 Size(1)
	float IESBrightnessScale; //  0x2e4 Size(4)
	float LightFunctionFadeDistance; //  0x2e8 Size(4)
	float DisabledBrightness; //  0x2ec Size(4)
	char bEnableLightShaftBloom; //  0x2f0 Size(1)
	float BloomScale; //  0x2f4 Size(4)
	float BloomThreshold; //  0x2f8 Size(4)
	float BloomMaxBrightness; //  0x2fc Size(4)
	Unknown BloomTint; //  0x300 Size(4)
	char bUseFoliageLighting; //  0x304 Size(1)
	char bUseRayTracedDistanceFieldShadows; //  0x305 Size(1)
	float RayStartOffsetDepthScale; //  0x308 Size(4)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.LightComponent.SetVolumetricScatteringIntensity(Final|Native|Public|BlueprintCallable) // <Game+0x3d61fd0>
};

// Class Engine.DirectionalLightComponent
struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; //  0x380 Size(4)
	char bEnableLightShaftOcclusion; //  0x384 Size(1)
	float OcclusionMaskDarkness; //  0x388 Size(4)
	float OcclusionDepthRange; //  0x38c Size(4)
	Unknown LightShaftOverrideDirection; //  0x390 Size(c)
	float WholeSceneDynamicShadowRadius; //  0x39c Size(4)
	float DynamicShadowDistanceMovableLight; //  0x3a0 Size(4)
	float DynamicShadowDistanceStatio; //  0x3a4 Size(4)
	int32_t DynamicShadowCascades; //  0x3a8 Size(4)
	float CascadeDistributionExponent; //  0x3ac Size(4)
	float CascadeTransitionFraction; //  0x3b0 Size(4)
	float ShadowDistanceFadeoutFraction; //  0x3b4 Size(4)
	char bUseInsetShadowsForMovableObjects; //  0x3b8 Size(1)
	int32_t FarShadowCascadeCount; //  0x3bc Size(4)
	float FarShadowDistance; //  0x3c0 Size(4)
	char bUseFarShadowAsStaticWorldShadow; //  0x3c4 Size(1)
	float DistanceFieldShadowDistance; //  0x3c8 Size(4)
	float LightSourceAngle; //  0x3cc Size(4)
	float LightSourceSoftAngle; //  0x3d0 Size(4)
	float TraceDistance; //  0x3d4 Size(4)
	Unknown LightmassSettings; //  0x3d8 Size(10)
	char bCastModulatedShadows; //  0x3e8 Size(1)
	Unknown ModulatedShadowColor; //  0x3ec Size(4)
	float ShadowAmount; //  0x3f0 Size(4)
	char bUsedAsAtmosphereSunLight; //  0x3f4 Size(1)
	int32_t AtmosphereSunLightIndex; //  0x3f8 Size(4)

	void SetShadowDistanceFadeoutFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction(Final|Native|Public|BlueprintCallable) // <Game+0x3cbd130>
};

// Class Engine.DistributionFloat
struct UDistributionFloat : UDistribution {
	char bCanBeBaked; //  0x30 Size(1)
	char bBakedDataSuccesfully; //  0x30 Size(1)
};

// Class Engine.DistributionFloatConstant
struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; //  0x38 Size(4)
};

// Class Engine.DistributionFloatConstantCurve
struct UDistributionFloatConstantCurve : UDistributionFloat {
	Unknown ConstantCurve; //  0x38 Size(18)
};

// Class Engine.DistributionFloatParameterBase
struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	struct FName ParameterName; //  0x40 Size(8)
	float MinInput; //  0x48 Size(4)
	float MaxInput; //  0x4c Size(4)
	float MinOutput; //  0x50 Size(4)
	float MaxOutput; //  0x54 Size(4)
	Unknown ParamMode; //  0x58 Size(1)
};

// Class Engine.DistributionFloatUniform
struct UDistributionFloatUniform : UDistributionFloat {
	float Min; //  0x38 Size(4)
	float MAX; //  0x3c Size(4)
};

// Class Engine.DistributionFloatUniformCurve
struct UDistributionFloatUniformCurve : UDistributionFloat {
	Unknown ConstantCurve; //  0x38 Size(18)
};

// Class Engine.DistributionVector
struct UDistributionVector : UDistribution {
	char bCanBeBaked; //  0x30 Size(1)
	char bIsDirty; //  0x30 Size(1)
	char bBakedDataSuccesfully; //  0x30 Size(1)
};

// Class Engine.DistributionVectorConstant
struct UDistributionVectorConstant : UDistributionVector {
	Unknown Constant; //  0x38 Size(c)
	char bLockAxes; //  0x44 Size(1)
	Unknown LockedAxes; //  0x48 Size(1)
};

// Class Engine.DistributionVectorConstantCurve
struct UDistributionVectorConstantCurve : UDistributionVector {
	Unknown ConstantCurve; //  0x38 Size(18)
	char bLockAxes; //  0x50 Size(1)
	Unknown LockedAxes; //  0x54 Size(1)
};

// Class Engine.DistributionVectorParameterBase
struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	struct FName ParameterName; //  0x50 Size(8)
	Unknown MinInput; //  0x58 Size(c)
	Unknown MaxInput; //  0x64 Size(c)
	Unknown MinOutput; //  0x70 Size(c)
	Unknown MaxOutput; //  0x7c Size(c)
	Unknown ParamModes; //  0x88 Size(3)
};

// Class Engine.DistributionVectorUniform
struct UDistributionVectorUniform : UDistributionVector {
	Unknown MAX; //  0x38 Size(c)
	Unknown Min; //  0x44 Size(c)
	char bLockAxes; //  0x50 Size(1)
	Unknown LockedAxes; //  0x54 Size(1)
	Unknown MirrorFlags; //  0x55 Size(3)
	char bUseExtremes; //  0x58 Size(1)
};

// Class Engine.DistributionVectorUniformCurve
struct UDistributionVectorUniformCurve : UDistributionVector {
	Unknown ConstantCurve; //  0x38 Size(18)
	char bLockAxes1; //  0x50 Size(1)
	char bLockAxes2; //  0x50 Size(1)
	Unknown LockedAxes; //  0x54 Size(2)
	Unknown MirrorFlags; //  0x56 Size(3)
	char bUseExtremes; //  0x5c Size(1)
};

// Class Engine.DrawFrustumComponent
struct UDrawFrustumComponent : UPrimitiveComponent {
	Unknown FrustumColor; //  0x4b8 Size(4)
	float FrustumAngle; //  0x4bc Size(4)
	float FrustumAspectRatio; //  0x4c0 Size(4)
	float FrustumStartDist; //  0x4c4 Size(4)
	float FrustumEndDist; //  0x4c8 Size(4)
	Unknown Texture; //  0x4d0 Size(8)
};

// Class Engine.SphereComponent
struct USphereComponent : UShapeComponent {
	float SphereRadius; //  0x4d0 Size(4)

	void SetSphereRadius(float InSphereRadius, char bUpdateOverlaps); // Function Engine.SphereComponent.SetSphereRadius(Final|Native|Public|BlueprintCallable) // <Game+0x3e03bd0>
};

// Class Engine.EdGraph
struct UEdGraph : Object {
	Unknown Schema; //  0x28 Size(8)
	Unknown Nodes; //  0x30 Size(10)
	char bEditable; //  0x40 Size(1)
	char bAllowDeletion; //  0x40 Size(1)
	char bAllowRenaming; //  0x40 Size(1)
};

// Class Engine.GraphNodeContextMenuContext
struct UGraphNodeContextMenuContext : Object {
	Unknown Blueprint; //  0x28 Size(8)
	Unknown Graph; //  0x30 Size(8)
	Unknown Node; //  0x38 Size(8)
	char bIsDebugging; //  0x48 Size(1)
};

// Class Engine.EdGraphNode
struct UEdGraphNode : Object {
	Unknown DeprecatedPins; //  0x38 Size(10)
	int32_t NodePosX; //  0x48 Size(4)
	int32_t NodePosY; //  0x4c Size(4)
	int32_t NodeWidth; //  0x50 Size(4)
	int32_t NodeHeight; //  0x54 Size(4)
	Unknown AdvancedPinDisplay; //  0x58 Size(1)
	Unknown Enab; //  0x59 Size(1)
	char bDisplayAsDisabled; //  0x5b Size(1)
	char bUserSetEnabledState; //  0x5b Size(1)
	char bIsNodeEnabled; //  0x5b Size(1)
	char bHasCompilerMessage; //  0x5b Size(1)
	struct FString NodeComment; //  0x60 Size(10)
	int32_t ErrorType; //  0x70 Size(4)
	struct FString ErrorMsg; //  0x78 Size(10)
	Unknown NodeGuid; //  0x88 Size(10)
};

// Class Engine.EdGraphNode_Documentation
struct UEdGraphNode_Documentation : UEdGraphNode {
	struct FString Link; //  0x98 Size(10)
	struct FString Excerpt; //  0xa8 Size(10)
};

// Class Engine.EdGraphPin_Deprecated
struct UEdGraphPin_Deprecated : Object {
	struct FString PinName; //  0x28 Size(10)
	struct FString PinToolTip; //  0x38 Size(10)
	Unknown Direction; //  0x48 Size(1)
	Unknown PinType; //  0x50 Size(58)
	struct FString DefaultValue; //  0xa8 Size(10)
	struct FString AutogeneratedDefaultValue; //  0xb8 Size(10)
	Unknown DefaultObject; //  0xc8 Size(8)
	struct FText DefaultTextValue; //  0xd0 Size(18)
	Unknown LinkedTo; //  0xe8 Size(10)
	Unknown SubPins; //  0xf8 Size(10)
	Unknown ParentPin; //  0x108 Size(8)
	Unknown ReferencePassThroughConnection; //  0x110 Size(8)
};

// Class Engine.Emitter
struct AEmitter : UActor {
	Unknown ParticleSystemComponent; //  0x310 Size(8)
	char bDestroyOnSystemFinish; //  0x318 Size(1)
	char bPostUpdateTickGroup; //  0x318 Size(1)
	char bCurrentlyActive; //  0x318 Size(1)
	struct FMulticastInlineDelegate OnParticleSpawn; //  0x320 Size(10)
	struct FMulticastInlineDelegate OnParticleBurst; //  0x330 Size(10)
	struct FMulticastInlineDelegate OnParticleDeath; //  0x340 Size(10)
	struct FMulticastInlineDelegate OnParticleCollide; //  0x350 Size(10)

	void ToggleActive(); // Function Engine.Emitter.ToggleActive(Final|Native|Public|BlueprintCallable) // <Game+0x3cc5720>
};

// Class Engine.EmitterCameraLensEffectBase
struct AEmitterCameraLensEffectBase : AEmitter {
	Unknown PS_CameraEffect; //  0x360 Size(8)
	Unknown PS_CameraEffectNonExtremeCo; //  0x368 Size(8)
	Unknown BaseCamera; //  0x370 Size(8)
	Unknown RelativeTransform; //  0x380 Size(30)
	float BaseFOV; //  0x3b0 Size(4)
	char bAllowMultipleInstances; //  0x3b4 Size(1)
	char bResetWhenRetriggered; //  0x3b4 Size(1)
	Unknown EmittersToTreatAsSame; //  0x3b8 Size(10)
	float DistFromCamera; //  0x3c8 Size(4)
};

// Class Engine.EngineMessage
struct UEngineMessage : ULocalMessage {
	struct FString FailedPlaceMessage; //  0x28 Size(10)
	struct FString MaxedOutMessage; //  0x38 Size(10)
	struct FString EnteredMessage; //  0x48 Size(10)
	struct FString LeftMessage; //  0x58 Size(10)
	struct FString Glob; //  0x68 Size(10)
	struct FString SpecEnteredMessage; //  0x78 Size(10)
	struct FString NewPlayerMessage; //  0x88 Size(10)
	struct FString NewSpecMessage; //  0x98 Size(10)
};

// Class Engine.ExponentialHeightFog
struct AExponentialHeightFog : AInfo {
	Unknown Component; //  0x310 Size(8)
	char bEnabled; //  0x318 Size(1)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled(Native|Public) // <Game+0x1e4be10>
};

// Class Engine.ExponentialHeightFogComponent
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; //  0x238 Size(4)
	float FogHeightFalloff; //  0x23c Size(4)
	Unknown SecondFogData; //  0x240 Size(c)
	Unknown FogInscatteringColor; //  0x24c Size(10)
	Unknown InscatteringColorCubemap; //  0x260 Size(8)
	float InscatteringColorCubemapAngle; //  0x268 Size(4)
	Unknown InscatteringTextureTint; //  0x26c Size(10)
	float FullyDirectionalInscatteringColorDistance; //  0x27c Size(4)
	float NonDirectionalInscatteringColorDistance; //  0x280 Size(4)
	float DirectionalInscatteringExpo; //  0x284 Size(4)
	float DirectionalInscatteringStartDistance; //  0x288 Size(4)
	Unknown DirectionalInscatteringColo; //  0x28c Size(10)
	float FogMaxOpacity; //  0x29c Size(4)
	float StartDistance; //  0x2a0 Size(4)
	float FogCutoffDistance; //  0x2a4 Size(4)
	char bEnableVolumetricFog; //  0x2a8 Size(1)
	float VolumetricFogScatteringDistribution; //  0x2ac Size(4)
	Unknown VolumetricFogAlbedo; //  0x2b0 Size(4)
	Unknown VolumetricFogEmissive; //  0x2b4 Size(10)
	float VolumetricFogExtinctionScale; //  0x2c4 Size(4)
	float VolumetricFogDistance; //  0x2c8 Size(4)
	float VolumetricFogStaticLightingScatteringIntensity; //  0x2cc Size(4)
	char bOverrideLightColorsWithFogInscatteringColors; //  0x2d0 Size(1)

	void SetVolumetricFogScatteringDistribution(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution(Final|Native|Public|BlueprintCallable) // <Game+0x3cd77f0>
};

// Class Engine.FloatingPawnMovement
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; //  0x138 Size(4)
	float Acceleration; //  0x13c Size(4)
	float Deceleration; //  0x140 Size(4)
	float TurningBoost; //  0x144 Size(4)
	char bPositionCorrected; //  0x148 Size(1)
};

// Class Engine.Font
struct UFont : Object {
	Unknown FontCacheType; //  0x30 Size(1)
	Unknown Characters; //  0x38 Size(10)
	Unknown Textures; //  0x48 Size(10)
	int32_t IsRemapped; //  0x58 Size(4)
	float EmScale; //  0x5c Size(4)
	float Ascent; //  0x60 Size(4)
	float Descent; //  0x64 Size(4)
	float Leading; //  0x68 Size(4)
	int32_t Kerning; //  0x6c Size(4)
	Unknown ImportOptions; //  0x70 Size(b0)
	int32_t NumCharacters; //  0x120 Size(4)
	Unknown MaxCharHeight; //  0x128 Size(10)
	float ScalingFactor; //  0x138 Size(4)
	int32_t LegacyFontSize; //  0x13c Size(4)
	struct FName LegacyFontName; //  0x140 Size(8)
	Unknown CompositeFont; //  0x148 Size(38)
};

// Class Engine.FontFace
struct UFontFace : Object {
	struct FString SourceFilename; //  0x30 Size(10)
	Unknown Hinting; //  0x40 Size(1)
	Unknown LoadingPolicy; //  0x41 Size(1)
	Unknown LayoutMethod; //  0x42 Size(1)
};

// Class Engine.FontImportOptions
struct UFontImportOptions : Object {
	Unknown Data; //  0x28 Size(b0)
};

// Class Engine.ForceFeedbackAttenuation
struct UForceFeedbackAttenuation : Object {
	Unknown Attenuation; //  0x28 Size(b0)
};

// Class Engine.ForceFeedbackComponent
struct UForceFeedbackComponent : USceneComponent {
	Unknown ForceFeedbackEffect; //  0x238 Size(8)
	char bAutoDestroy; //  0x240 Size(1)
	char bStopWhenOwnerDestroyed; //  0x240 Size(1)
	char bLooping; //  0x240 Size(1)
	char bIgnoreTimeDilation; //  0x240 Size(1)
	char bOverrideAttenuation; //  0x240 Size(1)
	float IntensityMultiplier; //  0x244 Size(4)
	Unknown AttenuationSettings; //  0x248 Size(8)
	Unknown AttenuationOverrides; //  0x250 Size(b0)
	struct FMulticastInlineDelegate OnForceFeedbackFinished; //  0x300 Size(10)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop(Native|Public|BlueprintCallable) // <Game+0x3cd7870>
};

// Class Engine.ForceFeedbackEffect
struct UForceFeedbackEffect : Object {
	Unknown ChannelDetails; //  0x28 Size(10)
	float Duration; //  0x38 Size(4)
};

// Class Engine.GameNetworkManager
struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; //  0x310 Size(4)
	float SeverePacketLossThreshold; //  0x314 Size(4)
	int32_t BadPingThreshold; //  0x318 Size(4)
	int32_t SeverePingThreshold; //  0x31c Size(4)
	int32_t AdjustedNetSpeed; //  0x320 Size(4)
	float LastNetSpeedUpdateTime; //  0x324 Size(4)
	int32_t TotalNetBandwidth; //  0x328 Size(4)
	int32_t MinDynamicBandwidth; //  0x32c Size(4)
	int32_t MaxDynamicBandwidth; //  0x330 Size(4)
	char bIsStandbyCheckingEnabled; //  0x334 Size(1)
	char bHasStandbyCheatTriggered; //  0x334 Size(1)
	float StandbyRxCheatTime; //  0x338 Size(4)
	float StandbyTxCheatTime; //  0x33c Size(4)
	float PercentMissingForRxStandby; //  0x340 Size(4)
	float PercentMissingForTxStandby; //  0x344 Size(4)
	float PercentForBadPing; //  0x348 Size(4)
	float JoinInProgressStandbyWaitTime; //  0x34c Size(4)
	float MoveRepSize; //  0x350 Size(4)
	float MAXPOSITIONERRORSQUARED; //  0x354 Size(4)
	float MAXNEARZEROVELOCITYSQUARED; //  0x358 Size(4)
	float CLIENTADJUSTUPDATECOST; //  0x35c Size(4)
	float MAXCLIENTUPDATEINTERVAL; //  0x360 Size(4)
	float MaxClientForcedUpdateDuration; //  0x364 Size(4)
	float ServerForcedUpdateHitchThreshold; //  0x368 Size(4)
	float ServerForcedUpdateHitchCooldown; //  0x36c Size(4)
	float MaxMoveDeltaTime; //  0x370 Size(4)
	float MaxClientSmoothingDeltaTime; //  0x374 Size(4)
	float ClientNetSendMoveDeltaTime; //  0x378 Size(4)
	float ClientNetSendMoveDeltaTimeThrottled; //  0x37c Size(4)
	float ClientNetSendMoveDeltaTimeStationary; //  0x380 Size(4)
	int32_t ClientNetSendMoveThrottleAtNetSpeed; //  0x384 Size(4)
	int32_t ClientNetSendMoveThrottleOverPlayerCount; //  0x388 Size(4)
	char ClientAuthorativePosition; //  0x38c Size(1)
	float ClientErrorUpdateRateLimit; //  0x390 Size(4)
	float ClientNetCamUpdateDeltaTime; //  0x394 Size(4)
	float ClientNetCamUpdatePositionLimit; //  0x398 Size(4)
	char bMovementTimeDiscrepancyDetection; //  0x39c Size(1)
	char bMovementTimeDiscrepancyResolution; //  0x39d Size(1)
	float MovementTimeDiscrepancyMaxTimeMargin; //  0x3a0 Size(4)
	float MovementTimeDiscrepancyMinTimeMargin; //  0x3a4 Size(4)
	float MovementTimeDiscrepancyReso; //  0x3a8 Size(4)
	float MovementTimeDiscrepancyDriftAllowance; //  0x3ac Size(4)
	char bMovementTimeDiscrepancyForceCorrectionsDuringResolution; //  0x3b0 Size(1)
	char bUseDistanceBasedRelevancy; //  0x3b1 Size(1)
};

// Class Engine.SpotLight
struct ASpotLight : ALight {
	Unknown SpotLightComponent; //  0x320 Size(8)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLight.SetOuterConeAngle(Final|Native|Public|BlueprintCallable) // <Game+0x3e08920>
};

// Class Engine.HapticFeedbackEffect_Buffer
struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	Unknown Amplitudes; //  0x28 Size(10)
	int32_t SampleRate; //  0x38 Size(4)
};

// Class Engine.HapticFeedbackEffect_Curve
struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	Unknown HapticDetails; //  0x28 Size(110)
};

// Class Engine.HapticFeedbackEffect_SoundWave
struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	Unknown SoundWave; //  0x28 Size(8)
};

// Class Engine.HLODProxy
struct UHLODProxy : Object {
	Unknown ProxyMeshes; //  0x28 Size(10)
};

// Class Engine.InGameAdManager
struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen; //  0x38 Size(1)
	Unknown ClickedBannerDelegates; //  0x40 Size(10)
	Unknown ClosedAdDelegates; //  0x50 Size(10)
};

// Class Engine.InheritableComponentHandler
struct UInheritableComponentHandler : Object {
	Unknown Records; //  0x28 Size(10)
	Unknown UnnecessaryComponents; //  0x38 Size(10)
};

// Class Engine.InputActionDelegateBinding
struct UInputActionDelegateBinding : UInputDelegateBinding {
	Unknown InputActionDelegateBindings; //  0x28 Size(10)
};

// Class Engine.InputAxisDelegateBinding
struct UInputAxisDelegateBinding : UInputDelegateBinding {
	Unknown InputAxisDelegateBindings; //  0x28 Size(10)
};

// Class Engine.InputAxisKeyDelegateBinding
struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	Unknown InputAxisKeyDelegateBindings; //  0x28 Size(10)
};

// Class Engine.InputComponent
struct UInputComponent : UActorComponent {
	Unknown CachedKeyToActionInfo; //  0x120 Size(10)

	char WasControllerKeyJustReleased(Unknown Key); // Function Engine.InputComponent.WasControllerKeyJustReleased(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <Game+0x3cf5db0>
};

// Class Engine.InputKeyDelegateBinding
struct UInputKeyDelegateBinding : UInputDelegateBinding {
	Unknown InputKeyDelegateBindings; //  0x28 Size(10)
};

// Class Engine.InputSettings
struct UInputSettings : Object {
	Unknown AxisConfig; //  0x28 Size(10)
	char bAltEnterTogglesFullscreen; //  0x38 Size(1)
	char bF11TogglesFullscreen; //  0x38 Size(1)
	char bUseMouseForTouch; //  0x38 Size(1)
	char bEnableMouseSmoothing; //  0x38 Size(1)
	char bEnableFOVScaling; //  0x38 Size(1)
	char bCaptureMouseOnLaunch; //  0x38 Size(1)
	char bDefaultViewportMouseLock; //  0x38 Size(1)
	char bAlwaysShowTouchInterface; //  0x38 Size(1)
	char bShowConsoleOnFourFingerTap; //  0x39 Size(1)
	char bEnableGestureRecognizer; //  0x39 Size(1)
	char bUseAutocorrect; //  0x3a Size(1)
	Unknown ExcludedAutocorrectOS; //  0x40 Size(10)
	Unknown ExcludedAutocorrectCultures; //  0x50 Size(10)
	Unknown ExcludedAutocorrectDeviceMo; //  0x60 Size(10)
	Unknown DefaultViewportMouseCaptureMode; //  0x70 Size(1)
	Unknown DefaultViewportMouseLockMode; //  0x71 Size(1)
	float FOVScale; //  0x74 Size(4)
	float Doub; //  0x78 Size(4)
	Unknown ActionMappings; //  0x80 Size(10)
	Unknown AxisMappings; //  0x90 Size(10)
	Unknown SpeechMappings; //  0xa0 Size(10)
	Unknown DefaultTouchInterface; //  0xb0 Size(18)
	Unknown ConsoleKey; //  0xc8 Size(18)
	Unknown ConsoleKeys; //  0xe0 Size(10)

	void SaveKeyMappings(); // Function Engine.InputSettings.SaveKeyMappings(Final|Native|Public|BlueprintCallable) // <Game+0x3cf6aa0>
};

// Class Engine.InputTouchDelegateBinding
struct UInputTouchDelegateBinding : UInputDelegateBinding {
	Unknown InputTouchDelegateBindings; //  0x28 Size(10)
};

// Class Engine.InstancedCollisionComponent
struct UInstancedCollisionComponent : UActorComponent {
	Unknown StaticMeshComponents; //  0xb0 Size(10)
	Unknown StaticMeshComponent; //  0xd0 Size(8)
};

// Class Engine.InstancedStaticCollisionActor
struct AInstancedStaticCollisionActor : UActor {
	Unknown InstancedCollisionComponentMap; //  0x310 Size(50)
};

// Class Engine.InterpCurveEdSetup
struct UInterpCurveEdSetup : Object {
	Unknown Tabs; //  0x28 Size(10)
	int32_t ActiveTab; //  0x38 Size(4)
};

// Class Engine.InterpData
struct UInterpData : Object {
	float InterpLength; //  0x28 Size(4)
	float PathBuildTime; //  0x2c Size(4)
	Unknown InterpGroups; //  0x30 Size(10)
	Unknown CurveEdSetup; //  0x40 Size(8)
	float EdSectionStart; //  0x48 Size(4)
	float EdSectionEnd; //  0x4c Size(4)
	char bShouldBakeAndPrune; //  0x50 Size(1)
	Unknown CachedDirectorGroup; //  0x58 Size(8)
	Unknown AllEventNames; //  0x60 Size(10)
};

// Class Engine.InterpFilter
struct UInterpFilter : Object {
	struct FString Caption; //  0x28 Size(10)
};

// Class Engine.InterpGroup
struct UInterpGroup : Object {
	Unknown InterpTracks; //  0x30 Size(10)
	struct FName GroupName; //  0x40 Size(8)
	Unknown GroupColor; //  0x48 Size(4)
	char bCollapsed; //  0x4c Size(1)
	char bVisible; //  0x4c Size(1)
	char bIsFolder; //  0x4c Size(1)
	char bIsParented; //  0x4c Size(1)
	char bIsSelected; //  0x4c Size(1)
};

// Class Engine.InterpGroupCamera
struct UInterpGroupCamera : UInterpGroup {
	Unknown CameraAnimInst; //  0x50 Size(8)
	float CompressTolerance; //  0x58 Size(4)
};

// Class Engine.InterpGroupInst
struct UInterpGroupInst : Object {
	Unknown Group; //  0x28 Size(8)
	Unknown GroupActor; //  0x30 Size(8)
	Unknown TrackInst; //  0x38 Size(10)
};

// Class Engine.InterpToMovementComponent
struct UInterpToMovementComponent : UMovementComponent {
	float Duration; //  0xf0 Size(4)
	char bPauseOnImpact; //  0xf4 Size(1)
	char bSweep; //  0xf8 Size(1)
	Unknown TeleportType; //  0xf9 Size(1)
	Unknown BehaviourType; //  0xfa Size(1)
	char bCheckIfStillInWorld; //  0xfb Size(1)
	char bForceSubStepping; //  0xfc Size(1)
	struct FMulticastInlineDelegate OnInterpToReverse; //  0x100 Size(10)
	struct FMulticastInlineDelegate OnInterpToStop; //  0x110 Size(10)
	struct FMulticastInlineDelegate OnWaitBeginDelegate; //  0x120 Size(10)
	struct FMulticastInlineDelegate OnWaitEndDelegate; //  0x130 Size(10)
	struct FMulticastInlineDelegate OnResetDelegate; //  0x140 Size(10)
	float MaxSimulationTimeStep; //  0x150 Size(4)
	int32_t MaxSimulationIterations; //  0x154 Size(4)
	Unknown ControlPoints; //  0x158 Size(10)

	void StopSimulating(Unknown& HitResult); // Function Engine.InterpToMovementComponent.StopSimulating(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x3cffa40>
};

// Class Engine.InterpTrackAnimControl
struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	struct FName SlotName; //  0x90 Size(8)
	Unknown AnimSeqs; //  0x98 Size(10)
	char bSkipAnimNotifiers; //  0xa8 Size(1)
};

// Class Engine.InterpTrackBoolProp
struct UInterpTrackBoolProp : UInterpTrack {
	Unknown BoolTrack; //  0x70 Size(10)
	struct FName PropertyName; //  0x80 Size(8)
};

// Class Engine.InterpTrackColorProp
struct UInterpTrackColorProp : UInterpTrackVectorBase {
	struct FName PropertyName; //  0x90 Size(8)
};

// Class Engine.InterpTrackDirector
struct UInterpTrackDirector : UInterpTrack {
	Unknown CutTrack; //  0x70 Size(10)
	char bSimulateCameraCutsOnClients; //  0x80 Size(1)
};

// Class Engine.InterpTrackEvent
struct UInterpTrackEvent : UInterpTrack {
	Unknown EventTrack; //  0x70 Size(10)
	char bFireEventsWhenForwards; //  0x80 Size(1)
	char bFireEventsWhenBackwards; //  0x80 Size(1)
	char bFireEventsWhenJumpingForwards; //  0x80 Size(1)
	char bUseCustomEventName; //  0x80 Size(1)
};

// Class Engine.InterpTrackFade
struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade; //  0x90 Size(1)
	char bFadeAudio; //  0x90 Size(1)
	Unknown FadeColor; //  0x94 Size(10)
};

// Class Engine.InterpTrackFloatAnimBPParam
struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	Unknown AnimBlueprintClass; //  0x90 Size(8)
	Unknown AnimClass; //  0x98 Size(8)
	struct FName ParamName; //  0xa0 Size(8)
};

// Class Engine.InterpTrackFloatMaterialParam
struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	Unknown TargetMaterials; //  0x90 Size(10)
	struct FName ParamName; //  0xa0 Size(8)
};

// Class Engine.InterpTrackFloatParticleParam
struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	struct FName ParamName; //  0x90 Size(8)
};

// Class Engine.InterpTrackFloatProp
struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	struct FName PropertyName; //  0x90 Size(8)
};

// Class Engine.InterpTrackInstAnimControl
struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; //  0x28 Size(4)
};

// Class Engine.InterpTrackInstProperty
struct UInterpTrackInstProperty : UInterpTrackInst {
	Unknown InterpProperty; //  0x28 Size(20)
	Unknown PropertyOuterObjectInst; //  0x48 Size(8)
};

// Class Engine.InterpTrackInstBoolProp
struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	char ResetBool; //  0x60 Size(1)
};

// Class Engine.InterpTrackInstColorProp
struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	Unknown ResetColor; //  0x58 Size(4)
};

// Class Engine.InterpTrackInstDirector
struct UInterpTrackInstDirector : UInterpTrackInst {
	Unknown OldViewTarget; //  0x28 Size(8)
};

// Class Engine.InterpTrackInstEvent
struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; //  0x28 Size(4)
};

// Class Engine.InterpTrackInstFloatAnimBPParam
struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	Unknown AnimScriptInstance; //  0x28 Size(8)
	float ResetFloat; //  0x30 Size(4)
};

// Class Engine.InterpTrackInstFloatMaterialParam
struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	Unknown MaterialInstances; //  0x28 Size(10)
	Unknown ResetFloats; //  0x38 Size(10)
	Unknown PrimitiveMaterialRefs; //  0x48 Size(10)
	Unknown InstancedTrack; //  0x58 Size(8)
};

// Class Engine.InterpTrackInstFloatParticleParam
struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; //  0x28 Size(4)
};

// Class Engine.InterpTrackInstFloatProp
struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; //  0x58 Size(4)
};

// Class Engine.InterpTrackInstLinearColorProp
struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	Unknown ResetColor; //  0x58 Size(10)
};

// Class Engine.InterpTrackInstMove
struct UInterpTrackInstMove : UInterpTrackInst {
	Unknown ResetLocation; //  0x28 Size(c)
	Unknown ResetRotation; //  0x34 Size(c)
};

// Class Engine.InterpTrackInstParticleReplay
struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; //  0x28 Size(4)
};

// Class Engine.InterpTrackInstSlomo
struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; //  0x28 Size(4)
};

// Class Engine.InterpTrackInstSound
struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; //  0x28 Size(4)
	Unknown PlayAudioComp; //  0x30 Size(8)
};

// Class Engine.InterpTrackInstToggle
struct UInterpTrackInstToggle : UInterpTrackInst {
	Unknown Action; //  0x28 Size(1)
	float LastUpdatePosition; //  0x2c Size(4)
	char bSavedActiveState; //  0x30 Size(1)
};

// Class Engine.InterpTrackInstVectorMaterialParam
struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	Unknown MaterialInstances; //  0x28 Size(10)
	Unknown ResetVectors; //  0x38 Size(10)
	Unknown PrimitiveMaterialRefs; //  0x48 Size(10)
	Unknown InstancedTrack; //  0x58 Size(8)
};

// Class Engine.InterpTrackInstVectorProp
struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	Unknown ResetVector; //  0x58 Size(c)
};

// Class Engine.InterpTrackInstVisibility
struct UInterpTrackInstVisibility : UInterpTrackInst {
	Unknown Action; //  0x28 Size(1)
	float LastUpdatePosition; //  0x2c Size(4)
};

// Class Engine.InterpTrackLinearColorBase
struct UInterpTrackLinearColorBase : UInterpTrack {
	Unknown LinearColorTrack; //  0x70 Size(18)
	float CurveTension; //  0x88 Size(4)
};

// Class Engine.InterpTrackLinearColorProp
struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	struct FName PropertyName; //  0x90 Size(8)
};

// Class Engine.InterpTrackMove
struct UInterpTrackMove : UInterpTrack {
	Unknown PosTrack; //  0x70 Size(18)
	Unknown EulerTrack; //  0x88 Size(18)
	Unknown LookupTrack; //  0xa0 Size(10)
	struct FName LookAtGroupName; //  0xb0 Size(8)
	float LinCurveTension; //  0xb8 Size(4)
	float AngCurveTension; //  0xbc Size(4)
	char bUseQuatInterpolation; //  0xc0 Size(1)
	char bShowArrowAtKeys; //  0xc0 Size(1)
	char bDisableMovement; //  0xc0 Size(1)
	char bShowTranslationOnCurveEd; //  0xc0 Size(1)
	char bShowRotationOnCurv; //  0xc0 Size(1)
	char bHide3DTrack; //  0xc0 Size(1)
	Unknown RotMode; //  0xc4 Size(1)
};

// Class Engine.InterpTrackMoveAxis
struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	Unknown MoveAxis; //  0x90 Size(1)
	Unknown LookupTrack; //  0x98 Size(10)
};

// Class Engine.InterpTrackParticleReplay
struct UInterpTrackParticleReplay : UInterpTrack {
	Unknown TrackKeys; //  0x70 Size(10)
};

// Class Engine.InterpTrackSound
struct UInterpTrackSound : UInterpTrackVectorBase {
	Unknown Sounds; //  0x90 Size(10)
	char bPlayOnReverse; //  0xa0 Size(1)
	char bContinueSoundOnMatineeEnd; //  0xa0 Size(1)
	char bSuppressSubtitles; //  0xa0 Size(1)
	char bTreatAsDialogue; //  0xa0 Size(1)
	char bAttach; //  0xa0 Size(1)
};

// Class Engine.InterpTrackToggle
struct UInterpTrackToggle : UInterpTrack {
	Unknown ToggleTrack; //  0x70 Size(10)
	char bActivateSystemEachUpdate; //  0x80 Size(1)
	char bActivateWithJustAttachedFlag; //  0x80 Size(1)
	char bFireEventsWhenForwards; //  0x80 Size(1)
	char bFireEventsWhenBackwards; //  0x80 Size(1)
	char bFireEventsWhenJumpingForwards; //  0x80 Size(1)
};

// Class Engine.InterpTrackVectorMaterialParam
struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	Unknown TargetMaterials; //  0x90 Size(10)
	struct FName ParamName; //  0xa0 Size(8)
};

// Class Engine.InterpTrackVectorProp
struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	struct FName PropertyName; //  0x90 Size(8)
};

// Class Engine.InterpTrackVisibility
struct UInterpTrackVisibility : UInterpTrack {
	Unknown VisibilityTrack; //  0x70 Size(10)
	char bFireEventsWhenForwards; //  0x80 Size(1)
	char bFireEventsWhenBackwards; //  0x80 Size(1)
	char bFireEventsWhenJumpingForwards; //  0x80 Size(1)
};

// Class Engine.IntSerialization
struct UIntSerialization : Object {
	uint16_t UnsignedInt16Variable; //  0x28 Size(2)
	uint32_t UnsignedInt32Variable; //  0x2c Size(4)
	uint64_t UnsignedInt64Variable; //  0x30 Size(8)
	int8_t SignedInt8Variable; //  0x38 Size(1)
	int16_t SignedInt16Variable; //  0x3a Size(2)
	int64_t SignedInt64Variable; //  0x40 Size(8)
	Unknown UnsignedInt8Variable; //  0x48 Size(1)
	int32_t SignedInt32Variable; //  0x4c Size(4)
};

// Class Engine.Layer
struct ULayer : Object {
	struct FName LayerName; //  0x28 Size(8)
	char bIsVisible; //  0x30 Size(1)
	Unknown ActorStats; //  0x38 Size(10)
};

// Class Engine.Level
struct ULevel : Object {
	Unknown OwningWorld; //  0xb8 Size(8)
	Unknown Model; //  0xc0 Size(8)
	Unknown ModelComponents; //  0xc8 Size(10)
	Unknown ActorCluster; //  0xd8 Size(8)
	int32_t NumTextureStreamingUnbuiltComponents; //  0xe0 Size(4)
	int32_t NumTextureStreamingDirtyResources; //  0xe4 Size(4)
	Unknown LevelScriptActor; //  0xe8 Size(8)
	Unknown NavListStart; //  0xf0 Size(8)
	Unknown NavListEnd; //  0xf8 Size(8)
	Unknown NavDataChunks; //  0x100 Size(10)
	float LightmapTotalSize; //  0x110 Size(4)
	float ShadowmapTotalSize; //  0x114 Size(4)
	Unknown StaticNavigableGeometry; //  0x118 Size(10)
	Unknown StreamingTextureGuids; //  0x128 Size(10)
	Unknown LevelBuildDataId; //  0x1d0 Size(10)
	Unknown MapBuildData; //  0x1e0 Size(8)
	Unknown LightBuildLevelOffset; //  0x1e8 Size(c)
	char bIsLightingScenario; //  0x1f4 Size(1)
	char bTextureStreamingRotationChanged; //  0x1f4 Size(1)
	char bStaticComponentsRegisteredInStreamingManager; //  0x1f4 Size(1)
	char bIsVisible; //  0x1f4 Size(1)
	Unknown WorldSettings; //  0x240 Size(8)
	Unknown AssetUserData; //  0x250 Size(10)
	Unknown DestroyedReplicatedStaticActors; //  0x270 Size(10)
};

// Class Engine.LevelActorContainer
struct ULevelActorContainer : Object {
	Unknown Actors; //  0x28 Size(10)
};

// Class Engine.LevelBounds
struct ALevelBounds : UActor {
	Unknown BoxComponent; //  0x310 Size(8)
	char bAutoUpdateBounds; //  0x318 Size(1)
};

// Class Engine.LevelStreaming
struct ULevelStreaming : Object {
	Unknown WorldAsset; //  0x28 Size(28)
	struct FName PackageNameToLoad; //  0x50 Size(8)
	Unknown LODPackageNames; //  0x58 Size(10)
	Unknown LevelTransform; //  0x80 Size(30)
	int32_t LevelLODIndex; //  0xb0 Size(4)
	int32_t StreamingPriority; //  0xb4 Size(4)
	char bShouldBeVisible; //  0xc0 Size(1)
	char bShouldBeLoaded; //  0xc0 Size(1)
	char bLocked; //  0xc0 Size(1)
	char bIsStatic; //  0xc0 Size(1)
	char bShouldBlockOnLoad; //  0xc0 Size(1)
	char bShouldBlockOnUnload; //  0xc0 Size(1)
	char bDisableDistanceStreaming; //  0xc0 Size(1)
	char bDrawOnLevelStatusMap; //  0xc0 Size(1)
	Unknown LevelColor; //  0xc4 Size(10)
	Unknown EditorStreamingVolumes; //  0xd8 Size(10)
	float MinTimeBetweenVolumeUnloadRequests; //  0xe8 Size(4)
	struct FMulticastInlineDelegate OnLevelLoaded; //  0xf0 Size(10)
	struct FMulticastInlineDelegate OnLevelUnloaded; //  0x100 Size(10)
	struct FMulticastInlineDelegate OnLevelShown; //  0x110 Size(10)
	struct FMulticastInlineDelegate OnLevelHidden; //  0x120 Size(10)
	Unknown LoadedLevel; //  0x130 Size(8)
	Unknown PendingUnloadLevel; //  0x138 Size(8)

	char ShouldBeLoaded(); // Function Engine.LevelStreaming.ShouldBeLoaded(Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x34e8900>
};

// Class Engine.LevelStreamingDynamic
struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded; //  0x158 Size(1)
	char bInitiallyVisible; //  0x158 Size(1)

	Unknown LoadLevelInstanceBySoftObjectPtr(Unknown WorldContextObject, Unknown Level, Unknown Location, Unknown Rotation, char& bOutSuccess); // Function Engine.LevelStreamingDynamic.LoadLevelInstanceBySoftObjectPtr(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x3d607a0>
};

// Class Engine.LevelStreamingVolume
struct ALevelStreamingVolume : AVolume {
	Unknown StreamingLevelNames; //  0x348 Size(10)
	char bEditorPreVisOnly; //  0x358 Size(1)
	char bDisabled; //  0x358 Size(1)
	Unknown StreamingUsage; //  0x35c Size(1)
};

// Class Engine.LightmappedSurfaceCollectio
struct ULightmappedSurfaceCollectiot : Object {
	Unknown SourceModel; //  0x28 Size(8)
	Unknown Surfaces; //  0x30 Size(10)
};

// Class Engine.LightmassPortal
struct ALightmassPortal : UActor {
	Unknown PortalComponent; //  0x310 Size(8)
};

// Class Engine.LightmassPortalComponent
struct ULightmassPortalComponent : USceneComponent {
	Unknown PreviewBox; //  0x238 Size(8)
};

// Class Engine.LightmassPrimitiveSettingsObject
struct ULightmassPrimitiveSettingsObject : Object {
	Unknown LightmassSettings; //  0x28 Size(18)
};

// Class Engine.LocalLightComponent
struct ULocalLightComponent : ULightComponent {
	Unknown IntensityUnits; //  0x380 Size(1)
	float Radius; //  0x384 Size(4)
	float AttenuationRadius; //  0x388 Size(4)
	Unknown LightmassSettings; //  0x38c Size(c)

	void SetIntensityUnits(Unknown NewIntensityUnits); // Function Engine.LocalLightComponent.SetIntensityUnits(Final|Native|Public|BlueprintCallable) // <Game+0x3d64c20>
};

// Class Engine.LODActor
struct ALODActor : UActor {
	Unknown StaticMeshComponent; //  0x310 Size(8)
	Unknown ImpostersStaticMeshComponents; //  0x318 Size(50)
	Unknown Proxy; //  0x368 Size(8)
	struct FName Key; //  0x370 Size(8)
	float LODDrawDistance; //  0x378 Size(4)
	int32_t LODLevel; //  0x37c Size(4)
	Unknown SubActors; //  0x380 Size(10)
	Unknown CachedNumHLODLevels; //  0x390 Size(1)
};

// Class Engine.MapBuildDataRegistry
struct UMapBuildDataRegistry : Object {
	Unknown LevelLightingQuality; //  0x28 Size(1)
};

// Class Engine.Material
struct UMaterial : UMaterialInterface {
	Unknown PhysMaterial; //  0x88 Size(8)
	Unknown PhysMaterialMask; //  0x90 Size(8)
	Unknown PhysicalMaterialMap; //  0x98 Size(40)
	Unknown Metallic; //  0xd8 Size(c)
	Unknown Specular; //  0xec Size(c)
	Unknown Anisotropy; //  0x100 Size(c)
	Unknown Normal; //  0x114 Size(c)
	Unknown Tangent; //  0x128 Size(c)
	Unknown EmissiveColor; //  0x13c Size(c)
	Unknown MaterialDomain; //  0x150 Size(1)
	Unknown BlendMode; //  0x151 Size(1)
	Unknown DecalBlendMode; //  0x152 Size(1)
	Unknown MaterialDecalResponse; //  0x153 Size(1)
	Unknown ShadingModel; //  0x154 Size(1)
	char bCastDynamicShadowAsMasked; //  0x155 Size(1)
	Unknown ShadingModels; //  0x156 Size(2)
	float OpacityMaskClipValue; //  0x158 Size(4)
	Unknown WorldPositionOffset; //  0x15c Size(c)
	Unknown Refraction; //  0x170 Size(c)
	Unknown MaterialAttributes; //  0x184 Size(10)
	Unknown PixelDepthOffset; //  0x19c Size(c)
	Unknown ShadingModelFromMaterialExpression; //  0x1b0 Size(c)
	char bEnableSeparateTranslucency; //  0x1c4 Size(1)
	char bEnableResponsiveAA; //  0x1c4 Size(1)
	char bEnableTranslucentVelocity; //  0x1c8 Size(1)
	char bScreenSpaceReflections; //  0x1cc Size(1)
	char bContactShadows; //  0x1cc Size(1)
	char TwoSided; //  0x1cc Size(1)
	char DitheredLODTransition; //  0x1cc Size(1)
	char DitherOpacityMask; //  0x1cc Size(1)
	char bAllowNegativeEmissiveColor; //  0x1cc Size(1)
	Unknown TranslucencyLightingMode; //  0x1cd Size(1)
	char bEnableMobileSeparateTranslucency; //  0x1ce Size(1)
	int32_t NumCustomizedUVs; //  0x1d0 Size(4)
	float TranslucencyDirectionalLightingIntensity; //  0x1d4 Size(4)
	float TranslucentShadowDensityScale; //  0x1d8 Size(4)
	float TranslucentSelfShadowDensityScale; //  0x1dc Size(4)
	float TranslucentSelfShadowSecondDensityScale; //  0x1e0 Size(4)
	float TranslucentSelfShadowSecondOpacity; //  0x1e4 Size(4)
	float TranslucentBackscatteringExponent; //  0x1e8 Size(4)
	Unknown TranslucentMultipleScatteringExtinction; //  0x1ec Size(10)
	float TranslucentShadowStartOffset; //  0x1fc Size(4)
	char bDisableDepthTest; //  0x200 Size(1)
	char bWriteOnlyAlpha; //  0x200 Size(1)
	char bGenerateSphericalParticleNormals; //  0x200 Size(1)
	char bTangentSpaceNormal; //  0x200 Size(1)
	char bUseEmissiveForDynamicAreaLighting; //  0x200 Size(1)
	char bBlockGI; //  0x200 Size(1)
	char bUsedAsSpecialEngineMaterial; //  0x200 Size(1)
	char bUsedWithSkeletalMesh; //  0x200 Size(1)
	char bUsedWithEditorCompositing; //  0x201 Size(1)
	char bUsedWithParticleSprites; //  0x201 Size(1)
	char bUsedWithBeamTrails; //  0x201 Size(1)
	char bUsedWithMeshParticles; //  0x201 Size(1)
	char bUsedWithNiagaraSprites; //  0x201 Size(1)
	char bUsedWithNiagaraRibbons; //  0x201 Size(1)
	char bUsedWithNiagaraMeshParticles; //  0x201 Size(1)
	char bUsedWithGeometryCache; //  0x201 Size(1)
	char bUsedWithStaticLighting; //  0x202 Size(1)
	char bUsedWithMorphTargets; //  0x202 Size(1)
	char bUsedWithSplineMeshes; //  0x202 Size(1)
	char bUsedWithInstancedStaticMeshes; //  0x202 Size(1)
	char bUsedWithGeometryCollections; //  0x202 Size(1)
	char bUsesDistortion; //  0x202 Size(1)
	char bUsedWithClothing; //  0x202 Size(1)
	char bUsedWithWater; //  0x204 Size(1)
	char bUsedWithHairStrands; //  0x204 Size(1)
	char bUsedWithLidarPointCloud; //  0x204 Size(1)
	char bUsedWithUI; //  0x208 Size(1)
	char bAutomaticallySetUsageInEditor; //  0x208 Size(1)
	char bFullyRough; //  0x208 Size(1)
	char bUseFullPrecision; //  0x208 Size(1)
	char bUseLightmapDirectionality; //  0x208 Size(1)
	char bForwardRenderUsePreintegratedGFForSimpleIBL; //  0x20c Size(1)
	char bUseHQForwardReflections; //  0x210 Size(1)
	char bUsePlanarForwardReflections; //  0x210 Size(1)
	char bNormalCurvatureToRoughness; //  0x210 Size(1)
	Unknown D3D11TessellationMode; //  0x211 Size(1)
	char bEnableCrackFreeDisplacement; //  0x212 Size(1)
	char bEnableAdaptiveTessellation; //  0x212 Size(1)
	char AllowTranslucentCustomDepthWrites; //  0x212 Size(1)
	char Wireframe; //  0x212 Size(1)
	char bCanMaskedBeAssumedOpaque; //  0x212 Size(1)
	char bIsMasked; //  0x212 Size(1)
	char bIsPreviewMaterial; //  0x212 Size(1)
	char bIsFunctionPreviewMaterial; //  0x212 Size(1)
	char bUseMaterialAttributes; //  0x213 Size(1)
	char bCastRayTracedShadows; //  0x213 Size(1)
	char bUseTranslucencyVertexFog; //  0x213 Size(1)
	char bIsSky; //  0x213 Size(1)
	char bComputeFogPerPixel; //  0x213 Size(1)
	char bOutputTranslucentVelocity; //  0x213 Size(1)
	char bAllowDevelopmentShaderCompile; //  0x213 Size(1)
	char bIsMaterialEditorStatsMaterial; //  0x213 Size(1)
	Unknown BlendableLocation; //  0x214 Size(1)
	char BlendableOutputAlpha; //  0x215 Size(1)
	char bEnableStencilTest; //  0x215 Size(1)
	Unknown StencilCompare; //  0x216 Size(1)
	Unknown StencilRefValue; //  0x217 Size(1)
	Unknown RefractionMode; //  0x218 Size(1)
	int32_t BlendablePriority; //  0x21c Size(4)
	char bIsBlendable; //  0x220 Size(1)
	uint32_t UsageFlagWarnings; //  0x224 Size(4)
	float RefractionDepthBias; //  0x228 Size(4)
	Unknown StateID; //  0x22c Size(10)
	float MaxDisplacement; //  0x23c Size(4)
	Unknown CachedExpressionData; //  0x2c8 Size(228)
};

// Class Engine.MaterialBillboardComponent
struct UMaterialBillboardComponent : UPrimitiveComponent {
	Unknown Elements; //  0x4b8 Size(10)

	void SetElements(Unknown& NewElements); // Function Engine.MaterialBillboardComponent.SetElements(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x3d69620>
};

// Class Engine.MaterialExpressionAbs
struct UMaterialExpressionAbs : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionAdd
struct UMaterialExpressionAdd : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	float ConstA; //  0x68 Size(4)
	float ConstB; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float threshold; //  0xf0 Size(4)
	Unknown Channel; //  0xf4 Size(1)
};

// Class Engine.MaterialExpressionAppendVector
struct UMaterialExpressionAppendVector : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionArccosine
struct UMaterialExpressionArccosine : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionArccosineFast
struct UMaterialExpressionArccosineFast : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionArcsine
struct UMaterialExpressionArcsine : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionArcsineFast
struct UMaterialExpressionArcsineFast : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionArctangent
struct UMaterialExpressionArctangent : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionArctangent2
struct UMaterialExpressionArctangent2 : UMaterialExpression {
	Unknown Y; //  0x40 Size(c)
	Unknown X; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionArctangent2Fast
struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	Unknown Y; //  0x40 Size(c)
	Unknown X; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionArctangentFast
struct UMaterialExpressionArctangentFast : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionAtmosphericFog
struct UMaterialExpressionAtmosphericFog : UMaterialExpression {
	Unknown WorldPosition; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionBlackBody
struct UMaterialExpressionBlackBody : UMaterialExpression {
	Unknown Temp; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	Unknown A; //  0x40 Size(10)
	Unknown B; //  0x58 Size(10)
	Unknown ALPHA; //  0x70 Size(c)
	Unknown PixelAttributeBlendType; //  0x84 Size(1)
	Unknown VertexAttributeBlendType; //  0x85 Size(1)
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	Unknown MaterialAttributes; //  0x40 Size(10)
};

// Class Engine.MaterialExpressionBumpOffset
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	Unknown Coordinate; //  0x40 Size(c)
	Unknown Height; //  0x54 Size(c)
	Unknown HeightRatioInput; //  0x68 Size(c)
	float HeightRatio; //  0x7c Size(4)
	float ReferencePlane; //  0x80 Size(4)
	uint32_t ConstCoordinate; //  0x84 Size(4)
};

// Class Engine.MaterialExpressionCeil
struct UMaterialExpressionCeil : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionParameter
struct UMaterialExpressionParameter : UMaterialExpression {
	struct FName ParameterName; //  0x40 Size(8)
	Unknown ExpressionGUID; //  0x48 Size(10)
};

// Class Engine.MaterialExpressionVectorParameter
struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	Unknown DefaultValue; //  0x58 Size(10)
	char bUseCustomPrimitiveData; //  0x68 Size(1)
	Unknown PrimitiveDataIndex; //  0x69 Size(1)
};

// Class Engine.MaterialExpressionChannelMaskParameter
struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	Unknown MaskChannel; //  0x70 Size(1)
	Unknown Input; //  0x74 Size(c)
};

// Class Engine.MaterialExpressionClamp
struct UMaterialExpressionClamp : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	Unknown Min; //  0x54 Size(c)
	Unknown MAX; //  0x68 Size(c)
	Unknown ClampMode; //  0x7c Size(1)
	float MinDefault; //  0x80 Size(4)
	float MaxDefault; //  0x84 Size(4)
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionCollectio
struct UMaterialExpressionCollectiot : UMaterialExpression {
	Unknown Collection; //  0x40 Size(8)
	struct FName ParameterName; //  0x48 Size(8)
	Unknown ParameterId; //  0x50 Size(10)
};

// Class Engine.MaterialExpressionComment
struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; //  0x40 Size(4)
	int32_t SizeY; //  0x44 Size(4)
	struct FString Text; //  0x48 Size(10)
	Unknown CommentColor; //  0x58 Size(10)
	int32_t FontSize; //  0x68 Size(4)
};

// Class Engine.MaterialExpressionComponentMask
struct UMaterialExpressionComponentMask : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	char R; //  0x54 Size(1)
	char G; //  0x54 Size(1)
	char B; //  0x54 Size(1)
	char A; //  0x54 Size(1)
};

// Class Engine.MaterialExpressionConstant
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; //  0x40 Size(4)
};

// Class Engine.MaterialExpressionConstant2Vector
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; //  0x40 Size(4)
	float G; //  0x44 Size(4)
};

// Class Engine.MaterialExpressionConstant3Vector
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	Unknown Constant; //  0x40 Size(10)
};

// Class Engine.MaterialExpressionConstant4Vector
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	Unknown Constant; //  0x40 Size(10)
};

// Class Engine.MaterialExpressionConstantBiasScale
struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	float Bias; //  0x54 Size(4)
	float Scale; //  0x58 Size(4)
};

// Class Engine.MaterialExpressionCosine
struct UMaterialExpressionCosine : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	float Period; //  0x54 Size(4)
};

// Class Engine.MaterialExpressionCrossProduct
struct UMaterialExpressionCrossProduct : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionScalarParameter
struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; //  0x58 Size(4)
	char bUseCustomPrimitiveData; //  0x5c Size(1)
	Unknown PrimitiveDataIndex; //  0x5d Size(1)
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	Unknown Curve; //  0x60 Size(8)
	Unknown Atlas; //  0x68 Size(8)
	Unknown InputTime; //  0x70 Size(c)
};

// Class Engine.MaterialExpressionCustom
struct UMaterialExpressionCustom : UMaterialExpression {
	struct FString Code; //  0x40 Size(10)
	Unknown OutputType; //  0x50 Size(1)
	struct FString Description; //  0x58 Size(10)
	Unknown Inputs; //  0x68 Size(10)
	Unknown AdditionalDefines; //  0x78 Size(10)
	Unknown IncludeFilePaths; //  0x88 Size(10)
};

// Class Engine.MaterialExpressionDDX
struct UMaterialExpressionDDX : UMaterialExpression {
	Unknown Value; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionDDY
struct UMaterialExpressionDDY : UMaterialExpression {
	Unknown Value; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionDecalMipmapLevel
struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	Unknown TextureSize; //  0x40 Size(c)
	float ConstWidth; //  0x54 Size(4)
	float ConstHeight; //  0x58 Size(4)
};

// Class Engine.MaterialExpressionDepthFade
struct UMaterialExpressionDepthFade : UMaterialExpression {
	Unknown InOpacity; //  0x40 Size(c)
	Unknown FadeDistance; //  0x54 Size(c)
	float OpacityDefault; //  0x68 Size(4)
	float FadeDistanceDefault; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	Unknown FunctionValue; //  0x40 Size(1)
	Unknown Depth; //  0x44 Size(c)
};

// Class Engine.MaterialExpressionDeriveNormalZ
struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	Unknown InXY; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionDesaturation
struct UMaterialExpressionDesaturation : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	Unknown Fraction; //  0x54 Size(c)
	Unknown LuminanceFactors; //  0x68 Size(10)
};

// Class Engine.MaterialExpressionDistance
struct UMaterialExpressionDistance : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionDistanceFieldGradient
struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	Unknown Position; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	Unknown Position; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionDivide
struct UMaterialExpressionDivide : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	float ConstA; //  0x68 Size(4)
	float ConstB; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionDotProduct
struct UMaterialExpressionDotProduct : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionDynamicParameter
struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	Unknown ParamNames; //  0x40 Size(10)
	Unknown DefaultValue; //  0x50 Size(10)
	uint32_t ParameterIndex; //  0x60 Size(4)
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	Unknown Default; //  0x40 Size(c)
	Unknown Inputs; //  0x54 Size(30)
};

// Class Engine.MaterialExpressionFloor
struct UMaterialExpressionFloor : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionFmod
struct UMaterialExpressionFmod : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionFontSample
struct UMaterialExpressionFontSample : UMaterialExpression {
	Unknown Font; //  0x40 Size(8)
	int32_t FontTexturePage; //  0x48 Size(4)
};

// Class Engine.MaterialExpressionFontSampleParameter
struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	struct FName ParameterName; //  0x50 Size(8)
	Unknown ExpressionGUID; //  0x58 Size(10)
	struct FName Group; //  0x68 Size(8)
};

// Class Engine.MaterialExpressionFrac
struct UMaterialExpressionFrac : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionFresnel
struct UMaterialExpressionFresnel : UMaterialExpression {
	Unknown ExponentIn; //  0x40 Size(c)
	float Exponent; //  0x54 Size(4)
	Unknown BaseReflectFractionIn; //  0x58 Size(c)
	float BaseReflectFraction; //  0x6c Size(4)
	Unknown Normal; //  0x70 Size(c)
};

// Class Engine.MaterialExpressionFunctionInput
struct UMaterialExpressionFunctionInput : UMaterialExpression {
	Unknown Preview; //  0x40 Size(c)
	struct FName InputName; //  0x54 Size(8)
	struct FString Description; //  0x60 Size(10)
	Unknown ID; //  0x70 Size(10)
	Unknown InputType; //  0x80 Size(1)
	Unknown PreviewValue; //  0x90 Size(10)
	char bUsePreviewValueAsDefault; //  0xa0 Size(1)
	int32_t SortPriority; //  0xa4 Size(4)
	char bCompilingFunctionPreview; //  0xa8 Size(1)
};

// Class Engine.MaterialExpressionFunctionOutput
struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	struct FName OutputName; //  0x40 Size(8)
	struct FString Description; //  0x48 Size(10)
	int32_t SortPriority; //  0x58 Size(4)
	Unknown A; //  0x5c Size(c)
	char bLastPreviewed; //  0x70 Size(1)
	Unknown ID; //  0x74 Size(10)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	Unknown MaterialAttributes; //  0x40 Size(10)
	Unknown AttributeGetTypes; //  0x58 Size(10)
};

// Class Engine.MaterialExpressionGIReplace
struct UMaterialExpressionGIReplace : UMaterialExpression {
	Unknown Default; //  0x40 Size(c)
	Unknown StaticIndirect; //  0x54 Size(c)
	Unknown DynamicIndirect; //  0x68 Size(c)
};

// Class Engine.MaterialExpressionIf
struct UMaterialExpressionIf : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	Unknown AGreaterThanB; //  0x68 Size(c)
	Unknown AEqualsB; //  0x7c Size(c)
	Unknown ALessThanB; //  0x90 Size(c)
	float EqualsThreshold; //  0xa4 Size(4)
	float ConstB; //  0xa8 Size(4)
	float ConstAEqualsB; //  0xac Size(4)
};

// Class Engine.MaterialExpressionLightmassReplace
struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	Unknown Realtime; //  0x40 Size(c)
	Unknown Lightmass; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionLinearInterpolate
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	Unknown ALPHA; //  0x68 Size(c)
	float ConstA; //  0x7c Size(4)
	float ConstB; //  0x80 Size(4)
	float ConstAlpha; //  0x84 Size(4)
};

// Class Engine.MaterialExpressionLogarithm10
struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	Unknown X; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionLogarithm2
struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	Unknown X; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	Unknown BaseColor; //  0x40 Size(c)
	Unknown Metallic; //  0x54 Size(c)
	Unknown Specular; //  0x68 Size(c)
	Unknown Roughness; //  0x7c Size(c)
	Unknown Anisotropy; //  0x90 Size(c)
	Unknown EmissiveColor; //  0xa4 Size(c)
	Unknown Opacity; //  0xb8 Size(c)
	Unknown OpacityMask; //  0xcc Size(c)
	Unknown Normal; //  0xe0 Size(c)
	Unknown Tangent; //  0xf4 Size(c)
	Unknown WorldPositionOffset; //  0x108 Size(c)
	Unknown WorldDisplacement; //  0x11c Size(c)
	Unknown TessellationMultiplier; //  0x130 Size(c)
	Unknown SubsurfaceColor; //  0x144 Size(c)
	Unknown ClearCoat; //  0x158 Size(c)
	Unknown ClearCoatRoughness; //  0x16c Size(c)
	Unknown AmbientOcclusion; //  0x180 Size(c)
	Unknown Refraction; //  0x194 Size(c)
	Unknown CustomizedUVs; //  0x1a8 Size(60)
	Unknown PixelDepthOffset; //  0x248 Size(c)
	Unknown ShadingModel; //  0x25c Size(c)
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	Unknown Coordinates; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	struct FName ParameterName; //  0x40 Size(8)
	Unknown ExpressionGUID; //  0x48 Size(10)
	Unknown Input; //  0x58 Size(10)
	Unknown DefaultLayers; //  0x70 Size(40)
	Unknown LayerCallers; //  0xb0 Size(10)
	int32_t NumActiveLayerCallers; //  0xc0 Size(4)
	Unknown BlendCallers; //  0xc8 Size(10)
	int32_t NumActiveBlendCallers; //  0xd8 Size(4)
	char bIsLayerGraphBuilt; //  0xdc Size(1)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	Unknown MaterialFunction; //  0x40 Size(8)
	Unknown FunctionParameterInfo; //  0x48 Size(10)
};

// Class Engine.MaterialExpressionMaterialProxyReplace
struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	Unknown Realtime; //  0x40 Size(c)
	Unknown MaterialProxy; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionMax
struct UMaterialExpressionMax : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	float ConstA; //  0x68 Size(4)
	float ConstB; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionMin
struct UMaterialExpressionMin : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	float ConstA; //  0x68 Size(4)
	float ConstB; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionMultiply
struct UMaterialExpressionMultiply : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	float ConstA; //  0x68 Size(4)
	float ConstB; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionNoise
struct UMaterialExpressionNoise : UMaterialExpression {
	Unknown Position; //  0x40 Size(c)
	Unknown FilterWidth; //  0x54 Size(c)
	float Scale; //  0x68 Size(4)
	int32_t Quality; //  0x6c Size(4)
	Unknown NoiseFunction; //  0x70 Size(1)
	char bTurbulence; //  0x74 Size(1)
	int32_t Levels; //  0x78 Size(4)
	float OutputMin; //  0x7c Size(4)
	float OutputMax; //  0x80 Size(4)
	float LevelScale; //  0x84 Size(4)
	char bTiling; //  0x88 Size(1)
	uint32_t RepeatSize; //  0x8c Size(4)
};

// Class Engine.MaterialExpressionNormalize
struct UMaterialExpressionNormalize : UMaterialExpression {
	Unknown VectorInput; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionOneMinus
struct UMaterialExpressionOneMinus : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionPanner
struct UMaterialExpressionPanner : UMaterialExpression {
	Unknown Coordinate; //  0x40 Size(c)
	Unknown Time; //  0x54 Size(c)
	Unknown Speed; //  0x68 Size(c)
	float SpeedX; //  0x7c Size(4)
	float SpeedY; //  0x80 Size(4)
	uint32_t ConstCoordinate; //  0x84 Size(4)
	char bFractionalPart; //  0x88 Size(1)
};

// Class Engine.MaterialExpressionParticleSubUV
struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend; //  0xd0 Size(1)
};

// Class Engine.MaterialExpressionPerInstanceCustomData
struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	Unknown DefaultValue; //  0x40 Size(c)
	float ConstDefaultValue; //  0x54 Size(4)
	uint32_t DataIndex; //  0x58 Size(4)
};

// Class Engine.MaterialExpressionPower
struct UMaterialExpressionPower : UMaterialExpression {
	Unknown Base; //  0x40 Size(c)
	Unknown Exponent; //  0x54 Size(c)
	float ConstExponent; //  0x68 Size(4)
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	Unknown CurrentFrame; //  0x40 Size(c)
	Unknown PreviousFrame; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionQualitySwitch
struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	Unknown Default; //  0x40 Size(c)
	Unknown Inputs; //  0x54 Size(24)
};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	Unknown Normal; //  0x40 Size(c)
	Unknown RayTraced; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionRebaseToZeroOrigin
struct UMaterialExpressionRebaseToZeroOrigin : UMaterialExpression {
	Unknown InputVector; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionReflectio
struct UMaterialExpressionReflectiot : UMaterialExpression {
	Unknown CustomWorldNormal; //  0x40 Size(c)
	char bNormalizeCustomWorldNormal; //  0x54 Size(1)
};

// Class Engine.MaterialExpressionReroute
struct UMaterialExpressionReroute : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionRotateAbo
struct UMaterialExpressionRotateAbot : UMaterialExpression {
	Unknown NormalizedRotationAxis; //  0x40 Size(c)
	Unknown RotationAngle; //  0x54 Size(c)
	Unknown PivotPoint; //  0x68 Size(c)
	Unknown Position; //  0x7c Size(c)
	float Period; //  0x90 Size(4)
};

// Class Engine.MaterialExpressionRotator
struct UMaterialExpressionRotator : UMaterialExpression {
	Unknown Coordinate; //  0x40 Size(c)
	Unknown Time; //  0x54 Size(c)
	float CenterX; //  0x68 Size(4)
	float CenterY; //  0x6c Size(4)
	float Speed; //  0x70 Size(4)
	uint32_t ConstCoordinate; //  0x74 Size(4)
};

// Class Engine.MaterialExpressionRound
struct UMaterialExpressionRound : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	Unknown BaseColor; //  0x40 Size(c)
	Unknown Specular; //  0x54 Size(c)
	Unknown Roughness; //  0x68 Size(c)
	Unknown Normal; //  0x7c Size(c)
	Unknown WorldHeight; //  0x90 Size(c)
	Unknown Opacity; //  0xa4 Size(c)
	Unknown Mask; //  0xb8 Size(c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	Unknown Default; //  0x40 Size(c)
	Unknown VirtualTextureOutput; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	Unknown Coordinates; //  0x40 Size(c)
	Unknown WorldPosition; //  0x54 Size(c)
	Unknown MipValue; //  0x68 Size(c)
	Unknown VirtualTexture; //  0x80 Size(8)
	Unknown MaterialType; //  0x88 Size(1)
	char bSinglePhysicalSpace; //  0x89 Size(1)
	Unknown MipValueMode; //  0x8a Size(1)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	struct FName ParameterName; //  0x90 Size(8)
	Unknown ExpressionGUID; //  0x98 Size(10)
	struct FName Group; //  0xa8 Size(8)
};

// Class Engine.MaterialExpressionSaturate
struct UMaterialExpressionSaturate : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionSceneColo
struct UMaterialExpressionSceneColot : UMaterialExpression {
	Unknown InputMode; //  0x40 Size(1)
	Unknown Input; //  0x44 Size(c)
	Unknown OffsetFraction; //  0x58 Size(c)
	Unknown ConstInput; //  0x6c Size(8)
};

// Class Engine.MaterialExpressionSceneDepth
struct UMaterialExpressionSceneDepth : UMaterialExpression {
	Unknown InputMode; //  0x40 Size(1)
	Unknown Input; //  0x44 Size(c)
	Unknown Coordinates; //  0x58 Size(c)
	Unknown ConstInput; //  0x6c Size(8)
};

// Class Engine.MaterialExpressionSceneTexture
struct UMaterialExpressionSceneTexture : UMaterialExpression {
	Unknown Coordinates; //  0x40 Size(c)
	Unknown SceneTextureId; //  0x54 Size(1)
	char bFiltered; //  0x55 Size(1)
};

// Class Engine.MaterialExpressionSetMaterialAttributes
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	Unknown Inputs; //  0x40 Size(10)
	Unknown AttributeSetTypes; //  0x50 Size(10)
};

// Class Engine.MaterialExpressionShaderStageSwitch
struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	Unknown PixelShader; //  0x40 Size(c)
	Unknown VertexShader; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionShadingMo
struct UMaterialExpressionShadingMot : UMaterialExpression {
	Unknown ShadingModel; //  0x40 Size(1)
};

// Class Engine.MaterialExpressionShadingPathSwitch
struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	Unknown Default; //  0x40 Size(c)
	Unknown Inputs; //  0x54 Size(24)
};

// Class Engine.MaterialExpressionShadowReplace
struct UMaterialExpressionShadowReplace : UMaterialExpression {
	Unknown Default; //  0x40 Size(c)
	Unknown Shadow; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionSign
struct UMaterialExpressionSign : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionSine
struct UMaterialExpressionSine : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	float Period; //  0x54 Size(4)
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	Unknown ScatteringCoefficients; //  0x40 Size(c)
	Unknown AbsorptionCoefficients; //  0x54 Size(c)
	Unknown PhaseG; //  0x68 Size(c)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; //  0x40 Size(4)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; //  0x40 Size(4)
	Unknown WorldPosition; //  0x44 Size(c)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; //  0x40 Size(4)
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	Unknown WorldPosition; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionSobol
struct UMaterialExpressionSobol : UMaterialExpression {
	Unknown cell; //  0x40 Size(c)
	Unknown Index; //  0x54 Size(c)
	Unknown Seed; //  0x68 Size(c)
	uint32_t ConstIndex; //  0x7c Size(4)
	Unknown ConstSeed; //  0x80 Size(8)
};

// Class Engine.MaterialExpressionSpeedTree
struct UMaterialExpressionSpeedTree : UMaterialExpression {
	Unknown GeometryInput; //  0x40 Size(c)
	Unknown WindInput; //  0x54 Size(c)
	Unknown LODInput; //  0x68 Size(c)
	Unknown ExtraBendWS; //  0x7c Size(c)
	Unknown GeometryType; //  0x90 Size(1)
	Unknown WindType; //  0x91 Size(1)
	Unknown LODType; //  0x92 Size(1)
	float BillboardThreshold; //  0x94 Size(4)
	char bAccurateWindVelocities; //  0x98 Size(1)
};

// Class Engine.MaterialExpressionSphereMask
struct UMaterialExpressionSphereMask : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	Unknown Radius; //  0x68 Size(c)
	Unknown Hardness; //  0x7c Size(c)
	float AttenuationRadius; //  0x90 Size(4)
	float HardnessPercent; //  0x94 Size(4)
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	Unknown Density; //  0x40 Size(c)
	float ConstantDensity; //  0x54 Size(4)
};

// Class Engine.MaterialExpressionSquareRoo
struct UMaterialExpressionSquareRoot : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionStaticBoo
struct UMaterialExpressionStaticBoot : UMaterialExpression {
	char Value; //  0x40 Size(1)
};

// Class Engine.MaterialExpressionStaticBoo
struct UMaterialExpressionStaticBoot : UMaterialExpressionParameter {
	char DefaultValue; //  0x58 Size(1)
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	Unknown Input; //  0x58 Size(c)
	char DefaultR; //  0x6c Size(1)
	char DefaultG; //  0x6c Size(1)
	char DefaultB; //  0x6c Size(1)
	char DefaultA; //  0x6c Size(1)
};

// Class Engine.MaterialExpressionStaticSwitch
struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue; //  0x40 Size(1)
	Unknown A; //  0x44 Size(c)
	Unknown B; //  0x58 Size(c)
	Unknown Value; //  0x6c Size(c)
};

// Class Engine.MaterialExpressionStaticSwitchParameter
struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoo {
	Unknown A; //  0x60 Size(c)
	Unknown B; //  0x74 Size(c)
};

// Class Engine.MaterialExpressionSubtract
struct UMaterialExpressionSubtract : UMaterialExpression {
	Unknown A; //  0x40 Size(c)
	Unknown B; //  0x54 Size(c)
	float ConstA; //  0x68 Size(4)
	float ConstB; //  0x6c Size(4)
};

// Class Engine.MaterialExpressionTangent
struct UMaterialExpressionTangent : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	float Period; //  0x54 Size(4)
};

// Class Engine.MaterialExpressionTangentOutput
struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionTemporalSobol
struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	Unknown Index; //  0x40 Size(c)
	Unknown Seed; //  0x54 Size(c)
	uint32_t ConstIndex; //  0x68 Size(4)
	Unknown ConstSeed; //  0x6c Size(8)
};

// Class Engine.MaterialExpressionTextureCo
struct UMaterialExpressionTextureCot : UMaterialExpression {
	int32_t CoordinateIndex; //  0x40 Size(4)
	float UTiling; //  0x44 Size(4)
	float VTiling; //  0x48 Size(4)
	char UnMirrorU; //  0x4c Size(1)
	char UnMirrorV; //  0x4c Size(1)
};

// Class Engine.MaterialExpressionTextureProperty
struct UMaterialExpressionTextureProperty : UMaterialExpression {
	Unknown TextureObject; //  0x40 Size(c)
	Unknown Property; //  0x54 Size(1)
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend; //  0xf0 Size(1)
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	Unknown TransmittanceColor; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionTime
struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause; //  0x40 Size(1)
	char bOverride_Period; //  0x40 Size(1)
	float Period; //  0x44 Size(4)
};

// Class Engine.MaterialExpressionTransform
struct UMaterialExpressionTransform : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	Unknown TransformSourceType; //  0x54 Size(1)
	Unknown TransformType; //  0x55 Size(1)
};

// Class Engine.MaterialExpressionTransformPosition
struct UMaterialExpressionTransformPosition : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
	Unknown TransformSourceType; //  0x54 Size(1)
	Unknown TransformType; //  0x55 Size(1)
};

// Class Engine.MaterialExpressionTruncate
struct UMaterialExpressionTruncate : UMaterialExpression {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionVectorNoise
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	Unknown Position; //  0x40 Size(c)
	Unknown NoiseFunction; //  0x54 Size(1)
	int32_t Quality; //  0x58 Size(4)
	char bTiling; //  0x5c Size(1)
	uint32_t TileSize; //  0x60 Size(4)
};

// Class Engine.MaterialExpressionVertexInterpolator
struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	Unknown Input; //  0x40 Size(c)
};

// Class Engine.MaterialExpressionViewProperty
struct UMaterialExpressionViewProperty : UMaterialExpression {
	Unknown Property; //  0x40 Size(1)
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	Unknown No; //  0x40 Size(c)
	Unknown Yes; //  0x54 Size(c)
};

// Class Engine.MaterialExpressionWorldPosition
struct UMaterialExpressionWorldPosition : UMaterialExpression {
	Unknown WorldPositionShaderOffset; //  0x40 Size(1)
};

// Class Engine.MaterialFunctionInterface
struct UMaterialFunctionInterface : Object {
	Unknown StateID; //  0x28 Size(10)
	Unknown MaterialFunctionUsage; //  0x38 Size(1)
};

// Class Engine.MaterialFunction
struct UMaterialFunction : UMaterialFunctionInterface {
	struct FString Description; //  0x40 Size(10)
	char bExposeToLibrary; //  0x50 Size(1)
	char bPrefixParameterNames; //  0x50 Size(1)
	char bReentrantFlag; //  0x50 Size(1)
};

// Class Engine.MaterialFunctionInstance
struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	Unknown Parent; //  0x40 Size(8)
	Unknown Base; //  0x48 Size(8)
	Unknown ScalarParameterValues; //  0x50 Size(10)
	Unknown VectorParameterValues; //  0x60 Size(10)
	Unknown TextureParameterValues; //  0x70 Size(10)
	Unknown FontParameterValues; //  0x80 Size(10)
	Unknown StaticSwitchParameterValues; //  0x90 Size(10)
	Unknown StaticComponentMaskParameterValues; //  0xa0 Size(10)
	Unknown RuntimeVirtualTextureParameterValues; //  0xb0 Size(10)
};

// Class Engine.MaterialInstanceActor
struct AMaterialInstanceActor : UActor {
	Unknown TargetActors; //  0x310 Size(10)
};

// Class Engine.MaterialParameterCollection
struct UMaterialParameterCollection : Object {
	Unknown StateID; //  0x28 Size(10)
	Unknown ScalarParameters; //  0x38 Size(10)
	Unknown VectorParameters; //  0x48 Size(10)
};

// Class Engine.MaterialParameterCollectionInstance
struct UMaterialParameterCollectionInstance : Object {
	Unknown Collection; //  0x30 Size(8)
};

// Class Engine.MatineeActor
struct AMatineeActor : UActor {
	Unknown MatineeData; //  0x310 Size(8)
	struct FName MatineeControllerName; //  0x318 Size(8)
	float PlayRate; //  0x320 Size(4)
	char bPlayOnLevelLoad; //  0x324 Size(1)
	char bForceStartPos; //  0x324 Size(1)
	float ForceStartPosition; //  0x328 Size(4)
	char bLooping; //  0x32c Size(1)
	char bRewindOnPlay; //  0x32c Size(1)
	char bNoResetOnRewind; //  0x32c Size(1)
	char bRewindIfAlreadyPlaying; //  0x32c Size(1)
	char bDisableRadioFilter; //  0x32c Size(1)
	char bClientSideOnly; //  0x32c Size(1)
	char bSkipUpdateIfNotVisible; //  0x32c Size(1)
	char bIsSkippable; //  0x32c Size(1)
	int32_t PreferredSplitScreenNum; //  0x330 Size(4)
	char bDisableMovementInput; //  0x334 Size(1)
	char bDisableLookAtInput; //  0x334 Size(1)
	char bHidePlayer; //  0x334 Size(1)
	char bHideHud; //  0x334 Size(1)
	Unknown GroupActorInfos; //  0x338 Size(10)
	char bShouldShowGore; //  0x348 Size(1)
	Unknown GroupInst; //  0x350 Size(10)
	Unknown CameraCuts; //  0x360 Size(10)
	char bIsPlaying; //  0x370 Size(1)
	char bReversePlayback; //  0x370 Size(1)
	char bPaused; //  0x370 Size(1)
	char bPendingStop; //  0x370 Size(1)
	float InterpPosition; //  0x374 Size(4)
	Unknown ReplicationForceIsPlaying; //  0x37c Size(1)
	struct FMulticastInlineDelegate OnPlay; //  0x380 Size(10)
	struct FMulticastInlineDelegate OnStop; //  0x390 Size(10)
	struct FMulticastInlineDelegate OnPause; //  0x3a0 Size(10)

	void Stop(); // Function Engine.MatineeActor.Stop(Native|Public|BlueprintCallable) // <Game+0x1f16020>
};

// Class Engine.MatineeActorCameraAnim
struct AMatineeActorCameraAnim : AMatineeActor {
	Unknown CameraAnim; //  0x3b8 Size(8)
};

// Class Engine.MeshSimplificationSettings
struct UMeshSimplificationSettings : UDeveloperSettings {
	struct FName MeshReductionModuleName; //  0x38 Size(8)
};

// Class Engine.MicroTransactionBase
struct UMicroTransactionBase : UPlatformInterfaceBase {
	Unknown AvailableProducts; //  0x38 Size(10)
	struct FString LastError; //  0x48 Size(10)
	struct FString LastErrorSolution; //  0x58 Size(10)
};

// Class Engine.MK3DKillcamComponent
struct UMK3DKillcamComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMK3DKillcamCompleteEvent; //  0xb0 Size(10)
	Unknown MK3DKillEvents; //  0xd8 Size(10)
	float KillcamBeforeSec; //  0xe8 Size(4)
	float KillcamAfterSec; //  0xec Size(4)

	void OnJumpCompleteForKillcam(char bSuccess); // Function Engine.MK3DKillcamComponent.OnJumpCompleteForKillcam(Final|Native|Public) // <Game+0x3d840e0>
};

// Class Engine.MK3DTargetcamComponent
struct UMK3DTargetcamComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMK3DTargetcamCompleteEvent; //  0xb0 Size(10)
	Unknown MK3DTargetEvents; //  0xd8 Size(10)

	void EnumerateMK3DTargetEvents(Unknown World); // Function Engine.MK3DTargetcamComponent.EnumerateMK3DTargetEvents(Final|Native|Public) // <Game+0x3d87a40>
};

// Class Engine.MKDemoActorChannel
struct UMKDemoActorChannel : UActorChannel {
	Unknown PendingNetObjectsHolder; //  0x2f0 Size(10)
};

// Class Engine.ReplaySampleBase
struct UReplaySampleBase : Object {
	Unknown DataVersion; //  0x30 Size(1)
	float Time; //  0x34 Size(4)

	Unknown MakeReplaySample(Unknown Actor); // Function Engine.ReplaySampleBase.MakeReplaySample(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <Game+0x3d88bc0>
};

// Class Engine.ModelComponent
struct UModelComponent : UPrimitiveComponent {
	Unknown ModelBodySetup; //  0x4d0 Size(8)
};

// Class Engine.MorphTarget
struct UMorphTarget : Object {
	Unknown BaseSkelMesh; //  0x28 Size(8)
};

// Class Engine.NavCollisionBase
struct UNavCollisionBase : Object {
	char bIsDynamicObstacle; //  0x28 Size(1)
};

// Class Engine.NavigationDataChunk
struct UNavigationDataChunk : Object {
	struct FName NavigationDataName; //  0x28 Size(8)
};

// Class Engine.NavigationSystemConfig
struct UNavigationSystemConfig : Object {
	Unknown NavigationSystemClass; //  0x28 Size(18)
	Unknown SupportedAgentsMask; //  0x40 Size(4)
	struct FName DefaultAgentName; //  0x44 Size(8)
	char bIsOverriden; //  0x4c Size(1)
};

// Class Engine.NavLinkDefinition
struct UNavLinkDefinition : Object {
	Unknown LINKS; //  0x28 Size(10)
	Unknown SegmentLinks; //  0x38 Size(10)
};

// Class Engine.NetworkSettings
struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer; //  0x38 Size(1)
	char bEnableMultiplayerWorldOriginRebasing; //  0x38 Size(1)
	int32_t MaxRepArraySize; //  0x3c Size(4)
	int32_t MaxRepArrayMemory; //  0x40 Size(4)
	Unknown NetworkEmulationProfiles; //  0x48 Size(10)
};

// Class Engine.NodeMappingContainer
struct UNodeMappingContainer : Object {
	Unknown SourceItems; //  0x28 Size(50)
	Unknown TargetItems; //  0x78 Size(50)
	Unknown SourceToTarget; //  0xc8 Size(50)
	Unknown SourceAsset; //  0x118 Size(28)
	Unknown TargetAsset; //  0x140 Size(28)
};

// Class Engine.ObjectLibrary
struct UObjectLibrary : Object {
	Unknown ObjectBaseClass; //  0x28 Size(8)
	char bHasBlueprintClasses; //  0x30 Size(1)
	Unknown Objects; //  0x38 Size(10)
	Unknown WeakObjects; //  0x48 Size(10)
	char bUseWeakReferences; //  0x58 Size(1)
	char bIsFullyLoaded; //  0x59 Size(1)
};

// Class Engine.ObjectReferencer
struct UObjectReferencer : Object {
	Unknown ReferencedObjects; //  0x28 Size(10)
};

// Class Engine.PainCausingVolume
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing; //  0x358 Size(1)
	float DamagePerSec; //  0x35c Size(4)
	Unknown DamageType; //  0x360 Size(8)
	float PainInterval; //  0x368 Size(4)
	char bEntryPain; //  0x36c Size(1)
	char BACKUP_bPainCausing; //  0x36c Size(1)
	Unknown DamageInstigator; //  0x370 Size(8)
};

// Class Engine.ParticleEmitter
struct UParticleEmitter : Object {
	struct FName EmitterName; //  0x28 Size(8)
	int32_t SubUVDataOffset; //  0x30 Size(4)
	Unknown EmitterRenderMode; //  0x34 Size(1)
	Unknown SignificanceLevel; //  0x35 Size(1)
	char bUseLegacySpawningBehavior; //  0x37 Size(1)
	char ConvertedModules; //  0x37 Size(1)
	char bIsSoloing; //  0x37 Size(1)
	char bCookedOut; //  0x37 Size(1)
	char bDisabledLODsKeepEmitterAlive; //  0x37 Size(1)
	char bDisableWhenInsignficant; //  0x38 Size(1)
	Unknown LODLevels; //  0x40 Size(10)
	int32_t PeakActiveParticles; //  0x50 Size(4)
	int32_t InitialAllocationCount; //  0x54 Size(4)
	float QualityLevelSpawnRateScale; //  0x58 Size(4)
	uint32_t DetailModeBitmask; //  0x5c Size(4)
};

// Class Engine.ParticleLODLevel
struct UParticleLODLevel : Object {
	int32_t Level; //  0x28 Size(4)
	char bEnabled; //  0x2c Size(1)
	Unknown RequiredModule; //  0x30 Size(8)
	Unknown Modules; //  0x38 Size(10)
	Unknown TypeDataModule; //  0x48 Size(8)
	Unknown SpawnModule; //  0x50 Size(8)
	Unknown EventGenerator; //  0x58 Size(8)
	Unknown SpawningModules; //  0x60 Size(10)
	Unknown SpawnModules; //  0x70 Size(10)
	Unknown UpdateModules; //  0x80 Size(10)
	Unknown OrbitModules; //  0x90 Size(10)
	Unknown EventReceiverModules; //  0xa0 Size(10)
	char ConvertedModules; //  0xb0 Size(1)
	int32_t PeakActiveParticles; //  0xb4 Size(4)
};

// Class Engine.ParticleModule
struct UParticleModule : Object {
	char bSpawnModule; //  0x28 Size(1)
	char bUpdateModule; //  0x28 Size(1)
	char bFinalUpdateModule; //  0x28 Size(1)
	char bUpdateForGPUEmitter; //  0x28 Size(1)
	char bCurvesAsColor; //  0x28 Size(1)
	char b3DDrawMode; //  0x28 Size(1)
	char bSupported3DDrawMode; //  0x28 Size(1)
	char bEnabled; //  0x28 Size(1)
	char bEditable; //  0x29 Size(1)
	char LODDuplicate; //  0x29 Size(1)
	char bSupportsRandomSeed; //  0x29 Size(1)
	char bRequiresLoopingNotificatio; //  0x29 Size(1)
	Unknown LODValidity; //  0x2a Size(1)
};

// Class Engine.ParticleModuleAccelerationBase
struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace; //  0x30 Size(1)
};

// Class Engine.ParticleModuleAcceleration
struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	Unknown Acceleration; //  0x38 Size(48)
	char bApplyOwnerScale; //  0x80 Size(1)
};

// Class Engine.ParticleModuleAccelerationConstant
struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	Unknown Acceleration; //  0x38 Size(c)
};

// Class Engine.ParticleModuleAccelerationDrag
struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	Unknown DragCoefficient; //  0x38 Size(8)
	Unknown DragCoefficientRaw; //  0x40 Size(30)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	Unknown DragScale; //  0x38 Size(8)
	Unknown DragScaleRaw; //  0x40 Size(30)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	Unknown AccelOverLife; //  0x38 Size(48)
};

// Class Engine.ParticleModuleAttractorLine
struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	Unknown EndPoint0; //  0x30 Size(c)
	Unknown EndPoint1; //  0x3c Size(c)
	Unknown Range; //  0x48 Size(30)
	Unknown Strength; //  0x78 Size(30)
};

// Class Engine.ParticleModuleAttractorParticle
struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	struct FName EmitterName; //  0x30 Size(8)
	Unknown Range; //  0x38 Size(30)
	char bStrengthByDistance; //  0x68 Size(1)
	Unknown Strength; //  0x70 Size(30)
	char bAffectBaseVelocity; //  0xa0 Size(1)
	Unknown SelectionMethod; //  0xa4 Size(1)
	char bRenewSource; //  0xa8 Size(1)
	char bInheritSourceVel; //  0xa8 Size(1)
	int32_t LastSelIndex; //  0xac Size(4)
};

// Class Engine.ParticleModuleAttractorPoint
struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	Unknown Position; //  0x30 Size(48)
	Unknown Range; //  0x78 Size(30)
	Unknown Strength; //  0xa8 Size(30)
	char StrengthByDistance; //  0xd8 Size(1)
	char bAffectBaseVelocity; //  0xd8 Size(1)
	char bOverrideVelocity; //  0xd8 Size(1)
	char bUseWorldSpacePosition; //  0xd8 Size(1)
	char Positive_X; //  0xd8 Size(1)
	char Positive_Y; //  0xd8 Size(1)
	char Positive_Z; //  0xd8 Size(1)
	char Negative_X; //  0xd8 Size(1)
	char Negative_Y; //  0xd9 Size(1)
	char Negative_Z; //  0xd9 Size(1)
};

// Class Engine.ParticleModuleAttractorPointGravity
struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	Unknown Position; //  0x30 Size(c)
	float Radius; //  0x3c Size(4)
	Unknown Strength; //  0x40 Size(8)
	Unknown StrengthRaw; //  0x48 Size(30)
};

// Class Engine.ParticleModuleBeamModifier
struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	Unknown ModifierType; //  0x30 Size(1)
	Unknown PositionOptions; //  0x34 Size(4)
	Unknown Position; //  0x38 Size(48)
	Unknown TangentOptions; //  0x80 Size(4)
	Unknown Tangent; //  0x88 Size(48)
	char bAbsoluteTangent; //  0xd0 Size(1)
	Unknown StrengthOptions; //  0xd4 Size(4)
	Unknown Strength; //  0xd8 Size(30)
};

// Class Engine.ParticleModuleBeamNoise
struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled; //  0x30 Size(1)
	int32_t Frequency; //  0x34 Size(4)
	int32_t Frequency_LowRange; //  0x38 Size(4)
	Unknown NoiseRange; //  0x40 Size(48)
	Unknown NoiseRangeScale; //  0x88 Size(30)
	char bNRScaleEmitterTime; //  0xb8 Size(1)
	Unknown NoiseSpeed; //  0xc0 Size(48)
	char bSmooth; //  0x108 Size(1)
	float NoiseLockRadius; //  0x10c Size(4)
	char bNoiseLock; //  0x110 Size(1)
	char bOscillate; //  0x110 Size(1)
	float NoiseLockTime; //  0x114 Size(4)
	float NoiseTension; //  0x118 Size(4)
	char bUseNoiseTangents; //  0x11c Size(1)
	Unknown NoiseTangentStrength; //  0x120 Size(30)
	int32_t NoiseTessellation; //  0x150 Size(4)
	char bTargetNoise; //  0x154 Size(1)
	float FrequencyDistance; //  0x158 Size(4)
	char bApplyNoiseScale; //  0x15c Size(1)
	Unknown NoiseScale; //  0x160 Size(30)
};

// Class Engine.ParticleModuleBeamSource
struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	Unknown SourceMethod; //  0x30 Size(1)
	struct FName SourceName; //  0x34 Size(8)
	char bSourceAbsolute; //  0x3c Size(1)
	Unknown Source; //  0x40 Size(48)
	char bLockSource; //  0x88 Size(1)
	Unknown SourceTangentMethod; //  0x8c Size(1)
	Unknown SourceTangent; //  0x90 Size(48)
	char bLockSourceTangent; //  0xd8 Size(1)
	Unknown SourceStrength; //  0xe0 Size(30)
	char bLockSourceStength; //  0x110 Size(1)
};

// Class Engine.ParticleModuleBeamTarget
struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	Unknown TargetMethod; //  0x30 Size(1)
	struct FName TargetName; //  0x34 Size(8)
	Unknown Target; //  0x40 Size(48)
	char bTargetAbsolute; //  0x88 Size(1)
	char bLockTarget; //  0x88 Size(1)
	Unknown TargetTangentMethod; //  0x8c Size(1)
	Unknown TargetTangent; //  0x90 Size(48)
	char bLockTargetTangent; //  0xd8 Size(1)
	Unknown TargetStrength; //  0xe0 Size(30)
	char bLockTargetStength; //  0x110 Size(1)
	float LockRadius; //  0x114 Size(4)
};

// Class Engine.ParticleModuleCameraOffset
struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	Unknown CameraOffset; //  0x30 Size(30)
	char bSpawnTimeOnly; //  0x60 Size(1)
	Unknown UpdateMethod; //  0x64 Size(1)
};

// Class Engine.ParticleModuleCollision
struct UParticleModuleCollision : UParticleModuleCollisionBase {
	Unknown DampingFactor; //  0x30 Size(48)
	Unknown DampingFactorRotation; //  0x78 Size(48)
	Unknown MaxCollisions; //  0xc0 Size(30)
	Unknown CollisionCompletionOption; //  0xf0 Size(1)
	Unknown CollisionTypes; //  0xf8 Size(10)
	char bApplyPhysics; //  0x110 Size(1)
	char bIgnoreTriggerVolumes; //  0x110 Size(1)
	Unknown ParticleMass; //  0x118 Size(30)
	float DirScalar; //  0x148 Size(4)
	char bPawnsDoNotDecrementCount; //  0x14c Size(1)
	char bOnlyVerticalNormalsDecrementCount; //  0x14c Size(1)
	float VerticalFudgeFactor; //  0x150 Size(4)
	Unknown DelayAmount; //  0x158 Size(30)
	char bDropDetail; //  0x188 Size(1)
	char bCollideOnlyIfVisible; //  0x188 Size(1)
	char bIgnoreSourceActor; //  0x188 Size(1)
	float MaxCollisionDistance; //  0x18c Size(4)
};

// Class Engine.ParticleModuleCollisionGPU
struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	Unknown Resilience; //  0x30 Size(30)
	Unknown ResilienceScaleOverLife; //  0x60 Size(30)
	float Friction; //  0x90 Size(4)
	float RandomSpread; //  0x94 Size(4)
	float RandomDistribution; //  0x98 Size(4)
	float RadiusScale; //  0x9c Size(4)
	float RadiusBias; //  0xa0 Size(4)
	Unknown Response; //  0xa4 Size(1)
	Unknown CollisionMode; //  0xa5 Size(1)
};

// Class Engine.ParticleModuleColor
struct UParticleModuleColor : UParticleModuleColorBase {
	Unknown StartColor; //  0x30 Size(48)
	Unknown StartAlpha; //  0x78 Size(30)
	char bClampAlpha; //  0xa8 Size(1)
};

// Class Engine.ParticleModuleColor_Seeded
struct UParticleModuleColor_Seeded : UParticleModuleColor {
	Unknown RandomSeedInfo; //  0xb0 Size(20)
};

// Class Engine.ParticleModuleColorOverLife
struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	Unknown ColorOverLife; //  0x30 Size(48)
	Unknown AlphaOverLife; //  0x78 Size(30)
	char bClampAlpha; //  0xa8 Size(1)
};

// Class Engine.ParticleModuleColorScaleOverLife
struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	Unknown ColorScaleOverLife; //  0x30 Size(48)
	Unknown AlphaScaleOverLife; //  0x78 Size(30)
	char bEmitterTime; //  0xa8 Size(1)
};

// Class Engine.ParticleModuleEventGenerato
struct UParticleModuleEventGeneratot : UParticleModuleEventBase {
	Unknown Events; //  0x30 Size(10)
};

// Class Engine.ParticleModuleEventReceiverBase
struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	Unknown EventGeneratorType; //  0x30 Size(1)
	struct FName EventName; //  0x34 Size(8)
};

// Class Engine.ParticleModuleEventReceiverKillParticles
struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning; //  0x40 Size(1)
};

// Class Engine.ParticleModuleEventReceiverSpawn
struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	Unknown SpawnCount; //  0x40 Size(30)
	char bUseParticleTime; //  0x70 Size(1)
	char bUsePSysLocation; //  0x70 Size(1)
	char bInheritVelocity; //  0x70 Size(1)
	Unknown InheritVelocityScale; //  0x78 Size(48)
	Unknown PhysicalMaterials; //  0xc0 Size(10)
	char bBanPhysicalMaterials; //  0xd0 Size(1)
};

// Class Engine.ParticleModuleKillBox
struct UParticleModuleKillBox : UParticleModuleKillBase {
	Unknown LowerLeftCorner; //  0x30 Size(48)
	Unknown UpperRightCorner; //  0x78 Size(48)
	char bAbsolute; //  0xc0 Size(1)
	char bKillInside; //  0xc0 Size(1)
	char bAxisAlignedAndFixedSize; //  0xc0 Size(1)
};

// Class Engine.ParticleModuleKillHeight
struct UParticleModuleKillHeight : UParticleModuleKillBase {
	Unknown Height; //  0x30 Size(30)
	char bAbsolute; //  0x60 Size(1)
	char bFloor; //  0x60 Size(1)
	char bApplyPSysScale; //  0x60 Size(1)
};

// Class Engine.ParticleModuleLifetime
struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	Unknown LifeTime; //  0x30 Size(30)
};

// Class Engine.ParticleModuleLifetime_Seeded
struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	Unknown RandomSeedInfo; //  0x60 Size(20)
};

// Class Engine.ParticleModuleLight
struct UParticleModuleLight : UParticleModuleLightBase {
	char bUseInverseSquaredFalloff; //  0x30 Size(1)
	char bAffectsTranslucency; //  0x31 Size(1)
	char bPreviewLightRadius; //  0x32 Size(1)
	float SpawnFraction; //  0x34 Size(4)
	Unknown ColorScaleOverLife; //  0x38 Size(48)
	Unknown BrightnessOverLife; //  0x80 Size(30)
	Unknown RadiusScale; //  0xb0 Size(30)
	Unknown LightExponent; //  0xe0 Size(30)
	Unknown LightingChannels; //  0x110 Size(1)
	float VolumetricScatteringIntensity; //  0x114 Size(4)
	char bHighQualityLights; //  0x118 Size(1)
	char bShadowCastingLights; //  0x119 Size(1)
};

// Class Engine.ParticleModuleLight_Seeded
struct UParticleModuleLight_Seeded : UParticleModuleLight {
	Unknown RandomSeedInfo; //  0x120 Size(20)
};

// Class Engine.ParticleModuleLocation
struct UParticleModuleLocation : UParticleModuleLocationBase {
	Unknown StartLocation; //  0x30 Size(48)
	float DistributeOverNPoints; //  0x78 Size(4)
	float DistributeThreshold; //  0x7c Size(4)
};

// Class Engine.ParticleModuleLocation_Seeded
struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	Unknown RandomSeedInfo; //  0x80 Size(20)
};

// Class Engine.ParticleModuleLocationBoneSocket
struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	Unknown SourceType; //  0x30 Size(1)
	Unknown UniversalOffset; //  0x34 Size(c)
	Unknown SourceLocations; //  0x40 Size(10)
	Unknown SelectionMethod; //  0x50 Size(1)
	char bUpdatePositionEachFrame; //  0x54 Size(1)
	char bOrientMeshEmitters; //  0x54 Size(1)
	char bInheritBoneVelocity; //  0x54 Size(1)
	float InheritVelocityScale; //  0x58 Size(4)
	struct FName SkelMeshActorParamName; //  0x5c Size(8)
	int32_t NumPreSelectedIndices; //  0x64 Size(4)
};

// Class Engine.ParticleModuleLocationDirect
struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	Unknown Location; //  0x30 Size(48)
	Unknown LocationOffset; //  0x78 Size(48)
	Unknown ScaleFactor; //  0xc0 Size(48)
	Unknown Direction; //  0x108 Size(48)
};

// Class Engine.ParticleModuleLocationEmitter
struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	struct FName EmitterName; //  0x30 Size(8)
	Unknown SelectionMethod; //  0x38 Size(1)
	char InheritSourceVelocity; //  0x3c Size(1)
	float InheritSourceVelocityScale; //  0x40 Size(4)
	char bInheritSourceRotation; //  0x44 Size(1)
	float InheritSourceRotationScale; //  0x48 Size(4)
};

// Class Engine.ParticleModuleLocationEmitterDirect
struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	struct FName EmitterName; //  0x30 Size(8)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X; //  0x30 Size(1)
	char Positive_Y; //  0x30 Size(1)
	char Positive_Z; //  0x30 Size(1)
	char Negative_X; //  0x30 Size(1)
	char Negative_Y; //  0x30 Size(1)
	char Negative_Z; //  0x30 Size(1)
	char SurfaceOnly; //  0x30 Size(1)
	char Velocity; //  0x30 Size(1)
	Unknown VelocityScale; //  0x38 Size(30)
	Unknown StartLocation; //  0x68 Size(48)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity; //  0xb0 Size(1)
	Unknown StartRadius; //  0xb8 Size(30)
	Unknown StartHeight; //  0xe8 Size(30)
	Unknown HeightAxis; //  0x118 Size(1)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	Unknown RandomSeedInfo; //  0x120 Size(20)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	Unknown StartRadius; //  0xb0 Size(30)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	Unknown RandomSeedInfo; //  0xe0 Size(20)
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	Unknown StartOffset; //  0x30 Size(48)
	Unknown Height; //  0x78 Size(30)
	Unknown Angle; //  0xa8 Size(30)
	Unknown Thickness; //  0xd8 Size(30)
};

// Class Engine.ParticleModuleLocationSkelVertSurface
struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	Unknown SourceType; //  0x30 Size(1)
	Unknown UniversalOffset; //  0x34 Size(c)
	char bUpdatePositionEachFrame; //  0x40 Size(1)
	char bOrientMeshEmitters; //  0x40 Size(1)
	char bInheritBoneVelocity; //  0x40 Size(1)
	float InheritVelocityScale; //  0x44 Size(4)
	struct FName SkelMeshActorParamName; //  0x48 Size(8)
	Unknown ValidAssociatedBones; //  0x50 Size(10)
	char bEnforceNormalCheck; //  0x60 Size(1)
	Unknown NormalToCompare; //  0x64 Size(c)
	float NormalCheckToleranceDegrees; //  0x70 Size(4)
	float NormalCheckTolerance; //  0x74 Size(4)
	Unknown ValidMaterialIndices; //  0x78 Size(10)
	char bInheritVertexColor; //  0x88 Size(1)
	char bInheritUV; //  0x88 Size(1)
	uint32_t InheritUVChannel; //  0x8c Size(4)
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	Unknown RandomSeedInfo; //  0x80 Size(20)
};

// Class Engine.ParticleModuleMeshMaterial
struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	Unknown MeshMaterials; //  0x30 Size(10)
};

// Class Engine.ParticleModuleMeshRotation
struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	Unknown StartRotation; //  0x30 Size(48)
	char bInheritParent; //  0x78 Size(1)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	Unknown RandomSeedInfo; //  0x80 Size(20)
};

// Class Engine.ParticleModuleMeshRotationRate
struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	Unknown StartRotationRate; //  0x30 Size(48)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	Unknown RandomSeedInfo; //  0x78 Size(20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	Unknown LifeMultiplier; //  0x30 Size(48)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	Unknown RotRate; //  0x30 Size(48)
	char bScaleRotRate; //  0x78 Size(1)
};

// Class Engine.ParticleModuleOrbitBase
struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime; //  0x30 Size(1)
};

// Class Engine.ParticleModuleOrbit
struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	Unknown ChainMode; //  0x38 Size(1)
	Unknown OffsetAmount; //  0x40 Size(48)
	Unknown OffsetOptions; //  0x88 Size(4)
	Unknown RotationAmount; //  0x90 Size(48)
	Unknown RotationOptions; //  0xd8 Size(4)
	Unknown RotationRateAmount; //  0xe0 Size(48)
	Unknown RotationRateOptions; //  0x128 Size(4)
};

// Class Engine.ParticleModuleOrientationAxisLock
struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	Unknown LockAxisFlags; //  0x30 Size(1)
};

// Class Engine.ParticleModuleParameterDynamic
struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	Unknown DynamicParams; //  0x30 Size(10)
	int32_t UpdateFlags; //  0x40 Size(4)
	char bUsesVelocity; //  0x44 Size(1)
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	Unknown RandomSeedInfo; //  0x48 Size(20)
};

// Class Engine.ParticleModulePivotOffset
struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	Unknown PivotOffset; //  0x30 Size(8)
};

// Class Engine.ParticleModuleRequired
struct UParticleModuleRequired : UParticleModule {
	Unknown Material; //  0x30 Size(8)
	float MinFacingCameraBlendDistance; //  0x38 Size(4)
	float MaxFacingCameraBlendDistance; //  0x3c Size(4)
	Unknown EmitterOrigin; //  0x40 Size(c)
	Unknown EmitterRotation; //  0x4c Size(c)
	Unknown ScreenAlignment; //  0x58 Size(1)
	char bUseLocalSpace; //  0x59 Size(1)
	char bKillOnDeactivate; //  0x59 Size(1)
	char bKillOnCompleted; //  0x59 Size(1)
	Unknown SortMode; //  0x5a Size(1)
	char bUseLegacyEmitterTime; //  0x5b Size(1)
	char bRemoveHMDRoll; //  0x5b Size(1)
	char bEmitterDurationUseRange; //  0x5b Size(1)
	float EmitterDuration; //  0x5c Size(4)
	Unknown SpawnRate; //  0x60 Size(30)
	Unknown BurstList; //  0x90 Size(10)
	float EmitterDelay; //  0xa0 Size(4)
	float EmitterDelayLow; //  0xa4 Size(4)
	char bDelayFirstLoopOnly; //  0xa8 Size(1)
	Unknown InterpolationMethod; //  0xa9 Size(1)
	char bScaleUV; //  0xaa Size(1)
	char bEmitterDelayUseRange; //  0xaa Size(1)
	Unknown ParticleBurstMethod; //  0xab Size(1)
	char bOverrideSystemMacroUV; //  0xac Size(1)
	char bUseMaxDrawCount; //  0xac Size(1)
	Unknown OpacitySourceMode; //  0xad Size(1)
	Unknown EmitterNormalsMode; //  0xae Size(1)
	char bOrb; //  0xaf Size(1)
	int32_t SubImages_Horizontal; //  0xb0 Size(4)
	int32_t SubImages_Vertical; //  0xb4 Size(4)
	float RandomImageTime; //  0xb8 Size(4)
	int32_t RandomImageChanges; //  0xbc Size(4)
	Unknown MacroUVPosition; //  0xc0 Size(c)
	float MacroUVRadius; //  0xcc Size(4)
	Unknown UVFlippingMode; //  0xd0 Size(1)
	Unknown BoundingMode; //  0xd1 Size(1)
	char bDurationRecalcEachLoop; //  0xd2 Size(1)
	Unknown NormalsSphereCenter; //  0xd4 Size(c)
	float AlphaThreshold; //  0xe0 Size(4)
	int32_t EmitterLoops; //  0xe4 Size(4)
	Unknown CutoutTexture; //  0xe8 Size(8)
	int32_t MaxDrawCount; //  0xf0 Size(4)
	float EmitterDurationLow; //  0xf4 Size(4)
	Unknown NormalsCylinderDirection; //  0xf8 Size(c)
	Unknown NamedMaterialOverrides; //  0x108 Size(10)
};

// Class Engine.ParticleModuleRotation
struct UParticleModuleRotation : UParticleModuleRotationBase {
	Unknown StartRotation; //  0x30 Size(30)
};

// Class Engine.ParticleModuleRotation_Seeded
struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	Unknown RandomSeedInfo; //  0x60 Size(20)
};

// Class Engine.ParticleModuleRotationOverLifetime
struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	Unknown RotationOverLife; //  0x30 Size(30)
	char Scale; //  0x60 Size(1)
};

// Class Engine.ParticleModuleRotationRate
struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	Unknown StartRotationRate; //  0x30 Size(30)
};

// Class Engine.ParticleModuleRotationRate_Seeded
struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	Unknown RandomSeedInfo; //  0x60 Size(20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	Unknown LifeMultiplier; //  0x30 Size(30)
};

// Class Engine.ParticleModuleSize
struct UParticleModuleSize : UParticleModuleSizeBase {
	Unknown StartSize; //  0x30 Size(48)
};

// Class Engine.ParticleModuleSize_Seeded
struct UParticleModuleSize_Seeded : UParticleModuleSize {
	Unknown RandomSeedInfo; //  0x78 Size(20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	Unknown LifeMultiplier; //  0x30 Size(48)
	char MultiplyX; //  0x78 Size(1)
	char MultiplyY; //  0x78 Size(1)
	char MultiplyZ; //  0x78 Size(1)
};

// Class Engine.ParticleModuleSizeScale
struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	Unknown SizeScale; //  0x30 Size(48)
	char Enab; //  0x78 Size(1)
	char EnabSca; //  0x78 Size(1)
	char Enab; //  0x78 Size(1)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	Unknown SpeedScale; //  0x30 Size(8)
	Unknown MaxScale; //  0x38 Size(8)
};

// Class Engine.ParticleModuleSourceMovement
struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	Unknown SourceMovementScale; //  0x30 Size(48)
};

// Class Engine.ParticleModuleSpawnBase
struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate; //  0x30 Size(1)
	char bProcessBurstList; //  0x30 Size(1)
};

// Class Engine.ParticleModuleSpawn
struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	Unknown Rate; //  0x38 Size(30)
	Unknown RateScale; //  0x68 Size(30)
	Unknown ParticleBurstMethod; //  0x98 Size(1)
	Unknown BurstList; //  0xa0 Size(10)
	Unknown BurstScale; //  0xb0 Size(30)
	char bApplyGlobalSpawnRateScale; //  0xe0 Size(1)
};

// Class Engine.ParticleModuleSpawnPerUnit
struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; //  0x38 Size(4)
	float MovementTolerance; //  0x3c Size(4)
	Unknown SpawnPerUnit; //  0x40 Size(30)
	float MaxFrameDistance; //  0x70 Size(4)
	char bIgnoreSpawnRateWhenMoving; //  0x74 Size(1)
	char bIgnoreMovementAlongX; //  0x74 Size(1)
	char bIgnoreMovementAlongY; //  0x74 Size(1)
	char bIgnoreMovementAlongZ; //  0x74 Size(1)
};

// Class Engine.ParticleModuleSubUV
struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	Unknown Animation; //  0x30 Size(8)
	Unknown SubImageIndex; //  0x38 Size(30)
	char bUseRealTime; //  0x68 Size(1)
};

// Class Engine.ParticleModuleSubUVMovie
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime; //  0x70 Size(1)
	Unknown FrameRate; //  0x78 Size(30)
	int32_t StartingFrame; //  0xa8 Size(4)
};

// Class Engine.ParticleModuleTrailSource
struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	Unknown SourceMethod; //  0x30 Size(1)
	struct FName SourceName; //  0x34 Size(8)
	Unknown SourceStrength; //  0x40 Size(30)
	char bLockSourceStength; //  0x70 Size(1)
	int32_t SourceOffsetCount; //  0x74 Size(4)
	Unknown SourceOffsetDefaults; //  0x78 Size(10)
	Unknown SelectionMethod; //  0x88 Size(1)
	char bInheritRotation; //  0x8c Size(1)
};

// Class Engine.ParticleModuleTypeDataAnimTrail
struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate; //  0x30 Size(1)
	char bEnablePreviousTangentRecalculation; //  0x30 Size(1)
	char bTangentRecalculationEveryFrame; //  0x30 Size(1)
	float TilingDistance; //  0x34 Size(4)
	float DistanceTessellationStepSize; //  0x38 Size(4)
	float TangentTessellationStepSize; //  0x3c Size(4)
	float WidthTessellationStepSize; //  0x40 Size(4)
};

// Class Engine.ParticleModuleTypeDataBeam2
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	Unknown BeamMethod; //  0x30 Size(1)
	int32_t TextureTile; //  0x34 Size(4)
	float TextureTileDistance; //  0x38 Size(4)
	int32_t Sheets; //  0x3c Size(4)
	int32_t MaxBeamCount; //  0x40 Size(4)
	float Speed; //  0x44 Size(4)
	int32_t InterpolationPoints; //  0x48 Size(4)
	char bAlwaysOn; //  0x4c Size(1)
	int32_t UpVectorStepSize; //  0x50 Size(4)
	struct FName BranchParentName; //  0x54 Size(8)
	Unknown Distance; //  0x60 Size(30)
	Unknown TaperMethod; //  0x90 Size(1)
	Unknown TaperFactor; //  0x98 Size(30)
	Unknown TaperScale; //  0xc8 Size(30)
	char RenderGeometry; //  0xf8 Size(1)
	char RenderDirectLine; //  0xf8 Size(1)
	char RenderLines; //  0xf8 Size(1)
	char RenderTessellation; //  0xf8 Size(1)
};

// Class Engine.ParticleModuleTypeDataGpu
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	Unknown EmitterInfo; //  0x30 Size(280)
	Unknown ResourceData; //  0x2b0 Size(160)
	float CameraMotionBlurAmount; //  0x410 Size(4)
	char bClearExistingParticlesOnInit; //  0x414 Size(1)
};

// Class Engine.ParticleModuleTypeDataMesh
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	Unknown Mesh; //  0x30 Size(8)
	float LODSizeScale; //  0x40 Size(4)
	char bUseStaticMeshLODs; //  0x44 Size(1)
	char CastShadows; //  0x44 Size(1)
	char DoCollisions; //  0x44 Size(1)
	Unknown MeshAlignment; //  0x45 Size(1)
	char bOverrideMaterial; //  0x46 Size(1)
	char bOverrideDefaultMotionBlurSettings; //  0x46 Size(1)
	char bEnableMotionBlur; //  0x46 Size(1)
	Unknown RollPitchYawRange; //  0x48 Size(48)
	Unknown AxisLockOption; //  0x90 Size(1)
	char bCameraFacing; //  0x91 Size(1)
	Unknown CameraFacingUpAxisOption; //  0x92 Size(1)
	Unknown CameraFacingOption; //  0x93 Size(1)
	char bApplyParticleRotationAsSpin; //  0x94 Size(1)
	char bFaceCameraDirectionRatherThanPosition; //  0x94 Size(1)
	char bCollisionsConsiderPartilceSize; //  0x94 Size(1)
};

// Class Engine.ParticleModuleTypeDataRibbo
struct UParticleModuleTypeDataRibbot : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; //  0x30 Size(4)
	int32_t SheetsPerTrail; //  0x34 Size(4)
	int32_t MaxTrailCount; //  0x38 Size(4)
	int32_t MaxParticleInTrailCount; //  0x3c Size(4)
	char bDeadTrailsOnDeactivate; //  0x40 Size(1)
	char bDeadTrailsOnSourceLoss; //  0x40 Size(1)
	char bClipSourceSegement; //  0x40 Size(1)
	char bEnablePreviousTangentRecalculation; //  0x40 Size(1)
	char bTangentRecalculationEveryFrame; //  0x40 Size(1)
	char bSpawnInitialParticle; //  0x40 Size(1)
	Unknown RenderAxis; //  0x44 Size(1)
	float TangentSpawningScalar; //  0x48 Size(4)
	char bRenderGeometry; //  0x4c Size(1)
	char bRenderSpawnPoints; //  0x4c Size(1)
	char bRenderTangents; //  0x4c Size(1)
	char bRenderTessellation; //  0x4c Size(1)
	float TilingDistance; //  0x50 Size(4)
	float DistanceTessellationStepSize; //  0x54 Size(4)
	char bEnableTangentDiffInterpScale; //  0x58 Size(1)
	float TangentTessellationScalar; //  0x5c Size(4)
};

// Class Engine.ParticleModuleVectorFieldGlobal
struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness; //  0x30 Size(1)
	float Glob; //  0x34 Size(4)
	float GlobrrideGlobalVectorFn; //  0x38 Size(4)
};

// Class Engine.ParticleModuleVectorFieldLo
struct UParticleModuleVectorFieldLot : UParticleModuleVectorFieldBase {
	Unknown VectorField; //  0x30 Size(8)
	Unknown RelativeTranslation; //  0x38 Size(c)
	Unknown RelativeRotation; //  0x44 Size(c)
	Unknown RelativeScale3D; //  0x50 Size(c)
	float Intensity; //  0x5c Size(4)
	float Tightness; //  0x60 Size(4)
	char bIgnoreComponentTransform; //  0x64 Size(1)
	char bTileX; //  0x64 Size(1)
	char bTileY; //  0x64 Size(1)
	char bTileZ; //  0x64 Size(1)
	char bUseFixDT; //  0x64 Size(1)
};

// Class Engine.ParticleModuleVectorFieldRo
struct UParticleModuleVectorFieldRot : UParticleModuleVectorFieldBase {
	Unknown MinInitialRotation; //  0x30 Size(c)
	Unknown MaxInitialRotation; //  0x3c Size(c)
};

// Class Engine.ParticleModuleVectorFieldRo
struct UParticleModuleVectorFieldRot : UParticleModuleVectorFieldBase {
	Unknown RotationRate; //  0x30 Size(c)
};

// Class Engine.ParticleModuleVectorFieldScale
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	Unknown VectorFieldScale; //  0x30 Size(8)
	Unknown VectorFieldScaleRaw; //  0x38 Size(30)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	Unknown VectorFieldScaleOverLife; //  0x30 Size(8)
	Unknown VectorFieldScaleOverLifeRaw; //  0x38 Size(30)
};

// Class Engine.ParticleModuleVelocityBase
struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace; //  0x30 Size(1)
	char bApplyOwnerScale; //  0x30 Size(1)
};

// Class Engine.ParticleModuleVelocity
struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	Unknown StartVelocity; //  0x38 Size(48)
	Unknown StartVelocityRadial; //  0x80 Size(30)
};

// Class Engine.ParticleModuleVelocity_Seeded
struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	Unknown RandomSeedInfo; //  0xb0 Size(20)
};

// Class Engine.ParticleModuleVelocityCone
struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	Unknown Angle; //  0x38 Size(30)
	Unknown Velocity; //  0x68 Size(30)
	Unknown Direction; //  0x98 Size(c)
};

// Class Engine.ParticleModuleVelocityInheritParent
struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	Unknown Scale; //  0x38 Size(48)
};

// Class Engine.ParticleModuleVelocityOverLifetime
struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	Unknown VelOverLife; //  0x38 Size(48)
	char Absolute; //  0x80 Size(1)
};

// Class Engine.ParticleSystem
struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; //  0x30 Size(4)
	float UpdateTime_Delta; //  0x34 Size(4)
	float WarmupTime; //  0x38 Size(4)
	float WarmupTickRate; //  0x3c Size(4)
	Unknown Emitters; //  0x40 Size(10)
	Unknown PreviewComponent; //  0x50 Size(8)
	Unknown CurveEdSetup; //  0x58 Size(8)
	float LODDistanceCheckTime; //  0x60 Size(4)
	float MacroUVRadius; //  0x64 Size(4)
	Unknown LODDistances; //  0x68 Size(10)
	Unknown LODSettings; //  0x78 Size(10)
	Unknown FixedRelativeBoundingBox; //  0x88 Size(1c)
	float SecondsBeforeInactive; //  0xa4 Size(4)
	float Delay; //  0xa8 Size(4)
	float DelayLow; //  0xac Size(4)
	char bOrientZAxisTowardCamera; //  0xb0 Size(1)
	char bUseFixedRelativeBoundingBo; //  0xb0 Size(1)
	char bShouldResetPeakCounts; //  0xb0 Size(1)
	char bHasPhysics; //  0xb0 Size(1)
	char bUseRealtimeThumbnail; //  0xb0 Size(1)
	char ThumbnailImageOutOfDate; //  0xb0 Size(1)
	char bUseDelayRange; //  0xb1 Size(1)
	char bAllowManagedTicking; //  0xb1 Size(1)
	char bAutoDeactivate; //  0xb1 Size(1)
	char bRegenerateLODDuplicate; //  0xb1 Size(1)
	Unknown SystemUpdateMode; //  0xb2 Size(1)
	Unknown LODMethod; //  0xb3 Size(1)
	Unknown InsignificantReaction; //  0xb4 Size(1)
	Unknown OcclusionBoundsMethod; //  0xb5 Size(1)
	Unknown MaxSignificanceLevel; //  0xb7 Size(1)
	uint32_t MinTimeBetweenTicks; //  0xb8 Size(4)
	float InsignificanceDelay; //  0xbc Size(4)
	Unknown MacroUVPosition; //  0xc0 Size(c)
	Unknown CustomOcclusionBounds; //  0xcc Size(1c)
	Unknown SoloTracking; //  0xe8 Size(10)
	Unknown NamedMaterialSlots; //  0xf8 Size(10)

	char ContainsEmitterType(Unknown TypeData); // Function Engine.ParticleSystem.ContainsEmitterType(Final|Native|Public|BlueprintCallable) // <Game+0x3da16e0>
};

// Class Engine.ParticleSystemComponent
struct UParticleSystemComponent : UFXSystemComponent {
	Unknown Template; //  0x4b8 Size(8)
	Unknown EmitterMaterials; //  0x4c0 Size(10)
	Unknown SkelMeshComponents; //  0x4d0 Size(10)
	char bResetOnDetach; //  0x4e1 Size(1)
	char bUpdateOnDedicatedServer; //  0x4e1 Size(1)
	char bAllowRecycling; //  0x4e1 Size(1)
	char bAutoManageAttachment; //  0x4e1 Size(1)
	char bAutoAttachWeldSimulatedBodies; //  0x4e1 Size(1)
	char bWarmingUp; //  0x4e2 Size(1)
	char bOverrideLODMethod; //  0x4e2 Size(1)
	char bSkipUpdateDynamicDataDuringTick; //  0x4e2 Size(1)
	Unknown LODMethod; //  0x4ed Size(1)
	Unknown RequiredSignificance; //  0x4ee Size(1)
	Unknown InstanceParameters; //  0x4f0 Size(10)
	struct FMulticastInlineDelegate OnParticleSpawn; //  0x500 Size(10)
	struct FMulticastInlineDelegate OnParticleBurst; //  0x510 Size(10)
	struct FMulticastInlineDelegate OnParticleDeath; //  0x520 Size(10)
	struct FMulticastInlineDelegate OnParticleCollide; //  0x530 Size(10)
	char bOldPositionValid; //  0x540 Size(1)
	Unknown OldPosition; //  0x544 Size(c)
	Unknown PartSysVelocity; //  0x550 Size(c)
	float WarmupTime; //  0x55c Size(4)
	float WarmupTickRate; //  0x560 Size(4)
	float SecondsBeforeInactive; //  0x578 Size(4)
	float MaxTimeBeforeForceUpdateTransform; //  0x580 Size(4)
	Unknown ReplayClips; //  0x5a0 Size(10)
	float CustomTimeDilation; //  0x5b8 Size(4)
	Unknown AutoAttachParent; //  0x610 Size(8)
	struct FName AutoAttachSocketName; //  0x618 Size(8)
	Unknown AutoAttachLocationRule; //  0x620 Size(1)
	Unknown AutoAttachRotationRule; //  0x621 Size(1)
	Unknown AutoAttachScaleRule; //  0x622 Size(1)
	struct FMulticastInlineDelegate OnSystemFinished; //  0x650 Size(10)

	void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, Unknown InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.SetTrailSourceData(Final|Native|Public|BlueprintCallable) // <Game+0x3da3190>
};

// Class Engine.ParticleSystemReplay
struct UParticleSystemReplay : Object {
	int32_t ClipIDNumber; //  0x28 Size(4)
};

// Class Engine.PawnNoiseEmitterComponent
struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode; //  0xb0 Size(1)
	Unknown LastRemoteNoisePosition; //  0xb4 Size(c)
	float NoiseLifetime; //  0xc0 Size(4)
	float LastRemoteNoiseVolume; //  0xc4 Size(4)
	float LastRemoteNoiseTime; //  0xc8 Size(4)
	float LastLocalNoiseVolume; //  0xcc Size(4)
	float LastLocalNoiseTime; //  0xd0 Size(4)

	void MakeNoise(Unknown NoiseMaker, float Loudness, Unknown& NoiseLocation); // Function Engine.PawnNoiseEmitterComponent.MakeNoise(BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x3da7610>
};

// Class Engine.PhysicalAnimationComponent
struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; //  0xb0 Size(4)
	Unknown SkeletalMeshComponent; //  0xb8 Size(8)

	void SetStrengthMultiplyer(float InStrengthMultiplyer); // Function Engine.PhysicalAnimationComponent.SetStrengthMultiplyer(Final|Native|Public|BlueprintCallable) // <Game+0x3da79f0>
};

// Class Engine.PhysicalMaterialMask
struct UPhysicalMaterialMask : Object {
	int32_t UVChannelIndex; //  0x28 Size(4)
	Unknown AddressX; //  0x2c Size(1)
	Unknown AddressY; //  0x2d Size(1)
};

// Class Engine.PhysicsAsset
struct UPhysicsAsset : Object {
	Unknown BoundsBodies; //  0x30 Size(10)
	Unknown SkeletalBodySetups; //  0x40 Size(10)
	Unknown ConstraintSetup; //  0x50 Size(10)
	Unknown SolverIterations; //  0x60 Size(18)
	char bNotForDedicatedServer; //  0x78 Size(1)
	Unknown ThumbnailInfo; //  0x120 Size(8)
	Unknown BodySetup; //  0x128 Size(10)
};

// Class Engine.SkeletalBodySetup
struct USkeletalBodySetup : UBodySetup {
	char bSkipScaleFromAnimation; //  0x2d0 Size(1)
	Unknown PhysicalAnimationData; //  0x2d8 Size(10)
};

// Class Engine.PhysicsCollisionHandler
struct UPhysicsCollisionHandler : Object {
	float ImpactThreshold; //  0x28 Size(4)
	float ImpactReFireDelay; //  0x2c Size(4)
	Unknown DefaultImpactSound; //  0x30 Size(8)
	float LastImpactSoundTime; //  0x38 Size(4)
};

// Class Engine.PhysicsConstraintActor
struct APhysicsConstraintActor : ARigidBodyBase {
	Unknown ConstraintComp; //  0x310 Size(8)
	Unknown ConstraintActor1; //  0x318 Size(8)
	Unknown ConstraintActor2; //  0x320 Size(8)
	char bDisableCollision; //  0x328 Size(1)
};

// Class Engine.PhysicsConstraintComponent
struct UPhysicsConstraintComponent : USceneComponent {
	Unknown ConstraintActor1; //  0x238 Size(8)
	Unknown ComponentName1; //  0x240 Size(8)
	Unknown ConstraintActor2; //  0x248 Size(8)
	Unknown ComponentName2; //  0x250 Size(8)
	Unknown ConstraintSetup; //  0x268 Size(8)
	struct FMulticastInlineDelegate OnConstraintBroken; //  0x270 Size(10)
	Unknown ConstraintInstance; //  0x280 Size(1b8)

	void SetOrientationDriveTwistAndSwing(char bEnableTwistDrive, char bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing(Final|Native|Public|BlueprintCallable) // <Game+0x3dab410>
};

// Class Engine.PhysicsConstraintTemplate
struct UPhysicsConstraintTemplate : Object {
	Unknown DefaultInstance; //  0x28 Size(1b8)
	Unknown ProfileHandles; //  0x1e0 Size(10)
	Unknown DefaultProfile; //  0x1f0 Size(104)
};

// Class Engine.PhysicsHandleComponent
struct UPhysicsHandleComponent : UActorComponent {
	Unknown Grab; //  0xb0 Size(8)
	char bSoftAngularConstraint; //  0xc0 Size(1)
	char bSoftLinearConstraint; //  0xc0 Size(1)
	char bInterpolateTarget; //  0xc0 Size(1)
	float LinearDamping; //  0xc4 Size(4)
	float LinearStiffness; //  0xc8 Size(4)
	float AngularDamping; //  0xcc Size(4)
	float AngularStiffness; //  0xd0 Size(4)
	float InterpolationSpeed; //  0x140 Size(4)

	void SetTargetRotation(Unknown NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3dab650>
};

// Class Engine.PhysicsSettings
struct UPhysicsSettings : UDeveloperSettings {
	float DefaultGravityZ; //  0x38 Size(4)
	float DefaultTerminalVelocity; //  0x3c Size(4)
	float DefaultFluidFriction; //  0x40 Size(4)
	int32_t SimulateScratchMemorySize; //  0x44 Size(4)
	int32_t RagdollAggregateThreshold; //  0x48 Size(4)
	float TriangleMeshTriangleMinAreaThreshold; //  0x4c Size(4)
	char bEnableShapeSharing; //  0x50 Size(1)
	char bEnablePCM; //  0x51 Size(1)
	char bEnableStabilization; //  0x52 Size(1)
	char bWarnMissingLocks; //  0x53 Size(1)
	char bEnable2DPhysics; //  0x54 Size(1)
	Unknown PhysicErrorCorrection; //  0x58 Size(34)
	Unknown LockedAxis; //  0x8c Size(1)
	Unknown DefaultDegreesOfFreedom; //  0x8d Size(1)
	float BounceThresholdVelocity; //  0x90 Size(4)
	Unknown FrictionCombineMode; //  0x94 Size(1)
	Unknown RestitutionCombineMode; //  0x95 Size(1)
	float MaxAngularVelocity; //  0x98 Size(4)
	float MaxDepenetrationVelocity; //  0x9c Size(4)
	float ContactOffsetMultiplier; //  0xa0 Size(4)
	float MinContactOffset; //  0xa4 Size(4)
	float MaxContactOffset; //  0xa8 Size(4)
	char bSimulateSkeletalMeshOnDedicatedServer; //  0xac Size(1)
	Unknown DefaultShapeComplexity; //  0xad Size(1)
	char bDefaultHasComplexCollision; //  0xae Size(1)
	char bSuppressFaceRemapTable; //  0xaf Size(1)
	char bSupportUVFromHitResults; //  0xb0 Size(1)
	char bDisableActiveActors; //  0xb1 Size(1)
	char bDisableKinematicStaticPairs; //  0xb2 Size(1)
	char bDisableKinematicKinematicPairs; //  0xb3 Size(1)
	char bDisableCCD; //  0xb4 Size(1)
	char bEnableEnhancedDeterminism; //  0xb5 Size(1)
	float AnimPhysicsMinDeltaTime; //  0xb8 Size(4)
	char bSimulateAnimPhysicsAfterReset; //  0xbc Size(1)
	float MaxPhysicsDeltaTime; //  0xc0 Size(4)
	char bSub; //  0xc4 Size(1)
	char bSubhysicsDe; //  0xc5 Size(1)
	float MaxSubstepDeltaTime; //  0xc8 Size(4)
	int32_t MaxSubsteps; //  0xcc Size(4)
	float SyncSceneSmoothingFactor; //  0xd0 Size(4)
	float InitialAverageFrameRate; //  0xd4 Size(4)
	int32_t PhysXTreeRebuildRate; //  0xd8 Size(4)
	Unknown PhysicalSurfaces; //  0xe0 Size(10)
	Unknown DefaultBroadphaseSettings; //  0xf0 Size(40)
	Unknown ChaosSettings; //  0x130 Size(3)
};

// Class Engine.PhysicsSpringComponent
struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; //  0x238 Size(4)
	float SpringDamping; //  0x23c Size(4)
	float SpringLengthAtRest; //  0x240 Size(4)
	float SpringRadius; //  0x244 Size(4)
	Unknown SpringChannel; //  0x248 Size(1)
	char bIgnoreSelf; //  0x249 Size(1)
	float SpringCompression; //  0x24c Size(4)

	Unknown GetSpringRestingPoint(); // Function Engine.PhysicsSpringComponent.GetSpringRestingPoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x3daf480>
};

// Class Engine.PhysicsThruster
struct APhysicsThruster : ARigidBodyBase {
	Unknown ThrusterComponent; //  0x310 Size(8)
};

// Class Engine.PhysicsThrusterComponent
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; //  0x238 Size(4)
};

// Class Engine.PlanarReflection
struct APlanarReflection : ASceneCapture {
	Unknown PlanarReflectionComponent; //  0x320 Size(8)
	char bShowPreviewPlane; //  0x328 Size(1)

	void OnInterpToggle(char bEnable); // Function Engine.PlanarReflection.OnInterpToggle(Final|Native|Public|BlueprintCallable) // <Game+0x3daf520>
};

// Class Engine.PlanarReflectionComponent
struct UPlanarReflectionComponent : USceneCaptureComponent {
	Unknown PreviewBox; //  0x2d0 Size(8)
	float NormalDistortionStrength; //  0x2d8 Size(4)
	float PrefilterRoughness; //  0x2dc Size(4)
	float PrefilterRoughnessDistance; //  0x2e0 Size(4)
	int32_t ScreenPercentage; //  0x2e4 Size(4)
	float ExtraFOV; //  0x2e8 Size(4)
	float DistanceFromPlaneFadeStart; //  0x2ec Size(4)
	float DistanceFromPlaneFadeEnd; //  0x2f0 Size(4)
	float DistanceFromPlaneFadeoutStart; //  0x2f4 Size(4)
	float DistanceFromPlaneFadeoutEnd; //  0x2f8 Size(4)
	float AngleFromPlaneFadeStart; //  0x2fc Size(4)
	float AngleFromPlaneFadeEnd; //  0x300 Size(4)
	char bShowPreviewPlane; //  0x304 Size(1)
	char bRenderSceneTwoSided; //  0x305 Size(1)
};

// Class Engine.PlaneReflectionCaptureCompo
struct UPlaneReflectionCaptureCompot : UReflectionCaptureComponent {
	float InfluenceRadiusScale; //  0x2c0 Size(4)
	Unknown PreviewInfluenceRadius; //  0x2c8 Size(8)
	Unknown PreviewCaptureBox; //  0x2d0 Size(8)
};

// Class Engine.PlatformEventsComponent
struct UPlatformEventsComponent : UActorComponent {
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; //  0xb0 Size(10)
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; //  0xc0 Size(10)

	char SupportsConvertibleLaptops(); // Function Engine.PlatformEventsComponent.SupportsConvertibleLaptops(Final|Native|Public|BlueprintCallable) // <Game+0x3db0530>
};

// Class Engine.PlatformInterfaceWebResponse
struct UPlatformInterfaceWebResponse : Object {
	struct FString OriginalURL; //  0x28 Size(10)
	int32_t responsecode; //  0x38 Size(4)
	int32_t Tag; //  0x3c Size(4)
	struct FString StringResponse; //  0x40 Size(10)
	Unknown BinaryResponse; //  0x50 Size(10)

	int32_t GetNumHeaders(); // Function Engine.PlatformInterfaceWebResponse.GetNumHeaders(Native|Public) // <Game+0x151a7d0>
};

// Class Engine.PlayerInput
struct UPlayerInput : Object {
	Unknown DebugExecBindings; //  0x120 Size(10)
	Unknown InvertedAxis; //  0x160 Size(10)

	void SetMouseSensitivity(float Sensitivity); // Function Engine.PlayerInput.SetMouseSensitivity(Final|Exec|Native|Public) // <Game+0x3dbfd40>
};

// Class Engine.PointLight
struct APointLight : ALight {
	Unknown PointLightComponent; //  0x320 Size(8)

	void SetRadius(float NewRadius); // Function Engine.PointLight.SetRadius(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game+0x3dbfdc0>
};

// Class Engine.PointLightComponent
struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff; //  0x398 Size(1)
	float LightFalloffExponent; //  0x39c Size(4)
	float SourceRadius; //  0x3a0 Size(4)
	float SoftSourceRadius; //  0x3a4 Size(4)
	float SourceLength; //  0x3a8 Size(4)

	void SetSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSourceRadius(Final|Native|Public|BlueprintCallable) // <Game+0x3dbff40>
};

// Class Engine.PoseAsset
struct UPoseAsset : UAnimationAsset {
	Unknown PoseContainer; //  0x80 Size(90)
	char bAdditivePose; //  0x110 Size(1)
	int32_t BasePoseIndex; //  0x114 Size(4)
	struct FName RetargetSource; //  0x118 Size(8)
};

// Class Engine.PoseWatch
struct UPoseWatch : Object {
	Unknown Node; //  0x28 Size(8)
	Unknown PoseWatchColour; //  0x30 Size(4)
};

// Class Engine.PostProcessComponent
struct UPostProcessComponent : USceneComponent {
	Unknown Settings; //  0x240 Size(5c0)
	float Priority; //  0x800 Size(4)
	float BlendRadius; //  0x804 Size(4)
	float BlendWeight; //  0x808 Size(4)
	char bEnabled; //  0x80c Size(1)
	char bUnb; //  0x80c Size(1)

	void AddOrUpdateBlendable(Unknown InBlendableObject, float InWeight); // Function Engine.PostProcessComponent.AddOrUpdateBlendable(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game+0x3dbef10>
};

// Class Engine.PostProcessVolume
struct APostProcessVolume : AVolume {
	Unknown Settings; //  0x350 Size(5c0)
	float Priority; //  0x910 Size(4)
	float BlendRadius; //  0x914 Size(4)
	float BlendWeight; //  0x918 Size(4)
	char bEnabled; //  0x91c Size(1)
	char bUnb; //  0x91c Size(1)

	void AddOrUpdateBlendable(Unknown InBlendableObject, float InWeight); // Function Engine.PostProcessVolume.AddOrUpdateBlendable(Final|Native|Public|BlueprintCallable) // <Game+0x3dbedc0>
};

// Class Engine.PrecomputedVisibilityOverrideVolume
struct APrecomputedVisibilityOverrideVolume : AVolume {
	Unknown OverrideVisibleActors; //  0x348 Size(10)
	Unknown OverrideInvisibleActors; //  0x358 Size(10)
	Unknown OverrideInvisibleLevels; //  0x368 Size(10)
};

// Class Engine.PreviewMeshCollection
struct UPreviewMeshCollection : UDataAsset {
	Unknown Skeleton; //  0x38 Size(8)
	Unknown SkeletalMeshes; //  0x40 Size(10)
};

// Class Engine.PrimaryAssetLabel
struct UPrimaryAssetLabel : UPrimaryDataAsset {
	Unknown Rules; //  0x30 Size(c)
	char bLab; //  0x3c Size(1)
	char bIsRuntimeLabel; //  0x3c Size(1)
	Unknown ExplicitAssets; //  0x40 Size(10)
	Unknown ExplicitBlueprints; //  0x50 Size(10)
	Unknown AssetCollection; //  0x60 Size(8)
};

// Class Engine.ProxyLODMeshSimplificationSettings
struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	struct FName ProxyLODMeshReductionModuleName; //  0x38 Size(8)
};

// Class Engine.RadialForceActor
struct ARadialForceActor : ARigidBodyBase {
	Unknown ForceComponent; //  0x310 Size(8)

	void ToggleForce(); // Function Engine.RadialForceActor.ToggleForce(Native|Public|BlueprintCallable) // <Game+0x1f14780>
};

// Class Engine.RadialForceComponent
struct URadialForceComponent : USceneComponent {
	float Radius; //  0x238 Size(4)
	Unknown Falloff; //  0x23c Size(1)
	float ImpulseStrength; //  0x240 Size(4)
	char bImpulseVelChange; //  0x244 Size(1)
	char bIgnoreOwningActor; //  0x244 Size(1)
	float ForceStrength; //  0x248 Size(4)
	float DestructibleDamage; //  0x24c Size(4)
	Unknown ObjectTypesToAffect; //  0x250 Size(10)

	void RemoveObjectTypeToAffect(Unknown ObjectType); // Function Engine.RadialForceComponent.RemoveObjectTypeToAffect(Native|Public|BlueprintCallable) // <Game+0x3dcb260>
};

// Class Engine.RectLight
struct ARectLight : ALight {
	Unknown RectLightComponent; //  0x320 Size(8)
};

// Class Engine.RectLightComponent
struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; //  0x398 Size(4)
	float SourceHeight; //  0x39c Size(4)
	float BarnDoorAngle; //  0x3a0 Size(4)
	float BarnDoorLength; //  0x3a4 Size(4)
	Unknown SourceTexture; //  0x3a8 Size(8)

	void SetSourceWidth(float bNewValue); // Function Engine.RectLightComponent.SetSourceWidth(Final|Native|Public|BlueprintCallable) // <Game+0x3dcb510>
};

// Class Engine.RendererSettings
struct URendererSettings : UDeveloperSettings {
	char bMob; //  0x38 Size(1)
	int32_t MaxMobileCascades; //  0x3c Size(4)
	Unknown MobileMSAASampleCount; //  0x40 Size(1)
	char bMob; //  0x44 Size(1)
	char bMobleMSAASampleCount; //  0x44 Size(1)
	char bMob; //  0x44 Size(1)
	char bMobleMSAASampleCount; //  0x44 Size(1)
	char bDiscardUnusedQualityLevels; //  0x44 Size(1)
	char bOcclusionCulling; //  0x44 Size(1)
	float MinScreenRadiusForLights; //  0x48 Size(4)
	float MinScreenRadiusForEarlyZPass; //  0x4c Size(4)
	float MinScreenRadiusForCSMdepth; //  0x50 Size(4)
	char bPrecomputedVisibilityWarning; //  0x54 Size(1)
	char bUseCullDistanceVolumes; //  0x54 Size(1)
	char bTextureStreaming; //  0x54 Size(1)
	char bUseDXT5NormalMaps; //  0x54 Size(1)
	char bVirtualTextures; //  0x54 Size(1)
	char bVirtualTexturedLightmaps; //  0x54 Size(1)
	uint32_t VirtualTextureTileSize; //  0x58 Size(4)
	uint32_t VirtualTextureTileBorderSize; //  0x5c Size(4)
	uint32_t VirtualTextureFeedbackFacto; //  0x60 Size(4)
	char bVirtualTextureEnableCompressZlib; //  0x64 Size(1)
	char bVirtualTextureEnableCompressCrunch; //  0x64 Size(1)
	char bClearCoatEnableSecondNormal; //  0x64 Size(1)
	char bPreIntegratedSkinBRDF; //  0x64 Size(1)
	char bAnisotropicBRDF; //  0x64 Size(1)
	int32_t ReflectionCaptureResolution; //  0x68 Size(4)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness; //  0x6c Size(1)
	char bForwardShading; //  0x6c Size(1)
	char bVertexFoggingForOpaque; //  0x6c Size(1)
	char bAllowStaticLighting; //  0x6c Size(1)
	char bUseNormalMapsForStaticLighting; //  0x6c Size(1)
	char bGenerateMeshDistanceFields; //  0x6c Size(1)
	char bEightBitMeshDistanceFields; //  0x6c Size(1)
	char bGenerateLandscapeGIData; //  0x6c Size(1)
	char bCompressMeshDistanceFields; //  0x6d Size(1)
	float TessellationAdaptiv; //  0x70 Size(4)
	char bSeparateTranslucency; //  0x74 Size(1)
	Unknown TranslucentSortPolicy; //  0x78 Size(1)
	Unknown TranslucentSortAxis; //  0x7c Size(c)
	Unknown CustomDepthStencil; //  0x88 Size(1)
	char bCustomDepthTaaJitter; //  0x8c Size(1)
	Unknown bEnableAlphaChannelInPostProcessing; //  0x90 Size(1)
	char bDefaultFeatureBloom; //  0x94 Size(1)
	char bDefaultFeatureAmbientOcclusion; //  0x94 Size(1)
	char bDefaultFeatureAmbientOcclusionStaticFraction; //  0x94 Size(1)
	char bDefaultFeatureAutoExposure; //  0x94 Size(1)
	Unknown DefaultFeatureAutoExposure; //  0x98 Size(1)
	float DefaultFeatureAutoExposureBias; //  0x9c Size(4)
	char bExtendDefaultLuminanceRangeInAutoExposureSettings; //  0xa0 Size(1)
	char bUsePreExposure; //  0xa0 Size(1)
	char bEnablePreExposureOnlyInTheEditor; //  0xa0 Size(1)
	char bDefaultFeatureMotionBlur; //  0xa0 Size(1)
	char bDefaultFeatureLensFlare; //  0xa0 Size(1)
	char bTemporalUpsampling; //  0xa0 Size(1)
	char bSSGI; //  0xa0 Size(1)
	Unknown DefaultFeatureAntiAliasing; //  0xa4 Size(1)
	Unknown DefaultLightUnits; //  0xa5 Size(1)
	Unknown DefaultBackBufferPixelFormat; //  0xa6 Size(1)
	char bRenderUnbuiltPreviewShadowsInGame; //  0xa8 Size(1)
	char bStencilForLODDither; //  0xa8 Size(1)
	Unknown EarlyZPass; //  0xac Size(1)
	char bEarlyZPassOnlyMaterialMasking; //  0xb0 Size(1)
	char bDBuffer; //  0xb0 Size(1)
	Unknown ClearSceneMethod; //  0xb4 Size(1)
	char bBasePassOutputsVelocity; //  0xb8 Size(1)
	char bVertexDeformationOutputsVelocity; //  0xb8 Size(1)
	char bSelectiveBasePassOutputs; //  0xb8 Size(1)
	char bDefaultParticleCutouts; //  0xb8 Size(1)
	int32_t GPUSimulationTextureSizeX; //  0xbc Size(4)
	int32_t GPUSimulationTextureSizeY; //  0xc0 Size(4)
	char bGlobalClipPlane; //  0xc4 Size(1)
	Unknown GBufferFormat; //  0xc8 Size(1)
	char bUseGPUMorphTargets; //  0xcc Size(1)
	char bNvidiaAftermathEnabled; //  0xcc Size(1)
	char bMultiView; //  0xcc Size(1)
	char bMob; //  0xcc Size(1)
	char bMobtiView; //  0xcc Size(1)
	char bMob; //  0xcc Size(1)
	char bRoundRobinOcclusion; //  0xcc Size(1)
	char bODSCapture; //  0xcc Size(1)
	char bMeshStreaming; //  0xcd Size(1)
	float WireframeCullThreshold; //  0xd0 Size(4)
	char bEnableRayTracing; //  0xd4 Size(1)
	char bEnableRayTracingTextureLOD; //  0xd4 Size(1)
	char bSupportStationarySkylight; //  0xd4 Size(1)
	char bSupportLowQualityLightmaps; //  0xd4 Size(1)
	char bSupportPointLightWholeSceneShadows; //  0xd4 Size(1)
	char bSupportAtmosphericFog; //  0xd4 Size(1)
	char bSupportSkyAtmosphere; //  0xd4 Size(1)
	char bSupportSkyAtmosphereAffectsHeightFog; //  0xd4 Size(1)
	char bSupportSkinCacheShaders; //  0xd5 Size(1)
	Unknown DefaultSkinCacheBehavior; //  0xd8 Size(1)
	float SkinCacheSceneMemoryLimitInMB; //  0xdc Size(4)
	char bMob; //  0xe0 Size(1)
	char bMobCacheSceneMemoryLimitInMB; //  0xe0 Size(1)
	char bMob; //  0xe0 Size(1)
	char bMobCacheSceneMemoryLimitInMB; //  0xe0 Size(1)
	uint32_t MobileNumDynamicPointLights; //  0xe4 Size(4)
	char bMob; //  0xe8 Size(1)
	char bMobleNumDynamicPointLights; //  0xe8 Size(1)
	char bSupport16BitBoneIndex; //  0xe8 Size(1)
	char bGPUSkinLimit2BoneInfluences; //  0xe8 Size(1)
	char bSupportDepthOnlyIndexBuffers; //  0xe8 Size(1)
	char bSupportReversedIndexBuffers; //  0xe8 Size(1)
	char bSupportMaterialLayers; //  0xe8 Size(1)
	char bLPV; //  0xe8 Size(1)
};

// Class Engine.RendererOverrideSettings
struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutatio; //  0x38 Size(1)
	char bForceRecomputeTangents; //  0x38 Size(1)
};

// Class Engine.ReverbEffect
struct UReverbEffect : Object {
	float Density; //  0x28 Size(4)
	float Diffusion; //  0x2c Size(4)
	float Gain; //  0x30 Size(4)
	float GainHF; //  0x34 Size(4)
	float DecayTime; //  0x38 Size(4)
	float DecayHFRatio; //  0x3c Size(4)
	float ReflectionsGain; //  0x40 Size(4)
	float ReflectionsDelay; //  0x44 Size(4)
	float LateGain; //  0x48 Size(4)
	float LateDelay; //  0x4c Size(4)
	float AirAbsorptionGainHF; //  0x50 Size(4)
	float RoomRolloffFactor; //  0x54 Size(4)
};

// Class Engine.Rig
struct URig : Object {
	Unknown TransformBases; //  0x30 Size(10)
	Unknown Nodes; //  0x40 Size(10)
};

// Class Engine.RotatingMovementComponent
struct URotatingMovementComponent : UMovementComponent {
	Unknown RotationRate; //  0xf0 Size(c)
	Unknown PivotTranslation; //  0xfc Size(c)
	char bRotationInLocalSpace; //  0x108 Size(1)
};

// Class Engine.RuntimeVirtualTexture
struct URuntimeVirtualTexture : Object {
	Unknown MaterialType; //  0x28 Size(1)
	char bCompressTextures; //  0x29 Size(1)
	char bEnable; //  0x2a Size(1)
	char bClearTextures; //  0x2b Size(1)
	char bSinglePhysicalSpace; //  0x2c Size(1)
	char bPrivateSpace; //  0x2d Size(1)
	char bEnableScalability; //  0x2e Size(1)
	int32_t Size; //  0x30 Size(4)
	int32_t TileCount; //  0x34 Size(4)
	int32_t TileSize; //  0x38 Size(4)
	int32_t TileBorderSize; //  0x3c Size(4)
	int32_t StreamLowMips; //  0x40 Size(4)
	Unknown StreamingTexture; //  0x48 Size(8)
	char bEnableCompressCrunch; //  0x50 Size(1)
	int32_t RemoveLowMips; //  0x54 Size(4)

	int32_t GetTileSize(); // Function Engine.RuntimeVirtualTexture.GetTileSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3dd13e0>
};

// Class Engine.RuntimeVirtualTextureComponent
struct URuntimeVirtualTextureComponent : USceneComponent {
	Unknown VirtualTexture; //  0x238 Size(8)
	char bUseStreamingLowMipsInEdito; //  0x240 Size(1)
	Unknown BoundsSourceActor; //  0x248 Size(8)

	Unknown GetVirtualTextureTransform(); // Function Engine.RuntimeVirtualTextureComponent.GetVirtualTextureTransform(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x3dd1430>
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
struct URuntimeVirtualTextureStreamingProxy : UTexture2D {
	Unknown Settings; //  0xe8 Size(c)
	char bSinglePhysicalSpace; //  0xf4 Size(1)
	uint32_t BuildHash; //  0xf8 Size(4)
};

// Class Engine.RuntimeVirtualTextureVolume
struct ARuntimeVirtualTextureVolume : UActor {
	Unknown VirtualTextureComponent; //  0x310 Size(8)
};

// Class Engine.SceneCaptureComponentCube
struct USceneCaptureComponentCube : USceneCaptureComponent {
	Unknown TextureTarget; //  0x2d0 Size(8)
	char bCaptureRotation; //  0x2d8 Size(1)
	Unknown TextureTargetLeft; //  0x2e0 Size(8)
	Unknown TextureTargetRight; //  0x2e8 Size(8)
	Unknown TextureTargetODS; //  0x2f0 Size(8)
	float IPD; //  0x2f8 Size(4)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene(Final|Native|Public|BlueprintCallable) // <Game+0x3dd80d0>
};

// Class Engine.SceneCaptureCube
struct ASceneCaptureCube : ASceneCapture {
	Unknown CaptureComponentCube; //  0x320 Size(8)

	void OnInterpToggle(char bEnable); // Function Engine.SceneCaptureCube.OnInterpToggle(Final|Native|Public|BlueprintCallable) // <Game+0x3daf520>
};

// Class Engine.SCS_Node
struct USCS_Node : Object {
	Unknown ComponentClass; //  0x28 Size(8)
	Unknown ComponentTemplate; //  0x30 Size(8)
	Unknown CookedComponentInstancingData; //  0x38 Size(48)
	struct FName AttachToName; //  0x80 Size(8)
	struct FName ParentComponentOrVariableName; //  0x88 Size(8)
	struct FName ParentComponentOwnerClassName; //  0x90 Size(8)
	char bIsParentComponentNative; //  0x98 Size(1)
	Unknown ChildNodes; //  0xa0 Size(10)
	Unknown MetaDataArray; //  0xb0 Size(10)
	Unknown VariableGuid; //  0xc0 Size(10)
	struct FName InternalVariableName; //  0xd0 Size(8)
};

// Class Engine.ServerStatReplicator
struct AServerStatReplicator : AInfo {
	char bUpdateStatNet; //  0x310 Size(1)
	char bOverwriteClientStats; //  0x311 Size(1)
	uint32_t Channels; //  0x314 Size(4)
	uint32_t InRate; //  0x318 Size(4)
	uint32_t OutRate; //  0x31c Size(4)
	uint32_t MaxPacketOverhead; //  0x324 Size(4)
	uint32_t InRateClientMax; //  0x328 Size(4)
	uint32_t InRateClientMin; //  0x32c Size(4)
	uint32_t InRateClientAvg; //  0x330 Size(4)
	uint32_t InPacketsClientMax; //  0x334 Size(4)
	uint32_t InPacketsClientMin; //  0x338 Size(4)
	uint32_t InPacketsClientAvg; //  0x33c Size(4)
	uint32_t OutRateClientMax; //  0x340 Size(4)
	uint32_t OutRateClientMin; //  0x344 Size(4)
	uint32_t OutRateClientAvg; //  0x348 Size(4)
	uint32_t OutPacketsClientMax; //  0x34c Size(4)
	uint32_t OutPacketsClientMin; //  0x350 Size(4)
	uint32_t OutPacketsClientAvg; //  0x354 Size(4)
	uint32_t NetNumClients; //  0x358 Size(4)
	uint32_t InPackets; //  0x35c Size(4)
	uint32_t OutPackets; //  0x360 Size(4)
	uint32_t InBunches; //  0x364 Size(4)
	uint32_t OutBunches; //  0x368 Size(4)
	uint32_t OutLoss; //  0x36c Size(4)
	uint32_t InLoss; //  0x370 Size(4)
	uint32_t VoiceBytesSent; //  0x374 Size(4)
	uint32_t VoiceBytesRecv; //  0x378 Size(4)
	uint32_t VoicePacketsSent; //  0x37c Size(4)
	uint32_t VoicePacketsRecv; //  0x380 Size(4)
	uint32_t PercentInVoice; //  0x384 Size(4)
	uint32_t PercentOutVoice; //  0x388 Size(4)
	uint32_t NumActorChannels; //  0x38c Size(4)
	uint32_t NumConsideredActors; //  0x390 Size(4)
	uint32_t PrioritizedActors; //  0x394 Size(4)
	uint32_t NumRelevantActors; //  0x398 Size(4)
	uint32_t NumRelevantDeletedActors; //  0x39c Size(4)
	uint32_t NumReplicatedActorAttempts; //  0x3a0 Size(4)
	uint32_t NumReplicatedActors; //  0x3a4 Size(4)
	uint32_t NumActors; //  0x3a8 Size(4)
	uint32_t NumNetActors; //  0x3ac Size(4)
	uint32_t NumDormantActors; //  0x3b0 Size(4)
	uint32_t NumInitiallyDormantActors; //  0x3b4 Size(4)
	uint32_t NumNetGUIDsAckd; //  0x3b8 Size(4)
	uint32_t NumNetGUIDsPending; //  0x3bc Size(4)
	uint32_t NumNetGUIDsUnAckd; //  0x3c0 Size(4)
	uint32_t ObjPathBytes; //  0x3c4 Size(4)
	uint32_t NetGUIDOutRate; //  0x3c8 Size(4)
	uint32_t NetGUIDInRate; //  0x3cc Size(4)
	uint32_t NetSaturated; //  0x3d0 Size(4)
};

// Class Engine.ShadowMapTexture2D
struct UShadowMapTexture2D : UTexture2D {
	Unknown ShadowmapFlags; //  0xe8 Size(1)
};

// Class Engine.SimpleConstructionScript
struct USimpleConstructionScript : Object {
	Unknown RootNodes; //  0x28 Size(10)
	Unknown AllNodes; //  0x38 Size(10)
	Unknown DefaultSceneRootNode; //  0x48 Size(8)
};

// Class Engine.SkeletalMeshLODSettings
struct USkeletalMeshLODSettings : UDataAsset {
	Unknown MinLOD; //  0x30 Size(4)
	Unknown DisableBelowMinLodStripping; //  0x34 Size(1)
	Unknown bSupportLODStreaming; //  0x35 Size(1)
	Unknown MaxNumStreamedLODs; //  0x38 Size(4)
	Unknown MaxNumOptionalLODs; //  0x3c Size(4)
	Unknown LODGroups; //  0x40 Size(10)
};

// Class Engine.SkeletalMeshSimplificationSettings
struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	struct FName SkeletalMeshReductionModuleName; //  0x38 Size(8)
};

// Class Engine.SkeletalMeshSocket
struct USkeletalMeshSocket : Object {
	struct FName SocketName; //  0x28 Size(8)
	struct FName BoneName; //  0x30 Size(8)
	Unknown RelativeLocation; //  0x38 Size(c)
	Unknown RelativeRotation; //  0x44 Size(c)
	Unknown RelativeScale; //  0x50 Size(c)
	char bForceAlwaysAnimated; //  0x5c Size(1)

	void InitializeSocketFromLocatio(Unknown SkelComp, Unknown WorldLocation, Unknown WorldNormal); // Function Engine.SkeletalMeshSocket.InitializeSocketFromLocatiot(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3dee1e0>
};

// Class Engine.SkyAtmosphereComponent
struct USkyAtmosphereComponent : USceneComponent {
	Unknown TransformMode; //  0x238 Size(1)
	float BottomRadius; //  0x23c Size(4)
	Unknown GroundAlbedo; //  0x240 Size(4)
	float AtmosphereHeight; //  0x244 Size(4)
	float MultiScatteringFactor; //  0x248 Size(4)
	float RayleighScatteringScale; //  0x24c Size(4)
	Unknown RayleighScattering; //  0x250 Size(10)
	float RayleighExponentialDistribution; //  0x260 Size(4)
	float MieScatteringScale; //  0x264 Size(4)
	Unknown MieScattering; //  0x268 Size(10)
	float MieAbsorptionScale; //  0x278 Size(4)
	Unknown MieAbsorption; //  0x27c Size(10)
	float MieAnisotropy; //  0x28c Size(4)
	float MieExponentialDistribution; //  0x290 Size(4)
	float OtherAbsorptionScale; //  0x294 Size(4)
	Unknown OtherAbsorption; //  0x298 Size(10)
	Unknown OtherTentDistribution; //  0x2a8 Size(c)
	Unknown SkyLuminanceFactor; //  0x2b4 Size(10)
	float AerialPespectiveViewDistanceScale; //  0x2c4 Size(4)
	float HeightFogContribution; //  0x2c8 Size(4)
	float TransmittanceMinLightElevationAngle; //  0x2cc Size(4)
	Unknown bStaticLightingBuiltGUID; //  0x2f4 Size(10)

	void SetSkyLuminanceFactor(Unknown NewValue); // Function Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3df4210>
};

// Class Engine.SkyAtmosphere
struct ASkyAtmosphere : AInfo {
	Unknown SkyAtmosphereComponent; //  0x310 Size(8)
};

// Class Engine.SkyLightComponent
struct USkyLightComponent : ULightComponentBase {
	Unknown SourceType; //  0x270 Size(1)
	Unknown Cubemap; //  0x278 Size(8)
	float SourceCubemapAngle; //  0x280 Size(4)
	int32_t CubemapResolution; //  0x284 Size(4)
	float SkyDistanceThreshold; //  0x288 Size(4)
	char bCaptureEmissiveOnly; //  0x28c Size(1)
	char bLowerHemisphereIsBlack; //  0x28d Size(1)
	Unknown LowerHemisphereColor; //  0x290 Size(10)
	char bAffectDynamicIndirectLighting; //  0x2a0 Size(1)
	float OcclusionMaxDistance; //  0x2a4 Size(4)
	float Contrast; //  0x2a8 Size(4)
	float OcclusionExponent; //  0x2ac Size(4)
	Unknown OcclusionFoliageTint; //  0x2b0 Size(4)
	float MinOcclusion; //  0x2b4 Size(4)
	Unknown OcclusionBarkTint; //  0x2b8 Size(4)
	Unknown OcclusionTint; //  0x2bc Size(4)
	Unknown OcclusionCombineMode; //  0x2c0 Size(1)
	Unknown SpecularOcclusionMode; //  0x2c1 Size(1)
	float SpecularOcclusionStrength; //  0x2c4 Size(4)
	float SelfShadowBiasForObjectAO; //  0x2c8 Size(4)
	float OcclusionTranslucencyForTwo; //  0x2cc Size(4)
	Unknown BlendDestinationCubemap; //  0x388 Size(8)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetVolumetricScatteringIntensity(Final|Native|Public|BlueprintCallable) // <Game+0x3df4290>
};

// Class Engine.SlateBrushAsset
struct USlateBrushAsset : Object {
	Unknown Brush; //  0x28 Size(88)
};

// Class Engine.SoundAttenuation
struct USoundAttenuation : Object {
	Unknown Attenuation; //  0x28 Size(3a0)
};

// Class Engine.SoundClass
struct USoundClass : Object {
	Unknown Properties; //  0x28 Size(58)
	Unknown ChildClasses; //  0x80 Size(10)
	Unknown PassiveSoundMixModifiers; //  0x90 Size(10)
	Unknown Modulation; //  0xa0 Size(10)
	Unknown ParentClass; //  0xb0 Size(8)
};

// Class Engine.SoundConcurrency
struct USoundConcurrency : Object {
	Unknown Concurrency; //  0x28 Size(20)
};

// Class Engine.SoundCue
struct USoundCue : USoundBase {
	char bPrimeOnLoad; //  0x160 Size(1)
	Unknown FirstNode; //  0x168 Size(8)
	float VolumeMultiplier; //  0x170 Size(4)
	float PitchMultiplier; //  0x174 Size(4)
	Unknown AttenuationOverrides; //  0x178 Size(3a0)
	float SubtitlePriority; //  0x518 Size(4)
	char bOverrideAttenuation; //  0x520 Size(1)
	char bExcludeFromRandomNodeBranchCulling; //  0x520 Size(1)
	int32_t CookedQualityIndex; //  0x524 Size(4)
	char bHasPlayWhenSilent; //  0x528 Size(1)
};

// Class Engine.SoundEffectSourcePresetChain
struct USoundEffectSourcePresetChain : Object {
	Unknown Chain; //  0x28 Size(10)
	char bPlayEffectChainTails; //  0x38 Size(1)
};

// Class Engine.SoundGroups
struct USoundGroups : Object {
	Unknown SoundGroupProfiles; //  0x28 Size(10)
};

// Class Engine.SoundMix
struct USoundMix : Object {
	char bApplyEQ; //  0x28 Size(1)
	float EQPriority; //  0x2c Size(4)
	Unknown EQSettings; //  0x30 Size(40)
	Unknown SoundClassEffects; //  0x70 Size(10)
	float InitialDelay; //  0x80 Size(4)
	float FadeInTime; //  0x84 Size(4)
	float Duration; //  0x88 Size(4)
	float FadeOutTime; //  0x8c Size(4)
};

// Class Engine.SoundNode
struct USoundNode : Object {
	Unknown ChildNodes; //  0x28 Size(10)
};

// Class Engine.SoundNodeAttenuation
struct USoundNodeAttenuation : USoundNode {
	Unknown AttenuationSettings; //  0x48 Size(8)
	Unknown AttenuationOverrides; //  0x50 Size(3a0)
	char bOverrideAttenuation; //  0x3f0 Size(1)
};

// Class Engine.SoundNodeBranch
struct USoundNodeBranch : USoundNode {
	struct FName BoolParameterName; //  0x48 Size(8)
};

// Class Engine.SoundNodeConcatenator
struct USoundNodeConcatenator : USoundNode {
	Unknown InputVolume; //  0x48 Size(10)
};

// Class Engine.SoundNodeDelay
struct USoundNodeDelay : USoundNode {
	float DelayMin; //  0x48 Size(4)
	float DelayMax; //  0x4c Size(4)
};

// Class Engine.SoundNodeDialoguePlayer
struct USoundNodeDialoguePlayer : USoundNode {
	Unknown DialogueWaveParameter; //  0x48 Size(20)
	char bLooping; //  0x68 Size(1)
};

// Class Engine.SoundNodeDistanceCrossFade
struct USoundNodeDistanceCrossFade : USoundNode {
	Unknown CrossFadeInput; //  0x48 Size(10)
};

// Class Engine.SoundNodeDoppler
struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; //  0x48 Size(4)
	char bUseSmoothing; //  0x4c Size(1)
	float SmoothingInterpSpeed; //  0x50 Size(4)
};

// Class Engine.SoundNodeEnveloper
struct USoundNodeEnveloper : USoundNode {
	float LoopStart; //  0x48 Size(4)
	float LoopEnd; //  0x4c Size(4)
	float DurationAfterLoop; //  0x50 Size(4)
	int32_t LoopCount; //  0x54 Size(4)
	char bLoopIndefinitely; //  0x58 Size(1)
	char bLoop; //  0x58 Size(1)
	Unknown VolumeInterpCurve; //  0x60 Size(8)
	Unknown PitchInterpCurve; //  0x68 Size(8)
	Unknown VolumeCurve; //  0x70 Size(88)
	Unknown PitchCurve; //  0xf8 Size(88)
	float PitchMin; //  0x180 Size(4)
	float PitchMax; //  0x184 Size(4)
	float VolumeMin; //  0x188 Size(4)
	float VolumeMax; //  0x18c Size(4)
};

// Class Engine.SoundNodeGroupControl
struct USoundNodeGroupControl : USoundNode {
	Unknown GroupSizes; //  0x48 Size(10)
};

// Class Engine.SoundNodeLooping
struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; //  0x48 Size(4)
	char bLoopIndefinitely; //  0x4c Size(1)
};

// Class Engine.SoundNodeMixer
struct USoundNodeMixer : USoundNode {
	Unknown InputVolume; //  0x48 Size(10)
};

// Class Engine.SoundNodeModulator
struct USoundNodeModulator : USoundNode {
	float PitchMin; //  0x48 Size(4)
	float PitchMax; //  0x4c Size(4)
	float VolumeMin; //  0x50 Size(4)
	float VolumeMax; //  0x54 Size(4)
};

// Class Engine.SoundNodeModulatorContinuous
struct USoundNodeModulatorContinuous : USoundNode {
	Unknown PitchModulationParams; //  0x48 Size(20)
	Unknown VolumeModulationParams; //  0x68 Size(20)
};

// Class Engine.SoundNodeOscillator
struct USoundNodeOscillator : USoundNode {
	char bModulateVolume; //  0x48 Size(1)
	char bModulatePitch; //  0x48 Size(1)
	float AmplitudeMin; //  0x4c Size(4)
	float AmplitudeMax; //  0x50 Size(4)
	float FrequencyMin; //  0x54 Size(4)
	float FrequencyMax; //  0x58 Size(4)
	float OffsetMin; //  0x5c Size(4)
	float OffsetMax; //  0x60 Size(4)
	float CenterMin; //  0x64 Size(4)
	float CenterMax; //  0x68 Size(4)
};

// Class Engine.SoundNodeParamCrossFade
struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	struct FName ParamName; //  0x58 Size(8)
};

// Class Engine.SoundNodeRandom
struct USoundNodeRandom : USoundNode {
	Unknown Weights; //  0x48 Size(10)
	Unknown HasBeenUsed; //  0x58 Size(10)
	int32_t NumRandomUsed; //  0x68 Size(4)
	int32_t PreselectAtLevelLoad; //  0x6c Size(4)
	char bShouldExcludeFromBranchCulling; //  0x70 Size(1)
	char bSoundCueExcludedFromBranchCulling; //  0x70 Size(1)
	char bRandomizeWithoutReplacement; //  0x70 Size(1)
};

// Class Engine.SoundNodeSoundClass
struct USoundNodeSoundClass : USoundNode {
	Unknown SoundClassOverride; //  0x48 Size(8)
};

// Class Engine.SoundNodeSwitch
struct USoundNodeSwitch : USoundNode {
	struct FName IntParameterName; //  0x48 Size(8)
};

// Class Engine.SoundNodeWaveParam
struct USoundNodeWaveParam : USoundNode {
	struct FName WaveParameterName; //  0x48 Size(8)
};

// Class Engine.SoundNodeWavePlayer
struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	Unknown SoundWaveAssetPtr; //  0x48 Size(28)
	Unknown SoundWave; //  0x70 Size(8)
	char bLooping; //  0x78 Size(1)
};

// Class Engine.SoundSourceBus
struct USoundSourceBus : USoundWave {
	Unknown SourceBusChannels; //  0x308 Size(1)
	float SourceBusDuration; //  0x30c Size(4)
	char bAutoDeactivateWhenSilent; //  0x310 Size(1)
};

// Class Engine.SoundSubmixBase
struct USoundSubmixBase : Object {
	Unknown ChildSubmixes; //  0x28 Size(10)
};

// Class Engine.SoundSubmixWithParentBase
struct USoundSubmixWithParentBase : USoundSubmixBase {
	Unknown ParentSubmix; //  0x38 Size(8)
};

// Class Engine.SoundSubmix
struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded; //  0x40 Size(1)
	Unknown SubmixEffectChain; //  0x48 Size(10)
	Unknown AmbisonicsPluginSettings; //  0x58 Size(8)
	int32_t EnvelopeFollowerAttackTime; //  0x60 Size(4)
	int32_t EnvelopeFollowerReleaseTime; //  0x64 Size(4)
	float OutputVolume; //  0x68 Size(4)
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone; //  0x70 Size(10)

	void StopRecordingOutput(Unknown WorldContextObject, Unknown ExportType, struct FString Name, struct FString Path, Unknown ExistingSoundWaveToOverwrite); // Function Engine.SoundSubmix.StopRecordingOutput(Final|Native|Public|BlueprintCallable) // <Game+0x3dfc130>
};

// Class Engine.SoundfieldSubmix
struct USoundfieldSubmix : USoundSubmixWithParentBase {
	struct FName SoundfieldEncodingFormat; //  0x40 Size(8)
	Unknown EncodingSettings; //  0x48 Size(8)
	Unknown SoundfieldEffectChain; //  0x50 Size(10)
	Unknown EncodingSettingsClass; //  0x60 Size(8)
};

// Class Engine.EndpointSubmix
struct UEndpointSubmix : USoundSubmixBase {
	struct FName EndpointType; //  0x38 Size(8)
	Unknown EndpointSettingsClass; //  0x40 Size(8)
	Unknown EndpointSettings; //  0x48 Size(8)
};

// Class Engine.SoundfieldEndpointSubmix
struct USoundfieldEndpointSubmix : USoundSubmixBase {
	struct FName SoundfieldEndpointType; //  0x38 Size(8)
	Unknown EndpointSettingsClass; //  0x40 Size(8)
	Unknown EndpointSettings; //  0x48 Size(8)
	Unknown EncodingSettingsClass; //  0x50 Size(8)
	Unknown EncodingSettings; //  0x58 Size(8)
	Unknown SoundfieldEffectChain; //  0x60 Size(10)
};

// Class Engine.SpectatorPawnMovement
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation; //  0x150 Size(1)
};

// Class Engine.SphereReflectionCapture
struct ASphereReflectionCapture : AReflectionCapture {
	Unknown DrawCaptureRadius; //  0x318 Size(8)
};

// Class Engine.SphereReflectionCaptureComponent
struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; //  0x2c0 Size(4)
	float CaptureDistanceScale; //  0x2c4 Size(4)
	Unknown PreviewInfluenceRadius; //  0x2c8 Size(8)
};

// Class Engine.SplineMeshActor
struct ASplineMeshActor : UActor {
	Unknown SplineMeshComponent; //  0x310 Size(8)
};

// Class Engine.SplineMeshComponent
struct USplineMeshComponent : UStaticMeshComponent {
	Unknown SplineParams; //  0x558 Size(58)
	Unknown SplineUpDir; //  0x5b0 Size(c)
	float SplineBoundaryMin; //  0x5bc Size(4)
	Unknown CachedMeshBodySetupGuid; //  0x5c0 Size(10)
	Unknown BodySetup; //  0x5d0 Size(8)
	float SplineBoundaryMax; //  0x5d8 Size(4)
	char bAllowSplineEditingPerInstance; //  0x5dc Size(1)
	char bSmoothInterpRollScale; //  0x5dc Size(1)
	char bMeshDirty; //  0x5dc Size(1)
	Unknown ForwardAxis; //  0x5dd Size(1)
	float VirtualTextureMainPassMaxDrawDistance; //  0x5e0 Size(4)

	void UpdateMesh(); // Function Engine.SplineMeshComponent.UpdateMesh(Final|Native|Public|BlueprintCallable) // <Game+0x3e090d0>
};

// Class Engine.SpotLightComponent
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; //  0x3b0 Size(4)
	float OuterConeAngle; //  0x3b4 Size(4)
	float LightShaftConeAngle; //  0x3b8 Size(4)
	char bUsePCSS; //  0x3bc Size(1)
	float PCSSSharpness; //  0x3c0 Size(4)
	float PCSSContrast; //  0x3c4 Size(4)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLightComponent.SetOuterConeAngle(Final|Native|Public|BlueprintCallable) // <Game+0x3e089a0>
};

// Class Engine.SpringArmComponent
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; //  0x238 Size(4)
	Unknown SocketOffset; //  0x23c Size(c)
	Unknown TargetOffset; //  0x248 Size(c)
	float Prob; //  0x254 Size(4)
	Unknown ProbetOff; //  0x258 Size(1)
	char bDoCollisionTest; //  0x25c Size(1)
	char bUsePawnControlRotation; //  0x25c Size(1)
	char bInheritPitch; //  0x25c Size(1)
	char bInheritYaw; //  0x25c Size(1)
	char bInheritRoll; //  0x25c Size(1)
	char bEnableCameraLag; //  0x25c Size(1)
	char bEnableCameraRotationLag; //  0x25c Size(1)
	char bUseCameraLagSubstepping; //  0x25c Size(1)
	char bDrawDebugLagMarkers; //  0x25d Size(1)
	float CameraLagSpeed; //  0x260 Size(4)
	float CameraRotationLagSpeed; //  0x264 Size(4)
	float CameraLagMaxTimeStep; //  0x268 Size(4)
	float CameraLagMaxDistance; //  0x26c Size(4)

	char IsCollisionFixApplied(); // Function Engine.SpringArmComponent.IsCollisionFixApplied(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3e08170>
};

// Class Engine.StaticMesh
struct UStaticMesh : UStreamableRenderAsset {
	char bUseAsOccluderForSoftwareOcclusion; //  0x60 Size(1)
	struct FName LODGroup; //  0x64 Size(8)
	struct FName MeshStreamingGroup; //  0x6c Size(8)
	Unknown MinLOD; //  0x80 Size(4)
	float LpvBiasMultiplier; //  0x84 Size(4)
	Unknown StaticMaterials; //  0x88 Size(10)
	float LightmapUVDensity; //  0x98 Size(4)
	int32_t LightMapResolution; //  0x9c Size(4)
	int32_t LightMapCoordinateIndex; //  0xa0 Size(4)
	float DistanceFieldSelfShadowBias; //  0xa4 Size(4)
	Unknown BodySetup; //  0xa8 Size(8)
	int32_t LODForCollision; //  0xb0 Size(4)
	char bGenerateMeshDistanceField; //  0xb4 Size(1)
	char bStripComplexCollisionForCo; //  0xb4 Size(1)
	char bHasNavigationData; //  0xb4 Size(1)
	char bSupportUniformlyDistributedSampling; //  0xb4 Size(1)
	char bSupportPhysicalMaterialMasks; //  0xb4 Size(1)
	char bIsBuiltAtRuntime; //  0xb4 Size(1)
	char bAllowCPUAccess; //  0xb4 Size(1)
	char bSupportGpuUniformlyDistributedSampling; //  0xb5 Size(1)
	Unknown Sockets; //  0xd8 Size(10)
	Unknown PositiveBoundsExtension; //  0xf8 Size(c)
	Unknown NegativeBoundsExtension; //  0x104 Size(c)
	Unknown ExtendedBounds; //  0x110 Size(1c)
	int32_t ElementToIgnoreForTexFactor; //  0x12c Size(4)
	Unknown AssetUserData; //  0x130 Size(10)
	Unknown EditableMesh; //  0x148 Size(8)
	Unknown NavCollision; //  0x150 Size(8)

	void RemoveSocket(Unknown Socket); // Function Engine.StaticMesh.RemoveSocket(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game+0x1f7b670>
};

// Class Engine.StaticMeshSocket
struct UStaticMeshSocket : Object {
	struct FName SocketName; //  0x28 Size(8)
	Unknown RelativeLocation; //  0x30 Size(c)
	Unknown RelativeRotation; //  0x3c Size(c)
	Unknown RelativeScale; //  0x48 Size(c)
	struct FString Tag; //  0x58 Size(10)
};

// Class Engine.StereoLayerComponent
struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture; //  0x238 Size(1)
	char bSupportsDepth; //  0x238 Size(1)
	char bNoAlphaChannel; //  0x238 Size(1)
	Unknown Texture; //  0x240 Size(8)
	Unknown LeftTexture; //  0x248 Size(8)
	char bQuadPreserveTextureRatio; //  0x250 Size(1)
	Unknown QuadSize; //  0x254 Size(8)
	Unknown UVRect; //  0x25c Size(14)
	float CylinderRadius; //  0x270 Size(4)
	float CylinderOverlayArc; //  0x274 Size(4)
	int32_t CylinderHeight; //  0x278 Size(4)
	Unknown EquirectProps; //  0x27c Size(48)
	Unknown StereoLayerType; //  0x2c4 Size(1)
	Unknown StereoLayerShape; //  0x2c5 Size(1)
	Unknown Shape; //  0x2c8 Size(8)
	int32_t Priority; //  0x2d0 Size(4)

	void SetUVRect(Unknown InUVRect); // Function Engine.StereoLayerComponent.SetUVRect(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3e0dc70>
};

// Class Engine.StereoLayerShapeCylinder
struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; //  0x28 Size(4)
	float OverlayArc; //  0x2c Size(4)
	int32_t Height; //  0x30 Size(4)

	void SetRadius(float InRadius); // Function Engine.StereoLayerShapeCylinder.SetRadius(Final|Native|Public|BlueprintCallable) // <Game+0x3e0d940>
};

// Class Engine.StereoLayerShapeEquirect
struct UStereoLayerShapeEquirect : UStereoLayerShape {
	Unknown LeftUVRect; //  0x28 Size(14)
	Unknown RightUVRect; //  0x3c Size(14)
	Unknown LeftScale; //  0x50 Size(8)
	Unknown RightScale; //  0x58 Size(8)
	Unknown LeftBias; //  0x60 Size(8)
	Unknown RightBias; //  0x68 Size(8)

	void SetEquirectProps(Unknown InScaleBiases); // Function Engine.StereoLayerShapeEquirect.SetEquirectProps(Final|Native|Public|BlueprintCallable) // <Game+0x3e0d540>
};

// Class Engine.SubsurfaceProfile
struct USubsurfaceProfile : Object {
	Unknown Settings; //  0x28 Size(8c)
};

// Class Engine.SubUVAnimation
struct USubUVAnimation : Object {
	Unknown SubUVTexture; //  0x28 Size(8)
	int32_t SubImages_Horizontal; //  0x30 Size(4)
	int32_t SubImages_Vertical; //  0x34 Size(4)
	Unknown BoundingMode; //  0x38 Size(1)
	Unknown OpacitySourceMode; //  0x39 Size(1)
	float AlphaThreshold; //  0x3c Size(4)
};

// Class Engine.TimecodeProvider
struct UTimecodeProvider : Object {
	float FrameDelay; //  0x28 Size(4)

	Unknown GetTimecode(); // Function Engine.TimecodeProvider.GetTimecode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3e15d30>
};

// Class Engine.SystemTimeTimecodeProvider
struct USystemTimeTimecodeProvider : UTimecodeProvider {
	Unknown FrameRate; //  0x30 Size(8)
	char bGenerateFullFrame; //  0x38 Size(1)
	char bUseHighPerformanceClock; //  0x39 Size(1)
};

// Class Engine.TextPropertyTestObject
struct UTextPropertyTestObject : Object {
	struct FText DefaultedText; //  0x28 Size(18)
	struct FText UndefaultedText; //  0x40 Size(18)
	struct FText TransientText; //  0x58 Size(18)
};

// Class Engine.TextRenderActor
struct ATextRenderActor : UActor {
	Unknown TextRender; //  0x310 Size(8)
};

// Class Engine.TextRenderComponent
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; //  0x4b8 Size(18)
	Unknown TextMaterial; //  0x4d0 Size(8)
	Unknown Font; //  0x4d8 Size(8)
	Unknown HorizontalAlignment; //  0x4e0 Size(1)
	Unknown VerticalAlignment; //  0x4e1 Size(1)
	Unknown TextRenderColor; //  0x4e4 Size(4)
	float XScale; //  0x4e8 Size(4)
	float YScale; //  0x4ec Size(4)
	float WorldSize; //  0x4f0 Size(4)
	float InvDefaultSize; //  0x4f4 Size(4)
	float HorizSpacingAdjust; //  0x4f8 Size(4)
	float VertSpacingAdjust; //  0x4fc Size(4)
	char bAlwaysRenderAsText; //  0x500 Size(1)

	void SetYScale(float Value); // Function Engine.TextRenderComponent.SetYScale(Final|Native|Public|BlueprintCallable) // <Game+0x3e121d0>
};

// Class Engine.TextureLightProfile
struct UTextureLightProfile : UTexture2D {
	float Brightness; //  0xe8 Size(4)
	float TextureMultiplier; //  0xec Size(4)
};

// Class Engine.TextureRenderTargetCube
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; //  0xc0 Size(4)
	Unknown ClearColor; //  0xc4 Size(10)
	Unknown OverrideFormat; //  0xd4 Size(1)
	char bHDR; //  0xd5 Size(1)
	char bForceLinearGamma; //  0xd5 Size(1)
};

// Class Engine.TimelineComponent
struct UTimelineComponent : UActorComponent {
	Unknown TheTimeline; //  0xb0 Size(98)
	char bIgnoreTimeDilation; //  0x148 Size(1)

	void Stop(); // Function Engine.TimelineComponent.Stop(Final|RequiredAPI|Native|Public|BlueprintCallable) // <Game+0x3e16540>
};

// Class Engine.TimelineTemplate
struct UTimelineTemplate : Object {
	float TimelineLength; //  0x28 Size(4)
	Unknown LengthMode; //  0x2c Size(1)
	char bAutoPlay; //  0x2d Size(1)
	char bLoop; //  0x2d Size(1)
	char bReplicated; //  0x2d Size(1)
	char bIgnoreTimeDilation; //  0x2d Size(1)
	Unknown EventTracks; //  0x30 Size(10)
	Unknown FloatTracks; //  0x40 Size(10)
	Unknown VectorTracks; //  0x50 Size(10)
	Unknown LinearColorTracks; //  0x60 Size(10)
	Unknown MetaDataArray; //  0x70 Size(10)
	Unknown TimelineGuid; //  0x80 Size(10)
	struct FName VariableName; //  0x90 Size(8)
	struct FName DirectionPropertyName; //  0x98 Size(8)
	struct FName UpdateFunctionName; //  0xa0 Size(8)
	struct FName FinishedFunctionName; //  0xa8 Size(8)
};

// Class Engine.TireType
struct UTireType : UDataAsset {
	float FrictionScale; //  0x30 Size(4)
};

// Class Engine.TouchInterface
struct UTouchInterface : Object {
	Unknown Controls; //  0x28 Size(10)
	float ActiveOpacity; //  0x38 Size(4)
	float InactiveOpacity; //  0x3c Size(4)
	float TimeUntilDeactive; //  0x40 Size(4)
	float TimeUntilReset; //  0x44 Size(4)
	float ActivationDelay; //  0x48 Size(4)
	char bPreventRecenter; //  0x4c Size(1)
	float StartupDelay; //  0x50 Size(4)
};

// Class Engine.TriggerBase
struct ATriggerBase : UActor {
	Unknown CollisionComponent; //  0x310 Size(8)
};

// Class Engine.UserDefinedEnum
struct UUserDefinedEnum : UEnum {
	Unknown DisplayNameMap; //  0x60 Size(50)
};

// Class Engine.UserDefinedStruct
struct UUserDefinedStruct : UScriptStruct {
	Unknown status; //  0xc0 Size(1)
	Unknown Guid; //  0xc4 Size(10)
};

// Class Engine.UserInterfaceSettings
struct UUserInterfaceSettings : UDeveloperSettings {
	Unknown RenderFocusRule; //  0x38 Size(1)
	Unknown HardwareCursors; //  0x40 Size(50)
	Unknown SoftwareCursors; //  0x90 Size(50)
	Unknown DefaultCursor; //  0xe0 Size(18)
	Unknown TextEditBeamCursor; //  0xf8 Size(18)
	Unknown CrosshairsCursor; //  0x110 Size(18)
	Unknown HandCursor; //  0x128 Size(18)
	Unknown Grab; //  0x140 Size(18)
	Unknown GrabCursor; //  0x158 Size(18)
	Unknown SlashedCircleCursor; //  0x170 Size(18)
	float ApplicationScale; //  0x188 Size(4)
	Unknown UIScaleRule; //  0x18c Size(1)
	Unknown CustomScalingRuleClass; //  0x190 Size(18)
	Unknown UIScaleCurve; //  0x1a8 Size(88)
	char bAllowHighDPIInGameMode; //  0x230 Size(1)
	char bLoadWidgetsOnDedicatedServer; //  0x231 Size(1)
	Unknown CursorClasses; //  0x238 Size(10)
	Unknown CustomScalingRuleClassInstance; //  0x248 Size(8)
	Unknown CustomScalingRule; //  0x250 Size(8)
};

// Class Engine.VectorField
struct UVectorField : Object {
	Unknown Bounds; //  0x28 Size(1c)
	float Intensity; //  0x44 Size(4)
};

// Class Engine.VectorFieldAnimated
struct UVectorFieldAnimated : UVectorField {
	Unknown Texture; //  0x48 Size(8)
	Unknown ConstructionOp; //  0x50 Size(1)
	int32_t VolumeSizeX; //  0x54 Size(4)
	int32_t VolumeSizeY; //  0x58 Size(4)
	int32_t VolumeSizeZ; //  0x5c Size(4)
	int32_t SubImagesX; //  0x60 Size(4)
	int32_t SubImagesY; //  0x64 Size(4)
	int32_t FrameCount; //  0x68 Size(4)
	float FramesPerSecond; //  0x6c Size(4)
	char bLoop; //  0x70 Size(1)
	Unknown NoiseField; //  0x78 Size(8)
	float NoiseScale; //  0x80 Size(4)
	float NoiseMax; //  0x84 Size(4)
};

// Class Engine.VectorFieldComponent
struct UVectorFieldComponent : UPrimitiveComponent {
	Unknown VectorField; //  0x4b8 Size(8)
	float Intensity; //  0x4c0 Size(4)
	float Tightness; //  0x4c4 Size(4)
	char bPreviewVectorField; //  0x4c8 Size(1)

	void SetIntensity(float NewIntensity); // Function Engine.VectorFieldComponent.SetIntensity(Native|Public|BlueprintCallable) // <Game+0x3e1a7c0>
};

// Class Engine.VectorFieldStatic
struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; //  0x48 Size(4)
	int32_t SizeY; //  0x4c Size(4)
	int32_t SizeZ; //  0x50 Size(4)
	char bAllowCPUAccess; //  0x54 Size(1)
	Unknown CPUData; //  0x80 Size(10)
};

// Class Engine.VectorFieldVolume
struct AVectorFieldVolume : UActor {
	Unknown VectorFieldComponent; //  0x310 Size(8)
};

// Class Engine.LightMapVirtualTexture2D
struct ULightMapVirtualTexture2D : UTexture2D {
	Unknown TypeToLayer; //  0xe8 Size(10)
};

// Class Engine.VirtualTexturePoolConfig
struct UVirtualTexturePoolConfig : Object {
	int32_t DefaultSizeInMegabyte; //  0x28 Size(4)
	Unknown Pools; //  0x30 Size(10)
};

// Class Engine.VOIPTalker
struct UVOIPTalker : UActorComponent {
	Unknown Settings; //  0xb0 Size(18)

	void RegisterWithPlayerState(Unknown OwningState); // Function Engine.VOIPTalker.RegisterWithPlayerState(Final|Native|Public|BlueprintCallable) // <Game+0x3e21350>
};

// Class Engine.VolumetricLightmapDensityVo
struct AVolumetricLightmapDensityVot : AVolume {
	Unknown AllowedMipLevelRange; //  0x348 Size(8)
};

// Class Engine.WindDirectionalSource
struct AWindDirectionalSource : AInfo {
	Unknown Component; //  0x310 Size(8)
};

// Class Engine.WindDirectionalSourceComponent
struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; //  0x238 Size(4)
	float Speed; //  0x23c Size(4)
	float MinGustAmount; //  0x240 Size(4)
	float MaxGustAmount; //  0x244 Size(4)
	float Radius; //  0x248 Size(4)
	char bPointWind; //  0x24c Size(1)

	void SetWindType(Unknown InNewType); // Function Engine.WindDirectionalSourceComponent.SetWindType(Final|Native|Public|BlueprintCallable) // <Game+0x3e216c0>
};

// Class Engine.WorldComposition
struct UWorldComposition : Object {
	Unknown TilesStreaming; //  0x130 Size(10)
	Unknown TilesStreamingTimeThreshold; //  0x140 Size(8)
	char bLoadAllTilesDuringCinematic; //  0x148 Size(1)
	char bReb; //  0x149 Size(1)
	float RebaseOriginDistance; //  0x14c Size(4)
	char bApplyMinStreamingPriorityToLOD; //  0x150 Size(1)
	char bApplyStreamingDistanceScaleToLOD; //  0x151 Size(1)
	Unknown DevFilterRule; //  0x158 Size(10)
};

// Class Engine.HierarchicalLODSetup
struct UHierarchicalLODSetup : Object {
	Unknown HierarchicalLODSetup; //  0x28 Size(10)
	Unknown OverrideBaseMaterial; //  0x38 Size(28)
};

// Class Engine.WorldTileLODSetup
struct UWorldTileLODSetup : Object {
	int32_t NumLOD; //  0x28 Size(4)
	Unknown LOD1; //  0x2c Size(13c)
	Unknown LOD2; //  0x168 Size(13c)
	Unknown LOD3; //  0x2a4 Size(13c)
	Unknown LOD4; //  0x3e0 Size(13c)
};

