// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t {
	EDatasmithAreaLightActorType = 0,
	EDatasmithAreaLightActorType = 1,
	EDatasmithAreaLightActorType = 2,
	EDatasmithAreaLightActorType = 3,
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t {
	EDatasmithAreaLightActorShape = 0,
	EDatasmithAreaLightActorShape = 1,
	EDatasmithAreaLightActorShape = 2,
	EDatasmithAreaLightActorShape = 3,
	EDatasmithAreaLightActorShape = 4,
	EDatasmithAreaLightActorShape = 5,
};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t {
	EDatasmithCADStitchingTechnique = 0,
	EDatasmithCADStitchingTechnique = 1,
	EDatasmithCADStitchingTechnique = 2,
	EDatasmithCADStitchingTechnique = 3,
};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t {
	EDatasmithImportHierarchy = 0,
	EDatasmithImportHierarchy = 1,
	EDatasmithImportHierarchy = 2,
	EDatasmithImportHierarchy = 3,
};

// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t {
	EDatasmithImportScene = 0,
	EDatasmithImportScene = 1,
	EDatasmithImportScene = 2,
	EDatasmithImportScene = 3,
};

// Enum DatasmithContent.EDatasmithImportLightmapMk
enum class EDatasmithImportLightmapM : uint8_t {
	EDatasmithImportLightmapMk_65 = 0,
	EDatasmithImportLightmapMk_129 = 1,
	EDatasmithImportLightmapM_257 = 2,
	EDatasmithImportLightmapM_513 = 3,
	EDatasmithImportLightmapM_1025 = 4,
	EDatasmithImportLightmapM_2049 = 5,
	EDatasmithImportLightmapM_4097 = 6,
	EDatasmithImportLightmapM = 7,
};

// Enum DatasmithContent.EDatasmithImportLightmapMk
enum class EDatasmithImportLightmap : uint8_t {
	EDatasmithImportLightmapMk_17 = 0,
	EDatasmithImportLightmapMk_33 = 1,
	EDatasmithImportLightmapMk_65 = 2,
	EDatasmithImportLightmap_129 = 3,
	EDatasmithImportLightmapMk_257 = 4,
	EDatasmithImportLightmapMk_513 = 5,
	EDatasmithImportLightmapMk = 6,
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t {
	EDatasmithImportMaterialQuality = 0,
	EDatasmithImportMaterialQuality = 1,
	EDatasmithImportMaterialQuality = 2,
	EDatasmithImportMaterialQuality = 3,
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t {
	EDatasmithImportActorPolicy = 0,
	EDatasmithImportActorPolicy = 1,
	EDatasmithImportActorPolicy = 2,
	EDatasmithImportActorPolicy = 3,
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t {
	EDatasmithImportAssetConflictPolicy = 0,
	EDatasmithImportAssetConflictPolicy = 1,
	EDatasmithImportAssetConflictPolicy = 2,
	EDatasmithImportAssetConflictPolicy = 3,
	EDatasmithImportAssetConflictPolicy = 4,
};

// Enum DatasmithContent.EDatasmithImportSearchPack
enum class EDatasmithImportSearchPack : uint8_t {
	EDatasmithImportSearchPack = 0,
	EDatasmithImportSearchPack = 1,
	EDatasmithImportSearchPack = 2,
};

// Class DatasmithContent.DatasmithActorTemplate
class UDatasmithActorTemplate : public UDatasmithObjectTemplate {

public:

	struct TSet<Unknown> Layers; // 0x30 (80)
	struct TSet<Unknown> Tags; // 0x80 (80)
};

// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public UActor {

public:

	enum class Unknow LightType; // 0x310 (1)
	enum class Unknow LightShape; // 0x311 (1)
	struct Unknown Dimensions; // 0x314 (8)
	float Intensity; // 0x31C (4)
	enum class Unknow IntensityUnits; // 0x320 (1)
	struct Unknown Color; // 0x324 (16)
	float Temperature; // 0x334 (4)
	struct Unknown IESTexture; // 0x338 (8)
	char bUseIESBrightness : 0; // 0x340 (1)
	float IESBrightnessScale; // 0x344 (4)
	struct Unknown Rotation; // 0x348 (12)
	float SourceRadius; // 0x354 (4)
	float SourceLength; // 0x358 (4)
	float AttenuationRadius; // 0x35C (4)
	float SpotlightInnerAngle; // 0x360 (4)
	float SpotlightOuterAngle; // 0x364 (4)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {

public:

	enum class Unknow LightType; // 0x30 (1)
	enum class Unknow LightShape; // 0x31 (1)
	struct Unknown Dimensions; // 0x34 (8)
	struct Unknown Color; // 0x3C (16)
	float Intensity; // 0x4C (4)
	enum class Unknow IntensityUnits; // 0x50 (1)
	float Temperature; // 0x54 (4)
	struct Unknown IESTexture; // 0x58 (40)
	char bUseIESBrightness : 0; // 0x80 (1)
	float IESBrightnessScale; // 0x84 (4)
	struct Unknown Rotation; // 0x88 (12)
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

	struct TMap<Unknown, Unknown> MetaData; // 0x28 (80)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate {

public:

	struct Unknown LookatTrackingSettings; // 0x30 (48)
};

// Class DatasmithContent.DatasmithCineCameraComponentTem
class UDatasmithCineCameraComponentTem : public UDatasmithObjectTemplate {

public:

	struct Unknown FilmbackSettings; // 0x30 (8)
	struct Unknown LensSettings; // 0x38 (4)
	struct Unknown FocusSettings; // 0x3C (8)
	float CurrentFocalLength; // 0x44 (4)
	float CurrentAperture; // 0x48 (4)
	struct Unknown PostProcessSettings; // 0x50 (64)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
class ADatasmithImportedSequencesActor : public UActor {

public:

	struct TArray<Unknown> ImportedSequences; // 0x310 (16)

	void PlayLevelSequence(struct Unknown SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16B5B80>
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase {

public:

	struct Unknown options; // 0x28 (16)
};

// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UDatasmithOptionsBase {

public:

	enum class Unknow SearchPackagePolicy; // 0x28 (1)
	enum class Unknow MaterialConflictPolicy; // 0x29 (1)
	enum class Unknow TextureConflictPolicy; // 0x2A (1)
	enum class Unknow StaticMeshActorImportPolicy; // 0x2B (1)
	enum class Unknow LightImportPolicy; // 0x2C (1)
	enum class Unknow CameraImportPolicy; // 0x2D (1)
	enum class Unknow OtherActorImportPolicy; // 0x2E (1)
	enum class Unknow MaterialQuality; // 0x2F (1)
	struct Unknown BaseOptions; // 0x34 (20)
	struct Unknown ReimportOptions; // 0x48 (2)
	struct FString Filename; // 0x50 (16)
	struct FString FilePath; // 0x60 (16)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate {

public:

	struct Unknown LandscapeMaterial; // 0x30 (8)
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
	struct Unknown LightColor; // 0x44 (16)
	struct Unknown LightFunctionMaterial; // 0x58 (8)
	struct Unknown IESTexture; // 0x60 (8)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {

public:

	struct Unknown ParentMaterial; // 0x30 (40)
	struct TMap<Unknown, Unknown> ScalarParameterValues; // 0x58 (80)
	struct TMap<Unknown, Unknown> VectorParameterValues; // 0xA8 (80)
	struct TMap<Unknown, Unknown> TextureParameterValues; // 0xF8 (80)
	struct Unknown StaticParameters; // 0x148 (80)
};

// Class DatasmithContent.DatasmithPointLightComponentTem
class UDatasmithPointLightComponentTem : public UDatasmithObjectTemplate {

public:

	enum class Unknow IntensityUnits; // 0x30 (1)
	float SourceRadius; // 0x34 (4)
	float SourceLength; // 0x38 (4)
	float AttenuationRadius; // 0x3C (4)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate {

public:

	struct Unknown Settings; // 0x30 (64)
	char bEnabled : 0; // 0x70 (1)
	char bUnbound : 0; // 0x70 (1)
};

// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public UActor {

public:

	struct Unknown Scene; // 0x310 (8)
	struct TMap<Unknown, Unknown> RelatedActors; // 0x318 (80)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate {

public:

	struct Unknown RelativeTransform; // 0x30 (48)
	char Mobility; // 0x60 (1)
	struct Unknown AttachParent; // 0x68 (40)
	struct TSet<Unknown> Tags; // 0x90 (80)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {

public:

	char SourceType; // 0x30 (1)
	int32_t CubemapResolution; // 0x34 (4)
	struct Unknown Cubemap; // 0x38 (8)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {

public:

	float InnerConeAngle; // 0x30 (4)
	float OuterConeAngle; // 0x34 (4)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTem
class UDatasmithStaticMeshComponentTem : public UDatasmithObjectTemplate {

public:

	struct Unknown StaticMesh; // 0x30 (8)
	struct TArray<Unknown> OverrideMaterials; // 0x38 (16)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {

public:

	struct Unknown SectionInfoMap; // 0x30 (80)
	int32_t LightMapCoordinateIndex; // 0x80 (4)
	int32_t LightMapResolution; // 0x84 (4)
	struct TArray<Unknown> BuildSettings; // 0x88 (16)
	struct TArray<Unknown> StaticMaterials; // 0x98 (16)
};

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackePTem
struct FDatasmithCameraLookatTrack {
	char bEnableLookAtTracking : 0; // 0x0 (1)
	char bAllowRoll : 0; // 0x0 (1)
	struct Unknown ActorToTrack; // 0x8 (40)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTem
struct FDatasmithPostProcessSettingsTem {
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
	struct Unknown FilmWhitePoint; // 0x10 (16)
	struct Unknown ColorSaturation; // 0x20 (16)
	char AutoExposureMethod; // 0x30 (1)
	float CameraISO; // 0x34 (4)
	float CameraShutterSpeed; // 0x38 (4)
	float DepthOfFieldFstop; // 0x3C (4)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTem
struct FDatasmithCameraFocusSettingsTem {
	enum class Unknow FocusMethod; // 0x0 (1)
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
	enum class Unknow StitchingTechnique; // 0xC (1)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
struct FDatasmithImportBaseOptions {
	enum class Unknow SceneHandling; // 0x0 (1)
	char bIncludeGeometry : 0; // 0x1 (1)
	char bIncludeMaterial : 0; // 0x2 (1)
	char bIncludeLight : 0; // 0x3 (1)
	char bIncludeCamera : 0; // 0x4 (1)
	char bIncludeAnimation : 0; // 0x5 (1)
	struct Unknown AssetOptions; // 0x8 (8)
	struct Unknown StaticMeshOptions; // 0x10 (4)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
struct FDatasmithStaticMeshImportOptions {
	enum class Unknow MinLightmapResolution; // 0x0 (1)
	enum class Unknow MaxLightmapResolution; // 0x1 (1)
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
	struct TMap<Unknown, Unknown> StaticSwitchParameters; // 0x0 (80)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMk
struct FDatasmithMeshSectionInfoMk {
	struct TMap<Unknown, Unknown> Map; // 0x0 (80)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0 (4)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
struct FDatasmithStaticMaterialTemplate {
	struct FName MaterialSlotName; // 0x0 (8)
	struct Unknown MaterialInterface; // 0x8 (8)
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

