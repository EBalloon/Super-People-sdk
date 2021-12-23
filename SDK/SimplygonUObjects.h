// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8 {
	EGeometryDataFieldType = 0
	EGeometryDataFieldType = 1
	EGeometryDataFieldType = 2
	EGeometryDataFieldType = 3
	EGeometryDataFieldType = 4
	EGeometryDataFieldType = 5
	EGeometryDataFieldType = 6
	EGeometryDataFieldType = 7
	EGeometryDataFieldType = 8
};

// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8 {
	EOutputPixelFormat = 0
	EOutputPixelFormat = 1
	EOutputPixelFormat = 2
	EOutputPixelFormat = 3
	EOutputPixelFormat = 4
	EOutputPixelFormat = 5
	EOutputPixelFormat = 6
};

// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8 {
	EOutputOpacityType = 0
	EOutputOpacityType = 1
	EOutputOpacityType = 2
};

// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : int32 {
	EOutputDDSCompressionType = -1
	EOutputDDSCompressionType = 0
	EOutputDDSCompressionType = 1
	EOutputDDSCompressionType = 2
	EOutputDDSCompressionType = 3
	EOutputDDSCompressionType = 4
	EOutputDDSCompressionType = 5
};

// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8 {
	EOutputImageFileFormat = 0
	EOutputImageFileFormat = 1
	EOutputImageFileFormat = 2
	EOutputImageFileFormat = 3
	EOutputImageFileFormat = 4
	EOutputImageFileFormat = 5
	EOutputImageFileFormat = 6
};

// Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8 {
	EFillMode = 0
	EFillMode = 1
	EFillMode = 2
	EFillMode = 3
};

// Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8 {
	EDitherType = 0
	EDitherType = 1
	EDitherType = 2
	EDitherType = 3
	EDitherType = 4
};

// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8 {
	EOpacityChannelComponent = 0
	EOpacityChannelComponent = 1
	EOpacityChannelComponent = 2
	EOpacityChannelComponent = 3
	EOpacityChannelComponent = 4
};

// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8 {
	ESurfaceTransferMode = 0
	ESurfaceTransferMode = 1
	ESurfaceTransferMode = 2
};

// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8 {
	ERemeshingMode = 0
	ERemeshingMode = 1
	ERemeshingMode = 2
	ERemeshingMode = 3
};

// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8 {
	EHoleFilling = 0
	EHoleFilling = 1
	EHoleFilling = 2
	EHoleFilling = 3
	EHoleFilling = 4
};

// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8 {
	ESurfaceAreaScale = 0
	ESurfaceAreaScale = 1
	ESurfaceAreaScale = 2
	ESurfaceAreaScale = 3
};

// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8 {
	EChartAggregatorMode = 0
	EChartAggregatorMode = 1
	EChartAggregatorMode = 2
	EChartAggregatorMode = 3
	EChartAggregatorMode = 4
};

// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8 {
	ETexCoordGeneratorType = 0
	ETexCoordGeneratorType = 1
	ETexCoordGeneratorType = 2
};

// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8 {
	EWeightsFromColorMode = 0
	EWeightsFromColorMode = 1
	EWeightsFromColorMode = 2
	EWeightsFromColorMode = 3
};

// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8 {
	EWeightsFromColorComponent = 0
	EWeightsFromColorComponent = 1
	EWeightsFromColorComponent = 2
	EWeightsFromColorComponent = 3
	EWeightsFromColorComponent = 4
};

// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8 {
	EBoneReductionTargetStopCondition = 0
	EBoneReductionTargetStopCondition = 1
	EBoneReductionTargetStopCondition = 2
};

// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8 {
	EComputeVisibilityMode = 0
	EComputeVisibilityMode = 1
	EComputeVisibilityMode = 2
};

// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8 {
	EDataCreationPreferences = 0
	EDataCreationPreferences = 1
	EDataCreationPreferences = 2
	EDataCreationPreferences = 3
};

// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8 {
	ESymmetryAxis = 0
	ESymmetryAxis = 1
	ESymmetryAxis = 2
	ESymmetryAxis = 3
};

// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8 {
	EReductionHeuristics = 0
	EReductionHeuristics = 1
	EReductionHeuristics = 2
};

// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8 {
	EReductionTargetStopCondition = 0
	EReductionTargetStopCondition = 1
	EReductionTargetStopCondition = 2
};

// Class SimplygonUObjects.StandinNearPipeline
class UStandinNearPipeline : USimplygonStandinPipeline {
	struct Unknown Settings; // 0x28 (432)
};

// Class SimplygonUObjects.StandinFarPipeline
class UStandinFarPipeline : USimplygonStandinPipeline {
	struct Unknown Settings; // 0x28 (448)
};

// Class SimplygonUObjects.SimplygonColorCaster
class USimplygonColorCaster : USimplygonMaterialCaster {
	struct Unknown ColorCasterSettings; // 0x28 (80)
};

// Class SimplygonUObjects.SimplygonNormalCaster
class USimplygonNormalCaster : USimplygonMaterialCaster {
	struct Unknown NormalCasterSettings; // 0x28 (80)
};

// Class SimplygonUObjects.ReductionPipeline
class UReductionPipeline : USimplygonPipeline {
	struct Unknown Settings; // 0x28 (560)
};

// Class SimplygonUObjects.RemeshingPipeline
class URemeshingPipeline : USimplygonPipeline {
	struct Unknown Settings; // 0x28 (448)
};

// Class SimplygonUObjects.AggregationPipeline
class UAggregationPipeline : USimplygonPipeline {
	struct Unknown Settings; // 0x28 (432)
};

// Class SimplygonUObjects.SimplygonOpacityCaster
class USimplygonOpacityCaster : USimplygonMaterialCaster {
	struct Unknown OpacityCasterSettings; // 0x28 (72)
};

// Class SimplygonUObjects.SimplygonDisplacementCaster
class USimplygonDisplacementCaster : USimplygonMaterialCaster {
	struct Unknown DisplacementCasterSettings; // 0x28 (88)
};

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
class USimplygonAmbientOcclusionCaster : USimplygonMaterialCaster {
	struct Unknown AmbientOcclusionCasterSettings; // 0x28 (88)
};

// Class SimplygonUObjects.SimplygonGeometryDataCaster
class USimplygonGeometryDataCaster : USimplygonMaterialCaster {
	struct Unknown GeometryDataCasterSettings; // 0x30 (144)
};

// Class SimplygonUObjects.SimplygonVertexColorCaster
class USimplygonVertexColorCaster : USimplygonMaterialCaster {
	struct Unknown VertexColorCasterSettings; // 0x28 (96)
};

// ScriptStruct SimplygonUObjects.AggregationPipelineSettings
struct FAggregationPipelineSettings : FSimplygonPipelineSettings {
	struct Unknown AggregationSettings; // 0x8 (40)
	struct Unknown VisibilitySettings; // 0x30 (72)
	struct Unknown GeometryCullingSettings; // 0x78 (48)
	struct Unknown VertexWeightSettings; // 0xA8 (40)
	struct Unknown MappingImageSettings; // 0xD0 (168)
	struct Unknown GenerateLightmapTexCoordSettings; // 0x178 (40)
	struct TArray<Unknown> MaterialPropertyCasters; // 0x1A0 (16)
};

// ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
struct FGenerateLightmapTexCoordSettings {
	char GenerateLightmapTexCoord : 0; // 0x0 (1)
	int32_t LightmapTexCoordLev; // 0x4 (4)
	struct FString LightmapTexCoordName; // 0x8 (16)
	enum class Unknow ChartAggregatorMode; // 0x18 (4)
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
	char OnlyParameterizeInv : 0; // 0x20 (1)
	int32_t TexCoordLevel; // 0x24 (4)
	struct FString TexCoordName; // 0x28 (16)
	enum class Unknow TexCoordGeneratorType; // 0x38 (4)
	struct TArray<Unknown> InputMaterialSettings; // 0x40 (16)
	struct TArray<Unknown> OutputMaterialSettings; // 0x50 (16)
	struct Unknown ChartAggregatorSettings; // 0x60 (64)
	struct Unknown ParameterizerSettings; // 0xA0 (8)
};

// ScriptStruct SimplygonUObjects.ParameterizerSettings
struct FParameterizerSettings {
	float MaxStretch; // 0x0 (4)
	float LargeChartsImportance; // 0x4 (4)
};

// ScriptStruct SimplygonUObjects.ChartAggregatorSettings
struct FChartAggregatorSettings {
	enum class Unknow ChartAggregatorMode; // 0x0 (4)
	enum class Unknow SurfaceAreaScale; // 0x4 (4)
	int32_t OriginalTexCoordLevin; // 0x8 (4)
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
	int32_t WeightsFromColorLev; // 0x18 (4)
	enum class Unknow WeightsFromColorComponent; // 0x1C (4)
	float WeightsFromColorMultiplier; // 0x20 (4)
	enum class Unknow WeightsFromColorMode; // 0x24 (4)
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
	enum class Unknow ComputeVisibilityMode; // 0x40 (4)
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
	struct Unknown RemeshingSettings; // 0x8 (56)
	struct Unknown BoneSettings; // 0x40 (80)
	struct Unknown GeometryCullingSettings; // 0x90 (48)
	struct Unknown VisibilitySettings; // 0xC0 (72)
	struct Unknown MappingImageSettings; // 0x108 (168)
	struct TArray<Unknown> MaterialPropertyCasters; // 0x1B0 (16)
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
	enum class Unknow BoneReductionTargetStopCondition; // 0xC (4)
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
	enum class Unknow HoleFilling; // 0x4 (4)
	enum class Unknow RemeshingMode; // 0x8 (4)
	enum class Unknow SurfaceTransferMode; // 0xC (4)
	float HardEdgeAngle; // 0x10 (4)
	char TransferNormals : 0; // 0x14 (1)
	char TransferColors : 0; // 0x14 (1)
	int32_t ProcessSelectionSetID; // 0x18 (4)
	struct FString ProcessSelectionSetName; // 0x20 (16)
	char KeepUnprocessedSceneMeshes : 0; // 0x30 (1)
};

// ScriptStruct SimplygonUObjects.ReductionPipelineSettings
struct FReductionPipelineSettings : FSimplygonPipelineSettings {
	struct Unknown ReductionSettings; // 0x8 (144)
	struct Unknown RepairSettings; // 0x98 (20)
	struct Unknown NormalCalculationSettings; // 0xAC (12)
	struct Unknown VisibilitySettings; // 0xB8 (72)
	struct Unknown BoneSettings; // 0x100 (80)
	struct Unknown VertexWeightSettings; // 0x150 (40)
	struct Unknown MappingImageSettings; // 0x178 (168)
	struct TArray<Unknown> MaterialPropertyCasters; // 0x220 (16)
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
	enum class Unknow ReductionTargetStopCondition; // 0x20 (4)
	enum class Unknow ReductionHeuristics; // 0x24 (4)
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
	enum class Unknow SymmetryAxis; // 0x50 (4)
	float SymmetryOffset; // 0x54 (4)
	float SymmetryDetectionTolerance; // 0x58 (4)
	enum class Unknow DataCreationPreferences; // 0x5C (4)
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
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	int32_t OutputColorLevel; // 0x34 (4)
	enum class Unknow OutputImageFileFormat; // 0x38 (4)
	enum class Unknow OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	struct FString OutputColorName; // 0x48 (16)
	enum class Unknow OutputPixelFormat; // 0x58 (4)
	float ColorSpaceEdgeThreshold; // 0x5C (4)
};

// ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
struct FGeometryDataCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	enum class Unknow GeometryDataFieldType; // 0x34 (4)
	enum class Unknow OutputImageFileFormat; // 0x38 (4)
	enum class Unknow OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	uint32_t GeometryDataFieldIndex; // 0x44 (4)
	enum class Unknow OutputPixelFormat; // 0x48 (4)
	float MappingInfR; // 0x4C (4)
	float MappingSupR; // 0x50 (4)
	float MappingInfG; // 0x54 (4)
	float MappingSupG; // 0x58 (4)
	float MappingInfB; // 0x5C (4)
	float MappingSupB; // 0x60 (4)
	float MappingInfA; // 0x64 (4)
	float MappingSupA; // 0x68 (4)
	struct Unknown MappingInf; // 0x70 (16)
	struct Unknown MappingSup; // 0x80 (16)
};

// ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
struct FAmbientOcclusionCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	uint32_t RaysPerPixel; // 0x34 (4)
	enum class Unknow OutputImageFileFormat; // 0x38 (4)
	enum class Unknow OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	float OcclusionFalloff; // 0x44 (4)
	enum class Unknow OutputPixelFormat; // 0x48 (4)
	float OcclusionMultiplier; // 0x4C (4)
	char UseSimpleOcclusionMode : 0; // 0x50 (1)
};

// ScriptStruct SimplygonUObjects.DisplacementCasterSettings
struct FDisplacementCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	float DistanceScaling; // 0x34 (4)
	enum class Unknow OutputImageFileFormat; // 0x38 (4)
	enum class Unknow OutputDDSCompressionType; // 0x3C (4)
	uint32_t Dilation; // 0x40 (4)
	char GenerateScalarDisplacement : 0; // 0x44 (1)
	enum class Unknow OutputPixelFormat; // 0x48 (4)
	char GenerateTangentSpaceDisplacement : 0; // 0x4C (1)
	int32_t NormalMapTexCoordLevel; // 0x50 (4)
};

// ScriptStruct SimplygonUObjects.NormalCasterSettings
struct FNormalCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	char FlipBackfacingNormals : 0; // 0x30 (1)
	enum class Unknow OutputImageFileFormat; // 0x34 (4)
	enum class Unknow OutputDDSCompressionType; // 0x38 (4)
	uint32_t Dilation; // 0x3C (4)
	char GenerateTangentSpaceNormals : 0; // 0x40 (1)
	enum class Unknow OutputPixelFormat; // 0x44 (4)
	char FlipGreen : 0; // 0x48 (1)
	char CalculateBitangentPerFragment : 0; // 0x48 (1)
	char NormalizeInterpolatedTangentSpace : 0; // 0x48 (1)
};

// ScriptStruct SimplygonUObjects.OpacityCasterSettings
struct FOpacityCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	char OutputSRGB : 0; // 0x30 (1)
	enum class Unknow OutputImageFileFormat; // 0x34 (4)
	enum class Unknow OutputDDSCompressionType; // 0x38 (4)
	uint32_t Dilation; // 0x3C (4)
	enum class Unknow OutputOpacityType; // 0x40 (4)
	enum class Unknow OutputPixelFormat; // 0x44 (4)
};

// ScriptStruct SimplygonUObjects.ColorCasterSettings
struct FColorCasterSettings {
	struct FString MaterialChannel; // 0x0 (16)
	enum class Unknow OpacityChannelComponent; // 0x10 (4)
	enum class Unknow DitherType; // 0x14 (4)
	enum class Unknow FillMode; // 0x18 (4)
	struct FString OpacityChannel; // 0x20 (16)
	char UseMultisampling : 0; // 0x30 (1)
	char BakeOpacityInAlpha : 0; // 0x30 (1)
	enum class Unknow OutputImageFileFormat; // 0x34 (4)
	enum class Unknow OutputDDSCompressionType; // 0x38 (4)
	uint32_t Dilation; // 0x3C (4)
	enum class Unknow OutputOpacityType; // 0x40 (4)
	enum class Unknow OutputPixelFormat; // 0x44 (4)
	char SkipCastingIfNoInputChannel : 0; // 0x48 (1)
	char OutputSRGB : 0; // 0x48 (1)
};

