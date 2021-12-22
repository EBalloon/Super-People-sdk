// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8 {
	EDatasmithAreaLightActorType = 0,
	EDatasmithAreaLightActorType = 1,
	EDatasmithAreaLightActorType = 2,
	EDatasmithAreaLightActorType = 3
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8 {
	EDatasmithAreaLightActorShape = 0,
	EDatasmithAreaLightActorShape = 1,
	EDatasmithAreaLightActorShape = 2,
	EDatasmithAreaLightActorShape = 3,
	EDatasmithAreaLightActorShape = 4,
	EDatasmithAreaLightActorShape = 5
};

// Enum DatasmithContent.EDatasmithCA
enum class EDatasmithCA : uint8 {
	EDatasmithCA = 0,
	EDatasmithCA = 1,
	EDatasmithCA = 2,
	EDatasmithCA = 3
};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8 {
	EDatasmithImportHierarchy = 0,
	EDatasmithImportHierarchy = 1,
	EDatasmithImportHierarchy = 2,
	EDatasmithImportHierarchy = 3
};

// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8 {
	EDatasmithImportScene = 0,
	EDatasmithImportScene = 1,
	EDatasmithImportScene = 2,
	EDatasmithImportScene = 3
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8 {
	EDatasmithImportLightmapMax_65 = 0,
	EDatasmithImportLightmapMax_129 = 1,
	EDatasmithImportLightmapMax_257 = 2,
	EDatasmithImportLightmapMax_513 = 3,
	EDatasmithImportLightmapMax_1025 = 4,
	EDatasmithImportLightmapMax_2049 = 5,
	EDatasmithImportLightmapMax_4097 = 6,
	EDatasmithImportLightmapMax = 7
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8 {
	EDatasmithImportLightmapMin_17 = 0,
	EDatasmithImportLightmapMin_33 = 1,
	EDatasmithImportLightmapMin_65 = 2,
	EDatasmithImportLightmapMin_129 = 3,
	EDatasmithImportLightmapMin_257 = 4,
	EDatasmithImportLightmapMin_513 = 5,
	EDatasmithImportLightmapMin = 6
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8 {
	EDatasmithImportMaterialQuality = 0,
	EDatasmithImportMaterialQuality = 1,
	EDatasmithImportMaterialQuality = 2,
	EDatasmithImportMaterialQuality = 3
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8 {
	EDatasmithImportActorPolicy = 0,
	EDatasmithImportActorPolicy = 1,
	EDatasmithImportActorPolicy = 2,
	EDatasmithImportActorPolicy = 3
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8 {
	EDatasmithImportAssetConflictPolicy = 0,
	EDatasmithImportAssetConflictPolicy = 1,
	EDatasmithImportAssetConflictPolicy = 2,
	EDatasmithImportAssetConflictPolicy = 3,
	EDatasmithImportAssetConflictPolicy = 4
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8 {
	EDatasmithImportSearchPackagePolicy = 0,
	EDatasmithImportSearchPackagePolicy = 1,
	EDatasmithImportSearchPackagePolicy = 2
};

// Class DatasmithContent.DatasmithActorTemplate
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	struct TSet<Unknown> Layers; //  0x30 Size(50)
	struct TSet<Unknown> Tags; //  0x80 Size(50)
};

// Class DatasmithContent.DatasmithAreaLightActor
struct ADatasmithAreaLightActor : UActor {
	enum class Unknow LightType; //  0x310 Size(1)
	enum class Unknow LightShape; //  0x311 Size(1)
	struct Unknown Dimensions; //  0x314 Size(8)
	float Intensity; //  0x31c Size(4)
	enum class Unknow IntensityUnits; //  0x320 Size(1)
	struct Unknown Color; //  0x324 Size(10)
	float Temperature; //  0x334 Size(4)
	struct Unknown IESTexture; //  0x338 Size(8)
	char bUseIESBrightness; //  0x340 Size(1)
	float IESBrightnessScale; //  0x344 Size(4)
	struct Unknown Rotation; //  0x348 Size(c)
	float SourceRadius; //  0x354 Size(4)
	float SourceLength; //  0x358 Size(4)
	float AttenuationRadius; //  0x35c Size(4)
	float SpotlightInnerAngle; //  0x360 Size(4)
	float SpotlightOuterAngle; //  0x364 Size(4)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class Unknow LightType; //  0x30 Size(1)
	enum class Unknow LightShape; //  0x31 Size(1)
	struct Unknown Dimensions; //  0x34 Size(8)
	struct Unknown Color; //  0x3c Size(10)
	float Intensity; //  0x4c Size(4)
	enum class Unknow IntensityUnits; //  0x50 Size(1)
	float Temperature; //  0x54 Size(4)
	struct TSoftObjectPtr<Unknown> IESTexture; //  0x58 Size(28)
	char bUseIESBrightness; //  0x80 Size(1)
	float IESBrightnessScale; //  0x84 Size(4)
	struct Unknown Rotation; //  0x88 Size(c)
	float SourceRadius; //  0x94 Size(4)
	float SourceLength; //  0x98 Size(4)
	float AttenuationRadius; //  0x9c Size(4)
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImport {
	struct FString Generator; //  0x28 Size(10)
	float Version; //  0x38 Size(4)
	struct FString Author; //  0x40 Size(10)
	struct FString License; //  0x50 Size(10)
	struct FString Source; //  0x60 Size(10)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; //  0x28 Size(10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportDrtD {
	char bGenerateLightmapUVs; //  0x28 Size(1)
	struct FString TexturesDir; //  0x30 Size(10)
	char IntermediateSerialization; //  0x40 Size(1)
	char bColorizeMaterials; //  0x41 Size(1)
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	char bMergeNodes; //  0x48 Size(1)
	char bOptimizeDuplicatedNodes; //  0x49 Size(1)
	char bRemoveInvisibleNodes; //  0x4a Size(1)
	char bSimplifyNodeHierarchy; //  0x4b Size(1)
	char bImportVar; //  0x4c Size(1)
	struct FString VarPath; //  0x50 Size(10)
	char bImportPos; //  0x60 Size(1)
	struct FString PosPath; //  0x68 Size(10)
	char bImportTml; //  0x78 Size(1)
	struct FString TmlPath; //  0x80 Size(10)
};

// Class DatasmithContent.DatasmithVRE
struct UDatasmithVRE : UDatasmithFBXSceneImportData {
	char bMergeNodes; //  0x48 Size(1)
	char bOptimizeDuplicatedNodes; //  0x49 Size(1)
	char bImportMats; //  0x4a Size(1)
	struct FString MatsPath; //  0x50 Size(10)
	char bImportVar; //  0x60 Size(1)
	char bCleanVar; //  0x61 Size(1)
	struct FString VarPath; //  0x68 Size(10)
	char bImportLightInfo; //  0x78 Size(1)
	struct FString LightInfoPath; //  0x80 Size(10)
	char bImportClipInfo; //  0x90 Size(1)
	struct FString ClipInfoPath; //  0x98 Size(10)
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; //  0x28 Size(10)
};

// Class DatasmithContent.DatasmithAssetUserData
struct UDatasmithAssetUserData : UAssetUserData {
	struct TMap<{}, {}>Unknown Meta; //  0x28 Size(50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	struct Unknown LookatTrackingSettings; //  0x30 Size(30)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	struct Unknown FilmbackSettings; //  0x30 Size(8)
	struct Unknown LensSettings; //  0x38 Size(4)
	struct Unknown FocusSettings; //  0x3c Size(8)
	float CurrentFocalLength; //  0x44 Size(4)
	float CurrentAperture; //  0x48 Size(4)
	struct Unknown PostProcessSettings; //  0x50 Size(40)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
struct ADatasmithImportedSequencesActor : UActor {
	struct TArray<Unknown> ImportedSequences; //  0x310 Size(10)

	void PlayLevelSequence(struct Unknown SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence(Final|Native|Public|BlueprintCallable) // <Game+0x16b4710>
};

// Class DatasmithContent.DatasmithCommonTessellationOpti
struct UDatasmithCommonTessellationOpti : UDatasmithOptionsBase {
	struct Unknown options; //  0x28 Size(10)
};

// Class DatasmithContent.DatasmithImportOptions
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class Unknow SearchPackagePolicy; //  0x28 Size(1)
	enum class Unknow MaterialConflictPolicy; //  0x29 Size(1)
	enum class Unknow TextureConflictPolicy; //  0x2a Size(1)
	enum class Unknow StaticMeshActorImportPolicy; //  0x2b Size(1)
	enum class Unknow LightImportPolicy; //  0x2c Size(1)
	enum class Unknow CameraImportPolicy; //  0x2d Size(1)
	enum class Unknow OtherActorImportPolicy; //  0x2e Size(1)
	enum class Unknow MaterialQuality; //  0x2f Size(1)
	struct Unknown BaseOptions; //  0x34 Size(14)
	struct Unknown ReimportOptions; //  0x48 Size(2)
	struct FString Filename; //  0x50 Size(10)
	struct FString FilePath; //  0x60 Size(10)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	struct Unknown LandscapeMaterial; //  0x30 Size(8)
	int32_t StaticLightingLOD; //  0x38 Size(4)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible; //  0x30 Size(1)
	char CastShadows; //  0x34 Size(1)
	char bUseTemperature; //  0x34 Size(1)
	char bUseIESBrightness; //  0x34 Size(1)
	float Intensity; //  0x38 Size(4)
	float Temperature; //  0x3c Size(4)
	float IESBrightnessScale; //  0x40 Size(4)
	struct Unknown LightColor; //  0x44 Size(10)
	struct Unknown LightFunctionMaterial; //  0x58 Size(8)
	struct Unknown IESTexture; //  0x60 Size(8)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	struct TSoftObjectPtr<Unknown> ParentMaterial; //  0x30 Size(28)
	struct TMap<{}, {}>Unknown ScalarParameterValues; //  0x58 Size(50)
	struct TMap<{}, {}>Unknown VectorParameterValues; //  0xa8 Size(50)
	struct TMap<{}, {}>Unknown TextureParameterValues; //  0xf8 Size(50)
	struct Unknown StaticParameters; //  0x148 Size(50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class Unknow IntensityUnits; //  0x30 Size(1)
	float SourceRadius; //  0x34 Size(4)
	float SourceLength; //  0x38 Size(4)
	float AttenuationRadius; //  0x3c Size(4)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	struct Unknown Settings; //  0x30 Size(40)
	char bEnabled; //  0x70 Size(1)
	char bUnbound; //  0x70 Size(1)
};

// Class DatasmithContent.DatasmithSceneActor
struct ADatasmithSceneActor : UActor {
	struct Unknown Scene; //  0x310 Size(8)
	struct TMap<{}, {}>Unknown RelatedActors; //  0x318 Size(50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	struct Unknown RelativeTransform; //  0x30 Size(30)
	char Mobility; //  0x60 Size(1)
	struct TSoftObjectPtr<Unknown> AttachParent; //  0x68 Size(28)
	struct TSet<Unknown> Tags; //  0x90 Size(50)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	char SourceType; //  0x30 Size(1)
	int32_t CubemapResolution; //  0x34 Size(4)
	struct Unknown Cubemap; //  0x38 Size(8)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; //  0x30 Size(4)
	float OuterConeAngle; //  0x34 Size(4)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	struct Unknown StaticMesh; //  0x30 Size(8)
	struct TArray<Unknown> OverrideMaterials; //  0x38 Size(10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	struct Unknown SectionInfoMap; //  0x30 Size(50)
	int32_t LightMapCoordinateIndex; //  0x80 Size(4)
	int32_t LightMapResolution; //  0x84 Size(4)
	struct TArray<Unknown> BuildSettings; //  0x88 Size(10)
	struct TArray<Unknown> StaticMaterials; //  0x98 Size(10)
};

