// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4,
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

// Class Landscape.ControlPointMeshActor
class AControlPointMeshActor : public UActor {

public:

	struct UControlPointMeshComponent ControlPointMeshComponent; // 0x328 (8)
};

// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent {

public:

	float VirtualTextureMainPassMaxDrawDistance; // 0x548 (4)
};

// Class Landscape.LandscapeProxy
class ALandscapeProxy : public UActor {

public:

	struct ULandscapeSplinesComponent SplineComponent; // 0x328 (8)
	struct FGuid LandscapeGuid; // 0x330 (16)
	struct FIntPoint LandscapeSectionOffset; // 0x350 (8)
	int32_t MaxLODLevel; // 0x358 (4)
	float LODDistanceFactor; // 0x35C (4)
	char LODFalloff; // 0x360 (1)
	float ComponentScreenSizeToUseSubSections; // 0x364 (4)
	float LOD0ScreenSize; // 0x368 (4)
	float LOD0DistributionSetting; // 0x36C (4)
	float LODDistributionSetting; // 0x370 (4)
	float TessellationComponentScreenSize; // 0x374 (4)
	char UseTessellationComponentScreenSizeFalloff : 0; // 0x378 (1)
	float TessellationComponentScreenSizeFalloff; // 0x37C (4)
	int32_t OccluderGeometryLOD; // 0x380 (4)
	int32_t StaticLightingLOD; // 0x384 (4)
	struct UPhysicalMaterial DefaultPhysMaterial; // 0x388 (8)
	float StreamingDistanceMultiplier; // 0x390 (4)
	struct UMaterialInterface LandscapeMaterial; // 0x398 (8)
	struct UMaterialInterface LandscapeHoleMaterial; // 0x3C0 (8)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x3C8 (16)
	char bMeshHoles : 0; // 0x3D8 (1)
	char MeshHolesMaxLod; // 0x3D9 (1)
	struct TArray<struct URuntimeVirtualTexture> RuntimeVirtualTextures; // 0x3E0 (16)
	int32_t VirtualTextureNumLods; // 0x3F0 (4)
	int32_t VirtualTextureLodBias; // 0x3F4 (4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3F8 (1)
	float NegativeZBoundsExtension; // 0x3FC (4)
	float PositiveZBoundsExtension; // 0x400 (4)
	struct TArray<struct ULandscapeComponent> LandscapeComponents; // 0x408 (16)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent> CollisionComponents; // 0x418 (16)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent> FoliageComponents; // 0x428 (16)
	char bHasLandscapeGrass : 0; // 0x49C (1)
	float StaticLightingResolution; // 0x4A0 (4)
	char bCastStaticShadow : 0; // 0x4A4 (1)
	char bCastShadowAsTwoSided : 0; // 0x4A4 (1)
	char bCastFarShadow : 0; // 0x4A4 (1)
	char bAffectDistanceFieldLighting : 0; // 0x4A8 (1)
	struct FLightingChannels LightingChannels; // 0x4A9 (1)
	char bUseMaterialPositionOffsetInStaticLighting : 0; // 0x4AC (1)
	char bRenderCustomDepth : 0; // 0x4AC (1)
	int32_t CustomDepthStencilValue; // 0x4B0 (4)
	float LDMaxDrawDistance; // 0x4B4 (4)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x4B8 (24)
	int32_t CollisionMipLevel; // 0x4D0 (4)
	int32_t SimpleCollisionMipLevel; // 0x4D4 (4)
	float CollisionThickness; // 0x4D8 (4)
	struct FBodyInstance BodyInstance; // 0x4E0 (400)
	char bGenerateOverlapEvents : 0; // 0x670 (1)
	char bBakeMaterialPositionOffsetIntoCollision : 0; // 0x670 (1)
	int32_t ComponentSizeQuads; // 0x674 (4)
	int32_t SubsectionSizeQuads; // 0x678 (4)
	int32_t NumSubsections; // 0x67C (4)
	char bUsedForNavigation : 0; // 0x680 (1)
	char bFillCollisionUnderLandscapeForNavmesh : 0; // 0x680 (1)
	char bUseDynamicMaterialInstance : 0; // 0x684 (1)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x685 (1)
	char bUseLandscapeForCullingInvisibleHLODVertices : 0; // 0x686 (1)
	char bHasLayersContent : 0; // 0x687 (1)
	struct TMap<struct UTexture2D, struct ULandscapeWeightmapUsage> WeightmapUsageMap; // 0x688 (80)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394C250>
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394C190>
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue(Final|RequiredAPI|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394C0C0>
	void EditorSetLandscapeMaterial(struct UMaterialInterface NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16DAA70>
	void EditorApplySpline(struct USplineComponent InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, char bRaiseHeights, char bLowerHeights, struct ULandscapeLayerInfoObject PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394BD80>
	void ChangeUseTessellationComponentScreenSizeFalloff(char InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394BCF0>
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F5F860>
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394BC70>
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394BBF0>
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections(Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1F5F7C0>
};

// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent {

public:

	int32_t SectionBaseX; // 0x4B0 (4)
	int32_t SectionBaseY; // 0x4B4 (4)
	int32_t ComponentSizeQuads; // 0x4B8 (4)
	int32_t SubsectionSizeQuads; // 0x4BC (4)
	int32_t NumSubsections; // 0x4C0 (4)
	struct UMaterialInterface OverrideMaterial; // 0x4C8 (8)
	struct UMaterialInterface OverrideHoleMaterial; // 0x4D0 (8)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4D8 (16)
	struct TArray<struct UMaterialInstanceConstant> MaterialInstances; // 0x4E8 (16)
	struct TArray<struct UMaterialInstanceDynamic> MaterialInstancesDynamic; // 0x4F8 (16)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x508 (16)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x518 (16)
	struct UTexture2D XYOffsetmapTexture; // 0x528 (8)
	struct FVector4 WeightmapScaleBias; // 0x530 (16)
	float WeightmapSubsectionOffset; // 0x540 (4)
	struct FVector4 HeightmapScaleBias; // 0x550 (16)
	struct FBox CachedLocalBox; // 0x560 (28)
	LazyObjectProperty CollisionComponent; // 0x57C (28)
	struct UTexture2D HeightmapTexture; // 0x598 (8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x5A0 (16)
	struct TArray<struct UTexture2D> WeightmapTextures; // 0x5B0 (16)
	struct FGuid MapBuildDataId; // 0x5C0 (16)
	struct TArray<struct FGuid> IrrelevantLights; // 0x5D0 (16)
	int32_t CollisionMipLevel; // 0x5E0 (4)
	int32_t SimpleCollisionMipLevel; // 0x5E4 (4)
	float NegativeZBoundsExtension; // 0x5E8 (4)
	float PositiveZBoundsExtension; // 0x5EC (4)
	float StaticLightingResolution; // 0x5F0 (4)
	int32_t ForcedLOD; // 0x5F4 (4)
	int32_t LODBias; // 0x5F8 (4)
	struct FGuid StateID; // 0x5FC (16)
	struct FGuid BakedTextureMaterialGuid; // 0x60C (16)
	struct UTexture2D GIBakedBaseColorTexture; // 0x620 (8)
	char MobileBlendableLayerMask; // 0x628 (1)
	struct UMaterialInterface MobileMaterialInterface; // 0x630 (8)
	struct TArray<struct UMaterialInterface> MobileMaterialInterfaces; // 0x638 (16)
	struct TArray<struct UTexture2D> MobileWeightmapTextures; // 0x648 (16)

	struct UMaterialInstanceDynamic GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3949780>
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39496A0>
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x39496A0>
};

// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public Object {

public:

	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28 (16)
	char bEnableDensityScaling : 0; // 0x38 (1)
	struct UStaticMesh GrassMesh; // 0x40 (8)
	float GrassDensity; // 0x48 (4)
	float PlacementJitter; // 0x4C (4)
	int32_t StartCullDistance; // 0x50 (4)
	int32_t EndCullDistance; // 0x54 (4)
	char RandomRotation : 0; // 0x58 (1)
	char AlignToSurface : 0; // 0x59 (1)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {

public:

	struct TArray<struct ULandscapeLayerInfoObject> ComponentLayerInfos; // 0x4B0 (16)
	int32_t SectionBaseX; // 0x4C0 (4)
	int32_t SectionBaseY; // 0x4C4 (4)
	int32_t CollisionSizeQuads; // 0x4C8 (4)
	float CollisionScale; // 0x4CC (4)
	int32_t SimpleCollisionSizeQuads; // 0x4D0 (4)
	struct TArray<char> CollisionQuadFlags; // 0x4D8 (16)
	struct FGuid HeightfieldGuid; // 0x4E8 (16)
	struct FBox CachedLocalBox; // 0x4F8 (28)
	LazyObjectProperty RenderComponent; // 0x514 (28)
	struct TArray<struct UPhysicalMaterial> CookedPhysicalMaterials; // 0x540 (16)

	struct ULandscapeComponent GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394C090>
};

// Class Landscape.LandscapeInfo
class ULandscapeInfo : public Object {

public:

	LazyObjectProperty LandscapeActor; // 0x28 (28)
	struct FGuid LandscapeGuid; // 0x44 (16)
	int32_t ComponentSizeQuads; // 0x54 (4)
	int32_t SubsectionSizeQuads; // 0x58 (4)
	int32_t ComponentNumSubsections; // 0x5C (4)
	struct FVector DrawScale; // 0x60 (12)
	struct TArray<struct ALandscapeStreamingProxy> Proxies; // 0x110 (16)
};

// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public Object {

public:

	struct FName LayerName; // 0x28 (8)
	struct UPhysicalMaterial PhysMaterial; // 0x30 (8)
	float Hardness; // 0x38 (4)
	struct FLinearColor LayerUsageDebugColor; // 0x3C (16)
};

// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant {

public:

	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410 (16)
	char bIsLayerThumbnail : 0; // 0x420 (1)
	char bDisableTessellation : 0; // 0x420 (1)
	char bMobile : 0; // 0x420 (1)
	char bEditorToolUsage : 0; // 0x420 (1)
};

// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {

public:

	struct FGuid MeshGuid; // 0x590 (16)
};

// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public UActor {

public:

	struct ULandscapeMeshProxyComponent LandscapeMeshProxyComponent; // 0x328 (8)
};

// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {

public:

	struct FGuid LandscapeGuid; // 0x548 (16)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x558 (16)
	int8_t ProxyLOD; // 0x568 (1)
};

// Class Landscape.LandscapeSettings
class ULandscapeSettings : public UDeveloperSettings {

public:

	int32_t MaxNumberOfLayers; // 0x38 (4)
};

// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent {

public:

	struct TArray<struct ULandscapeSplineControlPoint> ControlPoints; // 0x4B0 (16)
	struct TArray<struct ULandscapeSplineSegment> Segments; // 0x4C0 (16)
	struct TArray<struct UMeshComponent> CookedForeignMeshComponents; // 0x4D0 (16)

	struct TArray<struct USplineMeshComponent> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x394F280>
};

// Class Landscape.LandscapeSplineControlPoint
class ULandscapeSplineControlPoint : public Object {

public:

	struct FVector Location; // 0x28 (12)
	struct FRotator Rotation; // 0x34 (12)
	float Width; // 0x40 (4)
	float LayerWidthRatio; // 0x44 (4)
	float SideFalloff; // 0x48 (4)
	float LeftSideFalloffFactor; // 0x4C (4)
	float RightSideFalloffFactor; // 0x50 (4)
	float LeftSideLayerFalloffFactor; // 0x54 (4)
	float RightSideLayerFalloffFactor; // 0x58 (4)
	float EndFalloff; // 0x5C (4)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60 (16)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70 (16)
	struct FBox Bounds; // 0x80 (28)
	struct UControlPointMeshComponent LocalMeshComponent; // 0xA0 (8)
};

// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public Object {

public:

	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28 (48)
	struct FInterpCurveVector SplineInfo; // 0x58 (24)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70 (16)
	struct FBox Bounds; // 0x80 (28)
	struct TArray<struct USplineMeshComponent> LocalMeshComponents; // 0xA0 (16)
};

// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy {

public:

	LazyObjectProperty LandscapeActor; // 0x6D8 (28)
};

// Class Landscape.LandscapeWeightmapUsage
class ULandscapeWeightmapUsage : public Object {

public:

	struct ULandscapeComponent ChannelUsage[0x4]; // 0x28 (32)
	struct FGuid LayerGuid; // 0x48 (16)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {

public:

	struct TArray<struct FGrassInput> GrassTypes; // 0x40 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {

public:

	struct TArray<struct FLayerBlendInput> Layers; // 0x40 (16)
	struct FGuid ExpressionGUID; // 0x50 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression {

public:

	char MappingType; // 0x40 (1)
	char CustomUVType; // 0x41 (1)
	float MappingScale; // 0x44 (4)
	float MappingRotation; // 0x48 (4)
	float MappingPanU; // 0x4C (4)
	float MappingPanV; // 0x50 (4)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {

public:

	struct FName ParameterName; // 0x40 (8)
	float PreviewWeight; // 0x48 (4)
	struct FGuid ExpressionGUID; // 0x4C (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {

public:

	struct FExpressionInput LayerUsed; // 0x40 (12)
	struct FExpressionInput LayerNotUsed; // 0x54 (12)
	struct FName ParameterName; // 0x68 (8)
	char PreviewUsed : 0; // 0x70 (1)
	struct FGuid ExpressionGUID; // 0x74 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression {

public:

	struct FExpressionInput Base; // 0x40 (12)
	struct FExpressionInput Layer; // 0x54 (12)
	struct FName ParameterName; // 0x68 (8)
	float PreviewWeight; // 0x70 (4)
	struct FVector ConstBase; // 0x74 (12)
	struct FGuid ExpressionGUID; // 0x80 (16)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {

public:

	struct FGuid ExpressionGUID; // 0x40 (16)
};

// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer {
	struct FGuid Guid; // 0x0 (16)
	struct FName Name; // 0x10 (8)
	char bVisible : 0; // 0x18 (1)
	char bLocked : 0; // 0x19 (1)
	float HeightmapAlpha; // 0x1C (4)
	float WeightmapAlpha; // 0x20 (4)
	char BlendMode; // 0x24 (1)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28 (16)
	struct TMap<struct ULandscapeLayerInfoObject, char> WeightmapLayerAllocationBlend; // 0x38 (80)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData {
	struct FHeightmapData HeightmapData; // 0x0 (8)
	struct FWeightmapData WeightmapData; // 0x8 (48)
};

// ScriptStruct Landscape.WeightmapData
struct FWeightmapData {
	struct TArray<struct UTexture2D> Textures; // 0x0 (16)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10 (16)
	struct TArray<struct ULandscapeWeightmapUsage> TextureUsages; // 0x20 (16)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject LayerInfo; // 0x0 (8)
	char WeightmapTextureIndex; // 0x8 (1)
	char WeightmapTextureChannel; // 0x9 (1)
};

// ScriptStruct Landscape.HeightmapData
struct FHeightmapData {
	struct UTexture2D Texture; // 0x0 (8)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x0 (4)
	struct UMaterialInterface Material; // 0x8 (8)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData {
	struct UMaterialInterface ToolMaterial; // 0x0 (8)
	struct UMaterialInterface GizmoMaterial; // 0x8 (8)
	int32_t SelectedType; // 0x10 (4)
	int32_t DebugChannelR; // 0x14 (4)
	int32_t DebugChannelG; // 0x18 (4)
	int32_t DebugChannelB; // 0x1C (4)
	struct UTexture2D DataTexture; // 0x20 (8)
	struct UTexture2D LayerContributionTexture; // 0x28 (8)
	struct UTexture2D DirtyTexture; // 0x30 (8)
};

// ScriptStruct Landscape.GrassVariety
struct FGrassVariety {
	struct UStaticMesh GrassMesh; // 0x0 (8)
	struct FPerPlatformFloat GrassDensity; // 0x8 (4)
	char bUseGrid : 0; // 0xC (1)
	float PlacementJitter; // 0x10 (4)
	enum class ECullDistancePreset CullDistancePreset; // 0x14 (1)
	char bOverrideCullDistance : 0; // 0x15 (1)
	struct FPerPlatformInt StartCullDistance; // 0x18 (4)
	struct FPerPlatformInt EndCullDistance; // 0x1C (4)
	int32_t MinLOD; // 0x20 (4)
	enum class EGrassScaling Scaling; // 0x24 (1)
	struct FFloatInterval ScaleX; // 0x28 (8)
	struct FFloatInterval ScaleY; // 0x30 (8)
	struct FFloatInterval ScaleZ; // 0x38 (8)
	char RandomRotation : 0; // 0x40 (1)
	char AlignToSurface : 0; // 0x41 (1)
	char bUseLandscapeLightmap : 0; // 0x42 (1)
	struct FLightingChannels LightingChannels; // 0x43 (1)
	char bReceivesDecals : 0; // 0x44 (1)
	char bCastDynamicShadow : 0; // 0x45 (1)
	char bKeepInstanceBufferCPUCopy : 0; // 0x46 (1)
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject LayerInfoObj; // 0x0 (8)
	struct FName LayerName; // 0x8 (8)
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo {
	struct FName TextureName; // 0x0 (8)
	float TexelFactor; // 0x8 (4)
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x0 (4)
	struct UMaterialInterface Material; // 0x8 (8)
};

// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject LayerInfoObj; // 0x0 (8)
};

// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment Segment; // 0x0 (8)
	char End : 0; // 0x8 (1)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh Mesh; // 0x0 (8)
	struct TArray<struct UMaterialInterface> MaterialOverrides; // 0x8 (16)
	char bCenterH : 0; // 0x18 (1)
	struct FVector2D CenterAdjust; // 0x1C (8)
	char bScaleToWidth : 0; // 0x24 (1)
	struct FVector Scale; // 0x28 (12)
	char Orientation; // 0x34 (1)
	char ForwardAxis; // 0x35 (1)
	char UpAxis; // 0x36 (1)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint ControlPoint; // 0x0 (8)
	float TangentLen; // 0x8 (4)
	struct FName SocketName; // 0xC (8)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint {
	struct FVector Center; // 0x0 (12)
	struct FVector Left; // 0xC (12)
	struct FVector Right; // 0x18 (12)
	struct FVector FalloffLeft; // 0x24 (12)
	struct FVector FalloffRight; // 0x30 (12)
	struct FVector LayerLeft; // 0x3C (12)
	struct FVector LayerRight; // 0x48 (12)
	struct FVector LayerFalloffLeft; // 0x54 (12)
	struct FVector LayerFalloffRight; // 0x60 (12)
	float StartEndFalloff; // 0x6C (4)
};

// ScriptStruct Landscape.GrassInput
struct FGrassInput {
	struct FName Name; // 0x0 (8)
	struct ULandscapeGrassType GrassType; // 0x8 (8)
	struct FExpressionInput Input; // 0x10 (12)
};

// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput {
	struct FName LayerName; // 0x0 (8)
	char BlendType; // 0x8 (1)
	struct FExpressionInput LayerInput; // 0xC (12)
	struct FExpressionInput HeightInput; // 0x20 (12)
	float PreviewWeight; // 0x34 (4)
	struct FVector ConstLayerInput; // 0x38 (12)
	float ConstHeightInput; // 0x44 (4)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
inline void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	struct SetLandscapeMaterialVectorParameterValue_Params {
		struct FName ParameterName;
		struct FLinearColor Value;
	}; SetLandscapeMaterialVectorParameterValue_Params Params;

	Params.ParameterName = ParameterName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
inline void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	struct SetLandscapeMaterialTextureParameterValue_Params {
		struct FName ParameterName;
		struct UTexture Value;
	}; SetLandscapeMaterialTextureParameterValue_Params Params;

	Params.ParameterName = ParameterName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
inline void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	struct SetLandscapeMaterialScalarParameterValue_Params {
		struct FName ParameterName;
		float Value;
	}; SetLandscapeMaterialScalarParameterValue_Params Params;

	Params.ParameterName = ParameterName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
inline void ALandscapeProxy::EditorSetLandscapeMaterial(struct UMaterialInterface NewLandscapeMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	struct EditorSetLandscapeMaterial_Params {
		struct UMaterialInterface NewLandscapeMaterial;
	}; EditorSetLandscapeMaterial_Params Params;

	Params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.EditorApplySpline
inline void ALandscapeProxy::EditorApplySpline(struct USplineComponent InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, char bRaiseHeights, char bLowerHeights, struct ULandscapeLayerInfoObject PaintLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	struct EditorApplySpline_Params {
		struct USplineComponent InSplineComponent;
		float StartWidth;
		float EndWidth;
		float StartSideFalloff;
		float EndSideFalloff;
		float StartRoll;
		float EndRoll;
		int32_t NumSubdivisions;
		char bRaiseHeights;
		char bLowerHeights;
		struct ULandscapeLayerInfoObject PaintLayer;
	}; EditorApplySpline_Params Params;

	Params.InSplineComponent = InSplineComponent;
	Params.StartWidth = StartWidth;
	Params.EndWidth = EndWidth;
	Params.StartSideFalloff = StartSideFalloff;
	Params.EndSideFalloff = EndSideFalloff;
	Params.StartRoll = StartRoll;
	Params.EndRoll = EndRoll;
	Params.NumSubdivisions = NumSubdivisions;
	Params.bRaiseHeights = bRaiseHeights;
	Params.bLowerHeights = bLowerHeights;
	Params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
inline void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(char InComponentScreenSizeToUseSubSections) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	struct ChangeUseTessellationComponentScreenSizeFalloff_Params {
		char InComponentScreenSizeToUseSubSections;
	}; ChangeUseTessellationComponentScreenSizeFalloff_Params Params;

	Params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
inline void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	struct ChangeTessellationComponentScreenSizeFalloff_Params {
		float InUseTessellationComponentScreenSizeFalloff;
	}; ChangeTessellationComponentScreenSizeFalloff_Params Params;

	Params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
inline void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	struct ChangeTessellationComponentScreenSize_Params {
		float InTessellationComponentScreenSize;
	}; ChangeTessellationComponentScreenSize_Params Params;

	Params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
inline void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	struct ChangeLODDistanceFactor_Params {
		float InLODDistanceFactor;
	}; ChangeLODDistanceFactor_Params Params;

	Params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
inline void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	struct ChangeComponentScreenSizeToUseSubSections_Params {
		float InComponentScreenSizeToUseSubSections;
	}; ChangeComponentScreenSizeToUseSubSections_Params Params;

	Params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
inline struct UMaterialInstanceDynamic ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	struct GetMaterialInstanceDynamic_Params {
		int32_t InIndex;
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetMaterialInstanceDynamic_Params Params;

	Params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
inline float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	struct EditorGetPaintLayerWeightByNameAtLocation_Params {
		struct FVector& InLocation;
		struct FName InPaintLayerName;
		float ReturnValue;

	}; EditorGetPaintLayerWeightByNameAtLocation_Params Params;

	Params.InPaintLayerName = InPaintLayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLocation = Params.InLocation;


	return params.ReturnValue;
}

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
inline float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject PaintLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	struct EditorGetPaintLayerWeightAtLocation_Params {
		struct FVector& InLocation;
		struct ULandscapeLayerInfoObject PaintLayer;
		float ReturnValue;

	}; EditorGetPaintLayerWeightAtLocation_Params Params;

	Params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLocation = Params.InLocation;


	return params.ReturnValue;
}

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
inline struct ULandscapeComponent ULandscapeHeightfieldCollisionComponent::GetRenderComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	struct GetRenderComponent_Params {
		
		struct ULandscapeComponent ReturnValue;

	}; GetRenderComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
inline struct TArray<struct USplineMeshComponent> ULandscapeSplinesComponent::GetSplineMeshComponents() {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	struct GetSplineMeshComponents_Params {
		
		struct TArray<struct USplineMeshComponent> ReturnValue;

	}; GetSplineMeshComponents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

