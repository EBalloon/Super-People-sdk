// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8_t {
	Coords = 0,
	TexCoords = 1,
	Normals = 2,
	Tangents = 3,
	Bitangents = 4,
	Colors = 5,
	TriangleIds = 6,
	MaterialIds = 7,
	EGeometryDataFieldType_MAX = 8,
};

// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8_t {
	R8G8B8A8 = 0,
	R8G8B8 = 1,
	R8 = 2,
	R16G16B16A16 = 3,
	R16G16B16 = 4,
	R16 = 5,
	EOutputPixelFormat_MAX = 6,
};

// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8_t {
	Opacity = 0,
	Transparency = 1,
	EOutputOpacityType_MAX = 2,
};

// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : int32_t {
	NoCompression = -1,
	BC1 = 0,
	BC2 = 1,
	BC3 = 2,
	BC4 = 3,
	BC5 = 4,
	EOutputDDSCompressionType_MAX = 5,
};

// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8_t {
	BMP = 0,
	DDS = 1,
	JPEG = 2,
	PNG = 3,
	TGA = 4,
	TIFF = 5,
	EOutputImageFileFormat_MAX = 6,
};

// Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8_t {
	Interpolate = 0,
	NearestNeighbor = 1,
	NoFill = 2,
	EFillMode_MAX = 3,
};

// Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8_t {
	NoDither = 0,
	FloydSteinberg = 1,
	JarvisJudiceNinke = 2,
	Sierra = 3,
	EDitherType_MAX = 4,
};

// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EOpacityChannelComponent_MAX = 4,
};

// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8_t {
	Fast = 0,
	Accurate = 1,
	ESurfaceTransferMode_MAX = 2,
};

// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8_t {
	Outside = 0,
	Inside = 1,
	Manual = 2,
	ERemeshingMode_MAX = 3,
};

// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8_t {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EHoleFilling_MAX = 4,
};

// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8_t {
	LargestInstance = 0,
	SmallestInstance = 1,
	Average = 2,
	ESurfaceAreaScale_MAX = 3,
};

// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8_t {
	TextureSizeProportions = 0,
	SurfaceArea = 1,
	OriginalPixelDensity = 2,
	UVSizeProportions = 3,
	EChartAggregatorMode_MAX = 4,
};

// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8_t {
	Parameterizer = 0,
	ChartAggregator = 1,
	ETexCoordGeneratorType_MAX = 2,
};

// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8_t {
	Standard = 0,
	High = 1,
	Low = 2,
	EWeightsFromColorMode_MAX = 3,
};

// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EWeightsFromColorComponent_MAX = 4,
};

// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8_t {
	Any = 0,
	All = 1,
	EBoneReductionTargetStopCondition_MAX = 2,
};

// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8_t {
	DirectX = 0,
	Software = 1,
	EComputeVisibilityMode_MAX = 2,
};

// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8_t {
	OnlyUseOriginalData = 0,
	PreferOriginalData = 1,
	PreferOptimizedResult = 2,
	EDataCreationPreferences_MAX = 3,
};

// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8_t {
	X = 0,
	Y = 1,
	Z = 2,
	ESymmetryAxis_MAX = 3,
};

// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8_t {
	Fast = 0,
	Consistent = 1,
	EReductionHeuristics_MAX = 2,
};

// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8_t {
	Any = 0,
	All = 1,
	EReductionTargetStopCondition_MAX = 2,
};

// Class SimplygonUObjects.StandinNearPipeline
class UStandinNearPipeline : public USimplygonStandinPipeline {

public:

	struct FAggregationPipelineSettings Settings; // 0x28 (432)
};

// Class SimplygonUObjects.StandinFarPipeline
class UStandinFarPipeline : public USimplygonStandinPipeline {

public:

	struct FRemeshingPipelineSettings Settings; // 0x28 (448)
};

// Class SimplygonUObjects.SimplygonColorCaster
class USimplygonColorCaster : public USimplygonMaterialCaster {

public:

	struct FColorCasterSettings ColorCasterSettings; // 0x28 (80)
};

// Class SimplygonUObjects.SimplygonNormalCaster
class USimplygonNormalCaster : public USimplygonMaterialCaster {

public:

	struct FNormalCasterSettings NormalCasterSettings; // 0x28 (80)
};

// Class SimplygonUObjects.ReductionPipeline
class UReductionPipeline : public USimplygonPipeline {

public:

	struct FReductionPipelineSettings Settings; // 0x28 (560)
};

// Class SimplygonUObjects.RemeshingPipeline
class URemeshingPipeline : public USimplygonPipeline {

public:

	struct FRemeshingPipelineSettings Settings; // 0x28 (448)
};

// Class SimplygonUObjects.AggregationPipeline
class UAggregationPipeline : public USimplygonPipeline {

public:

	struct FAggregationPipelineSettings Settings; // 0x28 (432)
};

// Class SimplygonUObjects.SimplygonOpacityCaster
class USimplygonOpacityCaster : public USimplygonMaterialCaster {

public:

	struct FOpacityCasterSettings OpacityCasterSettings; // 0x28 (72)
};

// Class SimplygonUObjects.SimplygonDisplacementCaster
class USimplygonDisplacementCaster : public USimplygonMaterialCaster {

public:

	struct FDisplacementCasterSettings DisplacementCasterSettings; // 0x28 (88)
};

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
class USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster {

public:

	struct FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings; // 0x28 (88)
};

// Class SimplygonUObjects.SimplygonGeometryDataCaster
class USimplygonGeometryDataCaster : public USimplygonMaterialCaster {

public:

	struct FGeometryDataCasterSettings GeometryDataCasterSettings; // 0x30 (144)
};

// Class SimplygonUObjects.SimplygonVertexColorCaster
class USimplygonVertexColorCaster : public USimplygonMaterialCaster {

public:

	struct FVertexColorCasterSettings VertexColorCasterSettings; // 0x28 (96)
};

// ScriptStruct SimplygonUObjects.AggregationPipelineSettings
struct FAggregationPipelineSettings : FSimplygonPipelineSettings {
	struct FAggregationSettings AggregationSettings; // 0x8 (40)
	struct FVisibilitySettings VisibilitySettings; // 0x30 (72)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x78 (48)
	struct FVertexWeightSettings VertexWeightSettings; // 0xA8 (40)
	struct FMappingImageSettings MappingImageSettings; // 0xD0 (168)
	struct FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings; // 0x178 (40)
	struct TArray<struct USimplygonMaterialCaster> MaterialPropertyCasters; // 0x1A0 (16)
};

// ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
struct FGenerateLightmapTexCoordSettings {
	char GenerateLightmapTexCoord : 0; // 0x0 (1)
	int32_t LightmapTexCoordLevel; // 0x4 (4)
	struct FString LightmapTexCoordName; // 0x8 (16)
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x18 (4)
	uint32_t TextureWidth; // 0x1C (4)
	uint32_t TextureHeight; // 0x20 (4)
	uint32_t GutterSpace; // 0x24 (4)
};

// ScriptStruct SimplygonUObjects.MappingImageSettings
struct FMappingImageSettings {
	char GenerateMappingImage : 0; // 0x0 (1)
	char GenerateTexCoords : 0; // 0x0 (1)
	char GenerateTangents : 0; // 0x0 (1)
	uint32_t InputMaterialCount; // 0x4 (4)
	char UseFullRetexturing : 0; // 0x8 (1)
	char ApplyNewMaterialIds : 0; // 0x8 (1)
	uint32_t OutputMaterialCount; // 0xC (4)
	char ReplaceMappingImages : 0; // 0x10 (1)
	uint32_t MaximumLayers; // 0x14 (4)
	char AllowTransparencyMapping : 0; // 0x18 (1)
	char UseAutomaticTextureSize : 0; // 0x18 (1)
	float AutomaticTextureSizeMultiplier; // 0x1C (4)
	char ForcePower2Texture : 0; // 0x20 (1)
	char OnlyParameterizeInvalidUVs : 0; // 0x20 (1)
	int32_t TexCoordLevel; // 0x24 (4)
	struct FString TexCoordName; // 0x28 (16)
	enum class ETexCoordGeneratorType TexCoordGeneratorType; // 0x38 (4)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x40 (16)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x50 (16)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x60 (64)
	struct FParameterizerSettings ParameterizerSettings; // 0xA0 (8)
};

// ScriptStruct SimplygonUObjects.ParameterizerSettings
struct FParameterizerSettings {
	float MaxStretch; // 0x0 (4)
	float LargeChartsImportance; // 0x4 (4)
};

// ScriptStruct SimplygonUObjects.ChartAggregatorSettings
struct FChartAggregatorSettings {
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x0 (4)
	enum class ESurfaceAreaScale SurfaceAreaScale; // 0x4 (4)
	int32_t OriginalTexCoordLevel; // 0x8 (4)
	struct FString OriginalTexCoordName; // 0x10 (16)
	char SeparateOverlappingCharts : 0; // 0x20 (1)
	struct FString OriginalChartProportionsChannel; // 0x28 (16)
	char LockUVRotation : 0; // 0x38 (1)
};

// ScriptStruct SimplygonUObjects.OutputMaterialSettings
struct FOutputMaterialSettings {
	uint32_t TextureWidth; // 0x0 (4)
	uint32_t TextureHeight; // 0x4 (4)
	uint32_t MultisamplingLevel; // 0x8 (4)
	uint32_t GutterSpace; // 0xC (4)
};

// ScriptStruct SimplygonUObjects.InputMaterialSettings
struct FInputMaterialSettings {
	int32_t MaterialMapping; // 0x0 (4)
};

// ScriptStruct SimplygonUObjects.VertexWeightSettings
struct FVertexWeightSettings {
	char UseVertexWeightsInReducer : 0; // 0x0 (1)
	char UseVertexWeightsInTexcoordGenerator : 0; // 0x0 (1)
	struct FString WeightsFromColorName; // 0x8 (16)
	int32_t WeightsFromColorLevel; // 0x18 (4)
	enum class EWeightsFromColorComponent WeightsFromColorComponent; // 0x1C (4)
	float WeightsFromColorMultiplier; // 0x20 (4)
	enum class EWeightsFromColorMode WeightsFromColorMode; // 0x24 (4)
};

// ScriptStruct SimplygonUObjects.GeometryCullingSettings
struct FGeometryCullingSettings {
	char UseClippingPlanes : 0; // 0x0 (1)
	int32_t ClippingPlaneSelectionSetID; // 0x4 (4)
	struct FString ClippingPlaneSelectionSetName; // 0x8 (16)
	char UseClippingGeometry : 0; // 0x18 (1)
	int32_t ClippingGeometrySelectionSetID; // 0x1C (4)
	struct FString ClippingGeometrySelectionSetName; // 0x20 (16)
};

// ScriptStruct SimplygonUObjects.VisibilitySettings
struct FVisibilitySettings {
	char UseVisibilityWeightsInReducer : 0; // 0x0 (1)
	char UseVisibilityWeightsInTexcoordGenerator : 0; // 0x0 (1)
	float VisibilityWeightsPower; // 0x4 (4)
	char CullOccludedGeometry : 0; // 0x8 (1)
	char ForceVisibilityCalculation : 0; // 0x8 (1)
	char UseBackfaceCulling : 0; // 0x8 (1)
	int32_t CameraSelectionSetID; // 0xC (4)
	struct FString CameraSelectionSetName; // 0x10 (16)
	int32_t OccluderSelectionSetID; // 0x20 (4)
	struct FString OccluderSelectionSetName; // 0x28 (16)
	float FillNonVisibleAreaThreshold; // 0x38 (4)
	char RemoveTrianglesNotOccludingOtherTriangles : 0; // 0x3C (1)
	char ConservativeMode : 0; // 0x3C (1)
	enum class EComputeVisibilityMode ComputeVisibilityMode; // 0x40 (4)
};

// ScriptStruct SimplygonUObjects.AggregationSettings
struct FAggregationSettings {
	char MergeGeometries : 0; // 0x0 (1)
	int32_t ProcessSelectionSetID; // 0x4 (4)
	struct FString ProcessSelectionSetName; // 0x8 (16)
	char KeepUnprocessedSceneMeshes : 0; // 0x18 (1)
	char EnableGeometryCulling : 0; // 0x18 (1)
	float GeometryCullingPrecision; // 0x1C (4)
	char SubdivideGeometryBasedOnUVTiles : 0; // 0x20 (1)
	uint32_t SubdivisionTileSize; // 0x24 (4)
};

// ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
struct FRemeshingPipelineSettings : FSimplygonPipelineSettings {
	struct FRemeshingSettings RemeshingSettings; // 0x8 (56)
	struct FBoneSettings BoneSettings; // 0x40 (80)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x90 (48)
	struct FVisibilitySettings VisibilitySettings; // 0xC0 (72)
	struct FMappingImageSettings MappingImageSettings; // 0x108 (168)
	struct TArray<struct USimplygonMaterialCaster> MaterialPropertyCasters; // 0x1B0 (16)
};

// ScriptStruct SimplygonUObjects.BoneSettings
struct FBoneSettings {
	char UseBoneReducer : 0; // 0x0 (1)
	char BoneReductionTargetBoneRatioEnabled : 0; // 0x0 (1)
	char RemoveUnusedBones : 0; // 0x0 (1)
	char LimitBonesPerVertex : 0; // 0x0 (1)
	char BoneReductionTargetBoneCountEnabled : 0; // 0x0 (1)
	char BoneReductionTargetMaxDeviationEnabled : 0; // 0x0 (1)
	uint32_t MaxBonePerVertex; // 0x4 (4)
	char BoneReductionTargetOnScreenSizeEnabled : 0; // 0x8 (1)
	enum class EBoneReductionTargetStopCondition BoneReductionTargetStopCondition; // 0xC (4)
	float BoneReductionTargetBoneRatio; // 0x10 (4)
	uint32_t BoneReductionTargetBoneCount; // 0x14 (4)
	float BoneReductionTargetMaxDeviation; // 0x18 (4)
	uint32_t BoneReductionTargetOnScreenSize; // 0x1C (4)
	int32_t LockBoneSelectionSetID; // 0x20 (4)
	struct FString LockBoneSelectionSetName; // 0x28 (16)
	int32_t RemoveBoneSelectionSetID; // 0x38 (4)
	struct FString RemoveBoneSelectionSetName; // 0x40 (16)
};

// ScriptStruct SimplygonUObjects.RemeshingSettings
struct FRemeshingSettings {
	uint32_t OnScreenSize; // 0x0 (4)
	enum class EHoleFilling HoleFilling; // 0x4 (4)
	enum class ERemeshingMode RemeshingMode; // 0x8 (4)
	enum class ESurfaceTransferMode SurfaceTransferMode; // 0xC (4)
	float HardEdgeAngle; // 0x10 (4)
	char TransferNormals : 0; // 0x14 (1)
	char TransferColors : 0; // 0x14 (1)
	int32_t ProcessSelectionSetID; // 0x18 (4)
	struct FString ProcessSelectionSetName; // 0x20 (16)
	char KeepUnprocessedSceneMeshes : 0; // 0x30 (1)
};

// ScriptStruct SimplygonUObjects.ReductionPipelineSettings
struct FReductionPipelineSettings : FSimplygonPipelineSettings {
	struct FReductionSettings ReductionSettings; // 0x8 (144)
	struct FRepairSettings RepairSettings; // 0x98 (20)
	struct FNormalCalculationSettings NormalCalculationSettings; // 0xAC (12)
	struct FVisibilitySettings VisibilitySettings; // 0xB8 (72)
	struct FBoneSettings BoneSettings; // 0x100 (80)
	struct FVertexWeightSettings VertexWeightSettings; // 0x150 (40)
	struct FMappingImageSettings MappingImageSettings; // 0x178 (168)
	struct TArray<struct USimplygonMaterialCaster> MaterialPropertyCasters; // 0x220 (16)
};

// ScriptStruct SimplygonUObjects.NormalCalculationSettings
struct FNormalCalculationSettings {
	char ReplaceNormals : 0; // 0x0 (1)
	char ReplaceTangents : 0; // 0x0 (1)
	float HardEdgeAngle; // 0x4 (4)
	char RepairInvalidNormals : 0; // 0x8 (1)
	char ReorthogonalizeTangentSpace : 0; // 0x8 (1)
	char ScaleByArea : 0; // 0x8 (1)
	char ScaleByAngle : 0; // 0x8 (1)
	char SnapNormalsToFlatSurfaces : 0; // 0x8 (1)
};

// ScriptStruct SimplygonUObjects.RepairSettings
struct FRepairSettings {
	char UseTJunctionRemover : 0; // 0x0 (1)
	float TJuncDist; // 0x4 (4)
	float WeldDist; // 0x8 (4)
	char WeldOnlyBorderVertices : 0; // 0xC (1)
	char WeldOnlyWithinMaterial : 0; // 0xC (1)
	char WeldOnlyWithinSceneNode : 0; // 0xC (1)
	char WeldOnlyBetweenSceneNodes : 0; // 0xC (1)
	char UseWelding : 0; // 0xC (1)
	uint32_t ProgressivePasses; // 0x10 (4)
};

// ScriptStruct SimplygonUObjects.ReductionSettings
struct FReductionSettings {
	char ReductionTargetTriangleRatioEnabled : 0; // 0x0 (1)
	float ReductionTargetTriangleRatio; // 0x4 (4)
	char ReductionTargetTriangleCountEnabled : 0; // 0x8 (1)
	uint32_t ReductionTargetTriangleCount; // 0xC (4)
	char ReductionTargetMaxDeviationEnabled : 0; // 0x10 (1)
	float ReductionTargetMaxDeviation; // 0x14 (4)
	char ReductionTargetOnScreenSizeEnabled : 0; // 0x18 (1)
	uint32_t ReductionTargetOnScreenSize; // 0x1C (4)
	enum class EReductionTargetStopCondition ReductionTargetStopCondition; // 0x20 (4)
	enum class EReductionHeuristics ReductionHeuristics; // 0x24 (4)
	float GeometryImportance; // 0x28 (4)
	float MaterialImportance; // 0x2C (4)
	float TextureImportance; // 0x30 (4)
	float ShadingImportance; // 0x34 (4)
	float GroupImportance; // 0x38 (4)
	float VertexColorImportance; // 0x3C (4)
	float EdgeSetImportance; // 0x40 (4)
	float SkinningImportance; // 0x44 (4)
	float CurvatureImportance; // 0x48 (4)
	char CreateGeomorphGeometry : 0; // 0x4C (1)
	char AllowDegenerateTexCoords : 0; // 0x4C (1)
	char KeepSymmetry : 0; // 0x4C (1)
	char UseAutomaticSymmetryDetection : 0; // 0x4C (1)
	char UseSymmetryQuadRetriangulator : 0; // 0x4C (1)
	enum class ESymmetryAxis SymmetryAxis; // 0x50 (4)
	float SymmetryOffset; // 0x54 (4)
	float SymmetryDetectionTolerance; // 0x58 (4)
	enum class EDataCreationPreferences DataCreationPreferences; // 0x5C (4)
	char GenerateGeomorphData : 0; // 0x60 (1)
	float OutwardMoveMultiplier; // 0x64 (4)
	float InwardMoveMultiplier; // 0x68 (4)
	float MaxEdgeLength; // 0x6C (4)
	char UseHighQualityNormalCalculation : 0; // 0x70 (1)
	int32_t ProcessSelectionSetID; // 0x74 (4)
	struct FString ProcessSelectionSetName; // 0x78 (16)
	char MergeGeometries : 0; // 0x88 (1)
	char KeepUnprocessedSceneMeshes : 0; // 0x88 (1)
	char LockGeometricBorder : 0; // 0x88 (1)
};

// ScriptStruct SimplygonUObjects.VertexColorCasterSettings
struct FVertexColorCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	int32_t OutputColorLevel; // 0x34 (4)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	struct FString OutputColorName; // 0x48 (16)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x58 (4)
	float ColorSpaceEdgeThreshold; // 0x5C (4)
};

// ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
struct FGeometryDataCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	enum class EGeometryDataFieldType GeometryDataFieldType; // 0x34 (4)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	uint32_t GeometryDataFieldIndex; // 0x44 (4)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48 (4)
	float MappingInfR; // 0x4C (4)
	float MappingSupR; // 0x50 (4)
	float MappingInfG; // 0x54 (4)
	float MappingSupG; // 0x58 (4)
	float MappingInfB; // 0x5C (4)
	float MappingSupB; // 0x60 (4)
	float MappingInfA; // 0x64 (4)
	float MappingSupA; // 0x68 (4)
	struct FVector4 MappingInf; // 0x70 (16)
	struct FVector4 MappingSup; // 0x80 (16)
};

// ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
struct FAmbientOcclusionCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	uint32_t RaysPerPixel; // 0x34 (4)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	float OcclusionFalloff; // 0x44 (4)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48 (4)
	float OcclusionMultiplier; // 0x4C (4)
	char UseSimpleOcclusionMode : 0; // 0x50 (1)
};

// ScriptStruct SimplygonUObjects.DisplacementCasterSettings
struct FDisplacementCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	float DistanceScaling; // 0x34 (4)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	char GenerateScalarDisplacement : 0; // 0x44 (1)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48 (4)
	char GenerateTangentSpaceDisplacement : 0; // 0x4C (1)
	int32_t NormalMapTexCoordLevel; // 0x50 (4)
};

// ScriptStruct SimplygonUObjects.NormalCasterSettings
struct FNormalCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	char FlipBackfacingNormals : 0; // 0x30 (1)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x34 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x38 (4)
	uint32_t Dilation; // 0x3C (4)
	char GenerateTangentSpaceNormals : 0; // 0x40 (1)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x44 (4)
	char FlipGreen : 0; // 0x48 (1)
	char CalculateBitangentPerFragment : 0; // 0x48 (1)
	char NormalizeInterpolatedTangentSpace : 0; // 0x48 (1)
};

// ScriptStruct SimplygonUObjects.OpacityCasterSettings
struct FOpacityCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	char OutputSRGB : 0; // 0x30 (1)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x34 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x38 (4)
	uint32_t Dilation; // 0x3C (4)
	enum class EOutputOpacityType OutputOpacityType; // 0x40 (4)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x44 (4)
};

// ScriptStruct SimplygonUObjects.ColorCasterSettings
struct FColorCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10 (4)
	enum class EDitherType DitherType; // 0x14 (4)
	enum class EFillMode FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	char BakeOpacityInAlpha : 0; // 0x30 (1)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x34 (4)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x38 (4)
	uint32_t Dilation; // 0x3C (4)
	enum class EOutputOpacityType OutputOpacityType; // 0x40 (4)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x44 (4)
	char SkipCastingIfNoInputChannel : 0; // 0x48 (1)
	char OutputSRGB : 0; // 0x48 (1)
};

