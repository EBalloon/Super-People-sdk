// Enum Foliage.ECullDistancePreset
enum class ECullDistancePreset : uint8 {
	ECullDistancePreset = 0,
	ECullDistancePreset = 1,
	ECullDistancePreset = 2,
	ECullDistancePreset = 3,
	ECullDistancePreset = 4,
	ECullDistancePreset = 5,
	ECullDistancePreset = 6,
	ECullDistancePreset = 7,
	ECullDistancePreset = 8,
	ECullDistancePreset = 9,
	ECullDistancePreset = 10,
	ECullDistancePreset = 1,
	ECullDistancePreset = 10,
	ECullDistancePreset = 11
};

// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	EFoliageScaling = 0,
	EFoliageScaling = 1,
	EFoliageScaling = 2,
	EFoliageScaling = 3,
	EFoliageScaling = 4,
	EFoliageScaling = 5
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	EVertexColorMaskChannel = 0,
	EVertexColorMaskChannel = 1,
	EVertexColorMaskChannel = 2,
	EVertexColorMaskChannel = 3,
	EVertexColorMaskChannel = 4,
	EVertexColorMaskChannel = 5
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8 {
	ESimulationQuery = 0,
	ESimulationQuery = 1,
	ESimulationQuery = 2,
	ESimulationQuery = 3,
	ESimulationQuery = 4
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	ESimulationOverlap = 0,
	ESimulationOverlap = 1,
	ESimulationOverlap = 2,
	ESimulationOverlap = 3
};

// Class Foliage.FoliageInstancedStaticMeshComponent
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; //  0x718 Size(10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; //  0x728 Size(10)
	Unknown GenerationGuid; //  0x738 Size(10)
};

// Class Foliage.FoliageSettings
struct UFoliageSettings : UDeveloperSettings {
	Unknown CullDistancePresets; //  0x38 Size(10)
	int32_t DesiredMaxTrianglesToRender; //  0x48 Size(4)
	float MinimumScreenSize; //  0x4c Size(4)
	int32_t MaxOcclusionQueriesPerCompo; //  0x50 Size(4)
	int32_t MinOcclusionQueriesPerCompo; //  0x54 Size(4)
	int32_t MinInstancesPerOcclusionQuery; //  0x58 Size(4)
};

// Class Foliage.FoliageType
struct UFoliageType : Object {
	Unknown UpdateGuid; //  0x28 Size(10)
	float Density; //  0x38 Size(4)
	float DensityAdjustmentFactor; //  0x3c Size(4)
	float Radius; //  0x40 Size(4)
	char bSingleInstanceModeOverrideRadius; //  0x44 Size(1)
	float SingleInstanceModeRadius; //  0x48 Size(4)
	Unknown Scaling; //  0x4c Size(1)
	Unknown ScaleX; //  0x50 Size(8)
	Unknown ScaleY; //  0x58 Size(8)
	Unknown ScaleZ; //  0x60 Size(8)
	Unknown VertexColorMaskByChannel; //  0x68 Size(30)
	Unknown VertexColorMask; //  0x98 Size(1)
	float VertexColorMaskThreshold; //  0x9c Size(4)
	char VertexColorMaskInvert; //  0xa0 Size(1)
	Unknown ZOffset; //  0xa4 Size(8)
	char AlignToNormal; //  0xac Size(1)
	float AlignMaxAngle; //  0xb0 Size(4)
	char RandomYaw; //  0xb4 Size(1)
	float RandomPitchAngle; //  0xb8 Size(4)
	Unknown GroundSlopeAngle; //  0xbc Size(8)
	Unknown Height; //  0xc4 Size(8)
	Unknown LandscapeLayers; //  0xd0 Size(10)
	float MinimumLayerWeight; //  0xe0 Size(4)
	Unknown ExclusionLandscapeLayers; //  0xe8 Size(10)
	float MinimumExclusionLayerWeight; //  0xf8 Size(4)
	struct FName LandscapeLayer; //  0xfc Size(8)
	char CollisionWithWorld; //  0x104 Size(1)
	Unknown CollisionScale; //  0x108 Size(c)
	Unknown MeshBounds; //  0x114 Size(1c)
	Unknown LowBoundOriginRadius; //  0x130 Size(c)
	Unknown Mobility; //  0x13c Size(1)
	Unknown CullDistancePreset; //  0x13d Size(1)
	char bOverrideCullDistance; //  0x13e Size(1)
	Unknown CullDistance; //  0x140 Size(8)
	float MinScreenSizeScale; //  0x148 Size(4)
	char bEnableStaticLighting; //  0x14c Size(1)
	char CastShadow; //  0x14c Size(1)
	char bAffectDynamicIndirectLighting; //  0x14c Size(1)
	char bAffectDistanceFieldLighting; //  0x14c Size(1)
	char bCastDynamicShadow; //  0x14c Size(1)
	char bCastStaticShadow; //  0x14c Size(1)
	char bCastShadowAsTwoSided; //  0x14c Size(1)
	char bReceivesDecals; //  0x14c Size(1)
	char bOverrideLightMapRes; //  0x14d Size(1)
	int32_t OverriddenLightMapRes; //  0x150 Size(4)
	Unknown LightmapType; //  0x154 Size(1)
	char bUseAsOccluder; //  0x158 Size(1)
	Unknown BodyInstance; //  0x160 Size(190)
	Unknown CustomNavigableGeometry; //  0x2f0 Size(1)
	Unknown InstanceBodiesSplitRatio; //  0x2f1 Size(1)
	Unknown LightingChannels; //  0x2f2 Size(1)
	char bRenderCustomDepth; //  0x2f4 Size(1)
	int32_t CustomDepthStencilValue; //  0x2f8 Size(4)
	int32_t TranslucencySortPriority; //  0x2fc Size(4)
	float CollisionRadius; //  0x300 Size(4)
	float ShadeRadius; //  0x304 Size(4)
	int32_t NumSteps; //  0x308 Size(4)
	float InitialSeedDensity; //  0x30c Size(4)
	float AverageSpreadDistance; //  0x310 Size(4)
	float SpreadVariance; //  0x314 Size(4)
	int32_t SeedsPerStep; //  0x318 Size(4)
	int32_t DistributionSeed; //  0x31c Size(4)
	float MaxInitialSeedOffset; //  0x320 Size(4)
	char bCanGrowInShade; //  0x324 Size(1)
	char bSpawnsInShade; //  0x325 Size(1)
	float MaxInitialAge; //  0x328 Size(4)
	float MaxAge; //  0x32c Size(4)
	float OverlapPriority; //  0x330 Size(4)
	Unknown ProceduralScale; //  0x334 Size(8)
	Unknown ScaleCurve; //  0x340 Size(88)
	int32_t ChangeCount; //  0x3c8 Size(4)
	char ReapplyDensity; //  0x3cc Size(1)
	char ReapplyRadius; //  0x3cc Size(1)
	char ReapplyAlignToNormal; //  0x3cc Size(1)
	char ReapplyRandomYaw; //  0x3cc Size(1)
	char ReapplyScaling; //  0x3cc Size(1)
	char ReapplyScaleX; //  0x3cc Size(1)
	char ReapplyScaleY; //  0x3cc Size(1)
	char ReapplyScaleZ; //  0x3cc Size(1)
	char ReapplyRandomPitchAngle; //  0x3cd Size(1)
	char ReapplyGroundSlope; //  0x3cd Size(1)
	char ReapplyHeight; //  0x3cd Size(1)
	char ReapplyLandscapeLayers; //  0x3cd Size(1)
	char ReapplyZOffset; //  0x3cd Size(1)
	char ReapplyCollisionWithWorld; //  0x3cd Size(1)
	char ReapplyVertexColorMask; //  0x3cd Size(1)
	char bEnableDensityScaling; //  0x3cd Size(1)
	Unknown RuntimeVirtualTextures; //  0x3d0 Size(10)
	int32_t VirtualTextureCullMips; //  0x3e0 Size(4)
	Unknown VirtualTextureRenderPassType; //  0x3e4 Size(1)
};

// Class Foliage.FoliageType_Actor
struct UFoliageType_Actor : UFoliageType {
	Unknown ActorClass; //  0x3e8 Size(8)
	char bShouldAttachToBaseComponent; //  0x3f0 Size(1)
};

// Class Foliage.FoliageType_InstancedStaticMesh
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	Unknown Mesh; //  0x3e8 Size(8)
	Unknown OverrideMaterials; //  0x3f0 Size(10)
	Unknown ComponentClass; //  0x400 Size(8)
};

// Class Foliage.InteractiveFoliageActor
struct AInteractiveFoliageActor : AStaticMeshActor {
	Unknown CapsuleComponent; //  0x320 Size(8)
	Unknown TouchingActorEntryPosition; //  0x328 Size(c)
	Unknown FoliageVelocity; //  0x334 Size(c)
	Unknown FoliageForce; //  0x340 Size(c)
	Unknown FoliagePosition; //  0x34c Size(c)
	float FoliageDamageImpulseScale; //  0x358 Size(4)
	float FoliageTouchImpulseScale; //  0x35c Size(4)
	float FoliageStiffness; //  0x360 Size(4)
	float FoliageStiffnessQuadratic; //  0x364 Size(4)
	float FoliageDamping; //  0x368 Size(4)
	float MaxDamageImpulse; //  0x36c Size(4)
	float MaxTouchImpulse; //  0x370 Size(4)
	float MaxForce; //  0x374 Size(4)
	float Mass; //  0x378 Size(4)

	void CapsuleTouched(Unknown OverlappedComp, Unknown Other, Unknown OtherComp, int32_t OtherBodyIndex, char bFromSweep, Unknown& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched(Final|Native|Protected|HasOutParms) // <Game+0x3111610>
};

// Class Foliage.ProceduralFoliageBlockingVo
struct AProceduralFoliageBlockingVot : AVolume {
	Unknown ProceduralFoliageVolume; //  0x348 Size(8)
};

// Class Foliage.ProceduralFoliageComponent
struct UProceduralFoliageComponent : UActorComponent {
	Unknown FoliageSpawner; //  0xb0 Size(8)
	float TileOverlap; //  0xb8 Size(4)
	Unknown SpawningVolume; //  0xc0 Size(8)
	Unknown ProceduralGuid; //  0xc8 Size(10)
};

// Class Foliage.ProceduralFoliageSpawner
struct UProceduralFoliageSpawner : Object {
	int32_t RandomSeed; //  0x28 Size(4)
	float TileSize; //  0x2c Size(4)
	int32_t NumUniqueTiles; //  0x30 Size(4)
	float MinimumQuadTreeSize; //  0x34 Size(4)
	Unknown FoliageTypes; //  0x40 Size(10)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate(Final|Native|Public|BlueprintCallable) // <Game+0x3111a90>
};

// Class Foliage.ProceduralFoliageTile
struct UProceduralFoliageTile : Object {
	Unknown FoliageSpawner; //  0x28 Size(8)
	Unknown InstancesArray; //  0xd0 Size(10)
};

// Class Foliage.ProceduralFoliageVolume
struct AProceduralFoliageVolume : AVolume {
	Unknown ProceduralComponent; //  0x348 Size(8)
};

