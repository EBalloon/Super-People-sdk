// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend = 0
	LSBM_AlphaBlend = 1
	LSBM_MAX = 2
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None = 0
	LSE_NoLandscapeInfo = 1
	LSE_CollsionXY = 2
	LSE_NoLayerInfo = 3
	LSE_MAX = 4
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8 {
	Clear_Weightmap = 1
	Clear_Heightmap = 2
	Clear_All = 3
	Clear_MAX = 4
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None = 0
	LGT_Height = 1
	LGT_Weight = 2
	LGT_MAX = 3
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	EGrassScaling = 0
	EGrassScaling = 1
	EGrassScaling = 2
	EGrassScaling = 3
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8 {
	ESplineModulationColorMask = 0
	ESplineModulationColorMask = 1
	ESplineModulationColorMask = 2
	ESplineModulationColorMask = 3
	ESplineModulationColorMask = 4
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	ELandscapeLODFalloff = 0
	ELandscapeLODFalloff = 1
	ELandscapeLODFalloff = 2
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	ELandscapeLayerDisplayMode = 0
	ELandscapeLayerDisplayMode = 1
	ELandscapeLayerDisplayMode = 2
	ELandscapeLayerDisplayMode = 3
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	ELandscapeLayerPaintingRestriction = 0
	ELandscapeLayerPaintingRestriction = 1
	ELandscapeLayerPaintingRestriction = 2
	ELandscapeLayerPaintingRestriction = 3
	ELandscapeLayerPaintingRestriction = 4
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	ELandscapeImportAlphamapType = 0
	ELandscapeImportAlphamapType = 1
	ELandscapeImportAlphamapType = 2
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp = 0
	LSMO_YUp = 1
	LSMO_MAX = 2
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend = 0
	LB_AlphaBlend = 1
	LB_HeightBlend = 2
	LB_MAX = 3
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None = 0
	LCCT_CustomUV0 = 1
	LCCT_CustomUV1 = 2
	LCCT_CustomUV2 = 3
	LCCT_WeightMapUV = 4
	LCCT_MAX = 5
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto = 0
	TCMT_XY = 1
	TCMT_XZ = 2
	TCMT_YZ = 3
	TCMT_MAX = 4
};

// Class Landscape.ControlPointMeshActor
struct AControlPointMeshActor : UActor {
	struct Unknown ControlPointMeshComponent; // 0x310 (8)
};

// Class Landscape.ControlPointMeshComponent
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x550 (4)
};

// Class Landscape.LandscapeProxy
struct ALandscapeProxy : UActor {
	struct Unknown SplineComponent; // 0x310 (8)
	struct Unknown LandscapeGuid; // 0x318 (16)
	struct Unknown LandscapeSectionOffset; // 0x338 (8)
	int32_t MaxLODLevel; // 0x340 (4)
	float LODDistanceFactor; // 0x344 (4)
	char LODFalloff; // 0x348 (1)
	float ComponentScreenSizeToUseSubSections; // 0x34C (4)
	float LOD0ScreenSize; // 0x350 (4)
	float LOD0DistributionSetting; // 0x354 (4)
	float LODDistributionSetting; // 0x358 (4)
	float TessellationComponentScreenSize; // 0x35C (4)
	char UseTessellationComponentScreenSizeFalloff : 0; // 0x360 (1)
	float TessellationComponentScreenSizeFalloff; // 0x364 (4)
	int32_t OccluderGeometryLOD; // 0x368 (4)
	int32_t StaticLightingLOD; // 0x36C (4)
	struct Unknown DefaultPhysMaterial; // 0x370 (8)
	float StreamingDistanceMultiplier; // 0x378 (4)
	struct Unknown LandscapeMaterial; // 0x380 (8)
	struct Unknown LandscapeHoleMaterial; // 0x3A8 (8)
	struct TArray<Unknown> LandscapeMaterialsOverride; // 0x3B0 (16)
	char bMeshHoles : 0; // 0x3C0 (1)
	char MeshHolesMaxLod; // 0x3C1 (1)
	struct TArray<Unknown> RuntimeVirtualTextures; // 0x3C8 (16)
	int32_t VirtualTextureNumLods; // 0x3D8 (4)
	int32_t VirtualTextureLodBias; // 0x3DC (4)
	enum class Unknow VirtualTextureRenderPassType; // 0x3E0 (1)
	float NegativeZBoundsExtension; // 0x3E4 (4)
	float PositiveZBoundsExtension; // 0x3E8 (4)
	struct TArray<Unknown> LandscapeComponents; // 0x3F0 (16)
	struct TArray<Unknown> CollisionComponents; // 0x400 (16)
	struct TArray<Unknown> FoliageComponents; // 0x410 (16)
	char bHasLandscapeGrass : 0; // 0x484 (1)
	float StaticLightingResolution; // 0x488 (4)
	char bCastStaticShadow : 0; // 0x48C (1)
	char bCastShadowAsTwoSided : 0; // 0x48C (1)
	char bCastFarShadow : 0; // 0x48C (1)
	char bAffectDistanceFieldLighting : 0; // 0x490 (1)
	struct Unknown LightingChannels; // 0x491 (1)
	char bUseMaterialPositionOffsetInStaticLighting : 0; // 0x494 (1)
	char b : 0; // 0x494 (1)
	int32_t CustomDepthStencilValue; // 0x498 (4)
	float LDMaxDrawDistance; // 0x49C (4)
	struct Unknown LightmassSettings; // 0x4A0 (24)
	int32_t CollisionMipLevel; // 0x4B8 (4)
	int32_t SimpleCollisionMipLevel; // 0x4BC (4)
	float CollisionThickness; // 0x4C0 (4)
	struct Unknown BodyInstance; // 0x4C8 (400)
	char bGenerateOverlapEvents : 0; // 0x658 (1)
	char bBakeMaterialPositionOffsetIntoCollision : 0; // 0x658 (1)
	int32_t ComponentSizeQuads; // 0x65C (4)
	int32_t SubsectionSizeQuads; // 0x660 (4)
	int32_t NumSubsections; // 0x664 (4)
	char bUsedForNavigation : 0; // 0x668 (1)
	char bFillCollisionUnderLandscapeForNavmesh : 0; // 0x668 (1)
	char bUseDynamicMaterialInstance : 0; // 0x66C (1)
	enum class Unknow NavigationGeometryGatheringMode; // 0x66D (1)
	char bUseLandscapeForCullingInvisibleHLODVertices : 0; // 0x66E (1)
	char bHasLayersContent : 0; // 0x66F (1)
	struct TMap<Unknown, Unknown>Unknown WeightmapUsageMap; // 0x670 (80)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct Unknown Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C870>
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct Unknown Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C7B0>
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C6E0>
	void EditorSetLandscapeMaterial(struct Unknown NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16B4710>
	void EditorApplySpline(struct Unknown InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, char b, char bLowerHeights, struct Unknown PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C3A0>
	void ChangeUseTessellationComponentScreenSizeFalloff(char InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C310>
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1C190>
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C290>
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C210>
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F1C0F0>
};

// Class Landscape.LandscapeComponent
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x4B8 (4)
	int32_t SectionBaseY; // 0x4BC (4)
	int32_t ComponentSizeQuads; // 0x4C0 (4)
	int32_t SubsectionSizeQuads; // 0x4C4 (4)
	int32_t NumSubsections; // 0x4C8 (4)
	struct Unknown OverrideMaterial; // 0x4D0 (8)
	struct Unknown OverrideHoleMaterial; // 0x4D8 (8)
	struct TArray<Unknown> OverrideMaterials; // 0x4E0 (16)
	struct TArray<Unknown> MaterialInstances; // 0x4F0 (16)
	struct TArray<Unknown> MaterialInstancesDynamic; // 0x500 (16)
	struct TArray<Unknown> LODIndexToMaterialIndex; // 0x510 (16)
	struct TArray<Unknown> MaterialIndexToDisabledTessellationMaterial; // 0x520 (16)
	struct Unknown XYOffsetmapTexture; // 0x530 (8)
	struct Unknown WeightmapScaleBias; // 0x540 (16)
	float WeightmapSubsectionOffset; // 0x550 (4)
	struct Unknown HeightmapScaleBias; // 0x560 (16)
	struct Unknown CachedLocalBox; // 0x570 (28)
	Unknown CollisionComponent; // 0x58C (28)
	struct Unknown HeightmapTexture; // 0x5A8 (8)
	struct TArray<Unknown> WeightmapLayerAllocations; // 0x5B0 (16)
	struct TArray<Unknown> WeightmapTextures; // 0x5C0 (16)
	struct Unknown MapBuildDataId; // 0x5D0 (16)
	struct TArray<Unknown> IrrelevantLights; // 0x5E0 (16)
	int32_t CollisionMipLevel; // 0x5F0 (4)
	int32_t SimpleCollisionMipLevel; // 0x5F4 (4)
	float NegativeZBoundsExtension; // 0x5F8 (4)
	float PositiveZBoundsExtension; // 0x5FC (4)
	float StaticLightingResolution; // 0x600 (4)
	int32_t ForcedLOD; // 0x604 (4)
	int32_t LODBias; // 0x608 (4)
	struct Unknown StateID; // 0x60C (16)
	struct Unknown BakedTextureMaterialGuid; // 0x61C (16)
	struct Unknown GIBakedBaseColorTexture; // 0x630 (8)
	char MobileBlendableLayerMask; // 0x638 (1)
	struct Unknown MobileMaterialInterface; // 0x640 (8)
	struct TArray<Unknown> MobileMaterialInterfaces; // 0x648 (16)
	struct TArray<Unknown> MobileWeightmapTextures; // 0x658 (16)

	struct Unknown GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3159DA0>
	float EditorGetPaintLayerWeightByNameAtLocation(struct Unknown& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3159CC0>
	float EditorGetPaintLayerWeightAtLocation(struct Unknown& InLocation, struct Unknown PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3159CC0>
};

// Class Landscape.LandscapeGrassType
struct ULandscapeGrassType : Object {
	struct TArray<Unknown> GrassVarieties; // 0x28 (16)
	char bEnableDensityScaling : 0; // 0x38 (1)
	struct Unknown GrassMesh; // 0x40 (8)
	float GrassDensity; // 0x48 (4)
	float PlacementJitter; // 0x4C (4)
	int32_t StartCullDistance; // 0x50 (4)
	int32_t EndCullDistance; // 0x54 (4)
	char RandomRotation : 0; // 0x58 (1)
	char AlignToSurface : 0; // 0x59 (1)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<Unknown> ComponentLayerInfos; // 0x4B8 (16)
	int32_t SectionBaseX; // 0x4C8 (4)
	int32_t SectionBaseY; // 0x4CC (4)
	int32_t CollisionSizeQuads; // 0x4D0 (4)
	float CollisionScale; // 0x4D4 (4)
	int32_t SimpleCollisionSizeQuads; // 0x4D8 (4)
	struct TArray<Unknown> CollisionQuadFlags; // 0x4E0 (16)
	struct Unknown HeightfieldGuid; // 0x4F0 (16)
	struct Unknown CachedLocalBox; // 0x500 (28)
	Unknown RenderComponent; // 0x51C (28)
	struct TArray<Unknown> CookedPhysicalMaterials; // 0x548 (16)

	struct Unknown GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315C6B0>
};

// Class Landscape.LandscapeInfo
struct ULandscapeInfo : Object {
	Unknown LandscapeActor; // 0x28 (28)
	struct Unknown LandscapeGuid; // 0x44 (16)
	int32_t ComponentSizeQuads; // 0x54 (4)
	int32_t SubsectionSizeQuads; // 0x58 (4)
	int32_t ComponentNumSubsections; // 0x5C (4)
	struct Unknown DrawScale; // 0x60 (12)
	struct TArray<Unknown> Proxies; // 0x110 (16)
};

// Class Landscape.LandscapeLayerInfoObject
struct ULandscapeLayerInfoObject : Object {
	struct FName LayerName; // 0x28 (8)
	struct Unknown PhysMaterial; // 0x30 (8)
	float Hardness; // 0x38 (4)
	struct Unknown LayerUsageDebugColor; // 0x3C (16)
};

// Class Landscape.LandscapeMaterialInstanceConstant
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<Unknown> TextureStreamingInfo; // 0x410 (16)
	char bIsLayerThumbnail : 0; // 0x420 (1)
	char bDisableTessellation : 0; // 0x420 (1)
	char bMobile : 0; // 0x420 (1)
	char bEditorToolUsage : 0; // 0x420 (1)
};

// Class Landscape.LandscapeMeshCollisionComponent
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct Unknown MeshGuid; // 0x598 (16)
};

// Class Landscape.LandscapeMeshProxyActor
struct ALandscapeMeshProxyActor : UActor {
	struct Unknown LandscapeMeshProxyComponent; // 0x310 (8)
};

// Class Landscape.LandscapeMeshProxyComponent
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct Unknown LandscapeGuid; // 0x550 (16)
	struct TArray<Unknown> ProxyComponentBases; // 0x560 (16)
	int8_t ProxyLOD; // 0x570 (1)
};

// Class Landscape.LandscapeSettings
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38 (4)
};

// Class Landscape.LandscapeSplinesComponent
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<Unknown> ControlPoints; // 0x4B8 (16)
	struct TArray<Unknown> Segments; // 0x4C8 (16)
	struct TArray<Unknown> CookedForeignMeshComponents; // 0x4D8 (16)

	struct TArray<Unknown> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x315F8A0>
};

// Class Landscape.LandscapeSplineControlPoint
struct ULandscapeSplineControlPoint : Object {
	struct Unknown Location; // 0x28 (12)
	struct Unknown Rotation; // 0x34 (12)
	float Width; // 0x40 (4)
	float LayerWidthRatio; // 0x44 (4)
	float SideFalloff; // 0x48 (4)
	float LeftSideFalloffFactor; // 0x4C (4)
	float RightSideFalloffFactor; // 0x50 (4)
	float LeftSideLayerFalloffFactor; // 0x54 (4)
	float RightSideLayerFalloffFactor; // 0x58 (4)
	float EndFalloff; // 0x5C (4)
	struct TArray<Unknown> ConnectedSegments; // 0x60 (16)
	struct TArray<Unknown> Points; // 0x70 (16)
	struct Unknown Bounds; // 0x80 (28)
	struct Unknown LocalMeshComponent; // 0xA0 (8)
};

// Class Landscape.LandscapeSplineSegment
struct ULandscapeSplineSegment : Object {
	struct Unknown Connections[0x2]; // 0x28 (48)
	struct Unknown SplineInfo; // 0x58 (24)
	struct TArray<Unknown> Points; // 0x70 (16)
	struct Unknown Bounds; // 0x80 (28)
	struct TArray<Unknown> LocalMeshComponents; // 0xA0 (16)
};

// Class Landscape.LandscapeStreamingProxy
struct ALandscapeStreamingProxy : ALandscapeProxy {
	Unknown LandscapeActor; // 0x6C0 (28)
};

// Class Landscape.LandscapeWeightmapUsage
struct ULandscapeWeightmapUsage : Object {
	struct Unknown ChannelUsage[0x4]; // 0x28 (32)
	struct Unknown LayerGuid; // 0x48 (16)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<Unknown> GrassTypes; // 0x40 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<Unknown> Layers; // 0x40 (16)
	struct Unknown ExpressionGUID; // 0x50 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	char MappingType; // 0x40 (1)
	char CustomUVType; // 0x41 (1)
	float MappingScale; // 0x44 (4)
	float MappingRotation; // 0x48 (4)
	float MappingPanU; // 0x4C (4)
	float MappingPanV; // 0x50 (4)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40 (8)
	float PreviewWeight; // 0x48 (4)
	struct Unknown ExpressionGUID; // 0x4C (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct Unknown LayerUsed; // 0x40 (12)
	struct Unknown LayerNotUsed; // 0x54 (12)
	struct FName ParameterName; // 0x68 (8)
	char PreviewUsed : 0; // 0x70 (1)
	struct Unknown ExpressionGUID; // 0x74 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct Unknown Base; // 0x40 (12)
	struct Unknown Layer; // 0x54 (12)
	struct FName ParameterName; // 0x68 (8)
	float PreviewWeight; // 0x70 (4)
	struct Unknown ConstBase; // 0x74 (12)
	struct Unknown ExpressionGUID; // 0x80 (16)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct Unknown ExpressionGUID; // 0x40 (16)
};

