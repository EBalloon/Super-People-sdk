// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8 {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	EGrassScaling = 0,
	EGrassScaling = 1,
	EGrassScaling = 2,
	EGrassScaling = 3
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8 {
	ESplineModulationColorMask = 0,
	ESplineModulationColorMask = 1,
	ESplineModulationColorMask = 2,
	ESplineModulationColorMask = 3,
	ESplineModulationColorMask = 4
};

// Enum Landscape.ELandscapeLO
enum class ELandscapeLO : uint8 {
	ELandscapeLO = 0,
	ELandscapeLO = 1,
	ELandscapeLO = 2
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	ELandscapeLayerDisplayMode = 0,
	ELandscapeLayerDisplayMode = 1,
	ELandscapeLayerDisplayMode = 2,
	ELandscapeLayerDisplayMode = 3
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	ELandscapeLayerPaintingRestriction = 0,
	ELandscapeLayerPaintingRestriction = 1,
	ELandscapeLayerPaintingRestriction = 2,
	ELandscapeLayerPaintingRestriction = 3,
	ELandscapeLayerPaintingRestriction = 4
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	ELandscapeImportAlphamapType = 0,
	ELandscapeImportAlphamapType = 1,
	ELandscapeImportAlphamapType = 2
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// Class Landscape.ControlPointMeshActor
struct AControlPointMeshActor : UActor {
	struct Unknown ControlPointMeshComponent; //  0x310 Size(8)
};

// Class Landscape.ControlPointMeshComponent
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDi; //  0x550 Size(4)
};

// Class Landscape.LandscapeProxy
struct ALandscapeProxy : UActor {
	struct Unknown SplineComponent; //  0x310 Size(8)
	struct Unknown LandscapeGuid; //  0x318 Size(10)
	struct Unknown LandscapeSectionOffset; //  0x338 Size(8)
	int32_t MaxLODLevel; //  0x340 Size(4)
	float LODDistanceFactor; //  0x344 Size(4)
	char LODFalloff; //  0x348 Size(1)
	float ComponentScreenSizeToUseSubSections; //  0x34c Size(4)
	float LOD0ScreenSize; //  0x350 Size(4)
	float LOD0; //  0x354 Size(4)
	float LODDistributionSetting; //  0x358 Size(4)
	float TessellationComponentScreenSize; //  0x35c Size(4)
	char UseTessellationComponentScreenSizeFalloff; //  0x360 Size(1)
	float TessellationComponentScreenSizeFalloff; //  0x364 Size(4)
	int32_t OccluderGeometryLOD; //  0x368 Size(4)
	int32_t StaticLightingLOD; //  0x36c Size(4)
	struct Unknown DefaultPhysMaterial; //  0x370 Size(8)
	float StreamingDistanceMultiplier; //  0x378 Size(4)
	struct Unknown LandscapeMaterial; //  0x380 Size(8)
	struct Unknown LandscapeHoleMaterial; //  0x3a8 Size(8)
	struct TArray<Unknown> LandscapeMaterialsOverride; //  0x3b0 Size(10)
	char bMeshHoles; //  0x3c0 Size(1)
	char MeshHolesMaxLod; //  0x3c1 Size(1)
	struct TArray<Unknown> RuntimeVirtualTextures; //  0x3c8 Size(10)
	int32_t VirtualTextureNumLods; //  0x3d8 Size(4)
	int32_t VirtualTextureLodBias; //  0x3dc Size(4)
	enum class Unknow VirtualTextureRenderPassType; //  0x3e0 Size(1)
	float NegativeZBoundsExtension; //  0x3e4 Size(4)
	float PositiveZBoundsExtension; //  0x3e8 Size(4)
	struct TArray<Unknown> LandscapeComponents; //  0x3f0 Size(10)
	struct TArray<Unknown> CollisionComponents; //  0x400 Size(10)
	struct TArray<Unknown> FoliageComponents; //  0x410 Size(10)
	char bHasLandscapeGrass; //  0x484 Size(1)
	float StaticLightingResolution; //  0x488 Size(4)
	char bCastStaticShadow; //  0x48c Size(1)
	char bCastShadowAsTwoSided; //  0x48c Size(1)
	char bCastFarShadow; //  0x48c Size(1)
	char bAffectDistanceFieldLighting; //  0x490 Size(1)
	struct Unknown LightingChannels; //  0x491 Size(1)
	char bUseMaterialPositionOffsetInStaticLighting; //  0x494 Size(1)
	char bRenderCustomDepth; //  0x494 Size(1)
	int32_t CustomDepthStencilValue; //  0x498 Size(4)
	float LDMaxDrawDistance; //  0x49c Size(4)
	struct Unknown LightmassSettings; //  0x4a0 Size(18)
	int32_t CollisionMipLevel; //  0x4b8 Size(4)
	int32_t SimpleCollisionMipLevel; //  0x4bc Size(4)
	float CollisionThickness; //  0x4c0 Size(4)
	struct Unknown BodyInstance; //  0x4c8 Size(190)
	char bGenerateOverlapEvents; //  0x658 Size(1)
	char bBakeMaterialPositionOffsetIntoCollision; //  0x658 Size(1)
	int32_t ComponentSizeQuads; //  0x65c Size(4)
	int32_t SubsectionSizeQuads; //  0x660 Size(4)
	int32_t NumSubsections; //  0x664 Size(4)
	char bUsedForNavigation; //  0x668 Size(1)
	char bFillCollisionUnderLandscapeForNavmesh; //  0x668 Size(1)
	char bUse; //  0x66c Size(1)
	enum class Unknow NavigationGeometryGatheringMode; //  0x66d Size(1)
	char bUseLandscapeForCullingInvisibleHLODVertices; //  0x66e Size(1)
	char bHasLayersContent; //  0x66f Size(1)
	struct TMap<{}, {}>Unknown WeightmapUsageMap; //  0x670 Size(50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct Unknown Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x315c870>
};

// Class Landscape.LandscapeComponent
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; //  0x4b8 Size(4)
	int32_t SectionBaseY; //  0x4bc Size(4)
	int32_t ComponentSizeQuads; //  0x4c0 Size(4)
	int32_t SubsectionSizeQuads; //  0x4c4 Size(4)
	int32_t NumSubsections; //  0x4c8 Size(4)
	struct Unknown OverrideMaterial; //  0x4d0 Size(8)
	struct Unknown OverrideHoleMaterial; //  0x4d8 Size(8)
	struct TArray<Unknown> OverrideMaterials; //  0x4e0 Size(10)
	struct TArray<Unknown> MaterialInstances; //  0x4f0 Size(10)
	struct TArray<Unknown> MaterialInstancesDynamic; //  0x500 Size(10)
	struct TArray<Unknown> LODIndexToMaterialIndex; //  0x510 Size(10)
	struct TArray<Unknown> MaterialIndexToDisabledTess; //  0x520 Size(10)
	struct Unknown XYOffsetmapTexture; //  0x530 Size(8)
	struct Unknown WeightmapScaleBias; //  0x540 Size(10)
	float WeightmapSubsectionOffset; //  0x550 Size(4)
	struct Unknown HeightmapScaleBias; //  0x560 Size(10)
	struct Unknown CachedLocalBox; //  0x570 Size(1c)
	Unknown CollisionComponent; //  0x58c Size(1c)
	struct Unknown HeightmapTexture; //  0x5a8 Size(8)
	struct TArray<Unknown> WeightmapLayerAllocations; //  0x5b0 Size(10)
	struct TArray<Unknown> WeightmapTextures; //  0x5c0 Size(10)
	struct Unknown MapBuildDataId; //  0x5d0 Size(10)
	struct TArray<Unknown> IrrelevantLights; //  0x5e0 Size(10)
	int32_t CollisionMipLevel; //  0x5f0 Size(4)
	int32_t SimpleCollisionMipLevel; //  0x5f4 Size(4)
	float NegativeZBoundsExtension; //  0x5f8 Size(4)
	float PositiveZBoundsExtension; //  0x5fc Size(4)
	float StaticLightingResolution; //  0x600 Size(4)
	int32_t ForcedLOD; //  0x604 Size(4)
	int32_t LODBias; //  0x608 Size(4)
	struct Unknown StateID; //  0x60c Size(10)
	struct Unknown BakedTextureMaterialGuid; //  0x61c Size(10)
	struct Unknown GIBakedBaseColorTexture; //  0x630 Size(8)
	char MobileBlendableLayerMask; //  0x638 Size(1)
	struct Unknown MobileMaterialInterface; //  0x640 Size(8)
	struct TArray<Unknown> MobileMaterialInterfaces; //  0x648 Size(10)
	struct TArray<Unknown> MobileWeightmapTextures; //  0x658 Size(10)

	struct Unknown GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3159da0>
};

// Class Landscape.LandscapeGrassType
struct ULandscapeGrassType : Object {
	struct TArray<Unknown> GrassVarieties; //  0x28 Size(10)
	char bEnableDensityScaling; //  0x38 Size(1)
	struct Unknown GrassMesh; //  0x40 Size(8)
	float GrassDensity; //  0x48 Size(4)
	float PlacementJitter; //  0x4c Size(4)
	int32_t StartCullDistance; //  0x50 Size(4)
	int32_t EndCullDistance; //  0x54 Size(4)
	char RandomRotation; //  0x58 Size(1)
	char AlignToSurface; //  0x59 Size(1)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<Unknown> ComponentLayerInfos; //  0x4b8 Size(10)
	int32_t SectionBaseX; //  0x4c8 Size(4)
	int32_t SectionBaseY; //  0x4cc Size(4)
	int32_t CollisionSizeQuads; //  0x4d0 Size(4)
	float CollisionScale; //  0x4d4 Size(4)
	int32_t SimpleCollisionSizeQuads; //  0x4d8 Size(4)
	struct TArray<Unknown> CollisionQuadFlags; //  0x4e0 Size(10)
	struct Unknown HeightfieldGuid; //  0x4f0 Size(10)
	struct Unknown CachedLocalBox; //  0x500 Size(1c)
	Unknown RenderComponent; //  0x51c Size(1c)
	struct TArray<Unknown> CookedPhysicalMaterials; //  0x548 Size(10)

	struct Unknown GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x315c6b0>
};

// Class Landscape.LandscapeInfo
struct ULandscapeInfo : Object {
	Unknown LandscapeActor; //  0x28 Size(1c)
	struct Unknown LandscapeGuid; //  0x44 Size(10)
	int32_t ComponentSizeQuads; //  0x54 Size(4)
	int32_t SubsectionSizeQuads; //  0x58 Size(4)
	int32_t ComponentNumSubsections; //  0x5c Size(4)
	struct Unknown DrawScale; //  0x60 Size(c)
	struct TArray<Unknown> Proxies; //  0x110 Size(10)
};

// Class Landscape.LandscapeLayerInfoObject
struct ULandscapeLayerInfoObject : Object {
	struct FName LayerName; //  0x28 Size(8)
	struct Unknown PhysMaterial; //  0x30 Size(8)
	float Hardness; //  0x38 Size(4)
	struct Unknown LayerUsageDebugColor; //  0x3c Size(10)
};

// Class Landscape.LandscapeMaterialInstanceConstant
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<Unknown> TextureStreamingInfo; //  0x410 Size(10)
	char bIsLayerThumbnail; //  0x420 Size(1)
	char bDisableTessellation; //  0x420 Size(1)
	char bMobile; //  0x420 Size(1)
	char bEditorToolUsage; //  0x420 Size(1)
};

// Class Landscape.LandscapeMeshCollisionComponent
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct Unknown MeshGuid; //  0x598 Size(10)
};

// Class Landscape.LandscapeMeshProxyActor
struct ALandscapeMeshProxyActor : UActor {
	struct Unknown LandscapeMeshProxyComponent; //  0x310 Size(8)
};

// Class Landscape.LandscapeMeshProxyComponent
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct Unknown LandscapeGuid; //  0x550 Size(10)
	struct TArray<Unknown> ProxyComponentBases; //  0x560 Size(10)
	int8_t ProxyLOD; //  0x570 Size(1)
};

// Class Landscape.LandscapeSettings
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; //  0x38 Size(4)
};

// Class Landscape.LandscapeSplinesComponent
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<Unknown> ControlPoints; //  0x4b8 Size(10)
	struct TArray<Unknown> Segments; //  0x4c8 Size(10)
	struct TArray<Unknown> CookedForeignMeshComponents; //  0x4d8 Size(10)

	struct TArray<Unknown> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents(Final|Native|Public|BlueprintCallable) // <Game+0x315f8a0>
};

// Class Landscape.LandscapeSplineControlPoint
struct ULandscapeSplineControlPoint : Object {
	struct Unknown Location; //  0x28 Size(c)
	struct Unknown Rotation; //  0x34 Size(c)
	float Width; //  0x40 Size(4)
	float LayerWidthRatio; //  0x44 Size(4)
	float SideFalloff; //  0x48 Size(4)
	float LeftSideFalloffFactor; //  0x4c Size(4)
	float RightSideFalloffFactor; //  0x50 Size(4)
	float LeftSideLayerFalloffFactor; //  0x54 Size(4)
	float RightSideLayerFalloffFactor; //  0x58 Size(4)
	float EndFalloff; //  0x5c Size(4)
	struct TArray<Unknown> ConnectedSegments; //  0x60 Size(10)
	struct TArray<Unknown> Points; //  0x70 Size(10)
	struct Unknown Bounds; //  0x80 Size(1c)
	struct Unknown LocalMeshComponent; //  0xa0 Size(8)
};

// Class Landscape.LandscapeSplineSegment
struct ULandscapeSplineSegment : Object {
	struct Unknown Connections; //  0x28 Size(30)
	struct Unknown SplineInfo; //  0x58 Size(18)
	struct TArray<Unknown> Points; //  0x70 Size(10)
	struct Unknown Bounds; //  0x80 Size(1c)
	struct TArray<Unknown> LocalMeshComponents; //  0xa0 Size(10)
};

// Class Landscape.LandscapeStreamingProxy
struct ALandscapeStreamingProxy : ALandscapeProxy {
	Unknown LandscapeActor; //  0x6c0 Size(1c)
};

// Class Landscape.LandscapeWeightmapUsage
struct ULandscapeWeightmapUsage : Object {
	struct Unknown ChannelUsage; //  0x28 Size(20)
	struct Unknown LayerGuid; //  0x48 Size(10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<Unknown> GrassTypes; //  0x40 Size(10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<Unknown> Layers; //  0x40 Size(10)
	struct Unknown ExpressionGUID; //  0x50 Size(10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	char MappingType; //  0x40 Size(1)
	char CustomUVType; //  0x41 Size(1)
	float MappingScale; //  0x44 Size(4)
	float MappingRotation; //  0x48 Size(4)
	float MappingPanU; //  0x4c Size(4)
	float MappingPanV; //  0x50 Size(4)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; //  0x40 Size(8)
	float PreviewWeight; //  0x48 Size(4)
	struct Unknown ExpressionGUID; //  0x4c Size(10)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct Unknown LayerUsed; //  0x40 Size(c)
	struct Unknown LayerNotUsed; //  0x54 Size(c)
	struct FName ParameterName; //  0x68 Size(8)
	char PreviewUsed; //  0x70 Size(1)
	struct Unknown ExpressionGUID; //  0x74 Size(10)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct Unknown Base; //  0x40 Size(c)
	struct Unknown Layer; //  0x54 Size(c)
	struct FName ParameterName; //  0x68 Size(8)
	float PreviewWeight; //  0x70 Size(4)
	struct Unknown ConstBase; //  0x74 Size(c)
	struct Unknown ExpressionGUID; //  0x80 Size(10)
};

// Class Landscape.MaterialExpressionLandscapeVisi
struct UMaterialExpressionLandscapeVisi : UMaterialExpression {
	struct Unknown ExpressionGUID; //  0x40 Size(10)
};

