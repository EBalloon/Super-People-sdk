// Enum Engine.ETextGender
enum class ETextGender : uint8 
{
	ETextGender::Masculine                   = 0,
	ETextGender::Feminine                    = 1,
	ETextGender::Neuter                      = 2,
	ETextGender::ETextGender_MAX             = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 
{
	EFormatArgumentType::Int                 = 0,
	EFormatArgumentType::UInt                = 1,
	EFormatArgumentType::Float               = 2,
	EFormatArgumentType::Double              = 3,
	EFormatArgumentType::Text                = 4,
	EFormatArgumentType::Gender              = 5,
	EFormatArgumentType::EFormatArgumentType_MAX = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 
{
	EEndPlayReason::Destroyed                = 0,
	EEndPlayReason::LevelTransition          = 1,
	EEndPlayReason::EndPlayInEditor          = 2,
	EEndPlayReason::RemovedFromWorld         = 3,
	EEndPlayReason::Quit                     = 4,
	EEndPlayReason::EEndPlayReason_MAX       = 5
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 
{
	TG_PrePhysics                            = 0,
	TG_StartPhysics                          = 1,
	TG_DuringPhysics                         = 2,
	TG_EndPhysics                            = 3,
	TG_PostPhysics                           = 4,
	TG_PostUpdateWork                        = 5,
	TG_LastDemotable                         = 6,
	TG_NewlySpawned                          = 7,
	TG_MAX                                   = 8
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 
{
	EComponentCreationMethod::Native         = 0,
	EComponentCreationMethod::SimpleConstructionScript = 1,
	EComponentCreationMethod::UserConstructionScript = 2,
	EComponentCreationMethod::Instance       = 3,
	EComponentCreationMethod::EComponentCreationMethod_MAX = 4
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 
{
	ETemperatureSeverityType::Unknown        = 0,
	ETemperatureSeverityType::Good           = 1,
	ETemperatureSeverityType::Bad            = 2,
	ETemperatureSeverityType::Serious        = 3,
	ETemperatureSeverityType::Critical       = 4,
	ETemperatureSeverityType::NumSeverities  = 5,
	ETemperatureSeverityType::ETemperatureSeverityType_MAX = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 
{
	EPlaneConstraintAxisSetting::Custom      = 0,
	EPlaneConstraintAxisSetting::X           = 1,
	EPlaneConstraintAxisSetting::Y           = 2,
	EPlaneConstraintAxisSetting::Z           = 3,
	EPlaneConstraintAxisSetting::UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting::EPlaneConstraintAxisSetting_MAX = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 
{
	EInterpToBehaviourType::OneShot          = 0,
	EInterpToBehaviourType::OneShot_Reverse  = 1,
	EInterpToBehaviourType::Loop_Reset       = 2,
	EInterpToBehaviourType::PingPong         = 3,
	EInterpToBehaviourType::EInterpToBehaviourType_MAX = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 
{
	ETeleportType::None                      = 0,
	ETeleportType::TeleportPhysics           = 1,
	ETeleportType::ResetPhysics              = 2,
	ETeleportType::ETeleportType_MAX         = 3
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 
{
	PIDT_None                                = 0,
	PIDT_Int                                 = 1,
	PIDT_Float                               = 2,
	PIDT_String                              = 3,
	PIDT_Object                              = 4,
	PIDT_Custom                              = 5,
	PIDT_MAX                                 = 6
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 
{
	MOVE_None                                = 0,
	MOVE_Walking                             = 1,
	MOVE_NavWalking                          = 2,
	MOVE_Falling                             = 3,
	MOVE_Swimming                            = 4,
	MOVE_Flying                              = 5,
	MOVE_Custom                              = 6,
	MOVE_MAX                                 = 7
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 
{
	ENetworkFailure::NetDriverAlreadyExists  = 0,
	ENetworkFailure::NetDriverCreateFailure  = 1,
	ENetworkFailure::NetDriverListenFailure  = 2,
	ENetworkFailure::ConnectionLost          = 3,
	ENetworkFailure::ConnectionTimeout       = 4,
	ENetworkFailure::FailureReceived         = 5,
	ENetworkFailure::OutdatedClient          = 6,
	ENetworkFailure::OutdatedServer          = 7,
	ENetworkFailure::PendingConnectionFailure = 8,
	ENetworkFailure::NetGuidMismatch         = 9,
	ENetworkFailure::NetChecksumMismatch     = 10,
	ENetworkFailure::ServerConnectionLost    = 11,
	ENetworkFailure::SecuritySeedMismatch    = 12,
	ENetworkFailure::ENetworkFailure_MAX     = 13
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 
{
	ETravelFailure::NoLevel                  = 0,
	ETravelFailure::LoadMapFailure           = 1,
	ETravelFailure::InvalidURL               = 2,
	ETravelFailure::PackageMissing           = 3,
	ETravelFailure::PackageVersion           = 4,
	ETravelFailure::NoDownload               = 5,
	ETravelFailure::TravelFailure            = 6,
	ETravelFailure::CheatCommands            = 7,
	ETravelFailure::PendingNetGameCreateFailure = 8,
	ETravelFailure::CloudSaveFailure         = 9,
	ETravelFailure::ServerTravelFailure      = 10,
	ETravelFailure::ClientTravelFailure      = 11,
	ETravelFailure::ETravelFailure_MAX       = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 
{
	EScreenOrientation::Unknown              = 0,
	EScreenOrientation::Portrait             = 1,
	EScreenOrientation::PortraitUpsideDown   = 2,
	EScreenOrientation::LandscapeLeft        = 3,
	EScreenOrientation::LandscapeRight       = 4,
	EScreenOrientation::FaceUp               = 5,
	EScreenOrientation::FaceDown             = 6,
	EScreenOrientation::EScreenOrientation_MAX = 7
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 
{
	EApplicationState::Unknown               = 0,
	EApplicationState::Inactive              = 1,
	EApplicationState::Background            = 2,
	EApplicationState::Active                = 3,
	EApplicationState::EApplicationState_MAX = 4
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 
{
	ObjectTypeQuery1                         = 0,
	ObjectTypeQuery2                         = 1,
	ObjectTypeQuery3                         = 2,
	ObjectTypeQuery4                         = 3,
	ObjectTypeQuery5                         = 4,
	ObjectTypeQuery6                         = 5,
	ObjectTypeQuery7                         = 6,
	ObjectTypeQuery8                         = 7,
	ObjectTypeQuery9                         = 8,
	ObjectTypeQuery10                        = 9,
	ObjectTypeQuery11                        = 10,
	ObjectTypeQuery12                        = 11,
	ObjectTypeQuery13                        = 12,
	ObjectTypeQuery14                        = 13,
	ObjectTypeQuery15                        = 14,
	ObjectTypeQuery16                        = 15,
	ObjectTypeQuery17                        = 16,
	ObjectTypeQuery18                        = 17,
	ObjectTypeQuery19                        = 18,
	ObjectTypeQuery20                        = 19,
	ObjectTypeQuery21                        = 20,
	ObjectTypeQuery22                        = 21,
	ObjectTypeQuery23                        = 22,
	ObjectTypeQuery24                        = 23,
	ObjectTypeQuery25                        = 24,
	ObjectTypeQuery26                        = 25,
	ObjectTypeQuery27                        = 26,
	ObjectTypeQuery28                        = 27,
	ObjectTypeQuery29                        = 28,
	ObjectTypeQuery30                        = 29,
	ObjectTypeQuery31                        = 30,
	ObjectTypeQuery32                        = 31,
	ObjectTypeQuery_MAX                      = 32,
	EObjectTypeQuery_MAX                     = 33
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 
{
	EDrawDebugTrace::None                    = 0,
	EDrawDebugTrace::ForOneFrame             = 1,
	EDrawDebugTrace::ForDuration             = 2,
	EDrawDebugTrace::Persistent              = 3,
	EDrawDebugTrace::EDrawDebugTrace_MAX     = 4
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 
{
	TraceTypeQuery1                          = 0,
	TraceTypeQuery2                          = 1,
	TraceTypeQuery3                          = 2,
	TraceTypeQuery4                          = 3,
	TraceTypeQuery5                          = 4,
	TraceTypeQuery6                          = 5,
	TraceTypeQuery7                          = 6,
	TraceTypeQuery8                          = 7,
	TraceTypeQuery9                          = 8,
	TraceTypeQuery10                         = 9,
	TraceTypeQuery11                         = 10,
	TraceTypeQuery12                         = 11,
	TraceTypeQuery13                         = 12,
	TraceTypeQuery14                         = 13,
	TraceTypeQuery15                         = 14,
	TraceTypeQuery16                         = 15,
	TraceTypeQuery17                         = 16,
	TraceTypeQuery18                         = 17,
	TraceTypeQuery19                         = 18,
	TraceTypeQuery20                         = 19,
	TraceTypeQuery21                         = 20,
	TraceTypeQuery22                         = 21,
	TraceTypeQuery23                         = 22,
	TraceTypeQuery24                         = 23,
	TraceTypeQuery25                         = 24,
	TraceTypeQuery26                         = 25,
	TraceTypeQuery27                         = 26,
	TraceTypeQuery28                         = 27,
	TraceTypeQuery29                         = 28,
	TraceTypeQuery30                         = 29,
	TraceTypeQuery31                         = 30,
	TraceTypeQuery32                         = 31,
	TraceTypeQuery_MAX                       = 32,
	ETraceTypeQuery_MAX                      = 33
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 
{
	EMoveComponentAction::Move               = 0,
	EMoveComponentAction::Stop               = 1,
	EMoveComponentAction::Return             = 2,
	EMoveComponentAction::EMoveComponentAction_MAX = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 
{
	EQuitPreference::Quit                    = 0,
	EQuitPreference::Background              = 1,
	EQuitPreference::EQuitPreference_MAX     = 2
};

// Enum Engine.EMKReplaySampling
enum class EMKReplaySampling : uint8 
{
	EMKReplaySampling::Not                   = 0,
	EMKReplaySampling::Net                   = 1,
	EMKReplaySampling::NetOnlyRecording      = 2,
	EMKReplaySampling::Client                = 3,
	EMKReplaySampling::ClientOnlyRecording   = 4,
	EMKReplaySampling::EMKReplaySampling_MAX = 5
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 
{
	ROLE_None                                = 0,
	ROLE_SimulatedProxy                      = 1,
	ROLE_AutonomousProxy                     = 2,
	ROLE_Authority                           = 3,
	ROLE_MAX                                 = 4
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 
{
	EAttachLocation::KeepRelativeOffset      = 0,
	EAttachLocation::KeepWorldPosition       = 1,
	EAttachLocation::SnapToTarget            = 2,
	EAttachLocation::SnapToTargetIncludingScale = 3,
	EAttachLocation::EAttachLocation_MAX     = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 
{
	EAttachmentRule::KeepRelative            = 0,
	EAttachmentRule::KeepWorld               = 1,
	EAttachmentRule::SnapToTarget            = 2,
	EAttachmentRule::EAttachmentRule_MAX     = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 
{
	EDetachmentRule::KeepRelative            = 0,
	EDetachmentRule::KeepWorld               = 1,
	EDetachmentRule::EDetachmentRule_MAX     = 2
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 
{
	DORM_Never                               = 0,
	DORM_Awake                               = 1,
	DORM_DormantAll                          = 2,
	DORM_DormantPartial                      = 3,
	DORM_Initial                             = 4,
	DORM_MAX                                 = 5
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 
{
	EAutoReceiveInput::Disabled              = 0,
	EAutoReceiveInput::Player0               = 1,
	EAutoReceiveInput::Player1               = 2,
	EAutoReceiveInput::Player2               = 3,
	EAutoReceiveInput::Player3               = 4,
	EAutoReceiveInput::Player4               = 5,
	EAutoReceiveInput::Player5               = 6,
	EAutoReceiveInput::Player6               = 7,
	EAutoReceiveInput::Player7               = 8,
	EAutoReceiveInput::EAutoReceiveInput_MAX = 9
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 
{
	ESpawnActorCollisionHandlingMethod::Undefined = 0,
	ESpawnActorCollisionHandlingMethod::AlwaysSpawn = 1,
	ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn = 2,
	ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding = 3,
	ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod::ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 
{
	ERotatorQuantization::ByteComponents     = 0,
	ERotatorQuantization::ShortComponents    = 1,
	ERotatorQuantization::ERotatorQuantization_MAX = 2
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 
{
	EVectorQuantization::RoundWholeNumber    = 0,
	EVectorQuantization::RoundOneDecimal     = 1,
	EVectorQuantization::RoundTwoDecimals    = 2,
	EVectorQuantization::CompressedToMinimum = 3,
	EVectorQuantization::EVectorQuantization_MAX = 4
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 
{
	EActorUpdateOverlapsMethod::UseConfigDefault = 0,
	EActorUpdateOverlapsMethod::AlwaysUpdate = 1,
	EActorUpdateOverlapsMethod::OnlyUpdateMovable = 2,
	EActorUpdateOverlapsMethod::NeverUpdate  = 3,
	EActorUpdateOverlapsMethod::EActorUpdateOverlapsMethod_MAX = 4
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 
{
	ECameraAnimPlaySpace::CameraLocal        = 0,
	ECameraAnimPlaySpace::World              = 1,
	ECameraAnimPlaySpace::UserDefined        = 2,
	ECameraAnimPlaySpace::ECameraAnimPlaySpace_MAX = 3
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 
{
	VTBlend_Linear                           = 0,
	VTBlend_Cubic                            = 1,
	VTBlend_EaseIn                           = 2,
	VTBlend_EaseOut                          = 3,
	VTBlend_EaseInOut                        = 4,
	VTBlend_MAX                              = 5
};

// Enum Engine.ETravelType
enum class ETravelType : uint8 
{
	TRAVEL_Absolute                          = 0,
	TRAVEL_Partial                           = 1,
	TRAVEL_Relative                          = 2,
	TRAVEL_MAX                               = 3
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 
{
	ECC_WorldStatic                          = 0,
	ECC_WorldDynamic                         = 1,
	ECC_Pawn                                 = 2,
	ECC_Visibility                           = 3,
	ECC_Camera                               = 4,
	ECC_PhysicsBody                          = 5,
	ECC_Vehicle                              = 6,
	ECC_Destructible                         = 7,
	ECC_EngineTraceChannel1                  = 8,
	ECC_EngineTraceChannel2                  = 9,
	ECC_EngineTraceChannel3                  = 10,
	ECC_EngineTraceChannel4                  = 11,
	ECC_EngineTraceChannel5                  = 12,
	ECC_EngineTraceChannel6                  = 13,
	ECC_GameTraceChannel1                    = 14,
	ECC_GameTraceChannel2                    = 15,
	ECC_GameTraceChannel3                    = 16,
	ECC_GameTraceChannel4                    = 17,
	ECC_GameTraceChannel5                    = 18,
	ECC_GameTraceChannel6                    = 19,
	ECC_GameTraceChannel7                    = 20,
	ECC_GameTraceChannel8                    = 21,
	ECC_GameTraceChannel9                    = 22,
	ECC_GameTraceChannel10                   = 23,
	ECC_GameTraceChannel11                   = 24,
	ECC_GameTraceChannel12                   = 25,
	ECC_GameTraceChannel13                   = 26,
	ECC_GameTraceChannel14                   = 27,
	ECC_GameTraceChannel15                   = 28,
	ECC_GameTraceChannel16                   = 29,
	ECC_GameTraceChannel17                   = 30,
	ECC_GameTraceChannel18                   = 31,
	ECC_OverlapAll_Deprecated                = 32,
	ECC_MAX                                  = 33
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 
{
	EControllerAnalogStick::CAS_LeftStick    = 0,
	EControllerAnalogStick::CAS_RightStick   = 1,
	EControllerAnalogStick::CAS_MAX          = 2
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 
{
	EDynamicForceFeedbackAction::Start       = 0,
	EDynamicForceFeedbackAction::Update      = 1,
	EDynamicForceFeedbackAction::Stop        = 2,
	EDynamicForceFeedbackAction::EDynamicForceFeedbackAction_MAX = 3
};

// Enum Engine.ECameraType
enum class ECameraType : uint8 
{
	ECameraType::FreeCamera                  = 0,
	ECameraType::PlayerCamera                = 1,
	ECameraType::ECameraType_MAX             = 2
};

// Enum Engine.EReplayViewMode
enum class EReplayViewMode : uint8 
{
	EReplayViewMode::DontUsed                = 0,
	EReplayViewMode::Player                  = 1,
	EReplayViewMode::Follow                  = 2,
	EReplayViewMode::EReplayViewMode_MAX     = 3
};

// Enum Engine.EFractureSoundType
enum class EFractureSoundType : uint8 
{
	EFractureSoundType::None                 = 0,
	EFractureSoundType::GlassSmall           = 1,
	EFractureSoundType::GlassLarge           = 2,
	EFractureSoundType::WoodSmall            = 3,
	EFractureSoundType::WoodLarge            = 4,
	EFractureSoundType::Rock                 = 5,
	EFractureSoundType::EFractureSoundType_MAX = 6
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 
{
	EMouseLockMode::DoNotLock                = 0,
	EMouseLockMode::LockOnCapture            = 1,
	EMouseLockMode::LockAlways               = 2,
	EMouseLockMode::LockInFullscreen         = 3,
	EMouseLockMode::EMouseLockMode_MAX       = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 
{
	EWindowTitleBarMode::Overlay             = 0,
	EWindowTitleBarMode::VerticalBox         = 1,
	EWindowTitleBarMode::EWindowTitleBarMode_MAX = 2
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 
{
	TF_Nearest                               = 0,
	TF_Bilinear                              = 1,
	TF_Trilinear                             = 2,
	TF_Default                               = 3,
	TF_MAX                                   = 4
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 
{
	IE_Pressed                               = 0,
	IE_Released                              = 1,
	IE_Repeat                                = 2,
	IE_DoubleClick                           = 3,
	IE_Axis                                  = 4,
	IE_MAX                                   = 5
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8 
{
	RTS_World                                = 0,
	RTS_Actor                                = 1,
	RTS_Component                            = 2,
	RTS_ParentBoneSpace                      = 3,
	RTS_MAX                                  = 4
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 
{
	EComponentMobility::Static               = 0,
	EComponentMobility::Stationary           = 1,
	EComponentMobility::Movable              = 2,
	EComponentMobility::EComponentMobility_MAX = 3
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8 
{
	DM_Low                                   = 0,
	DM_Medium                                = 1,
	DM_High                                  = 2,
	DM_MAX                                   = 3
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 
{
	EAutoPossessAI::Disabled                 = 0,
	EAutoPossessAI::PlacedInWorld            = 1,
	EAutoPossessAI::Spawned                  = 2,
	EAutoPossessAI::PlacedInWorldOrSpawned   = 3,
	EAutoPossessAI::EAutoPossessAI_MAX       = 4
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 
{
	TL_TimelineLength                        = 0,
	TL_LastKeyFrame                          = 1,
	TL_MAX                                   = 2
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 
{
	ENetworkSmoothingMode::Disabled          = 0,
	ENetworkSmoothingMode::Linear            = 1,
	ENetworkSmoothingMode::Exponential       = 2,
	ENetworkSmoothingMode::Replay            = 3,
	ENetworkSmoothingMode::ENetworkSmoothingMode_MAX = 4
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8 
{
	EReflectedAndRefractedRayTracedShadows::Disabled = 0,
	EReflectedAndRefractedRayTracedShadows::Hard_shadows = 1,
	EReflectedAndRefractedRayTracedShadows::Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows::EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 
{
	ETranslucencyType::Raster                = 0,
	ETranslucencyType::RayTracing            = 1,
	ETranslucencyType::ETranslucencyType_MAX = 2
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8 
{
	EReflectionsType::ScreenSpace            = 0,
	EReflectionsType::RayTracing             = 1,
	EReflectionsType::EReflectionsType_MAX   = 2
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8 
{
	ERayTracingGlobalIlluminationType::Disabled = 0,
	ERayTracingGlobalIlluminationType::BruteForce = 1,
	ERayTracingGlobalIlluminationType::FinalGather = 2,
	ERayTracingGlobalIlluminationType::ERayTracingGlobalIlluminationType_MAX = 3
};

// Enum Engine.EFilmicTonemapperType
enum class EFilmicTonemapperType : uint8 
{
	EFilmicTonemapperType::EngineDefault     = 0,
	EFilmicTonemapperType::Disable           = 1,
	EFilmicTonemapperType::Enable            = 2,
	EFilmicTonemapperType::EFilmicTonemapperType_MAX = 3
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 
{
	AEM_Histogram                            = 0,
	AEM_Basic                                = 1,
	AEM_Manual                               = 2,
	AEM_MAX                                  = 3
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 
{
	BM_SOG                                   = 0,
	BM_FFT                                   = 1,
	BM_MAX                                   = 2
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 
{
	SurfaceType_Default                      = 0,
	SurfaceType1                             = 1,
	SurfaceType2                             = 2,
	SurfaceType3                             = 3,
	SurfaceType4                             = 4,
	SurfaceType5                             = 5,
	SurfaceType6                             = 6,
	SurfaceType7                             = 7,
	SurfaceType8                             = 8,
	SurfaceType9                             = 9,
	SurfaceType10                            = 10,
	SurfaceType11                            = 11,
	SurfaceType12                            = 12,
	SurfaceType13                            = 13,
	SurfaceType14                            = 14,
	SurfaceType15                            = 15,
	SurfaceType16                            = 16,
	SurfaceType17                            = 17,
	SurfaceType18                            = 18,
	SurfaceType19                            = 19,
	SurfaceType20                            = 20,
	SurfaceType21                            = 21,
	SurfaceType22                            = 22,
	SurfaceType23                            = 23,
	SurfaceType24                            = 24,
	SurfaceType25                            = 25,
	SurfaceType26                            = 26,
	SurfaceType27                            = 27,
	SurfaceType28                            = 28,
	SurfaceType29                            = 29,
	SurfaceType30                            = 30,
	SurfaceType31                            = 31,
	SurfaceType32                            = 32,
	SurfaceType33                            = 33,
	SurfaceType34                            = 34,
	SurfaceType35                            = 35,
	SurfaceType36                            = 36,
	SurfaceType37                            = 37,
	SurfaceType38                            = 38,
	SurfaceType39                            = 39,
	SurfaceType40                            = 40,
	SurfaceType41                            = 41,
	SurfaceType42                            = 42,
	SurfaceType43                            = 43,
	SurfaceType44                            = 44,
	SurfaceType45                            = 45,
	SurfaceType46                            = 46,
	SurfaceType47                            = 47,
	SurfaceType48                            = 48,
	SurfaceType49                            = 49,
	SurfaceType50                            = 50,
	SurfaceType51                            = 51,
	SurfaceType52                            = 52,
	SurfaceType53                            = 53,
	SurfaceType54                            = 54,
	SurfaceType55                            = 55,
	SurfaceType56                            = 56,
	SurfaceType57                            = 57,
	SurfaceType58                            = 58,
	SurfaceType59                            = 59,
	SurfaceType60                            = 60,
	SurfaceType61                            = 61,
	SurfaceType62                            = 62,
	SurfaceType_Max                          = 63,
	EPhysicalSurface_MAX                     = 64
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8 
{
	EFastArraySerializerDeltaFlags::None     = 0,
	EFastArraySerializerDeltaFlags::HasBeenSerialized = 1,
	EFastArraySerializerDeltaFlags::HasDeltaBeenRequested = 2,
	EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags::EFastArraySerializerDeltaFlags_MAX = 5
};

// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8 
{
	RIF_Constant                             = 0,
	RIF_Linear                               = 1,
	RIF_MAX                                  = 2
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 
{
	BLEND_Opaque                             = 0,
	BLEND_Masked                             = 1,
	BLEND_Translucent                        = 2,
	BLEND_Additive                           = 3,
	BLEND_Modulate                           = 4,
	BLEND_AlphaComposite                     = 5,
	BLEND_AlphaHoldout                       = 6,
	BLEND_MAX                                = 7
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 
{
	RCCE_Cycle                               = 0,
	RCCE_CycleWithOffset                     = 1,
	RCCE_Oscillate                           = 2,
	RCCE_Linear                              = 3,
	RCCE_Constant                            = 4,
	RCCE_None                                = 5,
	RCCE_MAX                                 = 6
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 
{
	RCTWM_WeightedNone                       = 0,
	RCTWM_WeightedArrive                     = 1,
	RCTWM_WeightedLeave                      = 2,
	RCTWM_WeightedBoth                       = 3,
	RCTWM_MAX                                = 4
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 
{
	RCTM_Auto                                = 0,
	RCTM_User                                = 1,
	RCTM_Break                               = 2,
	RCTM_None                                = 3,
	RCTM_MAX                                 = 4
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 
{
	RCIM_Linear                              = 0,
	RCIM_Constant                            = 1,
	RCIM_Cubic                               = 2,
	RCIM_None                                = 3,
	RCIM_MAX                                 = 4
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 
{
	ECollisionEnabled::NoCollision           = 0,
	ECollisionEnabled::QueryOnly             = 1,
	ECollisionEnabled::PhysicsOnly           = 2,
	ECollisionEnabled::QueryAndPhysics       = 3,
	ECollisionEnabled::ECollisionEnabled_MAX = 4
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 
{
	ECR_Ignore                               = 0,
	ECR_Overlap                              = 1,
	ECR_Block                                = 2,
	ECR_MAX                                  = 3
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 
{
	WalkableSlope_Default                    = 0,
	WalkableSlope_Increase                   = 1,
	WalkableSlope_Decrease                   = 2,
	WalkableSlope_Unwalkable                 = 3,
	WalkableSlope_Max                        = 4
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 
{
	EDOFMode::Default                        = 0,
	EDOFMode::SixDOF                         = 1,
	EDOFMode::YZPlane                        = 2,
	EDOFMode::XZPlane                        = 3,
	EDOFMode::XYPlane                        = 4,
	EDOFMode::CustomPlane                    = 5,
	EDOFMode::None                           = 6,
	EDOFMode::EDOFMode_MAX                   = 7
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 
{
	ERendererStencilMask::ERSM_Default       = 0,
	ERendererStencilMask::ERSM_256           = 1,
	ERendererStencilMask::ERSM_2             = 2,
	ERendererStencilMask::ERSM_3             = 3,
	ERendererStencilMask::ERSM_5             = 4,
	ERendererStencilMask::ERSM_9             = 5,
	ERendererStencilMask::ERSM_17            = 6,
	ERendererStencilMask::ERSM_33            = 7,
	ERendererStencilMask::ERSM_65            = 8,
	ERendererStencilMask::ERSM_129           = 9,
	ERendererStencilMask::ERSM_MAX           = 10
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 
{
	ESleepFamily::Normal                     = 0,
	ESleepFamily::Sensitive                  = 1,
	ESleepFamily::Custom                     = 2,
	ESleepFamily::ESleepFamily_MAX           = 3
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8 
{
	ERuntimeVirtualTextureMainPassType::Never = 0,
	ERuntimeVirtualTextureMainPassType::Exclusive = 1,
	ERuntimeVirtualTextureMainPassType::Always = 2,
	ERuntimeVirtualTextureMainPassType::ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 
{
	ECB_No                                   = 0,
	ECB_Yes                                  = 1,
	ECB_Owner                                = 2,
	ECB_MAX                                  = 3
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 
{
	EHasCustomNavigableGeometry::No          = 0,
	EHasCustomNavigableGeometry::Yes         = 1,
	EHasCustomNavigableGeometry::EvenIfNotCollidable = 2,
	EHasCustomNavigableGeometry::DontExport  = 3,
	EHasCustomNavigableGeometry::EHasCustomNavigableGeometry_MAX = 4
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 
{
	ELightmapType::Default                   = 0,
	ELightmapType::ForceSurface              = 1,
	ELightmapType::ForceVolumetric           = 2,
	ELightmapType::ELightmapType_MAX         = 3
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 
{
	ILCQ_Off                                 = 0,
	ILCQ_Point                               = 1,
	ILCQ_Volume                              = 2,
	ILCQ_MAX                                 = 3
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 
{
	SDPG_World                               = 0,
	SDPG_Foreground                          = 1,
	SDPG_MAX                                 = 2
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 
{
	EAlphaBlendOption::Linear                = 0,
	EAlphaBlendOption::Cubic                 = 1,
	EAlphaBlendOption::HermiteCubic          = 2,
	EAlphaBlendOption::Sinusoidal            = 3,
	EAlphaBlendOption::QuadraticInOut        = 4,
	EAlphaBlendOption::CubicInOut            = 5,
	EAlphaBlendOption::QuarticInOut          = 6,
	EAlphaBlendOption::QuinticInOut          = 7,
	EAlphaBlendOption::CircularIn            = 8,
	EAlphaBlendOption::CircularOut           = 9,
	EAlphaBlendOption::CircularInOut         = 10,
	EAlphaBlendOption::ExpIn                 = 11,
	EAlphaBlendOption::ExpOut                = 12,
	EAlphaBlendOption::ExpInOut              = 13,
	EAlphaBlendOption::Custom                = 14,
	EAlphaBlendOption::EAlphaBlendOption_MAX = 15
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 
{
	EAnimGroupRole::CanBeLeader              = 0,
	EAnimGroupRole::AlwaysFollower           = 1,
	EAnimGroupRole::AlwaysLeader             = 2,
	EAnimGroupRole::TransitionLeader         = 3,
	EAnimGroupRole::TransitionFollower       = 4,
	EAnimGroupRole::EAnimGroupRole_MAX       = 5
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 
{
	EPreviewAnimationBlueprintApplicationMethod::LinkedLayers = 0,
	EPreviewAnimationBlueprintApplicationMethod::LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod::EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 
{
	AKF_ConstantKeyLerp                      = 0,
	AKF_VariableKeyLerp                      = 1,
	AKF_PerTrackCompression                  = 2,
	AKF_MAX                                  = 3
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8 
{
	ERawCurveTrackTypes::RCT_Float           = 0,
	ERawCurveTrackTypes::RCT_Vector          = 1,
	ERawCurveTrackTypes::RCT_Transform       = 2,
	ERawCurveTrackTypes::RCT_MAX             = 3
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 
{
	AACF_NONE                                = 0,
	AACF_DriveMorphTarget_DEPRECATED         = 1,
	AACF_DriveAttribute_DEPRECATED           = 2,
	AACF_Editable                            = 4,
	AACF_DriveMaterial_DEPRECATED            = 8,
	AACF_Metadata                            = 16,
	AACF_DriveTrack                          = 32,
	AACF_Disabled                            = 64,
	AACF_MAX                                 = 65
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 
{
	ACF_None                                 = 0,
	ACF_Float96NoW                           = 1,
	ACF_Fixed48NoW                           = 2,
	ACF_IntervalFixed32NoW                   = 3,
	ACF_Fixed32NoW                           = 4,
	ACF_Float32NoW                           = 5,
	ACF_Identity                             = 6,
	ACF_MAX                                  = 7
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 
{
	ABPT_None                                = 0,
	ABPT_RefPose                             = 1,
	ABPT_AnimScaled                          = 2,
	ABPT_AnimFrame                           = 3,
	ABPT_MAX                                 = 4
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8 
{
	ERootMotionMode::NoRootMotionExtraction  = 0,
	ERootMotionMode::IgnoreRootMotion        = 1,
	ERootMotionMode::RootMotionFromEverything = 2,
	ERootMotionMode::RootMotionFromMontagesOnly = 3,
	ERootMotionMode::ERootMotionMode_MAX     = 4
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 
{
	ERootMotionRootLock::RefPose             = 0,
	ERootMotionRootLock::AnimFirstFrame      = 1,
	ERootMotionRootLock::Zero                = 2,
	ERootMotionRootLock::ERootMotionRootLock_MAX = 3
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 
{
	EMontagePlayReturnType::MontageLength    = 0,
	EMontagePlayReturnType::Duration         = 1,
	EMontagePlayReturnType::EMontagePlayReturnType_MAX = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 
{
	EDrawDebugItemType::DirectionalArrow     = 0,
	EDrawDebugItemType::Sphere               = 1,
	EDrawDebugItemType::Line                 = 2,
	EDrawDebugItemType::OnScreenMessage      = 3,
	EDrawDebugItemType::CoordinateSystem     = 4,
	EDrawDebugItemType::EDrawDebugItemType_MAX = 5
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 
{
	EAnimLinkMethod::Absolute                = 0,
	EAnimLinkMethod::Relative                = 1,
	EAnimLinkMethod::Proportional            = 2,
	EAnimLinkMethod::EAnimLinkMethod_MAX     = 3
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 
{
	EMontageSubStepResult::Moved             = 0,
	EMontageSubStepResult::NotMoved          = 1,
	EMontageSubStepResult::InvalidSection    = 2,
	EMontageSubStepResult::InvalidMontage    = 3,
	EMontageSubStepResult::EMontageSubStepResult_MAX = 4
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 
{
	EAnimNotifyEventType::Begin              = 0,
	EAnimNotifyEventType::End                = 1,
	EAnimNotifyEventType::EAnimNotifyEventType_MAX = 2
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 
{
	EInertializationSpace::Default           = 0,
	EInertializationSpace::WorldSpace        = 1,
	EInertializationSpace::WorldRotation     = 2,
	EInertializationSpace::EInertializationSpace_MAX = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 
{
	EInertializationBoneState::Invalid       = 0,
	EInertializationBoneState::Valid         = 1,
	EInertializationBoneState::Excluded      = 2,
	EInertializationBoneState::EInertializationBoneState_MAX = 3
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 
{
	EInertializationState::Inactive          = 0,
	EInertializationState::Pending           = 1,
	EInertializationState::Active            = 2,
	EInertializationState::EInertializationState_MAX = 3
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 
{
	EEvaluatorMode::EM_Standard              = 0,
	EEvaluatorMode::EM_Freeze                = 1,
	EEvaluatorMode::EM_DelayedFreeze         = 2,
	EEvaluatorMode::EM_MAX                   = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 
{
	EEvaluatorDataSource::EDS_SourcePose     = 0,
	EEvaluatorDataSource::EDS_DestinationPose = 1,
	EEvaluatorDataSource::EDS_MAX            = 2
};

// Enum Engine.ECopyType
enum class ECopyType : uint8 
{
	ECopyType::PlainProperty                 = 0,
	ECopyType::BoolProperty                  = 1,
	ECopyType::StructProperty                = 2,
	ECopyType::ObjectProperty                = 3,
	ECopyType::NameProperty                  = 4,
	ECopyType::ECopyType_MAX                 = 5
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 
{
	EPostCopyOperation::None                 = 0,
	EPostCopyOperation::LogicalNegateBool    = 1,
	EPostCopyOperation::EPostCopyOperation_MAX = 2
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 
{
	EPinHidingMode::NeverAsPin               = 0,
	EPinHidingMode::PinHiddenByDefault       = 1,
	EPinHidingMode::PinShownByDefault        = 2,
	EPinHidingMode::AlwaysAsPin              = 3,
	EPinHidingMode::EPinHidingMode_MAX       = 4
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 
{
	AnimPhysCollisionType::CoM               = 0,
	AnimPhysCollisionType::CustomSphere      = 1,
	AnimPhysCollisionType::InnerSphere       = 2,
	AnimPhysCollisionType::OuterSphere       = 3,
	AnimPhysCollisionType::AnimPhysCollisionType_MAX = 4
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 
{
	AnimPhysTwistAxis::AxisX                 = 0,
	AnimPhysTwistAxis::AxisY                 = 1,
	AnimPhysTwistAxis::AxisZ                 = 2,
	AnimPhysTwistAxis::AnimPhysTwistAxis_MAX = 3
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 
{
	ETAA_Default                             = 0,
	ETAA_Finished                            = 1,
	ETAA_Looped                              = 2,
	ETAA_MAX                                 = 3
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 
{
	ETransitionLogicType::TLT_StandardBlend  = 0,
	ETransitionLogicType::TLT_Inertialization = 1,
	ETransitionLogicType::TLT_Custom         = 2,
	ETransitionLogicType::TLT_MAX            = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 
{
	ETransitionBlendMode::TBM_Linear         = 0,
	ETransitionBlendMode::TBM_Cubic          = 1,
	ETransitionBlendMode::TBM_MAX            = 2
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 
{
	EComponentType::None                     = 0,
	EComponentType::TranslationX             = 1,
	EComponentType::TranslationY             = 2,
	EComponentType::TranslationZ             = 3,
	EComponentType::RotationX                = 4,
	EComponentType::RotationY                = 5,
	EComponentType::RotationZ                = 6,
	EComponentType::Scale                    = 7,
	EComponentType::ScaleX                   = 8,
	EComponentType::ScaleY                   = 9,
	EComponentType::ScaleZ                   = 10,
	EComponentType::EComponentType_MAX       = 11
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 
{
	EAxisOption::X                           = 0,
	EAxisOption::Y                           = 1,
	EAxisOption::Z                           = 2,
	EAxisOption::X_Neg                       = 3,
	EAxisOption::Y_Neg                       = 4,
	EAxisOption::Z_Neg                       = 5,
	EAxisOption::Custom                      = 6,
	EAxisOption::EAxisOption_MAX             = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 
{
	EAnimInterpolationType::Linear           = 0,
	EAnimInterpolationType::Step             = 1,
	EAnimInterpolationType::EAnimInterpolationType_MAX = 2
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 
{
	ECurveBlendOption::Override              = 0,
	ECurveBlendOption::DoNotOverride         = 1,
	ECurveBlendOption::NormalizeByWeight     = 2,
	ECurveBlendOption::BlendByWeight         = 3,
	ECurveBlendOption::UseBasePose           = 4,
	ECurveBlendOption::UseMaxValue           = 5,
	ECurveBlendOption::UseMinValue           = 6,
	ECurveBlendOption::ECurveBlendOption_MAX = 7
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 
{
	AAT_None                                 = 0,
	AAT_LocalSpaceBase                       = 1,
	AAT_RotationOffsetMeshSpace              = 2,
	AAT_MAX                                  = 3
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 
{
	ENotifyFilterType::NoFiltering           = 0,
	ENotifyFilterType::LOD                   = 1,
	ENotifyFilterType::ENotifyFilterType_MAX = 2
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 
{
	EMontageNotifyTickType::Queued           = 0,
	EMontageNotifyTickType::BranchingPoint   = 1,
	EMontageNotifyTickType::EMontageNotifyTickType_MAX = 2
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 
{
	BRS_KeepComponentSpaceRotation           = 0,
	BRS_KeepLocalSpaceRotation               = 1,
	BRS_CopyFromTarget                       = 2,
	BRS_MAX                                  = 3
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 
{
	BCS_WorldSpace                           = 0,
	BCS_ComponentSpace                       = 1,
	BCS_ParentBoneSpace                      = 2,
	BCS_BoneSpace                            = 3,
	BCS_MAX                                  = 4
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 
{
	BA_X                                     = 0,
	BA_Y                                     = 1,
	BA_Z                                     = 2,
	BA_MAX                                   = 3
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 
{
	EPrimaryAssetCookRule::Unknown           = 0,
	EPrimaryAssetCookRule::NeverCook         = 1,
	EPrimaryAssetCookRule::DevelopmentCook   = 2,
	EPrimaryAssetCookRule::DevelopmentAlwaysCook = 3,
	EPrimaryAssetCookRule::AlwaysCook        = 4,
	EPrimaryAssetCookRule::EPrimaryAssetCookRule_MAX = 5
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8 
{
	ENaturalSoundFalloffMode::Continues      = 0,
	ENaturalSoundFalloffMode::Silent         = 1,
	ENaturalSoundFalloffMode::Hold           = 2,
	ENaturalSoundFalloffMode::ENaturalSoundFalloffMode_MAX = 3
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 
{
	EAttenuationShape::Sphere                = 0,
	EAttenuationShape::Capsule               = 1,
	EAttenuationShape::Box                   = 2,
	EAttenuationShape::Cone                  = 3,
	EAttenuationShape::EAttenuationShape_MAX = 4
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 
{
	EAttenuationDistanceModel::Linear        = 0,
	EAttenuationDistanceModel::Logarithmic   = 1,
	EAttenuationDistanceModel::Inverse       = 2,
	EAttenuationDistanceModel::LogReverse    = 3,
	EAttenuationDistanceModel::NaturalSound  = 4,
	EAttenuationDistanceModel::Custom        = 5,
	EAttenuationDistanceModel::EAttenuationDistanceModel_MAX = 6
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 
{
	EAudioFaderCurve::Linear                 = 0,
	EAudioFaderCurve::Logarithmic            = 1,
	EAudioFaderCurve::SCurve                 = 2,
	EAudioFaderCurve::Sin                    = 3,
	EAudioFaderCurve::Count                  = 4,
	EAudioFaderCurve::EAudioFaderCurve_MAX   = 5
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 
{
	EAudioComponentPlayState::Playing        = 0,
	EAudioComponentPlayState::Stopped        = 1,
	EAudioComponentPlayState::Paused         = 2,
	EAudioComponentPlayState::FadingIn       = 3,
	EAudioComponentPlayState::FadingOut      = 4,
	EAudioComponentPlayState::Count          = 5,
	EAudioComponentPlayState::EAudioComponentPlayState_MAX = 6
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 
{
	EAudioOutputTarget::Speaker              = 0,
	EAudioOutputTarget::Controller           = 1,
	EAudioOutputTarget::ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget::EAudioOutputTarget_MAX = 3
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 
{
	EMonoChannelUpmixMethod::Linear          = 0,
	EMonoChannelUpmixMethod::EqualPower      = 1,
	EMonoChannelUpmixMethod::FullVolume      = 2,
	EMonoChannelUpmixMethod::EMonoChannelUpmixMethod_MAX = 3
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 
{
	EPanningMethod::Linear                   = 0,
	EPanningMethod::EqualPower               = 1,
	EPanningMethod::EPanningMethod_MAX       = 2
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : int32 
{
	EVoiceSampleRate::Low16000Hz             = 16000,
	EVoiceSampleRate::Normal24000Hz          = 24000,
	EVoiceSampleRate::EVoiceSampleRate_MAX   = 24001
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 
{
	BL_AfterTonemapping                      = 0,
	BL_BeforeTonemapping                     = 1,
	BL_BeforeTranslucency                    = 2,
	BL_ReplacingTonemapper                   = 3,
	BL_SSRInput                              = 4,
	BL_MAX                                   = 5
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 
{
	ENotifyTriggerMode::AllAnimations        = 0,
	ENotifyTriggerMode::HighestWeightedAnimation = 1,
	ENotifyTriggerMode::None                 = 2,
	ENotifyTriggerMode::ENotifyTriggerMode_MAX = 3
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 
{
	BSA_None                                 = 0,
	BSA_X                                    = 1,
	BSA_Y                                    = 2,
	BSA_Max                                  = 3
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 
{
	EBlueprintNativizationFlag::Disabled     = 0,
	EBlueprintNativizationFlag::Dependency   = 1,
	EBlueprintNativizationFlag::ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag::EBlueprintNativizationFlag_MAX = 3
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 
{
	EBlueprintCompileMode::Default           = 0,
	EBlueprintCompileMode::Development       = 1,
	EBlueprintCompileMode::FinalRelease      = 2,
	EBlueprintCompileMode::EBlueprintCompileMode_MAX = 3
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 
{
	BPTYPE_Normal                            = 0,
	BPTYPE_Const                             = 1,
	BPTYPE_MacroLibrary                      = 2,
	BPTYPE_Interface                         = 3,
	BPTYPE_LevelScript                       = 4,
	BPTYPE_FunctionLibrary                   = 5,
	BPTYPE_MAX                               = 6
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 
{
	BS_Unknown                               = 0,
	BS_Dirty                                 = 1,
	BS_Error                                 = 2,
	BS_UpToDate                              = 3,
	BS_BeingCreated                          = 4,
	BS_UpToDateWithWarnings                  = 5,
	BS_MAX                                   = 6
};

// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8 
{
	EBodyCollisionResponse::BodyCollision_Enabled = 0,
	EBodyCollisionResponse::BodyCollision_Disabled = 1,
	EBodyCollisionResponse::BodyCollision_MAX = 2
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 
{
	PhysType_Default                         = 0,
	PhysType_Kinematic                       = 1,
	PhysType_Simulated                       = 2,
	PhysType_MAX                             = 3
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 
{
	CTF_UseDefault                           = 0,
	CTF_UseSimpleAndComplex                  = 1,
	CTF_UseSimpleAsComplex                   = 2,
	CTF_UseComplexAsSimple                   = 3,
	CTF_MAX                                  = 4
};

// Enum Engine.EBrushType
enum class EBrushType : uint8 
{
	Brush_Default                            = 0,
	Brush_Add                                = 1,
	Brush_Subtract                           = 2,
	Brush_MAX                                = 3
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8 
{
	CSG_Active                               = 0,
	CSG_Add                                  = 1,
	CSG_Subtract                             = 2,
	CSG_Intersect                            = 3,
	CSG_Deintersect                          = 4,
	CSG_None                                 = 5,
	CSG_MAX                                  = 6
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 
{
	EOO_OffsetRandom                         = 0,
	EOO_OffsetZero                           = 1,
	EOO_MAX                                  = 2
};

// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 
{
	EOscillatorWaveform::SineWave            = 0,
	EOscillatorWaveform::PerlinNoise         = 1,
	EOscillatorWaveform::EOscillatorWaveform_MAX = 2
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8 
{
	ECameraShakeAttenuation::Linear          = 0,
	ECameraShakeAttenuation::Quadratic       = 1,
	ECameraShakeAttenuation::ECameraShakeAttenuation_MAX = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 
{
	ECameraAlphaBlendMode::CABM_Linear       = 0,
	ECameraAlphaBlendMode::CABM_Cubic        = 1,
	ECameraAlphaBlendMode::CABM_MAX          = 2
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 
{
	ECameraProjectionMode::Perspective       = 0,
	ECameraProjectionMode::Orthographic      = 1,
	ECameraProjectionMode::ECameraProjectionMode_MAX = 2
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 
{
	CSD_KeyValueReadComplete                 = 0,
	CSD_KeyValueWriteComplete                = 1,
	CSD_ValueChanged                         = 2,
	CSD_DocumentQueryComplete                = 3,
	CSD_DocumentReadComplete                 = 4,
	CSD_DocumentWriteComplete                = 5,
	CSD_DocumentConflictDetected             = 6,
	CSD_MAX                                  = 7
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 
{
	EAngularDriveMode::SLERP                 = 0,
	EAngularDriveMode::TwistAndSwing         = 1,
	EAngularDriveMode::EAngularDriveMode_MAX = 2
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8 
{
	LCM_Free                                 = 0,
	LCM_Limited                              = 1,
	LCM_Locked                               = 2,
	LCM_MAX                                  = 3
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8 
{
	ECurveTableMode::Empty                   = 0,
	ECurveTableMode::SimpleCurves            = 1,
	ECurveTableMode::RichCurves              = 2,
	ECurveTableMode::ECurveTableMode_MAX     = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 
{
	EEvaluateCurveTableResult::RowFound      = 0,
	EEvaluateCurveTableResult::RowNotFound   = 1,
	EEvaluateCurveTableResult::EEvaluateCurveTableResult_MAX = 2
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 
{
	EGrammaticalNumber::Singular             = 0,
	EGrammaticalNumber::Plural               = 1,
	EGrammaticalNumber::EGrammaticalNumber_MAX = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 
{
	EGrammaticalGender::Neuter               = 0,
	EGrammaticalGender::Masculine            = 1,
	EGrammaticalGender::Feminine             = 2,
	EGrammaticalGender::Mixed                = 3,
	EGrammaticalGender::EGrammaticalGender_MAX = 4
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 
{
	DPM_Normal                               = 0,
	DPM_Abs                                  = 1,
	DPM_Direct                               = 2,
	DPM_MAX                                  = 3
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 
{
	EDVMF_Same                               = 0,
	EDVMF_Different                          = 1,
	EDVMF_Mirror                             = 2,
	EDVMF_MAX                                = 3
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 
{
	EDVLF_None                               = 0,
	EDVLF_XY                                 = 1,
	EDVLF_XZ                                 = 2,
	EDVLF_YZ                                 = 3,
	EDVLF_XYZ                                = 4,
	EDVLF_MAX                                = 5
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 
{
	ENodeEnabledState::Enabled               = 0,
	ENodeEnabledState::Disabled              = 1,
	ENodeEnabledState::DevelopmentOnly       = 2,
	ENodeEnabledState::ENodeEnabledState_MAX = 3
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 
{
	ENodeAdvancedPins::NoPins                = 0,
	ENodeAdvancedPins::Shown                 = 1,
	ENodeAdvancedPins::Hidden                = 2,
	ENodeAdvancedPins::ENodeAdvancedPins_MAX = 3
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 
{
	ENodeTitleType::FullTitle                = 0,
	ENodeTitleType::ListView                 = 1,
	ENodeTitleType::EditableTitle            = 2,
	ENodeTitleType::MenuTitle                = 3,
	ENodeTitleType::MAX_TitleTypes           = 4,
	ENodeTitleType::ENodeTitleType_MAX       = 5
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 
{
	EPinContainerType::None                  = 0,
	EPinContainerType::Array                 = 1,
	EPinContainerType::Set                   = 2,
	EPinContainerType::Map                   = 3,
	EPinContainerType::EPinContainerType_MAX = 4
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 
{
	EGPD_Input                               = 0,
	EGPD_Output                              = 1,
	EGPD_MAX                                 = 2
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 
{
	BPST_Original                            = 0,
	BPST_VariantA                            = 1,
	BPST_MAX                                 = 2
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 
{
	CONNECT_RESPONSE_MAKE                    = 0,
	CONNECT_RESPONSE_DISALLOW                = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A          = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B          = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB         = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX                     = 6
};

// Enum Engine.EGraphType
enum class EGraphType : uint8 
{
	GT_Function                              = 0,
	GT_Ubergraph                             = 1,
	GT_Macro                                 = 2,
	GT_Animation                             = 3,
	GT_StateMachine                          = 4,
	GT_MAX                                   = 5
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 
{
	ETransitionType::None                    = 0,
	ETransitionType::Paused                  = 1,
	ETransitionType::Loading                 = 2,
	ETransitionType::Saving                  = 3,
	ETransitionType::Connecting              = 4,
	ETransitionType::Precaching              = 5,
	ETransitionType::WaitingToConnect        = 6,
	ETransitionType::MAX                     = 7
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 
{
	FULLYLOAD_Map                            = 0,
	FULLYLOAD_Game_PreLoadClass              = 1,
	FULLYLOAD_Game_PostLoadClass             = 2,
	FULLYLOAD_Always                         = 3,
	FULLYLOAD_Mutator                        = 4,
	FULLYLOAD_MAX                            = 5
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 
{
	VMI_BrushWireframe                       = 0,
	VMI_Wireframe                            = 1,
	VMI_Unlit                                = 2,
	VMI_Lit                                  = 3,
	VMI_Lit_DetailLighting                   = 4,
	VMI_LightingOnly                         = 5,
	VMI_LightComplexity                      = 6,
	VMI_ShaderComplexity                     = 8,
	VMI_LightmapDensity                      = 9,
	VMI_LitLightmapDensity                   = 10,
	VMI_ReflectionOverride                   = 11,
	VMI_VisualizeBuffer                      = 12,
	VMI_StationaryLightOverlap               = 14,
	VMI_CollisionPawn                        = 15,
	VMI_CollisionVisibility                  = 16,
	VMI_LODColoration                        = 18,
	VMI_QuadOverdraw                         = 19,
	VMI_PrimitiveDistanceAccuracy            = 20,
	VMI_MeshUVDensityAccuracy                = 21,
	VMI_ShaderComplexityWithQuadOverdraw     = 22,
	VMI_HLODColoration                       = 23,
	VMI_GroupLODColoration                   = 24,
	VMI_MaterialTextureScaleAccuracy         = 25,
	VMI_RequiredTextureResolution            = 26,
	VMI_PathTracing                          = 27,
	VMI_RayTracingDebug                      = 28,
	VMI_Max                                  = 29,
	VMI_Unknown                              = 255
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 
{
	EDemoPlayFailure::Generic                = 0,
	EDemoPlayFailure::DemoNotFound           = 1,
	EDemoPlayFailure::Corrupt                = 2,
	EDemoPlayFailure::InvalidVersion         = 3,
	EDemoPlayFailure::InitBase               = 4,
	EDemoPlayFailure::GameSpecificHeader     = 5,
	EDemoPlayFailure::ReplayStreamerInternal = 6,
	EDemoPlayFailure::LoadMap                = 7,
	EDemoPlayFailure::Serialization          = 8,
	EDemoPlayFailure::EDemoPlayFailure_MAX   = 9
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 
{
	ENetworkLagState::NotLagging             = 0,
	ENetworkLagState::Lagging                = 1,
	ENetworkLagState::ENetworkLagState_MAX   = 2
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 
{
	EMouseCaptureMode::NoCapture             = 0,
	EMouseCaptureMode::CapturePermanently    = 1,
	EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown = 2,
	EMouseCaptureMode::CaptureDuringMouseDown = 3,
	EMouseCaptureMode::CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode::EMouseCaptureMode_MAX = 5
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 
{
	ECustomTimeStepSynchronizationState::Closed = 0,
	ECustomTimeStepSynchronizationState::Error = 1,
	ECustomTimeStepSynchronizationState::Synchronized = 2,
	ECustomTimeStepSynchronizationState::Synchronizing = 3,
	ECustomTimeStepSynchronizationState::ECustomTimeStepSynchronizationState_MAX = 4
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 
{
	EMeshBufferAccess::Default               = 0,
	EMeshBufferAccess::ForceCPUAndGPU        = 1,
	EMeshBufferAccess::EMeshBufferAccess_MAX = 2
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 
{
	EConstraintFrame::Frame1                 = 0,
	EConstraintFrame::Frame2                 = 1,
	EConstraintFrame::EConstraintFrame_MAX   = 2
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8 
{
	ACM_Free                                 = 0,
	ACM_Limited                              = 1,
	ACM_Locked                               = 2,
	ACM_MAX                                  = 3
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 
{
	EComponentSocketType::Invalid            = 0,
	EComponentSocketType::Bone               = 1,
	EComponentSocketType::Socket             = 2,
	EComponentSocketType::EComponentSocketType_MAX = 3
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8 
{
	EPhysicalMaterialMaskColor::Red          = 0,
	EPhysicalMaterialMaskColor::Green        = 1,
	EPhysicalMaterialMaskColor::Blue         = 2,
	EPhysicalMaterialMaskColor::Cyan         = 3,
	EPhysicalMaterialMaskColor::Magenta      = 4,
	EPhysicalMaterialMaskColor::Yellow       = 5,
	EPhysicalMaterialMaskColor::White        = 6,
	EPhysicalMaterialMaskColor::Black        = 7,
	EPhysicalMaterialMaskColor::MAX          = 8
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 
{
	EUpdateRateShiftBucket::ShiftBucket0     = 0,
	EUpdateRateShiftBucket::ShiftBucket1     = 1,
	EUpdateRateShiftBucket::ShiftBucket2     = 2,
	EUpdateRateShiftBucket::ShiftBucket3     = 3,
	EUpdateRateShiftBucket::ShiftBucket4     = 4,
	EUpdateRateShiftBucket::ShiftBucket5     = 5,
	EUpdateRateShiftBucket::ShiftBucketMax   = 6,
	EUpdateRateShiftBucket::EUpdateRateShiftBucket_MAX = 7
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 
{
	SMF_None                                 = 0,
	SMF_Streamed                             = 1,
	SMF_MAX                                  = 2
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 
{
	LMPT_NormalPadding                       = 0,
	LMPT_PrePadding                          = 1,
	LMPT_NoPadding                           = 2,
	LMPT_MAX                                 = 3
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 
{
	ETS_EventSignature                       = 0,
	ETS_FloatSignature                       = 1,
	ETS_VectorSignature                      = 2,
	ETS_LinearColorSignature                 = 3,
	ETS_InvalidSignature                     = 4,
	ETS_MAX                                  = 5
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 
{
	BSIT_Average                             = 0,
	BSIT_Linear                              = 1,
	BSIT_Cubic                               = 2,
	BSIT_MAX                                 = 3
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 
{
	OverlapFilter_All                        = 0,
	OverlapFilter_DynamicOnly                = 1,
	OverlapFilter_StaticOnly                 = 2,
	OverlapFilter_MAX                        = 3
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 
{
	Quality_Preview                          = 0,
	Quality_Medium                           = 1,
	Quality_High                             = 2,
	Quality_Production                       = 3,
	Quality_MAX                              = 4
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8 
{
	MSC_Less                                 = 0,
	MSC_LessEqual                            = 1,
	MSC_Greater                              = 2,
	MSC_GreaterEqual                         = 3,
	MSC_Equal                                = 4,
	MSC_NotEqual                             = 5,
	MSC_Never                                = 6,
	MSC_Always                               = 7,
	MSC_Count                                = 8,
	MSC_MAX                                  = 9
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 
{
	SAMPLERTYPE_Color                        = 0,
	SAMPLERTYPE_Grayscale                    = 1,
	SAMPLERTYPE_Alpha                        = 2,
	SAMPLERTYPE_Normal                       = 3,
	SAMPLERTYPE_Masks                        = 4,
	SAMPLERTYPE_DistanceFieldFont            = 5,
	SAMPLERTYPE_LinearColor                  = 6,
	SAMPLERTYPE_LinearGrayscale              = 7,
	SAMPLERTYPE_Data                         = 8,
	SAMPLERTYPE_External                     = 9,
	SAMPLERTYPE_VirtualColor                 = 10,
	SAMPLERTYPE_VirtualGrayscale             = 11,
	SAMPLERTYPE_VirtualAlpha                 = 12,
	SAMPLERTYPE_VirtualNormal                = 13,
	SAMPLERTYPE_VirtualMasks                 = 14,
	SAMPLERTYPE_VirtualLinearColor           = 15,
	SAMPLERTYPE_VirtualLinearGrayscale       = 16,
	SAMPLERTYPE_MAX                          = 17
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8 
{
	MTM_NoTessellation                       = 0,
	MTM_FlatTessellation                     = 1,
	MTM_PNTriangles                          = 2,
	MTM_MAX                                  = 3
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 
{
	MSM_Unlit                                = 0,
	MSM_DefaultLit                           = 1,
	MSM_Subsurface                           = 2,
	MSM_PreintegratedSkin                    = 3,
	MSM_ClearCoat                            = 4,
	MSM_SubsurfaceProfile                    = 5,
	MSM_TwoSidedFoliage                      = 6,
	MSM_Hair                                 = 7,
	MSM_Cloth                                = 8,
	MSM_Eye                                  = 9,
	MSM_SingleLayerWater                     = 10,
	MSM_ThinTranslucent                      = 11,
	MSM_Bark                                 = 12,
	MSM_NUM                                  = 13,
	MSM_FromMaterialExpression               = 14,
	MSM_MAX                                  = 15
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 
{
	EParticleCollisionMode::SceneDepth       = 0,
	EParticleCollisionMode::DistanceField    = 1,
	EParticleCollisionMode::EParticleCollisionMode_MAX = 2
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 
{
	ETrailWidthMode_FromCentre               = 0,
	ETrailWidthMode_FromFirst                = 1,
	ETrailWidthMode_FromSecond               = 2,
	ETrailWidthMode_MAX                      = 3
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 
{
	EGBufferFormat::Force8BitsPerChannel     = 0,
	EGBufferFormat::Default                  = 1,
	EGBufferFormat::HighPrecisionNormals     = 3,
	EGBufferFormat::Force16BitsPerChannel    = 5,
	EGBufferFormat::EGBufferFormat_MAX       = 6
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 
{
	SCCM_Overwrite                           = 0,
	SCCM_Additive                            = 1,
	SCCM_Composite                           = 2,
	SCCM_MAX                                 = 3
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 
{
	SCS_SceneColorHDR                        = 0,
	SCS_SceneColorHDRNoAlpha                 = 1,
	SCS_FinalColorLDR                        = 2,
	SCS_SceneColorSceneDepth                 = 3,
	SCS_SceneDepth                           = 4,
	SCS_DeviceDepth                          = 5,
	SCS_Normal                               = 6,
	SCS_BaseColor                            = 7,
	SCS_FinalColorHDR                        = 8,
	SCS_FinalToneCurveHDR                    = 9,
	SCS_MAX                                  = 10
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 
{
	ETranslucentSortPolicy::SortByDistance   = 0,
	ETranslucentSortPolicy::SortByProjectedZ = 1,
	ETranslucentSortPolicy::SortAlongAxis    = 2,
	ETranslucentSortPolicy::ETranslucentSortPolicy_MAX = 3
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8 
{
	RM_IndexOfRefraction                     = 0,
	RM_PixelNormalOffset                     = 1,
	RM_MAX                                   = 2
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 
{
	TLM_VolumetricNonDirectional             = 0,
	TLM_VolumetricDirectional                = 1,
	TLM_VolumetricPerVertexNonDirectional    = 2,
	TLM_VolumetricPerVertexDirectional       = 3,
	TLM_Surface                              = 4,
	TLM_SurfacePerPixelLighting              = 5,
	TLM_MAX                                  = 6
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 
{
	SSM_FromTextureAsset                     = 0,
	SSM_Wrap_WorldGroupSettings              = 1,
	SSM_Clamp_WorldGroupSettings             = 2,
	SSM_MAX                                  = 3
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 
{
	OCM_Minimum                              = 0,
	OCM_Multiply                             = 1,
	OCM_MAX                                  = 2
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 
{
	AspectRatio_MaintainYFOV                 = 0,
	AspectRatio_MaintainXFOV                 = 1,
	AspectRatio_MajorAxisFOV                 = 2,
	AspectRatio_MAX                          = 3
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 
{
	EFontCacheType::Offline                  = 0,
	EFontCacheType::Runtime                  = 1,
	EFontCacheType::EFontCacheType_MAX       = 2
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 
{
	FontICS_Default                          = 0,
	FontICS_Ansi                             = 1,
	FontICS_Symbol                           = 2,
	FontICS_MAX                              = 3
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8 
{
	STDBY_Rx                                 = 0,
	STDBY_Tx                                 = 1,
	STDBY_BadPing                            = 2,
	STDBY_MAX                                = 3
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 
{
	ESuggestProjVelocityTraceOption::DoNotTrace = 0,
	ESuggestProjVelocityTraceOption::TraceFullPath = 1,
	ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption::ESuggestProjVelocityTraceOption_MAX = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 
{
	EWindowMode::Fullscreen                  = 0,
	EWindowMode::WindowedFullscreen          = 1,
	EWindowMode::Windowed                    = 2,
	EWindowMode::EWindowMode_MAX             = 3
};

// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8 
{
	HPP_World                                = 0,
	HPP_Wireframe                            = 1,
	HPP_Foreground                           = 2,
	HPP_UI                                   = 3,
	HPP_MAX                                  = 4
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 
{
	EImportanceWeight::Luminance             = 0,
	EImportanceWeight::Red                   = 1,
	EImportanceWeight::Green                 = 2,
	EImportanceWeight::Blue                  = 3,
	EImportanceWeight::Alpha                 = 4,
	EImportanceWeight::EImportanceWeight_MAX = 5
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 
{
	AMD_ClickedBanner                        = 0,
	AMD_UserClosedAd                         = 1,
	AMD_MAX                                  = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 
{
	EAnimAlphaInputType::Float               = 0,
	EAnimAlphaInputType::Bool                = 1,
	EAnimAlphaInputType::Curve               = 2,
	EAnimAlphaInputType::EAnimAlphaInputType_MAX = 3
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8 
{
	ETAC_Always                              = 0,
	ETAC_GoreEnabled                         = 1,
	ETAC_GoreDisabled                        = 2,
	ETAC_MAX                                 = 3
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8 
{
	IMR_Keyframed                            = 0,
	IMR_LookAtGroup                          = 1,
	IMR_Ignore                               = 2,
	IMR_MAX                                  = 3
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8 
{
	AXIS_TranslationX                        = 0,
	AXIS_TranslationY                        = 1,
	AXIS_TranslationZ                        = 2,
	AXIS_RotationX                           = 3,
	AXIS_RotationY                           = 4,
	AXIS_RotationZ                           = 5,
	AXIS_MAX                                 = 6
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8 
{
	ETTA_Off                                 = 0,
	ETTA_On                                  = 1,
	ETTA_Toggle                              = 2,
	ETTA_Trigger                             = 3,
	ETTA_MAX                                 = 4
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8 
{
	EVTC_Always                              = 0,
	EVTC_GoreEnabled                         = 1,
	EVTC_GoreDisabled                        = 2,
	EVTC_MAX                                 = 3
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8 
{
	EVTA_Hide                                = 0,
	EVTA_Show                                = 1,
	EVTA_Toggle                              = 2,
	EVTA_MAX                                 = 3
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 
{
	ESlateGesture::None                      = 0,
	ESlateGesture::Scroll                    = 1,
	ESlateGesture::Magnify                   = 2,
	ESlateGesture::Swipe                     = 3,
	ESlateGesture::Rotate                    = 4,
	ESlateGesture::LongPress                 = 5,
	ESlateGesture::ESlateGesture_MAX         = 6
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 
{
	EMatrixColumns::First                    = 0,
	EMatrixColumns::Second                   = 1,
	EMatrixColumns::Third                    = 2,
	EMatrixColumns::Fourth                   = 3,
	EMatrixColumns::EMatrixColumns_MAX       = 4
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 
{
	ELerpInterpolationMode::QuatInterp       = 0,
	ELerpInterpolationMode::EulerInterp      = 1,
	ELerpInterpolationMode::DualQuatInterp   = 2,
	ELerpInterpolationMode::ELerpInterpolationMode_MAX = 3
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 
{
	EEasingFunc::Linear                      = 0,
	EEasingFunc::Step                        = 1,
	EEasingFunc::SinusoidalIn                = 2,
	EEasingFunc::SinusoidalOut               = 3,
	EEasingFunc::SinusoidalInOut             = 4,
	EEasingFunc::EaseIn                      = 5,
	EEasingFunc::EaseOut                     = 6,
	EEasingFunc::EaseInOut                   = 7,
	EEasingFunc::ExpoIn                      = 8,
	EEasingFunc::ExpoOut                     = 9,
	EEasingFunc::ExpoInOut                   = 10,
	EEasingFunc::CircularIn                  = 11,
	EEasingFunc::CircularOut                 = 12,
	EEasingFunc::CircularInOut               = 13,
	EEasingFunc::EEasingFunc_MAX             = 14
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 
{
	HalfToEven                               = 0,
	HalfFromZero                             = 1,
	HalfToZero                               = 2,
	FromZero                                 = 3,
	ToZero                                   = 4,
	ToNegativeInfinity                       = 5,
	ToPositiveInfinity                       = 6,
	ERoundingMode_MAX                        = 7
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 
{
	SVB_Loading                              = 0,
	SVB_LoadingAndVisibility                 = 1,
	SVB_VisibilityBlockingOnLoad             = 2,
	SVB_BlockingOnLoad                       = 3,
	SVB_LoadingNotVisible                    = 4,
	SVB_MAX                                  = 5
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 
{
	MDR_None                                 = 0,
	MDR_ColorNormalRoughness                 = 1,
	MDR_Color                                = 2,
	MDR_ColorNormal                          = 3,
	MDR_ColorRoughness                       = 4,
	MDR_Normal                               = 5,
	MDR_NormalRoughness                      = 6,
	MDR_Roughness                            = 7,
	MDR_MAX                                  = 8
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 
{
	DBM_Translucent                          = 0,
	DBM_Stain                                = 1,
	DBM_Normal                               = 2,
	DBM_Emissive                             = 3,
	DBM_DBuffer_ColorNormalRoughness         = 4,
	DBM_DBuffer_Color                        = 5,
	DBM_DBuffer_ColorNormal                  = 6,
	DBM_DBuffer_ColorRoughness               = 7,
	DBM_DBuffer_Normal                       = 8,
	DBM_DBuffer_NormalRoughness              = 9,
	DBM_DBuffer_Roughness                    = 10,
	DBM_DBuffer_Emissive                     = 11,
	DBM_DBuffer_AlphaComposite               = 12,
	DBM_DBuffer_EmissiveAlphaComposite       = 13,
	DBM_Volumetric_DistanceFunction          = 14,
	DBM_AlphaComposite                       = 15,
	DBM_AmbientOcclusion                     = 16,
	DBM_MAX                                  = 17
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 
{
	TCC_Red                                  = 0,
	TCC_Green                                = 1,
	TCC_Blue                                 = 2,
	TCC_Alpha                                = 3,
	TCC_MAX                                  = 4
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 
{
	EMaterialAttributeBlend::Blend           = 0,
	EMaterialAttributeBlend::UseA            = 1,
	EMaterialAttributeBlend::UseB            = 2,
	EMaterialAttributeBlend::EMaterialAttributeBlend_MAX = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 
{
	EChannelMaskParameterColor::Red          = 0,
	EChannelMaskParameterColor::Green        = 1,
	EChannelMaskParameterColor::Blue         = 2,
	EChannelMaskParameterColor::Alpha        = 3,
	EChannelMaskParameterColor::EChannelMaskParameterColor_MAX = 4
};

// Enum Engine.EClampMode
enum class EClampMode : uint8 
{
	CMODE_Clamp                              = 0,
	CMODE_ClampMin                           = 1,
	CMODE_ClampMax                           = 2,
	CMODE_MAX                                = 3
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 
{
	CMOT_Float1                              = 0,
	CMOT_Float2                              = 1,
	CMOT_Float3                              = 2,
	CMOT_Float4                              = 3,
	CMOT_MAX                                 = 4
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 
{
	TDOF_NearAndFarMask                      = 0,
	TDOF_NearMask                            = 1,
	TDOF_FarMask                             = 2,
	TDOF_CircleOfConfusionRadius             = 3,
	TDOF_MAX                                 = 4
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 
{
	FunctionInput_Scalar                     = 0,
	FunctionInput_Vector2                    = 1,
	FunctionInput_Vector3                    = 2,
	FunctionInput_Vector4                    = 3,
	FunctionInput_Texture2D                  = 4,
	FunctionInput_TextureCube                = 5,
	FunctionInput_Texture2DArray             = 6,
	FunctionInput_VolumeTexture              = 7,
	FunctionInput_StaticBool                 = 8,
	FunctionInput_MaterialAttributes         = 9,
	FunctionInput_TextureExternal            = 10,
	FunctionInput_MAX                        = 11
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 
{
	NOISEFUNCTION_SimplexTex                 = 0,
	NOISEFUNCTION_GradientTex                = 1,
	NOISEFUNCTION_GradientTex3D              = 2,
	NOISEFUNCTION_GradientALU                = 3,
	NOISEFUNCTION_ValueALU                   = 4,
	NOISEFUNCTION_VoronoiALU                 = 5,
	NOISEFUNCTION_MAX                        = 6
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8 
{
	RVTMVM_None                              = 0,
	RVTMVM_MipLevel                          = 1,
	RVTMVM_MipBias                           = 2,
	RVTMVM_MAX                               = 3
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 
{
	EMaterialSceneAttributeInputMode::Coordinates = 0,
	EMaterialSceneAttributeInputMode::OffsetFraction = 1,
	EMaterialSceneAttributeInputMode::EMaterialSceneAttributeInputMode_MAX = 2
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 
{
	STLOD_Pop                                = 0,
	STLOD_Smooth                             = 1,
	STLOD_MAX                                = 2
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 
{
	STW_None                                 = 0,
	STW_Fastest                              = 1,
	STW_Fast                                 = 2,
	STW_Better                               = 3,
	STW_Best                                 = 4,
	STW_Palm                                 = 5,
	STW_BestPlus                             = 6,
	STW_MAX                                  = 7
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 
{
	STG_Branch                               = 0,
	STG_Frond                                = 1,
	STG_Leaf                                 = 2,
	STG_FacingLeaf                           = 3,
	STG_Billboard                            = 4,
	STG_MAX                                  = 5
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 
{
	TMTM_TextureSize                         = 0,
	TMTM_TexelSize                           = 1,
	TMTM_MAX                                 = 2
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 
{
	TMVM_None                                = 0,
	TMVM_MipLevel                            = 1,
	TMVM_MipBias                             = 2,
	TMVM_Derivative                          = 3,
	TMVM_MAX                                 = 4
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 
{
	TRANSFORM_Tangent                        = 0,
	TRANSFORM_Local                          = 1,
	TRANSFORM_World                          = 2,
	TRANSFORM_View                           = 3,
	TRANSFORM_Camera                         = 4,
	TRANSFORM_ParticleWorld                  = 5,
	TRANSFORM_MAX                            = 6
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 
{
	TRANSFORMSOURCE_Tangent                  = 0,
	TRANSFORMSOURCE_Local                    = 1,
	TRANSFORMSOURCE_World                    = 2,
	TRANSFORMSOURCE_View                     = 3,
	TRANSFORMSOURCE_Camera                   = 4,
	TRANSFORMSOURCE_ParticleWorld            = 5,
	TRANSFORMSOURCE_MAX                      = 6
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 
{
	TRANSFORMPOSSOURCE_Local                 = 0,
	TRANSFORMPOSSOURCE_World                 = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld       = 2,
	TRANSFORMPOSSOURCE_View                  = 3,
	TRANSFORMPOSSOURCE_Camera                = 4,
	TRANSFORMPOSSOURCE_Particle              = 5,
	TRANSFORMPOSSOURCE_MAX                   = 6
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 
{
	VNF_CellnoiseALU                         = 0,
	VNF_VectorALU                            = 1,
	VNF_GradientALU                          = 2,
	VNF_CurlALU                              = 3,
	VNF_VoronoiALU                           = 4,
	VNF_MAX                                  = 5
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 
{
	MEVP_BufferSize                          = 0,
	MEVP_FieldOfView                         = 1,
	MEVP_TanHalfFieldOfView                  = 2,
	MEVP_ViewSize                            = 3,
	MEVP_WorldSpaceViewPosition              = 4,
	MEVP_WorldSpaceCameraPosition            = 5,
	MEVP_ViewportOffset                      = 6,
	MEVP_TemporalSampleCount                 = 7,
	MEVP_TemporalSampleIndex                 = 8,
	MEVP_TemporalSampleOffset                = 9,
	MEVP_RuntimeVirtualTextureOutputLevel    = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure                         = 12,
	MEVP_MAX                                 = 13
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 
{
	WPT_Default                              = 0,
	WPT_ExcludeAllShaderOffsets              = 1,
	WPT_CameraRelative                       = 2,
	WPT_CameraRelativeNoOffsets              = 3,
	WPT_MAX                                  = 4
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 
{
	EMaterialFunctionUsage::Default          = 0,
	EMaterialFunctionUsage::MaterialLayer    = 1,
	EMaterialFunctionUsage::MaterialLayerBlend = 2,
	EMaterialFunctionUsage::EMaterialFunctionUsage_MAX = 3
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 
{
	MATUSAGE_SkeletalMesh                    = 0,
	MATUSAGE_ParticleSprites                 = 1,
	MATUSAGE_BeamTrails                      = 2,
	MATUSAGE_MeshParticles                   = 3,
	MATUSAGE_StaticLighting                  = 4,
	MATUSAGE_MorphTargets                    = 5,
	MATUSAGE_SplineMesh                      = 6,
	MATUSAGE_InstancedStaticMeshes           = 7,
	MATUSAGE_GeometryCollections             = 8,
	MATUSAGE_Clothing                        = 9,
	MATUSAGE_NiagaraSprites                  = 10,
	MATUSAGE_NiagaraRibbons                  = 11,
	MATUSAGE_NiagaraMeshParticles            = 12,
	MATUSAGE_GeometryCache                   = 13,
	MATUSAGE_Water                           = 14,
	MATUSAGE_HairStrands                     = 15,
	MATUSAGE_LidarPointCloud                 = 16,
	MATUSAGE_MAX                             = 17
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 
{
	LayerParameter                           = 0,
	BlendParameter                           = 1,
	GlobalParameter                          = 2,
	EMaterialParameterAssociation_MAX        = 3
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 
{
	MaterialMergeType_Default                = 0,
	MaterialMergeType_Simplygon              = 1,
	MaterialMergeType_MAX                    = 2
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 
{
	TextureSizingType_UseSingleTextureSize   = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX                    = 4
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 
{
	PPI_SceneColor                           = 0,
	PPI_SceneDepth                           = 1,
	PPI_DiffuseColor                         = 2,
	PPI_SpecularColor                        = 3,
	PPI_SubsurfaceColor                      = 4,
	PPI_BaseColor                            = 5,
	PPI_Specular                             = 6,
	PPI_Metallic                             = 7,
	PPI_WorldNormal                          = 8,
	PPI_SeparateTranslucency                 = 9,
	PPI_Opacity                              = 10,
	PPI_Roughness                            = 11,
	PPI_MaterialAO                           = 12,
	PPI_CustomDepth                          = 13,
	PPI_PostProcessInput0                    = 14,
	PPI_PostProcessInput1                    = 15,
	PPI_PostProcessInput2                    = 16,
	PPI_PostProcessInput3                    = 17,
	PPI_PostProcessInput4                    = 18,
	PPI_PostProcessInput5                    = 19,
	PPI_PostProcessInput6                    = 20,
	PPI_DecalMask                            = 21,
	PPI_ShadingModelColor                    = 22,
	PPI_ShadingModelID                       = 23,
	PPI_AmbientOcclusion                     = 24,
	PPI_CustomStencil                        = 25,
	PPI_StoredBaseColor                      = 26,
	PPI_StoredSpecular                       = 27,
	PPI_Velocity                             = 28,
	PPI_WorldTangent                         = 29,
	PPI_Anisotropy                           = 30,
	PPI_MAX                                  = 31
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 
{
	MD_Surface                               = 0,
	MD_DeferredDecal                         = 1,
	MD_LightFunction                         = 2,
	MD_Volume                                = 3,
	MD_PostProcess                           = 4,
	MD_UI                                    = 5,
	MD_RuntimeVirtualTexture                 = 6,
	MD_MAX                                   = 7
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8 
{
	EMeshInstancingReplacementMethod::RemoveOriginalActors = 0,
	EMeshInstancingReplacementMethod::KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod::EMeshInstancingReplacementMethod_MAX = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 
{
	EUVOutput::DoNotOutputChannel            = 0,
	EUVOutput::OutputChannel                 = 1,
	EUVOutput::EUVOutput_MAX                 = 2
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 
{
	EMeshMergeType::MeshMergeType_Default    = 0,
	EMeshMergeType::MeshMergeType_MergeActor = 1,
	EMeshMergeType::MeshMergeType_MAX        = 2
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 
{
	EMeshLODSelectionType::AllLODs           = 0,
	EMeshLODSelectionType::SpecificLOD       = 1,
	EMeshLODSelectionType::CalculateLOD      = 2,
	EMeshLODSelectionType::LowestDetailLOD   = 3,
	EMeshLODSelectionType::EMeshLODSelectionType_MAX = 4
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 
{
	EProxyNormalComputationMethod::AngleWeighted = 0,
	EProxyNormalComputationMethod::AreaWeighted = 1,
	EProxyNormalComputationMethod::EqualWeighted = 2,
	EProxyNormalComputationMethod::EProxyNormalComputationMethod_MAX = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 
{
	ELandscapeCullingPrecision::High         = 0,
	ELandscapeCullingPrecision::Medium       = 1,
	ELandscapeCullingPrecision::Low          = 2,
	ELandscapeCullingPrecision::ELandscapeCullingPrecision_MAX = 3
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 
{
	EStaticMeshReductionTerimationCriterion::Triangles = 0,
	EStaticMeshReductionTerimationCriterion::Vertices = 1,
	EStaticMeshReductionTerimationCriterion::Any = 2,
	EStaticMeshReductionTerimationCriterion::EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 
{
	EMeshFeatureImportance::Off              = 0,
	EMeshFeatureImportance::Lowest           = 1,
	EMeshFeatureImportance::Low              = 2,
	EMeshFeatureImportance::Normal           = 3,
	EMeshFeatureImportance::High             = 4,
	EMeshFeatureImportance::Highest          = 5,
	EMeshFeatureImportance::EMeshFeatureImportance_MAX = 6
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 
{
	EVertexPaintAxis::X                      = 0,
	EVertexPaintAxis::Y                      = 1,
	EVertexPaintAxis::Z                      = 2,
	EVertexPaintAxis::EVertexPaintAxis_MAX   = 3
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 
{
	MTR_Succeeded                            = 0,
	MTR_Failed                               = 1,
	MTR_Canceled                             = 2,
	MTR_RestoredFromServer                   = 3,
	MTR_MAX                                  = 4
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 
{
	MTD_PurchaseQueryComplete                = 0,
	MTD_PurchaseComplete                     = 1,
	MTD_MAX                                  = 2
};

// Enum Engine.EKillType
enum class EKillType : uint8 
{
	EKillType::Kill                          = 0,
	EKillType::Knockout                      = 1,
	EKillType::Resuscitated                  = 2,
	EKillType::Reported                      = 3,
	EKillType::EKillType_MAX                 = 4
};

// Enum Engine.EReplayFailure
enum class EReplayFailure : uint8 
{
	EReplayFailure::OK                       = 0,
	EReplayFailure::PlayReplayCommand        = 1,
	EReplayFailure::PlayReplayNoWorld        = 2,
	EReplayFailure::PlayReplayCorrupt        = 3,
	EReplayFailure::PlayReplayCreateDriver   = 4,
	EReplayFailure::ConnectNoWorld           = 5,
	EReplayFailure::ConnectNoGameInstance    = 6,
	EReplayFailure::ConnectInitBase          = 7,
	EReplayFailure::ConnectCreateReplayStreamer = 8,
	EReplayFailure::PlaybackStreamerReady    = 9,
	EReplayFailure::ConnectNoWorldContext    = 10,
	EReplayFailure::ReadHeaderDemoNotFound   = 11,
	EReplayFailure::ReadHeaderCorrupt        = 12,
	EReplayFailure::ReadHeaderGameSpecific   = 13,
	EReplayFailure::TickPlayStreamerInternal = 14,
	EReplayFailure::TickPlayStreamerFileAr   = 15,
	EReplayFailure::ReadFrameFileAr          = 16,
	EReplayFailure::ReadFrameStreamerInternal = 17,
	EReplayFailure::ReadFrameMismatchTimeChecksum = 18,
	EReplayFailure::ReadFrameServerDeltaTime = 19,
	EReplayFailure::ReadFrameReadPacketError = 20,
	EReplayFailure::ReadFrameNotReachable1   = 21,
	EReplayFailure::ReadFrameNotReachable2   = 22,
	EReplayFailure::ProcessPacket            = 23,
	EReplayFailure::CheckpointReady          = 24,
	EReplayFailure::CheckpointDriverInvalid  = 25,
	EReplayFailure::InstantReady             = 26,
	EReplayFailure::InstantDriverInvalid     = 27,
	EReplayFailure::DownloadHeader           = 28,
	EReplayFailure::DownloadHeaderLevelNamesAndTimes = 29,
	EReplayFailure::LoadMap                  = 30,
	EReplayFailure::PlayKillcamNoWorld       = 31,
	EReplayFailure::PlayKillcamNoDriver      = 32,
	EReplayFailure::PlayKillcamNoActiveReplay = 33,
	EReplayFailure::PlayKillcamInvalidArguments = 34,
	EReplayFailure::PlayKillcamCorrupt       = 35,
	EReplayFailure::PlayKillcamSetViewTarget = 36,
	EReplayFailure::PlayKillcamSetTime       = 37,
	EReplayFailure::PlayKillcamFindViewTargetTimeout = 38,
	EReplayFailure::SpawnReplayPcNoWorld     = 39,
	EReplayFailure::SpawnReplayPcLoadClass   = 40,
	EReplayFailure::SpawnReplayPc            = 41,
	EReplayFailure::PLAYBACK_FAILURE_MAX     = 42,
	EReplayFailure::RecordingReplayCommand   = 43,
	EReplayFailure::RecordingReplayRejectOption = 44,
	EReplayFailure::RecordingReplayNoWorld   = 45,
	EReplayFailure::RecordingReplayAlreadyPlaying = 46,
	EReplayFailure::RecordingReplayCorrupt   = 47,
	EReplayFailure::RecordingReplayCreateDriver = 48,
	EReplayFailure::RecordingReplayPrepare   = 49,
	EReplayFailure::ListenNoWorld            = 50,
	EReplayFailure::ListenNoGameInstance     = 51,
	EReplayFailure::ListenInitBase           = 52,
	EReplayFailure::ListenCreateReplayStreamer = 53,
	EReplayFailure::ListenNoWorldSettings    = 54,
	EReplayFailure::ListenWriteHeader        = 55,
	EReplayFailure::RecordingStreamerReady   = 56,
	EReplayFailure::ContinueListen           = 57,
	EReplayFailure::TickRecordStreamerInternal = 58,
	EReplayFailure::TickRecordStreamerFileAr = 59,
	EReplayFailure::TickRecordNoGameDriver   = 60,
	EReplayFailure::TickRecordNoGameConnection = 61,
	EReplayFailure::TickRecordCorrupt        = 62,
	EReplayFailure::SaveCheckpointNoGameDriver = 63,
	EReplayFailure::SaveCheckpointNoGameConnection = 64,
	EReplayFailure::OnSeamlessTravelWriteHeader = 65,
	EReplayFailure::RECORDING_FAILURE_MAX    = 66,
	EReplayFailure::EReplayFailure_MAX       = 67
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 
{
	FNavigationSystemRunMode::InvalidMode    = 0,
	FNavigationSystemRunMode::GameMode       = 1,
	FNavigationSystemRunMode::EditorMode     = 2,
	FNavigationSystemRunMode::SimulationMode = 3,
	FNavigationSystemRunMode::PIEMode        = 4,
	FNavigationSystemRunMode::FNavigationSystemRunMode_MAX = 5
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 
{
	ENavigationQueryResult::Invalid          = 0,
	ENavigationQueryResult::Error            = 1,
	ENavigationQueryResult::Fail             = 2,
	ENavigationQueryResult::Success          = 3,
	ENavigationQueryResult::ENavigationQueryResult_MAX = 4
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 
{
	ENavPathEvent::Cleared                   = 0,
	ENavPathEvent::NewPath                   = 1,
	ENavPathEvent::UpdatedDueToGoalMoved     = 2,
	ENavPathEvent::UpdatedDueToNavigationChanged = 3,
	ENavPathEvent::Invalidated               = 4,
	ENavPathEvent::RePathFailed              = 5,
	ENavPathEvent::MetaPathUpdate            = 6,
	ENavPathEvent::Custom                    = 7,
	ENavPathEvent::ENavPathEvent_MAX         = 8
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 
{
	ENavDataGatheringModeConfig::Invalid     = 0,
	ENavDataGatheringModeConfig::Instant     = 1,
	ENavDataGatheringModeConfig::Lazy        = 2,
	ENavDataGatheringModeConfig::ENavDataGatheringModeConfig_MAX = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 
{
	ENavDataGatheringMode::Default           = 0,
	ENavDataGatheringMode::Instant           = 1,
	ENavDataGatheringMode::Lazy              = 2,
	ENavDataGatheringMode::ENavDataGatheringMode_MAX = 3
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 
{
	ENavigationOptionFlag::Default           = 0,
	ENavigationOptionFlag::Enable            = 1,
	ENavigationOptionFlag::Disable           = 2,
	ENavigationOptionFlag::MAX               = 3
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 
{
	ENavLinkDirection::BothWays              = 0,
	ENavLinkDirection::LeftToRight           = 1,
	ENavLinkDirection::RightToLeft           = 2,
	ENavLinkDirection::ENavLinkDirection_MAX = 3
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 
{
	ERM_Normal                               = 0,
	ERM_Point                                = 1,
	ERM_Cross                                = 2,
	ERM_LightsOnly                           = 3,
	ERM_None                                 = 4,
	ERM_MAX                                  = 5
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 
{
	PSUVIM_None                              = 0,
	PSUVIM_Linear                            = 1,
	PSUVIM_Linear_Blend                      = 2,
	PSUVIM_Random                            = 3,
	PSUVIM_Random_Blend                      = 4,
	PSUVIM_MAX                               = 5
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 
{
	EPBM_Instant                             = 0,
	EPBM_Interpolated                        = 1,
	EPBM_MAX                                 = 2
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 
{
	EParticleSystemInsignificanceReaction::Auto = 0,
	EParticleSystemInsignificanceReaction::Complete = 1,
	EParticleSystemInsignificanceReaction::DisableTick = 2,
	EParticleSystemInsignificanceReaction::DisableTickAndKill = 3,
	EParticleSystemInsignificanceReaction::Num = 4,
	EParticleSystemInsignificanceReaction::EParticleSystemInsignificanceReaction_MAX = 5
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 
{
	EParticleSignificanceLevel::Low          = 0,
	EParticleSignificanceLevel::Medium       = 1,
	EParticleSignificanceLevel::High         = 2,
	EParticleSignificanceLevel::Critical     = 3,
	EParticleSignificanceLevel::Num          = 4,
	EParticleSignificanceLevel::EParticleSignificanceLevel_MAX = 5
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8 
{
	PDM_Low                                  = 0,
	PDM_Medium                               = 1,
	PDM_High                                 = 2,
	PDM_MAX                                  = 3
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 
{
	EPSSM_Random                             = 0,
	EPSSM_Sequential                         = 1,
	EPSSM_MAX                                = 2
};

// Enum Engine.EModuleType
enum class EModuleType : uint8 
{
	EPMT_General                             = 0,
	EPMT_TypeData                            = 1,
	EPMT_Beam                                = 2,
	EPMT_Trail                               = 3,
	EPMT_Spawn                               = 4,
	EPMT_Required                            = 5,
	EPMT_Event                               = 6,
	EPMT_Light                               = 7,
	EPMT_SubUV                               = 8,
	EPMT_MAX                                 = 9
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 
{
	EAPSM_Random                             = 0,
	EAPSM_Sequential                         = 1,
	EAPSM_MAX                                = 2
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 
{
	PEB2STTM_Direct                          = 0,
	PEB2STTM_UserSet                         = 1,
	PEB2STTM_Distribution                    = 2,
	PEB2STTM_Emitter                         = 3,
	PEB2STTM_MAX                             = 4
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 
{
	PEB2STM_Default                          = 0,
	PEB2STM_UserSet                          = 1,
	PEB2STM_Emitter                          = 2,
	PEB2STM_Particle                         = 3,
	PEB2STM_Actor                            = 4,
	PEB2STM_MAX                              = 5
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 
{
	PEB2MT_Source                            = 0,
	PEB2MT_Target                            = 1,
	PEB2MT_MAX                               = 2
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 
{
	EPCOUM_DirectSet                         = 0,
	EPCOUM_Additive                          = 1,
	EPCOUM_Scalar                            = 2,
	EPCOUM_MAX                               = 3
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 
{
	EPCC_Kill                                = 0,
	EPCC_Freeze                              = 1,
	EPCC_HaltCollisions                      = 2,
	EPCC_FreezeTranslation                   = 3,
	EPCC_FreezeRotation                      = 4,
	EPCC_FreezeMovement                      = 5,
	EPCC_MAX                                 = 6
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 
{
	EParticleCollisionResponse::Bounce       = 0,
	EParticleCollisionResponse::Stop         = 1,
	EParticleCollisionResponse::Kill         = 2,
	EParticleCollisionResponse::EParticleCollisionResponse_MAX = 3
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 
{
	BONESOCKETSEL_Sequential                 = 0,
	BONESOCKETSEL_Random                     = 1,
	BONESOCKETSEL_MAX                        = 2
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 
{
	BONESOCKETSOURCE_Bones                   = 0,
	BONESOCKETSOURCE_Sockets                 = 1,
	BONESOCKETSOURCE_MAX                     = 2
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 
{
	ELESM_Random                             = 0,
	ELESM_Sequential                         = 1,
	ELESM_MAX                                = 2
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 
{
	PMLPC_HEIGHTAXIS_X                       = 0,
	PMLPC_HEIGHTAXIS_Y                       = 1,
	PMLPC_HEIGHTAXIS_Z                       = 2,
	PMLPC_HEIGHTAXIS_MAX                     = 3
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 
{
	VERTSURFACESOURCE_Vert                   = 0,
	VERTSURFACESOURCE_Surface                = 1,
	VERTSURFACESOURCE_MAX                    = 2
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 
{
	EOChainMode_Add                          = 0,
	EOChainMode_Scale                        = 1,
	EOChainMode_Link                         = 2,
	EOChainMode_MAX                          = 3
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 
{
	EPAL_NONE                                = 0,
	EPAL_X                                   = 1,
	EPAL_Y                                   = 2,
	EPAL_Z                                   = 3,
	EPAL_NEGATIVE_X                          = 4,
	EPAL_NEGATIVE_Y                          = 5,
	EPAL_NEGATIVE_Z                          = 6,
	EPAL_ROTATE_X                            = 7,
	EPAL_ROTATE_Y                            = 8,
	EPAL_ROTATE_Z                            = 9,
	EPAL_MAX                                 = 10
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 
{
	EDPV_UserSet                             = 0,
	EDPV_AutoSet                             = 1,
	EDPV_VelocityX                           = 2,
	EDPV_VelocityY                           = 3,
	EDPV_VelocityZ                           = 4,
	EDPV_VelocityMag                         = 5,
	EDPV_MAX                                 = 6
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 
{
	ENM_CameraFacing                         = 0,
	ENM_Spherical                            = 1,
	ENM_Cylindrical                          = 2,
	ENM_MAX                                  = 3
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 
{
	PSORTMODE_None                           = 0,
	PSORTMODE_ViewProjDepth                  = 1,
	PSORTMODE_DistanceToView                 = 2,
	PSORTMODE_Age_OldestFirst                = 3,
	PSORTMODE_Age_NewestFirst                = 4,
	PSORTMODE_MAX                            = 5
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 
{
	EParticleUVFlipMode::None                = 0,
	EParticleUVFlipMode::FlipUV              = 1,
	EParticleUVFlipMode::FlipUOnly           = 2,
	EParticleUVFlipMode::FlipVOnly           = 3,
	EParticleUVFlipMode::RandomFlipUV        = 4,
	EParticleUVFlipMode::RandomFlipUOnly     = 5,
	EParticleUVFlipMode::RandomFlipVOnly     = 6,
	EParticleUVFlipMode::RandomFlipUVIndependent = 7,
	EParticleUVFlipMode::EParticleUVFlipMode_MAX = 8
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 
{
	PET2SRCM_Default                         = 0,
	PET2SRCM_Particle                        = 1,
	PET2SRCM_Actor                           = 2,
	PET2SRCM_MAX                             = 3
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 
{
	PEBTM_None                               = 0,
	PEBTM_Full                               = 1,
	PEBTM_Partial                            = 2,
	PEBTM_MAX                                = 3
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 
{
	PEB2M_Distance                           = 0,
	PEB2M_Target                             = 1,
	PEB2M_Branch                             = 2,
	PEB2M_MAX                                = 3
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 
{
	XAxisFacing_NoUp                         = 0,
	XAxisFacing_ZUp                          = 1,
	XAxisFacing_NegativeZUp                  = 2,
	XAxisFacing_YUp                          = 3,
	XAxisFacing_NegativeYUp                  = 4,
	LockedAxis_ZAxisFacing                   = 5,
	LockedAxis_NegativeZAxisFacing           = 6,
	LockedAxis_YAxisFacing                   = 7,
	LockedAxis_NegativeYAxisFacing           = 8,
	VelocityAligned_ZAxisFacing              = 9,
	VelocityAligned_NegativeZAxisFacing      = 10,
	VelocityAligned_YAxisFacing              = 11,
	VelocityAligned_NegativeYAxisFacing      = 12,
	EMeshCameraFacingOptions_MAX             = 13
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 
{
	CameraFacing_NoneUP                      = 0,
	CameraFacing_ZUp                         = 1,
	CameraFacing_NegativeZUp                 = 2,
	CameraFacing_YUp                         = 3,
	CameraFacing_NegativeYUp                 = 4,
	CameraFacing_MAX                         = 5
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 
{
	PSMA_MeshFaceCameraWithRoll              = 0,
	PSMA_MeshFaceCameraWithSpin              = 1,
	PSMA_MeshFaceCameraWithLockedAxis        = 2,
	PSMA_MAX                                 = 3
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 
{
	Trails_CameraUp                          = 0,
	Trails_SourceUp                          = 1,
	Trails_WorldUp                           = 2,
	Trails_MAX                               = 3
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 
{
	PSA_FacingCameraPosition                 = 0,
	PSA_Square                               = 1,
	PSA_Rectangle                            = 2,
	PSA_Velocity                             = 3,
	PSA_AwayFromCenter                       = 4,
	PSA_TypeSpecific                         = 5,
	PSA_FacingCameraDistanceBlend            = 6,
	PSA_MAX                                  = 7
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 
{
	EPSOBM_None                              = 0,
	EPSOBM_ParticleBounds                    = 1,
	EPSOBM_CustomBounds                      = 2,
	EPSOBM_MAX                               = 3
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 
{
	PARTICLESYSTEMLODMETHOD_Automatic        = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet        = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX              = 3
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 
{
	EPSUM_RealTime                           = 0,
	EPSUM_FixedTime                          = 1,
	EPSUM_MAX                                = 2
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 
{
	EPET_Any                                 = 0,
	EPET_Spawn                               = 1,
	EPET_Death                               = 2,
	EPET_Collision                           = 3,
	EPET_Burst                               = 4,
	EPET_Blueprint                           = 5,
	EPET_MAX                                 = 6
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 
{
	PRS_Disabled                             = 0,
	PRS_Capturing                            = 1,
	PRS_Replaying                            = 2,
	PRS_MAX                                  = 3
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 
{
	PSPT_None                                = 0,
	PSPT_Scalar                              = 1,
	PSPT_ScalarRand                          = 2,
	PSPT_Vector                              = 3,
	PSPT_VectorRand                          = 4,
	PSPT_Color                               = 5,
	PSPT_Actor                               = 6,
	PSPT_Material                            = 7,
	PSPT_VectorUnitRand                      = 8,
	PSPT_MAX                                 = 9
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 
{
	ESettingsLockedAxis::None                = 0,
	ESettingsLockedAxis::X                   = 1,
	ESettingsLockedAxis::Y                   = 2,
	ESettingsLockedAxis::Z                   = 3,
	ESettingsLockedAxis::Invalid             = 4,
	ESettingsLockedAxis::ESettingsLockedAxis_MAX = 5
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 
{
	ESettingsDOF::Full3D                     = 0,
	ESettingsDOF::YZPlane                    = 1,
	ESettingsDOF::XZPlane                    = 2,
	ESettingsDOF::XYPlane                    = 3,
	ESettingsDOF::ESettingsDOF_MAX           = 4
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 
{
	EFrictionCombineMode::Average            = 0,
	EFrictionCombineMode::Min                = 1,
	EFrictionCombineMode::Multiply           = 2,
	EFrictionCombineMode::Max                = 3
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 
{
	EReflectionSourceType::CapturedScene     = 0,
	EReflectionSourceType::SpecifiedCubemap  = 1,
	EReflectionSourceType::EReflectionSourceType_MAX = 2
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 
{
	EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8 = 0,
	EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED = 1,
	EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED = 2,
	EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA = 3,
	EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10 = 4,
	EDefaultBackBufferPixelFormat::DBBPF_MAX = 5
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 
{
	EAutoExposureMethodUI::AEM_Histogram     = 0,
	EAutoExposureMethodUI::AEM_Basic         = 1,
	EAutoExposureMethodUI::AEM_Manual        = 2,
	EAutoExposureMethodUI::AEM_MAX           = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 
{
	EAlphaChannelMode::Disabled              = 0,
	EAlphaChannelMode::LinearColorSpaceOnly  = 1,
	EAlphaChannelMode::AllowThroughTonemapper = 2,
	EAlphaChannelMode::EAlphaChannelMode_MAX = 3
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 
{
	EEarlyZPass::None                        = 0,
	EEarlyZPass::OpaqueOnly                  = 1,
	EEarlyZPass::OpaqueAndMasked             = 2,
	EEarlyZPass::Auto                        = 3,
	EEarlyZPass::EEarlyZPass_MAX             = 4
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 
{
	ECustomDepthStencil::Disabled            = 0,
	ECustomDepthStencil::Enabled             = 1,
	ECustomDepthStencil::EnabledOnDemand     = 2,
	ECustomDepthStencil::EnabledWithStencil  = 3,
	ECustomDepthStencil::ECustomDepthStencil_MAX = 4
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 
{
	EMobileMSAASampleCount::One              = 1,
	EMobileMSAASampleCount::Two              = 2,
	EMobileMSAASampleCount::Four             = 4,
	EMobileMSAASampleCount::Eight            = 8,
	EMobileMSAASampleCount::EMobileMSAASampleCount_MAX = 9
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 
{
	ECompositingSampleCount::One             = 1,
	ECompositingSampleCount::Two             = 2,
	ECompositingSampleCount::Four            = 4,
	ECompositingSampleCount::Eight           = 8,
	ECompositingSampleCount::ECompositingSampleCount_MAX = 9
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 
{
	EClearSceneOptions::NoClear              = 0,
	EClearSceneOptions::HardwareClear        = 1,
	EClearSceneOptions::QuadAtMaxZ           = 2,
	EClearSceneOptions::EClearSceneOptions_MAX = 3
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 
{
	EReporterLineStyle::Line                 = 0,
	EReporterLineStyle::Dash                 = 1,
	EReporterLineStyle::EReporterLineStyle_MAX = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 
{
	ELegendPosition::Outside                 = 0,
	ELegendPosition::Inside                  = 1,
	ELegendPosition::ELegendPosition_MAX     = 2
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 
{
	EGraphDataStyle::Lines                   = 0,
	EGraphDataStyle::Filled                  = 1,
	EGraphDataStyle::EGraphDataStyle_MAX     = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 
{
	EGraphAxisStyle::Lines                   = 0,
	EGraphAxisStyle::Notches                 = 1,
	EGraphAxisStyle::Grid                    = 2,
	EGraphAxisStyle::EGraphAxisStyle_MAX     = 3
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 
{
	REVERB_Default                           = 0,
	REVERB_Bathroom                          = 1,
	REVERB_StoneRoom                         = 2,
	REVERB_Auditorium                        = 3,
	REVERB_ConcertHall                       = 4,
	REVERB_Cave                              = 5,
	REVERB_Hallway                           = 6,
	REVERB_StoneCorridor                     = 7,
	REVERB_Alley                             = 8,
	REVERB_Forest                            = 9,
	REVERB_City                              = 10,
	REVERB_Mountains                         = 11,
	REVERB_Quarry                            = 12,
	REVERB_Plain                             = 13,
	REVERB_ParkingLot                        = 14,
	REVERB_SewerPipe                         = 15,
	REVERB_Underwater                        = 16,
	REVERB_SmallRoom                         = 17,
	REVERB_MediumRoom                        = 18,
	REVERB_LargeRoom                         = 19,
	REVERB_MediumHall                        = 20,
	REVERB_LargeHall                         = 21,
	REVERB_Plate                             = 22,
	REVERB_MAX                               = 23
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8 
{
	RCKTCF_uint16                            = 0,
	RCKTCF_float32                           = 1,
	RCKTCF_MAX                               = 2
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8 
{
	RCCF_Empty                               = 0,
	RCCF_Constant                            = 1,
	RCCF_Linear                              = 2,
	RCCF_Cubic                               = 3,
	RCCF_Mixed                               = 4,
	RCCF_MAX                                 = 5
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 
{
	EConstraintTransform::Absolute           = 0,
	EConstraintTransform::Relative           = 1,
	EConstraintTransform::EConstraintTransform_MAX = 2
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 
{
	EControlConstraint::Orientation          = 0,
	EControlConstraint::Translation          = 1,
	EControlConstraint::MAX                  = 2
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8 
{
	ERootMotionFinishVelocityMode::MaintainLastRootMotionVelocity = 0,
	ERootMotionFinishVelocityMode::SetVelocity = 1,
	ERootMotionFinishVelocityMode::ClampVelocity = 2,
	ERootMotionFinishVelocityMode::ERootMotionFinishVelocityMode_MAX = 3
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 
{
	ERootMotionSourceSettingsFlags::UseSensitiveLiftoffCheck = 1,
	ERootMotionSourceSettingsFlags::DisablePartialEndTick = 2,
	ERootMotionSourceSettingsFlags::IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags::ERootMotionSourceSettingsFlags_MAX = 5
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 
{
	ERootMotionSourceStatusFlags::Prepared   = 1,
	ERootMotionSourceStatusFlags::Finished   = 2,
	ERootMotionSourceStatusFlags::MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags::ERootMotionSourceStatusFlags_MAX = 5
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 
{
	ERootMotionAccumulateMode::Override      = 0,
	ERootMotionAccumulateMode::Additive      = 1,
	ERootMotionAccumulateMode::ERootMotionAccumulateMode_MAX = 2
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8 
{
	ERuntimeVirtualTextureMaterialType::BaseColor = 0,
	ERuntimeVirtualTextureMaterialType::BaseColor_Normal_DEPRECATED = 1,
	ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular = 2,
	ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg = 3,
	ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg = 4,
	ERuntimeVirtualTextureMaterialType::WorldHeight = 5,
	ERuntimeVirtualTextureMaterialType::Count = 6,
	ERuntimeVirtualTextureMaterialType::ERuntimeVirtualTextureMaterialType_MAX = 7
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 
{
	ELightUnits::Unitless                    = 0,
	ELightUnits::Candelas                    = 1,
	ELightUnits::Lumens                      = 2,
	ELightUnits::ELightUnits_MAX             = 3
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 
{
	AAM_None                                 = 0,
	AAM_FXAA                                 = 1,
	AAM_TemporalAA                           = 2,
	AAM_MSAA                                 = 3,
	AAM_MAX                                  = 4
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 
{
	DOFM_BokehDOF                            = 0,
	DOFM_Gaussian                            = 1,
	DOFM_CircleDOF                           = 2,
	DOFM_MAX                                 = 3
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 
{
	ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture = 0,
	ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives = 1,
	ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList = 2,
	ESceneCapturePrimitiveRenderMode::PRM_MAX = 3
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 
{
	MP_EmissiveColor                         = 0,
	MP_Opacity                               = 1,
	MP_OpacityMask                           = 2,
	MP_DiffuseColor                          = 3,
	MP_SpecularColor                         = 4,
	MP_BaseColor                             = 5,
	MP_Metallic                              = 6,
	MP_Specular                              = 7,
	MP_Roughness                             = 8,
	MP_Anisotropy                            = 9,
	MP_Normal                                = 10,
	MP_Tangent                               = 11,
	MP_WorldPositionOffset                   = 12,
	MP_WorldDisplacement                     = 13,
	MP_TessellationMultiplier                = 14,
	MP_SubsurfaceColor                       = 15,
	MP_CustomData0                           = 16,
	MP_CustomData1                           = 17,
	MP_AmbientOcclusion                      = 18,
	MP_Refraction                            = 19,
	MP_CustomizedUVs0                        = 20,
	MP_CustomizedUVs1                        = 21,
	MP_CustomizedUVs2                        = 22,
	MP_CustomizedUVs3                        = 23,
	MP_CustomizedUVs4                        = 24,
	MP_CustomizedUVs5                        = 25,
	MP_CustomizedUVs6                        = 26,
	MP_CustomizedUVs7                        = 27,
	MP_PixelDepthOffset                      = 28,
	MP_ShadingModel                          = 29,
	MP_MaterialAttributes                    = 30,
	MP_CustomOutput                          = 31,
	MP_MAX                                   = 32
};

// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8 
{
	ESkinCacheDefaultBehavior::Exclusive     = 0,
	ESkinCacheDefaultBehavior::Inclusive     = 1,
	ESkinCacheDefaultBehavior::ESkinCacheDefaultBehavior_MAX = 2
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8 
{
	ESkinCacheUsage::Auto                    = 0,
	ESkinCacheUsage::Disabled                = 255,
	ESkinCacheUsage::Enabled                 = 1,
	ESkinCacheUsage::ESkinCacheUsage_MAX     = 256
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 
{
	EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform = 0,
	EPhysicsTransformUpdateMode::ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode::EPhysicsTransformUpdateMode_MAX = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 
{
	EAnimationMode::AnimationBlueprint       = 0,
	EAnimationMode::AnimationSingleNode      = 1,
	EAnimationMode::AnimationCustomMode      = 2,
	EAnimationMode::EAnimationMode_MAX       = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 
{
	EKinematicBonesUpdateToPhysics::SkipSimulatingBones = 0,
	EKinematicBonesUpdateToPhysics::SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics::EKinematicBonesUpdateToPhysics_MAX = 2
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8 
{
	EClothMassMode::UniformMass              = 0,
	EClothMassMode::TotalMass                = 1,
	EClothMassMode::Density                  = 2,
	EClothMassMode::MaxClothMassMode         = 3,
	EClothMassMode::EClothMassMode_MAX       = 4
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 
{
	EAnimCurveType::AttributeCurve           = 0,
	EAnimCurveType::MaterialCurve            = 1,
	EAnimCurveType::MorphTargetCurve         = 2,
	EAnimCurveType::MaxAnimCurveType         = 3,
	EAnimCurveType::EAnimCurveType_MAX       = 4
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8 
{
	ESkeletalMeshSkinningImportVersions::Before_Versionning = 0,
	ESkeletalMeshSkinningImportVersions::SkeletalMeshBuildRefactor = 1,
	ESkeletalMeshSkinningImportVersions::VersionPlusOne = 2,
	ESkeletalMeshSkinningImportVersions::LatestVersion = 1,
	ESkeletalMeshSkinningImportVersions::ESkeletalMeshSkinningImportVersions_MAX = 3
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8 
{
	ESkeletalMeshGeoImportVersions::Before_Versionning = 0,
	ESkeletalMeshGeoImportVersions::SkeletalMeshBuildRefactor = 1,
	ESkeletalMeshGeoImportVersions::VersionPlusOne = 2,
	ESkeletalMeshGeoImportVersions::LatestVersion = 1,
	ESkeletalMeshGeoImportVersions::ESkeletalMeshGeoImportVersions_MAX = 3
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 
{
	EBoneFilterActionOption::Remove          = 0,
	EBoneFilterActionOption::Keep            = 1,
	EBoneFilterActionOption::Invalid         = 2,
	EBoneFilterActionOption::EBoneFilterActionOption_MAX = 3
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 
{
	SMOI_Off                                 = 0,
	SMOI_Lowest                              = 1,
	SMOI_Low                                 = 2,
	SMOI_Normal                              = 3,
	SMOI_High                                = 4,
	SMOI_Highest                             = 5,
	SMOI_MAX                                 = 6
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 
{
	SMOT_NumOfTriangles                      = 0,
	SMOT_MaxDeviation                        = 1,
	SMOT_TriangleOrDeviation                 = 2,
	SMOT_MAX                                 = 3
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 
{
	SMTC_NumOfTriangles                      = 0,
	SMTC_NumOfVerts                          = 1,
	SMTC_TriangleOrVert                      = 2,
	SMTC_AbsNumOfTriangles                   = 3,
	SMTC_AbsNumOfVerts                       = 4,
	SMTC_AbsTriangleOrVert                   = 5,
	SMTC_MAX                                 = 6
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 
{
	EBoneTranslationRetargetingMode::Animation = 0,
	EBoneTranslationRetargetingMode::Skeleton = 1,
	EBoneTranslationRetargetingMode::AnimationScaled = 2,
	EBoneTranslationRetargetingMode::AnimationRelative = 3,
	EBoneTranslationRetargetingMode::OrientAndScale = 4,
	EBoneTranslationRetargetingMode::EBoneTranslationRetargetingMode_MAX = 5
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 
{
	EBoneSpaces::WorldSpace                  = 0,
	EBoneSpaces::ComponentSpace              = 1,
	EBoneSpaces::EBoneSpaces_MAX             = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 
{
	EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones = 0,
	EVisibilityBasedAnimTickOption::AlwaysTickPose = 1,
	EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered = 2,
	EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption::EVisibilityBasedAnimTickOption_MAX = 4
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 
{
	PBO_None                                 = 0,
	PBO_Term                                 = 1,
	PBO_MAX                                  = 2
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 
{
	BVS_HiddenByParent                       = 0,
	BVS_Visible                              = 1,
	BVS_ExplicitlyHidden                     = 2,
	BVS_MAX                                  = 3
};

// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8 
{
	ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin = 0,
	ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform = 1,
	ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode::ESkyAtmosphereTransformMode_MAX = 3
};

// Enum Engine.ESpecularOcclusionMode
enum class ESpecularOcclusionMode : uint8 
{
	SOM_NonDirectional                       = 0,
	SOM_DirectionalCones                     = 1,
	SOM_Combine                              = 2,
	SOM_Maximum                              = 3,
	SOM_MAX                                  = 4
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 
{
	SLS_CapturedScene                        = 0,
	SLS_SpecifiedCubemap                     = 1,
	SLS_MAX                                  = 2
};

// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8 
{
	EPriorityAttenuationMethod::Linear       = 0,
	EPriorityAttenuationMethod::CustomCurve  = 1,
	EPriorityAttenuationMethod::Manual       = 2,
	EPriorityAttenuationMethod::EPriorityAttenuationMethod_MAX = 3
};

// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8 
{
	ESubmixSendMethod::Linear                = 0,
	ESubmixSendMethod::CustomCurve           = 1,
	ESubmixSendMethod::Manual                = 2,
	ESubmixSendMethod::ESubmixSendMethod_MAX = 3
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 
{
	EReverbSendMethod::Linear                = 0,
	EReverbSendMethod::CustomCurve           = 1,
	EReverbSendMethod::Manual                = 2,
	EReverbSendMethod::EReverbSendMethod_MAX = 3
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 
{
	EAirAbsorptionMethod::Linear             = 0,
	EAirAbsorptionMethod::CustomCurve        = 1,
	EAirAbsorptionMethod::EAirAbsorptionMethod_MAX = 2
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 
{
	SPATIALIZATION_Default                   = 0,
	SPATIALIZATION_HRTF                      = 1,
	SPATIALIZATION_MAX                       = 2
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 
{
	SOUNDDISTANCE_Normal                     = 0,
	SOUNDDISTANCE_InfiniteXYPlane            = 1,
	SOUNDDISTANCE_InfiniteXZPlane            = 2,
	SOUNDDISTANCE_InfiniteYZPlane            = 3,
	SOUNDDISTANCE_MAX                        = 4
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8 
{
	EVirtualizationMode::Disabled            = 0,
	EVirtualizationMode::PlayWhenSilent      = 1,
	EVirtualizationMode::Restart             = 2,
	EVirtualizationMode::EVirtualizationMode_MAX = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 
{
	EMaxConcurrentResolutionRule::PreventNew = 0,
	EMaxConcurrentResolutionRule::StopOldest = 1,
	EMaxConcurrentResolutionRule::StopFarthestThenPreventNew = 2,
	EMaxConcurrentResolutionRule::StopFarthestThenOldest = 3,
	EMaxConcurrentResolutionRule::StopLowestPriority = 4,
	EMaxConcurrentResolutionRule::StopQuietest = 5,
	EMaxConcurrentResolutionRule::StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule::Count      = 7,
	EMaxConcurrentResolutionRule::EMaxConcurrentResolutionRule_MAX = 8
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 
{
	SOUNDGROUP_Default                       = 0,
	SOUNDGROUP_Effects                       = 1,
	SOUNDGROUP_UI                            = 2,
	SOUNDGROUP_Music                         = 3,
	SOUNDGROUP_Voice                         = 4,
	SOUNDGROUP_GameSoundGroup1               = 5,
	SOUNDGROUP_GameSoundGroup2               = 6,
	SOUNDGROUP_GameSoundGroup3               = 7,
	SOUNDGROUP_GameSoundGroup4               = 8,
	SOUNDGROUP_GameSoundGroup5               = 9,
	SOUNDGROUP_GameSoundGroup6               = 10,
	SOUNDGROUP_GameSoundGroup7               = 11,
	SOUNDGROUP_GameSoundGroup8               = 12,
	SOUNDGROUP_GameSoundGroup9               = 13,
	SOUNDGROUP_GameSoundGroup10              = 14,
	SOUNDGROUP_GameSoundGroup11              = 15,
	SOUNDGROUP_GameSoundGroup12              = 16,
	SOUNDGROUP_GameSoundGroup13              = 17,
	SOUNDGROUP_GameSoundGroup14              = 18,
	SOUNDGROUP_GameSoundGroup15              = 19,
	SOUNDGROUP_GameSoundGroup16              = 20,
	SOUNDGROUP_GameSoundGroup17              = 21,
	SOUNDGROUP_GameSoundGroup18              = 22,
	SOUNDGROUP_GameSoundGroup19              = 23,
	SOUNDGROUP_GameSoundGroup20              = 24,
	SOUNDGROUP_MAX                           = 25
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 
{
	MPM_Normal                               = 0,
	MPM_Abs                                  = 1,
	MPM_Direct                               = 2,
	MPM_MAX                                  = 3
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 
{
	ESourceBusChannels::Mono                 = 0,
	ESourceBusChannels::Stereo               = 1,
	ESourceBusChannels::ESourceBusChannels_MAX = 2
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 
{
	ESourceBusSendLevelControlMethod::Linear = 0,
	ESourceBusSendLevelControlMethod::CustomCurve = 1,
	ESourceBusSendLevelControlMethod::Manual = 2,
	ESourceBusSendLevelControlMethod::ESourceBusSendLevelControlMethod_MAX = 3
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 
{
	ESendLevelControlMethod::Linear          = 0,
	ESendLevelControlMethod::CustomCurve     = 1,
	ESendLevelControlMethod::Manual          = 2,
	ESendLevelControlMethod::ESendLevelControlMethod_MAX = 3
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 
{
	EAudioRecordingExportType::SoundWave     = 0,
	EAudioRecordingExportType::WavFile       = 1,
	EAudioRecordingExportType::EAudioRecordingExportType_MAX = 2
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 
{
	ESoundWaveFFTSize::VerySmall_65          = 0,
	ESoundWaveFFTSize::Small_257             = 1,
	ESoundWaveFFTSize::Medium_513            = 2,
	ESoundWaveFFTSize::Large_1025            = 3,
	ESoundWaveFFTSize::VeryLarge_2049        = 4,
	ESoundWaveFFTSize::ESoundWaveFFTSize_MAX = 5
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 
{
	DTYPE_Setup                              = 0,
	DTYPE_Invalid                            = 1,
	DTYPE_Preview                            = 2,
	DTYPE_Native                             = 3,
	DTYPE_RealTime                           = 4,
	DTYPE_Procedural                         = 5,
	DTYPE_Xenon                              = 6,
	DTYPE_Streaming                          = 7,
	DTYPE_MAX                                = 8
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8 
{
	ESoundWaveLoadingBehavior::Inherited     = 0,
	ESoundWaveLoadingBehavior::RetainOnLoad  = 1,
	ESoundWaveLoadingBehavior::PrimeOnLoad   = 2,
	ESoundWaveLoadingBehavior::LoadOnDemand  = 3,
	ESoundWaveLoadingBehavior::ForceInline   = 4,
	ESoundWaveLoadingBehavior::Uninitialized = 255,
	ESoundWaveLoadingBehavior::ESoundWaveLoadingBehavior_MAX = 256
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 
{
	ESplineCoordinateSpace::Local            = 0,
	ESplineCoordinateSpace::World            = 1,
	ESplineCoordinateSpace::ESplineCoordinateSpace_MAX = 2
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 
{
	ESplinePointType::Linear                 = 0,
	ESplinePointType::Curve                  = 1,
	ESplinePointType::Constant               = 2,
	ESplinePointType::CurveClamped           = 3,
	ESplinePointType::CurveCustomTangent     = 4,
	ESplinePointType::ESplinePointType_MAX   = 5
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 
{
	ESplineMeshAxis::X                       = 0,
	ESplineMeshAxis::Y                       = 1,
	ESplineMeshAxis::Z                       = 2,
	ESplineMeshAxis::ESplineMeshAxis_MAX     = 3
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 
{
	OT_NumOfTriangles                        = 0,
	OT_MaxDeviation                          = 1,
	OT_MAX                                   = 2
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 
{
	IL_Off                                   = 0,
	IL_Lowest                                = 1,
	IL_Low                                   = 2,
	IL_Normal                                = 3,
	IL_High                                  = 4,
	IL_Highest                               = 5,
	TEMP_BROKEN2                             = 6,
	EImportanceLevel_MAX                     = 7
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8 
{
	NM_PreserveSmoothingGroups               = 0,
	NM_RecalculateNormals                    = 1,
	NM_RecalculateNormalsSmooth              = 2,
	NM_RecalculateNormalsHard                = 3,
	TEMP_BROKEN                              = 4,
	ENormalMode_MAX                          = 5
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 
{
	SLSH_QuadLayer                           = 0,
	SLSH_CylinderLayer                       = 1,
	SLSH_CubemapLayer                        = 2,
	SLSH_EquirectLayer                       = 3,
	SLSH_MAX                                 = 4
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 
{
	SLT_WorldLocked                          = 0,
	SLT_TrackerLocked                        = 1,
	SLT_FaceLocked                           = 2,
	SLT_MAX                                  = 3
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 
{
	OSM_Alpha                                = 0,
	OSM_ColorBrightness                      = 1,
	OSM_RedChannel                           = 2,
	OSM_GreenChannel                         = 3,
	OSM_BlueChannel                          = 4,
	OSM_MAX                                  = 5
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 
{
	BVC_FourVertices                         = 0,
	BVC_EightVertices                        = 1,
	BVC_MAX                                  = 2
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 
{
	EVRTA_TextTop                            = 0,
	EVRTA_TextCenter                         = 1,
	EVRTA_TextBottom                         = 2,
	EVRTA_QuadTop                            = 3,
	EVRTA_MAX                                = 4
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 
{
	EHTA_Left                                = 0,
	EHTA_Center                              = 1,
	EHTA_Right                               = 2,
	EHTA_MAX                                 = 3
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8 
{
	TLCA_Default                             = 0,
	TLCA_None                                = 1,
	TLCA_Lowest                              = 2,
	TLCA_Low                                 = 3,
	TLCA_Medium                              = 4,
	TLCA_High                                = 5,
	TLCA_Highest                             = 6,
	TLCA_MAX                                 = 7
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 
{
	TCQ_Default                              = 0,
	TCQ_Lowest                               = 1,
	TCQ_Low                                  = 2,
	TCQ_Medium                               = 3,
	TCQ_High                                 = 4,
	TCQ_Highest                              = 5,
	TCQ_MAX                                  = 6
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 
{
	TSF_Invalid                              = 0,
	TSF_G8                                   = 1,
	TSF_BGRA8                                = 2,
	TSF_BGRE8                                = 3,
	TSF_RGBA16                               = 4,
	TSF_RGBA16F                              = 5,
	TSF_RGBA8                                = 6,
	TSF_RGBE8                                = 7,
	TSF_G16                                  = 8,
	TSF_MAX                                  = 9
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8 
{
	TSAT_Uncompressed                        = 0,
	TSAT_PNGCompressed                       = 1,
	TSAT_DDSFile                             = 2,
	TSAT_MAX                                 = 3
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 
{
	TMC_ResidentMips                         = 0,
	TMC_AllMips                              = 1,
	TMC_AllMipsBiased                        = 2,
	TMC_MAX                                  = 3
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 
{
	CTM_Disabled                             = 0,
	CTM_NormalRoughnessToRed                 = 1,
	CTM_NormalRoughnessToGreen               = 2,
	CTM_NormalRoughnessToBlue                = 3,
	CTM_NormalRoughnessToAlpha               = 4,
	CTM_MAX                                  = 5
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8 
{
	TA_Wrap                                  = 0,
	TA_Clamp                                 = 1,
	TA_Mirror                                = 2,
	TA_MAX                                   = 3
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 
{
	TC_Default                               = 0,
	TC_Normalmap                             = 1,
	TC_Masks                                 = 2,
	TC_Grayscale                             = 3,
	TC_Displacementmap                       = 4,
	TC_VectorDisplacementmap                 = 5,
	TC_HDR                                   = 6,
	TC_EditorIcon                            = 7,
	TC_Alpha                                 = 8,
	TC_DistanceFieldFont                     = 9,
	TC_HDR_Compressed                        = 10,
	TC_BC7                                   = 11,
	TC_MAX                                   = 12
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8 
{
	ETextureMipLoadOptions::Default          = 0,
	ETextureMipLoadOptions::AllMips          = 1,
	ETextureMipLoadOptions::OnlyFirstMip     = 2,
	ETextureMipLoadOptions::ETextureMipLoadOptions_MAX = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 
{
	ETextureSamplerFilter::Point             = 0,
	ETextureSamplerFilter::Bilinear          = 1,
	ETextureSamplerFilter::Trilinear         = 2,
	ETextureSamplerFilter::AnisotropicPoint  = 3,
	ETextureSamplerFilter::AnisotropicLinear = 4,
	ETextureSamplerFilter::ETextureSamplerFilter_MAX = 5
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 
{
	ETexturePowerOfTwoSetting::None          = 0,
	ETexturePowerOfTwoSetting::PadToPowerOfTwo = 1,
	ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting::ETexturePowerOfTwoSetting_MAX = 3
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 
{
	TMGS_FromTextureGroup                    = 0,
	TMGS_SimpleAverage                       = 1,
	TMGS_Sharpen0                            = 2,
	TMGS_Sharpen1                            = 3,
	TMGS_Sharpen2                            = 4,
	TMGS_Sharpen3                            = 5,
	TMGS_Sharpen4                            = 6,
	TMGS_Sharpen5                            = 7,
	TMGS_Sharpen6                            = 8,
	TMGS_Sharpen7                            = 9,
	TMGS_Sharpen8                            = 10,
	TMGS_Sharpen9                            = 11,
	TMGS_Sharpen10                           = 12,
	TMGS_NoMipmaps                           = 13,
	TMGS_LeaveExistingMips                   = 14,
	TMGS_Blur1                               = 15,
	TMGS_Blur2                               = 16,
	TMGS_Blur3                               = 17,
	TMGS_Blur4                               = 18,
	TMGS_Blur5                               = 19,
	TMGS_Unfiltered                          = 20,
	TMGS_MAX                                 = 21
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 
{
	TEXTUREGROUP_World                       = 0,
	TEXTUREGROUP_WorldNormalMap              = 1,
	TEXTUREGROUP_WorldSpecular               = 2,
	TEXTUREGROUP_Character                   = 3,
	TEXTUREGROUP_CharacterNormalMap          = 4,
	TEXTUREGROUP_CharacterSpecular           = 5,
	TEXTUREGROUP_Weapon                      = 6,
	TEXTUREGROUP_WeaponNormalMap             = 7,
	TEXTUREGROUP_WeaponSpecular              = 8,
	TEXTUREGROUP_Vehicle                     = 9,
	TEXTUREGROUP_VehicleNormalMap            = 10,
	TEXTUREGROUP_VehicleSpecular             = 11,
	TEXTUREGROUP_Cinematic                   = 12,
	TEXTUREGROUP_Effects                     = 13,
	TEXTUREGROUP_EffectsNotFiltered          = 14,
	TEXTUREGROUP_Skybox                      = 15,
	TEXTUREGROUP_UI                          = 16,
	TEXTUREGROUP_Lightmap                    = 17,
	TEXTUREGROUP_RenderTarget                = 18,
	TEXTUREGROUP_MobileFlattened             = 19,
	TEXTUREGROUP_ProcBuilding_Face           = 20,
	TEXTUREGROUP_ProcBuilding_LightMap       = 21,
	TEXTUREGROUP_Shadowmap                   = 22,
	TEXTUREGROUP_ColorLookupTable            = 23,
	TEXTUREGROUP_Terrain_Heightmap           = 24,
	TEXTUREGROUP_Terrain_Weightmap           = 25,
	TEXTUREGROUP_Bokeh                       = 26,
	TEXTUREGROUP_IESLightProfile             = 27,
	TEXTUREGROUP_Pixels2D                    = 28,
	TEXTUREGROUP_HierarchicalLOD             = 29,
	TEXTUREGROUP_Impostor                    = 30,
	TEXTUREGROUP_ImpostorNormalDepth         = 31,
	TEXTUREGROUP_8BitData                    = 32,
	TEXTUREGROUP_16BitData                   = 33,
	TEXTUREGROUP_Project01                   = 34,
	TEXTUREGROUP_Project02                   = 35,
	TEXTUREGROUP_Project03                   = 36,
	TEXTUREGROUP_Project04                   = 37,
	TEXTUREGROUP_Project05                   = 38,
	TEXTUREGROUP_Project06                   = 39,
	TEXTUREGROUP_Project07                   = 40,
	TEXTUREGROUP_Project08                   = 41,
	TEXTUREGROUP_Project09                   = 42,
	TEXTUREGROUP_Project10                   = 43,
	TEXTUREGROUP_Project11                   = 44,
	TEXTUREGROUP_Project12                   = 45,
	TEXTUREGROUP_Project13                   = 46,
	TEXTUREGROUP_Project14                   = 47,
	TEXTUREGROUP_Project15                   = 48,
	TEXTUREGROUP_MAX                         = 49
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 
{
	RTF_R8                                   = 0,
	RTF_RG8                                  = 1,
	RTF_RGBA8                                = 2,
	RTF_RGBA8_SRGB                           = 3,
	RTF_R16f                                 = 4,
	RTF_RG16f                                = 5,
	RTF_RGBA16f                              = 6,
	RTF_R32f                                 = 7,
	RTF_RG32f                                = 8,
	RTF_RGBA32f                              = 9,
	RTF_RGB10A2                              = 10,
	RTF_MAX                                  = 11
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8 
{
	ETimecodeProviderSynchronizationState::Closed = 0,
	ETimecodeProviderSynchronizationState::Error = 1,
	ETimecodeProviderSynchronizationState::Synchronized = 2,
	ETimecodeProviderSynchronizationState::Synchronizing = 3,
	ETimecodeProviderSynchronizationState::ETimecodeProviderSynchronizationState_MAX = 4
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 
{
	ETimelineDirection::Forward              = 0,
	ETimelineDirection::Backward             = 1,
	ETimelineDirection::ETimelineDirection_MAX = 2
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 
{
	ETimeStretchCurveMapping::T_Original     = 0,
	ETimeStretchCurveMapping::T_TargetMin    = 1,
	ETimeStretchCurveMapping::T_TargetMax    = 2,
	ETimeStretchCurveMapping::MAX            = 3
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 
{
	TID_AuthorizeComplete                    = 0,
	TID_TweetUIComplete                      = 1,
	TID_RequestComplete                      = 2,
	TID_MAX                                  = 3
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 
{
	TRM_Get                                  = 0,
	TRM_Post                                 = 1,
	TRM_Delete                               = 2,
	TRM_MAX                                  = 3
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 
{
	UDSS_UpToDate                            = 0,
	UDSS_Dirty                               = 1,
	UDSS_Error                               = 2,
	UDSS_Duplicate                           = 3,
	UDSS_MAX                                 = 4
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 
{
	EUIScalingRule::ShortestSide             = 0,
	EUIScalingRule::LongestSide              = 1,
	EUIScalingRule::Horizontal               = 2,
	EUIScalingRule::Vertical                 = 3,
	EUIScalingRule::Custom                   = 4,
	EUIScalingRule::EUIScalingRule_MAX       = 5
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 
{
	ERenderFocusRule::Always                 = 0,
	ERenderFocusRule::NonPointer             = 1,
	ERenderFocusRule::NavigationOnly         = 2,
	ERenderFocusRule::Never                  = 3,
	ERenderFocusRule::ERenderFocusRule_MAX   = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 
{
	VFCO_Extrude                             = 0,
	VFCO_Revolve                             = 1,
	VFCO_MAX                                 = 2
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 
{
	EWindSourceType::Directional             = 0,
	EWindSourceType::Point                   = 1,
	EWindSourceType::EWindSourceType_MAX     = 2
};

// Enum Engine.ELevelScanRule
enum class ELevelScanRule : uint8 
{
	ELevelScanRule::All                      = 0,
	ELevelScanRule::EXT_World                = 1,
	ELevelScanRule::EXT_Only                 = 2,
	ELevelScanRule::Grid_World               = 3,
	ELevelScanRule::Grid_Only                = 4,
	ELevelScanRule::Landscape_Only           = 5,
	ELevelScanRule::WorldArt                 = 6,
	ELevelScanRule::Dev                      = 7,
	ELevelScanRule::Custom                   = 8,
	ELevelScanRule::ELevelScanRule_MAX       = 9
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 
{
	EPSCPoolMethod::None                     = 0,
	EPSCPoolMethod::AutoRelease              = 1,
	EPSCPoolMethod::ManualRelease            = 2,
	EPSCPoolMethod::ManualRelease_OnComplete = 3,
	EPSCPoolMethod::FreeInPool               = 4,
	EPSCPoolMethod::EPSCPoolMethod_MAX       = 5
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 
{
	VLM_VolumetricLightmap                   = 0,
	VLM_SparseVolumeLightingSamples          = 1,
	VLM_MAX                                  = 2
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 
{
	VIS_LeastAggressive                      = 0,
	VIS_ModeratelyAggressive                 = 1,
	VIS_MostAggressive                       = 2,
	VIS_Max                                  = 3
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x00)
struct FDistributionLookupTable 
{
	float                                         TimeScale;                                                   // 0x00(0x04)
	float                                         TimeBias;                                                    // 0x04(0x04)
	struct TArray<None>                           Values;                                                      // 0x08(0x10)
	char                                          Op;                                                          // 0x18(0x01)
	char                                          EntryCount;                                                  // 0x19(0x01)
	char                                          EntryStride;                                                 // 0x1a(0x01)
	char                                          SubEntryStride;                                              // 0x1b(0x01)
	char                                          LockFlag;                                                    // 0x1c(0x01)
	char                                          UnknownData1D[0x3];                                          // 0x1d(0x03)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x00)
struct FRawDistribution 
{
	struct FNone                                  Table;                                                       // 0x00(0x20)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x00)
struct FFloatDistribution 
{
	struct FNone                                  Table;                                                       // 0x00(0x20)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x00)
struct FVectorDistribution 
{
	struct FNone                                  Table;                                                       // 0x00(0x20)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x00)
struct FVector4Distribution 
{
	struct FNone                                  Table;                                                       // 0x00(0x20)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator 
{
	float                                         StiffnessConstant;                                           // 0x00(0x04)
	float                                         DampeningRatio;                                              // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator 
{
	float                                         StiffnessConstant;                                           // 0x00(0x04)
	float                                         DampeningRatio;                                              // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData 
{
	struct FString                                ArgumentName;                                                // 0x00(0x10)
	char                                          ArgumentValueType;                                           // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
	struct FText                                  ArgumentValue;                                               // 0x18(0x18)
	uint32_t                                      ArgumentValueInt;                                            // 0x30(0x04)
	float                                         ArgumentValueFloat;                                          // 0x34(0x04)
	enum class None                               ArgumentValueGender;                                         // 0x38(0x01)
	char                                          UnknownData39[0x7];                                          // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x0c (Inherited: 0x00)
struct FExpressionInput 
{
	uint32_t                                      OutputIndex;                                                 // 0x00(0x04)
	struct FName                                  ExpressionName;                                              // 0x04(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x10 (Inherited: 0x0c)
struct FMaterialAttributesInput : FExpressionInput 
{
	uint32_t                                      PropertyConnectedBitmask;                                    // 0x0c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x08 (Inherited: 0x00)
struct FExpressionOutput 
{
	struct FName                                  OutputName;                                                  // 0x00(0x08)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x0c (Inherited: 0x00)
struct FMaterialInput 
{
	uint32_t                                      OutputIndex;                                                 // 0x00(0x04)
	struct FName                                  ExpressionName;                                              // 0x04(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FColorMaterialInput : FMaterialInput 
{
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FScalarMaterialInput : FMaterialInput 
{
};

// ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FShadingModelMaterialInput : FMaterialInput 
{
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVectorMaterialInput : FMaterialInput 
{
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVector2MaterialInput : FMaterialInput 
{
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult 
{
	char                                          bBlockingHit : 0;                                            // 0x00(0x01)
	char                                          bStartPenetrating : 0;                                       // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	uint32_t                                      FaceIndex;                                                   // 0x04(0x04)
	float                                         Time;                                                        // 0x08(0x04)
	float                                         Distance;                                                    // 0x0c(0x04)
	struct FNone                                  Location;                                                    // 0x10(0x0c)
	struct FNone                                  ImpactPoint;                                                 // 0x1c(0x0c)
	struct FNone                                  Normal;                                                      // 0x28(0x0c)
	struct FNone                                  ImpactNormal;                                                // 0x34(0x0c)
	struct FNone                                  TraceStart;                                                  // 0x40(0x0c)
	struct FNone                                  TraceEnd;                                                    // 0x4c(0x0c)
	float                                         PenetrationDepth;                                            // 0x58(0x04)
	uint32_t                                      Item;                                                        // 0x5c(0x04)
	struct TWeakObjectPtr<struct FNone>           PhysMaterial;                                                // 0x60(0x08)
	struct TWeakObjectPtr<struct FNone>           Actor;                                                       // 0x68(0x08)
	struct TWeakObjectPtr<struct FNone>           Component;                                                   // 0x70(0x08)
	struct FName                                  BoneName;                                                    // 0x78(0x08)
	struct FName                                  MyBoneName;                                                  // 0x80(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector 
{
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector 
{
};

// ScriptStruct Engine.MKReplayListItemInfo
// Size: 0x128 (Inherited: 0x00)
struct FMKReplayListItemInfo 
{
	struct FString                                Name;                                                        // 0x00(0x10)
	struct FString                                FriendlyName;                                                // 0x10(0x10)
	struct FNone                                  Timestamp;                                                   // 0x20(0x08)
	uint32_t                                      SizeInBytes;                                                 // 0x28(0x04)
	uint32_t                                      LengthInMS;                                                  // 0x2c(0x04)
	uint32_t                                      NumViewers;                                                  // 0x30(0x04)
	char                                          bIsLive : 0;                                                 // 0x34(0x01)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	uint32_t                                      ChangeList;                                                  // 0x38(0x04)
	char                                          bSouldKeep : 0;                                              // 0x3c(0x01)
	char                                          UnknownData3C[0x1];                                          // 0x3c(0x01)
	char                                          bIncomplete : 0;                                             // 0x3d(0x01)
	char                                          UnknownData3D[0x1];                                          // 0x3d(0x01)
	char                                          bIsVersionCompatible : 0;                                    // 0x3e(0x01)
	char                                          UnknownData3E[0x1];                                          // 0x3e(0x01)
	char                                          bIsCorrupted : 0;                                            // 0x3f(0x01)
	char                                          UnknownData3F[0x1];                                          // 0x3f(0x01)
	struct FString                                GameVersion;                                                 // 0x40(0x10)
	struct FString                                RecordUserId;                                                // 0x50(0x10)
	struct FString                                RecordUserNickName;                                          // 0x60(0x10)
	struct FString                                MapName;                                                     // 0x70(0x10)
	uint32_t                                      BattleMode;                                                  // 0x80(0x04)
	char                                          FPP : 0;                                                     // 0x84(0x01)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
	uint32_t                                      TotalTeamCount;                                              // 0x88(0x04)
	uint32_t                                      FinalRank;                                                   // 0x8c(0x04)
	uint32_t                                      Kill;                                                        // 0x90(0x04)
	float                                         LifeTime;                                                    // 0x94(0x04)
	float                                         TotalDamage;                                                 // 0x98(0x04)
	char                                          UnknownData9C[0x4];                                          // 0x9c(0x04)
	struct FString                                BlueZoneTitle;                                               // 0xa0(0x10)
	uint32_t                                      BlueZoneMaxPlayerCount;                                      // 0xb0(0x04)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
	struct TArray<None>                           TeamInfos;                                                   // 0xb8(0x10)
	float                                         KillcamStartTime;                                            // 0xc8(0x04)
	float                                         KillcamEndTime;                                              // 0xcc(0x04)
	char                                          bHaveCameraEvent : 0;                                        // 0xd0(0x01)
	char                                          UnknownDataD0[0x8];                                          // 0xd0(0x08)
	struct FString                                AdditionalInfo;                                              // 0xd8(0x10)
	uint32_t                                      MK3DReplayVersion;                                           // 0xe8(0x04)
	uint32_t                                      NetworkVersion;                                              // 0xec(0x04)
	struct TArray<None>                           KillEvent;                                                   // 0xf0(0x10)
	struct FNone                                  ReportInfo;                                                  // 0x100(0x28)
};

// ScriptStruct Engine.MKReplayReportInfo
// Size: 0x28 (Inherited: 0x00)
struct FMKReplayReportInfo 
{
	struct FString                                ReporterName;                                                // 0x00(0x10)
	struct FString                                SuspectName;                                                 // 0x10(0x10)
	uint32_t                                      ReportType;                                                  // 0x20(0x04)
	uint32_t                                      ReplayTime;                                                  // 0x24(0x04)
};

// ScriptStruct Engine.ReplayKillEvent
// Size: 0x28 (Inherited: 0x00)
struct FReplayKillEvent 
{
	struct FString                                KillerName;                                                  // 0x00(0x10)
	struct FString                                VictimName;                                                  // 0x10(0x10)
	uint32_t                                      TimeSeconds;                                                 // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct Engine.MKReplayTeamInfo
// Size: 0x38 (Inherited: 0x00)
struct FMKReplayTeamInfo 
{
	struct FString                                NickName;                                                    // 0x00(0x10)
	struct FString                                DeckName;                                                    // 0x10(0x10)
	struct FString                                WeaponName;                                                  // 0x20(0x10)
	uint32_t                                      ClassLevel;                                                  // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x00)
struct FBranchingPointNotifyPayload 
{
	char                                          UnknownData0[0x20];                                          // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference 
{
	struct FNone*                                 MemberParent;                                                // 0x00(0x08)
	struct FName                                  MemberName;                                                  // 0x08(0x08)
	struct FNone                                  MemberGuid;                                                  // 0x10(0x10)
};

// ScriptStruct Engine.TickFunction
// Size: 0x28 (Inherited: 0x00)
struct FTickFunction 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	char                                          TickGroup;                                                   // 0x08(0x01)
	char                                          EndTickGroup;                                                // 0x09(0x01)
	char                                          bTickEvenWhenPaused : 0;                                     // 0x0a(0x01)
	char                                          bCanEverTick : 0;                                            // 0x0a(0x01)
	char                                          bStartWithTickEnabled : 0;                                   // 0x0a(0x01)
	char                                          bAllowTickOnDedicatedServer : 0;                             // 0x0a(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
	float                                         TickInterval;                                                // 0x0c(0x04)
	char                                          UnknownData10[0x18];                                         // 0x10(0x18)
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorComponentTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x00)
struct FSubtitleCue 
{
	struct FText                                  Text;                                                        // 0x00(0x18)
	float                                         Time;                                                        // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.InterpControlPoint
// Size: 0x1c (Inherited: 0x00)
struct FInterpControlPoint 
{
	struct FNone                                  PositionControlPoint;                                        // 0x00(0x0c)
	char                                          bPositionIsRelative : 0;                                     // 0x0c(0x01)
	char                                          UnknownDataC[0x10];                                          // 0x0c(0x10)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x00)
struct FPlatformInterfaceDelegateResult 
{
	char                                          bSuccessful : 0;                                             // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone                                  Data;                                                        // 0x08(0x30)
};

// ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x00)
struct FPlatformInterfaceData 
{
	struct FName                                  DataName;                                                    // 0x00(0x08)
	char                                          Type;                                                        // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	uint32_t                                      IntValue;                                                    // 0x0c(0x04)
	float                                         FloatValue;                                                  // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                StringValue;                                                 // 0x18(0x10)
	struct FNone*                                 ObjectValue;                                                 // 0x28(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory 
{
	struct TArray<None>                           Samples;                                                     // 0x00(0x10)
	float                                         MaxSamples;                                                  // 0x10(0x04)
	float                                         MinValue;                                                    // 0x14(0x04)
	float                                         MaxValue;                                                    // 0x18(0x04)
	char                                          bAutoAdjustMinMax : 0;                                       // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x00)
struct FLatentActionInfo 
{
	uint32_t                                      Linkage;                                                     // 0x00(0x04)
	uint32_t                                      UUID;                                                        // 0x04(0x04)
	struct FName                                  ExecutionFunction;                                           // 0x08(0x08)
	struct FNone*                                 CallbackTarget;                                              // 0x10(0x08)
};

// ScriptStruct Engine.TimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FTimerHandle 
{
	uint64_t                                      Handle;                                                      // 0x00(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
};

// ScriptStruct Engine.GenericStruct
// Size: 0x04 (Inherited: 0x00)
struct FGenericStruct 
{
	uint32_t                                      Data;                                                        // 0x00(0x04)
};

// ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x00)
struct FUserActivity 
{
	struct FString                                ActionName;                                                  // 0x00(0x10)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x00)
struct FURL 
{
	struct FString                                Protocol;                                                    // 0x00(0x10)
	struct FString                                Host;                                                        // 0x10(0x10)
	uint32_t                                      Port;                                                        // 0x20(0x04)
	uint32_t                                      Valid;                                                       // 0x24(0x04)
	struct FString                                Map;                                                         // 0x28(0x10)
	struct FString                                RedirectURL;                                                 // 0x38(0x10)
	struct TArray<None>                           Op;                                                          // 0x48(0x10)
	struct FString                                Portal;                                                      // 0x58(0x10)
};

// ScriptStruct Engine.RepAttachment
// Size: 0x40 (Inherited: 0x00)
struct FRepAttachment 
{
	struct FNone*                                 AttachParent;                                                // 0x00(0x08)
	struct FNone                                  LocationOffset;                                              // 0x08(0x0c)
	struct FNone                                  RelativeScale3D;                                             // 0x14(0x0c)
	struct FNone                                  RotationOffset;                                              // 0x20(0x0c)
	struct FName                                  AttachSocket;                                                // 0x2c(0x08)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct FNone*                                 AttachComponent;                                             // 0x38(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector 
{
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement 
{
	struct FNone                                  LinearVelocity;                                              // 0x00(0x0c)
	struct FNone                                  AngularVelocity;                                             // 0x0c(0x0c)
	struct FNone                                  Location;                                                    // 0x18(0x0c)
	struct FNone                                  Rotation;                                                    // 0x24(0x0c)
	char                                          bSimulatedPhysicSleep : 0;                                   // 0x30(0x01)
	char                                          bRepPhysics : 0;                                             // 0x30(0x01)
	char                                          UnknownData30[0x1];                                          // 0x30(0x01)
	enum class None                               LocationQuantizationLevel;                                   // 0x31(0x01)
	enum class None                               VelocityQuantizationLevel;                                   // 0x32(0x01)
	enum class None                               RotationQuantizationLevel;                                   // 0x33(0x01)
};

// ScriptStruct Engine.ActorTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x28 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper 
{
	char                                          UnknownData1[0x17];                                          // 0x01(0x17)
	struct TArray<None>                           ReplicationBytes;                                            // 0x18(0x10)
};

// ScriptStruct Engine.ForceFeedbackParameters
// Size: 0x0c (Inherited: 0x00)
struct FForceFeedbackParameters 
{
	struct FName                                  Tag;                                                         // 0x00(0x08)
	char                                          bLooping : 0;                                                // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bIgnoreTimeDilation : 0;                                     // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bPlayWhilePaused : 0;                                        // 0x0a(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetTransitionParams 
{
	float                                         BlendTime;                                                   // 0x00(0x04)
	char                                          BlendFunction;                                               // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
	float                                         BlendExp;                                                    // 0x08(0x04)
	char                                          bLockOutgoing : 0;                                           // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x10 (Inherited: 0x00)
struct FUpdateLevelStreamingLevelStatus 
{
	struct FName                                  PackageName;                                                 // 0x00(0x08)
	uint32_t                                      LODIndex;                                                    // 0x08(0x04)
	char                                          bNewShouldBeLoaded : 0;                                      // 0x0c(0x01)
	char                                          bNewShouldBeVisible : 0;                                     // 0x0c(0x01)
	char                                          bNewShouldBlockOnLoad : 0;                                   // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x14 (Inherited: 0x00)
struct FUpdateLevelVisibilityLevelInfo 
{
	struct FName                                  PackageName;                                                 // 0x00(0x08)
	struct FName                                  Filename;                                                    // 0x08(0x08)
	char                                          bIsVisible : 0;                                              // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveForceFeedbackEffect 
{
	struct FNone*                                 ForceFeedbackEffect;                                         // 0x00(0x08)
	char                                          UnknownData8[0x10];                                          // 0x08(0x10)
};

// ScriptStruct Engine.UserWidgetInfoForReplay
// Size: 0x20 (Inherited: 0x00)
struct FUserWidgetInfoForReplay 
{
	struct FString                                KeyName;                                                     // 0x00(0x10)
	struct FString                                FilePath;                                                    // 0x10(0x10)
};

// ScriptStruct Engine.FractureEffect
// Size: 0x18 (Inherited: 0x00)
struct FFractureEffect 
{
	struct FNone*                                 ParticleSystem;                                              // 0x00(0x08)
	struct FNone*                                 Sound;                                                       // 0x08(0x08)
	enum class None                               SoundType;                                                   // 0x10(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x38 (Inherited: 0x00)
struct FRootMotionSourceGroup 
{
	char                                          UnknownData0[0x28];                                          // 0x00(0x28)
	char                                          bHasAdditiveSources : 0;                                     // 0x28(0x01)
	char                                          bHasOverrideSources : 0;                                     // 0x28(0x01)
	char                                          bHasOverrideSourcesWithIgnoreZAccumulate : 0;                // 0x28(0x01)
	char                                          bIsAdditiveVelocityApplied : 0;                              // 0x28(0x01)
	char                                          UnknownData28[0x1];                                          // 0x28(0x01)
	struct FNone                                  LastAccumulatedSettings;                                     // 0x29(0x01)
	char                                          UnknownData2A[0x2];                                          // 0x2a(0x02)
	struct FNone                                  LastPreAdditiveVelocity;                                     // 0x2c(0x0c)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector 
{
};

// ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceSettings 
{
	char                                          Flags;                                                       // 0x00(0x01)
};

// ScriptStruct Engine.RepRootMotionMontage
// Size: 0x98 (Inherited: 0x00)
struct FRepRootMotionMontage 
{
	char                                          bIsActive : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 AnimMontage;                                                 // 0x08(0x08)
	float                                         Position;                                                    // 0x10(0x04)
	struct FNone                                  Location;                                                    // 0x14(0x0c)
	struct FNone                                  Rotation;                                                    // 0x20(0x0c)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct FNone*                                 MovementBase;                                                // 0x30(0x08)
	struct FName                                  MovementBaseBoneName;                                        // 0x38(0x08)
	char                                          bRelativePosition : 0;                                       // 0x40(0x01)
	char                                          UnknownData40[0x1];                                          // 0x40(0x01)
	char                                          bRelativeRotation : 0;                                       // 0x41(0x01)
	char                                          UnknownData41[0x7];                                          // 0x41(0x07)
	struct FNone                                  AuthoritativeRootMotion;                                     // 0x48(0x38)
	struct FNone                                  Acceleration;                                                // 0x80(0x0c)
	struct FNone                                  LinearVelocity;                                              // 0x8c(0x0c)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0xa0 (Inherited: 0x00)
struct FSimulatedRootMotionReplicatedMove 
{
	float                                         Time;                                                        // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone                                  RootMotion;                                                  // 0x08(0x98)
};

// ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x00)
struct FRootMotionMovementParams 
{
	char                                          bHasRootMotion : 0;                                          // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         BlendWeight;                                                 // 0x04(0x04)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  RootMotionTransform;                                         // 0x10(0x30)
};

// ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 (Inherited: 0x00)
struct FBasedMovementInfo 
{
	struct FNone*                                 MovementBase;                                                // 0x00(0x08)
	struct FName                                  BoneName;                                                    // 0x08(0x08)
	struct FNone                                  Location;                                                    // 0x10(0x0c)
	struct FNone                                  Rotation;                                                    // 0x1c(0x0c)
	char                                          bServerHasBaseComponent : 0;                                 // 0x28(0x01)
	char                                          UnknownData28[0x1];                                          // 0x28(0x01)
	char                                          bRelativeRotation : 0;                                       // 0x29(0x01)
	char                                          UnknownData29[0x1];                                          // 0x29(0x01)
	char                                          bServerHasVelocity : 0;                                      // 0x2a(0x01)
	char                                          UnknownData2A[0x6];                                          // 0x2a(0x06)
};

// ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x00)
struct FTimeline 
{
	char                                          LengthMode;                                                  // 0x00(0x01)
	char                                          bLooping : 0;                                                // 0x01(0x01)
	char                                          bReversePlayback : 0;                                        // 0x01(0x01)
	char                                          bPlaying : 0;                                                // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         Length;                                                      // 0x04(0x04)
	float                                         PlayRate;                                                    // 0x08(0x04)
	float                                         Position;                                                    // 0x0c(0x04)
	struct TArray<None>                           Events;                                                      // 0x10(0x10)
	struct TArray<None>                           InterpVectors;                                               // 0x20(0x10)
	struct TArray<None>                           InterpFloats;                                                // 0x30(0x10)
	struct TArray<None>                           InterpLinearColors;                                          // 0x40(0x10)
	struct FDelegate                              TimelinePostUpdateFunc;                                      // 0x50(0x10)
	struct FDelegate                              TimelineFinishedFunc;                                        // 0x60(0x10)
	struct TWeakObjectPtr<struct FNone>           PropertySetObject;                                           // 0x70(0x08)
	struct FName                                  DirectionPropertyName;                                       // 0x78(0x08)
	char                                          UnknownData80[0x18];                                         // 0x80(0x18)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineLinearColorTrack 
{
	struct FNone*                                 LinearColorCurve;                                            // 0x00(0x08)
	struct FDelegate                              InterpFunc;                                                  // 0x08(0x10)
	struct FName                                  TrackName;                                                   // 0x18(0x08)
	struct FName                                  LinearColorPropertyName;                                     // 0x20(0x08)
	char                                          UnknownData28[0x18];                                         // 0x28(0x18)
};

// ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineFloatTrack 
{
	struct FNone*                                 FloatCurve;                                                  // 0x00(0x08)
	struct FDelegate                              InterpFunc;                                                  // 0x08(0x10)
	struct FName                                  TrackName;                                                   // 0x18(0x08)
	struct FName                                  FloatPropertyName;                                           // 0x20(0x08)
	char                                          UnknownData28[0x18];                                         // 0x28(0x18)
};

// ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineVectorTrack 
{
	struct FNone*                                 VectorCurve;                                                 // 0x00(0x08)
	struct FDelegate                              InterpFunc;                                                  // 0x08(0x10)
	struct FName                                  TrackName;                                                   // 0x18(0x08)
	struct FName                                  VectorPropertyName;                                          // 0x20(0x08)
	char                                          UnknownData28[0x18];                                         // 0x28(0x18)
};

// ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x00)
struct FTimelineEventEntry 
{
	float                                         Time;                                                        // 0x00(0x04)
	struct FDelegate                              EventFunc;                                                   // 0x04(0x10)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle 
{
	struct FNone*                                 DataTable;                                                   // 0x00(0x08)
	struct FName                                  RowName;                                                     // 0x08(0x08)
};

// ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageEvent 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 DamageTypeClass;                                             // 0x08(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.RadialDamageEvent
// Size: 0x48 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent 
{
	struct FNone                                  Params;                                                      // 0x10(0x14)
	struct FNone                                  Origin;                                                      // 0x24(0x0c)
	struct TArray<None>                           ComponentHits;                                               // 0x30(0x10)
	char                                          UnknownData40[0x8];                                          // 0x40(0x08)
};

// ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FRadialDamageParams 
{
	float                                         BaseDamage;                                                  // 0x00(0x04)
	float                                         MinimumDamage;                                               // 0x04(0x04)
	float                                         InnerRadius;                                                 // 0x08(0x04)
	float                                         OuterRadius;                                                 // 0x0c(0x04)
	float                                         DamageFalloff;                                               // 0x10(0x04)
};

// ScriptStruct Engine.PointDamageEvent
// Size: 0xa8 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent 
{
	float                                         Damage;                                                      // 0x10(0x04)
	struct FNone                                  ShotDirection;                                               // 0x14(0x0c)
	struct FNone                                  HitInfo;                                                     // 0x20(0x88)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x5c0 (Inherited: 0x00)
struct FPostProcessSettings 
{
	char                                          bOverride_WhiteTemp : 0;                                     // 0x00(0x01)
	char                                          bOverride_WhiteTint : 0;                                     // 0x00(0x01)
	char                                          bOverride_ColorSaturation : 0;                               // 0x00(0x01)
	char                                          bOverride_ColorContrast : 0;                                 // 0x00(0x01)
	char                                          bOverride_ColorGamma : 0;                                    // 0x00(0x01)
	char                                          bOverride_ColorGain : 0;                                     // 0x00(0x01)
	char                                          bOverride_ColorOffset : 0;                                   // 0x00(0x01)
	char                                          bOverride_ColorSaturationShadows : 0;                        // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bOverride_ColorContrastShadows : 0;                          // 0x01(0x01)
	char                                          bOverride_ColorGammaShadows : 0;                             // 0x01(0x01)
	char                                          bOverride_ColorGainShadows : 0;                              // 0x01(0x01)
	char                                          bOverride_ColorOffsetShadows : 0;                            // 0x01(0x01)
	char                                          bOverride_ColorSaturationMidtones : 0;                       // 0x01(0x01)
	char                                          bOverride_ColorContrastMidtones : 0;                         // 0x01(0x01)
	char                                          bOverride_ColorGammaMidtones : 0;                            // 0x01(0x01)
	char                                          bOverride_ColorGainMidtones : 0;                             // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bOverride_ColorOffsetMidtones : 0;                           // 0x02(0x01)
	char                                          bOverride_ColorSaturationHighlights : 0;                     // 0x02(0x01)
	char                                          bOverride_ColorContrastHighlights : 0;                       // 0x02(0x01)
	char                                          bOverride_ColorGammaHighlights : 0;                          // 0x02(0x01)
	char                                          bOverride_ColorGainHighlights : 0;                           // 0x02(0x01)
	char                                          bOverride_ColorOffsetHighlights : 0;                         // 0x02(0x01)
	char                                          bOverride_ColorCorrectionShadowsMax : 0;                     // 0x02(0x01)
	char                                          bOverride_ColorCorrectionHighlightsMin : 0;                  // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bOverride_BlueCorrection : 0;                                // 0x03(0x01)
	char                                          bOverride_ExpandGamut : 0;                                   // 0x03(0x01)
	char                                          bOverride_FilmWhitePoint : 0;                                // 0x03(0x01)
	char                                          bOverride_FilmSaturation : 0;                                // 0x03(0x01)
	char                                          bOverride_FilmChannelMixerRed : 0;                           // 0x03(0x01)
	char                                          bOverride_FilmChannelMixerGreen : 0;                         // 0x03(0x01)
	char                                          bOverride_FilmChannelMixerBlue : 0;                          // 0x03(0x01)
	char                                          bOverride_FilmContrast : 0;                                  // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
	char                                          bOverride_FilmDynamicRange : 0;                              // 0x04(0x01)
	char                                          bOverride_FilmHealAmount : 0;                                // 0x04(0x01)
	char                                          bOverride_FilmToeAmount : 0;                                 // 0x04(0x01)
	char                                          bOverride_FilmShadowTint : 0;                                // 0x04(0x01)
	char                                          bOverride_FilmShadowTintBlend : 0;                           // 0x04(0x01)
	char                                          bOverride_FilmShadowTintAmount : 0;                          // 0x04(0x01)
	char                                          bOverride_FilmSlope : 0;                                     // 0x04(0x01)
	char                                          bOverride_FilmToe : 0;                                       // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
	char                                          bOverride_FilmShoulder : 0;                                  // 0x05(0x01)
	char                                          bOverride_FilmBlackClip : 0;                                 // 0x05(0x01)
	char                                          bOverride_FilmWhiteClip : 0;                                 // 0x05(0x01)
	char                                          bOverride_FilmicTonemapper : 0;                              // 0x05(0x01)
	char                                          bOverride_TonemapperSharpen : 0;                             // 0x05(0x01)
	char                                          bOverride_UseVolumetricFogEmissive : 0;                      // 0x05(0x01)
	char                                          bOverride_VolumetricFogEmissive : 0;                         // 0x05(0x01)
	char                                          bOverride_SceneColorTint : 0;                                // 0x05(0x01)
	char                                          UnknownData5[0x1];                                           // 0x05(0x01)
	char                                          bOverride_SceneFringeIntensity : 0;                          // 0x06(0x01)
	char                                          bOverride_ChromaticAberrationStartOffset : 0;                // 0x06(0x01)
	char                                          bOverride_AmbientCubemapTint : 0;                            // 0x06(0x01)
	char                                          bOverride_AmbientCubemapIntensity : 0;                       // 0x06(0x01)
	char                                          bOverride_BloomMethod : 0;                                   // 0x06(0x01)
	char                                          bOverride_BloomIntensity : 0;                                // 0x06(0x01)
	char                                          bOverride_BloomThreshold : 0;                                // 0x06(0x01)
	char                                          bOverride_Bloom1Tint : 0;                                    // 0x06(0x01)
	char                                          UnknownData6[0x1];                                           // 0x06(0x01)
	char                                          bOverride_Bloom1Size : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom2Size : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom2Tint : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom3Tint : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom3Size : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom4Tint : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom4Size : 0;                                    // 0x07(0x01)
	char                                          bOverride_Bloom5Tint : 0;                                    // 0x07(0x01)
	char                                          UnknownData7[0x1];                                           // 0x07(0x01)
	char                                          bOverride_Bloom5Size : 0;                                    // 0x08(0x01)
	char                                          bOverride_Bloom6Tint : 0;                                    // 0x08(0x01)
	char                                          bOverride_Bloom6Size : 0;                                    // 0x08(0x01)
	char                                          bOverride_BloomSizeScale : 0;                                // 0x08(0x01)
	char                                          bOverride_BloomConvolutionTexture : 0;                       // 0x08(0x01)
	char                                          bOverride_BloomConvolutionSize : 0;                          // 0x08(0x01)
	char                                          bOverride_BloomConvolutionCenterUV : 0;                      // 0x08(0x01)
	char                                          bOverride_BloomConvolutionPreFilter : 0;                     // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bOverride_BloomConvolutionPreFilterMin : 0;                  // 0x09(0x01)
	char                                          bOverride_BloomConvolutionPreFilterMax : 0;                  // 0x09(0x01)
	char                                          bOverride_BloomConvolutionPreFilterMult : 0;                 // 0x09(0x01)
	char                                          bOverride_BloomConvolutionBufferScale : 0;                   // 0x09(0x01)
	char                                          bOverride_BloomDirtMaskIntensity : 0;                        // 0x09(0x01)
	char                                          bOverride_BloomDirtMaskTint : 0;                             // 0x09(0x01)
	char                                          bOverride_BloomDirtMask : 0;                                 // 0x09(0x01)
	char                                          bOverride_CameraShutterSpeed : 0;                            // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bOverride_CameraISO : 0;                                     // 0x0a(0x01)
	char                                          bOverride_AutoExposureMethod : 0;                            // 0x0a(0x01)
	char                                          bOverride_AutoExposureLowPercent : 0;                        // 0x0a(0x01)
	char                                          bOverride_AutoExposureHighPercent : 0;                       // 0x0a(0x01)
	char                                          bOverride_AutoExposureMinBrightness : 0;                     // 0x0a(0x01)
	char                                          bOverride_AutoExposureMaxBrightness : 0;                     // 0x0a(0x01)
	char                                          bOverride_AutoExposureCalibrationConstant : 0;               // 0x0a(0x01)
	char                                          bOverride_AutoExposureSpeedUp : 0;                           // 0x0a(0x01)
	char                                          UnknownDataA[0x1];                                           // 0x0a(0x01)
	char                                          bOverride_AutoExposureSpeedDown : 0;                         // 0x0b(0x01)
	char                                          bOverride_AutoExposureBias : 0;                              // 0x0b(0x01)
	char                                          bOverride_AutoExposureBiasCurve : 0;                         // 0x0b(0x01)
	char                                          bOverride_AutoExposureMeterMask : 0;                         // 0x0b(0x01)
	char                                          bOverride_AutoExposureApplyPhysicalCameraExposure : 0;       // 0x0b(0x01)
	char                                          bOverride_HistogramLogMin : 0;                               // 0x0b(0x01)
	char                                          bOverride_HistogramLogMax : 0;                               // 0x0b(0x01)
	char                                          bOverride_LensFlareIntensity : 0;                            // 0x0b(0x01)
	char                                          UnknownDataB[0x1];                                           // 0x0b(0x01)
	char                                          bOverride_LensFlareTint : 0;                                 // 0x0c(0x01)
	char                                          bOverride_LensFlareTints : 0;                                // 0x0c(0x01)
	char                                          bOverride_LensFlareBokehSize : 0;                            // 0x0c(0x01)
	char                                          bOverride_LensFlareBokehShape : 0;                           // 0x0c(0x01)
	char                                          bOverride_LensFlareThreshold : 0;                            // 0x0c(0x01)
	char                                          bOverride_VignetteIntensity : 0;                             // 0x0c(0x01)
	char                                          bOverride_GrainIntensity : 0;                                // 0x0c(0x01)
	char                                          bOverride_GrainJitter : 0;                                   // 0x0c(0x01)
	char                                          UnknownDataC[0x1];                                           // 0x0c(0x01)
	char                                          bOverride_AmbientOcclusionIntensity : 0;                     // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionIntensitySubsurfaceProfile : 0;    // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionStaticFraction : 0;                // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionRadius : 0;                        // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionFadeDistance : 0;                  // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionFadeRadius : 0;                    // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionDistance : 0;                      // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionRadiusInWS : 0;                    // 0x0d(0x01)
	char                                          UnknownDataD[0x1];                                           // 0x0d(0x01)
	char                                          bOverride_AmbientOcclusionPower : 0;                         // 0x0e(0x01)
	char                                          bOverride_AmbientOcclusionBias : 0;                          // 0x0e(0x01)
	char                                          bOverride_AmbientOcclusionQuality : 0;                       // 0x0e(0x01)
	char                                          bOverride_AmbientOcclusionMipBlend : 0;                      // 0x0e(0x01)
	char                                          bOverride_AmbientOcclusionMipScale : 0;                      // 0x0e(0x01)
	char                                          bOverride_AmbientOcclusionMipThreshold : 0;                  // 0x0e(0x01)
	char                                          UnknownDataE[0x2];                                           // 0x0e(0x02)
	char                                          bOverride_RayTracingAO : 0;                                  // 0x10(0x01)
	char                                          bOverride_RayTracingAOSamplesPerPixel : 0;                   // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	char                                          bOverride_LPVIntensity : 0;                                  // 0x14(0x01)
	char                                          bOverride_LPVDirectionalOcclusionIntensity : 0;              // 0x14(0x01)
	char                                          bOverride_LPVDirectionalOcclusionRadius : 0;                 // 0x14(0x01)
	char                                          bOverride_LPVDiffuseOcclusionExponent : 0;                   // 0x14(0x01)
	char                                          bOverride_LPVSpecularOcclusionExponent : 0;                  // 0x14(0x01)
	char                                          bOverride_LPVDiffuseOcclusionIntensity : 0;                  // 0x14(0x01)
	char                                          bOverride_LPVSpecularOcclusionIntensity : 0;                 // 0x14(0x01)
	char                                          bOverride_LPVSize : 0;                                       // 0x14(0x01)
	char                                          UnknownData14[0x1];                                          // 0x14(0x01)
	char                                          bOverride_LPVSecondaryOcclusionIntensity : 0;                // 0x15(0x01)
	char                                          bOverride_LPVSecondaryBounceIntensity : 0;                   // 0x15(0x01)
	char                                          bOverride_LPVGeometryVolumeBias : 0;                         // 0x15(0x01)
	char                                          bOverride_LPVVplInjectionBias : 0;                           // 0x15(0x01)
	char                                          bOverride_LPVEmissiveInjectionIntensity : 0;                 // 0x15(0x01)
	char                                          bOverride_LPVFadeRange : 0;                                  // 0x15(0x01)
	char                                          bOverride_LPVDirectionalOcclusionFadeRange : 0;              // 0x15(0x01)
	char                                          UnknownData15[0x3];                                          // 0x15(0x03)
	char                                          bOverride_LPVReflectionIntensity : 0;                        // 0x18(0x01)
	char                                          bOverride_LPVReflectionLength : 0;                           // 0x18(0x01)
	char                                          bOverride_LPVReflectionOcclusion : 0;                        // 0x18(0x01)
	char                                          bOverride_LPVHairSpecularLightingIntensity : 0;              // 0x18(0x01)
	char                                          bOverride_LPVHairSpecularOcclusionIntensity : 0;             // 0x18(0x01)
	char                                          bOverride_LPVHairRoughnessOverride : 0;                      // 0x18(0x01)
	char                                          bOverride_LPVDistantLightingIntensity : 0;                   // 0x18(0x01)
	char                                          bOverride_LPVEnvironmentColor : 0;                           // 0x18(0x01)
	char                                          UnknownData18[0x1];                                          // 0x18(0x01)
	char                                          bOverride_UseSeparateAOVolume : 0;                           // 0x19(0x01)
	char                                          UnknownData19[0x3];                                          // 0x19(0x03)
	char                                          bOverride_IndirectLightingColor : 0;                         // 0x1c(0x01)
	char                                          bOverride_IndirectLightingIntensity : 0;                     // 0x1c(0x01)
	char                                          bOverride_SkyLightingIntensity : 0;                          // 0x1c(0x01)
	char                                          bOverride_DiffuseIBLIntensity : 0;                           // 0x1c(0x01)
	char                                          bOverride_TwoSidedFoliageSpecularReflectionIntensity : 0;    // 0x1c(0x01)
	char                                          bOverride_IndirectSpecularIntensity : 0;                     // 0x1c(0x01)
	char                                          bOverride_IndirectSpecularBlendFactor : 0;                   // 0x1c(0x01)
	char                                          bOverride_IndirectLightingDirectionality : 0;                // 0x1c(0x01)
	char                                          UnknownData1C[0x1];                                          // 0x1c(0x01)
	char                                          bOverride_IndirectLightingDirectionalSourceSize : 0;         // 0x1d(0x01)
	char                                          bOverride_IndirectLightingDirectionalSpecularIntensity : 0;  // 0x1d(0x01)
	char                                          bOverride_ColorGradingIntensity : 0;                         // 0x1d(0x01)
	char                                          bOverride_ColorGradingLUT : 0;                               // 0x1d(0x01)
	char                                          bOverride_DepthOfFieldFocalDistance : 0;                     // 0x1d(0x01)
	char                                          bOverride_DepthOfFieldFstop : 0;                             // 0x1d(0x01)
	char                                          bOverride_DepthOfFieldMinFstop : 0;                          // 0x1d(0x01)
	char                                          bOverride_DepthOfFieldBladeCount : 0;                        // 0x1d(0x01)
	char                                          UnknownData1D[0x1];                                          // 0x1d(0x01)
	char                                          bOverride_DepthOfFieldSensorWidth : 0;                       // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldDepthBlurRadius : 0;                   // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldDepthBlurAmount : 0;                   // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldFocalRegion : 0;                       // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldNearTransitionRegion : 0;              // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldFarTransitionRegion : 0;               // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldEnabled : 0;                           // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldScale : 0;                             // 0x1e(0x01)
	char                                          UnknownData1E[0x1];                                          // 0x1e(0x01)
	char                                          bOverride_DepthOfFieldNearBlurSize : 0;                      // 0x1f(0x01)
	char                                          bOverride_DepthOfFieldFarBlurSize : 0;                       // 0x1f(0x01)
	char                                          bOverride_MobileHQGaussian : 0;                              // 0x1f(0x01)
	char                                          bOverride_DepthOfFieldOcclusion : 0;                         // 0x1f(0x01)
	char                                          bOverride_DepthOfFieldSkyFocusDistance : 0;                  // 0x1f(0x01)
	char                                          bOverride_DepthOfFieldVignetteSize : 0;                      // 0x1f(0x01)
	char                                          bOverride_MotionBlurAmount : 0;                              // 0x1f(0x01)
	char                                          bOverride_MotionBlurMax : 0;                                 // 0x1f(0x01)
	char                                          UnknownData1F[0x1];                                          // 0x1f(0x01)
	char                                          bOverride_MotionBlurTargetFPS : 0;                           // 0x20(0x01)
	char                                          bOverride_MotionBlurPerObjectSize : 0;                       // 0x20(0x01)
	char                                          bOverride_ScreenPercentage : 0;                              // 0x20(0x01)
	char                                          bOverride_ScreenSpaceReflectionIntensity : 0;                // 0x20(0x01)
	char                                          bOverride_ScreenSpaceReflectionQuality : 0;                  // 0x20(0x01)
	char                                          bOverride_ScreenSpaceReflectionMaxRoughness : 0;             // 0x20(0x01)
	char                                          bOverride_ScreenSpaceReflectionRoughnessScale : 0;           // 0x20(0x01)
	char                                          UnknownData20[0x4];                                          // 0x20(0x04)
	char                                          bOverride_ReflectionsType : 0;                               // 0x24(0x01)
	char                                          bOverride_RayTracingReflectionsMaxRoughness : 0;             // 0x24(0x01)
	char                                          bOverride_RayTracingReflectionsMaxBounces : 0;               // 0x24(0x01)
	char                                          bOverride_RayTracingReflectionsSamplesPerPixel : 0;          // 0x24(0x01)
	char                                          bOverride_RayTracingReflectionsShadows : 0;                  // 0x24(0x01)
	char                                          bOverride_RayTracingReflectionsTranslucency : 0;             // 0x24(0x01)
	char                                          bOverride_TranslucencyType : 0;                              // 0x24(0x01)
	char                                          bOverride_RayTracingTranslucencyMaxRoughness : 0;            // 0x24(0x01)
	char                                          UnknownData24[0x1];                                          // 0x24(0x01)
	char                                          bOverride_RayTracingTranslucencyRefractionRays : 0;          // 0x25(0x01)
	char                                          bOverride_RayTracingTranslucencySamplesPerPixel : 0;         // 0x25(0x01)
	char                                          bOverride_RayTracingTranslucencyShadows : 0;                 // 0x25(0x01)
	char                                          bOverride_RayTracingTranslucencyRefraction : 0;              // 0x25(0x01)
	char                                          bOverride_RayTracingGI : 0;                                  // 0x25(0x01)
	char                                          bOverride_RayTracingGIMaxBounces : 0;                        // 0x25(0x01)
	char                                          bOverride_RayTracingGISamplesPerPixel : 0;                   // 0x25(0x01)
	char                                          bOverride_PathTracingMaxBounces : 0;                         // 0x25(0x01)
	char                                          UnknownData25[0x1];                                          // 0x25(0x01)
	char                                          bOverride_PathTracingSamplesPerPixel : 0;                    // 0x26(0x01)
	char                                          UnknownData26[0x2];                                          // 0x26(0x02)
	char                                          bMobileHQGaussian : 0;                                       // 0x28(0x01)
	char                                          UnknownData28[0x1];                                          // 0x28(0x01)
	char                                          BloomMethod;                                                 // 0x29(0x01)
	char                                          AutoExposureMethod;                                          // 0x2a(0x01)
	char                                          UnknownData2B[0x1];                                          // 0x2b(0x01)
	float                                         WhiteTemp;                                                   // 0x2c(0x04)
	float                                         WhiteTint;                                                   // 0x30(0x04)
	char                                          UnknownData34[0xc];                                          // 0x34(0x0c)
	struct FNone                                  ColorSaturation;                                             // 0x40(0x10)
	struct FNone                                  ColorContrast;                                               // 0x50(0x10)
	struct FNone                                  ColorGamma;                                                  // 0x60(0x10)
	struct FNone                                  ColorGain;                                                   // 0x70(0x10)
	struct FNone                                  ColorOffset;                                                 // 0x80(0x10)
	struct FNone                                  ColorSaturationShadows;                                      // 0x90(0x10)
	struct FNone                                  ColorContrastShadows;                                        // 0xa0(0x10)
	struct FNone                                  ColorGammaShadows;                                           // 0xb0(0x10)
	struct FNone                                  ColorGainShadows;                                            // 0xc0(0x10)
	struct FNone                                  ColorOffsetShadows;                                          // 0xd0(0x10)
	struct FNone                                  ColorSaturationMidtones;                                     // 0xe0(0x10)
	struct FNone                                  ColorContrastMidtones;                                       // 0xf0(0x10)
	struct FNone                                  ColorGammaMidtones;                                          // 0x100(0x10)
	struct FNone                                  ColorGainMidtones;                                           // 0x110(0x10)
	struct FNone                                  ColorOffsetMidtones;                                         // 0x120(0x10)
	struct FNone                                  ColorSaturationHighlights;                                   // 0x130(0x10)
	struct FNone                                  ColorContrastHighlights;                                     // 0x140(0x10)
	struct FNone                                  ColorGammaHighlights;                                        // 0x150(0x10)
	struct FNone                                  ColorGainHighlights;                                         // 0x160(0x10)
	struct FNone                                  ColorOffsetHighlights;                                       // 0x170(0x10)
	float                                         ColorCorrectionHighlightsMin;                                // 0x180(0x04)
	float                                         ColorCorrectionShadowsMax;                                   // 0x184(0x04)
	float                                         BlueCorrection;                                              // 0x188(0x04)
	float                                         ExpandGamut;                                                 // 0x18c(0x04)
	float                                         FilmSlope;                                                   // 0x190(0x04)
	float                                         FilmToe;                                                     // 0x194(0x04)
	float                                         FilmShoulder;                                                // 0x198(0x04)
	float                                         FilmBlackClip;                                               // 0x19c(0x04)
	float                                         FilmWhiteClip;                                               // 0x1a0(0x04)
	struct FNone                                  FilmWhitePoint;                                              // 0x1a4(0x10)
	struct FNone                                  FilmShadowTint;                                              // 0x1b4(0x10)
	float                                         FilmShadowTintBlend;                                         // 0x1c4(0x04)
	float                                         FilmShadowTintAmount;                                        // 0x1c8(0x04)
	float                                         FilmSaturation;                                              // 0x1cc(0x04)
	struct FNone                                  FilmChannelMixerRed;                                         // 0x1d0(0x10)
	struct FNone                                  FilmChannelMixerGreen;                                       // 0x1e0(0x10)
	struct FNone                                  FilmChannelMixerBlue;                                        // 0x1f0(0x10)
	float                                         FilmContrast;                                                // 0x200(0x04)
	float                                         FilmToeAmount;                                               // 0x204(0x04)
	float                                         FilmHealAmount;                                              // 0x208(0x04)
	float                                         FilmDynamicRange;                                            // 0x20c(0x04)
	enum class None                               FilmicTonemapper;                                            // 0x210(0x01)
	char                                          UnknownData211[0x3];                                         // 0x211(0x03)
	float                                         TonemapperSharpen;                                           // 0x214(0x04)
	char                                          UseVolumetricFogEmissive : 0;                                // 0x218(0x01)
	char                                          UnknownData218[0x4];                                         // 0x218(0x04)
	struct FNone                                  VolumetricFogEmissive;                                       // 0x21c(0x10)
	struct FNone                                  SceneColorTint;                                              // 0x22c(0x10)
	float                                         SceneFringeIntensity;                                        // 0x23c(0x04)
	float                                         ChromaticAberrationStartOffset;                              // 0x240(0x04)
	float                                         BloomIntensity;                                              // 0x244(0x04)
	float                                         BloomThreshold;                                              // 0x248(0x04)
	float                                         BloomSizeScale;                                              // 0x24c(0x04)
	float                                         Bloom1Size;                                                  // 0x250(0x04)
	float                                         Bloom2Size;                                                  // 0x254(0x04)
	float                                         Bloom3Size;                                                  // 0x258(0x04)
	float                                         Bloom4Size;                                                  // 0x25c(0x04)
	float                                         Bloom5Size;                                                  // 0x260(0x04)
	float                                         Bloom6Size;                                                  // 0x264(0x04)
	struct FNone                                  Bloom1Tint;                                                  // 0x268(0x10)
	struct FNone                                  Bloom2Tint;                                                  // 0x278(0x10)
	struct FNone                                  Bloom3Tint;                                                  // 0x288(0x10)
	struct FNone                                  Bloom4Tint;                                                  // 0x298(0x10)
	struct FNone                                  Bloom5Tint;                                                  // 0x2a8(0x10)
	struct FNone                                  Bloom6Tint;                                                  // 0x2b8(0x10)
	float                                         BloomConvolutionSize;                                        // 0x2c8(0x04)
	char                                          UnknownData2CC[0x4];                                         // 0x2cc(0x04)
	struct FNone*                                 BloomConvolutionTexture;                                     // 0x2d0(0x08)
	struct FNone                                  BloomConvolutionCenterUV;                                    // 0x2d8(0x08)
	float                                         BloomConvolutionPreFilterMin;                                // 0x2e0(0x04)
	float                                         BloomConvolutionPreFilterMax;                                // 0x2e4(0x04)
	float                                         BloomConvolutionPreFilterMult;                               // 0x2e8(0x04)
	float                                         BloomConvolutionBufferScale;                                 // 0x2ec(0x04)
	struct FNone*                                 BloomDirtMask;                                               // 0x2f0(0x08)
	float                                         BloomDirtMaskIntensity;                                      // 0x2f8(0x04)
	struct FNone                                  BloomDirtMaskTint;                                           // 0x2fc(0x10)
	struct FNone                                  AmbientCubemapTint;                                          // 0x30c(0x10)
	float                                         AmbientCubemapIntensity;                                     // 0x31c(0x04)
	struct FNone*                                 AmbientCubemap;                                              // 0x320(0x08)
	float                                         CameraShutterSpeed;                                          // 0x328(0x04)
	float                                         CameraISO;                                                   // 0x32c(0x04)
	float                                         DepthOfFieldFstop;                                           // 0x330(0x04)
	float                                         DepthOfFieldMinFstop;                                        // 0x334(0x04)
	uint32_t                                      DepthOfFieldBladeCount;                                      // 0x338(0x04)
	float                                         AutoExposureBias;                                            // 0x33c(0x04)
	float                                         AutoExposureBiasBackup;                                      // 0x340(0x04)
	char                                          bOverride_AutoExposureBiasBackup : 0;                        // 0x344(0x01)
	char                                          UnknownData344[0x4];                                         // 0x344(0x04)
	char                                          AutoExposureApplyPhysicalCameraExposure : 0;                 // 0x348(0x01)
	char                                          UnknownData348[0x8];                                         // 0x348(0x08)
	struct FNone*                                 AutoExposureBiasCurve;                                       // 0x350(0x08)
	struct FNone*                                 AutoExposureMeterMask;                                       // 0x358(0x08)
	float                                         AutoExposureLowPercent;                                      // 0x360(0x04)
	float                                         AutoExposureHighPercent;                                     // 0x364(0x04)
	float                                         AutoExposureMinBrightness;                                   // 0x368(0x04)
	float                                         AutoExposureMaxBrightness;                                   // 0x36c(0x04)
	float                                         AutoExposureSpeedUp;                                         // 0x370(0x04)
	float                                         AutoExposureSpeedDown;                                       // 0x374(0x04)
	float                                         HistogramLogMin;                                             // 0x378(0x04)
	float                                         HistogramLogMax;                                             // 0x37c(0x04)
	float                                         AutoExposureCalibrationConstant;                             // 0x380(0x04)
	float                                         LensFlareIntensity;                                          // 0x384(0x04)
	struct FNone                                  LensFlareTint;                                               // 0x388(0x10)
	float                                         LensFlareBokehSize;                                          // 0x398(0x04)
	float                                         LensFlareThreshold;                                          // 0x39c(0x04)
	struct FNone*                                 LensFlareBokehShape;                                         // 0x3a0(0x08)
	struct FNone                                  LensFlareTints[0x8];                                         // 0x3a8(0x80)
	float                                         VignetteIntensity;                                           // 0x428(0x04)
	float                                         GrainJitter;                                                 // 0x42c(0x04)
	float                                         GrainIntensity;                                              // 0x430(0x04)
	float                                         AmbientOcclusionIntensity;                                   // 0x434(0x04)
	float                                         AmbientOcclusionIntensitySubsurfaceProfile;                  // 0x438(0x04)
	float                                         AmbientOcclusionStaticFraction;                              // 0x43c(0x04)
	float                                         AmbientOcclusionRadius;                                      // 0x440(0x04)
	char                                          AmbientOcclusionRadiusInWS : 0;                              // 0x444(0x01)
	char                                          UnknownData444[0x4];                                         // 0x444(0x04)
	float                                         AmbientOcclusionFadeDistance;                                // 0x448(0x04)
	float                                         AmbientOcclusionFadeRadius;                                  // 0x44c(0x04)
	float                                         AmbientOcclusionDistance;                                    // 0x450(0x04)
	float                                         AmbientOcclusionPower;                                       // 0x454(0x04)
	float                                         AmbientOcclusionBias;                                        // 0x458(0x04)
	float                                         AmbientOcclusionQuality;                                     // 0x45c(0x04)
	float                                         AmbientOcclusionMipBlend;                                    // 0x460(0x04)
	float                                         AmbientOcclusionMipScale;                                    // 0x464(0x04)
	float                                         AmbientOcclusionMipThreshold;                                // 0x468(0x04)
	char                                          RayTracingAO : 0;                                            // 0x46c(0x01)
	char                                          UnknownData46C[0x4];                                         // 0x46c(0x04)
	uint32_t                                      RayTracingAOSamplesPerPixel;                                 // 0x470(0x04)
	struct FNone                                  IndirectLightingColor;                                       // 0x474(0x10)
	float                                         IndirectLightingIntensity;                                   // 0x484(0x04)
	float                                         SkyLightingIntensity;                                        // 0x488(0x04)
	float                                         DiffuseIBLIntensity;                                         // 0x48c(0x04)
	float                                         TwoSidedFoliageSpecularReflectionIntensity;                  // 0x490(0x04)
	float                                         IndirectSpecularIntensity;                                   // 0x494(0x04)
	float                                         IndirectSpecularBlendFactor;                                 // 0x498(0x04)
	float                                         IndirectLightingDirectionality;                              // 0x49c(0x04)
	float                                         IndirectLightingDirectionalSourceSize;                       // 0x4a0(0x04)
	float                                         IndirectLightingDirectionalSpecularIntensity;                // 0x4a4(0x04)
	enum class None                               RayTracingGIType;                                            // 0x4a8(0x01)
	char                                          UnknownData4A9[0x3];                                         // 0x4a9(0x03)
	uint32_t                                      RayTracingGIMaxBounces;                                      // 0x4ac(0x04)
	uint32_t                                      RayTracingGISamplesPerPixel;                                 // 0x4b0(0x04)
	float                                         ColorGradingIntensity;                                       // 0x4b4(0x04)
	struct FNone*                                 ColorGradingLUT;                                             // 0x4b8(0x08)
	float                                         DepthOfFieldSensorWidth;                                     // 0x4c0(0x04)
	float                                         DepthOfFieldFocalDistance;                                   // 0x4c4(0x04)
	float                                         DepthOfFieldDepthBlurAmount;                                 // 0x4c8(0x04)
	float                                         DepthOfFieldDepthBlurRadius;                                 // 0x4cc(0x04)
	float                                         DepthOfFieldFocalRegion;                                     // 0x4d0(0x04)
	float                                         DepthOfFieldNearTransitionRegion;                            // 0x4d4(0x04)
	float                                         DepthOfFieldFarTransitionRegion;                             // 0x4d8(0x04)
	char                                          bDepthOfFieldEnabled : 0;                                    // 0x4dc(0x01)
	char                                          UnknownData4DC[0x4];                                         // 0x4dc(0x04)
	float                                         DepthOfFieldScale;                                           // 0x4e0(0x04)
	float                                         DepthOfFieldNearBlurSize;                                    // 0x4e4(0x04)
	float                                         DepthOfFieldFarBlurSize;                                     // 0x4e8(0x04)
	float                                         DepthOfFieldOcclusion;                                       // 0x4ec(0x04)
	float                                         DepthOfFieldSkyFocusDistance;                                // 0x4f0(0x04)
	float                                         DepthOfFieldVignetteSize;                                    // 0x4f4(0x04)
	float                                         MotionBlurAmount;                                            // 0x4f8(0x04)
	float                                         MotionBlurMax;                                               // 0x4fc(0x04)
	uint32_t                                      MotionBlurTargetFPS;                                         // 0x500(0x04)
	float                                         MotionBlurPerObjectSize;                                     // 0x504(0x04)
	float                                         LPVIntensity;                                                // 0x508(0x04)
	float                                         LPVVplInjectionBias;                                         // 0x50c(0x04)
	float                                         LPVSize;                                                     // 0x510(0x04)
	float                                         LPVSecondaryOcclusionIntensity;                              // 0x514(0x04)
	float                                         LPVSecondaryBounceIntensity;                                 // 0x518(0x04)
	float                                         LPVGeometryVolumeBias;                                       // 0x51c(0x04)
	float                                         LPVEmissiveInjectionIntensity;                               // 0x520(0x04)
	float                                         LPVDirectionalOcclusionIntensity;                            // 0x524(0x04)
	float                                         LPVDirectionalOcclusionRadius;                               // 0x528(0x04)
	float                                         LPVDiffuseOcclusionExponent;                                 // 0x52c(0x04)
	float                                         LPVSpecularOcclusionExponent;                                // 0x530(0x04)
	float                                         LPVDiffuseOcclusionIntensity;                                // 0x534(0x04)
	float                                         LPVSpecularOcclusionIntensity;                               // 0x538(0x04)
	float                                         LPVReflectionIntensity;                                      // 0x53c(0x04)
	float                                         LPVReflectionLength;                                         // 0x540(0x04)
	char                                          bLPVReflectionOcclusion : 0;                                 // 0x544(0x01)
	char                                          UnknownData544[0x4];                                         // 0x544(0x04)
	float                                         LPVHairSpecularLightingIntensity;                            // 0x548(0x04)
	float                                         LPVHairSpecularOcclusionIntensity;                           // 0x54c(0x04)
	float                                         LPVHairRoughnessOverride;                                    // 0x550(0x04)
	float                                         LPVDistantLightingIntensity;                                 // 0x554(0x04)
	struct FNone                                  LPVEnvironmentColor;                                         // 0x558(0x10)
	char                                          bUseSeparateAOVolume : 0;                                    // 0x568(0x01)
	char                                          UnknownData568[0x1];                                         // 0x568(0x01)
	enum class None                               ReflectionsType;                                             // 0x569(0x01)
	char                                          UnknownData56A[0x2];                                         // 0x56a(0x02)
	float                                         ScreenSpaceReflectionIntensity;                              // 0x56c(0x04)
	float                                         ScreenSpaceReflectionQuality;                                // 0x570(0x04)
	float                                         ScreenSpaceReflectionMaxRoughness;                           // 0x574(0x04)
	float                                         RayTracingReflectionsMaxRoughness;                           // 0x578(0x04)
	uint32_t                                      RayTracingReflectionsMaxBounces;                             // 0x57c(0x04)
	uint32_t                                      RayTracingReflectionsSamplesPerPixel;                        // 0x580(0x04)
	enum class None                               RayTracingReflectionsShadows;                                // 0x584(0x01)
	char                                          RayTracingReflectionsTranslucency : 0;                       // 0x585(0x01)
	char                                          UnknownData585[0x1];                                         // 0x585(0x01)
	enum class None                               TranslucencyType;                                            // 0x586(0x01)
	char                                          UnknownData587[0x1];                                         // 0x587(0x01)
	float                                         RayTracingTranslucencyMaxRoughness;                          // 0x588(0x04)
	uint32_t                                      RayTracingTranslucencyRefractionRays;                        // 0x58c(0x04)
	uint32_t                                      RayTracingTranslucencySamplesPerPixel;                       // 0x590(0x04)
	enum class None                               RayTracingTranslucencyShadows;                               // 0x594(0x01)
	char                                          RayTracingTranslucencyRefraction : 0;                        // 0x595(0x01)
	char                                          UnknownData595[0x3];                                         // 0x595(0x03)
	uint32_t                                      PathTracingMaxBounces;                                       // 0x598(0x04)
	uint32_t                                      PathTracingSamplesPerPixel;                                  // 0x59c(0x04)
	float                                         LPVFadeRange;                                                // 0x5a0(0x04)
	float                                         LPVDirectionalOcclusionFadeRange;                            // 0x5a4(0x04)
	float                                         ScreenPercentage;                                            // 0x5a8(0x04)
	char                                          UnknownData5AC[0x4];                                         // 0x5ac(0x04)
	struct FNone                                  WeightedBlendables;                                          // 0x5b0(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables 
{
	struct TArray<None>                           Array;                                                       // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable 
{
	float                                         Weight;                                                      // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 Object;                                                      // 0x08(0x08)
};

// ScriptStruct Engine.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer 
{
	char                                          UnknownData0[0x54];                                          // 0x00(0x54)
	uint32_t                                      ArrayReplicationKey;                                         // 0x54(0x04)
	char                                          UnknownData58[0xa8];                                         // 0x58(0xa8)
	enum class None                               DeltaFlags;                                                  // 0x100(0x01)
	char                                          UnknownData101[0x7];                                         // 0x101(0x07)
};

// ScriptStruct Engine.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem 
{
	uint32_t                                      ReplicationID;                                               // 0x00(0x04)
	uint32_t                                      ReplicationKey;                                              // 0x04(0x04)
	uint32_t                                      MostRecentArrayReplicationKey;                               // 0x08(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping 
{
	struct FName                                  ActionName;                                                  // 0x00(0x08)
	char                                          bShift : 0;                                                  // 0x08(0x01)
	char                                          bCtrl : 0;                                                   // 0x08(0x01)
	char                                          bAlt : 0;                                                    // 0x08(0x01)
	char                                          bCmd : 0;                                                    // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  Key;                                                         // 0x10(0x18)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x00)
struct FRigidBodyErrorCorrection 
{
	float                                         PingExtrapolation;                                           // 0x00(0x04)
	float                                         PingLimit;                                                   // 0x04(0x04)
	float                                         ErrorPerLinearDifference;                                    // 0x08(0x04)
	float                                         ErrorPerAngularDifference;                                   // 0x0c(0x04)
	float                                         MaxRestoredStateError;                                       // 0x10(0x04)
	float                                         MaxLinearHardSnapDistance;                                   // 0x14(0x04)
	float                                         PositionLerp;                                                // 0x18(0x04)
	float                                         AngleLerp;                                                   // 0x1c(0x04)
	float                                         LinearVelocityCoefficient;                                   // 0x20(0x04)
	float                                         AngularVelocityCoefficient;                                  // 0x24(0x04)
	float                                         ErrorAccumulationSeconds;                                    // 0x28(0x04)
	float                                         ErrorAccumulationDistanceSq;                                 // 0x2c(0x04)
	float                                         ErrorAccumulationSimilarity;                                 // 0x30(0x04)
};

// ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x00)
struct FDebugTextInfo 
{
	struct FNone*                                 SrcActor;                                                    // 0x00(0x08)
	struct FNone                                  SrcActorOffset;                                              // 0x08(0x0c)
	struct FNone                                  SrcActorDesiredOffset;                                       // 0x14(0x0c)
	struct FString                                DebugText;                                                   // 0x20(0x10)
	float                                         TimeRemaining;                                               // 0x30(0x04)
	float                                         Duration;                                                    // 0x34(0x04)
	struct FNone                                  TextColor;                                                   // 0x38(0x04)
	char                                          bAbsoluteLocation : 0;                                       // 0x3c(0x01)
	char                                          bKeepAttachedToActor : 0;                                    // 0x3c(0x01)
	char                                          bDrawShadow : 0;                                             // 0x3c(0x01)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FNone                                  OrigActorLocation;                                           // 0x40(0x0c)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	struct FNone*                                 Font;                                                        // 0x50(0x08)
	float                                         FontScale;                                                   // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
};

// ScriptStruct Engine.MovementProperties
// Size: 0x01 (Inherited: 0x00)
struct FMovementProperties 
{
	char                                          bCanCrouch : 0;                                              // 0x00(0x01)
	char                                          bCanJump : 0;                                                // 0x00(0x01)
	char                                          bCanWalk : 0;                                                // 0x00(0x01)
	char                                          bCanSwim : 0;                                                // 0x00(0x01)
	char                                          bCanFly : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x01)
struct FNavAgentProperties : FMovementProperties 
{
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         AgentRadius;                                                 // 0x04(0x04)
	float                                         AgentHeight;                                                 // 0x08(0x04)
	float                                         AgentStepHeight;                                             // 0x0c(0x04)
	float                                         NavWalkingSearchHeightScale;                                 // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone                                  PreferredNavData;                                            // 0x18(0x18)
};

// ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 (Inherited: 0x00)
struct FNavAvoidanceMask 
{
	char                                          bGroup0 : 0;                                                 // 0x00(0x01)
	char                                          bGroup1 : 0;                                                 // 0x00(0x01)
	char                                          bGroup2 : 0;                                                 // 0x00(0x01)
	char                                          bGroup3 : 0;                                                 // 0x00(0x01)
	char                                          bGroup4 : 0;                                                 // 0x00(0x01)
	char                                          bGroup5 : 0;                                                 // 0x00(0x01)
	char                                          bGroup6 : 0;                                                 // 0x00(0x01)
	char                                          bGroup7 : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bGroup8 : 0;                                                 // 0x01(0x01)
	char                                          bGroup9 : 0;                                                 // 0x01(0x01)
	char                                          bGroup10 : 0;                                                // 0x01(0x01)
	char                                          bGroup11 : 0;                                                // 0x01(0x01)
	char                                          bGroup12 : 0;                                                // 0x01(0x01)
	char                                          bGroup13 : 0;                                                // 0x01(0x01)
	char                                          bGroup14 : 0;                                                // 0x01(0x01)
	char                                          bGroup15 : 0;                                                // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bGroup16 : 0;                                                // 0x02(0x01)
	char                                          bGroup17 : 0;                                                // 0x02(0x01)
	char                                          bGroup18 : 0;                                                // 0x02(0x01)
	char                                          bGroup19 : 0;                                                // 0x02(0x01)
	char                                          bGroup20 : 0;                                                // 0x02(0x01)
	char                                          bGroup21 : 0;                                                // 0x02(0x01)
	char                                          bGroup22 : 0;                                                // 0x02(0x01)
	char                                          bGroup23 : 0;                                                // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bGroup24 : 0;                                                // 0x03(0x01)
	char                                          bGroup25 : 0;                                                // 0x03(0x01)
	char                                          bGroup26 : 0;                                                // 0x03(0x01)
	char                                          bGroup27 : 0;                                                // 0x03(0x01)
	char                                          bGroup28 : 0;                                                // 0x03(0x01)
	char                                          bGroup29 : 0;                                                // 0x03(0x01)
	char                                          bGroup30 : 0;                                                // 0x03(0x01)
	char                                          bGroup31 : 0;                                                // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FRuntimeFloatCurve 
{
	struct FNone                                  EditorCurveData;                                             // 0x00(0x80)
	struct FNone*                                 ExternalCurve;                                               // 0x80(0x08)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x00)
struct FIndexedCurve 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone                                  KeyHandlesToIndices;                                         // 0x08(0x60)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleMap 
{
	char                                          UnknownData0[0x60];                                          // 0x00(0x60)
};

// ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : FIndexedCurve 
{
	float                                         DefaultValue;                                                // 0x68(0x04)
	char                                          PreInfinityExtrap;                                           // 0x6c(0x01)
	char                                          PostInfinityExtrap;                                          // 0x6d(0x01)
	char                                          UnknownData6E[0x2];                                          // 0x6e(0x02)
};

// ScriptStruct Engine.RichCurve
// Size: 0x80 (Inherited: 0x70)
struct FRichCurve : FRealCurve 
{
	struct TArray<None>                           Keys;                                                        // 0x70(0x10)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey 
{
	char                                          InterpMode;                                                  // 0x00(0x01)
	char                                          TangentMode;                                                 // 0x01(0x01)
	char                                          TangentWeightMode;                                           // 0x02(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
	float                                         Time;                                                        // 0x04(0x04)
	float                                         Value;                                                       // 0x08(0x04)
	float                                         ArriveTangent;                                               // 0x0c(0x04)
	float                                         ArriveTangentWeight;                                         // 0x10(0x04)
	float                                         LeaveTangent;                                                // 0x14(0x04)
	float                                         LeaveTangentWeight;                                          // 0x18(0x04)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x00)
struct FWalkableSlopeOverride 
{
	char                                          WalkableSlopeBehavior;                                       // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         WalkableSlopeAngle;                                          // 0x04(0x04)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x190 (Inherited: 0x00)
struct FBodyInstance 
{
	char                                          UnknownData0[0x6];                                           // 0x00(0x06)
	char                                          ObjectType;                                                  // 0x06(0x01)
	char                                          UnknownData7[0x1];                                           // 0x07(0x01)
	char                                          CollisionEnabled;                                            // 0x08(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	enum class None                               SleepFamily;                                                 // 0x0a(0x01)
	char                                          DOFMode;                                                     // 0x0b(0x01)
	char                                          UnknownDataC[0x1];                                           // 0x0c(0x01)
	char                                          bUseCCD : 0;                                                 // 0x0d(0x01)
	char                                          bIgnoreAnalyticCollisions : 0;                               // 0x0d(0x01)
	char                                          bNotifyRigidBodyCollision : 0;                               // 0x0d(0x01)
	char                                          bIgnoreCollisionsWithoutImpulse : 0;                         // 0x0d(0x01)
	char                                          bContactModification : 0;                                    // 0x0d(0x01)
	char                                          bSimulatePhysics : 0;                                        // 0x0d(0x01)
	char                                          bOverrideMass : 0;                                           // 0x0d(0x01)
	char                                          bEnableGravity : 0;                                          // 0x0d(0x01)
	char                                          UnknownDataD[0x1];                                           // 0x0d(0x01)
	char                                          bAutoWeld : 0;                                               // 0x0e(0x01)
	char                                          bStartAwake : 0;                                             // 0x0e(0x01)
	char                                          bGenerateWakeEvents : 0;                                     // 0x0e(0x01)
	char                                          bUpdateMassWhenScaleChanges : 0;                             // 0x0e(0x01)
	char                                          bLockTranslation : 0;                                        // 0x0e(0x01)
	char                                          bLockRotation : 0;                                           // 0x0e(0x01)
	char                                          bLockXTranslation : 0;                                       // 0x0e(0x01)
	char                                          bLockYTranslation : 0;                                       // 0x0e(0x01)
	char                                          UnknownDataE[0x1];                                           // 0x0e(0x01)
	char                                          bLockZTranslation : 0;                                       // 0x0f(0x01)
	char                                          bLockXRotation : 0;                                          // 0x0f(0x01)
	char                                          bLockYRotation : 0;                                          // 0x0f(0x01)
	char                                          bLockZRotation : 0;                                          // 0x0f(0x01)
	char                                          bOverrideMaxAngularVelocity : 0;                             // 0x0f(0x01)
	char                                          bOverrideMaxDepenetrationVelocity : 0;                       // 0x0f(0x01)
	char                                          UnknownDataF[0x1];                                           // 0x0f(0x01)
	char                                          bOverrideWalkableSlopeOnInstance : 0;                        // 0x10(0x01)
	char                                          bInterpolateWhenSubStepping : 0;                             // 0x10(0x01)
	char                                          UnknownData10[0x10];                                         // 0x10(0x10)
	struct FName                                  CollisionProfileName;                                        // 0x20(0x08)
	char                                          PositionSolverIterationCount;                                // 0x28(0x01)
	char                                          VelocitySolverIterationCount;                                // 0x29(0x01)
	char                                          UnknownData2A[0x6];                                          // 0x2a(0x06)
	struct FNone                                  CollisionResponses;                                          // 0x30(0x30)
	float                                         MaxDepenetrationVelocity;                                    // 0x60(0x04)
	float                                         MassInKgOverride;                                            // 0x64(0x04)
	char                                          UnknownData68[0x8];                                          // 0x68(0x08)
	float                                         LinearDamping;                                               // 0x70(0x04)
	float                                         AngularDamping;                                              // 0x74(0x04)
	struct FNone                                  CustomDOFPlaneNormal;                                        // 0x78(0x0c)
	struct FNone                                  COMNudge;                                                    // 0x84(0x0c)
	float                                         MassScale;                                                   // 0x90(0x04)
	struct FNone                                  InertiaTensorScale;                                          // 0x94(0x0c)
	char                                          UnknownDataA0[0x10];                                         // 0xa0(0x10)
	struct FNone                                  WalkableSlopeOverride;                                       // 0xb0(0x10)
	struct FNone*                                 PhysMaterialOverride;                                        // 0xc0(0x08)
	float                                         MaxAngularVelocity;                                          // 0xc8(0x04)
	float                                         CustomSleepThresholdMultiplier;                              // 0xcc(0x04)
	float                                         StabilizationThresholdMultiplier;                            // 0xd0(0x04)
	float                                         PhysicsBlendWeight;                                          // 0xd4(0x04)
	char                                          UnknownDataD8[0xb8];                                         // 0xd8(0xb8)
};

// ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCollisionResponse 
{
	struct FNone                                  ResponseToChannels;                                          // 0x00(0x20)
	struct TArray<None>                           ResponseArray;                                               // 0x20(0x10)
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x0c (Inherited: 0x00)
struct FResponseChannel 
{
	struct FName                                  Channel;                                                     // 0x00(0x08)
	char                                          Response;                                                    // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer 
{
	char                                          WorldStatic;                                                 // 0x00(0x01)
	char                                          WorldDynamic;                                                // 0x01(0x01)
	char                                          Pawn;                                                        // 0x02(0x01)
	char                                          Visibility;                                                  // 0x03(0x01)
	char                                          Camera;                                                      // 0x04(0x01)
	char                                          PhysicsBody;                                                 // 0x05(0x01)
	char                                          Vehicle;                                                     // 0x06(0x01)
	char                                          Destructible;                                                // 0x07(0x01)
	char                                          EngineTraceChannel1;                                         // 0x08(0x01)
	char                                          EngineTraceChannel2;                                         // 0x09(0x01)
	char                                          EngineTraceChannel3;                                         // 0x0a(0x01)
	char                                          EngineTraceChannel4;                                         // 0x0b(0x01)
	char                                          EngineTraceChannel5;                                         // 0x0c(0x01)
	char                                          EngineTraceChannel6;                                         // 0x0d(0x01)
	char                                          GameTraceChannel1;                                           // 0x0e(0x01)
	char                                          GameTraceChannel2;                                           // 0x0f(0x01)
	char                                          GameTraceChannel3;                                           // 0x10(0x01)
	char                                          GameTraceChannel4;                                           // 0x11(0x01)
	char                                          GameTraceChannel5;                                           // 0x12(0x01)
	char                                          GameTraceChannel6;                                           // 0x13(0x01)
	char                                          GameTraceChannel7;                                           // 0x14(0x01)
	char                                          GameTraceChannel8;                                           // 0x15(0x01)
	char                                          GameTraceChannel9;                                           // 0x16(0x01)
	char                                          GameTraceChannel10;                                          // 0x17(0x01)
	char                                          GameTraceChannel11;                                          // 0x18(0x01)
	char                                          GameTraceChannel12;                                          // 0x19(0x01)
	char                                          GameTraceChannel13;                                          // 0x1a(0x01)
	char                                          GameTraceChannel14;                                          // 0x1b(0x01)
	char                                          GameTraceChannel15;                                          // 0x1c(0x01)
	char                                          GameTraceChannel16;                                          // 0x1d(0x01)
	char                                          GameTraceChannel17;                                          // 0x1e(0x01)
	char                                          GameTraceChannel18;                                          // 0x1f(0x01)
};

// ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPrimitiveData 
{
	struct TArray<None>                           Data;                                                        // 0x00(0x10)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x01 (Inherited: 0x00)
struct FLightingChannels 
{
	char                                          bChannel0 : 0;                                               // 0x00(0x01)
	char                                          bChannel1 : 0;                                               // 0x00(0x01)
	char                                          bChannel2 : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x10 (Inherited: 0x00)
struct FAnimNode_Base 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x00)
struct FPoseLinkBase 
{
	uint32_t                                      LinkID;                                                      // 0x00(0x04)
	char                                          UnknownData4[0xc];                                           // 0x04(0x0c)
};

// ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : FPoseLinkBase 
{
};

// ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleLookupTable 
{
	char                                          UnknownData0[0x60];                                          // 0x00(0x60)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp 
{
	char                                          bMapRange : 0;                                               // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bClampResult : 0;                                            // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bInterpResult : 0;                                           // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	struct FNone                                  InRange;                                                     // 0x04(0x08)
	struct FNone                                  OutRange;                                                    // 0x0c(0x08)
	float                                         Scale;                                                       // 0x14(0x04)
	float                                         Bias;                                                        // 0x18(0x04)
	float                                         ClampMin;                                                    // 0x1c(0x04)
	float                                         ClampMax;                                                    // 0x20(0x04)
	float                                         InterpSpeedIncreasing;                                       // 0x24(0x04)
	float                                         InterpSpeedDecreasing;                                       // 0x28(0x04)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange 
{
	float                                         Min;                                                         // 0x00(0x04)
	float                                         MAX;                                                         // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x00)
struct FInputAlphaBoolBlend 
{
	float                                         BlendInTime;                                                 // 0x00(0x04)
	float                                         BlendOutTime;                                                // 0x04(0x04)
	enum class None                               BlendOption;                                                 // 0x08(0x01)
	char                                          bInitialized : 0;                                            // 0x09(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct FNone*                                 CustomCurve;                                                 // 0x10(0x08)
	struct FNone                                  AlphaBlend;                                                  // 0x18(0x30)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x00)
struct FAlphaBlend 
{
	struct FNone*                                 CustomCurve;                                                 // 0x00(0x08)
	float                                         BlendTime;                                                   // 0x08(0x04)
	char                                          UnknownDataC[0x18];                                          // 0x0c(0x18)
	enum class None                               BlendOption;                                                 // 0x24(0x01)
	char                                          UnknownData25[0xb];                                          // 0x25(0x0b)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias 
{
	float                                         Scale;                                                       // 0x00(0x04)
	float                                         Bias;                                                        // 0x04(0x04)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase 
{
};

// ScriptStruct Engine.BoneReference
// Size: 0x10 (Inherited: 0x00)
struct FBoneReference 
{
	struct FName                                  BoneName;                                                    // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat 
{
	float                                         Default;                                                     // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt 
{
	uint32_t                                      Default;                                                     // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformBool
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformBool 
{
	char                                          Default : 0;                                                 // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.AnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x00)
struct FAnimInstanceProxy 
{
	char                                          UnknownData0[0x6e0];                                         // 0x00(0x6e0)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath 
{
	struct FString                                Path;                                                        // 0x00(0x10)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base 
{
	uint32_t                                      GroupIndex;                                                  // 0x10(0x04)
	char                                          GroupRole;                                                   // 0x14(0x01)
	char                                          bIgnoreForRelevancyTest : 0;                                 // 0x15(0x01)
	char                                          UnknownData15[0x3];                                          // 0x15(0x03)
	float                                         BlendWeight;                                                 // 0x18(0x04)
	float                                         InternalTimeAccumulator;                                     // 0x1c(0x04)
	char                                          UnknownData20[0x10];                                         // 0x20(0x10)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight 
{
	uint32_t                                      SourceIndex;                                                 // 0x00(0x04)
	float                                         BlendWeight;                                                 // 0x04(0x04)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose 
{
	struct TArray<None>                           BranchFilters;                                               // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x0c (Inherited: 0x00)
struct FBranchFilter 
{
	struct FName                                  BoneName;                                                    // 0x00(0x08)
	uint32_t                                      BlendDepth;                                                  // 0x08(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot 
{
	struct TArray<None>                           LocalTransforms;                                             // 0x00(0x10)
	struct TArray<None>                           BoneNames;                                                   // 0x10(0x10)
	struct FName                                  SkeletalMeshName;                                            // 0x20(0x08)
	struct FName                                  SnapshotName;                                                // 0x28(0x08)
	char                                          bIsValid : 0;                                                // 0x30(0x01)
	char                                          UnknownData30[0x8];                                          // 0x30(0x08)
};

// ScriptStruct Engine.SolverIterations
// Size: 0x18 (Inherited: 0x00)
struct FSolverIterations 
{
	uint32_t                                      SolverIterations;                                            // 0x00(0x04)
	uint32_t                                      JointIterations;                                             // 0x04(0x04)
	uint32_t                                      CollisionIterations;                                         // 0x08(0x04)
	uint32_t                                      SolverPushOutIterations;                                     // 0x0c(0x04)
	uint32_t                                      JointPushOutIterations;                                      // 0x10(0x04)
	uint32_t                                      CollisionPushOutIterations;                                  // 0x14(0x04)
};

// ScriptStruct Engine.AnimNode_Root
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_Root : FAnimNode_Base 
{
	struct FNone                                  Result;                                                      // 0x10(0x10)
	struct FName                                  Name;                                                        // 0x20(0x08)
	struct FName                                  Group;                                                       // 0x28(0x08)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x0c (Inherited: 0x00)
struct FAnimCurveParam 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
};

// ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FActorComponentInstanceData 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 SourceComponentTemplate;                                     // 0x08(0x08)
	enum class None                               SourceComponentCreationMethod;                               // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	uint32_t                                      SourceComponentTypeSerializedIndex;                          // 0x14(0x04)
	struct TArray<None>                           SavedProperties;                                             // 0x18(0x10)
	struct TArray<None>                           DuplicatedObjects;                                           // 0x28(0x10)
	struct TArray<None>                           ReferencedObjects;                                           // 0x38(0x10)
	struct TArray<None>                           ReferencedNames;                                             // 0x48(0x10)
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size: 0x10 (Inherited: 0x00)
struct FActorComponentDuplicatedObjectData 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xa8 (Inherited: 0x58)
struct FSceneComponentInstanceData : FActorComponentInstanceData 
{
	struct TMap<None, None>                       AttachedInstanceComponents;                                  // 0x58(0x50)
};

// ScriptStruct Engine.KAggregateGeom
// Size: 0x58 (Inherited: 0x00)
struct FKAggregateGeom 
{
	struct TArray<None>                           SphereElems;                                                 // 0x00(0x10)
	struct TArray<None>                           BoxElems;                                                    // 0x10(0x10)
	struct TArray<None>                           SphylElems;                                                  // 0x20(0x10)
	struct TArray<None>                           ConvexElems;                                                 // 0x30(0x10)
	struct TArray<None>                           TaperedCapsuleElems;                                         // 0x40(0x10)
	char                                          UnknownData50[0x8];                                          // 0x50(0x08)
};

// ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x00)
struct FKShapeElem 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	float                                         RestOffset;                                                  // 0x08(0x04)
	struct FName                                  Name;                                                        // 0x0c(0x08)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	char                                          bContributeToMass : 0;                                       // 0x18(0x01)
	char                                          UnknownData18[0x18];                                         // 0x18(0x18)
};

// ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x58 (Inherited: 0x30)
struct FKTaperedCapsuleElem : FKShapeElem 
{
	struct FNone                                  Center;                                                      // 0x30(0x0c)
	struct FNone                                  Rotation;                                                    // 0x3c(0x0c)
	float                                         Radius0;                                                     // 0x48(0x04)
	float                                         Radius1;                                                     // 0x4c(0x04)
	float                                         Length;                                                      // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
};

// ScriptStruct Engine.KConvexElem
// Size: 0xb0 (Inherited: 0x30)
struct FKConvexElem : FKShapeElem 
{
	struct TArray<None>                           VertexData;                                                  // 0x30(0x10)
	struct TArray<None>                           IndexData;                                                   // 0x40(0x10)
	struct FNone                                  ElemBox;                                                     // 0x50(0x1c)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
	struct FNone                                  Transform;                                                   // 0x70(0x30)
	char                                          UnknownDataA0[0x10];                                         // 0xa0(0x10)
};

// ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphylElem : FKShapeElem 
{
	struct FNone                                  Center;                                                      // 0x30(0x0c)
	struct FNone                                  Rotation;                                                    // 0x3c(0x0c)
	float                                         Radius;                                                      // 0x48(0x04)
	float                                         Length;                                                      // 0x4c(0x04)
};

// ScriptStruct Engine.KBoxElem
// Size: 0x58 (Inherited: 0x30)
struct FKBoxElem : FKShapeElem 
{
	struct FNone                                  Center;                                                      // 0x30(0x0c)
	struct FNone                                  Rotation;                                                    // 0x3c(0x0c)
	float                                         X;                                                           // 0x48(0x04)
	float                                         Y;                                                           // 0x4c(0x04)
	float                                         Z;                                                           // 0x50(0x04)
	char                                          UnknownData54[0x4];                                          // 0x54(0x04)
};

// ScriptStruct Engine.KSphereElem
// Size: 0x40 (Inherited: 0x30)
struct FKSphereElem : FKShapeElem 
{
	struct FNone                                  Center;                                                      // 0x30(0x0c)
	float                                         Radius;                                                      // 0x3c(0x04)
};

// ScriptStruct Engine.AnimationGroupReference
// Size: 0x0c (Inherited: 0x00)
struct FAnimationGroupReference 
{
	struct FName                                  GroupName;                                                   // 0x00(0x08)
	char                                          GroupRole;                                                   // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
};

// ScriptStruct Engine.AnimGroupInstance
// Size: 0x70 (Inherited: 0x00)
struct FAnimGroupInstance 
{
	char                                          UnknownData0[0x70];                                          // 0x00(0x70)
};

// ScriptStruct Engine.AnimTickRecord
// Size: 0x48 (Inherited: 0x00)
struct FAnimTickRecord 
{
	struct FNone*                                 SourceAsset;                                                 // 0x00(0x08)
	char                                          UnknownData8[0x40];                                          // 0x08(0x40)
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x14 (Inherited: 0x00)
struct FMarkerSyncAnimPosition 
{
	struct FName                                  PreviousMarkerName;                                          // 0x00(0x08)
	struct FName                                  NextMarkerName;                                              // 0x08(0x08)
	float                                         PositionBetweenMarkers;                                      // 0x10(0x04)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x78 (Inherited: 0x00)
struct FBlendFilter 
{
	char                                          UnknownData0[0x78];                                          // 0x00(0x78)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData 
{
	uint32_t                                      SampleDataIndex;                                             // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 Animation;                                                   // 0x08(0x08)
	float                                         TotalWeight;                                                 // 0x10(0x04)
	float                                         Time;                                                        // 0x14(0x04)
	float                                         PreviousTime;                                                // 0x18(0x04)
	float                                         SamplePlayRate;                                              // 0x1c(0x04)
	char                                          UnknownData20[0x20];                                         // 0x20(0x20)
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x10 (Inherited: 0x00)
struct FAnimationRecordingSettings 
{
	char                                          bRecordInWorldSpace : 0;                                     // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bRemoveRootAnimation : 0;                                    // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bAutoSaveAsset : 0;                                          // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	float                                         SampleRate;                                                  // 0x04(0x04)
	float                                         Length;                                                      // 0x08(0x04)
	char                                          InterpMode;                                                  // 0x0c(0x01)
	char                                          TangentMode;                                                 // 0x0d(0x01)
	char                                          UnknownDataE[0x2];                                           // 0x0e(0x02)
};

// ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FComponentSpacePose 
{
	struct TArray<None>                           Transforms;                                                  // 0x00(0x10)
	struct TArray<None>                           Names;                                                       // 0x10(0x10)
};

// ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FLocalSpacePose 
{
	struct TArray<None>                           Transforms;                                                  // 0x00(0x10)
	struct TArray<None>                           Names;                                                       // 0x10(0x10)
};

// ScriptStruct Engine.NamedTransform
// Size: 0x40 (Inherited: 0x00)
struct FNamedTransform 
{
	struct FNone                                  Value;                                                       // 0x00(0x30)
	struct FName                                  Name;                                                        // 0x30(0x08)
	char                                          UnknownData38[0x8];                                          // 0x38(0x08)
};

// ScriptStruct Engine.NamedColor
// Size: 0x0c (Inherited: 0x00)
struct FNamedColor 
{
	struct FNone                                  Value;                                                       // 0x00(0x04)
	struct FName                                  Name;                                                        // 0x04(0x08)
};

// ScriptStruct Engine.NamedVector
// Size: 0x14 (Inherited: 0x00)
struct FNamedVector 
{
	struct FNone                                  Value;                                                       // 0x00(0x0c)
	struct FName                                  Name;                                                        // 0x0c(0x08)
};

// ScriptStruct Engine.NamedFloat
// Size: 0x0c (Inherited: 0x00)
struct FNamedFloat 
{
	float                                         Value;                                                       // 0x00(0x04)
	struct FName                                  Name;                                                        // 0x04(0x08)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAnimParentNodeAssetOverride 
{
	struct FNone*                                 NewAsset;                                                    // 0x00(0x08)
	struct FNone                                  ParentNodeGuid;                                              // 0x08(0x10)
};

// ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimGroupInfo 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct FNone                                  Color;                                                       // 0x08(0x10)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 (Inherited: 0x00)
struct FAnimationFrameSnapshot 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.StateMachineDebugData
// Size: 0xb0 (Inherited: 0x00)
struct FStateMachineDebugData 
{
	char                                          UnknownData0[0xb0];                                          // 0x00(0xb0)
};

// ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineStateDebugData 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunctionData
// Size: 0x40 (Inherited: 0x00)
struct FAnimBlueprintFunctionData 
{
	struct TFieldPath<FNone>                      OutputPoseNodeProperty;                                      // 0x00(0x20)
	struct TArray<None>                           InputPoseNodeProperties;                                     // 0x20(0x10)
	struct TArray<None>                           InputProperties;                                             // 0x30(0x10)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x08 (Inherited: 0x00)
struct FAnimGraphBlendOptions 
{
	float                                         BlendInTime;                                                 // 0x00(0x04)
	float                                         BlendOutTime;                                                // 0x04(0x04)
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x00)
struct FGraphAssetPlayerInformation 
{
	struct TArray<None>                           PlayerNodeIndices;                                           // 0x00(0x10)
};

// ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x00)
struct FCachedPoseIndices 
{
	struct TArray<None>                           OrderedSavedPoseNodeIndices;                                 // 0x00(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x68 (Inherited: 0x00)
struct FAnimBlueprintFunction 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct FName                                  Group;                                                       // 0x08(0x08)
	uint32_t                                      OutputPoseNodeIndex;                                         // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct TArray<None>                           InputPoseNames;                                              // 0x18(0x10)
	struct TArray<None>                           InputPoseNodeIndices;                                        // 0x28(0x10)
	char                                          UnknownData38[0x28];                                         // 0x38(0x28)
	char                                          bImplemented : 0;                                            // 0x60(0x01)
	char                                          UnknownData60[0x8];                                          // 0x60(0x08)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack 
{
	struct TArray<None>                           AnimSegments;                                                // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment 
{
	struct FNone*                                 AnimReference;                                               // 0x00(0x08)
	float                                         StartPos;                                                    // 0x08(0x04)
	float                                         AnimStartTime;                                               // 0x0c(0x04)
	float                                         AnimEndTime;                                                 // 0x10(0x04)
	float                                         AnimPlayRate;                                                // 0x14(0x04)
	uint32_t                                      LoopingCount;                                                // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x00)
struct FRootMotionExtractionStep 
{
	struct FNone*                                 AnimSequence;                                                // 0x00(0x08)
	float                                         StartPosition;                                               // 0x08(0x04)
	float                                         EndPosition;                                                 // 0x0c(0x04)
};

// ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x00)
struct FAnimationErrorStats 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)
struct FRawCurveTracks 
{
	struct TArray<None>                           FloatCurves;                                                 // 0x00(0x10)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x00)
struct FAnimCurveBase 
{
	struct FName                                  LastObservedName;                                            // 0x00(0x08)
	struct FNone                                  Name;                                                        // 0x08(0x0c)
	uint32_t                                      CurveTypeFlags;                                              // 0x14(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x0c (Inherited: 0x00)
struct FSmartName 
{
	struct FName                                  DisplayName;                                                 // 0x00(0x08)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x98 (Inherited: 0x18)
struct FFloatCurve : FAnimCurveBase 
{
	struct FNone                                  FloatCurve;                                                  // 0x18(0x80)
};

// ScriptStruct Engine.TransformCurve
// Size: 0x4e0 (Inherited: 0x18)
struct FTransformCurve : FAnimCurveBase 
{
	struct FNone                                  TranslationCurve;                                            // 0x18(0x198)
	struct FNone                                  RotationCurve;                                               // 0x1b0(0x198)
	struct FNone                                  ScaleCurve;                                                  // 0x348(0x198)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x198 (Inherited: 0x18)
struct FVectorCurve : FAnimCurveBase 
{
	struct FNone                                  FloatCurves[0x3];                                            // 0x18(0x180)
};

// ScriptStruct Engine.SlotEvaluationPose
// Size: 0x40 (Inherited: 0x00)
struct FSlotEvaluationPose 
{
	char                                          AdditiveType;                                                // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         Weight;                                                      // 0x04(0x04)
	char                                          UnknownData8[0x38];                                          // 0x08(0x38)
};

// ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x00)
struct FA2Pose 
{
	struct TArray<None>                           Bones;                                                       // 0x00(0x10)
};

// ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose 
{
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
	struct TArray<None>                           ComponentSpaceFlags;                                         // 0x18(0x10)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 (Inherited: 0x00)
struct FQueuedDrawDebugItem 
{
	char                                          ItemType;                                                    // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FNone                                  StartLoc;                                                    // 0x04(0x0c)
	struct FNone                                  EndLoc;                                                      // 0x10(0x0c)
	struct FNone                                  Center;                                                      // 0x1c(0x0c)
	struct FNone                                  Rotation;                                                    // 0x28(0x0c)
	float                                         Radius;                                                      // 0x34(0x04)
	float                                         Size;                                                        // 0x38(0x04)
	uint32_t                                      Segments;                                                    // 0x3c(0x04)
	struct FNone                                  Color;                                                       // 0x40(0x04)
	char                                          bPersistentLines : 0;                                        // 0x44(0x01)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	float                                         LifeTime;                                                    // 0x48(0x04)
	float                                         Thickness;                                                   // 0x4c(0x04)
	struct FString                                Message;                                                     // 0x50(0x10)
	struct FNone                                  TextScale;                                                   // 0x60(0x08)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 LinkedMontage;                                               // 0x08(0x08)
	uint32_t                                      SlotIndex;                                                   // 0x10(0x04)
	uint32_t                                      SegmentIndex;                                                // 0x14(0x04)
	char                                          LinkMethod;                                                  // 0x18(0x01)
	char                                          CachedLinkMethod;                                            // 0x19(0x01)
	char                                          UnknownData1A[0x2];                                          // 0x1a(0x02)
	float                                         SegmentBeginTime;                                            // 0x1c(0x04)
	float                                         SegmentLength;                                               // 0x20(0x04)
	float                                         LinkValue;                                                   // 0x24(0x04)
	struct FNone*                                 LinkedSequence;                                              // 0x28(0x08)
};

// ScriptStruct Engine.AnimMontageInstance
// Size: 0x1b0 (Inherited: 0x00)
struct FAnimMontageInstance 
{
	struct FNone*                                 Montage;                                                     // 0x00(0x08)
	char                                          UnknownData8[0x20];                                          // 0x08(0x20)
	char                                          bPlaying : 0;                                                // 0x28(0x01)
	char                                          UnknownData28[0x4];                                          // 0x28(0x04)
	float                                         DefaultBlendTimeMultiplier;                                  // 0x2c(0x04)
	char                                          UnknownData30[0xb8];                                         // 0x30(0xb8)
	struct TArray<None>                           NextSections;                                                // 0xe8(0x10)
	struct TArray<None>                           PrevSections;                                                // 0xf8(0x10)
	char                                          UnknownData108[0x10];                                        // 0x108(0x10)
	struct TArray<None>                           ActiveStateBranchingPoints;                                  // 0x118(0x10)
	float                                         Position;                                                    // 0x128(0x04)
	float                                         PlayRate;                                                    // 0x12c(0x04)
	struct FNone                                  Blend;                                                       // 0x130(0x30)
	char                                          UnknownData160[0x28];                                        // 0x160(0x28)
	uint32_t                                      DisableRootMotionCount;                                      // 0x188(0x04)
	char                                          UnknownData18C[0x24];                                        // 0x18c(0x24)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xb8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement 
{
	float                                         DisplayTime;                                                 // 0x30(0x04)
	float                                         TriggerTimeOffset;                                           // 0x34(0x04)
	float                                         EndTriggerTimeOffset;                                        // 0x38(0x04)
	float                                         TriggerWeightThreshold;                                      // 0x3c(0x04)
	struct FName                                  NotifyName;                                                  // 0x40(0x08)
	struct FNone*                                 notify;                                                      // 0x48(0x08)
	struct FNone*                                 NotifyStateClass;                                            // 0x50(0x08)
	float                                         Duration;                                                    // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
	struct FNone                                  EndLink;                                                     // 0x60(0x30)
	char                                          bConvertedFromBranchingPoint : 0;                            // 0x90(0x01)
	char                                          UnknownData90[0x1];                                          // 0x90(0x01)
	char                                          MontageTickType;                                             // 0x91(0x01)
	char                                          UnknownData92[0x2];                                          // 0x92(0x02)
	float                                         NotifyTriggerChance;                                         // 0x94(0x04)
	char                                          NotifyFilterType;                                            // 0x98(0x01)
	char                                          UnknownData99[0x3];                                          // 0x99(0x03)
	uint32_t                                      NotifyFilterLOD;                                             // 0x9c(0x04)
	char                                          bTriggerOnDedicatedServer : 0;                               // 0xa0(0x01)
	char                                          UnknownDataA0[0x1];                                          // 0xa0(0x01)
	char                                          bTriggerOnFollower : 0;                                      // 0xa1(0x01)
	char                                          UnknownDataA1[0x3];                                          // 0xa1(0x03)
	uint32_t                                      TrackIndex;                                                  // 0xa4(0x04)
	char                                          UnknownDataA8[0x10];                                         // 0xa8(0x10)
};

// ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c (Inherited: 0x00)
struct FBranchingPointMarker 
{
	uint32_t                                      NotifyIndex;                                                 // 0x00(0x04)
	float                                         TriggerTime;                                                 // 0x04(0x04)
	char                                          NotifyEventType;                                             // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement 
{
	struct FName                                  EventName;                                                   // 0x30(0x08)
	float                                         DisplayTime;                                                 // 0x38(0x04)
	float                                         TriggerTimeOffset;                                           // 0x3c(0x04)
};

// ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x00)
struct FSlotAnimationTrack 
{
	struct FName                                  SlotName;                                                    // 0x00(0x08)
	struct FNone                                  AnimTrack;                                                   // 0x08(0x10)
};

// ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement 
{
	struct FName                                  SectionName;                                                 // 0x30(0x08)
	float                                         StartTime;                                                   // 0x38(0x04)
	struct FName                                  NextSectionName;                                             // 0x3c(0x08)
	char                                          UnknownData44[0x4];                                          // 0x44(0x04)
	struct TArray<None>                           MetaData;                                                    // 0x48(0x10)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0xd0 (Inherited: 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base 
{
	struct FNone                                  Base;                                                        // 0x10(0x10)
	struct FNone                                  Additive;                                                    // 0x20(0x10)
	enum class None                               AlphaInputType;                                              // 0x30(0x01)
	char                                          UnknownData31[0x3];                                          // 0x31(0x03)
	float                                         ALPHA;                                                       // 0x34(0x04)
	char                                          bAlphaBoolEnabled : 0;                                       // 0x38(0x01)
	char                                          UnknownData38[0x8];                                          // 0x38(0x08)
	struct FNone                                  AlphaBoolBlend;                                              // 0x40(0x48)
	struct FName                                  AlphaCurveName;                                              // 0x88(0x08)
	struct FNone                                  AlphaScaleBias;                                              // 0x90(0x08)
	struct FNone                                  AlphaScaleBiasClamp;                                         // 0x98(0x30)
	uint32_t                                      LODThreshold;                                                // 0xc8(0x04)
	char                                          UnknownDataCC[0x4];                                          // 0xcc(0x04)
};

// ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base 
{
	struct TArray<None>                           SourcePropertyNames;                                         // 0x10(0x10)
	struct TArray<None>                           DestPropertyNames;                                           // 0x20(0x10)
	struct FNone*                                 TargetInstance;                                              // 0x30(0x08)
	char                                          UnknownData38[0x20];                                         // 0x38(0x20)
};

// ScriptStruct Engine.AnimNode_Inertialization
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base 
{
	struct FNone                                  Source;                                                      // 0x10(0x10)
	char                                          UnknownData20[0x50];                                         // 0x20(0x50)
};

// ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 (Inherited: 0x00)
struct FInertializationPoseDiff 
{
	char                                          UnknownData0[0x28];                                          // 0x00(0x28)
};

// ScriptStruct Engine.InertializationCurveDiff
// Size: 0x08 (Inherited: 0x00)
struct FInertializationCurveDiff 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3c (Inherited: 0x00)
struct FInertializationBoneDiff 
{
	char                                          UnknownData0[0x3c];                                          // 0x00(0x3c)
};

// ScriptStruct Engine.InertializationPose
// Size: 0x90 (Inherited: 0x00)
struct FInertializationPose 
{
	char                                          UnknownData0[0x90];                                          // 0x00(0x90)
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xa0 (Inherited: 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty 
{
	struct TArray<None>                           InputPoses;                                                  // 0x58(0x10)
	struct TArray<None>                           InputPoseNames;                                              // 0x68(0x10)
	struct FNone*                                 InstanceClass;                                               // 0x78(0x08)
	struct FName                                  Tag;                                                         // 0x80(0x08)
	char                                          UnknownData88[0x10];                                         // 0x88(0x10)
	char                                          bReceiveNotifiesFromLinkedInstances : 0;                     // 0x98(0x01)
	char                                          bPropagateNotifiesToLinkedInstances : 0;                     // 0x98(0x01)
	char                                          UnknownData98[0x8];                                          // 0x98(0x08)
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xb0 (Inherited: 0xa0)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph 
{
	struct FNone*                                 Interface;                                                   // 0xa0(0x08)
	struct FName                                  Layer;                                                       // 0xa8(0x08)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base 
{
	struct FName                                  Name;                                                        // 0x10(0x08)
	struct FName                                  Graph;                                                       // 0x18(0x08)
	struct FNone                                  InputPose;                                                   // 0x20(0x10)
	char                                          UnknownData30[0x48];                                         // 0x30(0x48)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xb8 (Inherited: 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base 
{
	struct Frty 8Int8Property†UInt64PropertyˆUInt32Property–UInt16PropertyÎMapProperty ÆSetProperty &CoreºEngine¬EditorÈCoreUObject  EnumProperty&CylinderØBoxSphereBounds ¢Sphereæ Box  Vector2DÆIntRect <IntPointÔVector4 Name¼VectorÚRotator SHVectorrColor rPlane ‚MatrixþLinearColor AdvanceFrameäPointer °DoubleQuatSelfFTransform ŠObject¢CameralActor ObjectRedirectorÎObjectA_8 pose;                                                        // 0x10(0x10)
	struct FName                                  CachePoseName;                                               // 0x20(0x08)
	char                                          UnknownData28[0x90];                                         // 0x28(0x90)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase 
{
	struct FNone*                                 Sequence;                                                    // 0x30(0x08)
	float                                         PlayRateBasis;                                               // 0x38(0x04)
	float                                         PlayRate;                                                    // 0x3c(0x04)
	struct FNone                                  PlayRateScaleBiasClamp;                                      // 0x40(0x30)
	float                                         StartPosition;                                               // 0x70(0x04)
	char                                          bLoopAnimation : 0;                                          // 0x74(0x01)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xb0 (Inherited: 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base 
{
	uint32_t                                      StateMachineIndexInClass;                                    // 0x10(0x04)
	uint32_t                                      MaxTransitionsPerFrame;                                      // 0x14(0x04)
	char                                          bSkipFirstUpdateTransition : 0;                              // 0x18(0x01)
	char                                          UnknownData18[0x1];                                          // 0x18(0x01)
	char                                          bReinitializeOnBecomingRelevant : 0;                         // 0x19(0x01)
	char                                          UnknownData19[0x97];                                         // 0x19(0x97)
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x00)
struct FAnimationPotentialTransition 
{
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xc8 (Inherited: 0x00)
struct FAnimationActiveTransitionEntry 
{
	char                                          UnknownData0[0xb8];                                          // 0x00(0xb8)
	struct FNone*                                 BlendProfile;                                                // 0xb8(0x08)
	char                                          UnknownDataC0[0x8];                                          // 0xc0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base 
{
	char                                          UnknownData10[0x38];                                         // 0x10(0x38)
	uint32_t                                      FramesToCachePose;                                           // 0x48(0x04)
	char                                          UnknownData4C[0x4];                                          // 0x4c(0x04)
	char                                          DataSource;                                                  // 0x50(0x01)
	char                                          EvaluatorMode;                                               // 0x51(0x01)
	char                                          UnknownData52[0x6];                                          // 0x52(0x06)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base 
{
	char                                          bCanEnterTransition : 0;                                     // 0x10(0x01)
	char                                          UnknownData10[0x18];                                         // 0x10(0x18)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base 
{
	struct FNone                                  LinkToCachingNode;                                           // 0x10(0x10)
	struct FName                                  CachePoseName;                                               // 0x20(0x08)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x48 (Inherited: 0x00)
struct FExposedValueHandler 
{
	struct FName                                  BoundFunction;                                               // 0x00(0x08)
	struct TArray<None>                           CopyRecords;                                                 // 0x08(0x10)
	struct FNone*                                 Function;                                                    // 0x18(0x08)
	struct TFieldPath<FNone>                      ValueHandlerNodeProperty;                                    // 0x20(0x20)
	char                                          UnknownData40[0x8];                                          // 0x40(0x08)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord 
{
	struct FName                                  SourcePropertyName;                                          // 0x00(0x08)
	struct FName                                  SourceSubPropertyName;                                       // 0x08(0x08)
	uint32_t                                      SourceArrayIndex;                                            // 0x10(0x04)
	char                                          bInstanceIsTarget : 0;                                       // 0x14(0x01)
	char                                          UnknownData14[0x1];                                          // 0x14(0x01)
	enum class None                               PostCopyOperation;                                           // 0x15(0x01)
	enum class None                               CopyType;                                                    // 0x16(0x01)
	char                                          UnknownData17[0x1];                                          // 0x17(0x01)
	struct TFieldPath<FNone>                      DestProperty;                                                // 0x18(0x20)
	uint32_t                                      DestArrayIndex;                                              // 0x38(0x04)
	uint32_t                                      Size;                                                        // 0x3c(0x04)
	struct TFieldPath<FNone>                      CachedSourceProperty;                                        // 0x40(0x20)
	struct TFieldPath<FNone>                      CachedSourceStructSubProperty;                               // 0x60(0x20)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base 
{
	struct FNone                                  LocalPose;                                                   // 0x10(0x10)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base 
{
	struct FNone                                  ComponentPose;                                               // 0x10(0x10)
};

// ScriptStruct Engine.AnimNotifyQueue
// Size: 0x70 (Inherited: 0x00)
struct FAnimNotifyQueue 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
	struct TArray<None>                           AnimNotifies;                                                // 0x10(0x10)
	struct TMap<None, None>                       UnfilteredMontageAnimNotifies;                               // 0x20(0x50)
};

// ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyArray 
{
	struct TArray<None>                           Notifies;                                                    // 0x00(0x10)
};

// ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyEventReference 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 NotifySource;                                                // 0x08(0x08)
};

// ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x00)
struct FCompressedTrack 
{
	struct TArray<None>                           ByteStream;                                                  // 0x00(0x10)
	struct TArray<None>                           Times;                                                       // 0x10(0x10)
	float                                         Mins[0x3];                                                   // 0x20(0x0c)
	float                                         Ranges[0x3];                                                 // 0x2c(0x0c)
};

// ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x00)
struct FCurveTrack 
{
	struct FName                                  CurveName;                                                   // 0x00(0x08)
	struct TArray<None>                           CurveWeights;                                                // 0x08(0x10)
};

// ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x00)
struct FScaleTrack 
{
	struct TArray<None>                           ScaleKeys;                                                   // 0x00(0x10)
	struct TArray<None>                           Times;                                                       // 0x10(0x10)
};

// ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x00)
struct FRotationTrack 
{
	struct TArray<None>                           RotKeys;                                                     // 0x00(0x10)
	struct TArray<None>                           Times;                                                       // 0x10(0x10)
};

// ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x00)
struct FTranslationTrack 
{
	struct TArray<None>                           PosKeys;                                                     // 0x00(0x10)
	struct TArray<None>                           Times;                                                       // 0x10(0x10)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceTrackContainer 
{
	struct TArray<None>                           AnimationTracks;                                             // 0x00(0x10)
	struct TArray<None>                           TrackNames;                                                  // 0x10(0x10)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x00)
struct FRawAnimSequenceTrack 
{
	struct TArray<None>                           PosKeys;                                                     // 0x00(0x10)
	struct TArray<None>                           RotKeys;                                                     // 0x10(0x10)
	struct TArray<None>                           ScaleKeys;                                                   // 0x20(0x10)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x00)
struct FAnimSetMeshLinkup 
{
	struct TArray<None>                           BoneToTrackTable;                                            // 0x00(0x10)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x830 (Inherited: 0x6e0)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy 
{
	char                                          UnknownData6E0[0x150];                                       // 0x6e0(0x150)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base 
{
	struct FNone                                  SourcePose;                                                  // 0x10(0x10)
	char                                          UnknownData20[0x10];                                         // 0x20(0x10)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x00)
struct FBakedAnimationStateMachine 
{
	struct FName                                  MachineName;                                                 // 0x00(0x08)
	uint32_t                                      InitialState;                                                // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           States;                                                      // 0x10(0x10)
	struct TArray<None>                           Transitions;                                                 // 0x20(0x10)
};

// ScriptStruct Engine.AnimationStateBase
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateBase 
{
	struct FName                                  StateName;                                                   // 0x00(0x08)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 (Inherited: 0x08)
struct FAnimationTransitionBetweenStates : FAnimationStateBase 
{
	uint32_t                                      PreviousState;                                               // 0x08(0x04)
	uint32_t                                      NextState;                                                   // 0x0c(0x04)
	float                                         CrossfadeDuration;                                           // 0x10(0x04)
	uint32_t                                      StartNotify;                                                 // 0x14(0x04)
	uint32_t                                      EndNotify;                                                   // 0x18(0x04)
	uint32_t                                      InterruptNotify;                                             // 0x1c(0x04)
	enum class None                               BlendMode;                                                   // 0x20(0x01)
	char                                          UnknownData21[0x7];                                          // 0x21(0x07)
	struct FNone*                                 CustomCurve;                                                 // 0x28(0x08)
	struct FNone*                                 BlendProfile;                                                // 0x30(0x08)
	char                                          LogicType;                                                   // 0x38(0x01)
	char                                          UnknownData39[0x7];                                          // 0x39(0x07)
};

// ScriptStruct Engine.BakedAnimationState
// Size: 0x58 (Inherited: 0x00)
struct FBakedAnimationState 
{
	struct FName                                  StateName;                                                   // 0x00(0x08)
	struct TArray<None>                           Transitions;                                                 // 0x08(0x10)
	uint32_t                                      StateRootNodeIndex;                                          // 0x18(0x04)
	uint32_t                                      StartNotify;                                                 // 0x1c(0x04)
	uint32_t                                      EndNotify;                                                   // 0x20(0x04)
	uint32_t                                      FullyBlendedNotify;                                          // 0x24(0x04)
	char                                          bIsAConduit : 0;                                             // 0x28(0x01)
	char                                          UnknownData28[0x4];                                          // 0x28(0x04)
	uint32_t                                      EntryRuleNodeIndex;                                          // 0x2c(0x04)
	struct TArray<None>                           PlayerNodeIndices;                                           // 0x30(0x10)
	struct TArray<None>                           LayerNodeIndices;                                            // 0x40(0x10)
	char                                          bAlwaysResetOnEntry : 0;                                     // 0x50(0x01)
	char                                          UnknownData50[0x8];                                          // 0x50(0x08)
};

// ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x00)
struct FBakedStateExitTransition 
{
	uint32_t                                      CanTakeDelegateIndex;                                        // 0x00(0x04)
	uint32_t                                      CustomResultNodeIndex;                                       // 0x04(0x04)
	uint32_t                                      TransitionIndex;                                             // 0x08(0x04)
	char                                          bDesiredTransitionReturnValue : 0;                           // 0x0c(0x01)
	char                                          UnknownDataC[0x1];                                           // 0x0c(0x01)
	char                                          bAutomaticRemainingTimeRule : 0;                             // 0x0d(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	struct TArray<None>                           PoseEvaluatorLinks;                                          // 0x10(0x10)
};

// ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x08)
struct FAnimationState : FAnimationStateBase 
{
	struct TArray<None>                           Transitions;                                                 // 0x08(0x10)
	uint32_t                                      StateRootNodeIndex;                                          // 0x18(0x04)
	uint32_t                                      StartNotify;                                                 // 0x1c(0x04)
	uint32_t                                      EndNotify;                                                   // 0x20(0x04)
	uint32_t                                      FullyBlendedNotify;                                          // 0x24(0x04)
};

// ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x00)
struct FAnimationTransitionRule 
{
	struct FName                                  RuleToExecute;                                               // 0x00(0x08)
	char                                          TransitionReturnVal : 0;                                     // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	uint32_t                                      TransitionIndex;                                             // 0x0c(0x04)
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 (Inherited: 0x00)
struct FTrackToSkeletonMap 
{
	uint32_t                                      BoneTreeIndex;                                               // 0x00(0x04)
};

// ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x00)
struct FMarkerSyncData 
{
	struct TArray<None>                           AuthoredSyncMarkers;                                         // 0x00(0x10)
	char                                          UnknownData10[0x10];                                         // 0x10(0x10)
};

// ScriptStruct Engine.AnimSyncMarker
// Size: 0x0c (Inherited: 0x00)
struct FAnimSyncMarker 
{
	struct FName                                  MarkerName;                                                  // 0x00(0x08)
	float                                         Time;                                                        // 0x08(0x04)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack 
{
	struct FName                                  TrackName;                                                   // 0x00(0x08)
	struct FNone                                  TrackColor;                                                  // 0x08(0x10)
	char                                          UnknownData18[0x20];                                         // 0x18(0x20)
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneBlendWeights 
{
	struct TArray<None>                           BoneBlendWeights;                                            // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38 (Inherited: 0x00)
struct FPrimaryAssetRulesCustomOverride 
{
	struct FNone                                  PrimaryAssetType;                                            // 0x00(0x08)
	struct FNone                                  FilterDirectory;                                             // 0x08(0x10)
	struct FString                                FilterString;                                                // 0x18(0x10)
	struct FNone                                  Rules;                                                       // 0x28(0x0c)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct Engine.PrimaryAssetRules
// Size: 0x0c (Inherited: 0x00)
struct FPrimaryAssetRules 
{
	uint32_t                                      Priority;                                                    // 0x00(0x04)
	uint32_t                                      ChunkId;                                                     // 0x04(0x04)
	char                                          bApplyRecursively : 0;                                       // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	enum class None                               CookRule;                                                    // 0x09(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x1c (Inherited: 0x00)
struct FPrimaryAssetRulesOverride 
{
	struct FNone                                  PrimaryAssetId;                                              // 0x00(0x10)
	struct FNone                                  Rules;                                                       // 0x10(0x0c)
};

// ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x00)
struct FAssetManagerRedirect 
{
	struct FString                                Old;                                                         // 0x00(0x10)
	struct FString                                New;                                                         // 0x10(0x10)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x00)
struct FPrimaryAssetTypeInfo 
{
	struct FName                                  PrimaryAssetType;                                            // 0x00(0x08)
	struct TSoftClassPtr<UObject>                 AssetBaseClass;                                              // 0x08(0x28)
	struct FNone*                                 AssetBaseClassLoaded;                                        // 0x30(0x08)
	char                                          bHasBlueprintClasses : 0;                                    // 0x38(0x01)
	char                                          UnknownData38[0x1];                                          // 0x38(0x01)
	char                                          bIsEditorOnly : 0;                                           // 0x39(0x01)
	char                                          UnknownData39[0x7];                                          // 0x39(0x07)
	struct TArray<None>                           Directories;                                                 // 0x40(0x10)
	struct TArray<None>                           SpecificAssets;                                              // 0x50(0x10)
	struct FNone                                  Rules;                                                       // 0x60(0x0c)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
	struct TArray<None>                           AssetScanPaths;                                              // 0x70(0x10)
	char                                          bIsDynamicAsset : 0;                                         // 0x80(0x01)
	char                                          UnknownData80[0x4];                                          // 0x80(0x04)
	uint32_t                                      NumberOfAssets;                                              // 0x84(0x04)
};

// ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x00)
struct FAssetMapping 
{
	struct FNone*                                 SourceAsset;                                                 // 0x00(0x08)
	struct FNone*                                 TargetAsset;                                                 // 0x08(0x08)
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size: 0x138 (Inherited: 0xa8)
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData 
{
	char                                          UnknownDataA8[0x90];                                         // 0xa8(0x90)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2c (Inherited: 0x00)
struct FAtmospherePrecomputeParameters 
{
	float                                         DensityHeight;                                               // 0x00(0x04)
	float                                         DecayHeight;                                                 // 0x04(0x04)
	uint32_t                                      MaxScatteringOrder;                                          // 0x08(0x04)
	uint32_t                                      TransmittanceTexWidth;                                       // 0x0c(0x04)
	uint32_t                                      TransmittanceTexHeight;                                      // 0x10(0x04)
	uint32_t                                      IrradianceTexWidth;                                          // 0x14(0x04)
	uint32_t                                      IrradianceTexHeight;                                         // 0x18(0x04)
	uint32_t                                      InscatterAltitudeSampleNum;                                  // 0x1c(0x04)
	uint32_t                                      InscatterMuNum;                                              // 0x20(0x04)
	uint32_t                                      InscatterMuSNum;                                             // 0x24(0x04)
	uint32_t                                      InscatterNuNum;                                              // 0x28(0x04)
};

// ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xb0 (Inherited: 0x00)
struct FBaseAttenuationSettings 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	enum class None                               DistanceAlgorithm;                                           // 0x08(0x01)
	char                                          AttenuationShape;                                            // 0x09(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
	float                                         dBAttenuationAtMax;                                          // 0x0c(0x04)
	enum class None                               FalloffMode;                                                 // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	struct FNone                                  AttenuationShapeExtents;                                     // 0x14(0x0c)
	float                                         ConeOffset;                                                  // 0x20(0x04)
	float                                         FalloffDistance;                                             // 0x24(0x04)
	struct FNone                                  CustomAttenuationCurve;                                      // 0x28(0x88)
};

// ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x00)
struct FAudioComponentParam 
{
	struct FName                                  ParamName;                                                   // 0x00(0x08)
	float                                         FloatParam;                                                  // 0x08(0x04)
	char                                          BoolParam : 0;                                               // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	uint32_t                                      IntParam;                                                    // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone*                                 SoundWaveParam;                                              // 0x18(0x08)
};

// ScriptStruct Engine.AudioEffectParameters
// Size: 0x08 (Inherited: 0x00)
struct FAudioEffectParameters 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.AudioReverbEffect
// Size: 0x48 (Inherited: 0x08)
struct FAudioReverbEffect : FAudioEffectParameters 
{
	char                                          UnknownData8[0x40];                                          // 0x08(0x40)
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x00)
struct FAudioQualitySettings 
{
	struct FText                                  DisplayName;                                                 // 0x00(0x18)
	uint32_t                                      MaxChannels;                                                 // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)
struct FInteriorSettings 
{
	char                                          bIsWorldSettings : 0;                                        // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         ExteriorVolume;                                              // 0x04(0x04)
	float                                         ExteriorTime;                                                // 0x08(0x04)
	float                                         ExteriorLPF;                                                 // 0x0c(0x04)
	float                                         ExteriorLPFTime;                                             // 0x10(0x04)
	float                                         InteriorVolume;                                              // 0x14(0x04)
	float                                         InteriorTime;                                                // 0x18(0x04)
	float                                         InteriorLPF;                                                 // 0x1c(0x04)
	float                                         InteriorLPFTime;                                             // 0x20(0x04)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)
struct FLaunchOnTestSettings 
{
	struct FNone                                  LaunchOnTestmap;                                             // 0x00(0x10)
	struct FString                                DeviceID;                                                    // 0x10(0x10)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath 
{
	struct FString                                FilePath;                                                    // 0x00(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorMapPerformanceTestDefinition 
{
	struct FNone                                  PerformanceTestmap;                                          // 0x00(0x18)
	uint32_t                                      TestTimer;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 (Inherited: 0x00)
struct FBuildPromotionTestSettings 
{
	struct FNone                                  DefaultStaticMeshAsset;                                      // 0x00(0x10)
	struct FNone                                  ImportWorkflow;                                              // 0x10(0x150)
	struct FNone                                  OpenAssets;                                                  // 0x160(0x60)
	struct FNone                                  NewProjectSettings;                                          // 0x1c0(0x20)
	struct FNone                                  SourceControlMaterial;                                       // 0x1e0(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionNewProjectSettings 
{
	struct FNone                                  NewProjectFolderOverride;                                    // 0x00(0x10)
	struct FString                                NewProjectNameOverride;                                      // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)
struct FBuildPromotionOpenAssetSettings 
{
	struct FNone                                  BlueprintAsset;                                              // 0x00(0x10)
	struct FNone                                  MaterialAsset;                                               // 0x10(0x10)
	struct FNone                                  ParticleSystemAsset;                                         // 0x20(0x10)
	struct FNone                                  SkeletalMeshAsset;                                           // 0x30(0x10)
	struct FNone                                  StaticMeshAsset;                                             // 0x40(0x10)
	struct FNone                                  TextureAsset;                                                // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)
struct FBuildPromotionImportWorkflowSettings 
{
	struct FNone                                  Diffuse;                                                     // 0x00(0x20)
	struct FNone                                  Normal;                                                      // 0x20(0x20)
	struct FNone                                  StaticMesh;                                                  // 0x40(0x20)
	struct FNone                                  ReimportStaticMesh;                                          // 0x60(0x20)
	struct FNone                                  BlendShapeMesh;                                              // 0x80(0x20)
	struct FNone                                  MorphMesh;                                                   // 0xa0(0x20)
	struct FNone                                  SkeletalMesh;                                                // 0xc0(0x20)
	struct FNone                                  Animation;                                                   // 0xe0(0x20)
	struct FNone                                  Sound;                                                       // 0x100(0x20)
	struct FNone                                  SurroundSound;                                               // 0x120(0x20)
	struct TArray<None>                           OtherAssetsToImport;                                         // 0x140(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorImportWorkflowDefinition 
{
	struct FNone                                  ImportFilePath;                                              // 0x00(0x10)
	struct TArray<None>                           FactorySettings;                                             // 0x10(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)
struct FImportFactorySettingValues 
{
	struct FString                                SettingName;                                                 // 0x00(0x10)
	struct FString                                Value;                                                       // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintEditorPromotionSettings 
{
	struct FNone                                  FirstMeshPath;                                               // 0x00(0x10)
	struct FNone                                  SecondMeshPath;                                              // 0x10(0x10)
	struct FNone                                  DefaultParticleAsset;                                        // 0x20(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)
struct FParticleEditorPromotionSettings 
{
	struct FNone                                  DefaultParticleAsset;                                        // 0x00(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FMaterialEditorPromotionSettings 
{
	struct FNone                                  DefaultMaterialAsset;                                        // 0x00(0x10)
	struct FNone                                  DefaultDiffuseTexture;                                       // 0x10(0x10)
	struct FNone                                  DefaultNormalTexture;                                        // 0x20(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)
struct FEditorImportExportTestDefinition 
{
	struct FNone                                  ImportFilePath;                                              // 0x00(0x10)
	struct FString                                ExportFileExtension;                                         // 0x10(0x10)
	char                                          bSkipExport : 0;                                             // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
	struct TArray<None>                           FactorySettings;                                             // 0x28(0x10)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)
struct FExternalToolDefinition 
{
	struct FString                                ToolName;                                                    // 0x00(0x10)
	struct FNone                                  ExecutablePath;                                              // 0x10(0x10)
	struct FString                                CommandLineOptions;                                          // 0x20(0x10)
	struct FNone                                  WorkingDirectory;                                            // 0x30(0x10)
	struct FString                                ScriptExtension;                                             // 0x40(0x10)
	struct FNone                                  ScriptDirectory;                                             // 0x50(0x10)
};

// ScriptStruct Engine.NavAvoidanceData
// Size: 0x3c (Inherited: 0x00)
struct FNavAvoidanceData 
{
	char                                          UnknownData0[0x3c];                                          // 0x00(0x3c)
};

// ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x00)
struct FBandwidthTestGenerator 
{
	struct TArray<None>                           ReplicatedBuffers;                                           // 0x00(0x10)
	char                                          UnknownData10[0x10];                                         // 0x10(0x10)
};

// ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x00)
struct FBandwidthTestItem 
{
	struct TArray<None>                           Kilobyte;                                                    // 0x00(0x10)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x14 (Inherited: 0x00)
struct FBlendProfileBoneEntry 
{
	struct FNone                                  BoneReference;                                               // 0x00(0x10)
	float                                         BlendScale;                                                  // 0x10(0x04)
};

// ScriptStruct Engine.PerBoneInterpolation
// Size: 0x14 (Inherited: 0x00)
struct FPerBoneInterpolation 
{
	struct FNone                                  BoneReference;                                               // 0x00(0x10)
	float                                         InterpolationSpeedPerSec;                                    // 0x10(0x04)
};

// ScriptStruct Engine.GridBlendSample
// Size: 0x1c (Inherited: 0x00)
struct FGridBlendSample 
{
	struct FNone                                  GridElement;                                                 // 0x00(0x18)
	float                                         BlendWeight;                                                 // 0x18(0x04)
};

// ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x00)
struct FEditorElement 
{
	uint32_t                                      Indices[0x3];                                                // 0x00(0x0c)
	float                                         Weights[0x3];                                                // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample 
{
	struct FNone*                                 Animation;                                                   // 0x00(0x08)
	struct FNone                                  SampleValue;                                                 // 0x08(0x0c)
	float                                         RateScale;                                                   // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter 
{
	struct FString                                DisplayName;                                                 // 0x00(0x10)
	float                                         Min;                                                         // 0x10(0x04)
	float                                         MAX;                                                         // 0x14(0x04)
	uint32_t                                      GridNum;                                                     // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter 
{
	float                                         InterpolationTime;                                           // 0x00(0x04)
	char                                          InterpolationType;                                           // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x00)
struct FBPEditorBookmarkNode 
{
	struct FNone                                  NodeGuid;                                                    // 0x00(0x10)
	struct FNone                                  ParentGuid;                                                  // 0x10(0x10)
	struct FText                                  DisplayName;                                                 // 0x20(0x18)
};

// ScriptStruct Engine.EditedDocumentInfo
// Size: 0x30 (Inherited: 0x00)
struct FEditedDocumentInfo 
{
	struct FNone                                  EditedObjectPath;                                            // 0x00(0x18)
	struct FNone                                  SavedViewOffset;                                             // 0x18(0x08)
	float                                         SavedZoomAmount;                                             // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FNone*                                 EditedObject;                                                // 0x28(0x08)
};

// ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x00)
struct FBPInterfaceDescription 
{
	struct FNone*                                 Interface;                                                   // 0x00(0x08)
	struct TArray<None>                           Graphs;                                                      // 0x08(0x10)
};

// ScriptStruct Engine.BPVariableDescription
// Size: 0xd0 (Inherited: 0x00)
struct FBPVariableDescription 
{
	struct FName                                  VarName;                                                     // 0x00(0x08)
	struct FNone                                  VarGuid;                                                     // 0x08(0x10)
	struct FNone                                  VarType;                                                     // 0x18(0x58)
	struct FString                                FriendlyName;                                                // 0x70(0x10)
	struct FText                                  Category;                                                    // 0x80(0x18)
	uint64_t                                      PropertyFlags;                                               // 0x98(0x08)
	struct FName                                  RepNotifyFunc;                                               // 0xa0(0x08)
	char                                          ReplicationCondition;                                        // 0xa8(0x01)
	char                                          UnknownDataA9[0x7];                                          // 0xa9(0x07)
	struct TArray<None>                           MetaDataArray;                                               // 0xb0(0x10)
	struct FString                                DefaultValue;                                                // 0xc0(0x10)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FBPVariableMetaDataEntry 
{
	struct FName                                  DataKey;                                                     // 0x00(0x08)
	struct FString                                DataValue;                                                   // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphPinType
// Size: 0x58 (Inherited: 0x00)
struct FEdGraphPinType 
{
	struct FName                                  PinCategory;                                                 // 0x00(0x08)
	struct FName                                  PinSubCategory;                                              // 0x08(0x08)
	struct TWeakObjectPtr<struct FNone>           PinSubCategoryObject;                                        // 0x10(0x08)
	struct FNone                                  PinSubCategoryMemberReference;                               // 0x18(0x20)
	struct FNone                                  PinValueType;                                                // 0x38(0x1c)
	enum class None                               ContainerType;                                               // 0x54(0x01)
	char                                          bIsArray : 0;                                                // 0x55(0x01)
	char                                          bIsReference : 0;                                            // 0x55(0x01)
	char                                          bIsConst : 0;                                                // 0x55(0x01)
	char                                          bIsWeakPointer : 0;                                          // 0x55(0x01)
	char                                          UnknownData55[0x3];                                          // 0x55(0x03)
};

// ScriptStruct Engine.EdGraphTerminalType
// Size: 0x1c (Inherited: 0x00)
struct FEdGraphTerminalType 
{
	struct FName                                  TerminalCategory;                                            // 0x00(0x08)
	struct FName                                  TerminalSubCategory;                                         // 0x08(0x08)
	struct TWeakObjectPtr<struct FNone>           TerminalSubCategoryObject;                                   // 0x10(0x08)
	char                                          bTerminalIsConst : 0;                                        // 0x18(0x01)
	char                                          UnknownData18[0x1];                                          // 0x18(0x01)
	char                                          bTerminalIsWeakPointer : 0;                                  // 0x19(0x01)
	char                                          UnknownData19[0x3];                                          // 0x19(0x03)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintMacroCosmeticInfo 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x00)
struct FCompilerNativizationOptions 
{
	struct FName                                  PlatformName;                                                // 0x00(0x08)
	char                                          ServerOnlyPlatform : 0;                                      // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          ClientOnlyPlatform : 0;                                      // 0x09(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bExcludeMonolithicHeaders : 0;                               // 0x0a(0x01)
	char                                          UnknownDataA[0x6];                                           // 0x0a(0x06)
	struct TArray<None>                           ExcludedModules;                                             // 0x10(0x10)
	struct TSet<None>                             ExcludedAssets;                                              // 0x20(0x50)
	struct TArray<None>                           ExcludedFolderPaths;                                         // 0x70(0x10)
};

// ScriptStruct Engine.BPComponentClassOverride
// Size: 0x10 (Inherited: 0x00)
struct FBPComponentClassOverride 
{
	struct FName                                  ComponentName;                                               // 0x00(0x08)
	struct FNone*                                 ComponentClass;                                              // 0x08(0x08)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x48 (Inherited: 0x00)
struct FBlueprintCookedComponentInstancingData 
{
	struct TArray<None>                           ChangedPropertyList;                                         // 0x00(0x10)
	char                                          UnknownData10[0x11];                                         // 0x10(0x11)
	char                                          bHasValidCookedData : 0;                                     // 0x21(0x01)
	char                                          UnknownData21[0x27];                                         // 0x21(0x27)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentChangedPropertyInfo 
{
	struct FName                                  PropertyName;                                                // 0x00(0x08)
	uint32_t                                      ArrayIndex;                                                  // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 PropertyScope;                                               // 0x10(0x08)
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x00)
struct FEventGraphFastCallPair 
{
	struct FNone*                                 FunctionToPatch;                                             // 0x00(0x08)
	uint32_t                                      EventGraphCallOffset;                                        // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintDebugData 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 (Inherited: 0x00)
struct FPointerToUberGraphFrame 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x00)
struct FDebuggingInfoForSingleFunction 
{
	char                                          UnknownData0[0x190];                                         // 0x00(0x190)
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x00)
struct FNodeToCodeAssociation 
{
	char                                          UnknownData0[0x14];                                          // 0x00(0x14)
};

// ScriptStruct Engine.AnimCurveType
// Size: 0x02 (Inherited: 0x00)
struct FAnimCurveType 
{
	char                                          UnknownData0[0x2];                                           // 0x00(0x02)
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmarkBaseJumpToSettings 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x01 (Inherited: 0x01)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings 
{
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmark2DJumpToSettings 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.GeomSelection
// Size: 0x0c (Inherited: 0x00)
struct FGeomSelection 
{
	uint32_t                                      Type;                                                        // 0x00(0x04)
	uint32_t                                      Index;                                                       // 0x04(0x04)
	uint32_t                                      SelectionIndex;                                              // 0x08(0x04)
};

// ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x00)
struct FBuilderPoly 
{
	struct TArray<None>                           VertexIndices;                                               // 0x00(0x10)
	uint32_t                                      Direction;                                                   // 0x10(0x04)
	struct FName                                  ItemName;                                                    // 0x14(0x08)
	uint32_t                                      PolyFlags;                                                   // 0x1c(0x04)
};

// ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x24 (Inherited: 0x00)
struct FCachedAnimTransitionData 
{
	struct FName                                  StateMachineName;                                            // 0x00(0x08)
	struct FName                                  FromStateName;                                               // 0x08(0x08)
	struct FName                                  ToStateName;                                                 // 0x10(0x08)
	char                                          UnknownData18[0xc];                                          // 0x18(0x0c)
};

// ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimRelevancyData 
{
	struct FName                                  StateMachineName;                                            // 0x00(0x08)
	struct FName                                  StateName;                                                   // 0x08(0x08)
	char                                          UnknownData10[0xc];                                          // 0x10(0x0c)
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimAssetPlayerData 
{
	struct FName                                  StateMachineName;                                            // 0x00(0x08)
	struct FName                                  StateName;                                                   // 0x08(0x08)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimStateArray 
{
	struct TArray<None>                           States;                                                      // 0x00(0x10)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimStateData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimStateData 
{
	struct FName                                  StateMachineName;                                            // 0x00(0x08)
	struct FName                                  StateName;                                                   // 0x08(0x08)
	char                                          UnknownData10[0xc];                                          // 0x10(0x0c)
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x10 (Inherited: 0x00)
struct FActiveCameraShakeInfo 
{
	struct FNone*                                 ShakeInstance;                                               // 0x00(0x08)
	struct TWeakObjectPtr<struct FNone>           ShakeSource;                                                 // 0x08(0x08)
};

// ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x00)
struct FPooledCameraShakes 
{
	struct TArray<None>                           PooledShakes;                                                // 0x00(0x10)
};

// ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator 
{
	struct FNone                                  X;                                                           // 0x00(0x0c)
	struct FNone                                  Y;                                                           // 0x0c(0x0c)
	struct FNone                                  Z;                                                           // 0x18(0x0c)
};

// ScriptStruct Engine.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator 
{
	float                                         Amplitude;                                                   // 0x00(0x04)
	float                                         Frequency;                                                   // 0x04(0x04)
	char                                          InitialOffset;                                               // 0x08(0x01)
	enum class None                               Waveform;                                                    // 0x09(0x01)
	char                                          UnknownDataA[0x2];                                           // 0x0a(0x02)
};

// ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator 
{
	struct FNone                                  Pitch;                                                       // 0x00(0x0c)
	struct FNone                                  Yaw;                                                         // 0x0c(0x0c)
	struct FNone                                  Roll;                                                        // 0x18(0x0c)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 (Inherited: 0x00)
struct FDummySpacerCameraTypes 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x650 (Inherited: 0x00)
struct FMinimalViewInfo 
{
	struct FNone                                  Location;                                                    // 0x00(0x0c)
	struct FNone                                  Rotation;                                                    // 0x0c(0x0c)
	float                                         FOV;                                                         // 0x18(0x04)
	float                                         DesiredFOV;                                                  // 0x1c(0x04)
	char                                          UnknownData20[0x4];                                          // 0x20(0x04)
	float                                         OrthoWidth;                                                  // 0x24(0x04)
	float                                         OrthoNearClipPlane;                                          // 0x28(0x04)
	float                                         OrthoFarClipPlane;                                           // 0x2c(0x04)
	float                                         AspectRatio;                                                 // 0x30(0x04)
	char                                          bConstrainAspectRatio : 0;                                   // 0x34(0x01)
	char                                          bUseFieldOfViewForLOD : 0;                                   // 0x34(0x01)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	char                                          ProjectionMode;                                              // 0x38(0x01)
	char                                          UnknownData39[0x3];                                          // 0x39(0x03)
	float                                         PostProcessBlendWeight;                                      // 0x3c(0x04)
	struct FNone                                  PostProcessSettings;                                         // 0x40(0x5c0)
	struct FNone                                  OffCenterProjectionOffset;                                   // 0x600(0x08)
	char                                          UnknownData608[0x48];                                        // 0x608(0x48)
};

// ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x00)
struct FCanvasIcon 
{
	struct FNone*                                 Texture;                                                     // 0x00(0x08)
	float                                         U;                                                           // 0x08(0x04)
	float                                         V;                                                           // 0x0c(0x04)
	float                                         UL;                                                          // 0x10(0x04)
	float                                         VL;                                                          // 0x14(0x04)
};

// ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x00)
struct FWrappedStringElement 
{
	struct FString                                Value;                                                       // 0x00(0x10)
	struct FNone                                  LineExtent;                                                  // 0x10(0x08)
};

// ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x00)
struct FTextSizingParameters 
{
	float                                         DrawX;                                                       // 0x00(0x04)
	float                                         DrawY;                                                       // 0x04(0x04)
	float                                         DrawXL;                                                      // 0x08(0x04)
	float                                         DrawYL;                                                      // 0x0c(0x04)
	struct FNone                                  Scaling;                                                     // 0x10(0x08)
	struct FNone*                                 DrawFont;                                                    // 0x18(0x08)
	struct FNone                                  SpacingAdjust;                                               // 0x20(0x08)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.FindFloorResult
// Size: 0x94 (Inherited: 0x00)
struct FFindFloorResult 
{
	char                                          bBlockingHit : 0;                                            // 0x00(0x01)
	char                                          bWalkableFloor : 0;                                          // 0x00(0x01)
	char                                          bLineTrace : 0;                                              // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         FloorDist;                                                   // 0x04(0x04)
	float                                         LineDist;                                                    // 0x08(0x04)
	struct FNone                                  HitResult;                                                   // 0x0c(0x88)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData 
{
	struct FNone*                                 ChildActorClass;                                             // 0xa8(0x08)
	struct FName                                  ChildActorName;                                              // 0xb0(0x08)
	struct TArray<None>                           AttachedActors;                                              // 0xb8(0x10)
	char                                          UnknownDataC8[0x10];                                         // 0xc8(0x10)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x40 (Inherited: 0x00)
struct FChildActorAttachedActorInfo 
{
	struct TWeakObjectPtr<struct FNone>           Actor;                                                       // 0x00(0x08)
	struct FName                                  SocketName;                                                  // 0x08(0x08)
	struct FNone                                  RelativeTransform;                                           // 0x10(0x30)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct TArray<None>                           CustomResponses;                                             // 0x08(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x0c (Inherited: 0x00)
struct FCustomChannelSetup 
{
	char                                          Channel;                                                     // 0x00(0x01)
	char                                          DefaultResponse;                                             // 0x01(0x01)
	char                                          bTraceType : 0;                                              // 0x02(0x01)
	char                                          UnknownData2[0x1];                                           // 0x02(0x01)
	char                                          bStaticObject : 0;                                           // 0x03(0x01)
	char                                          UnknownData3[0x1];                                           // 0x03(0x01)
	struct FName                                  Name;                                                        // 0x04(0x08)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x48 (Inherited: 0x00)
struct FCollisionResponseTemplate 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	char                                          CollisionEnabled;                                            // 0x08(0x01)
	char                                          UnknownData9[0x1];                                           // 0x09(0x01)
	char                                          bCanModify : 0;                                              // 0x0a(0x01)
	char                                          UnknownDataA[0x22];                                          // 0x0a(0x22)
	struct FName                                  ObjectTypeName;                                              // 0x2c(0x08)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct TArray<None>                           CustomResponses;                                             // 0x38(0x10)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentDelegateBinding 
{
	struct FName                                  ComponentPropertyName;                                       // 0x00(0x08)
	struct FName                                  DelegatePropertyName;                                        // 0x08(0x08)
	struct FName                                  FunctionNameToBind;                                          // 0x10(0x08)
};

// ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x00)
struct FMeshUVChannelInfo 
{
	char                                          bInitialized : 0;                                            // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bOverrideDensities : 0;                                      // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         LocalUVDensities[0x4];                                       // 0x04(0x10)
};

// ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteNode 
{
	uint32_t                                      IndexChar;                                                   // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TArray<None>                           AutoCompleteListIndices;                                     // 0x08(0x10)
	char                                          UnknownData18[0x10];                                         // 0x18(0x10)
};

// ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FAngularDriveConstraint 
{
	struct FNone                                  TwistDrive;                                                  // 0x00(0x10)
	struct FNone                                  SwingDrive;                                                  // 0x10(0x10)
	struct FNone                                  SlerpDrive;                                                  // 0x20(0x10)
	struct FNone                                  OrientationTarget;                                           // 0x30(0x0c)
	struct FNone                                  AngularVelocityTarget;                                       // 0x3c(0x0c)
	char                                          AngularDriveMode;                                            // 0x48(0x01)
	char                                          UnknownData49[0x3];                                          // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDrive 
{
	float                                         Stiffness;                                                   // 0x00(0x04)
	float                                         Damping;                                                     // 0x04(0x04)
	float                                         MaxForce;                                                    // 0x08(0x04)
	char                                          bEnablePositionDrive : 0;                                    // 0x0c(0x01)
	char                                          bEnableVelocityDrive : 0;                                    // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FLinearDriveConstraint 
{
	struct FNone                                  PositionTarget;                                              // 0x00(0x0c)
	struct FNone                                  VelocityTarget;                                              // 0x0c(0x0c)
	struct FNone                                  XDrive;                                                      // 0x18(0x10)
	struct FNone                                  YDrive;                                                      // 0x28(0x10)
	struct FNone                                  ZDrive;                                                      // 0x38(0x10)
	char                                          bEnablePositionDrive : 0;                                    // 0x48(0x01)
	char                                          UnknownData48[0x4];                                          // 0x48(0x04)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1b8 (Inherited: 0x00)
struct FConstraintInstance 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
	struct FName                                  JointName;                                                   // 0x18(0x08)
	struct FName                                  ConstraintBone1;                                             // 0x20(0x08)
	struct FName                                  ConstraintBone2;                                             // 0x28(0x08)
	struct FNone                                  Pos1;                                                        // 0x30(0x0c)
	struct FNone                                  PriAxis1;                                                    // 0x3c(0x0c)
	struct FNone                                  SecAxis1;                                                    // 0x48(0x0c)
	struct FNone                                  Pos2;                                                        // 0x54(0x0c)
	struct FNone                                  PriAxis2;                                                    // 0x60(0x0c)
	struct FNone                                  SecAxis2;                                                    // 0x6c(0x0c)
	struct FNone                                  AngularRotationOffset;                                       // 0x78(0x0c)
	char                                          bScaleLinearLimits : 0;                                      // 0x84(0x01)
	char                                          UnknownData84[0x8];                                          // 0x84(0x08)
	struct FNone                                  ProfileInstance;                                             // 0x8c(0x104)
	char                                          UnknownData190[0x28];                                        // 0x190(0x28)
};

// ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x104 (Inherited: 0x00)
struct FConstraintProfileProperties 
{
	float                                         ProjectionLinearTolerance;                                   // 0x00(0x04)
	float                                         ProjectionAngularTolerance;                                  // 0x04(0x04)
	float                                         LinearBreakThreshold;                                        // 0x08(0x04)
	float                                         AngularBreakThreshold;                                       // 0x0c(0x04)
	struct FNone                                  LinearLimit;                                                 // 0x10(0x1c)
	struct FNone                                  ConeLimit;                                                   // 0x2c(0x20)
	struct FNone                                  TwistLimit;                                                  // 0x4c(0x1c)
	struct FNone                                  LinearDrive;                                                 // 0x68(0x4c)
	struct FNone                                  AngularDrive;                                                // 0xb4(0x4c)
	char                                          bDisableCollision : 0;                                       // 0x100(0x01)
	char                                          bParentDominates : 0;                                        // 0x100(0x01)
	char                                          bEnableProjection : 0;                                       // 0x100(0x01)
	char                                          bAngularBreakable : 0;                                       // 0x100(0x01)
	char                                          bLinearBreakable : 0;                                        // 0x100(0x01)
	char                                          UnknownData100[0x4];                                         // 0x100(0x04)
};

// ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x00)
struct FConstraintBaseParams 
{
	float                                         Stiffness;                                                   // 0x00(0x04)
	float                                         Damping;                                                     // 0x04(0x04)
	float                                         Restitution;                                                 // 0x08(0x04)
	float                                         ContactDistance;                                             // 0x0c(0x04)
	char                                          bSoftConstraint : 0;                                         // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
};

// ScriptStruct Engine.TwistConstraint
// Size: 0x1c (Inherited: 0x14)
struct FTwistConstraint : FConstraintBaseParams 
{
	float                                         TwistLimitDegrees;                                           // 0x14(0x04)
	char                                          TwistMotion;                                                 // 0x18(0x01)
	char                                          UnknownData19[0x3];                                          // 0x19(0x03)
};

// ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : FConstraintBaseParams 
{
	float                                         Swing1LimitDegrees;                                          // 0x14(0x04)
	float                                         Swing2LimitDegrees;                                          // 0x18(0x04)
	char                                          Swing1Motion;                                                // 0x1c(0x01)
	char                                          Swing2Motion;                                                // 0x1d(0x01)
	char                                          UnknownData1E[0x2];                                          // 0x1e(0x02)
};

// ScriptStruct Engine.LinearConstraint
// Size: 0x1c (Inherited: 0x14)
struct FLinearConstraint : FConstraintBaseParams 
{
	float                                         Limit;                                                       // 0x14(0x04)
	char                                          XMotion;                                                     // 0x18(0x01)
	char                                          YMotion;                                                     // 0x19(0x01)
	char                                          ZMotion;                                                     // 0x1a(0x01)
	char                                          UnknownData1B[0x1];                                          // 0x1b(0x01)
};

// ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceSizePair 
{
	float                                         Size;                                                        // 0x00(0x04)
	float                                         CullDistance;                                                // 0x04(0x04)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x208 (Inherited: 0x00)
struct FRuntimeCurveLinearColor 
{
	struct FNone                                  ColorCurves[0x4];                                            // 0x00(0x200)
	struct FNone*                                 ExternalCurve;                                               // 0x200(0x08)
};

// ScriptStruct Engine.NamedCurveValue
// Size: 0x0c (Inherited: 0x00)
struct FNamedCurveValue 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	float                                         Value;                                                       // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle 
{
	struct FNone*                                 CurveTable;                                                  // 0x00(0x08)
	struct FName                                  RowName;                                                     // 0x08(0x08)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle 
{
	struct FNone*                                 DataTable;                                                   // 0x00(0x08)
	struct FName                                  ColumnName;                                                  // 0x08(0x08)
	struct FName                                  RowContents;                                                 // 0x10(0x08)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x00)
struct FDebugCameraControllerSettingsViewModeIndex 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	char                                          ViewModeIndex;                                               // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
};

// ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x00)
struct FDebugDisplayProperty 
{
	struct FNone*                                 Obj;                                                         // 0x00(0x08)
	struct FNone*                                 WithinClass;                                                 // 0x08(0x08)
	char                                          UnknownData10[0x10];                                         // 0x10(0x10)
};

// ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x00)
struct FMulticastRecordOptions 
{
	struct FString                                FuncPathName;                                                // 0x00(0x10)
	char                                          bServerSkip : 0;                                             // 0x10(0x01)
	char                                          UnknownData10[0x1];                                          // 0x10(0x01)
	char                                          bClientSkip : 0;                                             // 0x11(0x01)
	char                                          UnknownData11[0x7];                                          // 0x11(0x07)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xb0 (Inherited: 0x00)
struct FRollbackNetStartupActorInfo 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 Archetype;                                                   // 0x08(0x08)
	char                                          UnknownData10[0x28];                                         // 0x10(0x28)
	struct FNone*                                 Level;                                                       // 0x38(0x08)
	char                                          UnknownData40[0x60];                                         // 0x40(0x60)
	struct TArray<None>                           ObjReferences;                                               // 0xa0(0x10)
};

// ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x00)
struct FLevelNameAndTime 
{
	struct FString                                LevelName;                                                   // 0x00(0x10)
	uint32_t                                      LevelChangeTimeInMS;                                         // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter 
{
	struct FNone*                                 DialogueWave;                                                // 0x00(0x08)
	struct FNone                                  Context;                                                     // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext 
{
	struct FNone*                                 Speaker;                                                     // 0x00(0x08)
	struct TArray<None>                           Targets;                                                     // 0x08(0x10)
};

// ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x00)
struct FDialogueContextMapping 
{
	struct FNone                                  Context;                                                     // 0x00(0x18)
	struct FNone*                                 SoundWave;                                                   // 0x18(0x08)
	struct FString                                LocalizationKeyFormat;                                       // 0x20(0x10)
	struct FNone*                                 Proxy;                                                       // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : FRawDistribution 
{
	float                                         MinValue;                                                    // 0x20(0x04)
	float                                         MaxValue;                                                    // 0x24(0x04)
	struct FNone*                                 Distribution;                                                // 0x28(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x48 (Inherited: 0x20)
struct FRawDistributionVector : FRawDistribution 
{
	float                                         MinValue;                                                    // 0x20(0x04)
	float                                         MaxValue;                                                    // 0x24(0x04)
	struct FNone                                  MinValueVec;                                                 // 0x28(0x0c)
	struct FNone                                  MaxValueVec;                                                 // 0x34(0x0c)
	struct FNone*                                 Distribution;                                                // 0x40(0x08)
};

// ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x00)
struct FGraphReference 
{
	struct FNone*                                 MacroGraph;                                                  // 0x00(0x08)
	struct FNone*                                 GraphBlueprint;                                              // 0x08(0x08)
	struct FNone                                  GraphGuid;                                                   // 0x10(0x10)
};

// ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x00)
struct FEdGraphPinReference 
{
	struct TWeakObjectPtr<struct FNone>           OwningNode;                                                  // 0x00(0x08)
	struct FNone                                  PinID;                                                       // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x00)
struct FEdGraphSchemaAction 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FText                                  MenuDescription;                                             // 0x08(0x18)
	struct FText                                  TooltipDescription;                                          // 0x20(0x18)
	struct FText                                  Category;                                                    // 0x38(0x18)
	struct FText                                  Keywords;                                                    // 0x50(0x18)
	uint32_t                                      Grouping;                                                    // 0x68(0x04)
	uint32_t                                      SectionID;                                                   // 0x6c(0x04)
	struct TArray<None>                           MenuDescriptionArray;                                        // 0x70(0x10)
	struct TArray<None>                           FullSearchTitlesArray;                                       // 0x80(0x10)
	struct TArray<None>                           FullSearchKeywordsArray;                                     // 0x90(0x10)
	struct TArray<None>                           FullSearchCategoryArray;                                     // 0xa0(0x10)
	struct TArray<None>                           LocalizedMenuDescriptionArray;                               // 0xb0(0x10)
	struct TArray<None>                           LocalizedFullSearchTitlesArray;                              // 0xc0(0x10)
	struct TArray<None>                           LocalizedFullSearchKeywordsArray;                            // 0xd0(0x10)
	struct TArray<None>                           LocalizedFullSearchCategoryArray;                            // 0xe0(0x10)
	struct FString                                SearchText;                                                  // 0xf0(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction 
{
	struct FNone*                                 NodeTemplate;                                                // 0x100(0x08)
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)
struct FPluginRedirect 
{
	struct FString                                OldPluginName;                                               // 0x00(0x10)
	struct FString                                NewPluginName;                                               // 0x10(0x10)
};

// ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x00)
struct FStructRedirect 
{
	struct FName                                  OldStructName;                                               // 0x00(0x08)
	struct FName                                  NewStructName;                                               // 0x08(0x08)
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x3c (Inherited: 0x00)
struct FClassRedirect 
{
	struct FName                                  ObjectName;                                                  // 0x00(0x08)
	struct FName                                  OldClassName;                                                // 0x08(0x08)
	struct FName                                  NewClassName;                                                // 0x10(0x08)
	struct FName                                  OldSubobjName;                                               // 0x18(0x08)
	struct FName                                  NewSubobjName;                                               // 0x20(0x08)
	struct FName                                  NewClassClass;                                               // 0x28(0x08)
	struct FName                                  NewClassPackage;                                             // 0x30(0x08)
	char                                          InstanceOnly : 0;                                            // 0x38(0x01)
	char                                          UnknownData38[0x4];                                          // 0x38(0x04)
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameNameRedirect 
{
	struct FName                                  OldGameName;                                                 // 0x00(0x08)
	struct FName                                  NewGameName;                                                 // 0x08(0x08)
};

// ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x00)
struct FScreenMessageString 
{
	uint64_t                                      Key;                                                         // 0x00(0x08)
	struct FString                                ScreenMessage;                                               // 0x08(0x10)
	struct FNone                                  DisplayColor;                                                // 0x18(0x04)
	float                                         TimeToDisplay;                                               // 0x1c(0x04)
	float                                         CurrentTimeDisplayed;                                        // 0x20(0x04)
	struct FNone                                  TextScale;                                                   // 0x24(0x08)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x00)
struct FDropNoteInfo 
{
	struct FNone                                  Location;                                                    // 0x00(0x0c)
	struct FNone                                  Rotation;                                                    // 0x0c(0x0c)
	struct FString                                Comment;                                                     // 0x18(0x10)
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)
struct FStatColorMapping 
{
	struct FString                                StatName;                                                    // 0x00(0x10)
	struct TArray<None>                           ColorMap;                                                    // 0x10(0x10)
	char                                          DisableBlend : 0;                                            // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)
struct FStatColorMapEntry 
{
	float                                         In;                                                          // 0x00(0x04)
	struct FNone                                  Out;                                                         // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x280 (Inherited: 0x00)
struct FWorldContext 
{
	char                                          UnknownData0[0xd0];                                          // 0x00(0xd0)
	struct FNone                                  LastURL;                                                     // 0xd0(0x68)
	struct FNone                                  LastRemoteURL;                                               // 0x138(0x68)
	struct FNone*                                 PendingNetGame;                                              // 0x1a0(0x08)
	struct TArray<None>                           PackagesToFullyLoad;                                         // 0x1a8(0x10)
	char                                          UnknownData1B8[0x10];                                        // 0x1b8(0x10)
	struct TArray<None>                           LoadedLevelsForPendingMapChange;                             // 0x1c8(0x10)
	char                                          UnknownData1D8[0x18];                                        // 0x1d8(0x18)
	struct TArray<None>                           ObjectReferencers;                                           // 0x1f0(0x10)
	struct TArray<None>                           PendingLevelStreamingStatusUpdates;                          // 0x200(0x10)
	struct FNone*                                 GameViewport;                                                // 0x210(0x08)
	struct FNone*                                 OwningGameInstance;                                          // 0x218(0x08)
	struct TArray<None>                           ActiveNetDrivers;                                            // 0x220(0x10)
	char                                          UnknownData230[0x50];                                        // 0x230(0x50)
};

// ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x00)
struct FNamedNetDriver 
{
	struct FNone*                                 NetDriver;                                                   // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x00)
struct FLevelStreamingStatus 
{
	struct FName                                  PackageName;                                                 // 0x00(0x08)
	char                                          bShouldBeLoaded : 0;                                         // 0x08(0x01)
	char                                          bShouldBeVisible : 0;                                        // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	uint32_t                                      LODIndex;                                                    // 0x0c(0x04)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x00)
struct FFullyLoadedPackagesInfo 
{
	char                                          FullyLoadType;                                               // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                Tag;                                                         // 0x08(0x10)
	struct TArray<None>                           PackagesToLoad;                                              // 0x18(0x10)
	struct TArray<None>                           LoadedObjects;                                               // 0x28(0x10)
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x00)
struct FNetDriverDefinition 
{
	struct FName                                  DefName;                                                     // 0x00(0x08)
	struct FName                                  DriverClassName;                                             // 0x08(0x08)
	struct FName                                  DriverClassNameFallback;                                     // 0x10(0x08)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings 
{
	float                                         FixedEV100;                                                  // 0x00(0x04)
	char                                          bFixed : 0;                                                  // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
};

// ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x00)
struct FTickPrerequisite 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x00)
struct FCanvasUVTri 
{
	struct FNone                                  V0_Pos;                                                      // 0x00(0x08)
	struct FNone                                  V0_UV;                                                       // 0x08(0x08)
	struct FNone                                  V0_Color;                                                    // 0x10(0x10)
	struct FNone                                  V1_Pos;                                                      // 0x20(0x08)
	struct FNone                                  V1_UV;                                                       // 0x28(0x08)
	struct FNone                                  V1_Color;                                                    // 0x30(0x10)
	struct FNone                                  V2_Pos;                                                      // 0x40(0x08)
	struct FNone                                  V2_UV;                                                       // 0x48(0x08)
	struct FNone                                  V2_Color;                                                    // 0x50(0x10)
};

// ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x00)
struct FFontRenderInfo 
{
	char                                          bClipText : 0;                                               // 0x00(0x01)
	char                                          bEnableShadow : 0;                                           // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  GlowInfo;                                                    // 0x04(0x24)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x00)
struct FDepthFieldGlowInfo 
{
	char                                          bEnableGlow : 0;                                             // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  GlowColor;                                                   // 0x04(0x10)
	struct FNone                                  GlowOuterRadius;                                             // 0x14(0x08)
	struct FNone                                  GlowInnerRadius;                                             // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector 
{
	struct FName                                  OldName;                                                     // 0x00(0x08)
	struct FName                                  NewName;                                                     // 0x08(0x08)
};

// ScriptStruct Engine.CollectionReference
// Size: 0x08 (Inherited: 0x00)
struct FCollectionReference 
{
	struct FName                                  CollectionName;                                              // 0x00(0x08)
};

// ScriptStruct Engine.ComponentReference
// Size: 0x28 (Inherited: 0x00)
struct FComponentReference 
{
	struct FNone*                                 OtherActor;                                                  // 0x00(0x08)
	struct FName                                  ComponentProperty;                                           // 0x08(0x08)
	struct FString                                PathToComponent;                                             // 0x10(0x10)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x08 (Inherited: 0x00)
struct FConstrainComponentPropName 
{
	struct FName                                  ComponentName;                                               // 0x00(0x08)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x14 (Inherited: 0x00)
struct FSkeletalMeshBuildSettings 
{
	char                                          bRecomputeNormals : 0;                                       // 0x00(0x01)
	char                                          bRecomputeTangents : 0;                                      // 0x00(0x01)
	char                                          bUseMikkTSpace : 0;                                          // 0x00(0x01)
	char                                          bComputeWeightedNormals : 0;                                 // 0x00(0x01)
	char                                          bRemoveDegenerates : 0;                                      // 0x00(0x01)
	char                                          bUseHighPrecisionTangentBasis : 0;                           // 0x00(0x01)
	char                                          bUseFullPrecisionUVs : 0;                                    // 0x00(0x01)
	char                                          bBuildAdjacencyBuffer : 0;                                   // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         ThresholdPosition;                                           // 0x04(0x04)
	float                                         ThresholdTangentNormal;                                      // 0x08(0x04)
	float                                         ThresholdUV;                                                 // 0x0c(0x04)
	float                                         MorphThresholdPosition;                                      // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x30 (Inherited: 0x00)
struct FMeshBuildSettings 
{
	char                                          bUseMikkTSpace : 0;                                          // 0x00(0x01)
	char                                          bRecomputeNormals : 0;                                       // 0x00(0x01)
	char                                          bRecomputeTangents : 0;                                      // 0x00(0x01)
	char                                          bComputeWeightedNormals : 0;                                 // 0x00(0x01)
	char                                          bRemoveDegenerates : 0;                                      // 0x00(0x01)
	char                                          bBuildAdjacencyBuffer : 0;                                   // 0x00(0x01)
	char                                          bBuildReversedIndexBuffer : 0;                               // 0x00(0x01)
	char                                          bUseHighPrecisionTangentBasis : 0;                           // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bUseFullPrecisionUVs : 0;                                    // 0x01(0x01)
	char                                          bGenerateLightmapUVs : 0;                                    // 0x01(0x01)
	char                                          bGenerateDistanceFieldAsIfTwoSided : 0;                      // 0x01(0x01)
	char                                          bSupportFaceRemap : 0;                                       // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	uint32_t                                      MinLightmapResolution;                                       // 0x04(0x04)
	uint32_t                                      SrcLightmapIndex;                                            // 0x08(0x04)
	uint32_t                                      DstLightmapIndex;                                            // 0x0c(0x04)
	float                                         BuildScale;                                                  // 0x10(0x04)
	struct FNone                                  BuildScale3D;                                                // 0x14(0x0c)
	float                                         DistanceFieldResolutionScale;                                // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FNone*                                 DistanceFieldReplacementMesh;                                // 0x28(0x08)
};

// ScriptStruct Engine.POV
// Size: 0x1c (Inherited: 0x00)
struct FPOV 
{
	struct FNone                                  Location;                                                    // 0x00(0x0c)
	struct FNone                                  Rotation;                                                    // 0x0c(0x0c)
	float                                         FOV;                                                         // 0x18(0x04)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x88 (Inherited: 0x00)
struct FAnimUpdateRateParameters 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	enum class None                               ShiftBucket;                                                 // 0x01(0x01)
	char                                          bInterpolateSkippedFrames : 0;                               // 0x02(0x01)
	char                                          bShouldUseLodMap : 0;                                        // 0x02(0x01)
	char                                          bShouldUseMinLod : 0;                                        // 0x02(0x01)
	char                                          bSkipUpdate : 0;                                             // 0x02(0x01)
	char                                          bSkipEvaluation : 0;                                         // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	uint32_t                                      UpdateRate;                                                  // 0x04(0x04)
	uint32_t                                      EvaluationRate;                                              // 0x08(0x04)
	float                                         TickedPoseOffestTime;                                        // 0x0c(0x04)
	float                                         AdditionalTime;                                              // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	uint32_t                                      BaseNonRenderedUpdateRate;                                   // 0x18(0x04)
	uint32_t                                      MaxEvalRateForInterpolation;                                 // 0x1c(0x04)
	struct TArray<None>                           BaseVisibleDistanceFactorThesholds;                          // 0x20(0x10)
	struct TMap<None, None>                       LODToFrameSkipMap;                                           // 0x30(0x50)
	uint32_t                                      SkippedUpdateFrames;                                         // 0x80(0x04)
	uint32_t                                      SkippedEvalFrames;                                           // 0x84(0x04)
};

// ScriptStruct Engine.AnimSlotDesc
// Size: 0x0c (Inherited: 0x00)
struct FAnimSlotDesc 
{
	struct FName                                  SlotName;                                                    // 0x00(0x08)
	uint32_t                                      NumChannels;                                                 // 0x08(0x04)
};

// ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotInfo 
{
	struct FName                                  SlotName;                                                    // 0x00(0x08)
	struct TArray<None>                           ChannelWeights;                                              // 0x08(0x10)
};

// ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x00)
struct FMTDResult 
{
	struct FNone                                  Direction;                                                   // 0x00(0x0c)
	float                                         Distance;                                                    // 0x0c(0x04)
};

// ScriptStruct Engine.OverlapResult
// Size: 0x18 (Inherited: 0x00)
struct FOverlapResult 
{
	struct TWeakObjectPtr<struct FNone>           Actor;                                                       // 0x00(0x08)
	struct TWeakObjectPtr<struct FNone>           Component;                                                   // 0x08(0x08)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	char                                          bBlockingHit : 0;                                            // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x00)
struct FPrimitiveMaterialRef 
{
	struct FNone*                                 Primitive;                                                   // 0x00(0x08)
	struct FNone*                                 Decal;                                                       // 0x08(0x08)
	uint32_t                                      ElementIndex;                                                // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 (Inherited: 0x00)
struct FSwarmDebugOptions 
{
	char                                          bDistributionEnabled : 0;                                    // 0x00(0x01)
	char                                          bForceContentExport : 0;                                     // 0x00(0x01)
	char                                          bInitialized : 0;                                            // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x00)
struct FLightmassDebugOptions 
{
	char                                          bDebugMode : 0;                                              // 0x00(0x01)
	char                                          bStatsEnabled : 0;                                           // 0x00(0x01)
	char                                          bGatherBSPSurfacesAcrossComponents : 0;                      // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         CoplanarTolerance;                                           // 0x04(0x04)
	char                                          bUseImmediateImport : 0;                                     // 0x08(0x01)
	char                                          bImmediateProcessMappings : 0;                               // 0x08(0x01)
	char                                          bSortMappings : 0;                                           // 0x08(0x01)
	char                                          bDumpBinaryFiles : 0;                                        // 0x08(0x01)
	char                                          bDebugMaterials : 0;                                         // 0x08(0x01)
	char                                          bPadMappings : 0;                                            // 0x08(0x01)
	char                                          bDebugPaddings : 0;                                          // 0x08(0x01)
	char                                          bOnlyCalcDebugTexelMappings : 0;                             // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bUseRandomColors : 0;                                        // 0x09(0x01)
	char                                          bColorBordersGreen : 0;                                      // 0x09(0x01)
	char                                          bColorByExecutionTime : 0;                                   // 0x09(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	float                                         ExecutionTimeDivisor;                                        // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 (Inherited: 0x00)
struct FLightmassPrimitiveSettings 
{
	char                                          bUseTwoSidedLighting : 0;                                    // 0x00(0x01)
	char                                          bShadowIndirectOnly : 0;                                     // 0x00(0x01)
	char                                          bUseEmissiveForStaticLighting : 0;                           // 0x00(0x01)
	char                                          bUseVertexNormalForHemisphereGather : 0;                     // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         EmissiveLightFalloffExponent;                                // 0x04(0x04)
	float                                         EmissiveLightExplicitInfluenceRadius;                        // 0x08(0x04)
	float                                         EmissiveBoost;                                               // 0x0c(0x04)
	float                                         DiffuseBoost;                                                // 0x10(0x04)
	float                                         FullyOccludedSamplesFraction;                                // 0x14(0x04)
};

// ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightmassLightSettings 
{
	float                                         IndirectLightingSaturation;                                  // 0x00(0x04)
	float                                         ShadowExponent;                                              // 0x04(0x04)
	char                                          bUseAreaShadowsForStationaryLight : 0;                       // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0x0c)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings 
{
	float                                         LightSourceAngle;                                            // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c (Inherited: 0x0c)
struct FLightmassPointLightSettings : FLightmassLightSettings 
{
};

// ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x00)
struct FBasedPosition 
{
	struct FNone*                                 Base;                                                        // 0x00(0x08)
	struct FNone                                  Position;                                                    // 0x08(0x0c)
	struct FNone                                  CachedBaseLocation;                                          // 0x14(0x0c)
	struct FNone                                  CachedBaseRotation;                                          // 0x20(0x0c)
	struct FNone                                  CachedTransPosition;                                         // 0x2c(0x0c)
};

// ScriptStruct Engine.CollisionImpactData
// Size: 0x28 (Inherited: 0x00)
struct FCollisionImpactData 
{
	struct TArray<None>                           ContactInfos;                                                // 0x00(0x10)
	struct FNone                                  TotalNormalImpulse;                                          // 0x10(0x0c)
	struct FNone                                  TotalFrictionImpulse;                                        // 0x1c(0x0c)
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x00)
struct FRigidBodyContactInfo 
{
	struct FNone                                  ContactPosition;                                             // 0x00(0x0c)
	struct FNone                                  ContactNormal;                                               // 0x0c(0x0c)
	float                                         ContactPenetration;                                          // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FNone*                                 PhysMaterial[0x2];                                           // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x00)
struct FRigidBodyState 
{
	struct FNone                                  Position;                                                    // 0x00(0x0c)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone                                  Quaternion;                                                  // 0x10(0x10)
	struct FNone                                  LinVel;                                                      // 0x20(0x0c)
	struct FNone                                  AngVel;                                                      // 0x2c(0x0c)
	char                                          Flags;                                                       // 0x38(0x01)
	char                                          UnknownData39[0x7];                                          // 0x39(0x07)
};

// ScriptStruct Engine.MaterialShadingModelField
// Size: 0x02 (Inherited: 0x00)
struct FMaterialShadingModelField 
{
	uint16_t                                      ShadingModelField;                                           // 0x00(0x02)
};

// ScriptStruct Engine.ExponentialHeightFogData
// Size: 0x0c (Inherited: 0x00)
struct FExponentialHeightFogData 
{
	float                                         FogDensity;                                                  // 0x00(0x04)
	float                                         FogHeightFalloff;                                            // 0x04(0x04)
	float                                         FogHeightOffset;                                             // 0x08(0x04)
};

// ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x00)
struct FFontCharacter 
{
	uint32_t                                      StartU;                                                      // 0x00(0x04)
	uint32_t                                      StartV;                                                      // 0x04(0x04)
	uint32_t                                      USize;                                                       // 0x08(0x04)
	uint32_t                                      VSize;                                                       // 0x0c(0x04)
	char                                          TextureIndex;                                                // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
	uint32_t                                      VerticalOffset;                                              // 0x14(0x04)
};

// ScriptStruct Engine.FontImportOptionsData
// Size: 0xb0 (Inherited: 0x00)
struct FFontImportOptionsData 
{
	struct FString                                FontName;                                                    // 0x00(0x10)
	float                                         Height;                                                      // 0x10(0x04)
	char                                          bEnableAntialiasing : 0;                                     // 0x14(0x01)
	char                                          bEnableBold : 0;                                             // 0x14(0x01)
	char                                          bEnableItalic : 0;                                           // 0x14(0x01)
	char                                          bEnableUnderline : 0;                                        // 0x14(0x01)
	char                                          bAlphaOnly : 0;                                              // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	char                                          CharacterSet;                                                // 0x18(0x01)
	char                                          UnknownData19[0x7];                                          // 0x19(0x07)
	struct FString                                Chars;                                                       // 0x20(0x10)
	struct FString                                UnicodeRange;                                                // 0x30(0x10)
	struct FString                                CharsFilePath;                                               // 0x40(0x10)
	struct FString                                CharsFileWildcard;                                           // 0x50(0x10)
	char                                          bCreatePrintableOnly : 0;                                    // 0x60(0x01)
	char                                          bIncludeASCIIRange : 0;                                      // 0x60(0x01)
	char                                          UnknownData60[0x4];                                          // 0x60(0x04)
	struct FNone                                  ForegroundColor;                                             // 0x64(0x10)
	char                                          bEnableDropShadow : 0;                                       // 0x74(0x01)
	char                                          UnknownData74[0x4];                                          // 0x74(0x04)
	uint32_t                                      TexturePageWidth;                                            // 0x78(0x04)
	uint32_t                                      TexturePageMaxHeight;                                        // 0x7c(0x04)
	uint32_t                                      XPadding;                                                    // 0x80(0x04)
	uint32_t                                      YPadding;                                                    // 0x84(0x04)
	uint32_t                                      ExtendBoxTop;                                                // 0x88(0x04)
	uint32_t                                      ExtendBoxBottom;                                             // 0x8c(0x04)
	uint32_t                                      ExtendBoxRight;                                              // 0x90(0x04)
	uint32_t                                      ExtendBoxLeft;                                               // 0x94(0x04)
	char                                          bEnableLegacyMode : 0;                                       // 0x98(0x01)
	char                                          UnknownData98[0x4];                                          // 0x98(0x04)
	uint32_t                                      Kerning;                                                     // 0x9c(0x04)
	char                                          bUseDistanceFieldAlpha : 0;                                  // 0xa0(0x01)
	char                                          UnknownDataA0[0x4];                                          // 0xa0(0x04)
	uint32_t                                      DistanceFieldScaleFactor;                                    // 0xa4(0x04)
	float                                         DistanceFieldScanRadiusScale;                                // 0xa8(0x04)
	char                                          UnknownDataAC[0x4];                                          // 0xac(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xb0 (Inherited: 0xb0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings 
{
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x90 (Inherited: 0x00)
struct FForceFeedbackChannelDetails 
{
	char                                          bAffectsLeftLarge : 0;                                       // 0x00(0x01)
	char                                          bAffectsLeftSmall : 0;                                       // 0x00(0x01)
	char                                          bAffectsRightLarge : 0;                                      // 0x00(0x01)
	char                                          bAffectsRightSmall : 0;                                      // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone                                  Curve;                                                       // 0x08(0x88)
};

// ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xb8 (Inherited: 0x00)
struct FPredictProjectilePathResult 
{
	struct TArray<None>                           PathData;                                                    // 0x00(0x10)
	struct FNone                                  LastTraceDestination;                                        // 0x10(0x1c)
	struct FNone                                  HitResult;                                                   // 0x2c(0x88)
	char                                          UnknownDataB4[0x4];                                          // 0xb4(0x04)
};

// ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1c (Inherited: 0x00)
struct FPredictProjectilePathPointData 
{
	struct FNone                                  Location;                                                    // 0x00(0x0c)
	struct FNone                                  Velocity;                                                    // 0x0c(0x0c)
	float                                         Time;                                                        // 0x18(0x04)
};

// ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x60 (Inherited: 0x00)
struct FPredictProjectilePathParams 
{
	struct FNone                                  StartLocation;                                               // 0x00(0x0c)
	struct FNone                                  LaunchVelocity;                                              // 0x0c(0x0c)
	char                                          bTraceWithCollision : 0;                                     // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	float                                         ProjectileRadius;                                            // 0x1c(0x04)
	float                                         MaxSimTime;                                                  // 0x20(0x04)
	char                                          bTraceWithChannel : 0;                                       // 0x24(0x01)
	char                                          UnknownData24[0x1];                                          // 0x24(0x01)
	char                                          TraceChannel;                                                // 0x25(0x01)
	char                                          UnknownData26[0x2];                                          // 0x26(0x02)
	struct TArray<None>                           ObjectTypes;                                                 // 0x28(0x10)
	struct TArray<None>                           ActorsToIgnore;                                              // 0x38(0x10)
	float                                         SimFrequency;                                                // 0x48(0x04)
	float                                         OverrideGravityZ;                                            // 0x4c(0x04)
	char                                          DrawDebugType;                                               // 0x50(0x01)
	char                                          UnknownData51[0x3];                                          // 0x51(0x03)
	float                                         DrawDebugTime;                                               // 0x54(0x04)
	char                                          bTraceComplex : 0;                                           // 0x58(0x01)
	char                                          UnknownData58[0x8];                                          // 0x58(0x08)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveHapticFeedbackEffect 
{
	struct FNone*                                 HapticEffect;                                                // 0x00(0x08)
	char                                          UnknownData8[0x10];                                          // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x110 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve 
{
	struct FNone                                  Frequency;                                                   // 0x00(0x88)
	struct FNone                                  Amplitude;                                                   // 0x88(0x88)
};

// ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x00)
struct FClusterNode 
{
	struct FNone                                  BoundMin;                                                    // 0x00(0x0c)
	uint32_t                                      FirstChild;                                                  // 0x0c(0x04)
	struct FNone                                  BoundMax;                                                    // 0x10(0x0c)
	uint32_t                                      LastChild;                                                   // 0x1c(0x04)
	uint32_t                                      FirstInstance;                                               // 0x20(0x04)
	uint32_t                                      LastInstance;                                                // 0x24(0x04)
	struct FNone                                  MinInstanceScale;                                            // 0x28(0x0c)
	struct FNone                                  MaxInstanceScale;                                            // 0x34(0x0c)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x00)
struct FClusterNode_DEPRECATED 
{
	struct FNone                                  BoundMin;                                                    // 0x00(0x0c)
	uint32_t                                      FirstChild;                                                  // 0x0c(0x04)
	struct FNone                                  BoundMax;                                                    // 0x10(0x0c)
	uint32_t                                      LastChild;                                                   // 0x1c(0x04)
	uint32_t                                      FirstInstance;                                               // 0x20(0x04)
	uint32_t                                      LastInstance;                                                // 0x24(0x04)
};

// ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x00)
struct FHLODProxyMesh 
{
	LazyObjectProperty                            LODActor;                                                    // 0x00(0x1c)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FNone*                                 StaticMesh;                                                  // 0x20(0x08)
	struct FName                                  Key;                                                         // 0x28(0x08)
};

// ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x00)
struct FImportanceTexture 
{
	struct FNone                                  Size;                                                        // 0x00(0x08)
	uint32_t                                      NumMips;                                                     // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           MarginalCDF;                                                 // 0x10(0x10)
	struct TArray<None>                           ConditionalCDF;                                              // 0x20(0x10)
	struct TArray<None>                           TextureData;                                                 // 0x30(0x10)
	struct TWeakObjectPtr<struct FNone>           Texture;                                                     // 0x40(0x08)
	char                                          Weighting;                                                   // 0x48(0x01)
	char                                          UnknownData49[0x7];                                          // 0x49(0x07)
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x78 (Inherited: 0x00)
struct FComponentOverrideRecord 
{
	struct FNone*                                 ComponentClass;                                              // 0x00(0x08)
	struct FNone*                                 ComponentTemplate;                                           // 0x08(0x08)
	struct FNone                                  ComponentKey;                                                // 0x10(0x20)
	struct FNone                                  CookedComponentInstancingData;                               // 0x30(0x48)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey 
{
	struct FNone*                                 OwnerClass;                                                  // 0x00(0x08)
	struct FName                                  SCSVariableName;                                             // 0x08(0x08)
	struct FNone                                  AssociatedGuid;                                              // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 (Inherited: 0x00)
struct FBlueprintInputDelegateBinding 
{
	char                                          bConsumeInput : 0;                                           // 0x00(0x01)
	char                                          bExecuteWhenPaused : 0;                                      // 0x00(0x01)
	char                                          bOverrideParentBinding : 0;                                  // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x04)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding 
{
	struct FName                                  InputActionName;                                             // 0x04(0x08)
	char                                          InputKeyEvent;                                               // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	struct FName                                  FunctionNameToBind;                                          // 0x10(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding 
{
	struct FName                                  InputAxisName;                                               // 0x04(0x08)
	struct FName                                  FunctionNameToBind;                                          // 0x0c(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 (Inherited: 0x04)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding 
{
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone                                  AxisKey;                                                     // 0x08(0x18)
	struct FName                                  FunctionNameToBind;                                          // 0x20(0x08)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0x70 (Inherited: 0x00)
struct FCachedKeyToActionInfo 
{
	struct FNone*                                 PlayerInput;                                                 // 0x00(0x08)
	char                                          UnknownData8[0x68];                                          // 0x08(0x68)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x04)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding 
{
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone                                  InputChord;                                                  // 0x08(0x20)
	char                                          InputKeyEvent;                                               // 0x28(0x01)
	char                                          UnknownData29[0x3];                                          // 0x29(0x03)
	struct FName                                  FunctionNameToBind;                                          // 0x2c(0x08)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x10 (Inherited: 0x04)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding 
{
	char                                          InputKeyEvent;                                               // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
	struct FName                                  FunctionNameToBind;                                          // 0x08(0x08)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x140 (Inherited: 0xa8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData 
{
	struct FNone*                                 StaticMesh;                                                  // 0xa8(0x08)
	struct FNone                                  CachedStaticLighting;                                        // 0xb0(0x40)
	struct TArray<None>                           PerInstanceSMData;                                           // 0xf0(0x10)
	struct TArray<None>                           PerInstanceSMCustomData;                                     // 0x100(0x10)
	char                                          UnknownData110[0x20];                                        // 0x110(0x20)
	uint32_t                                      InstancingRandomSeed;                                        // 0x130(0x04)
	char                                          UnknownData134[0xc];                                         // 0x134(0x0c)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshInstanceData 
{
	struct FNone                                  Transform;                                                   // 0x00(0x40)
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshLightMapInstanceData 
{
	struct FNone                                  Transform;                                                   // 0x00(0x30)
	struct TArray<None>                           MapBuildDataIds;                                             // 0x30(0x10)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshMappingInfo 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : FIndexedCurve 
{
	struct TArray<None>                           Keys;                                                        // 0x68(0x10)
	uint32_t                                      DefaultValue;                                                // 0x78(0x04)
	char                                          bUseDefaultValueBeforeFirstKey : 0;                          // 0x7c(0x01)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
};

// ScriptStruct Engine.IntegralKey
// Size: 0x08 (Inherited: 0x00)
struct FIntegralKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	uint32_t                                      Value;                                                       // 0x04(0x04)
};

// ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x00)
struct FCurveEdTab 
{
	struct FString                                TabName;                                                     // 0x00(0x10)
	struct TArray<None>                           Curves;                                                      // 0x10(0x10)
	float                                         ViewStartInput;                                              // 0x20(0x04)
	float                                         ViewEndInput;                                                // 0x24(0x04)
	float                                         ViewStartOutput;                                             // 0x28(0x04)
	float                                         ViewEndOutput;                                               // 0x2c(0x04)
};

// ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x00)
struct FCurveEdEntry 
{
	struct FNone*                                 CurveObject;                                                 // 0x00(0x08)
	struct FNone                                  CurveColor;                                                  // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                CurveName;                                                   // 0x10(0x10)
	uint32_t                                      bHideCurve;                                                  // 0x20(0x04)
	uint32_t                                      bColorCurve;                                                 // 0x24(0x04)
	uint32_t                                      bFloatingPointColorCurve;                                    // 0x28(0x04)
	uint32_t                                      bClamp;                                                      // 0x2c(0x04)
	float                                         ClampLow;                                                    // 0x30(0x04)
	float                                         ClampHigh;                                                   // 0x34(0x04)
};

// ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x00)
struct FInterpEdSelKey 
{
	struct FNone*                                 Group;                                                       // 0x00(0x08)
	struct FNone*                                 Track;                                                       // 0x08(0x08)
	uint32_t                                      KeyIndex;                                                    // 0x10(0x04)
	float                                         UnsnappedPosition;                                           // 0x14(0x04)
};

// ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x00)
struct FCameraPreviewInfo 
{
	struct FNone*                                 PawnClass;                                                   // 0x00(0x08)
	struct FNone*                                 AnimSeq;                                                     // 0x08(0x08)
	struct FNone                                  Location;                                                    // 0x10(0x0c)
	struct FNone                                  Rotation;                                                    // 0x1c(0x0c)
	struct FNone*                                 PawnInst;                                                    // 0x28(0x08)
};

// ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x00)
struct FSubTrackGroup 
{
	struct FString                                GroupName;                                                   // 0x00(0x10)
	struct TArray<None>                           TrackIndices;                                                // 0x10(0x10)
	char                                          bIsCollapsed : 0;                                            // 0x20(0x01)
	char                                          bIsSelected : 0;                                             // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x00)
struct FSupportedSubTrackInfo 
{
	struct FNone*                                 SupportedClass;                                              // 0x00(0x08)
	struct FString                                SubTrackName;                                                // 0x08(0x10)
	uint32_t                                      GroupIndex;                                                  // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAnimControlTrackKey 
{
	float                                         StartTime;                                                   // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FNone*                                 AnimSeq;                                                     // 0x08(0x08)
	float                                         AnimStartOffset;                                             // 0x10(0x04)
	float                                         AnimEndOffset;                                               // 0x14(0x04)
	float                                         AnimPlayRate;                                                // 0x18(0x04)
	char                                          bLooping : 0;                                                // 0x1c(0x01)
	char                                          bReverse : 0;                                                // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.BoolTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FBoolTrackKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	char                                          Value : 0;                                                   // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
};

// ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x00)
struct FDirectorTrackCut 
{
	float                                         Time;                                                        // 0x00(0x04)
	float                                         TransitionTime;                                              // 0x04(0x04)
	struct FName                                  TargetCamGroup;                                              // 0x08(0x08)
	uint32_t                                      ShotNumber;                                                  // 0x10(0x04)
};

// ScriptStruct Engine.EventTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FEventTrackKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	struct FName                                  EventName;                                                   // 0x04(0x08)
};

// ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x00)
struct FInterpLookupTrack 
{
	struct TArray<None>                           Points;                                                      // 0x00(0x10)
};

// ScriptStruct Engine.InterpLookupPoint
// Size: 0x0c (Inherited: 0x00)
struct FInterpLookupPoint 
{
	struct FName                                  GroupName;                                                   // 0x00(0x08)
	float                                         Time;                                                        // 0x08(0x04)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FParticleReplayTrackKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	float                                         Duration;                                                    // 0x04(0x04)
	uint32_t                                      ClipIDNumber;                                                // 0x08(0x04)
};

// ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x00)
struct FSoundTrackKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	float                                         Volume;                                                      // 0x04(0x04)
	float                                         Pitch;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FNone*                                 Sound;                                                       // 0x10(0x08)
};

// ScriptStruct Engine.ToggleTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FToggleTrackKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	char                                          ToggleAction;                                                // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
};

// ScriptStruct Engine.VisibilityTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FVisibilityTrackKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	char                                          Action;                                                      // 0x04(0x01)
	char                                          ActiveCondition;                                             // 0x05(0x01)
	char                                          UnknownData6[0x2];                                           // 0x06(0x02)
};

// ScriptStruct Engine.VectorSpringState
// Size: 0x18 (Inherited: 0x00)
struct FVectorSpringState 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct Engine.FloatSpringState
// Size: 0x08 (Inherited: 0x00)
struct FFloatSpringState 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 (Inherited: 0x00)
struct FDrawToRenderTargetContext 
{
	struct FNone*                                 RenderTarget;                                                // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x00)
struct FLatentActionManager 
{
	char                                          UnknownData0[0x60];                                          // 0x00(0x60)
};

// ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x00)
struct FLayerActorStats 
{
	struct FNone*                                 Type;                                                        // 0x00(0x08)
	uint32_t                                      Total;                                                       // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x38 (Inherited: 0x00)
struct FReplicatedStaticActorDestructionInfo 
{
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
	struct FNone*                                 ObjClass;                                                    // 0x30(0x08)
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x134 (Inherited: 0x00)
struct FLevelSimplificationDetails 
{
	char                                          bCreatePackagePerAsset : 0;                                  // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	float                                         DetailsPercentage;                                           // 0x04(0x04)
	struct FNone                                  StaticMeshMaterialSettings;                                  // 0x08(0x8c)
	char                                          bOverrideLandscapeExportLOD : 0;                             // 0x94(0x01)
	char                                          UnknownData94[0x4];                                          // 0x94(0x04)
	uint32_t                                      LandscapeExportLOD;                                          // 0x98(0x04)
	struct FNone                                  LandscapeMaterialSettings;                                   // 0x9c(0x8c)
	char                                          bBakeFoliageToLandscape : 0;                                 // 0x128(0x01)
	char                                          UnknownData128[0x1];                                         // 0x128(0x01)
	char                                          bBakeGrassToLandscape : 0;                                   // 0x129(0x01)
	char                                          UnknownData129[0x1];                                         // 0x129(0x01)
	char                                          bAllowDistanceField : 0;                                     // 0x12a(0x01)
	char                                          UnknownData12A[0x1];                                         // 0x12a(0x01)
	char                                          bSimplifiedMeshMerge : 0;                                    // 0x12b(0x01)
	char                                          UnknownData12B[0x1];                                         // 0x12b(0x01)
	char                                          bGenerateMeshNormalMap : 0;                                  // 0x12c(0x01)
	char                                          UnknownData12C[0x1];                                         // 0x12c(0x01)
	char                                          bGenerateMeshMetallicMap : 0;                                // 0x12d(0x01)
	char                                          UnknownData12D[0x1];                                         // 0x12d(0x01)
	char                                          bGenerateMeshRoughnessMap : 0;                               // 0x12e(0x01)
	char                                          UnknownData12E[0x1];                                         // 0x12e(0x01)
	char                                          bGenerateMeshSpecularMap : 0;                                // 0x12f(0x01)
	char                                          UnknownData12F[0x1];                                         // 0x12f(0x01)
	char                                          bGenerateLandscapeNormalMap : 0;                             // 0x130(0x01)
	char                                          UnknownData130[0x1];                                         // 0x130(0x01)
	char                                          bGenerateLandscapeMetallicMap : 0;                           // 0x131(0x01)
	char                                          UnknownData131[0x1];                                         // 0x131(0x01)
	char                                          bGenerateLandscapeRoughnessMap : 0;                          // 0x132(0x01)
	char                                          UnknownData132[0x1];                                         // 0x132(0x01)
	char                                          bGenerateLandscapeSpecularMap : 0;                           // 0x133(0x01)
	char                                          UnknownData133[0x1];                                         // 0x133(0x01)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x8c (Inherited: 0x00)
struct FMaterialProxySettings 
{
	struct FNone                                  TextureSize;                                                 // 0x00(0x08)
	float                                         GutterSpace;                                                 // 0x08(0x04)
	float                                         MetallicConstant;                                            // 0x0c(0x04)
	float                                         RoughnessConstant;                                           // 0x10(0x04)
	float                                         AnisotropyConstant;                                          // 0x14(0x04)
	float                                         SpecularConstant;                                            // 0x18(0x04)
	float                                         OpacityConstant;                                             // 0x1c(0x04)
	float                                         OpacityMaskConstant;                                         // 0x20(0x04)
	float                                         AmbientOcclusionConstant;                                    // 0x24(0x04)
	char                                          TextureSizingType;                                           // 0x28(0x01)
	char                                          MaterialMergeType;                                           // 0x29(0x01)
	char                                          BlendMode;                                                   // 0x2a(0x01)
	char                                          bAllowTwoSidedMaterial : 0;                                  // 0x2b(0x01)
	char                                          bNormalMap : 0;                                              // 0x2b(0x01)
	char                                          bTangentMap : 0;                                             // 0x2b(0x01)
	char                                          bMetallicMap : 0;                                            // 0x2b(0x01)
	char                                          bRoughnessMap : 0;                                           // 0x2b(0x01)
	char                                          bAnisotropyMap : 0;                                          // 0x2b(0x01)
	char                                          bSpecularMap : 0;                                            // 0x2b(0x01)
	char                                          bEmissiveMap : 0;                                            // 0x2b(0x01)
	char                                          UnknownData2B[0x1];                                          // 0x2b(0x01)
	char                                          bOpacityMap : 0;                                             // 0x2c(0x01)
	char                                          bOpacityMaskMap : 0;                                         // 0x2c(0x01)
	char                                          bAmbientOcclusionMap : 0;                                    // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	struct FNone                                  DiffuseTextureSize;                                          // 0x30(0x08)
	struct FNone                                  NormalTextureSize;                                           // 0x38(0x08)
	struct FNone                                  TangentTextureSize;                                          // 0x40(0x08)
	struct FNone                                  MetallicTextureSize;                                         // 0x48(0x08)
	struct FNone                                  RoughnessTextureSize;                                        // 0x50(0x08)
	struct FNone                                  AnisotropyTextureSize;                                       // 0x58(0x08)
	struct FNone                                  SpecularTextureSize;                                         // 0x60(0x08)
	struct FNone                                  EmissiveTextureSize;                                         // 0x68(0x08)
	struct FNone                                  OpacityTextureSize;                                          // 0x70(0x08)
	struct FNone                                  OpacityMaskTextureSize;                                      // 0x78(0x08)
	struct FNone                                  AmbientOcclusionTextureSize;                                 // 0x80(0x08)
	char                                          bHLODMaterial : 0;                                           // 0x88(0x01)
	char                                          UnknownData88[0x1];                                          // 0x88(0x01)
	char                                          bWorldCompositionMaterial : 0;                               // 0x89(0x01)
	char                                          UnknownData89[0x3];                                          // 0x89(0x03)
};

// ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 (Inherited: 0x00)
struct FStreamableTextureInstance 
{
	char                                          UnknownData0[0x28];                                          // 0x00(0x28)
};

// ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 (Inherited: 0x28)
struct FDynamicTextureInstance : FStreamableTextureInstance 
{
	struct FNone*                                 Texture;                                                     // 0x28(0x08)
	char                                          bAttached : 0;                                               // 0x30(0x01)
	char                                          UnknownData30[0x4];                                          // 0x30(0x04)
	float                                         OriginalRadius;                                              // 0x34(0x04)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x100 (Inherited: 0xa8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData 
{
	char                                          UnknownDataA8[0x8];                                          // 0xa8(0x08)
	struct FNone                                  Transform;                                                   // 0xb0(0x30)
	struct FNone                                  LightGuid;                                                   // 0xe0(0x10)
	uint32_t                                      PreviewShadowMapChannel;                                     // 0xf0(0x04)
	char                                          UnknownDataF4[0xc];                                          // 0xf4(0x0c)
};

// ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x00)
struct FBatchedPoint 
{
	struct FNone                                  Position;                                                    // 0x00(0x0c)
	struct FNone                                  Color;                                                       // 0x0c(0x10)
	float                                         PointSize;                                                   // 0x1c(0x04)
	float                                         RemainingLifeTime;                                           // 0x20(0x04)
	char                                          DepthPriority;                                               // 0x24(0x01)
	char                                          UnknownData25[0x3];                                          // 0x25(0x03)
};

// ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x00)
struct FBatchedLine 
{
	struct FNone                                  Start;                                                       // 0x00(0x0c)
	struct FNone                                  End;                                                         // 0x0c(0x0c)
	struct FNone                                  Color;                                                       // 0x18(0x10)
	float                                         Thickness;                                                   // 0x28(0x04)
	float                                         RemainingLifeTime;                                           // 0x2c(0x04)
	char                                          DepthPriority;                                               // 0x30(0x01)
	char                                          UnknownData31[0x3];                                          // 0x31(0x03)
};

// ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x00)
struct FClientReceiveData 
{
	struct FNone*                                 LocalPC;                                                     // 0x00(0x08)
	struct FName                                  MessageType;                                                 // 0x08(0x08)
	uint32_t                                      MessageIndex;                                                // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FString                                MessageString;                                               // 0x18(0x10)
	struct FNone*                                 RelatedPlayerState_2;                                        // 0x28(0x08)
	struct FNone*                                 RelatedPlayerState_3;                                        // 0x30(0x08)
	struct FNone*                                 OptionalObject;                                              // 0x38(0x08)
};

// ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x00)
struct FParameterGroupData 
{
	struct FString                                GroupName;                                                   // 0x00(0x10)
	uint32_t                                      GroupSortPriority;                                           // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSpriteElement 
{
	struct FNone*                                 Material;                                                    // 0x00(0x08)
	struct FNone*                                 DistanceToOpacityCurve;                                      // 0x08(0x08)
	char                                          bSizeIsInScreenSpace : 0;                                    // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	float                                         BaseSizeX;                                                   // 0x14(0x04)
	float                                         BaseSizeY;                                                   // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FNone*                                 DistanceToSizeCurve;                                         // 0x20(0x08)
};

// ScriptStruct Engine.MaterialCachedExpressionData
// Size: 0x228 (Inherited: 0x00)
struct FMaterialCachedExpressionData 
{
	struct FNone                                  Parameters;                                                  // 0x00(0x1a0)
	struct TArray<None>                           ReferencedTextures;                                          // 0x1a0(0x10)
	struct TArray<None>                           FunctionInfos;                                               // 0x1b0(0x10)
	struct TArray<None>                           ParameterCollectionInfos;                                    // 0x1c0(0x10)
	struct TArray<None>                           DefaultLayers;                                               // 0x1d0(0x10)
	struct TArray<None>                           DefaultLayerBlends;                                          // 0x1e0(0x10)
	struct TArray<None>                           GrassTypes;                                                  // 0x1f0(0x10)
	struct TArray<None>                           DynamicParameterNames;                                       // 0x200(0x10)
	struct TArray<None>                           QualityLevelsUsed;                                           // 0x210(0x10)
	char                                          bHasRuntimeVirtualTextureOutput : 0;                         // 0x220(0x01)
	char                                          bHasSceneColor : 0;                                          // 0x220(0x01)
	char                                          UnknownData220[0x8];                                         // 0x220(0x08)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialParameterCollectionInfo 
{
	struct FNone                                  StateID;                                                     // 0x00(0x10)
	struct FNone*                                 ParameterCollection;                                         // 0x10(0x08)
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialFunctionInfo 
{
	struct FNone                                  StateID;                                                     // 0x00(0x10)
	struct FNone*                                 Function;                                                    // 0x10(0x08)
};

// ScriptStruct Engine.MaterialCachedParameters
// Size: 0x1a0 (Inherited: 0x00)
struct FMaterialCachedParameters 
{
	struct FNone                                  Entries[0x5];                                                // 0x00(0x140)
	struct TArray<None>                           ScalarValues;                                                // 0x140(0x10)
	struct TArray<None>                           VectorValues;                                                // 0x150(0x10)
	struct TArray<None>                           TextureValues;                                               // 0x160(0x10)
	struct TArray<None>                           FontValues;                                                  // 0x170(0x10)
	struct TArray<None>                           FontPageValues;                                              // 0x180(0x10)
	struct TArray<None>                           RuntimeVirtualTextureValues;                                 // 0x190(0x10)
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// Size: 0x40 (Inherited: 0x00)
struct FMaterialCachedParameterEntry 
{
	struct TArray<None>                           NameHashes;                                                  // 0x00(0x10)
	struct TArray<None>                           ParameterInfos;                                              // 0x10(0x10)
	struct TArray<None>                           ExpressionGuids;                                             // 0x20(0x10)
	struct TArray<None>                           Overrides;                                                   // 0x30(0x10)
};

// ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParameterInfo 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	char                                          Association;                                                 // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	uint32_t                                      Index;                                                       // 0x0c(0x04)
};

// ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x00)
struct FParameterChannelNames 
{
	struct FText                                  R;                                                           // 0x00(0x18)
	struct FText                                  G;                                                           // 0x18(0x18)
	struct FText                                  B;                                                           // 0x30(0x18)
	struct FText                                  A;                                                           // 0x48(0x18)
};

// ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x00)
struct FCustomDefine 
{
	struct FString                                DefineName;                                                  // 0x00(0x10)
	struct FString                                DefineValue;                                                 // 0x10(0x10)
};

// ScriptStruct Engine.CustomInput
// Size: 0x1c (Inherited: 0x00)
struct FCustomInput 
{
	struct FName                                  InputName;                                                   // 0x00(0x08)
	struct FNone                                  Input;                                                       // 0x08(0x0c)
	char                                          UnknownData14[0x8];                                          // 0x14(0x08)
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x20 (Inherited: 0x00)
struct FFunctionExpressionOutput 
{
	struct FNone*                                 ExpressionOutput;                                            // 0x00(0x08)
	struct FNone                                  ExpressionOutputId;                                          // 0x08(0x10)
	struct FNone                                  Output;                                                      // 0x18(0x08)
};

// ScriptStruct Engine.FunctionExpressionInput
// Size: 0x30 (Inherited: 0x00)
struct FFunctionExpressionInput 
{
	struct FNone*                                 ExpressionInput;                                             // 0x00(0x08)
	struct FNone                                  ExpressionInputId;                                           // 0x08(0x10)
	struct FNone                                  Input;                                                       // 0x18(0x0c)
	char                                          UnknownData24[0xc];                                          // 0x24(0x0c)
};

// ScriptStruct Engine.FontParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FFontParameterValue 
{
	struct FNone                                  ParameterInfo;                                               // 0x00(0x10)
	struct FNone*                                 FontValue;                                                   // 0x10(0x08)
	uint32_t                                      FontPage;                                                    // 0x18(0x04)
	struct FNone                                  ExpressionGUID;                                              // 0x1c(0x10)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FRuntimeVirtualTextureParameterValue 
{
	struct FNone                                  ParameterInfo;                                               // 0x00(0x10)
	struct FNone*                                 ParameterValue;                                              // 0x10(0x08)
	struct FNone                                  ExpressionGUID;                                              // 0x18(0x10)
};

// ScriptStruct Engine.TextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FTextureParameterValue 
{
	struct FNone                                  ParameterInfo;                                               // 0x00(0x10)
	struct FNone*                                 ParameterValue;                                              // 0x10(0x08)
	struct FNone                                  ExpressionGUID;                                              // 0x18(0x10)
};

// ScriptStruct Engine.VectorParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FVectorParameterValue 
{
	struct FNone                                  ParameterInfo;                                               // 0x00(0x10)
	struct FNone                                  ParameterValue;                                              // 0x10(0x10)
	struct FNone                                  ExpressionGUID;                                              // 0x20(0x10)
};

// ScriptStruct Engine.ScalarParameterValue
// Size: 0x24 (Inherited: 0x00)
struct FScalarParameterValue 
{
	struct FNone                                  ParameterInfo;                                               // 0x00(0x10)
	float                                         ParameterValue;                                              // 0x10(0x04)
	struct FNone                                  ExpressionGUID;                                              // 0x14(0x10)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FScalarParameterAtlasInstanceData 
{
	char                                          bIsUsedAsAtlasPosition : 0;                                  // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct TSoftObjectPtr<FNone>                  Curve;                                                       // 0x08(0x28)
	struct TSoftObjectPtr<FNone>                  Atlas;                                                       // 0x30(0x28)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x08 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides 
{
	char                                          bOverride_OpacityMaskClipValue : 0;                          // 0x00(0x01)
	char                                          bOverride_BlendMode : 0;                                     // 0x00(0x01)
	char                                          bOverride_ShadingModel : 0;                                  // 0x00(0x01)
	char                                          bOverride_DitheredLODTransition : 0;                         // 0x00(0x01)
	char                                          bOverride_CastDynamicShadowAsMasked : 0;                     // 0x00(0x01)
	char                                          bOverride_TwoSided : 0;                                      // 0x00(0x01)
	char                                          TwoSided : 0;                                                // 0x00(0x01)
	char                                          DitheredLODTransition : 0;                                   // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bCastDynamicShadowAsMasked : 0;                              // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          BlendMode;                                                   // 0x02(0x01)
	char                                          ShadingModel;                                                // 0x03(0x01)
	float                                         OpacityMaskClipValue;                                        // 0x04(0x04)
};

// ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialTextureInfo 
{
	float                                         SamplingScale;                                               // 0x00(0x04)
	uint32_t                                      UVChannelIndex;                                              // 0x04(0x04)
	struct FName                                  TextureName;                                                 // 0x08(0x08)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x10 (Inherited: 0x00)
struct FLightmassMaterialInterfaceSettings 
{
	float                                         EmissiveBoost;                                               // 0x00(0x04)
	float                                         DiffuseBoost;                                                // 0x04(0x04)
	float                                         ExportResolutionScale;                                       // 0x08(0x04)
	char                                          bCastShadowAsMasked : 0;                                     // 0x0c(0x01)
	char                                          bOverrideCastShadowAsMasked : 0;                             // 0x0c(0x01)
	char                                          bOverrideEmissiveBoost : 0;                                  // 0x0c(0x01)
	char                                          bOverrideDiffuseBoost : 0;                                   // 0x0c(0x01)
	char                                          bOverrideExportResolutionScale : 0;                          // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 (Inherited: 0x00)
struct FMaterialLayersFunctions 
{
	struct TArray<None>                           Layers;                                                      // 0x00(0x10)
	struct TArray<None>                           Blends;                                                      // 0x10(0x10)
	struct TArray<None>                           LayerStates;                                                 // 0x20(0x10)
	struct FString                                KeyString;                                                   // 0x30(0x10)
};

// ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x00)
struct FCollectionParameterBase 
{
	struct FName                                  ParameterName;                                               // 0x00(0x08)
	struct F                                      ID;                                                          // 0x08(0x10)
};

// ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase 
{
	struct FNone                                  DefaultValue;                                                // 0x18(0x10)
};

// ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1c (Inherited: 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase 
{
	float                                         DefaultValue;                                                // 0x18(0x04)
};

// ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FInterpGroupActorInfo 
{
	struct FName                                  ObjectName;                                                  // 0x00(0x08)
	struct TArray<None>                           Actors;                                                      // 0x08(0x10)
};

// ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraCutInfo 
{
	struct FNone                                  Location;                                                    // 0x00(0x0c)
	float                                         Timestamp;                                                   // 0x0c(0x04)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference 
{
	struct FNone*                                 MemberParent;                                                // 0x00(0x08)
	struct FString                                MemberScope;                                                 // 0x08(0x10)
	struct FName                                  MemberName;                                                  // 0x18(0x08)
	struct FNone                                  MemberGuid;                                                  // 0x20(0x10)
	char                                          bSelfContext : 0;                                            // 0x30(0x01)
	char                                          UnknownData30[0x1];                                          // 0x30(0x01)
	char                                          bWasDeprecated : 0;                                          // 0x31(0x01)
	char                                          UnknownData31[0x7];                                          // 0x31(0x07)
};

// ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x00)
struct FMeshInstancingSettings 
{
	struct FNone*                                 ActorClassToUse;                                             // 0x00(0x08)
	uint32_t                                      InstanceReplacementThreshold;                                // 0x08(0x04)
	enum class None                               MeshReplacementMethod;                                       // 0x0c(0x01)
	char                                          bSkipMeshesWithVertexColors : 0;                             // 0x0d(0x01)
	char                                          UnknownDataD[0x1];                                           // 0x0d(0x01)
	char                                          bUseHLODVolumes : 0;                                         // 0x0e(0x01)
	char                                          UnknownDataE[0x2];                                           // 0x0e(0x02)
	struct FNone*                                 ISMComponentToUse;                                           // 0x10(0x08)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xa4 (Inherited: 0x00)
struct FMeshMergingSettings 
{
	uint32_t                                      TargetLightMapResolution;                                    // 0x00(0x04)
	enum class None                               OutputUVs[0x8];                                              // 0x04(0x08)
	struct FNone                                  MaterialSettings;                                            // 0x0c(0x8c)
	uint32_t                                      GutterSize;                                                  // 0x98(0x04)
	uint32_t                                      SpecificLOD;                                                 // 0x9c(0x04)
	enum class None                               LODSelectionType;                                            // 0xa0(0x01)
	char                                          bGenerateLightMapUV : 0;                                     // 0xa1(0x01)
	char                                          bComputedLightMapResolution : 0;                             // 0xa1(0x01)
	char                                          bPivotPointAtZero : 0;                                       // 0xa1(0x01)
	char                                          bMergePhysicsData : 0;                                       // 0xa1(0x01)
	char                                          bMergeMaterials : 0;                                         // 0xa1(0x01)
	char                                          bCreateMergedMaterial : 0;                                   // 0xa1(0x01)
	char                                          bBakeVertexDataToMesh : 0;                                   // 0xa1(0x01)
	char                                          bUseVertexDataForBakingMaterial : 0;                         // 0xa1(0x01)
	char                                          UnknownDataA1[0x1];                                          // 0xa1(0x01)
	char                                          bUseTextureBinning : 0;                                      // 0xa2(0x01)
	char                                          bReuseMeshLightmapUVs : 0;                                   // 0xa2(0x01)
	char                                          bMergeEquivalentMaterials : 0;                               // 0xa2(0x01)
	char                                          bUseLandscapeCulling : 0;                                    // 0xa2(0x01)
	char                                          bIncludeImposters : 0;                                       // 0xa2(0x01)
	char                                          bAllowDistanceField : 0;                                     // 0xa2(0x01)
	char                                          UnknownDataA2[0x2];                                          // 0xa2(0x02)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xac (Inherited: 0x00)
struct FMeshProxySettings 
{
	uint32_t                                      ScreenSize;                                                  // 0x00(0x04)
	float                                         VoxelSize;                                                   // 0x04(0x04)
	struct FNone                                  MaterialSettings;                                            // 0x08(0x8c)
	float                                         MergeDistance;                                               // 0x94(0x04)
	struct FNone                                  UnresolvedGeometryColor;                                     // 0x98(0x04)
	float                                         MaxRayCastDist;                                              // 0x9c(0x04)
	float                                         HardAngleThreshold;                                          // 0xa0(0x04)
	uint32_t                                      LightMapResolution;                                          // 0xa4(0x04)
	char                                          NormalCalculationMethod;                                     // 0xa8(0x01)
	char                                          LandscapeCullingPrecision;                                   // 0xa9(0x01)
	char                                          bCalculateCorrectLODModel : 0;                               // 0xaa(0x01)
	char                                          bOverrideVoxelSize : 0;                                      // 0xaa(0x01)
	char                                          bOverrideTransferDistance : 0;                               // 0xaa(0x01)
	char                                          bUseHardAngleThreshold : 0;                                  // 0xaa(0x01)
	char                                          bComputeLightMapResolution : 0;                              // 0xaa(0x01)
	char                                          bRecalculateNormals : 0;                                     // 0xaa(0x01)
	char                                          bUseLandscapeCulling : 0;                                    // 0xaa(0x01)
	char                                          bAllowAdjacency : 0;                                         // 0xaa(0x01)
	char                                          UnknownDataAA[0x1];                                          // 0xaa(0x01)
	char                                          bAllowDistanceField : 0;                                     // 0xab(0x01)
	char                                          bReuseMeshLightmapUVs : 0;                                   // 0xab(0x01)
	char                                          bCreateCollision : 0;                                        // 0xab(0x01)
	char                                          bAllowVertexColors : 0;                                      // 0xab(0x01)
	char                                          bGenerateLightmapUVs : 0;                                    // 0xab(0x01)
	char                                          UnknownDataAB[0x1];                                          // 0xab(0x01)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x24 (Inherited: 0x00)
struct FMeshReductionSettings 
{
	float                                         PercentTriangles;                                            // 0x00(0x04)
	float                                         PercentVertices;                                             // 0x04(0x04)
	float                                         MaxDeviation;                                                // 0x08(0x04)
	float                                         PixelError;                                                  // 0x0c(0x04)
	float                                         WeldingThreshold;                                            // 0x10(0x04)
	float                                         HardAngleThreshold;                                          // 0x14(0x04)
	uint32_t                                      BaseLODModel;                                                // 0x18(0x04)
	char                                          SilhouetteImportance;                                        // 0x1c(0x01)
	char                                          TextureImportance;                                           // 0x1d(0x01)
	char                                          ShadingImportance;                                           // 0x1e(0x01)
	char                                          bRecalculateNormals : 0;                                     // 0x1f(0x01)
	char                                          bGenerateUniqueLightmapUVs : 0;                              // 0x1f(0x01)
	char                                          bKeepSymmetry : 0;                                           // 0x1f(0x01)
	char                                          bVisibilityAided : 0;                                        // 0x1f(0x01)
	char                                          bCullOccluded : 0;                                           // 0x1f(0x01)
	char                                          UnknownData1F[0x1];                                          // 0x1f(0x01)
	enum class None                               TerminationCriterion;                                        // 0x20(0x01)
	char                                          VisibilityAggressiveness;                                    // 0x21(0x01)
	char                                          VertexColorImportance;                                       // 0x22(0x01)
	char                                          UnknownData23[0x1];                                          // 0x23(0x01)
};

// ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseInfo 
{
	struct FString                                Identifier;                                                  // 0x00(0x10)
	struct FString                                DisplayName;                                                 // 0x10(0x10)
	struct FString                                DisplayDescription;                                          // 0x20(0x10)
	struct FString                                DisplayPrice;                                                // 0x30(0x10)
};

// ScriptStruct Engine.MK3DHighlightTargetEvent
// Size: 0x68 (Inherited: 0x00)
struct FMK3DHighlightTargetEvent 
{
	struct FString                                ID;                                                          // 0x00(0x10)
	struct FString                                Group;                                                       // 0x10(0x10)
	struct FString                                MetaData;                                                    // 0x20(0x10)
	uint32_t                                      Time1;                                                       // 0x30(0x04)
	uint32_t                                      Time2;                                                       // 0x34(0x04)
	struct FString                                TargetNetGUID;                                               // 0x38(0x10)
	struct FString                                TargetId;                                                    // 0x48(0x10)
	struct FString                                TargetName;                                                  // 0x58(0x10)
};

// ScriptStruct Engine.MK3DTargetData
// Size: 0x30 (Inherited: 0x00)
struct FMK3DTargetData 
{
	struct FString                                TargetNetGUID;                                               // 0x00(0x10)
	struct FString                                TargetId;                                                    // 0x10(0x10)
	struct FString                                TargetName;                                                  // 0x20(0x10)
};

// ScriptStruct Engine.MK3DHighlightKillEvent
// Size: 0x30 (Inherited: 0x00)
struct FMK3DHighlightKillEvent 
{
	uint32_t                                      Time1;                                                       // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                KillerName;                                                  // 0x08(0x10)
	float                                         KillerAppearanceTime;                                        // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
	struct FString                                VictimName;                                                  // 0x20(0x10)
};

// ScriptStruct Engine.MK3DKillData
// Size: 0x38 (Inherited: 0x00)
struct FMK3DKillData 
{
	struct FString                                VictimNetId;                                                 // 0x00(0x10)
	struct FString                                KillerName;                                                  // 0x10(0x10)
	float                                         KillerAppearanceTime;                                        // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FString                                VictimName;                                                  // 0x28(0x10)
};

// ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : FIndexedCurve 
{
	struct TArray<None>                           Keys;                                                        // 0x68(0x10)
};

// ScriptStruct Engine.NameCurveKey
// Size: 0x0c (Inherited: 0x00)
struct FNameCurveKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	struct FName                                  Value;                                                       // 0x04(0x08)
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x78 (Inherited: 0x30)
struct FNavDataConfig : FNavAgentProperties 
{
	struct FName                                  Name;                                                        // 0x30(0x08)
	struct FNone                                  Color;                                                       // 0x38(0x04)
	struct FNone                                  DefaultQueryExtent;                                          // 0x3c(0x0c)
	struct FNone*                                 NavigationDataClass;                                         // 0x48(0x08)
	struct TSoftClassPtr<UObject>                 NavDataClass;                                                // 0x50(0x28)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector 
{
	char                                          bSupportsAgent0 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent1 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent2 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent3 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent4 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent5 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent6 : 0;                                         // 0x00(0x01)
	char                                          bSupportsAgent7 : 0;                                         // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bSupportsAgent8 : 0;                                         // 0x01(0x01)
	char                                          bSupportsAgent9 : 0;                                         // 0x01(0x01)
	char                                          bSupportsAgent10 : 0;                                        // 0x01(0x01)
	char                                          bSupportsAgent11 : 0;                                        // 0x01(0x01)
	char                                          bSupportsAgent12 : 0;                                        // 0x01(0x01)
	char                                          bSupportsAgent13 : 0;                                        // 0x01(0x01)
	char                                          bSupportsAgent14 : 0;                                        // 0x01(0x01)
	char                                          bSupportsAgent15 : 0;                                        // 0x01(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x30 (Inherited: 0x00)
struct FNavigationLinkBase 
{
	float                                         LeftProjectHeight;                                           // 0x00(0x04)
	float                                         MaxFallDownLength;                                           // 0x04(0x04)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	float                                         SnapRadius;                                                  // 0x0c(0x04)
	float                                         SnapHeight;                                                  // 0x10(0x04)
	struct FNone                                  SupportedAgents;                                             // 0x14(0x04)
	char                                          bSupportsAgent0 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent1 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent2 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent3 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent4 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent5 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent6 : 0;                                         // 0x18(0x01)
	char                                          bSupportsAgent7 : 0;                                         // 0x18(0x01)
	char                                          UnknownData18[0x1];                                          // 0x18(0x01)
	char                                          bSupportsAgent8 : 0;                                         // 0x19(0x01)
	char                                          bSupportsAgent9 : 0;                                         // 0x19(0x01)
	char                                          bSupportsAgent10 : 0;                                        // 0x19(0x01)
	char                                          bSupportsAgent11 : 0;                                        // 0x19(0x01)
	char                                          bSupportsAgent12 : 0;                                        // 0x19(0x01)
	char                                          bSupportsAgent13 : 0;                                        // 0x19(0x01)
	char                                          bSupportsAgent14 : 0;                                        // 0x19(0x01)
	char                                          bSupportsAgent15 : 0;                                        // 0x19(0x01)
	char                                          UnknownData19[0x3];                                          // 0x19(0x03)
	char                                          Direction;                                                   // 0x1c(0x01)
	char                                          bUseSnapHeight : 0;                                          // 0x1d(0x01)
	char                                          bSnapToCheapestArea : 0;                                     // 0x1d(0x01)
	char                                          bCustomFlag0 : 0;                                            // 0x1d(0x01)
	char                                          bCustomFlag1 : 0;                                            // 0x1d(0x01)
	char                                          bCustomFlag2 : 0;                                            // 0x1d(0x01)
	char                                          bCustomFlag3 : 0;                                            // 0x1d(0x01)
	char                                          bCustomFlag4 : 0;                                            // 0x1d(0x01)
	char                                          bCustomFlag5 : 0;                                            // 0x1d(0x01)
	char                                          UnknownData1D[0x1];                                          // 0x1d(0x01)
	char                                          bCustomFlag6 : 0;                                            // 0x1e(0x01)
	char                                          bCustomFlag7 : 0;                                            // 0x1e(0x01)
	char                                          UnknownData1E[0x2];                                          // 0x1e(0x02)
	struct FNone*                                 AreaClass;                                                   // 0x20(0x08)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x60 (Inherited: 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase 
{
	struct FNone                                  LeftStart;                                                   // 0x30(0x0c)
	struct FNone                                  LeftEnd;                                                     // 0x3c(0x0c)
	struct FNone                                  RightStart;                                                  // 0x48(0x0c)
	struct FNone                                  RightEnd;                                                    // 0x54(0x0c)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x48 (Inherited: 0x30)
struct FNavigationLink : FNavigationLinkBase 
{
	struct FNone                                  Left;                                                        // 0x30(0x0c)
	struct FNone                                  Right;                                                       // 0x3c(0x0c)
};

// ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x00)
struct FChannelDefinition 
{
	struct FName                                  ChannelName;                                                 // 0x00(0x08)
	struct FName                                  ClassName;                                                   // 0x08(0x08)
	struct FNone*                                 ChannelClass;                                                // 0x10(0x08)
	uint32_t                                      StaticChannelIndex;                                          // 0x18(0x04)
	char                                          bTickOnCreate : 0;                                           // 0x1c(0x01)
	char                                          UnknownData1C[0x1];                                          // 0x1c(0x01)
	char                                          bServerOpen : 0;                                             // 0x1d(0x01)
	char                                          UnknownData1D[0x1];                                          // 0x1d(0x01)
	char                                          bClientOpen : 0;                                             // 0x1e(0x01)
	char                                          UnknownData1E[0x1];                                          // 0x1e(0x01)
	char                                          bInitialServer : 0;                                          // 0x1f(0x01)
	char                                          UnknownData1F[0x1];                                          // 0x1f(0x01)
	char                                          bInitialClient : 0;                                          // 0x20(0x01)
	char                                          UnknownData20[0x8];                                          // 0x20(0x08)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x34 (Inherited: 0x00)
struct FPacketSimulationSettings 
{
	uint32_t                                      PktLoss;                                                     // 0x00(0x04)
	uint32_t                                      PktLossMaxSize;                                              // 0x04(0x04)
	uint32_t                                      PktLossMinSize;                                              // 0x08(0x04)
	uint32_t                                      PktOrder;                                                    // 0x0c(0x04)
	uint32_t                                      PktDup;                                                      // 0x10(0x04)
	uint32_t                                      PktLag;                                                      // 0x14(0x04)
	uint32_t                                      PktLagVariance;                                              // 0x18(0x04)
	uint32_t                                      PktLagMin;                                                   // 0x1c(0x04)
	uint32_t                                      PktLagMax;                                                   // 0x20(0x04)
	uint32_t                                      PktIncomingLagMin;                                           // 0x24(0x04)
	uint32_t                                      PktIncomingLagMax;                                           // 0x28(0x04)
	uint32_t                                      PktIncomingLoss;                                             // 0x2c(0x04)
	uint32_t                                      PktJitter;                                                   // 0x30(0x04)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x00)
struct FNetworkEmulationProfileDescription 
{
	struct FString                                ProfileName;                                                 // 0x00(0x10)
	struct FString                                Tooltip;                                                     // 0x10(0x10)
};

// ScriptStruct Engine.NodeItem
// Size: 0x40 (Inherited: 0x00)
struct FNodeItem 
{
	struct FName                                  ParentName;                                                  // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  Transform;                                                   // 0x10(0x30)
};

// ScriptStruct Engine.ParticleBurst
// Size: 0x0c (Inherited: 0x00)
struct FParticleBurst 
{
	uint32_t                                      Count;                                                       // 0x00(0x04)
	uint32_t                                      CountLow;                                                    // 0x04(0x04)
	float                                         Time;                                                        // 0x08(0x04)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x00)
struct FParticleRandomSeedInfo 
{
	struct FName                                  ParameterName;                                               // 0x00(0x08)
	char                                          bGetSeedFromInstance : 0;                                    // 0x08(0x01)
	char                                          bInstanceSeedIsIndex : 0;                                    // 0x08(0x01)
	char                                          bResetSeedOnEmitterLooping : 0;                              // 0x08(0x01)
	char                                          bRandomlySelectSeedArray : 0;                                // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct TArray<None>                           RandomSeeds;                                                 // 0x10(0x10)
};

// ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x00)
struct FParticleCurvePair 
{
	struct FString                                CurveName;                                                   // 0x00(0x10)
	struct FNone*                                 CurveObject;                                                 // 0x10(0x08)
};

// ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 (Inherited: 0x00)
struct FBeamModifierOptions 
{
	char                                          bModify : 0;                                                 // 0x00(0x01)
	char                                          bScale : 0;                                                  // 0x00(0x01)
	char                                          bLock : 0;                                                   // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x00)
struct FParticleEvent_GenerateInfo 
{
	char                                          Type;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	uint32_t                                      Frequency;                                                   // 0x04(0x04)
	uint32_t                                      ParticleFrequency;                                           // 0x08(0x04)
	char                                          FirstTimeOnly : 0;                                           // 0x0c(0x01)
	char                                          LastTimeOnly : 0;                                            // 0x0c(0x01)
	char                                          UseReflectedImpactVector : 0;                                // 0x0c(0x01)
	char                                          bUseOrbitOffset : 0;                                         // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FName                                  CustomName;                                                  // 0x10(0x08)
	struct TArray<None>                           ParticleModuleEventsToSendToGame;                            // 0x18(0x10)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x00)
struct FLocationBoneSocketInfo 
{
	struct FName                                  BoneSocketName;                                              // 0x00(0x08)
	struct FNone                                  Offset;                                                      // 0x08(0x0c)
};

// ScriptStruct Engine.OrbitOptions
// Size: 0x04 (Inherited: 0x00)
struct FOrbitOptions 
{
	char                                          bProcessDuringSpawn : 0;                                     // 0x00(0x01)
	char                                          bProcessDuringUpdate : 0;                                    // 0x00(0x01)
	char                                          bUseEmitterTime : 0;                                         // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x48 (Inherited: 0x00)
struct FEmitterDynamicParameter 
{
	struct FName                                  ParamName;                                                   // 0x00(0x08)
	char                                          bUseEmitterTime : 0;                                         // 0x08(0x01)
	char                                          bSpawnTimeOnly : 0;                                          // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	char                                          ValueMethod;                                                 // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
	char                                          bScaleVelocityByParamValue : 0;                              // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
	struct FNone                                  ParamValue;                                                  // 0x18(0x30)
};

// ScriptStruct Engine.BeamTargetData
// Size: 0x0c (Inherited: 0x00)
struct FBeamTargetData 
{
	struct FName                                  TargetName;                                                  // 0x00(0x08)
	float                                         TargetPercentage;                                            // 0x08(0x04)
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x160 (Inherited: 0x00)
struct FGPUSpriteResourceData 
{
	struct TArray<None>                           QuantizedColorSamples;                                       // 0x00(0x10)
	struct TArray<None>                           QuantizedMiscSamples;                                        // 0x10(0x10)
	struct TArray<None>                           QuantizedSimulationAttrSamples;                              // 0x20(0x10)
	struct FNone                                  ColorScale;                                                  // 0x30(0x10)
	struct FNone                                  ColorBias;                                                   // 0x40(0x10)
	struct FNone                                  MiscScale;                                                   // 0x50(0x10)
	struct FNone                                  MiscBias;                                                    // 0x60(0x10)
	struct FNone                                  SimulationAttrCurveScale;                                    // 0x70(0x10)
	struct FNone                                  SimulationAttrCurveBias;                                     // 0x80(0x10)
	struct FNone                                  SubImageSize;                                                // 0x90(0x10)
	struct FNone                                  SizeBySpeed;                                                 // 0xa0(0x10)
	struct FNone                                  ConstantAcceleration;                                        // 0xb0(0x0c)
	struct FNone                                  OrbitOffsetBase;                                             // 0xbc(0x0c)
	struct FNone                                  OrbitOffsetRange;                                            // 0xc8(0x0c)
	struct FNone                                  OrbitFrequencyBase;                                          // 0xd4(0x0c)
	struct FNone                                  OrbitFrequencyRange;                                         // 0xe0(0x0c)
	struct FNone                                  OrbitPhaseBase;                                              // 0xec(0x0c)
	struct FNone                                  OrbitPhaseRange;                                             // 0xf8(0x0c)
	float                                         GlobalVectorFieldScale;                                      // 0x104(0x04)
	float                                         GlobalVectorFieldTightness;                                  // 0x108(0x04)
	float                                         PerParticleVectorFieldScale;                                 // 0x10c(0x04)
	float                                         PerParticleVectorFieldBias;                                  // 0x110(0x04)
	float                                         DragCoefficientScale;                                        // 0x114(0x04)
	float                                         DragCoefficientBias;                                         // 0x118(0x04)
	float                                         ResilienceScale;                                             // 0x11c(0x04)
	float                                         ResilienceBias;                                              // 0x120(0x04)
	float                                         CollisionRadiusScale;                                        // 0x124(0x04)
	float                                         CollisionRadiusBias;                                         // 0x128(0x04)
	float                                         CollisionTimeBias;                                           // 0x12c(0x04)
	float                                         CollisionRandomSpread;                                       // 0x130(0x04)
	float                                         CollisionRandomDistribution;                                 // 0x134(0x04)
	float                                         OneMinusFriction;                                            // 0x138(0x04)
	float                                         RotationRateScale;                                           // 0x13c(0x04)
	float                                         CameraMotionBlurAmount;                                      // 0x140(0x04)
	char                                          ScreenAlignment;                                             // 0x144(0x01)
	char                                          LockAxisFlag;                                                // 0x145(0x01)
	char                                          UnknownData146[0x2];                                         // 0x146(0x02)
	struct FNone                                  PivotOffset;                                                 // 0x148(0x08)
	char                                          bRemoveHMDRoll : 0;                                          // 0x150(0x01)
	char                                          UnknownData150[0x4];                                         // 0x150(0x04)
	float                                         MinFacingCameraBlendDistance;                                // 0x154(0x04)
	float                                         MaxFacingCameraBlendDistance;                                // 0x158(0x04)
	char                                          UnknownData15C[0x4];                                         // 0x15c(0x04)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x280 (Inherited: 0x00)
struct FGPUSpriteEmitterInfo 
{
	struct FNone*                                 RequiredModule;                                              // 0x00(0x08)
	struct FNone*                                 SpawnModule;                                                 // 0x08(0x08)
	struct FNone*                                 SpawnPerUnitModule;                                          // 0x10(0x08)
	struct TArray<None>                           SpawnModules;                                                // 0x18(0x10)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
	struct FNone                                  LocalVectorField;                                            // 0x30(0x70)
	struct FNone                                  VectorFieldScale;                                            // 0xa0(0x20)
	struct FNone                                  DragCoefficient;                                             // 0xc0(0x20)
	struct FNone                                  PointAttractorStrength;                                      // 0xe0(0x20)
	struct FNone                                  Resilience;                                                  // 0x100(0x20)
	struct FNone                                  ConstantAcceleration;                                        // 0x120(0x0c)
	struct FNone                                  PointAttractorPosition;                                      // 0x12c(0x0c)
	float                                         PointAttractorRadiusSq;                                      // 0x138(0x04)
	struct FNone                                  OrbitOffsetBase;                                             // 0x13c(0x0c)
	struct FNone                                  OrbitOffsetRange;                                            // 0x148(0x0c)
	struct FNone                                  InvMaxSize;                                                  // 0x154(0x08)
	float                                         InvRotationRateScale;                                        // 0x15c(0x04)
	float                                         MaxLifetime;                                                 // 0x160(0x04)
	uint32_t                                      MaxParticleCount;                                            // 0x164(0x04)
	char                                          ScreenAlignment;                                             // 0x168(0x01)
	char                                          LockAxisFlag;                                                // 0x169(0x01)
	char                                          UnknownData16A[0x2];                                         // 0x16a(0x02)
	char                                          bEnableCollision : 0;                                        // 0x16c(0x01)
	char                                          UnknownData16C[0x4];                                         // 0x16c(0x04)
	char                                          CollisionMode;                                               // 0x170(0x01)
	char                                          UnknownData171[0x3];                                         // 0x171(0x03)
	char                                          bRemoveHMDRoll : 0;                                          // 0x174(0x01)
	char                                          UnknownData174[0x4];                                         // 0x174(0x04)
	float                                         MinFacingCameraBlendDistance;                                // 0x178(0x04)
	float                                         MaxFacingCameraBlendDistance;                                // 0x17c(0x04)
	struct FNone                                  DynamicColor;                                                // 0x180(0x48)
	struct FNone                                  DynamicAlpha;                                                // 0x1c8(0x30)
	struct FNone                                  DynamicColorScale;                                           // 0x1f8(0x48)
	struct FNone                                  DynamicAlphaScale;                                           // 0x240(0x30)
	char                                          UnknownData270[0x10];                                        // 0x270(0x10)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x00)
struct FGPUSpriteLocalVectorFieldInfo 
{
	struct FNone*                                 Field;                                                       // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  Transform;                                                   // 0x10(0x30)
	struct FNone                                  MinInitialRotation;                                          // 0x40(0x0c)
	struct FNone                                  MaxInitialRotation;                                          // 0x4c(0x0c)
	struct FNone                                  RotationRate;                                                // 0x58(0x0c)
	float                                         Intensity;                                                   // 0x64(0x04)
	float                                         Tightness;                                                   // 0x68(0x04)
	char                                          bIgnoreComponentTransform : 0;                               // 0x6c(0x01)
	char                                          bTileX : 0;                                                  // 0x6c(0x01)
	char                                          bTileY : 0;                                                  // 0x6c(0x01)
	char                                          bTileZ : 0;                                                  // 0x6c(0x01)
	char                                          bUseFixDT : 0;                                               // 0x6c(0x01)
	char                                          UnknownData6C[0x4];                                          // 0x6c(0x04)
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNamedEmitterMaterial 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct FNone*                                 Material;                                                    // 0x08(0x08)
};

// ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x00)
struct FLODSoloTrack 
{
	struct TArray<None>                           SoloEnableSetting;                                           // 0x00(0x10)
};

// ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 (Inherited: 0x00)
struct FParticleSystemLOD 
{
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	char                                          ParamType;                                                   // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	float                                         Scalar;                                                      // 0x0c(0x04)
	float                                         Scalar_Low;                                                  // 0x10(0x04)
	struct FNone                                  Vector;                                                      // 0x14(0x0c)
	struct FNone                                  Vector_Low;                                                  // 0x20(0x0c)
	struct FNone                                  Color;                                                       // 0x2c(0x04)
	struct FNone*                                 Actor;                                                       // 0x30(0x08)
	struct FNone*                                 Material;                                                    // 0x38(0x08)
	char                                          UnknownData40[0x40];                                         // 0x40(0x40)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleSystemReplayFrame 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleEmitterReplayFrame 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
};

// ScriptStruct Engine.FreezablePerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FFreezablePerPlatformInt 
{
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
};

// ScriptStruct Engine.PhysicalAnimationData
// Size: 0x24 (Inherited: 0x00)
struct FPhysicalAnimationData 
{
	struct FName                                  BodyName;                                                    // 0x00(0x08)
	char                                          bIsLocalSimulation : 0;                                      // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	float                                         OrientationStrength;                                         // 0x0c(0x04)
	float                                         AngularVelocityStrength;                                     // 0x10(0x04)
	float                                         PositionStrength;                                            // 0x14(0x04)
	float                                         VelocityStrength;                                            // 0x18(0x04)
	float                                         MaxLinearForce;                                              // 0x1c(0x04)
	float                                         MaxAngularForce;                                             // 0x20(0x04)
};

// ScriptStruct Engine.TireFrictionScalePair
// Size: 0x10 (Inherited: 0x00)
struct FTireFrictionScalePair 
{
	struct FNone*                                 TireType;                                                    // 0x00(0x08)
	float                                         FrictionScale;                                               // 0x08(0x04)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x2c (Inherited: 0x00)
struct FPhysicalAnimationProfile 
{
	struct FName                                  ProfileName;                                                 // 0x00(0x08)
	struct FNone                                  PhysicalAnimationData;                                       // 0x08(0x24)
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x10c (Inherited: 0x00)
struct FPhysicsConstraintProfileHandle 
{
	struct FNone                                  ProfileProperties;                                           // 0x00(0x104)
	struct FName                                  ProfileName;                                                 // 0x104(0x08)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x03 (Inherited: 0x00)
struct FChaosPhysicsSettings 
{
	enum class None                               DefaultThreadingModel;                                       // 0x00(0x01)
	enum class None                               DedicatedThreadTickMode;                                     // 0x01(0x01)
	enum class None                               DedicatedThreadBufferMode;                                   // 0x02(0x01)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x0c (Inherited: 0x00)
struct FPhysicalSurfaceName 
{
	char                                          Type;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FName                                  Name;                                                        // 0x04(0x08)
};

// ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x00)
struct FDelegateArray 
{
	struct TArray<None>                           Delegates;                                                   // 0x00(0x10)
};

// ScriptStruct Engine.TViewTarget
// Size: 0x670 (Inherited: 0x00)
struct FTViewTarget 
{
	struct FNone*                                 Target;                                                      // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	struct FNone                                  POV;                                                         // 0x10(0x650)
	struct FNone*                                 PlayerState;                                                 // 0x660(0x08)
	char                                          UnknownData668[0x8];                                         // 0x668(0x08)
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x660 (Inherited: 0x00)
struct FCameraCacheEntry 
{
	float                                         Timestamp;                                                   // 0x00(0x04)
	char                                          UnknownData4[0xc];                                           // 0x04(0x0c)
	struct FNone                                  POV;                                                         // 0x10(0x650)
};

// ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x10 (Inherited: 0x00)
struct FInputActionSpeechMapping 
{
	struct FName                                  ActionName;                                                  // 0x00(0x08)
	struct FName                                  SpeechKeyword;                                               // 0x08(0x08)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FInputAxisKeyMapping 
{
	struct FName                                  AxisActionName;                                              // 0x00(0x08)
	struct FName                                  AxisName;                                                    // 0x08(0x08)
	float                                         Scale;                                                       // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone                                  Key;                                                         // 0x18(0x18)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x00)
struct FInputAxisConfigEntry 
{
	struct FName                                  AxisKeyName;                                                 // 0x00(0x08)
	struct FNone                                  AxisProperties;                                              // 0x08(0x10)
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x00)
struct FInputAxisProperties 
{
	float                                         DeadZone;                                                    // 0x00(0x04)
	float                                         Sensitivity;                                                 // 0x04(0x04)
	float                                         Exponent;                                                    // 0x08(0x04)
	char                                          bInvert : 0;                                                 // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
};

// ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x00)
struct FKeyBind 
{
	struct FNone                                  Key;                                                         // 0x00(0x18)
	struct FString                                Command;                                                     // 0x18(0x10)
	char                                          Control : 0;                                                 // 0x28(0x01)
	char                                          Shift : 0;                                                   // 0x28(0x01)
	char                                          Alt : 0;                                                     // 0x28(0x01)
	char                                          Cmd : 0;                                                     // 0x28(0x01)
	char                                          bIgnoreCtrl : 0;                                             // 0x28(0x01)
	char                                          bIgnoreShift : 0;                                            // 0x28(0x01)
	char                                          bIgnoreAlt : 0;                                              // 0x28(0x01)
	char                                          bIgnoreCmd : 0;                                              // 0x28(0x01)
	char                                          UnknownData28[0x1];                                          // 0x28(0x01)
	char                                          bDisabled : 0;                                               // 0x29(0x01)
	char                                          UnknownData29[0x7];                                          // 0x29(0x07)
};

// ScriptStruct Engine.PlayerMuteList
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMuteList 
{
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
	char                                          bHasVoiceHandshakeCompleted : 0;                             // 0x30(0x01)
	char                                          UnknownData30[0x4];                                          // 0x30(0x04)
	uint32_t                                      VoiceChannelIdx;                                             // 0x34(0x04)
};

// ScriptStruct Engine.PoseDataContainer
// Size: 0x90 (Inherited: 0x00)
struct FPoseDataContainer 
{
	struct TArray<None>                           PoseNames;                                                   // 0x00(0x10)
	struct TArray<None>                           Tracks;                                                      // 0x10(0x10)
	struct TMap<None, None>                       TrackMap;                                                    // 0x20(0x50)
	struct TArray<None>                           Poses;                                                       // 0x70(0x10)
	struct TArray<None>                           Curves;                                                      // 0x80(0x10)
};

// ScriptStruct Engine.PoseData
// Size: 0x70 (Inherited: 0x00)
struct FPoseData 
{
	struct TArray<None>                           LocalSpacePose;                                              // 0x00(0x10)
	struct TMap<None, None>                       TrackToBufferIndex;                                          // 0x10(0x50)
	struct TArray<None>                           CurveData;                                                   // 0x60(0x10)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x00)
struct FPreviewAssetAttachContainer 
{
	struct TArray<None>                           AttachedObjects;                                             // 0x00(0x10)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 (Inherited: 0x00)
struct FPreviewAttachedObjectPair 
{
	struct TSoftObjectPtr<FNone>                  AttachedObject;                                              // 0x00(0x28)
	struct FNone*                                 Object;                                                      // 0x28(0x08)
	struct FName                                  AttachedTo;                                                  // 0x30(0x08)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry 
{
	struct TSoftObjectPtr<FNone>                  SkeletalMesh;                                                // 0x00(0x28)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0xf0 (Inherited: 0xa8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData 
{
	char                                          UnknownDataA8[0x8];                                          // 0xa8(0x08)
	struct FNone                                  ComponentTransform;                                          // 0xb0(0x30)
	uint32_t                                      VisibilityId;                                                // 0xe0(0x04)
	char                                          UnknownDataE4[0x4];                                          // 0xe4(0x04)
	struct FNone*                                 LODParent;                                                   // 0xe8(0x08)
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 (Inherited: 0x00)
struct FSpriteCategoryInfo 
{
	struct FName                                  Category;                                                    // 0x00(0x08)
	struct FText                                  DisplayName;                                                 // 0x08(0x18)
	struct FText                                  Description;                                                 // 0x20(0x18)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FReverbSettings 
{
	char                                          bApplyReverb : 0;                                            // 0x00(0x01)
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 ReverbEffect;                                                // 0x08(0x08)
	struct FNone*                                 ReverbPluginEffect;                                          // 0x10(0x08)
	float                                         Volume;                                                      // 0x18(0x04)
	float                                         FadeTime;                                                    // 0x1c(0x04)
};

// ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x00)
struct FCompressedRichCurve 
{
	char                                          UnknownData0[0x18];                                          // 0x00(0x18)
};

// ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x00)
struct FTransformBase 
{
	struct FName                                  Node;                                                        // 0x00(0x08)
	struct FNone                                  Constraints[0x2];                                            // 0x08(0x20)
};

// ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x00)
struct FTransformBaseConstraint 
{
	struct TArray<None>                           TransformConstraints;                                        // 0x00(0x10)
};

// ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x00)
struct FRigTransformConstraint 
{
	char                                          TranformType;                                                // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FName                                  ParentSpace;                                                 // 0x04(0x08)
	float                                         Weight;                                                      // 0x0c(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct FName                                  ParentName;                                                  // 0x08(0x08)
	struct FNone                                  Transform;                                                   // 0x10(0x30)
	struct FString                                DisplayName;                                                 // 0x40(0x10)
	char                                          bAdvanced : 0;                                               // 0x50(0x01)
	char                                          UnknownData50[0x10];                                         // 0x50(0x10)
};

// ScriptStruct Engine.RootMotionSource
// Size: 0xa0 (Inherited: 0x00)
struct FRootMotionSource 
{
	char                                          UnknownData0[0x10];                                          // 0x00(0x10)
	uint16_t                                      Priority;                                                    // 0x10(0x02)
	uint16_t                                      LocalID;                                                     // 0x12(0x02)
	enum class None                               AccumulateMode;                                              // 0x14(0x01)
	char                                          UnknownData15[0x3];                                          // 0x15(0x03)
	struct FName                                  InstanceName;                                                // 0x18(0x08)
	float                                         StartTime;                                                   // 0x20(0x04)
	float                                         CurrentTime;                                                 // 0x24(0x04)
	float                                         PreviousTime;                                                // 0x28(0x04)
	float                                         Duration;                                                    // 0x2c(0x04)
	struct F                                      status;                                                      // 0x30(0x01)
	struct FNone                                  Settings;                                                    // 0x31(0x01)
	char                                          bInLocalSpace : 0;                                           // 0x32(0x01)
	char                                          UnknownData32[0xe];                                          // 0x32(0x0e)
	struct FNone                                  RootMotionParams;                                            // 0x40(0x40)
	struct FNone                                  FinishVelocityParams;                                        // 0x80(0x14)
	char                                          UnknownData94[0xc];                                          // 0x94(0x0c)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 (Inherited: 0x00)
struct FRootMotionFinishVelocitySettings 
{
	enum class None                               Mode;                                                        // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	struct FNone                                  SetVelocity;                                                 // 0x04(0x0c)
	float                                         ClampVelocity;                                               // 0x10(0x04)
};

// ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceStatus 
{
	char                                          Flags;                                                       // 0x00(0x01)
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xd0 (Inherited: 0xa0)
struct FRootMotionSource_JumpForce : FRootMotionSource 
{
	struct FNone                                  Rotation;                                                    // 0x98(0x0c)
	float                                         Distance;                                                    // 0xa4(0x04)
	float                                         Height;                                                      // 0xa8(0x04)
	char                                          bDisableTimeout : 0;                                         // 0xac(0x01)
	struct FNone*                                 PathOffsetCurve;                                             // 0xb0(0x08)
	struct FNone*                                 TimeMappingCurve;                                            // 0xb8(0x08)
	char                                          UnknownDataC4[0xc];                                          // 0xc4(0x0c)
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xd0 (Inherited: 0xa0)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource 
{
	struct FNone                                  StartLocation;                                               // 0x98(0x0c)
	struct FNone                                  InitialTargetLocation;                                       // 0xa4(0x0c)
	struct FNone                                  TargetLocation;                                              // 0xb0(0x0c)
	char                                          bRestrictSpeedToExpected : 0;                                // 0xbc(0x01)
	struct FNone*                                 PathOffsetCurve;                                             // 0xc0(0x08)
	struct FNone*                                 TimeMappingCurve;                                            // 0xc8(0x08)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xc0 (Inherited: 0xa0)
struct FRootMotionSource_MoveToForce : FRootMotionSource 
{
	struct FNone                                  StartLocation;                                               // 0x98(0x0c)
	struct FNone                                  TargetLocation;                                              // 0xa4(0x0c)
	char                                          bRestrictSpeedToExpected : 0;                                // 0xb0(0x01)
	struct FNone*                                 PathOffsetCurve;                                             // 0xb8(0x08)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xe0 (Inherited: 0xa0)
struct FRootMotionSource_RadialForce : FRootMotionSource 
{
	struct FNone                                  Location;                                                    // 0x98(0x0c)
	struct FNone*                                 LocationActor;                                               // 0xa8(0x08)
	float                                         Radius;                                                      // 0xb0(0x04)
	float                                         Strength;                                                    // 0xb4(0x04)
	char                                          bIsPush : 0;                                                 // 0xb8(0x01)
	char                                          bNoZForce : 0;                                               // 0xb9(0x01)
	char                                          UnknownDataBC[0x4];                                          // 0xbc(0x04)
	struct FNone*                                 StrengthDistanceFalloff;                                     // 0xc0(0x08)
	struct FNone*                                 StrengthOverTime;                                            // 0xc8(0x08)
	char                                          bUseFixedWorldDirection : 0;                                 // 0xd0(0x01)
	char                                          UnknownDataD0[0x4];                                          // 0xd0(0x04)
	struct FNone                                  FixedWorldDirection;                                         // 0xd4(0x0c)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xb0 (Inherited: 0xa0)
struct FRootMotionSource_ConstantForce : FRootMotionSource 
{
	struct FNone                                  Force;                                                       // 0x98(0x0c)
	struct FNone*                                 StrengthOverTime;                                            // 0xa8(0x08)
};

// ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x00)
struct FCameraExposureSettings 
{
	char                                          Method;                                                      // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         LowPercent;                                                  // 0x04(0x04)
	float                                         HighPercent;                                                 // 0x08(0x04)
	float                                         MinBrightness;                                               // 0x0c(0x04)
	float                                         MaxBrightness;                                               // 0x10(0x04)
	float                                         SpeedUp;                                                     // 0x14(0x04)
	float                                         SpeedDown;                                                   // 0x18(0x04)
	float                                         Bias;                                                        // 0x1c(0x04)
	struct FNone*                                 BiasCurve;                                                   // 0x20(0x08)
	struct FNone*                                 MeterMask;                                                   // 0x28(0x08)
	float                                         HistogramLogMin;                                             // 0x30(0x04)
	float                                         HistogramLogMax;                                             // 0x34(0x04)
	float                                         CalibrationConstant;                                         // 0x38(0x04)
	char                                          ApplyPhysicalCameraExposure : 0;                             // 0x3c(0x01)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
};

// ScriptStruct Engine.LensSettings
// Size: 0xe0 (Inherited: 0x00)
struct FLensSettings 
{
	struct FNone                                  Bloom;                                                       // 0x00(0xb8)
	struct FNone                                  Imperfections;                                               // 0xb8(0x20)
	float                                         ChromaticAberration;                                         // 0xd8(0x04)
	char                                          UnknownDataDC[0x4];                                          // 0xdc(0x04)
};

// ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x00)
struct FLensImperfectionSettings 
{
	struct FNone*                                 DirtMask;                                                    // 0x00(0x08)
	float                                         DirtMaskIntensity;                                           // 0x08(0x04)
	struct FNone                                  DirtMaskTint;                                                // 0x0c(0x10)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.LensBloomSettings
// Size: 0xb8 (Inherited: 0x00)
struct FLensBloomSettings 
{
	struct FNone                                  GaussianSum;                                                 // 0x00(0x84)
	char                                          UnknownData84[0x4];                                          // 0x84(0x04)
	struct FNone                                  Convolution;                                                 // 0x88(0x28)
	char                                          Method;                                                      // 0xb0(0x01)
	char                                          UnknownDataB1[0x7];                                          // 0xb1(0x07)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 (Inherited: 0x00)
struct FConvolutionBloomSettings 
{
	struct FNone*                                 Texture;                                                     // 0x00(0x08)
	float                                         Size;                                                        // 0x08(0x04)
	struct FNone                                  CenterUV;                                                    // 0x0c(0x08)
	float                                         PreFilterMin;                                                // 0x14(0x04)
	float                                         PreFilterMax;                                                // 0x18(0x04)
	float                                         PreFilterMult;                                               // 0x1c(0x04)
	float                                         BufferScale;                                                 // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 (Inherited: 0x00)
struct FGaussianSumBloomSettings 
{
	float                                         Intensity;                                                   // 0x00(0x04)
	float                                         threshold;                                                   // 0x04(0x04)
	float                                         SizeScale;                                                   // 0x08(0x04)
	float                                         Filter1Size;                                                 // 0x0c(0x04)
	float                                         Filter2Size;                                                 // 0x10(0x04)
	float                                         Filter3Size;                                                 // 0x14(0x04)
	float                                         Filter4Size;                                                 // 0x18(0x04)
	float                                         Filter5Size;                                                 // 0x1c(0x04)
	float                                         Filter6Size;                                                 // 0x20(0x04)
	struct FNone                                  Filter1Tint;                                                 // 0x24(0x10)
	struct FNone                                  Filter2Tint;                                                 // 0x34(0x10)
	struct FNone                                  Filter3Tint;                                                 // 0x44(0x10)
	struct FNone                                  Filter4Tint;                                                 // 0x54(0x10)
	struct FNone                                  Filter5Tint;                                                 // 0x64(0x10)
	struct FNone                                  Filter6Tint;                                                 // 0x74(0x10)
};

// ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x00)
struct FFilmStockSettings 
{
	float                                         Slope;                                                       // 0x00(0x04)
	float                                         Toe;                                                         // 0x04(0x04)
	float                                         Shoulder;                                                    // 0x08(0x04)
	float                                         BlackClip;                                                   // 0x0c(0x04)
	float                                         WhiteClip;                                                   // 0x10(0x04)
};

// ScriptStruct Engine.ColorGradingSettings
// Size: 0x150 (Inherited: 0x00)
struct FColorGradingSettings 
{
	struct FNone                                  Global;                                                      // 0x00(0x50)
	struct FNone                                  Shadows;                                                     // 0x50(0x50)
	struct FNone                                  Midtones;                                                    // 0xa0(0x50)
	struct FNone                                  Highlights;                                                  // 0xf0(0x50)
	float                                         ShadowsMax;                                                  // 0x140(0x04)
	float                                         HighlightsMin;                                               // 0x144(0x04)
	char                                          UnknownData148[0x8];                                         // 0x148(0x08)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x50 (Inherited: 0x00)
struct FColorGradePerRangeSettings 
{
	struct FNone                                  Saturation;                                                  // 0x00(0x10)
	struct FNone                                  Contrast;                                                    // 0x10(0x10)
	struct FNone                                  Gamma;                                                       // 0x20(0x10)
	struct FNone                                  Gain;                                                        // 0x30(0x10)
	struct FNone                                  Offset;                                                      // 0x40(0x10)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)
struct FEngineShowFlagsSetting 
{
	struct FString                                ShowFlagName;                                                // 0x00(0x10)
	char                                          Enabled : 0;                                                 // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct Engine.SimpleCurve
// Size: 0x88 (Inherited: 0x70)
struct FSimpleCurve : FRealCurve 
{
	char                                          InterpMode;                                                  // 0x70(0x01)
	char                                          UnknownData71[0x7];                                          // 0x71(0x07)
	struct TArray<None>                           Keys;                                                        // 0x78(0x10)
};

// ScriptStruct Engine.SimpleCurveKey
// Size: 0x08 (Inherited: 0x00)
struct FSimpleCurveKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	float                                         Value;                                                       // 0x04(0x04)
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x00)
struct FSingleAnimationPlayData 
{
	struct FNone*                                 AnimToPlay;                                                  // 0x00(0x08)
	char                                          bSavedLooping : 0;                                           // 0x08(0x01)
	char                                          bSavedPlaying : 0;                                           // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	float                                         SavedPosition;                                               // 0x0c(0x04)
	float                                         SavedPlayRate;                                               // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalMaterial 
{
	struct FNone*                                 MaterialInterface;                                           // 0x00(0x08)
	struct FName                                  MaterialSlotName;                                            // 0x08(0x08)
	struct FNone                                  UVChannelData;                                               // 0x10(0x14)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy 
{
	struct FName                                  AssetName;                                                   // 0x00(0x08)
	struct FString                                ApexFileName;                                                // 0x08(0x10)
	char                                          bClothPropertiesChanged : 0;                                 // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	struct FNone                                  PhysicsProperties;                                           // 0x1c(0x50)
	char                                          UnknownData6C[0xc];                                          // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy 
{
	float                                         VerticalResistance;                                          // 0x00(0x04)
	float                                         HorizontalResistance;                                        // 0x04(0x04)
	float                                         BendResistance;                                              // 0x08(0x04)
	float                                         ShearResistance;                                             // 0x0c(0x04)
	float                                         Friction;                                                    // 0x10(0x04)
	float                                         Damping;                                                     // 0x14(0x04)
	float                                         TetherStiffness;                                             // 0x18(0x04)
	float                                         TetherLimit;                                                 // 0x1c(0x04)
	float                                         Drag;                                                        // 0x20(0x04)
	float                                         StiffnessFrequency;                                          // 0x24(0x04)
	float                                         GravityScale;                                                // 0x28(0x04)
	float                                         MassScale;                                                   // 0x2c(0x04)
	float                                         InertiaBlend;                                                // 0x30(0x04)
	float                                         SelfCollisionThickness;                                      // 0x34(0x04)
	float                                         SelfCollisionSquashScale;                                    // 0x38(0x04)
	float                                         SelfCollisionStiffness;                                      // 0x3c(0x04)
	float                                         SolverFrequency;                                             // 0x40(0x04)
	float                                         FiberCompression;                                            // 0x44(0x04)
	float                                         FiberExpansion;                                              // 0x48(0x04)
	float                                         FiberResistance;                                             // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xb8 (Inherited: 0x00)
struct FSkeletalMeshLODInfo 
{
	struct FNone                                  ScreenSize;                                                  // 0x00(0x04)
	float                                         LODHysteresis;                                               // 0x04(0x04)
	struct TArray<None>                           LODMaterialMap;                                              // 0x08(0x10)
	struct FNone                                  BuildSettings;                                               // 0x18(0x14)
	struct FNone                                  ReductionSettings;                                           // 0x2c(0x3c)
	struct TArray<None>                           BonesToRemove;                                               // 0x68(0x10)
	struct TArray<None>                           BonesToPrioritize;                                           // 0x78(0x10)
	float                                         WeightOfPrioritization;                                      // 0x88(0x04)
	char                                          UnknownData8C[0x4];                                          // 0x8c(0x04)
	struct FNone*                                 BakePose;                                                    // 0x90(0x08)
	struct FNone*                                 BakePoseOverride;                                            // 0x98(0x08)
	struct FString                                SourceImportFilename;                                        // 0xa0(0x10)
	enum class None                               SkinCacheUsage;                                              // 0xb0(0x01)
	char                                          bHasBeenSimplified : 0;                                      // 0xb1(0x01)
	char                                          bHasPerLODVertexColors : 0;                                  // 0xb1(0x01)
	char                                          bAllowCPUAccess : 0;                                         // 0xb1(0x01)
	char                                          bSupportUniformlyDistributedSampling : 0;                    // 0xb1(0x01)
	char                                          UnknownDataB1[0x7];                                          // 0xb1(0x07)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3c (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings 
{
	char                                          TerminationCriterion;                                        // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         NumOfTrianglesPercentage;                                    // 0x04(0x04)
	float                                         NumOfVertPercentage;                                         // 0x08(0x04)
	uint32_t                                      MaxNumOfTriangles;                                           // 0x0c(0x04)
	uint32_t                                      MaxNumOfVerts;                                               // 0x10(0x04)
	float                                         MaxDeviationPercentage;                                      // 0x14(0x04)
	char                                          ReductionMethod;                                             // 0x18(0x01)
	char                                          SilhouetteImportance;                                        // 0x19(0x01)
	char                                          TextureImportance;                                           // 0x1a(0x01)
	char                                          ShadingImportance;                                           // 0x1b(0x01)
	char                                          SkinningImportance;                                          // 0x1c(0x01)
	char                                          bRemapMorphTargets : 0;                                      // 0x1d(0x01)
	char                                          bRecalcNormals : 0;                                          // 0x1d(0x01)
	char                                          UnknownData1D[0x3];                                          // 0x1d(0x03)
	float                                         WeldingThreshold;                                            // 0x20(0x04)
	float                                         NormalsThreshold;                                            // 0x24(0x04)
	uint32_t                                      MaxBonesPerVertex;                                           // 0x28(0x04)
	char                                          bEnforceBoneBoundaries : 0;                                  // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
	float                                         VolumeImportance;                                            // 0x30(0x04)
	char                                          bLockEdges : 0;                                              // 0x34(0x01)
	char                                          bLockColorBounaries : 0;                                     // 0x34(0x01)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	uint32_t                                      BaseLOD;                                                     // 0x38(0x04)
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 (Inherited: 0x00)
struct FSkeletalMeshClothBuildParams 
{
	struct TWeakObjectPtr<struct FNone>           TargetAsset;                                                 // 0x00(0x08)
	uint32_t                                      TargetLod;                                                   // 0x08(0x04)
	char                                          bRemapParameters : 0;                                        // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct FString                                AssetName;                                                   // 0x10(0x10)
	uint32_t                                      LODIndex;                                                    // 0x20(0x04)
	uint32_t                                      SourceSection;                                               // 0x24(0x04)
	char                                          bRemoveFromMesh : 0;                                         // 0x28(0x01)
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
	struct TSoftObjectPtr<FNone>                  PhysicsAsset;                                                // 0x30(0x28)
};

// ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x00)
struct FBoneMirrorExport 
{
	struct FName                                  BoneName;                                                    // 0x00(0x08)
	struct FName                                  SourceBoneName;                                              // 0x08(0x08)
	char                                          BoneFlipAxis;                                                // 0x10(0x01)
	char                                          UnknownData11[0x3];                                          // 0x11(0x03)
};

// ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 (Inherited: 0x00)
struct FBoneMirrorInfo 
{
	uint32_t                                      SourceIndex;                                                 // 0x00(0x04)
	char                                          BoneFlipAxis;                                                // 0x04(0x01)
	char                                          UnknownData5[0x3];                                           // 0x05(0x03)
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x80 (Inherited: 0x00)
struct FSkeletalMeshLODGroupSettings 
{
	struct FNone                                  ScreenSize;                                                  // 0x00(0x04)
	float                                         LODHysteresis;                                               // 0x04(0x04)
	enum class None                               BoneFilterActionOption;                                      // 0x08(0x01)
	char                                          UnknownData9[0x7];                                           // 0x09(0x07)
	struct TArray<None>                           BoneList;                                                    // 0x10(0x10)
	struct TArray<None>                           BonesToPrioritize;                                           // 0x20(0x10)
	float                                         WeightOfPrioritization;                                      // 0x30(0x04)
	char                                          UnknownData34[0x4];                                          // 0x34(0x04)
	struct FNone*                                 BakePose;                                                    // 0x38(0x08)
	struct FNone                                  ReductionSettings;                                           // 0x40(0x3c)
	char                                          UnknownData7C[0x4];                                          // 0x7c(0x04)
};

// ScriptStruct Engine.BoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FBoneFilter 
{
	char                                          bExcludeSelf : 0;                                            // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FName                                  BoneName;                                                    // 0x04(0x08)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingInfo 
{
	struct TArray<None>                           Regions;                                                     // 0x00(0x10)
	struct FNone                                  BuiltData;                                                   // 0x10(0x20)
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshSamplingBuiltData 
{
	struct TArray<None>                           WholeMeshBuiltData;                                          // 0x00(0x10)
	struct TArray<None>                           RegionBuiltData;                                             // 0x10(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBuiltData 
{
	char                                          UnknownData0[0x78];                                          // 0x00(0x78)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshSamplingLODBuiltData 
{
	char                                          UnknownData0[0x48];                                          // 0x00(0x48)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegion 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	uint32_t                                      LODIndex;                                                    // 0x08(0x04)
	char                                          bSupportUniformlyDistributedSampling : 0;                    // 0x0c(0x01)
	char                                          UnknownDataC[0x4];                                           // 0x0c(0x04)
	struct TArray<None>                           MaterialFilters;                                             // 0x10(0x10)
	struct TArray<None>                           BoneFilters;                                                 // 0x20(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBoneFilter 
{
	struct FName                                  BoneName;                                                    // 0x00(0x08)
	char                                          bIncludeOrExclude : 0;                                       // 0x08(0x01)
	char                                          bApplyToChildren : 0;                                        // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x08 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionMaterialFilter 
{
	struct FName                                  MaterialName;                                                // 0x00(0x08)
};

// ScriptStruct Engine.VirtualBone
// Size: 0x18 (Inherited: 0x00)
struct FVirtualBone 
{
	struct FName                                  SourceBoneName;                                              // 0x00(0x08)
	struct FName                                  TargetBoneName;                                              // 0x08(0x08)
	struct FName                                  VirtualBoneName;                                             // 0x10(0x08)
};

// ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotGroup 
{
	struct FName                                  GroupName;                                                   // 0x00(0x08)
	struct TArray<None>                           SlotNames;                                                   // 0x08(0x10)
};

// ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRigConfiguration 
{
	struct FNone*                                 Rig;                                                         // 0x00(0x08)
	struct TArray<None>                           BoneMappingTable;                                            // 0x08(0x10)
};

// ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x00)
struct FNameMapping 
{
	struct FName                                  NodeName;                                                    // 0x00(0x08)
	struct FName                                  BoneName;                                                    // 0x08(0x08)
};

// ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x00)
struct FBoneReductionSetting 
{
	struct TArray<None>                           BonesToRemove;                                               // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose 
{
	struct FName                                  PoseName;                                                    // 0x00(0x08)
	struct TArray<None>                           ReferencePose;                                               // 0x08(0x10)
};

// ScriptStruct Engine.BoneNode
// Size: 0x10 (Inherited: 0x00)
struct FBoneNode 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	uint32_t                                      ParentIndex;                                                 // 0x08(0x04)
	char                                          TranslationRetargetingMode;                                  // 0x0c(0x01)
	char                                          UnknownDataD[0x3];                                           // 0x0d(0x03)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x00)
struct FSkeletonToMeshLinkup 
{
	struct TArray<None>                           SkeletonToMeshTable;                                         // 0x00(0x10)
	struct TArray<None>                           MeshToSkeletonTable;                                         // 0x10(0x10)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshComponentLODInfo 
{
	struct TArray<None>                           HiddenMaterials;                                             // 0x00(0x10)
	char                                          UnknownData10[0x18];                                         // 0x10(0x18)
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x3c (Inherited: 0x00)
struct FSkelMeshSkinWeightInfo 
{
	uint32_t                                      Bones[0xc];                                                  // 0x00(0x30)
	char                                          Weights[0xc];                                                // 0x30(0x0c)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkinWeightProfileInfo 
{
	struct FName                                  Name;                                                        // 0x00(0x08)
	struct FNone                                  DefaultProfile;                                              // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	struct FNone                                  DefaultProfileFromLODIndex;                                  // 0x0c(0x04)
};

// ScriptStruct Engine.TentDistribution
// Size: 0x0c (Inherited: 0x00)
struct FTentDistribution 
{
	float                                         TipAltitude;                                                 // 0x00(0x04)
	float                                         TipValue;                                                    // 0x04(0x04)
	float                                         Width;                                                       // 0x08(0x04)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x160 (Inherited: 0xa8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData 
{
	struct FNone                                  LightGuid;                                                   // 0xa8(0x10)
	float                                         AverageBrightness;                                           // 0xb8(0x04)
	char                                          UnknownDataBC[0xa4];                                         // 0xbc(0xa4)
};

// ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x00)
struct FSmartNameContainer 
{
	char                                          UnknownData0[0x50];                                          // 0x00(0x50)
};

// ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x00)
struct FSmartNameMapping 
{
	char                                          UnknownData0[0x70];                                          // 0x00(0x70)
};

// ScriptStruct Engine.CurveMetaData
// Size: 0x20 (Inherited: 0x00)
struct FCurveMetaData 
{
	char                                          UnknownData0[0x20];                                          // 0x00(0x20)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x3a0 (Inherited: 0xb0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings 
{
	char                                          bAttenuate : 0;                                              // 0xb0(0x01)
	char                                          bSpatialize : 0;                                             // 0xb0(0x01)
	char                                          bAttenuateWithLPF : 0;                                       // 0xb0(0x01)
	char                                          bEnableListenerFocus : 0;                                    // 0xb0(0x01)
	char                                          bEnableFocusInterpolation : 0;                               // 0xb0(0x01)
	char                                          bEnableOcclusion : 0;                                        // 0xb0(0x01)
	char                                          bUseComplexCollisionForOcclusion : 0;                        // 0xb0(0x01)
	char                                          bEnableReverbSend : 0;                                       // 0xb0(0x01)
	char                                          UnknownDataB0[0x1];                                          // 0xb0(0x01)
	char                                          bEnablePriorityAttenuation : 0;                              // 0xb1(0x01)
	char                                          bApplyNormalizationToStereoSounds : 0;                       // 0xb1(0x01)
	char                                          bEnableLogFrequencyScaling : 0;                              // 0xb1(0x01)
	char                                          bEnableSubmixSends : 0;                                      // 0xb1(0x01)
	char                                          UnknownDataB1[0x1];                                          // 0xb1(0x01)
	char                                          SpatializationAlgorithm;                                     // 0xb2(0x01)
	char                                          UnknownDataB3[0x1];                                          // 0xb3(0x01)
	float                                         BinauralRadius;                                              // 0xb4(0x04)
	enum class None                               AbsorptionMethod;                                            // 0xb8(0x01)
	char                                          OcclusionTraceChannel;                                       // 0xb9(0x01)
	enum class None                               ReverbSendMethod;                                            // 0xba(0x01)
	enum class None                               PriorityAttenuationMethod;                                   // 0xbb(0x01)
	float                                         OmniRadius;                                                  // 0xbc(0x04)
	float                                         StereoSpread;                                                // 0xc0(0x04)
	float                                         LPFRadiusMin;                                                // 0xc4(0x04)
	float                                         LPFRadiusMax;                                                // 0xc8(0x04)
	char                                          UnknownDataCC[0x4];                                          // 0xcc(0x04)
	struct FNone                                  CustomLowpassAirAbsorptionCurve;                             // 0xd0(0x88)
	struct FNone                                  CustomHighpassAirAbsorptionCurve;                            // 0x158(0x88)
	float                                         LPFFrequencyAtMin;                                           // 0x1e0(0x04)
	float                                         LPFFrequencyAtMax;                                           // 0x1e4(0x04)
	float                                         HPFFrequencyAtMin;                                           // 0x1e8(0x04)
	float                                         HPFFrequencyAtMax;                                           // 0x1ec(0x04)
	float                                         FocusAzimuth;                                                // 0x1f0(0x04)
	float                                         NonFocusAzimuth;                                             // 0x1f4(0x04)
	float                                         FocusDistanceScale;                                          // 0x1f8(0x04)
	float                                         NonFocusDistanceScale;                                       // 0x1fc(0x04)
	float                                         FocusPriorityScale;                                          // 0x200(0x04)
	float                                         NonFocusPriorityScale;                                       // 0x204(0x04)
	float                                         FocusVolumeAttenuation;                                      // 0x208(0x04)
	float                                         NonFocusVolumeAttenuation;                                   // 0x20c(0x04)
	float                                         FocusAttackInterpSpeed;                                      // 0x210(0x04)
	float                                         FocusReleaseInterpSpeed;                                     // 0x214(0x04)
	float                                         OcclusionLowPassFilterFrequency;                             // 0x218(0x04)
	float                                         OcclusionVolumeAttenuation;                                  // 0x21c(0x04)
	float                                         OcclusionInterpolationTime;                                  // 0x220(0x04)
	float                                         ReverbWetLevelMin;                                           // 0x224(0x04)
	float                                         ReverbWetLevelMax;                                           // 0x228(0x04)
	float                                         ReverbDistanceMin;                                           // 0x22c(0x04)
	float                                         ReverbDistanceMax;                                           // 0x230(0x04)
	float                                         ManualReverbSendLevel;                                       // 0x234(0x04)
	struct FNone                                  CustomReverbSendCurve;                                       // 0x238(0x88)
	struct TArray<None>                           SubmixSendSettings;                                          // 0x2c0(0x10)
	float                                         PriorityAttenuationMin;                                      // 0x2d0(0x04)
	float                                         PriorityAttenuationMax;                                      // 0x2d4(0x04)
	float                                         PriorityAttenuationDistanceMin;                              // 0x2d8(0x04)
	float                                         PriorityAttenuationDistanceMax;                              // 0x2dc(0x04)
	float                                         ManualPriorityAttenuation;                                   // 0x2e0(0x04)
	char                                          UnknownData2E4[0x4];                                         // 0x2e4(0x04)
	struct FNone                                  CustomPriorityAttenuationCurve;                              // 0x2e8(0x88)
	struct FNone                                  PluginSettings;                                              // 0x370(0x30)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x30 (Inherited: 0x00)
struct FSoundAttenuationPluginSettings 
{
	struct TArray<None>                           SpatializationPluginSettingsArray;                           // 0x00(0x10)
	struct TArray<None>                           OcclusionPluginSettingsArray;                                // 0x10(0x10)
	struct TArray<None>                           ReverbPluginSettingsArray;                                   // 0x20(0x10)
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// Size: 0xa8 (Inherited: 0x00)
struct FAttenuationSubmixSendSettings 
{
	struct FNone*                                 Submix;                                                      // 0x00(0x08)
	enum class None                               SubmixSendMethod;                                            // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	float                                         SubmixSendLevelMin;                                          // 0x0c(0x04)
	float                                         SubmixSendLevelMax;                                          // 0x10(0x04)
	float                                         SubmixSendDistanceMin;                                       // 0x14(0x04)
	float                                         SubmixSendDistanceMax;                                       // 0x18(0x04)
	float                                         ManualSubmixSendLevel;                                       // 0x1c(0x04)
	struct FNone                                  CustomSubmixSendCurve;                                       // 0x20(0x88)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier 
{
	struct FNone*                                 SoundMix;                                                    // 0x00(0x08)
	float                                         MinVolumeThreshold;                                          // 0x08(0x04)
	float                                         MaxVolumeThreshold;                                          // 0x0c(0x04)
};

// ScriptStruct Engine.SoundClassProperties
// Size: 0x58 (Inherited: 0x00)
struct FSoundClassProperties 
{
	float                                         Volume;                                                      // 0x00(0x04)
	float                                         Pitch;                                                       // 0x04(0x04)
	float                                         LowPassFilterFrequency;                                      // 0x08(0x04)
	float                                         AttenuationDistanceScale;                                    // 0x0c(0x04)
	float                                         StereoBleed;                                                 // 0x10(0x04)
	float                                         LFEBleed;                                                    // 0x14(0x04)
	float                                         VoiceCenterChannelVolume;                                    // 0x18(0x04)
	float                                         RadioFilterVolume;                                           // 0x1c(0x04)
	float                                         RadioFilterVolumeThreshold;                                  // 0x20(0x04)
	char                                          bApplyEffects : 0;                                           // 0x24(0x01)
	char                                          bAlwaysPlay : 0;                                             // 0x24(0x01)
	char                                          bIsUISound : 0;                                              // 0x24(0x01)
	char                                          bIsMusic : 0;                                                // 0x24(0x01)
	char                                          bCenterChannelOnly : 0;                                      // 0x24(0x01)
	char                                          bApplyAmbientVolumes : 0;                                    // 0x24(0x01)
	char                                          bReverb : 0;                                                 // 0x24(0x01)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	float                                         Default2DReverbSendAmount;                                   // 0x28(0x04)
	char                                          OutputTarget;                                                // 0x2c(0x01)
	enum class None                               LoadingBehavior;                                             // 0x2d(0x01)
	char                                          UnknownData2E[0x2];                                          // 0x2e(0x02)
	struct FNone*                                 DefaultSubmix;                                               // 0x30(0x08)
	char                                          UnknownData38[0x20];                                         // 0x38(0x20)
};

// ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundClassEditorData 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x20 (Inherited: 0x00)
struct FSoundConcurrencySettings 
{
	uint32_t                                      MaxCount;                                                    // 0x00(0x04)
	char                                          bLimitToOwner : 0;                                           // 0x04(0x01)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	char                                          ResolutionRule;                                              // 0x08(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
	float                                         VolumeScale;                                                 // 0x0c(0x04)
	float                                         VolumeScaleAttackTime;                                       // 0x10(0x04)
	char                                          bVolumeScaleCanRelease : 0;                                  // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	float                                         VolumeScaleReleaseTime;                                      // 0x18(0x04)
	float                                         VoiceStealReleaseTime;                                       // 0x1c(0x04)
};

// ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundNodeEditorData 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
};

// ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectChainEntry 
{
	struct FNone*                                 Preset;                                                      // 0x00(0x08)
	char                                          bBypass : 0;                                                 // 0x08(0x01)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup 
{
	char                                          SoundGroup;                                                  // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FString                                DisplayName;                                                 // 0x08(0x10)
	char                                          bAlwaysDecompressOnLoad : 0;                                 // 0x18(0x01)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	float                                         DecompressedDuration;                                        // 0x1c(0x04)
};

// ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x00)
struct FSoundClassAdjuster 
{
	struct FNone*                                 SoundClassObject;                                            // 0x00(0x08)
	float                                         VolumeAdjuster;                                              // 0x08(0x04)
	float                                         PitchAdjuster;                                               // 0x0c(0x04)
	float                                         LowPassFilterFrequency;                                      // 0x10(0x04)
	char                                          bApplyToChildren : 0;                                        // 0x14(0x01)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	float                                         VoiceCenterChannelVolumeAdjuster;                            // 0x18(0x04)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x40 (Inherited: 0x08)
struct FAudioEQEffect : FAudioEffectParameters 
{
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
	float                                         FrequencyCenter0;                                            // 0x10(0x04)
	float                                         Gain0;                                                       // 0x14(0x04)
	float                                         Bandwidth0;                                                  // 0x18(0x04)
	float                                         FrequencyCenter1;                                            // 0x1c(0x04)
	float                                         Gain1;                                                       // 0x20(0x04)
	float                                         Bandwidth1;                                                  // 0x24(0x04)
	float                                         FrequencyCenter2;                                            // 0x28(0x04)
	float                                         Gain2;                                                       // 0x2c(0x04)
	float                                         Bandwidth2;                                                  // 0x30(0x04)
	float                                         FrequencyCenter3;                                            // 0x34(0x04)
	float                                         Gain3;                                                       // 0x38(0x04)
	float                                         Bandwidth3;                                                  // 0x3c(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum 
{
	float                                         FadeInDistanceStart;                                         // 0x00(0x04)
	float                                         FadeInDistanceEnd;                                           // 0x04(0x04)
	float                                         FadeOutDistanceStart;                                        // 0x08(0x04)
	float                                         FadeOutDistanceEnd;                                          // 0x0c(0x04)
	float                                         Volume;                                                      // 0x10(0x04)
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x00)
struct FModulatorContinuousParams 
{
	struct FName                                  ParameterName;                                               // 0x00(0x08)
	float                                         Default;                                                     // 0x08(0x04)
	float                                         MinInput;                                                    // 0x0c(0x04)
	float                                         MaxInput;                                                    // 0x10(0x04)
	float                                         MinOutput;                                                   // 0x14(0x04)
	float                                         MaxOutput;                                                   // 0x18(0x04)
	char                                          ParamMode;                                                   // 0x1c(0x01)
	char                                          UnknownData1D[0x3];                                          // 0x1d(0x03)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSourceBusSendInfo 
{
	enum class None                               SourceBusSendLevelControlMethod;                             // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FNone*                                 SoundSourceBus;                                              // 0x08(0x08)
	float                                         SendLevel;                                                   // 0x10(0x04)
	float                                         MinSendLevel;                                                // 0x14(0x04)
	float                                         MaxSendLevel;                                                // 0x18(0x04)
	float                                         MinSendDistance;                                             // 0x1c(0x04)
	float                                         MaxSendDistance;                                             // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FNone                                  CustomSendLevelCurve;                                        // 0x28(0x88)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSubmixSendInfo 
{
	enum class None                               SendLevelControlMethod;                                      // 0x00(0x01)
	char                                          UnknownData1[0x7];                                           // 0x01(0x07)
	struct FNone*                                 SoundSubmix;                                                 // 0x08(0x08)
	float                                         SendLevel;                                                   // 0x10(0x04)
	float                                         MinSendLevel;                                                // 0x14(0x04)
	float                                         MaxSendLevel;                                                // 0x18(0x04)
	float                                         MinSendDistance;                                             // 0x1c(0x04)
	float                                         MaxSendDistance;                                             // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FNone                                  CustomSendLevelCurve;                                        // 0x28(0x88)
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveEnvelopeTimeData 
{
	float                                         Amplitude;                                                   // 0x00(0x04)
	float                                         TimeSec;                                                     // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x00)
struct FSoundWaveSpectralTimeData 
{
	struct TArray<None>                           Data;                                                        // 0x00(0x10)
	float                                         TimeSec;                                                     // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveSpectralDataEntry 
{
	float                                         Magnitude;                                                   // 0x00(0x04)
	float                                         NormalizedMagnitude;                                         // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x00)
struct FSoundWaveEnvelopeDataPerSound 
{
	float                                         Envelope;                                                    // 0x00(0x04)
	float                                         PlaybackTime;                                                // 0x04(0x04)
	struct FNone*                                 SoundWave;                                                   // 0x08(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x00)
struct FSoundWaveSpectralDataPerSound 
{
	struct TArray<None>                           SpectralData;                                                // 0x00(0x10)
	float                                         PlaybackTime;                                                // 0x10(0x04)
	char                                          UnknownData14[0x4];                                          // 0x14(0x04)
	struct FNone*                                 SoundWave;                                                   // 0x18(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralData
// Size: 0x0c (Inherited: 0x00)
struct FSoundWaveSpectralData 
{
	float                                         FrequencyHz;                                                 // 0x00(0x04)
	float                                         Magnitude;                                                   // 0x04(0x04)
	float                                         NormalizedMagnitude;                                         // 0x08(0x04)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedAudioPlatformData 
{
	char                                          UnknownData0[0x20];                                          // 0x00(0x20)
};

// ScriptStruct Engine.SplineInstanceData
// Size: 0x180 (Inherited: 0xa8)
struct FSplineInstanceData : FSceneComponentInstanceData 
{
	char                                          bSplineHasBeenEdited : 0;                                    // 0xa8(0x01)
	char                                          UnknownDataA8[0x8];                                          // 0xa8(0x08)
	struct FNone                                  SplineCurves;                                                // 0xb0(0x68)
	struct FNone                                  SplineCurvesPreUCS;                                          // 0x118(0x68)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x68 (Inherited: 0x00)
struct FSplineCurves 
{
	struct FNone                                  Position;                                                    // 0x00(0x18)
	struct FNone                                  Rotation;                                                    // 0x18(0x18)
	struct FNone                                  Scale;                                                       // 0x30(0x18)
	struct FNone                                  ReparamTable;                                                // 0x48(0x18)
	struct FNone*                                 MetaData;                                                    // 0x60(0x08)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint 
{
	float                                         InputKey;                                                    // 0x00(0x04)
	struct FNone                                  Position;                                                    // 0x04(0x0c)
	struct FNone                                  ArriveTangent;                                               // 0x10(0x0c)
	struct FNone                                  LeaveTangent;                                                // 0x1c(0x0c)
	struct FNone                                  Rotation;                                                    // 0x28(0x0c)
	struct FNone                                  Scale;                                                       // 0x34(0x0c)
	char                                          Type;                                                        // 0x40(0x01)
	char                                          UnknownData41[0x3];                                          // 0x41(0x03)
};

// ScriptStruct Engine.SplineMeshInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FSplineMeshInstanceData : FSceneComponentInstanceData 
{
	struct FNone                                  StartPos;                                                    // 0xa8(0x0c)
	struct FNone                                  EndPos;                                                      // 0xb4(0x0c)
	struct FNone                                  StartTangent;                                                // 0xc0(0x0c)
	struct FNone                                  EndTangent;                                                  // 0xcc(0x0c)
};

// ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x00)
struct FSplineMeshParams 
{
	struct FNone                                  StartPos;                                                    // 0x00(0x0c)
	struct FNone                                  StartTangent;                                                // 0x0c(0x0c)
	struct FNone                                  StartScale;                                                  // 0x18(0x08)
	float                                         StartRoll;                                                   // 0x20(0x04)
	struct FNone                                  StartOffset;                                                 // 0x24(0x08)
	struct FNone                                  EndPos;                                                      // 0x2c(0x0c)
	struct FNone                                  EndScale;                                                    // 0x38(0x08)
	struct FNone                                  EndTangent;                                                  // 0x40(0x0c)
	float                                         EndRoll;                                                     // 0x4c(0x04)
	struct FNone                                  EndOffset;                                                   // 0x50(0x08)
};

// ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x00)
struct FMaterialRemapIndex 
{
	uint32_t                                      ImportVersionKey;                                            // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct TArray<None>                           MaterialRemap;                                               // 0x08(0x10)
};

// ScriptStruct Engine.StaticMaterial
// Size: 0x30 (Inherited: 0x00)
struct FStaticMaterial 
{
	struct FNone*                                 MaterialInterface;                                           // 0x00(0x08)
	struct FName                                  MaterialSlotName;                                            // 0x08(0x08)
	struct FName                                  ImportedMaterialSlotName;                                    // 0x10(0x08)
	struct FNone                                  UVChannelData;                                               // 0x18(0x14)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x00)
struct FAssetEditorOrbitCameraPosition 
{
	char                                          bIsSet : 0;                                                  // 0x00(0x01)
	char                                          UnknownData0[0x4];                                           // 0x00(0x04)
	struct FNone                                  CamOrbitPoint;                                               // 0x04(0x0c)
	struct FNone                                  CamOrbitZoom;                                                // 0x10(0x0c)
	struct FNone                                  CamOrbitRotation;                                            // 0x1c(0x0c)
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FMeshSectionInfoMap 
{
	struct TMap<None, None>                       Map;                                                         // 0x00(0x50)
};

// ScriptStruct Engine.MeshSectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FMeshSectionInfo 
{
	uint32_t                                      MaterialIndex;                                               // 0x00(0x04)
	char                                          bEnableCollision : 0;                                        // 0x04(0x01)
	char                                          UnknownData4[0x1];                                           // 0x04(0x01)
	char                                          bCastShadow : 0;                                             // 0x05(0x01)
	char                                          UnknownData5[0x1];                                           // 0x05(0x01)
	char                                          bForceOpaque : 0;                                            // 0x06(0x01)
	char                                          UnknownData6[0x1];                                           // 0x06(0x01)
	char                                          bHidden : 0;                                                 // 0x07(0x01)
	char                                          UnknownData7[0x1];                                           // 0x07(0x01)
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x70 (Inherited: 0x00)
struct FStaticMeshSourceModel 
{
	struct FNone                                  BuildSettings;                                               // 0x00(0x30)
	struct FNone                                  ReductionSettings;                                           // 0x30(0x24)
	float                                         LODDistance;                                                 // 0x54(0x04)
	struct FNone                                  ScreenSize;                                                  // 0x58(0x04)
	char                                          UnknownData5C[0x4];                                          // 0x5c(0x04)
	struct FString                                SourceImportFilename;                                        // 0x60(0x10)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c (Inherited: 0x00)
struct FStaticMeshOptimizationSettings 
{
	char                                          ReductionMethod;                                             // 0x00(0x01)
	char                                          UnknownData1[0x3];                                           // 0x01(0x03)
	float                                         NumOfTrianglesPercentage;                                    // 0x04(0x04)
	float                                         MaxDeviationPercentage;                                      // 0x08(0x04)
	float                                         WeldingThreshold;                                            // 0x0c(0x04)
	char                                          bRecalcNormals : 0;                                          // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	float                                         NormalsThreshold;                                            // 0x14(0x04)
	char                                          SilhouetteImportance;                                        // 0x18(0x01)
	char                                          TextureImportance;                                           // 0x19(0x01)
	char                                          ShadingImportance;                                           // 0x1a(0x01)
	char                                          UnknownData1B[0x1];                                          // 0x1b(0x01)
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x130 (Inherited: 0xf0)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData 
{
	struct FNone*                                 StaticMesh;                                                  // 0xf0(0x08)
	struct TArray<None>                           VertexColorLODs;                                             // 0xf8(0x10)
	struct TArray<None>                           CachedStaticLighting;                                        // 0x108(0x10)
	struct TArray<None>                           StreamingTextureData;                                        // 0x118(0x10)
	char                                          UnknownData128[0x8];                                         // 0x128(0x08)
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0x0c (Inherited: 0x00)
struct FStreamingTextureBuildInfo 
{
	uint32_t                                      PackedRelativeBox;                                           // 0x00(0x04)
	uint32_t                                      TextureLevelIndex;                                           // 0x04(0x04)
	float                                         TexelFactor;                                                 // 0x08(0x04)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x00)
struct FStaticMeshVertexColorLODData 
{
	struct TArray<None>                           PaintedVertices;                                             // 0x00(0x10)
	struct TArray<None>                           VertexBufferColors;                                          // 0x10(0x10)
	uint32_t                                      LODIndex;                                                    // 0x20(0x04)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct Engine.PaintedVertex
// Size: 0x20 (Inherited: 0x00)
struct FPaintedVertex 
{
	struct FNone                                  Position;                                                    // 0x00(0x0c)
	struct FNone                                  Color;                                                       // 0x0c(0x04)
	struct FNone                                  Normal;                                                      // 0x10(0x10)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0x90 (Inherited: 0x00)
struct FStaticMeshComponentLODInfo 
{
	char                                          UnknownData0[0x90];                                          // 0x00(0x90)
};

// ScriptStruct Engine.StaticParameterSet
// Size: 0x40 (Inherited: 0x00)
struct FStaticParameterSet 
{
	struct TArray<None>                           StaticSwitchParameters;                                      // 0x00(0x10)
	struct TArray<None>                           StaticComponentMaskParameters;                               // 0x10(0x10)
	struct TArray<None>                           TerrainLayerWeightParameters;                                // 0x20(0x10)
	struct TArray<None>                           MaterialLayersParameters;                                    // 0x30(0x10)
};

// ScriptStruct Engine.StaticParameterBase
// Size: 0x24 (Inherited: 0x00)
struct FStaticParameterBase 
{
	struct FNone                                  ParameterInfo;                                               // 0x00(0x10)
	char                                          bOverride : 0;                                               // 0x10(0x01)
	char                                          UnknownData10[0x4];                                          // 0x10(0x04)
	struct FNone                                  ExpressionGUID;                                              // 0x14(0x10)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 (Inherited: 0x24)
struct FStaticMaterialLayersParameter : FStaticParameterBase 
{
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
	struct FNone                                  Value;                                                       // 0x28(0x40)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x2c (Inherited: 0x24)
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase 
{
	uint32_t                                      WeightmapIndex;                                              // 0x24(0x04)
	char                                          bWeightBasedBlend : 0;                                       // 0x28(0x01)
	char                                          UnknownData28[0x4];                                          // 0x28(0x04)
};

// ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticComponentMaskParameter : FStaticParameterBase 
{
	char                                          R : 0;                                                       // 0x24(0x01)
	char                                          UnknownData24[0x1];                                          // 0x24(0x01)
	char                                          G : 0;                                                       // 0x25(0x01)
	char                                          UnknownData25[0x1];                                          // 0x25(0x01)
	char                                          B : 0;                                                       // 0x26(0x01)
	char                                          UnknownData26[0x1];                                          // 0x26(0x01)
	char                                          A : 0;                                                       // 0x27(0x01)
	char                                          UnknownData27[0x1];                                          // 0x27(0x01)
};

// ScriptStruct Engine.StaticSwitchParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticSwitchParameter : FStaticParameterBase 
{
	char                                          Value : 0;                                                   // 0x24(0x01)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct Engine.EquirectProps
// Size: 0x48 (Inherited: 0x00)
struct FEquirectProps 
{
	struct FNone                                  LeftUVRect;                                                  // 0x00(0x14)
	struct FNone                                  RightUVRect;                                                 // 0x14(0x14)
	struct FNone                                  LeftScale;                                                   // 0x28(0x08)
	struct FNone                                  RightScale;                                                  // 0x30(0x08)
	struct FNone                                  LeftBias;                                                    // 0x38(0x08)
	struct FNone                                  RightBias;                                                   // 0x40(0x08)
};

// ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : FIndexedCurve 
{
	struct FString                                DefaultValue;                                                // 0x68(0x10)
	struct TArray<None>                           Keys;                                                        // 0x78(0x10)
};

// ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x00)
struct FStringCurveKey 
{
	float                                         Time;                                                        // 0x00(0x04)
	char                                          UnknownData4[0x4];                                           // 0x04(0x04)
	struct FString                                Value;                                                       // 0x08(0x10)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x8c (Inherited: 0x00)
struct FSubsurfaceProfileStruct 
{
	struct FNone                                  SurfaceAlbedo;                                               // 0x00(0x10)
	struct FNone                                  MeanFreePathColor;                                           // 0x10(0x10)
	float                                         MeanFreePathDistance;                                        // 0x20(0x04)
	float                                         WorldUnitScale;                                              // 0x24(0x04)
	char                                          bEnableBurley : 0;                                           // 0x28(0x01)
	char                                          UnknownData28[0x4];                                          // 0x28(0x04)
	float                                         ScatterRadius;                                               // 0x2c(0x04)
	struct FNone                                  SubsurfaceColor;                                             // 0x30(0x10)
	struct FNone                                  FalloffColor;                                                // 0x40(0x10)
	struct FNone                                  BoundaryColorBleed;                                          // 0x50(0x10)
	float                                         ExtinctionScale;                                             // 0x60(0x04)
	float                                         NormalScale;                                                 // 0x64(0x04)
	float                                         ScatteringDistribution;                                      // 0x68(0x04)
	float                                         IOR;                                                         // 0x6c(0x04)
	float                                         Roughness0;                                                  // 0x70(0x04)
	float                                         Roughness1;                                                  // 0x74(0x04)
	float                                         LobeMix;                                                     // 0x78(0x04)
	struct FNone                                  TransmissionTintColor;                                       // 0x7c(0x10)
};

// ScriptStruct Engine.TextureFormatSettings
// Size: 0x02 (Inherited: 0x00)
struct FTextureFormatSettings 
{
	char                                          CompressionSettings;                                         // 0x00(0x01)
	char                                          CompressionNoAlpha : 0;                                      // 0x01(0x01)
	char                                          CompressionNone : 0;                                         // 0x01(0x01)
	char                                          CompressionYCoCg : 0;                                        // 0x01(0x01)
	char                                          SRGB : 0;                                                    // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
};

// ScriptStruct Engine.TexturePlatformData
// Size: 0x30 (Inherited: 0x00)
struct FTexturePlatformData 
{
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
};

// ScriptStruct Engine.TextureSource
// Size: 0x30 (Inherited: 0x00)
struct FTextureSource 
{
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
};

// ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x00)
struct FTextureSourceBlock 
{
	uint32_t                                      BlockX;                                                      // 0x00(0x04)
	uint32_t                                      BlockY;                                                      // 0x04(0x04)
	uint32_t                                      SizeX;                                                       // 0x08(0x04)
	uint32_t                                      SizeY;                                                       // 0x0c(0x04)
	uint32_t                                      NumSlices;                                                   // 0x10(0x04)
	uint32_t                                      NumMips;                                                     // 0x14(0x04)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x54 (Inherited: 0x00)
struct FTextureLODGroup 
{
	char                                          Group;                                                       // 0x00(0x01)
	char                                          UnknownData1[0xb];                                           // 0x01(0x0b)
	uint32_t                                      LODBias;                                                     // 0x0c(0x04)
	uint32_t                                      LODBias_Smaller;                                             // 0x10(0x04)
	uint32_t                                      LODBias_Smallest;                                            // 0x14(0x04)
	char                                          UnknownData18[0x4];                                          // 0x18(0x04)
	uint32_t                                      NumStreamedMips;                                             // 0x1c(0x04)
	char                                          MipGenSettings;                                              // 0x20(0x01)
	char                                          UnknownData21[0x3];                                          // 0x21(0x03)
	uint32_t                                      MinLODSize;                                                  // 0x24(0x04)
	uint32_t                                      MaxLODSize;                                                  // 0x28(0x04)
	uint32_t                                      MaxLODSize_Smaller;                                          // 0x2c(0x04)
	uint32_t                                      MaxLODSize_Smallest;                                         // 0x30(0x04)
	uint32_t                                      OptionalLODBias;                                             // 0x34(0x04)
	uint32_t                                      OptionalMaxLODSize;                                          // 0x38(0x04)
	char                                          UnknownData3C[0x4];                                          // 0x3c(0x04)
	struct FName                                  MinMagFilter;                                                // 0x40(0x08)
	struct FName                                  MipFilter;                                                   // 0x48(0x08)
	enum class None                               MipLoadOptions;                                              // 0x50(0x01)
	char                                          DuplicateNonOptionalMips : 0;                                // 0x51(0x01)
	char                                          UnknownData51[0x1];                                          // 0x51(0x01)
	char                                          bNeedsPrimaryStreaming : 0;                                  // 0x52(0x01)
	char                                          UnknownData52[0x2];                                          // 0x52(0x02)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x30 (Inherited: 0x00)
struct FStreamingRenderAssetPrimitiveInfo 
{
	struct FNone*                                 RenderAsset;                                                 // 0x00(0x08)
	struct FNone                                  Bounds;                                                      // 0x08(0x1c)
	float                                         TexelFactor;                                                 // 0x24(0x04)
	uint32_t                                      PackedRelativeBox;                                           // 0x28(0x04)
	char                                          bAllowInvalidTexelFactorWhenUnregistered : 0;                // 0x2c(0x01)
	char                                          UnknownData2C[0x4];                                          // 0x2c(0x04)
};

// ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x00)
struct FTTTrackBase 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FName                                  TrackName;                                                   // 0x08(0x08)
	char                                          bIsExternalCurve : 0;                                        // 0x10(0x01)
	char                                          UnknownData10[0x8];                                          // 0x10(0x08)
};

// ScriptStruct Engine.TTPropertyTrack
// Size: 0x20 (Inherited: 0x18)
struct FTTPropertyTrack : FTTTrackBase 
{
	struct FName                                  PropertyName;                                                // 0x18(0x08)
};

// ScriptStruct Engine.TTLinearColorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTLinearColorTrack : FTTPropertyTrack 
{
	struct FNone*                                 CurveLinearColor;                                            // 0x20(0x08)
};

// ScriptStruct Engine.TTVectorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTVectorTrack : FTTPropertyTrack 
{
	struct FNone*                                 CurveVector;                                                 // 0x20(0x08)
};

// ScriptStruct Engine.TTFloatTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTFloatTrack : FTTPropertyTrack 
{
	struct FNone*                                 CurveFloat;                                                  // 0x20(0x08)
};

// ScriptStruct Engine.TTEventTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTEventTrack : FTTTrackBase 
{
	struct FName                                  FunctionName;                                                // 0x18(0x08)
	struct FNone*                                 CurveKeys;                                                   // 0x20(0x08)
};

// ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x00)
struct FTimeStretchCurveInstance 
{
	char                                          bHasValidData : 0;                                           // 0x00(0x01)
	char                                          UnknownData0[0x30];                                          // 0x00(0x30)
};

// ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x00)
struct FTimeStretchCurve 
{
	float                                         SamplingRate;                                                // 0x00(0x04)
	float                                         CurveValueMinPrecision;                                      // 0x04(0x04)
	struct TArray<None>                           Markers;                                                     // 0x08(0x10)
	float                                         Sum_dT_i_by_C_i[0x3];                                        // 0x18(0x0c)
	char                                          UnknownData24[0x4];                                          // 0x24(0x04)
};

// ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x00)
struct FTimeStretchCurveMarker 
{
	float                                         Time[0x3];                                                   // 0x00(0x0c)
	float                                         ALPHA;                                                       // 0x0c(0x04)
};

// ScriptStruct Engine.TouchInputControl
// Size: 0x68 (Inherited: 0x00)
struct FTouchInputControl 
{
	struct FNone*                                 Image1;                                                      // 0x00(0x08)
	struct FNone*                                 Image2;                                                      // 0x08(0x08)
	struct FNone                                  Center;                                                      // 0x10(0x08)
	struct FNone                                  VisualSize;                                                  // 0x18(0x08)
	struct FNone                                  ThumbSize;                                                   // 0x20(0x08)
	struct FNone                                  InteractionSize;                                             // 0x28(0x08)
	struct FNone                                  InputScale;                                                  // 0x30(0x08)
	struct FNone                                  MainInputKey;                                                // 0x38(0x18)
	struct FNone                                  AltInputKey;                                                 // 0x50(0x18)
};

// ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x00)
struct FHardwareCursorReference 
{
	struct FName                                  CursorPath;                                                  // 0x00(0x08)
	struct FNone                                  HotSpot;                                                     // 0x08(0x08)
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0x0c (Inherited: 0x00)
struct FVirtualTextureBuildSettings 
{
	uint32_t                                      TileSize;                                                    // 0x00(0x04)
	uint32_t                                      TileBorderSize;                                              // 0x04(0x04)
	char                                          bEnableCompressCrunch : 0;                                   // 0x08(0x01)
	char                                          UnknownData8[0x1];                                           // 0x08(0x01)
	char                                          bEnableCompressZlib : 0;                                     // 0x09(0x01)
	char                                          UnknownData9[0x3];                                           // 0x09(0x03)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x20 (Inherited: 0x00)
struct FVirtualTextureSpacePoolConfig 
{
	uint32_t                                      MinTileSize;                                                 // 0x00(0x04)
	uint32_t                                      MaxTileSize;                                                 // 0x04(0x04)
	struct TArray<None>                           Formats;                                                     // 0x08(0x10)
	uint32_t                                      SizeInMegabyte;                                              // 0x18(0x04)
	char                                          bAllowSizeScale : 0;                                         // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x00)
struct FVoiceSettings 
{
	struct FNone*                                 ComponentToAttachTo;                                         // 0x00(0x08)
	struct FNone*                                 AttenuationSettings;                                         // 0x08(0x08)
	struct FNone*                                 SourceEffectChain;                                           // 0x10(0x08)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x48 (Inherited: 0x00)
struct FStreamingLevelsToConsider 
{
	struct TArray<None>                           StreamingLevels;                                             // 0x00(0x10)
	char                                          UnknownData10[0x38];                                         // 0x10(0x38)
};

// ScriptStruct Engine.LevelStreamingWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLevelStreamingWrapper 
{
	struct FNone*                                 StreamingLevel;                                              // 0x00(0x08)
};

// ScriptStruct Engine.LevelCollection
// Size: 0x88 (Inherited: 0x00)
struct FLevelCollection 
{
	char                                          UnknownData0[0x8];                                           // 0x00(0x08)
	struct FNone*                                 GameState;                                                   // 0x08(0x08)
	struct FNone*                                 NetDriver;                                                   // 0x10(0x08)
	struct FNone*                                 DemoNetDriver;                                               // 0x18(0x08)
	struct FNone*                                 PersistentLevel;                                             // 0x20(0x08)
	struct TSet<None>                             Levels;                                                      // 0x28(0x50)
	struct TArray<None>                           CachedLevels;                                                // 0x78(0x10)
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEndPhysicsTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FStartPhysicsTickFunction : FTickFunction 
{
	char                                          UnknownData28[0x8];                                          // 0x28(0x08)
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x00)
struct FLevelViewportInfo 
{
	struct FNone                                  CamPosition;                                                 // 0x00(0x0c)
	struct FNone                                  CamRotation;                                                 // 0x0c(0x0c)
	float                                         CamOrthoZoom;                                                // 0x18(0x04)
	char                                          CamUpdated : 0;                                              // 0x1c(0x01)
	char                                          UnknownData1C[0x4];                                          // 0x1c(0x04)
};

// ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x00)
struct FWorldPSCPool 
{
	struct TMap<None, None>                       WorldParticleSystemPools;                                    // 0x00(0x50)
	char                                          UnknownData50[0x8];                                          // 0x50(0x08)
};

// ScriptStruct Engine.PSCPool
// Size: 0x38 (Inherited: 0x00)
struct FPSCPool 
{
	struct TArray<None>                           FreeElements;                                                // 0x00(0x10)
	struct TArray<None>                           InUseComponents_Auto;                                        // 0x10(0x10)
	struct TArray<None>                           InUseComponents_Manual;                                      // 0x20(0x10)
	char                                          UnknownData30[0x8];                                          // 0x30(0x08)
};

// ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x00)
struct FPSCPoolElem 
{
	struct FNone*                                 PSC;                                                         // 0x00(0x08)
	char                                          UnknownData8[0x8];                                           // 0x08(0x08)
};

// ScriptStruct Engine.BroadphaseSettings
// Size: 0x40 (Inherited: 0x00)
struct FBroadphaseSettings 
{
	char                                          bUseMBPOnClient : 0;                                         // 0x00(0x01)
	char                                          UnknownData0[0x1];                                           // 0x00(0x01)
	char                                          bUseMBPOnServer : 0;                                         // 0x01(0x01)
	char                                          UnknownData1[0x1];                                           // 0x01(0x01)
	char                                          bUseMBPOuterBounds : 0;                                      // 0x02(0x01)
	char                                          UnknownData2[0x2];                                           // 0x02(0x02)
	struct FNone                                  MBPBounds;                                                   // 0x04(0x1c)
	struct FNone                                  MBPOuterBounds;                                              // 0x20(0x1c)
	uint32_t                                      MBPNumSubdivs;                                               // 0x3c(0x04)
};

// ScriptStruct Engine.TileLODEntry
// Size: 0x13c (Inherited: 0x00)
struct FTileLODEntry 
{
	uint32_t                                      LODIndex;                                                    // 0x00(0x04)
	uint32_t                                      Distance;                                                    // 0x04(0x04)
	struct FNone                                  SimplificationDetails;                                       // 0x08(0x134)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x168 (Inherited: 0x00)
struct FHierarchicalSimplification 
{
	float                                         TransitionScreenSize;                                        // 0x00(0x04)
	float                                         OverrideDrawDistance;                                        // 0x04(0x04)
	char                                          bUseOverrideDrawDistance : 0;                                // 0x08(0x01)
	char                                          bAllowSpecificExclusion : 0;                                 // 0x08(0x01)
	char                                          bSimplifyMesh : 0;                                           // 0x08(0x01)
	char                                          bOnlyGenerateClustersForVolumes : 0;                         // 0x08(0x01)
	char                                          bReusePreviousLevelClusters : 0;                             // 0x08(0x01)
	char                                          UnknownData8[0x4];                                           // 0x08(0x04)
	struct FNone                                  ProxySetting;                                                // 0x0c(0xac)
	struct FNone                                  MergeSetting;                                                // 0xb8(0xa4)
	float                                         DesiredBoundRadius;                                          // 0x15c(0x04)
	float                                         DesiredFillingPercentage;                                    // 0x160(0x04)
	uint32_t                                      MinNumberOfActorsToBuild;                                    // 0x164(0x04)
};

// ScriptStruct Engine.NetViewer
// Size: 0x30 (Inherited: 0x00)
struct FNetViewer 
{
	struct FNone*                                 Connection;                                                  // 0x00(0x08)
	struct FNone*                                 InViewer;                                                    // 0x08(0x08)
	struct FNone*                                 ViewTarget;                                                  // 0x10(0x08)
	struct FNone                                  ViewLocation;                                                // 0x18(0x0c)
	struct FNone                                  ViewDir;                                                     // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x4c (Inherited: 0x00)
struct FLightmassWorldInfoSettings 
{
	float                                         StaticLightingLevelScale;                                    // 0x00(0x04)
	uint32_t                                      NumIndirectLightingBounces;                                  // 0x04(0x04)
	uint32_t                                      NumSkyLightingBounces;                                       // 0x08(0x04)
	float                                         IndirectLightingQuality;                                     // 0x0c(0x04)
	float                                         IndirectLightingSmoothness;                                  // 0x10(0x04)
	struct FNone                                  EnvironmentColor;                                            // 0x14(0x04)
	float                                         EnvironmentIntensity;                                        // 0x18(0x04)
	float                                         EmissiveBoost;                                               // 0x1c(0x04)
	float                                         DiffuseBoost;                                                // 0x20(0x04)
	char                                          VolumeLightingMethod;                                        // 0x24(0x01)
	char                                          bUseAmbientOcclusion : 0;                                    // 0x25(0x01)
	char                                          bGenerateAmbientOcclusionMaterialMask : 0;                   // 0x25(0x01)
	char                                          bVisualizeMaterialDiffuse : 0;                               // 0x25(0x01)
	char                                          bVisualizeAmbientOcclusion : 0;                              // 0x25(0x01)
	char                                          bCompressLightmaps : 0;                                      // 0x25(0x01)
	char                                          UnknownData25[0x3];                                          // 0x25(0x03)
	float                                         VolumetricLightmapDetailCellSize;                            // 0x28(0x04)
	float                                         VolumetricLightmapMaximumBrickMemoryMb;                      // 0x2c(0x04)
	float                                         VolumetricLightmapSphericalHarmonicSmoothing;                // 0x30(0x04)
	float                                         VolumeLightSamplePlacementScale;                             // 0x34(0x04)
	float                                         DirectIlluminationOcclusionFraction;                         // 0x38(0x04)
	float                                         IndirectIlluminationOcclusionFraction;                       // 0x3c(0x04)
	float                                         OcclusionExponent;                                           // 0x40(0x04)
	float                                         FullyOccludedSamplesFraction;                                // 0x44(0x04)
	float                                         MaxOcclusionDistance;                                        // 0x48(0x04)
};

