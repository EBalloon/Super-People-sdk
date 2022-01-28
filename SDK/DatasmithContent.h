// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3,
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3,
};

// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3,
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t {
	LIGHTMAP_65 = 0,
	LIGHTMAP_129 = 1,
	LIGHTMAP_257 = 2,
	LIGHTMAP_513 = 3,
	LIGHTMAP_1025 = 4,
	LIGHTMAP_2049 = 5,
	LIGHTMAP_4097 = 6,
	LIGHTMAP_MAX = 7,
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t {
	LIGHTMAP_17 = 0,
	LIGHTMAP_33 = 1,
	LIGHTMAP_65 = 2,
	LIGHTMAP_129 = 3,
	LIGHTMAP_257 = 4,
	LIGHTMAP_513 = 5,
	LIGHTMAP_MAX = 6,
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3,
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
};

// Class DatasmithContent.DatasmithActorTemplate
class UDatasmithActorTemplate : public UDatasmithObjectTemplate {

public:

	struct TSet<struct FName> Layers; // 0x30 (80)
	struct TSet<struct FName> Tags; // 0x80 (80)
};

// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public UActor {

public:

	enum class EDatasmithAreaLightActorType LightType; // 0x328 (1)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x329 (1)
	struct FVector2D Dimensions; // 0x32C (8)
	float Intensity; // 0x334 (4)
	enum class ELightUnits IntensityUnits; // 0x338 (1)
	struct FLinearColor Color; // 0x33C (16)
	float Temperature; // 0x34C (4)
	struct UTextureLightProfile IESTexture; // 0x350 (8)
	char bUseIESBrightness : 0; // 0x358 (1)
	float IESBrightnessScale; // 0x35C (4)
	struct FRotator Rotation; // 0x360 (12)
	float SourceRadius; // 0x36C (4)
	float SourceLength; // 0x370 (4)
	float AttenuationRadius; // 0x374 (4)
	float SpotlightInnerAngle; // 0x378 (4)
	float SpotlightOuterAngle; // 0x37C (4)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {

public:

	enum class EDatasmithAreaLightActorType LightType; // 0x30 (1)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x31 (1)
	struct FVector2D Dimensions; // 0x34 (8)
	struct FLinearColor Color; // 0x3C (16)
	float Intensity; // 0x4C (4)
	enum class ELightUnits IntensityUnits; // 0x50 (1)
	float Temperature; // 0x54 (4)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x58 (40)
	char bUseIESBrightness : 0; // 0x80 (1)
	float IESBrightnessScale; // 0x84 (4)
	struct FRotator Rotation; // 0x88 (12)
	float SourceRadius; // 0x94 (4)
	float SourceLength; // 0x98 (4)
	float AttenuationRadius; // 0x9C (4)
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData {

public:

	struct FString Generator; // 0x28 (16)
	float Version; // 0x38 (4)
	struct FString Author; // 0x40 (16)
	struct FString License; // 0x50 (16)
	struct FString Source; // 0x60 (16)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData {

public:

	struct FString SourceMeshName; // 0x28 (16)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData {

public:

	char bGenerateLightmapUVs : 0; // 0x28 (1)
	struct FString TexturesDir; // 0x30 (16)
	char IntermediateSerialization; // 0x40 (1)
	char bColorizeMaterials : 0; // 0x41 (1)
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData {

public:

	char bMergeNodes : 0; // 0x48 (1)
	char bOptimizeDuplicatedNodes : 0; // 0x49 (1)
	char bRemoveInvisibleNodes : 0; // 0x4A (1)
	char bSimplifyNodeHierarchy : 0; // 0x4B (1)
	char bImportVar : 0; // 0x4C (1)
	struct FString VarPath; // 0x50 (16)
	char bImportPos : 0; // 0x60 (1)
	struct FString PosPath; // 0x68 (16)
	char bImportTml : 0; // 0x78 (1)
	struct FString TmlPath; // 0x80 (16)
};

// Class DatasmithContent.DatasmithVREDSceneImportData
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData {

public:

	char bMergeNodes : 0; // 0x48 (1)
	char bOptimizeDuplicatedNodes : 0; // 0x49 (1)
	char bImportMats : 0; // 0x4A (1)
	struct FString MatsPath; // 0x50 (16)
	char bImportVar : 0; // 0x60 (1)
	char bCleanVar : 0; // 0x61 (1)
	struct FString VarPath; // 0x68 (16)
	char bImportLightInfo : 0; // 0x78 (1)
	struct FString LightInfoPath; // 0x80 (16)
	char bImportClipInfo : 0; // 0x90 (1)
	struct FString ClipInfoPath; // 0x98 (16)
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData {

public:

	struct FString SourceGlobalId; // 0x28 (16)
};

// Class DatasmithContent.DatasmithAssetUserData
class UDatasmithAssetUserData : public UAssetUserData {

public:

	struct TMap<struct FName, struct FString> MetaData; // 0x28 (80)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate {

public:

	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30 (48)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate {

public:

	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30 (8)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38 (4)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3C (8)
	float CurrentFocalLength; // 0x44 (4)
	float CurrentAperture; // 0x48 (4)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50 (64)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
class ADatasmithImportedSequencesActor : public UActor {

public:

	struct TArray<struct ULevelSequence> ImportedSequences; // 0x328 (16)

	void PlayLevelSequence(struct ULevelSequence SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16DAA70>
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase {

public:

	struct FDatasmithTessellationOptions options; // 0x28 (16)
};

// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UDatasmithOptionsBase {

public:

	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28 (1)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29 (1)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2A (1)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2B (1)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x2C (1)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x2D (1)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2E (1)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x2F (1)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x34 (20)
	struct FDatasmithReimportOptions ReimportOptions; // 0x48 (2)
	struct FString Filename; // 0x50 (16)
	struct FString FilePath; // 0x60 (16)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate {

public:

	struct UMaterialInterface LandscapeMaterial; // 0x30 (8)
	int32_t StaticLightingLOD; // 0x38 (4)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate {

public:

	char bVisible : 0; // 0x30 (1)
	char CastShadows : 0; // 0x34 (1)
	char bUseTemperature : 0; // 0x34 (1)
	char bUseIESBrightness : 0; // 0x34 (1)
	float Intensity; // 0x38 (4)
	float Temperature; // 0x3C (4)
	float IESBrightnessScale; // 0x40 (4)
	struct FLinearColor LightColor; // 0x44 (16)
	struct UMaterialInterface LightFunctionMaterial; // 0x58 (8)
	struct UTextureLightProfile IESTexture; // 0x60 (8)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {

public:

	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30 (40)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x58 (80)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xA8 (80)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xF8 (80)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148 (80)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate {

public:

	enum class ELightUnits IntensityUnits; // 0x30 (1)
	float SourceRadius; // 0x34 (4)
	float SourceLength; // 0x38 (4)
	float AttenuationRadius; // 0x3C (4)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate {

public:

	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x30 (64)
	char bEnabled : 0; // 0x70 (1)
	char bUnbound : 0; // 0x70 (1)
};

// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public UActor {

public:

	struct UDatasmithScene Scene; // 0x328 (8)
	struct TMap<struct FName, struct TSoftObjectPtr<UActor>> RelatedActors; // 0x330 (80)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate {

public:

	struct FTransform RelativeTransform; // 0x30 (48)
	char Mobility; // 0x60 (1)
	struct TSoftObjectPtr<USceneComponent> AttachParent; // 0x68 (40)
	struct TSet<struct FName> Tags; // 0x90 (80)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {

public:

	char SourceType; // 0x30 (1)
	int32_t CubemapResolution; // 0x34 (4)
	struct UTextureCube Cubemap; // 0x38 (8)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {

public:

	float InnerConeAngle; // 0x30 (4)
	float OuterConeAngle; // 0x34 (4)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate {

public:

	struct UStaticMesh StaticMesh; // 0x30 (8)
	struct TArray<struct UMaterialInterface> OverrideMaterials; // 0x38 (16)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {

public:

	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30 (80)
	int32_t LightMapCoordinateIndex; // 0x80 (4)
	int32_t LightMapResolution; // 0x84 (4)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88 (16)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98 (16)
};

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 0; // 0x0 (1)
	char bAllowRoll : 0; // 0x0 (1)
	struct TSoftObjectPtr<UActor> ActorToTrack; // 0x8 (40)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
struct FDatasmithPostProcessSettingsTemplate {
	char bOverride_WhiteTemp : 0; // 0x0 (1)
	char bOverride_ColorSaturation : 0; // 0x0 (1)
	char bOverride_VignetteIntensity : 0; // 0x0 (1)
	char bOverride_FilmWhitePoint : 0; // 0x0 (1)
	char bOverride_AutoExposureMethod : 0; // 0x0 (1)
	char bOverride_CameraISO : 0; // 0x0 (1)
	char bOverride_CameraShutterSpeed : 0; // 0x0 (1)
	char bOverride_DepthOfFieldFstop : 0; // 0x4 (1)
	float WhiteTemp; // 0x8 (4)
	float VignetteIntensity; // 0xC (4)
	struct FLinearColor FilmWhitePoint; // 0x10 (16)
	struct FVector4 ColorSaturation; // 0x20 (16)
	char AutoExposureMethod; // 0x30 (1)
	float CameraISO; // 0x34 (4)
	float CameraShutterSpeed; // 0x38 (4)
	float DepthOfFieldFstop; // 0x3C (4)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
struct FDatasmithCameraFocusSettingsTemplate {
	enum class ECameraFocusMethod FocusMethod; // 0x0 (1)
	float ManualFocusDistance; // 0x4 (4)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0 (4)
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0 (4)
	float SensorHeight; // 0x4 (4)
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0 (4)
	float MaxEdgeLength; // 0x4 (4)
	float NormalTolerance; // 0x8 (4)
	enum class EDatasmithCADStitchingTechnique StitchingTechnique; // 0xC (1)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
struct FDatasmithImportBaseOptions {
	enum class EDatasmithImportScene SceneHandling; // 0x0 (1)
	char bIncludeGeometry : 0; // 0x1 (1)
	char bIncludeMaterial : 0; // 0x2 (1)
	char bIncludeLight : 0; // 0x3 (1)
	char bIncludeCamera : 0; // 0x4 (1)
	char bIncludeAnimation : 0; // 0x5 (1)
	struct FDatasmithAssetImportOptions AssetOptions; // 0x8 (8)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10 (4)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
struct FDatasmithStaticMeshImportOptions {
	enum class EDatasmithImportLightmapMin MinLightmapResolution; // 0x0 (1)
	enum class EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1 (1)
	char bGenerateLightmapUVs : 0; // 0x2 (1)
	char bRemoveDegenerates : 0; // 0x3 (1)
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
struct FDatasmithAssetImportOptions {
	struct FName PackagePath; // 0x0 (8)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
struct FDatasmithReimportOptions {
	char bUpdateActors : 0; // 0x0 (1)
	char bRespawnDeletedActors : 0; // 0x1 (1)
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
struct FDatasmithStaticParameterSetTemplate {
	struct TMap<struct FName, char> StaticSwitchParameters; // 0x0 (80)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
struct FDatasmithMeshSectionInfoMapTemplate {
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; // 0x0 (80)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0 (4)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
struct FDatasmithStaticMaterialTemplate {
	struct FName MaterialSlotName; // 0x0 (8)
	struct UMaterialInterface MaterialInterface; // 0x8 (8)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
struct FDatasmithMeshBuildSettingsTemplate {
	char bUseMikkTSpace : 0; // 0x0 (1)
	char bRecomputeNormals : 0; // 0x0 (1)
	char bRecomputeTangents : 0; // 0x0 (1)
	char bRemoveDegenerates : 0; // 0x0 (1)
	char bBuildAdjacencyBuffer : 0; // 0x0 (1)
	char bUseHighPrecisionTangentBasis : 0; // 0x0 (1)
	char bUseFullPrecisionUVs : 0; // 0x0 (1)
	char bGenerateLightmapUVs : 0; // 0x0 (1)
	int32_t MinLightmapResolution; // 0x4 (4)
	int32_t SrcLightmapIndex; // 0x8 (4)
	int32_t DstLightmapIndex; // 0xC (4)
};

// Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
inline void ADatasmithImportedSequencesActor::PlayLevelSequence(struct ULevelSequence SequenceToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence");

	struct PlayLevelSequence_Params {
		struct ULevelSequence SequenceToPlay;
	}; PlayLevelSequence_Params Params;

	Params.SequenceToPlay = SequenceToPlay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

