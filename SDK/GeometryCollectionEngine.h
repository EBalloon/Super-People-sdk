// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6,
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent {

public:

	char bIsCollisionEventListeningEnabled : 0; // 0x230 (1)
	char bIsBreakingEventListeningEnabled : 0; // 0x230 (1)
	char bIsTrailingEventListeningEnabled : 0; // 0x230 (1)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x234 (24)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x24C (24)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x264 (24)
	struct TSet<struct AChaosSolverActor> ChaosSolverActors; // 0x280 (80)
	struct TSet<struct AGeometryCollectionActor> GeometryCollectionActors; // 0x2D0 (80)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x320 (16)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x330 (16)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x340 (16)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809750>
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809650>
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809550>
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x48094B0>
	void SetTrailingEventEnabled(char bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809420>
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x48092F0>
	void SetCollisionEventEnabled(char bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809260>
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x48091C0>
	void SetBreakingEventEnabled(char bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809130>
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x48090B0>
	void RemoveChaosSolverActor(struct AChaosSolverActor ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CB860>
	char IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4808F00>
	void AddGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4808C40>
	void AddChaosSolverActor(struct AChaosSolverActor ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16CB860>
};

// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public UActor {

public:

	struct UGeometryCollectionComponent GeometryCollectionComponent; // 0x318 (8)
	struct UGeometryCollectionDebugDrawComponent GeometryCollectionDebugDrawComponent; // 0x320 (8)

	char RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4808F30>
};

// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public Object {

public:

	struct FRecordedTransformTrack RecordedData; // 0x28 (16)
	struct UGeometryCollection SupportedCollection; // 0x38 (8)
	struct FGuid CompatibleCollectionState; // 0x40 (16)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent {

public:

	struct AChaosSolverActor ChaosSolverActor; // 0x4E8 (8)
	struct UGeometryCollection RestCollection; // 0x5D0 (8)
	struct TArray<struct AFieldSystemActor> InitializationFields; // 0x5D8 (16)
	char Simulating : 0; // 0x5E8 (1)
	enum class EObjectStateTypeEnum ObjectType; // 0x5F0 (1)
	char EnableClustering : 0; // 0x5F1 (1)
	int32_t ClusterGroupIndex; // 0x5F4 (4)
	int32_t MaxClusterLevel; // 0x5F8 (4)
	struct TArray<float> DamageThreshold; // 0x600 (16)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x610 (1)
	int32_t CollisionGroup; // 0x614 (4)
	float CollisionSampleFraction; // 0x618 (4)
	float LinearEtherDrag; // 0x61C (4)
	float AngularEtherDrag; // 0x620 (4)
	struct UChaosPhysicalMaterial PhysicalMaterial; // 0x628 (8)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x630 (1)
	struct FVector InitialLinearVelocity; // 0x634 (12)
	struct FVector InitialAngularVelocity; // 0x640 (12)
	struct FGeomComponentCacheParameters CacheParameters; // 0x650 (80)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x6A0 (16)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6B0 (16)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x6D8 (16)
	float DesiredCacheTime; // 0x6E8 (4)
	char CachePlayback : 0; // 0x6EC (1)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x6F0 (16)
	char bNotifyBreaks : 0; // 0x700 (1)
	char bNotifyCollisions : 0; // 0x701 (1)
	struct UBodySetup DummyBodySetup; // 0x960 (8)

	void SetNotifyBreaks(char bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4809390>
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ApplyPhysicsField(char Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4808D90>
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4808CC0>
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public UActor {

public:

	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x318 (1)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x320 (24)
	char bDebugDrawWholeCollection : 0; // 0x338 (1)
	char bDebugDrawHierarchy : 0; // 0x339 (1)
	char bDebugDrawClustering : 0; // 0x33A (1)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x33B (1)
	char bShowRigidBodyId : 0; // 0x33C (1)
	char bShowRigidBodyCollision : 0; // 0x33D (1)
	char bCollisionAtOrigin : 0; // 0x33E (1)
	char bShowRigidBodyTransform : 0; // 0x33F (1)
	char bShowRigidBodyInertia : 0; // 0x340 (1)
	char bShowRigidBodyVelocity : 0; // 0x341 (1)
	char bShowRigidBodyForce : 0; // 0x342 (1)
	char bShowRigidBodyInfos : 0; // 0x343 (1)
	char bShowTransformIndex : 0; // 0x344 (1)
	char bShowTransform : 0; // 0x345 (1)
	char bShowParent : 0; // 0x346 (1)
	char bShowLevel : 0; // 0x347 (1)
	char bShowConnectivityEdges : 0; // 0x348 (1)
	char bShowGeometryIndex : 0; // 0x349 (1)
	char bShowGeometryTransform : 0; // 0x34A (1)
	char bShowBoundingBox : 0; // 0x34B (1)
	char bShowFaces : 0; // 0x34C (1)
	char bShowFaceIndices : 0; // 0x34D (1)
	char bShowFaceNormals : 0; // 0x34E (1)
	char bShowSingleFace : 0; // 0x34F (1)
	int32_t SingleFaceIndex; // 0x350 (4)
	char bShowVertices : 0; // 0x354 (1)
	char bShowVertexIndices : 0; // 0x355 (1)
	char bShowVertexNormals : 0; // 0x356 (1)
	char bUseActiveVisualization : 0; // 0x357 (1)
	float PointThickness; // 0x358 (4)
	float LineThickness; // 0x35C (4)
	char bTextShadow : 0; // 0x360 (1)
	float TextScale; // 0x364 (4)
	float NormalScale; // 0x368 (4)
	float AxisScale; // 0x36C (4)
	float ArrowScale; // 0x370 (4)
	struct FColor RigidBodyIdColor; // 0x374 (4)
	float RigidBodyTransformScale; // 0x378 (4)
	struct FColor RigidBodyCollisionColor; // 0x37C (4)
	struct FColor RigidBodyInertiaColor; // 0x380 (4)
	struct FColor RigidBodyVelocityColor; // 0x384 (4)
	struct FColor RigidBodyForceColor; // 0x388 (4)
	struct FColor RigidBodyInfoColor; // 0x38C (4)
	struct FColor TransformIndexColor; // 0x390 (4)
	float TransformScale; // 0x394 (4)
	struct FColor LevelColor; // 0x398 (4)
	struct FColor ParentColor; // 0x39C (4)
	float ConnectivityEdgeThickness; // 0x3A0 (4)
	struct FColor GeometryIndexColor; // 0x3A4 (4)
	float GeometryTransformScale; // 0x3A8 (4)
	struct FColor BoundingBoxColor; // 0x3AC (4)
	struct FColor FaceColor; // 0x3B0 (4)
	struct FColor FaceIndexColor; // 0x3B4 (4)
	struct FColor FaceNormalColor; // 0x3B8 (4)
	struct FColor SingleFaceColor; // 0x3BC (4)
	struct FColor VertexColor; // 0x3C0 (4)
	struct FColor VertexIndexColor; // 0x3C4 (4)
	struct FColor VertexNormalColor; // 0x3C8 (4)
	struct UBillboardComponent SpriteComponent; // 0x3D0 (8)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent {

public:

	struct AGeometryCollectionDebugDrawActor GeometryCollectionDebugDrawActor; // 0xB0 (8)
	struct AGeometryCollectionRenderLevelSetActor GeometryCollectionRenderLevelSetActor; // 0xB8 (8)
};

// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public Object {

public:

	struct TArray<struct UMaterialInterface> Materials; // 0x30 (16)
	enum class ECollisionTypeEnum CollisionType; // 0x40 (1)
	enum class EImplicitTypeEnum ImplicitType; // 0x41 (1)
	int32_t MinLevelSetResolution; // 0x44 (4)
	int32_t MaxLevelSetResolution; // 0x48 (4)
	int32_t MinClusterLevelSetResolution; // 0x4C (4)
	int32_t MaxClusterLevelSetResolution; // 0x50 (4)
	float CollisionObjectReductionPercentage; // 0x54 (4)
	char bMassAsDensity : 0; // 0x58 (1)
	float Mass; // 0x5C (4)
	float MinimumMassClamp; // 0x60 (4)
	float CollisionParticlesFraction; // 0x64 (4)
	int32_t MaximumCollisionParticles; // 0x68 (4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70 (16)
	char EnableRemovePiecesOnFracture : 0; // 0x80 (1)
	struct TArray<struct UMaterialInterface> RemoveOnFractureMaterials; // 0x88 (16)
	struct FGuid PersistentGuid; // 0x98 (16)
	struct FGuid StateGuid; // 0xA8 (16)
	int32_t BoneSelectedMaterialIndex; // 0xB8 (4)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public UActor {

public:

	struct UVolumeTexture TargetVolumeTexture; // 0x318 (8)
	struct UMaterial RayMarchMaterial; // 0x320 (8)
	float SurfaceTolerance; // 0x328 (4)
	float Isovalue; // 0x32C (4)
	char Enabled : 0; // 0x330 (1)
	char RenderVolumeBoundingBox : 0; // 0x331 (1)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
class USkeletalMeshSimulationComponent : public UActorComponent {

public:

	struct UChaosPhysicalMaterial PhysicalMaterial; // 0xB8 (8)
	struct AChaosSolverActor ChaosSolverActor; // 0xC0 (8)
	struct UPhysicsAsset OverridePhysicsAsset; // 0xC8 (8)
	char bSimulating : 0; // 0xD0 (1)
	char bNotifyCollisions : 0; // 0xD1 (1)
	enum class EObjectStateTypeEnum ObjectType; // 0xD2 (1)
	float Density; // 0xD4 (4)
	float MinMass; // 0xD8 (4)
	float MaxMass; // 0xDC (4)
	enum class ECollisionTypeEnum CollisionType; // 0xE0 (1)
	float ImplicitShapeParticlesPerUnitArea; // 0xE4 (4)
	int32_t ImplicitShapeMinNumParticles; // 0xE8 (4)
	int32_t ImplicitShapeMaxNumParticles; // 0xEC (4)
	int32_t MinLevelSetResolution; // 0xF0 (4)
	int32_t MaxLevelSetResolution; // 0xF4 (4)
	int32_t CollisionGroup; // 0xF8 (4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xFC (1)
	struct FVector InitialLinearVelocity; // 0x100 (12)
	struct FVector InitialAngularVelocity; // 0x10C (12)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118 (16)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
class UStaticMeshSimulationComponent : public UActorComponent {

public:

	char Simulating : 0; // 0xB8 (1)
	char bNotifyCollisions : 0; // 0xB9 (1)
	enum class EObjectStateTypeEnum ObjectType; // 0xBA (1)
	float Mass; // 0xBC (4)
	enum class ECollisionTypeEnum CollisionType; // 0xC0 (1)
	enum class EImplicitTypeEnum ImplicitType; // 0xC1 (1)
	int32_t MinLevelSetResolution; // 0xC4 (4)
	int32_t MaxLevelSetResolution; // 0xC8 (4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xCC (1)
	struct FVector InitialLinearVelocity; // 0xD0 (12)
	struct FVector InitialAngularVelocity; // 0xDC (12)
	float DamageThreshold; // 0xE8 (4)
	struct UChaosPhysicalMaterial PhysicalMaterial; // 0xF0 (8)
	struct AChaosSolverActor ChaosSolverActor; // 0xF8 (8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100 (16)
	struct TArray<struct UPrimitiveComponent> SimulatedComponents; // 0x120 (16)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B87A30>
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4808EE0>
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters {
	enum class EGeometryCollectionCacheType CacheMode; // 0x0 (1)
	struct UGeometryCollectionCache TargetCache; // 0x8 (8)
	float ReverseCacheBeginTime; // 0x10 (4)
	char SaveCollisionData : 0; // 0x14 (1)
	char DoGenerateCollisionData : 0; // 0x15 (1)
	int32_t CollisionDataSizeMax; // 0x18 (4)
	char DoCollisionDataSpatialHash : 0; // 0x1C (1)
	float CollisionDataSpatialHashRadius; // 0x20 (4)
	int32_t MaxCollisionPerCell; // 0x24 (4)
	char SaveBreakingData : 0; // 0x28 (1)
	char DoGenerateBreakingData : 0; // 0x29 (1)
	int32_t BreakingDataSizeMax; // 0x2C (4)
	char DoBreakingDataSpatialHash : 0; // 0x30 (1)
	float BreakingDataSpatialHashRadius; // 0x34 (4)
	int32_t MaxBreakingPerCell; // 0x38 (4)
	char SaveTrailingData : 0; // 0x3C (1)
	char DoGenerateTrailingData : 0; // 0x3D (1)
	int32_t TrailingDataSizeMax; // 0x40 (4)
	float TrailingMinSpeedThreshold; // 0x44 (4)
	float TrailingMinVolumeThreshold; // 0x48 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
struct FChaosCollisionEventData {
	struct FVector Location; // 0x0 (12)
	struct FVector Normal; // 0xC (12)
	struct FVector Velocity1; // 0x18 (12)
	struct FVector Velocity2; // 0x24 (12)
	float Mass1; // 0x30 (4)
	float Mass2; // 0x34 (4)
	struct FVector Impulse; // 0x38 (12)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData {
	struct FVector Location; // 0x0 (12)
	struct FVector Velocity; // 0xC (12)
	float Mass; // 0x18 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData {
	struct FVector Location; // 0x0 (12)
	struct FVector Velocity; // 0xC (12)
	struct FVector AngularVelocity; // 0x18 (12)
	float Mass; // 0x24 (4)
	int32_t ParticleIndex; // 0x28 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0 (4)
	float MinRadius; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinMass; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0 (4)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinImpulse; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0 (4)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinAngularSpeed; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0 (4)
	struct AChaosSolverActor Solver; // 0x8 (8)
	struct AGeometryCollectionActor GeometryCollection; // 0x10 (8)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0 (4)
	enum class ECollisionTypeEnum CollisionType; // 0x4 (1)
	enum class EImplicitTypeEnum ImplicitType; // 0x5 (1)
	int32_t MinLevelSetResolution; // 0x8 (4)
	int32_t MaxLevelSetResolution; // 0xC (4)
	int32_t MinClusterLevelSetResolution; // 0x10 (4)
	int32_t MaxClusterLevelSetResolution; // 0x14 (4)
	int32_t CollisionObjectReductionPercentage; // 0x18 (4)
	float CollisionParticlesFraction; // 0x1C (4)
	int32_t MaximumCollisionParticles; // 0x20 (4)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
inline void UChaosDestructionListener::SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	struct SortTrailingEvents_Params {
		struct TArray<struct FChaosTrailingEventData>& TrailingEvents;
		enum class EChaosTrailingSortMethod SortMethod;
	}; SortTrailingEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TrailingEvents = Params.TrailingEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
inline void UChaosDestructionListener::SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	struct SortCollisionEvents_Params {
		struct TArray<struct FChaosCollisionEventData>& CollisionEvents;
		enum class EChaosCollisionSortMethod SortMethod;
	}; SortCollisionEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionEvents = Params.CollisionEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
inline void UChaosDestructionListener::SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	struct SortBreakingEvents_Params {
		struct TArray<struct FChaosBreakingEventData>& BreakingEvents;
		enum class EChaosBreakingSortMethod SortMethod;
	}; SortBreakingEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BreakingEvents = Params.BreakingEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
inline void UChaosDestructionListener::SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	struct SetTrailingEventRequestSettings_Params {
		struct FChaosTrailingEventRequestSettings& InSettings;
	}; SetTrailingEventRequestSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
inline void UChaosDestructionListener::SetTrailingEventEnabled(char bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	struct SetTrailingEventEnabled_Params {
		char bIsEnabled;
	}; SetTrailingEventEnabled_Params Params;

	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
inline void UChaosDestructionListener::SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	struct SetCollisionEventRequestSettings_Params {
		struct FChaosCollisionEventRequestSettings& InSettings;
	}; SetCollisionEventRequestSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
inline void UChaosDestructionListener::SetCollisionEventEnabled(char bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	struct SetCollisionEventEnabled_Params {
		char bIsEnabled;
	}; SetCollisionEventEnabled_Params Params;

	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
inline void UChaosDestructionListener::SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	struct SetBreakingEventRequestSettings_Params {
		struct FChaosBreakingEventRequestSettings& InSettings;
	}; SetBreakingEventRequestSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
inline void UChaosDestructionListener::SetBreakingEventEnabled(char bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	struct SetBreakingEventEnabled_Params {
		char bIsEnabled;
	}; SetBreakingEventEnabled_Params Params;

	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
inline void UChaosDestructionListener::RemoveGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	struct RemoveGeometryCollectionActor_Params {
		struct AGeometryCollectionActor GeometryCollectionActor;
	}; RemoveGeometryCollectionActor_Params Params;

	Params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
inline void UChaosDestructionListener::RemoveChaosSolverActor(struct AChaosSolverActor ChaosSolverActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	struct RemoveChaosSolverActor_Params {
		struct AChaosSolverActor ChaosSolverActor;
	}; RemoveChaosSolverActor_Params Params;

	Params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
inline char UChaosDestructionListener::IsEventListening() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	struct IsEventListening_Params {
		
		char ReturnValue;

	}; IsEventListening_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
inline void UChaosDestructionListener::AddGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	struct AddGeometryCollectionActor_Params {
		struct AGeometryCollectionActor GeometryCollectionActor;
	}; AddGeometryCollectionActor_Params Params;

	Params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
inline void UChaosDestructionListener::AddChaosSolverActor(struct AChaosSolverActor ChaosSolverActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	struct AddChaosSolverActor_Params {
		struct AChaosSolverActor ChaosSolverActor;
	}; AddChaosSolverActor_Params Params;

	Params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
inline char AGeometryCollectionActor::RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	struct RaycastSingle_Params {
		struct FVector Start;
		struct FVector End;
		struct FHitResult& OutHit;
		char ReturnValue;

	}; RaycastSingle_Params Params;

	Params.Start = Start;
	Params.End = End;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutHit = Params.OutHit;


	return params.ReturnValue;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
inline void UGeometryCollectionComponent::SetNotifyBreaks(char bNewNotifyBreaks) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	struct SetNotifyBreaks_Params {
		char bNewNotifyBreaks;
	}; SetNotifyBreaks_Params Params;

	Params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
inline void UGeometryCollectionComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct FChaosPhysicsCollisionInfo& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
inline void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	struct NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params {
		struct UGeometryCollectionComponent FracturedComponent;
	}; NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Params;

	Params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
inline void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	struct NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params {
		struct UGeometryCollectionComponent FracturedComponent;
	}; NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Params;

	Params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
inline void UGeometryCollectionComponent::ApplyPhysicsField(char Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	struct ApplyPhysicsField_Params {
		char Enabled;
		enum class EGeometryCollectionPhysicsTypeEnum Target;
		struct UFieldSystemMetaData MetaData;
		struct UFieldNodeBase Field;
	}; ApplyPhysicsField_Params Params;

	Params.Enabled = Enabled;
	Params.Target = Target;
	Params.MetaData = MetaData;
	Params.Field = Field;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
inline void UGeometryCollectionComponent::ApplyKinematicField(float Radius, struct FVector Position) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	struct ApplyKinematicField_Params {
		float Radius;
		struct FVector Position;
	}; ApplyKinematicField_Params Params;

	Params.Radius = Radius;
	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
inline void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct FChaosPhysicsCollisionInfo& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
inline void UStaticMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct FChaosPhysicsCollisionInfo& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
inline void UStaticMeshSimulationComponent::ForceRecreatePhysicsState() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	struct ForceRecreatePhysicsState_Params {
		
	}; ForceRecreatePhysicsState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

