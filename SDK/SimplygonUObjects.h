// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8 {
	EGeometryDataFieldType = 0,
	EGeometryDataFieldType = 1,
	EGeometryDataFieldType = 2,
	EGeometryDataFieldType = 3,
	EGeometryDataFieldType = 4,
	EGeometryDataFieldType = 5,
	EGeometryDataFieldType = 6,
	EGeometryDataFieldType = 7,
	EGeometryDataFieldType = 8
};

// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8 {
	EOutputPixelFormat = 0,
	EOutputPixelFormat = 1,
	EOutputPixelFormat = 2,
	EOutputPixelFormat = 3,
	EOutputPixelFormat = 4,
	EOutputPixelFormat = 5,
	EOutputPixelFormat = 6
};

// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8 {
	EOutputOpacityType = 0,
	EOutputOpacityType = 1,
	EOutputOpacityType = 2
};

// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : int32 {
	EOutputDDSCompressionType = -1,
	EOutputDDSCompressionType = 0,
	EOutputDDSCompressionType = 1,
	EOutputDDSCompressionType = 2,
	EOutputDDSCompressionType = 3,
	EOutputDDSCompressionType = 4,
	EOutputDDSCompressionType = 5
};

// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8 {
	EOutputImageFileFormat = 0,
	EOutputImageFileFormat = 1,
	EOutputImageFileFormat = 2,
	EOutputImageFileFormat = 3,
	EOutputImageFileFormat = 4,
	EOutputImageFileFormat = 5,
	EOutputImageFileFormat = 6
};

// Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8 {
	EFillMode = 0,
	EFillMode = 1,
	EFillMode = 2,
	EFillMode = 3
};

// Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8 {
	EDitherType = 0,
	EDitherType = 1,
	EDitherType = 2,
	EDitherType = 3,
	EDitherType = 4
};

// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8 {
	EOpacityChannelComponent = 0,
	EOpacityChannelComponent = 1,
	EOpacityChannelComponent = 2,
	EOpacityChannelComponent = 3,
	EOpacityChannelComponent = 4
};

// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8 {
	ESurfaceTransferMode = 0,
	ESurfaceTransferMode = 1,
	ESurfaceTransferMode = 2
};

// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8 {
	ERemeshingMode = 0,
	ERemeshingMode = 1,
	ERemeshingMode = 2,
	ERemeshingMode = 3
};

// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8 {
	EHoleFilling = 0,
	EHoleFilling = 1,
	EHoleFilling = 2,
	EHoleFilling = 3,
	EHoleFilling = 4
};

// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8 {
	ESurfaceAreaScale = 0,
	ESurfaceAreaScale = 1,
	ESurfaceAreaScale = 2,
	ESurfaceAreaScale = 3
};

// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8 {
	EChartAggregatorMode = 0,
	EChartAggregatorMode = 1,
	EChartAggregatorMode = 2,
	EChartAggregatorMode = 3,
	EChartAggregatorMode = 4
};

// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8 {
	ETexCoordGeneratorType = 0,
	ETexCoordGeneratorType = 1,
	ETexCoordGeneratorType = 2
};

// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8 {
	EWeightsFromColorMode = 0,
	EWeightsFromColorMode = 1,
	EWeightsFromColorMode = 2,
	EWeightsFromColorMode = 3
};

// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8 {
	EWeightsFromColorComponent = 0,
	EWeightsFromColorComponent = 1,
	EWeightsFromColorComponent = 2,
	EWeightsFromColorComponent = 3,
	EWeightsFromColorComponent = 4
};

// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8 {
	EBoneReductionTargetStopCondition = 0,
	EBoneReductionTargetStopCondition = 1,
	EBoneReductionTargetStopCondition = 2
};

// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8 {
	EComputeVisibilityMode = 0,
	EComputeVisibilityMode = 1,
	EComputeVisibilityMode = 2
};

// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8 {
	EDataCreationPreferences = 0,
	EDataCreationPreferences = 1,
	EDataCreationPreferences = 2,
	EDataCreationPreferences = 3
};

// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8 {
	ESymmetryAxis = 0,
	ESymmetryAxis = 1,
	ESymmetryAxis = 2,
	ESymmetryAxis = 3
};

// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8 {
	EReductionHeuristics = 0,
	EReductionHeuristics = 1,
	EReductionHeuristics = 2
};

// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8 {
	EReductionTargetStopCondition = 0,
	EReductionTargetStopCondition = 1,
	EReductionTargetStopCondition = 2
};

// Class SimplygonUObjects.StandinNearPipeline
struct UStandinNearPipeline : USimplygonStandinPipeline {
	Unknown Settings; //  0x28 Size(1b0)
};

// Class SimplygonUObjects.StandinFarPipeline
struct UStandinFarPipeline : USimplygonStandinPipeline {
	Unknown Settings; //  0x28 Size(1c0)
};

// Class SimplygonUObjects.SimplygonColorCaster
struct USimplygonColorCaster : USimplygonMaterialCaster {
	Unknown ColorCasterSettings; //  0x28 Size(50)
};

// Class SimplygonUObjects.SimplygonNormalCaster
struct USimplygonNormalCaster : USimplygonMaterialCaster {
	Unknown NormalCasterSettings; //  0x28 Size(50)
};

// Class SimplygonUObjects.ReductionPipeline
struct UReductionPipeline : USimplygonPipeline {
	Unknown Settings; //  0x28 Size(230)
};

// Class SimplygonUObjects.RemeshingPipeline
struct URemeshingPipeline : USimplygonPipeline {
	Unknown Settings; //  0x28 Size(1c0)
};

// Class SimplygonUObjects.AggregationPipeline
struct UAggregationPipeline : USimplygonPipeline {
	Unknown Settings; //  0x28 Size(1b0)
};

// Class SimplygonUObjects.SimplygonOpacityCaster
struct USimplygonOpacityCaster : USimplygonMaterialCaster {
	Unknown OpacityCasterSettings; //  0x28 Size(48)
};

// Class SimplygonUObjects.SimplygonDisplacementCaster
struct USimplygonDisplacementCaster : USimplygonMaterialCaster {
	Unknown DisplacementCasterSettings; //  0x28 Size(58)
};

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
struct USimplygonAmbientOcclusionCaster : USimplygonMaterialCaster {
	Unknown AmbientOcclusionCasterSettings; //  0x28 Size(58)
};

// Class SimplygonUObjects.SimplygonGeometryDataCaster
struct USimplygonGeometryDataCaster : USimplygonMaterialCaster {
	Unknown GeometryDataCasterSettings; //  0x30 Size(90)
};

// Class SimplygonUObjects.SimplygonVertexColorCaster
struct USimplygonVertexColorCaster : USimplygonMaterialCaster {
	Unknown VertexColorCasterSettings; //  0x28 Size(60)
};

