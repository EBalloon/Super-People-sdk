// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t {
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t {
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t {
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t {
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4,
};

// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t {
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t {
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2,
};

// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t {
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3,
};

// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t {
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13,
};

// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t {
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7,
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t {
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6,
};

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t {
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3,
};

// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t {
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3,
};

// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t {
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2,
};

// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t {
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3,
};

// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t {
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4,
};

// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5,
};

// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t {
	Invalid = 255,
	None = 0,
	SkinOnTheFly = 1,
	PreSkin = 2,
	ENDISkeletalMesh_MAX = 256,
};

// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t {
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t {
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4,
};

// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t {
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2,
};

// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t {
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3,
};

// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t {
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5,
};

// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t {
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t {
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4,
};

// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t {
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4,
};

// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t {
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t {
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t {
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t {
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t {
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t {
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3,
};

// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t {
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t {
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t {
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5,
};

// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t {
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5,
};

// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t {
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3,
};

// Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t {
	Input = 0,
	Attributes = 1,
	Output = 2,
	Local = 3,
	User = 4,
	Engine = 5,
	Owner = 6,
	System = 7,
	Emitter = 8,
	Particles = 9,
	ScriptTransient = 10,
	StaticSwitch = 11,
	None = 12,
	Num = 13,
	ENiagaraParameterPanelCategory_MAX = 14,
};

// Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t {
	Input = 0,
	Output = 1,
	Local = 2,
	InputOutput = 3,
	InitialValueInput = 4,
	None = 5,
	Num = 6,
	ENiagaraScriptParameterUsage_MAX = 7,
};

// Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t {
	Input = 0,
	User = 1,
	Engine = 2,
	Owner = 3,
	System = 4,
	Emitter = 5,
	Particles = 6,
	ScriptPersistent = 7,
	ScriptTransient = 8,
	Local = 9,
	Custom = 10,
	DISPLAY_ONLY_StaticSwitch = 11,
	Output = 12,
	None = 13,
	Num = 14,
	ENiagaraParameterScope_MAX = 15,
};

// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t {
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6,
};

// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t {
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t {
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4,
};

// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t {
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4,
};

// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack {

public:

	struct FNiagaraVariable Parameter; // 0x68 (40)
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection {

public:

	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xE0 (4)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xE4 (4)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xE8 (4)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xEC (1)
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack {

public:

	int32_t ChannelsUsed; // 0x90 (4)
};

// Class Niagara.NiagaraActor
class ANiagaraActor : public UActor {

public:

	struct UNiagaraComponent NiagaraComponent; // 0x318 (8)
	char bDestroyOnSystemFinish : 0; // 0x320 (1)

	void SetDestroyOnSystemFinish(char bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E8C0>
	void OnNiagaraSystemFinished(struct UNiagaraComponent FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished(Final|Native|Private) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E450>
};

// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent {

public:

	struct UNiagaraSystem Asset; // 0x4B0 (8)
	enum class ENiagaraTickBehavior TickBehavior; // 0x4B8 (1)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x4C0 (264)
	char bForceSolo : 0; // 0x5C8 (1)
	char bAutoDestroy : 0; // 0x5F4 (1)
	char bRenderingEnabled : 0; // 0x5F4 (1)
	char bAutoManageAttachment : 0; // 0x5F4 (1)
	char bAutoAttachWeldSimulatedBodies : 0; // 0x5F4 (1)
	float MaxTimeBeforeForceUpdateTransform; // 0x5F8 (4)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x600 (16)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x610 (8)
	struct FName AutoAttachSocketName; // 0x618 (8)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x620 (1)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x621 (1)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x622 (1)

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151FCF0>
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151FC20>
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151FB60>
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151FA90>
	void SetVariableObject(struct FName InVariableName, struct Object Object); // Function Niagara.NiagaraComponent.SetVariableObject(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F9D0>
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface Object); // Function Niagara.NiagaraComponent.SetVariableMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F910>
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F840>
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F780>
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F6B0>
	void SetVariableBool(struct FName InVariableName, char InValue); // Function Niagara.NiagaraComponent.SetVariableBool(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F5E0>
	void SetVariableActor(struct FName InVariableName, struct UActor Actor); // Function Niagara.NiagaraComponent.SetVariableActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F520>
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F4A0>
	void SetRenderingEnabled(char bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F410>
	void SetPreviewLODDistance(char bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F340>
	void SetPaused(char bInPaused); // Function Niagara.NiagaraComponent.SetPaused(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F2B0>
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F1B0>
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151F0C0>
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EFE0>
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EEF0>
	void SetNiagaraVariableObject(struct FString InVariableName, struct Object Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EA60>
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EE00>
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151ED20>
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EC30>
	void SetNiagaraVariableBool(struct FString InVariableName, char InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EB40>
	void SetNiagaraVariableActor(struct FString InVariableName, struct UActor Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151EA60>
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E9E0>
	void SetForceSolo(char bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E950>
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E840>
	void SetCanRenderWhileSeeking(char bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E7B0>
	void SetAutoDestroy(char bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E720>
	void SetAsset(struct UNiagaraSystem InAsset); // Function Niagara.NiagaraComponent.SetAsset(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E6A0>
	void SetAllowScalability(char bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E610>
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E590>
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E510>
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E4F0>
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E4D0>
	char IsPaused(); // Function Niagara.NiagaraComponent.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E420>
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E3F0>
	char GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E3D0>
	int32_t GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E3B0>
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E110>
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E260>
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151E020>
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DFF0>
	char GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DFC0>
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DF90>
	struct UNiagaraDataInterface GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DEE0>
	struct UNiagaraSystem GetAsset(); // Function Niagara.NiagaraComponent.GetAsset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DEC0>
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DE90>
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DDD0>
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x151DD00>
};

// Class Niagara.NiagaraComponentPool
class UNiagaraComponentPool : public Object {

public:

	struct TMap<struct UNiagaraSystem, struct FNCPool> WorldParticleSystemPools; // 0x28 (80)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface {

public:

	struct USoundSubmix Submix; // 0x30 (8)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface {

public:

	struct USoundSubmix Submix; // 0x30 (8)
	int32_t Resolution; // 0x38 (4)
	float ScopeInMilliseconds; // 0x3C (4)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix {

public:

	int32_t Resolution; // 0x38 (4)
	float MinimumFrequency; // 0x3C (4)
	float MaximumFrequency; // 0x40 (4)
	float NoiseFloorDb; // 0x44 (4)
};

// Class Niagara.NiagaraDataInterfaceCamera
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface {

public:

	int32_t PlayerControllerIndex; // 0x30 (4)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface {

public:

	struct TArray<float> ShaderLUT; // 0x30 (16)
	float LUTMinTime; // 0x40 (4)
	float LUTMaxTime; // 0x44 (4)
	float LUTInvTimeRange; // 0x48 (4)
	float LUTNumSamplesMinusOne; // 0x4C (4)
	char bUseLUT : 0; // 0x50 (1)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase {

public:

	struct FRichCurve RedCurve; // 0x58 (128)
	struct FRichCurve GreenCurve; // 0xD8 (128)
	struct FRichCurve BlueCurve; // 0x158 (128)
	struct FRichCurve AlphaCurve; // 0x1D8 (128)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface {

public:

	uint32_t Seed; // 0x30 (4)
};

// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase {

public:

	struct FRichCurve Curve; // 0x58 (128)
};

// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface {

public:

	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x30 (40)
};

// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface {

public:

	struct TSet<int32_t> OutputShaderStages; // 0x30 (80)
	struct TSet<int32_t> IterationShaderStages; // 0x80 (80)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase {

public:

	int32_t NumCellsX; // 0xD0 (4)
	int32_t NumCellsY; // 0xD4 (4)
	int32_t NumCellsMaxAxis; // 0xD8 (4)
	int32_t NumAttributes; // 0xDC (4)
	char SetGridFromMaxAxis : 0; // 0xE0 (1)
	struct FVector2D WorldBBoxSize; // 0xE4 (8)
};

// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase {

public:

	struct FIntVector NumVoxels; // 0xD0 (12)
	float VoxelSize; // 0xDC (4)
	char SetGridFromVoxelSize : 0; // 0xE0 (1)
	struct FVector WorldBBoxSize; // 0xE4 (12)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D {

public:

	uint32_t MaxNeighborsPerVoxel; // 0xF0 (4)
};

// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface {

public:

	struct FString EmitterName; // 0x30 (16)
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface {

public:

	struct UActor Source; // 0x30 (8)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x38 (40)
	struct USkeletalMeshComponent SourceComponent; // 0x60 (8)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x68 (1)
	struct TArray<struct FName> SamplingRegions; // 0x70 (16)
	int32_t WholeMeshLOD; // 0x80 (4)
	struct TArray<struct FName> FilteredBones; // 0x88 (16)
	struct TArray<struct FName> FilteredSockets; // 0x98 (16)
	struct FName ExcludeBoneName; // 0xA8 (8)
	char bExcludeBone : 0; // 0xB0 (1)
};

// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface {

public:

	struct UActor Source; // 0x30 (8)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface {

public:

	struct UStaticMesh DefaultMesh; // 0x30 (8)
	struct UActor Source; // 0x38 (8)
	struct UStaticMeshComponent SourceComponent; // 0x40 (8)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x48 (16)
};

// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface {

public:

	struct UTexture Texture; // 0x30 (8)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase {

public:

	struct FRichCurve XCurve; // 0x58 (128)
	struct FRichCurve YCurve; // 0xD8 (128)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase {

public:

	struct FRichCurve XCurve; // 0x58 (128)
	struct FRichCurve YCurve; // 0xD8 (128)
	struct FRichCurve ZCurve; // 0x158 (128)
	struct FRichCurve WCurve; // 0x1D8 (128)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase {

public:

	struct FRichCurve XCurve; // 0x58 (128)
	struct FRichCurve YCurve; // 0xD8 (128)
	struct FRichCurve ZCurve; // 0x158 (128)
};

// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface {

public:

	struct UVectorField Field; // 0x30 (8)
	char bTileX : 0; // 0x38 (1)
	char bTileY : 0; // 0x39 (1)
	char bTileZ : 0; // 0x3A (1)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface {

public:

	struct UVolumeTexture Texture; // 0x30 (8)
};

// Class Niagara.NiagaraEffectType
class UNiagaraEffectType : public Object {

public:

	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28 (4)
	enum class ENiagaraCullReaction CullReaction; // 0x2C (4)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x30 (16)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x40 (16)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x50 (16)
};

// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public Object {

public:

	char bLocalSpace : 0; // 0x28 (1)
	char bDeterminism : 0; // 0x29 (1)
	int32_t RandomSeed; // 0x2C (4)
	enum class EParticleAllocationMode AllocationMode; // 0x30 (1)
	int32_t PreAllocationCount; // 0x34 (4)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38 (40)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60 (40)
	struct FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x88 (40)
	struct FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xB0 (40)
	enum class ENiagaraSimTarget SimTarget; // 0xD8 (1)
	struct FBox FixedBounds; // 0xDC (28)
	int32_t MinDetailLevel; // 0xF8 (4)
	int32_t MaxDetailLevel; // 0xFC (4)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x100 (20)
	struct FNiagaraPlatformSet Platforms; // 0x118 (32)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x138 (16)
	char bInterpolatedSpawning : 0; // 0x148 (1)
	char bFixedBounds : 0; // 0x148 (1)
	char bUseMinDetailLevel : 0; // 0x148 (1)
	char bUseMaxDetailLevel : 0; // 0x148 (1)
	char bOverrideGlobalSpawnCountScale : 0; // 0x148 (1)
	char bRequiresPersistentIDs : 0; // 0x148 (1)
	float MaxDeltaTimePerTick; // 0x14C (4)
	uint32_t DefaultShaderStageIndex; // 0x150 (4)
	uint32_t MaxUpdateIterations; // 0x154 (4)
	struct TSet<uint32_t> SpawnStages; // 0x158 (80)
	char bSimulationStagesEnabled : 0; // 0x1A8 (1)
	char bDeprecatedShaderStagesEnabled : 0; // 0x1A8 (1)
	char bLimitDeltaTime : 0; // 0x1A8 (1)
	struct FString UniqueEmitterName; // 0x1B0 (16)
	struct TArray<struct UNiagaraRendererProperties> RendererProperties; // 0x1C0 (16)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1D0 (16)
	struct TArray<struct UNiagaraSimulationStageBase> SimulationStages; // 0x1E0 (16)
	struct UNiagaraScript GPUComputeScript; // 0x1F0 (8)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x1F8 (16)
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction {

public:

	uint32_t NumParticles; // 0x28 (4)
};

// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable {

public:

	int32_t SortOrderHint; // 0x28 (4)
	char bIsEnabled : 0; // 0x2C (1)
	char bMotionBlurEnabled : 0; // 0x2D (1)
};

// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties {

public:

	char bUseInverseSquaredFalloff : 0; // 0x50 (1)
	char bAffectsTranslucency : 0; // 0x50 (1)
	char bOverrideRenderingEnabled : 0; // 0x50 (1)
	float RadiusScale; // 0x54 (4)
	struct FVector ColorAdd; // 0x58 (12)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x68 (120)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xE0 (120)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x158 (120)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1D0 (120)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x248 (120)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x2C0 (120)
};

// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties {

public:

	struct UStaticMesh ParticleMesh; // 0x50 (8)
	enum class ENiagaraSortMode SortMode; // 0x58 (1)
	char bOverrideMaterials : 0; // 0x5C (1)
	char bSortOnlyWhenTranslucent : 0; // 0x5C (1)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x60 (16)
	struct FVector2D SubImageSize; // 0x70 (8)
	char bSubImageBlend : 0; // 0x78 (1)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x7C (1)
	char bLockedAxisEnable : 0; // 0x80 (1)
	struct FVector LockedAxis; // 0x84 (12)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x90 (1)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x98 (120)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x110 (120)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x188 (120)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x200 (120)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x278 (120)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2F0 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x368 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x3E0 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4D0 (120)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x548 (120)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x5C0 (120)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x638 (120)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x6B0 (120)
};

// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public Object {

public:

	struct UNiagaraParameterCollection Collection; // 0x28 (8)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30 (16)
	struct FNiagaraParameterStore ParameterStorage; // 0x40 (184)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B7B0>
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B6B0>
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B5D0>
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B3D0>
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B2F0>
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B200>
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B110>
	void SetBoolParameter(struct FString InVariableName, char InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152B020>
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152AC30>
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152AB70>
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152AAB0>
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152A9F0>
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152A880>
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152A7D0>
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152A710>
	char GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x152A660>
};

// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public Object {

public:

	struct FName Namespace; // 0x28 (8)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30 (16)
	struct UNiagaraParameterCollectionInstance DefaultInstance; // 0x40 (8)
	struct FGuid CompileId; // 0x48 (16)
};

// Class Niagara.NiagaraPrecompileContainer
class UNiagaraPrecompileContainer : public Object {

public:

	struct TArray<struct UNiagaraScript> Scripts; // 0x28 (16)
	struct UNiagaraSystem System; // 0x38 (8)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis {

public:

	struct FName Param; // 0x28 (8)
	int32_t Count; // 0x30 (4)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase {

public:

	int32_t Min; // 0x38 (4)
	int32_t MAX; // 0x3C (4)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase {

public:

	float Min; // 0x38 (4)
	float MAX; // 0x3C (4)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase {

public:

	struct FVector2D Min; // 0x38 (8)
	struct FVector2D MAX; // 0x40 (8)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase {

public:

	struct FVector Min; // 0x38 (12)
	struct FVector MAX; // 0x44 (12)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase {

public:

	struct FVector4 Min; // 0x40 (16)
	struct FVector4 MAX; // 0x50 (16)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase {

public:

	struct FLinearColor Min; // 0x38 (16)
	struct FLinearColor MAX; // 0x48 (16)
};

// Class Niagara.NiagaraPreviewGrid
class ANiagaraPreviewGrid : public UActor {

public:

	struct UNiagaraSystem System; // 0x318 (8)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x320 (1)
	struct UNiagaraPreviewAxis PreviewAxisX; // 0x328 (8)
	struct UNiagaraPreviewAxis PreviewAxisY; // 0x330 (8)
	struct UClass* PreviewClass; // 0x338 (8)
	float SpacingX; // 0x340 (4)
	float SpacingY; // 0x344 (4)
	int32_t NumX; // 0x348 (4)
	int32_t NumY; // 0x34C (4)
	struct TArray<struct UChildActorComponent> PreviewComponents; // 0x350 (16)

	void SetPaused(char bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1531990>
	void GetPreviews(struct TArray<struct UNiagaraComponent>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1531890>
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1531870>
	void ActivatePreviews(char bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1531660>
};

// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties {

public:

	struct UMaterialInterface Material; // 0x50 (8)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58 (40)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0x80 (1)
	float UV0TilingDistance; // 0x84 (4)
	struct FVector2D UV0Scale; // 0x88 (8)
	struct FVector2D UV0Offset; // 0x90 (8)
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0x98 (1)
	float UV1TilingDistance; // 0x9C (4)
	struct FVector2D UV1Scale; // 0xA0 (8)
	struct FVector2D UV1Offset; // 0xA8 (8)
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xB0 (1)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xB1 (1)
	float CurveTension; // 0xB4 (4)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xB8 (1)
	int32_t TessellationFactor; // 0xBC (4)
	char bUseConstantFactor : 0; // 0xC0 (1)
	float TessellationAngle; // 0xC4 (4)
	char bScreenSpaceTessellation : 0; // 0xC8 (1)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xD0 (120)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x148 (120)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1C0 (120)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x238 (120)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x2B0 (120)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x328 (120)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x3A0 (120)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x418 (120)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x490 (120)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x508 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x580 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x5F8 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x670 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6E8 (120)
};

// Class Niagara.NiagaraScript
class UNiagaraScript : public Object {

public:

	enum class ENiagaraScriptUsage Usage; // 0x28 (1)
	int32_t UsageIndex; // 0x2C (4)
	struct FGuid UsageId; // 0x30 (16)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40 (184)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xF8 (216)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1D0 (16)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1E0 (72)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x3D8 (296)
	struct TArray<struct UNiagaraParameterCollection> CachedParameterCollectionReferences; // 0x500 (16)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x510 (16)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete(Final|Native|Public) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1531970>
};

// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings {

public:

	struct TArray<struct FSoftObjectPath> AdditionalParameterTypes; // 0x38 (16)
	struct TArray<struct FSoftObjectPath> AdditionalPayloadTypes; // 0x48 (16)
	struct TArray<struct FSoftObjectPath> AdditionalParameterEnums; // 0x58 (16)
	struct FSoftObjectPath DefaultEffectType; // 0x68 (24)
	struct TArray<struct FText> QualityLevels; // 0x80 (16)
	struct UNiagaraEffectType DefaultEffectTypePtr; // 0x90 (8)
};

// Class Niagara.NiagaraSimulationStageBase
class UNiagaraSimulationStageBase : public UNiagaraMergeable {

public:

	struct UNiagaraScript Script; // 0x28 (8)
	struct FName SimulationStageName; // 0x30 (8)
};

// Class Niagara.NiagaraSimulationStageGeneric
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase {

public:

	enum class ENiagaraIterationSource IterationSource; // 0x38 (1)
	int32_t Iterations; // 0x3C (4)
	char bSpawnOnly : 0; // 0x40 (1)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x48 (40)
};

// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties {

public:

	struct UMaterialInterface Material; // 0x50 (8)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x58 (40)
	enum class ENiagaraSpriteAlignment Alignment; // 0x80 (1)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x81 (1)
	struct FVector2D PivotInUVSpace; // 0x84 (8)
	enum class ENiagaraSortMode SortMode; // 0x8C (1)
	struct FVector2D SubImageSize; // 0x90 (8)
	char bSubImageBlend : 0; // 0x98 (1)
	char bRemoveHMDRollInVR : 0; // 0x98 (1)
	char bSortOnlyWhenTranslucent : 0; // 0x98 (1)
	float MinFacingCameraBlendDistance; // 0x9C (4)
	float MaxFacingCameraBlendDistance; // 0xA0 (4)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xA8 (120)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x120 (120)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198 (120)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x210 (120)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x288 (120)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x300 (120)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x378 (120)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x3F0 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x468 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4E0 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x558 (120)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5D0 (120)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x648 (120)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x6C0 (120)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x738 (120)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x7B0 (120)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x828 (120)
};

// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UFXSystemAsset {

public:

	char bDumpDebugSystemInfo : 0; // 0x31 (1)
	char bDumpDebugEmitterInfo : 0; // 0x32 (1)
	char bFixedBounds : 0; // 0x34 (1)
	struct UNiagaraEffectType EffectType; // 0x38 (8)
	char bOverrideScalabilitySettings : 0; // 0x40 (1)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48 (16)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58 (16)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x68 (16)
	struct TArray<struct UNiagaraParameterCollectionInstance> ParameterCollectionOverrides; // 0x78 (16)
	struct UNiagaraScript SystemSpawnScript; // 0x88 (8)
	struct UNiagaraScript SystemUpdateScript; // 0x90 (8)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xA8 (600)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x300 (264)
	struct FBox FixedBounds; // 0x408 (28)
	char bAutoDeactivate : 0; // 0x424 (1)
	float WarmupTime; // 0x428 (4)
	int32_t WarmupTickCount; // 0x42C (4)
	float WarmupTickDelta; // 0x430 (4)
	char bHasSystemScriptDIsWithPerInstanceData : 0; // 0x434 (1)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x438 (16)
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct FNiagaraVariable Parameter; // 0x20 (40)
};

// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase {
	struct FName Name; // 0x0 (8)
	struct FNiagaraTypeDefinition TypeDef; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition {
	struct Object ClassStructOrEnum; // 0x0 (8)
	uint16_t UnderlyingType; // 0x8 (2)
};

// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : FNiagaraVariableBase {
	struct TArray<char> VarData; // 0x18 (16)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneBoolChannel BoolChannel; // 0x48 (144)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel RedChannel; // 0x48 (160)
	struct FMovieSceneFloatChannel GreenChannel; // 0xE8 (160)
	struct FMovieSceneFloatChannel BlueChannel; // 0x188 (160)
	struct FMovieSceneFloatChannel AlphaChannel; // 0x228 (160)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel FloatChannel; // 0x48 (160)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneIntegerChannel IntegerChannel; // 0x48 (144)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	struct FFrameNumber SpawnSectionStartFrame; // 0x10 (4)
	struct FFrameNumber SpawnSectionEndFrame; // 0x14 (4)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18 (4)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1C (4)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20 (4)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24 (1)
};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel VectorChannels[0x4]; // 0x48 (640)
	int32_t ChannelsUsed; // 0x2C8 (4)
};

// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0 (4)
	int32_t Seed2; // 0x4 (4)
	int32_t Seed3; // 0x8 (4)
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding {
	struct FNiagaraVariable Parameter; // 0x0 (40)
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding {
	struct FName Name; // 0x0 (8)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding {
	struct FNiagaraVariable BoundVariable; // 0x0 (40)
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding {
	struct FNiagaraVariable BoundVariable; // 0x0 (40)
	struct FNiagaraVariable DataSetVariable; // 0x28 (40)
	struct FNiagaraVariable DefaultValueIfNonExistent; // 0x50 (40)
};

// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo {
	struct FNiagaraVariable Variable; // 0x0 (40)
	struct FText Definition; // 0x28 (24)
	struct UNiagaraDataInterface DataInterface; // 0x40 (8)
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext {
	struct TArray<struct UNiagaraComponent> ComponentsToReset; // 0x0 (16)
	struct TArray<struct UNiagaraComponent> ComponentsToReInit; // 0x10 (16)
	struct TArray<struct UNiagaraSystem> SystemSimsToDestroy; // 0x20 (16)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo {
	struct FName Name; // 0x0 (8)
	struct FName OwnerName; // 0x8 (8)
	struct TArray<char> InputParamLocations; // 0x10 (16)
	int32_t NumOutputs; // 0x20 (4)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x28 (16)
};

// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier {
	struct FName Key; // 0x0 (8)
	struct FName Value; // 0x8 (8)
};

// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope {
	struct FName FullName; // 0x0 (8)
	struct FName FriendlyName; // 0x8 (8)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo {
	struct FName Name; // 0x0 (8)
	int32_t UserPtrIdx; // 0x8 (4)
	struct FNiagaraTypeDefinition Type; // 0x10 (16)
	struct FName RegisteredParameterMapRead; // 0x20 (8)
	struct FName RegisteredParameterMapWrite; // 0x28 (8)
	char bIsPlaceholder : 0; // 0x30 (1)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo {
	struct UNiagaraDataInterface DataInterface; // 0x0 (8)
	struct FName Name; // 0x8 (8)
	int32_t UserPtrIdx; // 0x10 (4)
	struct FNiagaraTypeDefinition Type; // 0x18 (16)
	struct FName RegisteredParameterMapRead; // 0x28 (8)
	struct FName RegisteredParameterMapWrite; // 0x30 (8)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature {
	struct FName Name; // 0x0 (8)
	struct TArray<struct FNiagaraVariable> Inputs; // 0x8 (16)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18 (16)
	struct FName OwnerName; // 0x28 (8)
	char bRequiresContext : 0; // 0x30 (1)
	char bMemberFunction : 0; // 0x30 (1)
	char bExperimental : 0; // 0x30 (1)
	char bSupportsCPU : 0; // 0x30 (1)
	char bSupportsGPU : 0; // 0x30 (1)
	char bWriteFunction : 0; // 0x30 (1)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x38 (80)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo {
	char bReadsAttributeData : 0; // 0x0 (1)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties {
	struct FNiagaraDataSetID ID; // 0x0 (12)
	struct TArray<struct FNiagaraVariable> Variables; // 0x10 (16)
};

// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID {
	struct FName Name; // 0x0 (8)
	enum class ENiagaraDataSetType Type; // 0x8 (1)
};

// ScriptStruct Niagara.NCPool
struct FNCPool {
	struct TArray<struct FNCPoolElement> FreeElements; // 0x0 (16)
	struct TArray<struct UNiagaraComponent> InUseComponents_Auto; // 0x10 (16)
	struct TArray<struct UNiagaraComponent> InUseComponents_Manual; // 0x20 (16)
};

// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement {
	struct UNiagaraComponent Component; // 0x0 (8)
};

// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData {
	struct FVector Position; // 0x0 (12)
	float Size; // 0xC (4)
	struct FVector Velocity; // 0x10 (12)
};

// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate {
	int32_t Tri; // 0x0 (4)
	struct FVector BaryCoord; // 0x4 (12)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter {
	struct TArray<int32_t> AllowedMaterialSlots; // 0x0 (16)
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData {
	struct TArray<struct FNiagaraVariable> Variables; // 0x0 (16)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10 (16)
	uint32_t TotalFloatComponents; // 0x20 (4)
	uint32_t TotalInt32Components; // 0x24 (4)
	char bRequiresPersistentIDs : 0; // 0x28 (1)
	struct FNiagaraDataSetID ID; // 0x2C (12)
	enum class ENiagaraSimTarget SimTarget; // 0x38 (1)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0 (4)
	uint32_t Int32ComponentStart; // 0x4 (4)
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x8 (64)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo {
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x0 (16)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10 (16)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20 (16)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30 (16)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings {
	struct FVector2D Location; // 0x0 (8)
	float Zoom; // 0x8 (4)
	char bIsValid : 0; // 0xC (1)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides {
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x0 (16)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x0 (32)
	char bScaleSpawnCount : 0; // 0x20 (1)
	float SpawnCountScale; // 0x24 (4)
};

// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0 (4)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry {
	struct FName ProfileName; // 0x0 (8)
	uint32_t QualityLevelMask; // 0x8 (4)
	uint32_t SetQualityLevelMask; // 0xC (4)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 0; // 0x28 (1)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray {
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x0 (16)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides {
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x0 (16)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x0 (32)
	char bCullByDistance : 0; // 0x20 (1)
	char bCullMaxInstanceCount : 0; // 0x20 (1)
	char bCullByMaxTimeWithoutRender : 0; // 0x20 (1)
	float MaxDistance; // 0x24 (4)
	float MaxInstances; // 0x28 (4)
	float MaxTimeWithoutRender; // 0x2C (4)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 0; // 0x30 (1)
	char bOverrideInstanceCountSettings : 0; // 0x30 (1)
	char bOverrideTimeSinceRendererSettings : 0; // 0x30 (1)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray {
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x0 (16)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0 (4)
	float Medium; // 0x4 (4)
	float High; // 0x8 (4)
	float Epic; // 0xC (4)
	float Cine; // 0x10 (4)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties {
	struct UNiagaraScript Script; // 0x0 (8)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x8 (16)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18 (16)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0 (4)
	struct FName ID; // 0x4 (8)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10 (64)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties {
	struct FName Name; // 0x0 (8)
	struct FName SourceEventGenerator; // 0x8 (8)
	struct FName SourceEmitter; // 0x10 (8)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	enum class EScriptExecutionMode ExecutionMode; // 0x28 (1)
	uint32_t SpawnNumber; // 0x2C (4)
	uint32_t MaxEventsPerFrame; // 0x30 (4)
	struct FGuid SourceEmitterID; // 0x34 (16)
	struct FName SourceEventName; // 0x44 (8)
	char bRandomSpawnNumber : 0; // 0x4C (1)
	uint32_t MinSpawnNumber; // 0x50 (4)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle {
	struct FGuid ID; // 0x0 (16)
	struct FName IdName; // 0x10 (8)
	char bIsEnabled : 0; // 0x18 (1)
	struct FName Name; // 0x1C (8)
	struct UNiagaraEmitter Instance; // 0x28 (8)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload {
	struct FVector CollisionPos; // 0x0 (12)
	struct FVector CollisionNormal; // 0xC (12)
	struct FVector CollisionVelocity; // 0x18 (12)
	int32_t ParticleIndex; // 0x24 (4)
	int32_t PhysicalMaterialIndex; // 0x28 (4)
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride {
	struct UMaterialInterface ExplicitMat; // 0x0 (8)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x8 (40)
};

// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters {
	struct TArray<struct FNiagaraVariable> Parameters; // 0x0 (16)
};

// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore {
	struct Object Owner; // 0x8 (8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10 (16)
	struct TArray<char> ParameterData; // 0x20 (16)
	struct TArray<struct UNiagaraDataInterface> DataInterfaces; // 0x30 (16)
	struct TArray<struct Object> UObjects; // 0x40 (16)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x18 (4)
};

// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter {
	struct FNiagaraVariable Parameter; // 0x0 (40)
	int32_t SrcOffset; // 0x28 (4)
	int32_t DestOffset; // 0x2C (4)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0 (4)
	int32_t SetBIndex; // 0x4 (4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry {
	struct FName ProfileName; // 0x0 (8)
	int32_t QualityLevelMask; // 0x8 (4)
};

// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager {
	struct UNiagaraEffectType EffectType; // 0x0 (8)
	struct TArray<struct UNiagaraComponent> ManagedComponents; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData {
	struct TArray<char> ByteCode; // 0x0 (16)
	struct TArray<char> OptimizedByteCode; // 0x10 (16)
	int32_t NumTempRegisters; // 0x20 (4)
	int32_t NumUserPtrs; // 0x24 (4)
	struct FNiagaraParameters Parameters; // 0x28 (16)
	struct FNiagaraParameters InternalParameters; // 0x38 (16)
	struct TMap<struct FName, struct FNiagaraParameters> DataSetToParameters; // 0x48 (80)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x98 (16)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0xA8 (1)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xB0 (16)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xC0 (16)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0xD0 (16)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0xE0 (16)
	struct TArray<struct FNiagaraStatScope> StatScopes; // 0xF0 (16)
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x100 (16)
	enum class ENiagaraScriptCompileStatus LastCompileStatus; // 0x110 (1)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0x118 (16)
};

// ScriptStruct Niagara.SimulationStageMetaData
struct FSimulationStageMetaData {
	struct FName IterationSource; // 0x0 (8)
	char bSpawnOnly : 0; // 0x8 (1)
	char bWritesParticles : 0; // 0x8 (1)
	struct TArray<struct FName> OutputDestinations; // 0x10 (16)
	int32_t MinStage; // 0x20 (4)
	int32_t MaxStage; // 0x24 (4)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId {
	struct FGuid CompilerVersionID; // 0x0 (16)
	enum class ENiagaraScriptUsage ScriptUsageType; // 0x10 (1)
	struct FGuid ScriptUsageTypeID; // 0x14 (16)
	char bUsesRapidIterationParams : 0; // 0x24 (1)
	char bInterpolatedSpawn : 0; // 0x24 (1)
	char bRequiresPersistentIDs : 0; // 0x24 (1)
	struct FGuid BaseScriptID; // 0x28 (16)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38 (16)
};

// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency {
	struct FName ID; // 0x0 (8)
	enum class ENiagaraModuleDependencyType Type; // 0x8 (1)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9 (1)
	struct FText Description; // 0x10 (24)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xB8 (4)
	uint32_t PaddedParameterSize; // 0xBC (4)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xC0 (16)
	char bInitialized : 0; // 0xD0 (1)
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0 (2)
	uint16_t DestOffset; // 0x2 (2)
	uint16_t SrcSize; // 0x4 (2)
	uint16_t DestSize; // 0x6 (2)
};

// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight {
	struct FLinearColor Color; // 0x0 (16)
	struct FText DisplayName; // 0x10 (24)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest {
	struct TArray<struct Object> RootObjects; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData {
	struct FNiagaraParameterStore InstanceParamStore; // 0x0 (184)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xB8 (64)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xF8 (64)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x138 (64)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x178 (32)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x198 (32)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x1B8 (32)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1D8 (16)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1E8 (32)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x208 (32)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x228 (32)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x248 (16)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection {
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0 (16)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10 (16)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0 (4)
	int32_t DataSetComponentOffset; // 0x4 (4)
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData {
	struct TArray<struct FName> SpawnAttributes; // 0x0 (16)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10 (40)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x38 (40)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x60 (40)
	struct FNiagaraVariable EmitterAgeVar; // 0x88 (40)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0xB0 (40)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xD8 (40)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x100 (64)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData {
	struct FText Description; // 0x0 (24)
	struct FText CategoryName; // 0x18 (24)
	char bAdvancedDisplay : 0; // 0x30 (1)
	int32_t EditorSortPriority; // 0x34 (4)
	char bInlineEditConditionToggle : 0; // 0x38 (1)
	struct FNiagaraInputConditionMetadata EditCondition; // 0x40 (24)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0x58 (24)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0x70 (80)
	struct FName ScopeName; // 0xC0 (8)
	enum class ENiagaraScriptParameterUsage Usage; // 0xC8 (4)
	char bIsStaticSwitch : 0; // 0xCC (1)
	int32_t StaticSwitchDefaultValue; // 0xD0 (4)
	char bAddedToNodeGraphDeepCopy : 0; // 0xD4 (1)
	char bOutputIsPersistent : 0; // 0xD5 (1)
	struct FName CachedNamespacelessVariableName; // 0xD8 (8)
	char bCreatedInSystemEditor : 0; // 0xE0 (1)
	char bUseLegacyNameString : 0; // 0xE1 (1)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata {
	struct FName InputName; // 0x0 (8)
	struct TArray<struct FString> TargetValues; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraParameterScopeInfo
struct FNiagaraParameterScopeInfo {
	enum class ENiagaraParameterScope Scope; // 0x0 (4)
	struct FString NamespaceString; // 0x8 (16)
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo {
	struct FString Object; // 0x0 (16)
	struct TArray<struct FString> PropertyKeys; // 0x10 (16)
	struct TArray<struct FString> PropertyValues; // 0x20 (16)
};

// ScriptStruct Niagara.NiagaraID
struct FNiagaraID {
	int32_t Index; // 0x0 (4)
	int32_t AcquireTag; // 0x4 (4)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0 (4)
	float InterpStartDt; // 0x4 (4)
	float IntervalDt; // 0x8 (4)
	int32_t SpawnGroup; // 0xC (4)
};

// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix {
	struct FVector4 Row0; // 0x0 (16)
	struct FVector4 Row1; // 0x10 (16)
	struct FVector4 Row2; // 0x20 (16)
	struct FVector4 Row3; // 0x30 (16)
};

// ScriptStruct Niagara.NiagaraTestStruct
struct FNiagaraTestStruct {
	struct FVector Vector1; // 0x0 (12)
	struct FVector Vector2; // 0xC (12)
	struct FNiagaraTestStructInner InnerStruct1; // 0x18 (24)
	struct FNiagaraTestStructInner InnerStruct2; // 0x30 (24)
};

// ScriptStruct Niagara.NiagaraTestStructInner
struct FNiagaraTestStructInner {
	struct FVector InnerVector1; // 0x0 (12)
	struct FVector InnerVector2; // 0xC (12)
};

// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool {
	int32_t Value; // 0x0 (4)
};

// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32 {
	int32_t Value; // 0x0 (4)
};

// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat {
	float Value; // 0x0 (4)
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0xB8 (80)
};

// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant {
	struct Object Object; // 0x0 (8)
	struct UNiagaraDataInterface DataInterface; // 0x8 (8)
	struct TArray<char> Bytes; // 0x10 (16)
	enum class ENiagaraVariantMode CurrentMode; // 0x20 (4)
};

// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
inline void ANiagaraActor::SetDestroyOnSystemFinish(char bShouldDestroyOnSystemFinish) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.SetDestroyOnSystemFinish");

	struct SetDestroyOnSystemFinish_Params {
		char bShouldDestroyOnSystemFinish;
	}; SetDestroyOnSystemFinish_Params Params;

	Params.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
inline void ANiagaraActor::OnNiagaraSystemFinished(struct UNiagaraComponent FinishedComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraActor.OnNiagaraSystemFinished");

	struct OnNiagaraSystemFinished_Params {
		struct UNiagaraComponent FinishedComponent;
	}; OnNiagaraSystemFinished_Params Params;

	Params.FinishedComponent = FinishedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableVec4
inline void UNiagaraComponent::SetVariableVec4(struct FName InVariableName, struct FVector4& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	struct SetVariableVec4_Params {
		struct FName InVariableName;
		struct FVector4& InValue;
	}; SetVariableVec4_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraComponent.SetVariableVec3
inline void UNiagaraComponent::SetVariableVec3(struct FName InVariableName, struct FVector InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	struct SetVariableVec3_Params {
		struct FName InVariableName;
		struct FVector InValue;
	}; SetVariableVec3_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableVec2
inline void UNiagaraComponent::SetVariableVec2(struct FName InVariableName, struct FVector2D InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	struct SetVariableVec2_Params {
		struct FName InVariableName;
		struct FVector2D InValue;
	}; SetVariableVec2_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableQuat
inline void UNiagaraComponent::SetVariableQuat(struct FName InVariableName, struct FQuat& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	struct SetVariableQuat_Params {
		struct FName InVariableName;
		struct FQuat& InValue;
	}; SetVariableQuat_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraComponent.SetVariableObject
inline void UNiagaraComponent::SetVariableObject(struct FName InVariableName, struct Object Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	struct SetVariableObject_Params {
		struct FName InVariableName;
		struct Object Object;
	}; SetVariableObject_Params Params;

	Params.InVariableName = InVariableName;
	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableMaterial
inline void UNiagaraComponent::SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableMaterial");

	struct SetVariableMaterial_Params {
		struct FName InVariableName;
		struct UMaterialInterface Object;
	}; SetVariableMaterial_Params Params;

	Params.InVariableName = InVariableName;
	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableLinearColor
inline void UNiagaraComponent::SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	struct SetVariableLinearColor_Params {
		struct FName InVariableName;
		struct FLinearColor& InValue;
	}; SetVariableLinearColor_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraComponent.SetVariableInt
inline void UNiagaraComponent::SetVariableInt(struct FName InVariableName, int32_t InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	struct SetVariableInt_Params {
		struct FName InVariableName;
		int32_t InValue;
	}; SetVariableInt_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableFloat
inline void UNiagaraComponent::SetVariableFloat(struct FName InVariableName, float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	struct SetVariableFloat_Params {
		struct FName InVariableName;
		float InValue;
	}; SetVariableFloat_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableBool
inline void UNiagaraComponent::SetVariableBool(struct FName InVariableName, char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	struct SetVariableBool_Params {
		struct FName InVariableName;
		char InValue;
	}; SetVariableBool_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetVariableActor
inline void UNiagaraComponent::SetVariableActor(struct FName InVariableName, struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	struct SetVariableActor_Params {
		struct FName InVariableName;
		struct UActor Actor;
	}; SetVariableActor_Params Params;

	Params.InVariableName = InVariableName;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetSeekDelta
inline void UNiagaraComponent::SetSeekDelta(float InSeekDelta) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	struct SetSeekDelta_Params {
		float InSeekDelta;
	}; SetSeekDelta_Params Params;

	Params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetRenderingEnabled
inline void UNiagaraComponent::SetRenderingEnabled(char bInRenderingEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	struct SetRenderingEnabled_Params {
		char bInRenderingEnabled;
	}; SetRenderingEnabled_Params Params;

	Params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetPreviewLODDistance
inline void UNiagaraComponent::SetPreviewLODDistance(char bEnablePreviewLODDistance, float PreviewLODDistance) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	struct SetPreviewLODDistance_Params {
		char bEnablePreviewLODDistance;
		float PreviewLODDistance;
	}; SetPreviewLODDistance_Params Params;

	Params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	Params.PreviewLODDistance = PreviewLODDistance;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetPaused
inline void UNiagaraComponent::SetPaused(char bInPaused) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	struct SetPaused_Params {
		char bInPaused;
	}; SetPaused_Params Params;

	Params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
inline void UNiagaraComponent::SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	struct SetNiagaraVariableVec4_Params {
		struct FString InVariableName;
		struct FVector4& InValue;
	}; SetNiagaraVariableVec4_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
inline void UNiagaraComponent::SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	struct SetNiagaraVariableVec3_Params {
		struct FString InVariableName;
		struct FVector InValue;
	}; SetNiagaraVariableVec3_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
inline void UNiagaraComponent::SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	struct SetNiagaraVariableVec2_Params {
		struct FString InVariableName;
		struct FVector2D InValue;
	}; SetNiagaraVariableVec2_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
inline void UNiagaraComponent::SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	struct SetNiagaraVariableQuat_Params {
		struct FString InVariableName;
		struct FQuat& InValue;
	}; SetNiagaraVariableQuat_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
inline void UNiagaraComponent::SetNiagaraVariableObject(struct FString InVariableName, struct Object Object) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	struct SetNiagaraVariableObject_Params {
		struct FString InVariableName;
		struct Object Object;
	}; SetNiagaraVariableObject_Params Params;

	Params.InVariableName = InVariableName;
	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
inline void UNiagaraComponent::SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	struct SetNiagaraVariableLinearColor_Params {
		struct FString InVariableName;
		struct FLinearColor& InValue;
	}; SetNiagaraVariableLinearColor_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
inline void UNiagaraComponent::SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	struct SetNiagaraVariableInt_Params {
		struct FString InVariableName;
		int32_t InValue;
	}; SetNiagaraVariableInt_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
inline void UNiagaraComponent::SetNiagaraVariableFloat(struct FString InVariableName, float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	struct SetNiagaraVariableFloat_Params {
		struct FString InVariableName;
		float InValue;
	}; SetNiagaraVariableFloat_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
inline void UNiagaraComponent::SetNiagaraVariableBool(struct FString InVariableName, char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	struct SetNiagaraVariableBool_Params {
		struct FString InVariableName;
		char InValue;
	}; SetNiagaraVariableBool_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
inline void UNiagaraComponent::SetNiagaraVariableActor(struct FString InVariableName, struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	struct SetNiagaraVariableActor_Params {
		struct FString InVariableName;
		struct UActor Actor;
	}; SetNiagaraVariableActor_Params Params;

	Params.InVariableName = InVariableName;
	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetMaxSimTime
inline void UNiagaraComponent::SetMaxSimTime(float InMaxTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	struct SetMaxSimTime_Params {
		float InMaxTime;
	}; SetMaxSimTime_Params Params;

	Params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetForceSolo
inline void UNiagaraComponent::SetForceSolo(char bInForceSolo) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	struct SetForceSolo_Params {
		char bInForceSolo;
	}; SetForceSolo_Params Params;

	Params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetDesiredAge
inline void UNiagaraComponent::SetDesiredAge(float InDesiredAge) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	struct SetDesiredAge_Params {
		float InDesiredAge;
	}; SetDesiredAge_Params Params;

	Params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
inline void UNiagaraComponent::SetCanRenderWhileSeeking(char bInCanRenderWhileSeeking) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	struct SetCanRenderWhileSeeking_Params {
		char bInCanRenderWhileSeeking;
	}; SetCanRenderWhileSeeking_Params Params;

	Params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetAutoDestroy
inline void UNiagaraComponent::SetAutoDestroy(char bInAutoDestroy) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	struct SetAutoDestroy_Params {
		char bInAutoDestroy;
	}; SetAutoDestroy_Params Params;

	Params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetAsset
inline void UNiagaraComponent::SetAsset(struct UNiagaraSystem InAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	struct SetAsset_Params {
		struct UNiagaraSystem InAsset;
	}; SetAsset_Params Params;

	Params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetAllowScalability
inline void UNiagaraComponent::SetAllowScalability(char bAllow) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAllowScalability");

	struct SetAllowScalability_Params {
		char bAllow;
	}; SetAllowScalability_Params Params;

	Params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SetAgeUpdateMode
inline void UNiagaraComponent::SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	struct SetAgeUpdateMode_Params {
		enum class ENiagaraAgeUpdateMode InAgeUpdateMode;
	}; SetAgeUpdateMode_Params Params;

	Params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.SeekToDesiredAge
inline void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	struct SeekToDesiredAge_Params {
		float InDesiredAge;
	}; SeekToDesiredAge_Params Params;

	Params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.ResetSystem
inline void UNiagaraComponent::ResetSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	struct ResetSystem_Params {
		
	}; ResetSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.ReinitializeSystem
inline void UNiagaraComponent::ReinitializeSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	struct ReinitializeSystem_Params {
		
	}; ReinitializeSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.IsPaused
inline char UNiagaraComponent::IsPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	struct IsPaused_Params {
		
		char ReturnValue;

	}; IsPaused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetSeekDelta
inline float UNiagaraComponent::GetSeekDelta() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	struct GetSeekDelta_Params {
		
		float ReturnValue;

	}; GetSeekDelta_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
inline char UNiagaraComponent::GetPreviewLODDistanceEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled");

	struct GetPreviewLODDistanceEnabled_Params {
		
		char ReturnValue;

	}; GetPreviewLODDistanceEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetPreviewLODDistance
inline int32_t UNiagaraComponent::GetPreviewLODDistance() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetPreviewLODDistance");

	struct GetPreviewLODDistance_Params {
		
		int32_t ReturnValue;

	}; GetPreviewLODDistance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
inline struct TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	struct GetNiagaraParticleValueVec3_DebugOnly_Params {
		struct FString InEmitterName;
		struct FString InValueName;
		struct TArray<struct FVector> ReturnValue;

	}; GetNiagaraParticleValueVec3_DebugOnly_Params Params;

	Params.InEmitterName = InEmitterName;
	Params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
inline struct TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	struct GetNiagaraParticleValues_DebugOnly_Params {
		struct FString InEmitterName;
		struct FString InValueName;
		struct TArray<float> ReturnValue;

	}; GetNiagaraParticleValues_DebugOnly_Params Params;

	Params.InEmitterName = InEmitterName;
	Params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
inline struct TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	struct GetNiagaraParticlePositions_DebugOnly_Params {
		struct FString InEmitterName;
		struct TArray<struct FVector> ReturnValue;

	}; GetNiagaraParticlePositions_DebugOnly_Params Params;

	Params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetMaxSimTime
inline float UNiagaraComponent::GetMaxSimTime() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	struct GetMaxSimTime_Params {
		
		float ReturnValue;

	}; GetMaxSimTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetForceSolo
inline char UNiagaraComponent::GetForceSolo() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	struct GetForceSolo_Params {
		
		char ReturnValue;

	}; GetForceSolo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetDesiredAge
inline float UNiagaraComponent::GetDesiredAge() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	struct GetDesiredAge_Params {
		
		float ReturnValue;

	}; GetDesiredAge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetDataInterface
inline struct UNiagaraDataInterface UNiagaraComponent::GetDataInterface(struct FString Name) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDataInterface");

	struct GetDataInterface_Params {
		struct FString Name;
		struct UNiagaraDataInterface ReturnValue;

	}; GetDataInterface_Params Params;

	Params.Name = Name;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetAsset
inline struct UNiagaraSystem UNiagaraComponent::GetAsset() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	struct GetAsset_Params {
		
		struct UNiagaraSystem ReturnValue;

	}; GetAsset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.GetAgeUpdateMode
inline enum class ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	struct GetAgeUpdateMode_Params {
		
		enum class ENiagaraAgeUpdateMode ReturnValue;

	}; GetAgeUpdateMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
inline void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	struct AdvanceSimulationByTime_Params {
		float SimulateTime;
		float TickDeltaSeconds;
	}; AdvanceSimulationByTime_Params Params;

	Params.SimulateTime = SimulateTime;
	Params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraComponent.AdvanceSimulation
inline void UNiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	struct AdvanceSimulation_Params {
		int32_t TickCount;
		float TickDeltaSeconds;
	}; AdvanceSimulation_Params Params;

	Params.TickCount = TickCount;
	Params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
inline void UNiagaraParameterCollectionInstance::SetVectorParameter(struct FString InVariableName, struct FVector InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	struct SetVectorParameter_Params {
		struct FString InVariableName;
		struct FVector InValue;
	}; SetVectorParameter_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
inline void UNiagaraParameterCollectionInstance::SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	struct SetVector4Parameter_Params {
		struct FString InVariableName;
		struct FVector4& InValue;
	}; SetVector4Parameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
inline void UNiagaraParameterCollectionInstance::SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	struct SetVector2DParameter_Params {
		struct FString InVariableName;
		struct FVector2D InValue;
	}; SetVector2DParameter_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
inline void UNiagaraParameterCollectionInstance::SetQuatParameter(struct FString InVariableName, struct FQuat& InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	struct SetQuatParameter_Params {
		struct FString InVariableName;
		struct FQuat& InValue;
	}; SetQuatParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InValue = Params.InValue;

}

// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
inline void UNiagaraParameterCollectionInstance::SetIntParameter(struct FString InVariableName, int32_t InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	struct SetIntParameter_Params {
		struct FString InVariableName;
		int32_t InValue;
	}; SetIntParameter_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
inline void UNiagaraParameterCollectionInstance::SetFloatParameter(struct FString InVariableName, float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	struct SetFloatParameter_Params {
		struct FString InVariableName;
		float InValue;
	}; SetFloatParameter_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
inline void UNiagaraParameterCollectionInstance::SetColorParameter(struct FString InVariableName, struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	struct SetColorParameter_Params {
		struct FString InVariableName;
		struct FLinearColor InValue;
	}; SetColorParameter_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
inline void UNiagaraParameterCollectionInstance::SetBoolParameter(struct FString InVariableName, char InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	struct SetBoolParameter_Params {
		struct FString InVariableName;
		char InValue;
	}; SetBoolParameter_Params Params;

	Params.InVariableName = InVariableName;
	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
inline struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	struct GetVectorParameter_Params {
		struct FString InVariableName;
		struct FVector ReturnValue;

	}; GetVectorParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
inline struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	struct GetVector4Parameter_Params {
		struct FString InVariableName;
		struct FVector4 ReturnValue;

	}; GetVector4Parameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
inline struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	struct GetVector2DParameter_Params {
		struct FString InVariableName;
		struct FVector2D ReturnValue;

	}; GetVector2DParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
inline struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	struct GetQuatParameter_Params {
		struct FString InVariableName;
		struct FQuat ReturnValue;

	}; GetQuatParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
inline int32_t UNiagaraParameterCollectionInstance::GetIntParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	struct GetIntParameter_Params {
		struct FString InVariableName;
		int32_t ReturnValue;

	}; GetIntParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
inline float UNiagaraParameterCollectionInstance::GetFloatParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	struct GetFloatParameter_Params {
		struct FString InVariableName;
		float ReturnValue;

	}; GetFloatParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
inline struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	struct GetColorParameter_Params {
		struct FString InVariableName;
		struct FLinearColor ReturnValue;

	}; GetColorParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
inline char UNiagaraParameterCollectionInstance::GetBoolParameter(struct FString InVariableName) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	struct GetBoolParameter_Params {
		struct FString InVariableName;
		char ReturnValue;

	}; GetBoolParameter_Params Params;

	Params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Niagara.NiagaraPreviewGrid.SetPaused
inline void ANiagaraPreviewGrid::SetPaused(char bPaused) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.SetPaused");

	struct SetPaused_Params {
		char bPaused;
	}; SetPaused_Params Params;

	Params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraPreviewGrid.GetPreviews
inline void ANiagaraPreviewGrid::GetPreviews(struct TArray<struct UNiagaraComponent>& OutPreviews) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.GetPreviews");

	struct GetPreviews_Params {
		struct TArray<struct UNiagaraComponent>& OutPreviews;
	}; GetPreviews_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutPreviews = Params.OutPreviews;

}

// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
inline void ANiagaraPreviewGrid::DeactivatePreviews() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	struct DeactivatePreviews_Params {
		
	}; DeactivatePreviews_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
inline void ANiagaraPreviewGrid::ActivatePreviews(char bReset) {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	struct ActivatePreviews_Params {
		char bReset;
	}; ActivatePreviews_Params Params;

	Params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
inline void UNiagaraScript::RaiseOnGPUCompilationComplete() {
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete");

	struct RaiseOnGPUCompilationComplete_Params {
		
	}; RaiseOnGPUCompilationComplete_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

