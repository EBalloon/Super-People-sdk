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

	char bIsCollisionEventListeningEnabled : 0; // 0x238 (1)
	char bIsBreakingEventListeningEnabled : 0; // 0x238 (1)
	char bIsTrailingEventListeningEnabled : 0; // 0x238 (1)
	struct Unknown CollisionEventRequestSettings; // 0x23C (24)
	struct Unknown BreakingEventRequestSettings; // 0x254 (24)
	struct Unknown TrailingEventRequestSettings; // 0x26C (24)
	struct TSet<Unknown> ChaosSolverActors; // 0x288 (80)
	struct TSet<Unknown> GeometryCollectionActors; // 0x2D8 (80)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x328 (16)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x338 (16)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x348 (16)

	void SortTrailingEvents(struct TArray<Unknown>& TrailingEvents, enum class Unknow SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ED060>
	void SortCollisionEvents(struct TArray<Unknown>& CollisionEvents, enum class Unknow SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECF60>
	void SortBreakingEvents(struct TArray<Unknown>& BreakingEvents, enum class Unknow SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECE60>
	void SetTrailingEventRequestSettings(struct Unknown& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECDC0>
	void SetTrailingEventEnabled(char bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECD30>
	void SetCollisionEventRequestSettings(struct Unknown& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECC00>
	void SetCollisionEventEnabled(char bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECB70>
	void SetBreakingEventRequestSettings(struct Unknown& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECAD0>
	void SetBreakingEventEnabled(char bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECA40>
	void RemoveGeometryCollectionActor(struct Unknown GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC9C0>
	void RemoveChaosSolverActor(struct Unknown ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16C66C0>
	char IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC810>
	void AddGeometryCollectionActor(struct Unknown GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC550>
	void AddChaosSolverActor(struct Unknown ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x16C66C0>
};

// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public UActor {

public:

	struct Unknown GeometryCollectionComponent; // 0x310 (8)
	struct Unknown GeometryCollectionDebugDrawComponent; // 0x318 (8)

	char RaycastSingle(struct Unknown Start, struct Unknown End, struct Unknown& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC840>
};

// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public Object {

public:

	struct Unknown RecordedData; // 0x28 (16)
	struct Unknown SupportedCollection; // 0x38 (8)
	struct Unknown CompatibleCollectionState; // 0x40 (16)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent {

public:

	struct Unknown ChaosSolverActor; // 0x4F0 (8)
	struct Unknown RestCollection; // 0x5D8 (8)
	struct TArray<Unknown> InitializationFields; // 0x5E0 (16)
	char Simulating : 0; // 0x5F0 (1)
	enum class Unknow ObjectType; // 0x5F8 (1)
	char EnableClustering : 0; // 0x5F9 (1)
	int32_t ClusterGroupIndex; // 0x5FC (4)
	int32_t MaxClusterLevel; // 0x600 (4)
	struct TArray<Unknown> DamageThreshold; // 0x608 (16)
	enum class Unknow ClusterConnectionType; // 0x618 (1)
	int32_t CollisionGroup; // 0x61C (4)
	float CollisionSampleFraction; // 0x620 (4)
	float LinearEtherDrag; // 0x624 (4)
	float AngularEtherDrag; // 0x628 (4)
	struct Unknown PhysicalMaterial; // 0x630 (8)
	enum class Unknow InitialVelocityType; // 0x638 (1)
	struct Unknown InitialLinearVelocity; // 0x63C (12)
	struct Unknown InitialAngularVelocity; // 0x648 (12)
	struct Unknown CacheParameters; // 0x658 (80)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x6A8 (16)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6B8 (16)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x6E0 (16)
	float DesiredCacheTime; // 0x6F0 (4)
	char CachePlayback : 0; // 0x6F4 (1)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x6F8 (16)
	char bNotifyBreaks : 0; // 0x708 (1)
	char bNotifyCollisions : 0; // 0x709 (1)
	struct Unknown DummyBodySetup; // 0x968 (8)

	void SetNotifyBreaks(char bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47ECCA0>
	void ReceivePhysicsCollision(struct Unknown& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct Unknown FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct Unknown FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(MulticastDelegate|Public|Delegate) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ApplyPhysicsField(char Enabled, enum class Unknow Target, struct Unknown MetaData, struct Unknown Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC6A0>
	void ApplyKinematicField(float Radius, struct Unknown Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC5D0>
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public UActor {

public:

	struct Unknown WarningMessage; // 0x310 (1)
	struct Unknown SelectedRigidBody; // 0x318 (24)
	char bDebugDrawWholeCollection : 0; // 0x330 (1)
	char bDebugDrawHierarchy : 0; // 0x331 (1)
	char bDebugDrawClustering : 0; // 0x332 (1)
	enum class Unknow HideGeometry; // 0x333 (1)
	char bShowRigidBodyId : 0; // 0x334 (1)
	char bShowRigidBodyCollision : 0; // 0x335 (1)
	char bCollisionAtOrigin : 0; // 0x336 (1)
	char bShowRigidBodyTransform : 0; // 0x337 (1)
	char bShowRigidBodyInertia : 0; // 0x338 (1)
	char bShowRigidBodyVelocity : 0; // 0x339 (1)
	char bShowRigidBodyForce : 0; // 0x33A (1)
	char bShowRigidBodyInfos : 0; // 0x33B (1)
	char bShowTransformIndex : 0; // 0x33C (1)
	char bShowTransform : 0; // 0x33D (1)
	char bShowParent : 0; // 0x33E (1)
	char bShowLevel : 0; // 0x33F (1)
	char bShowConnectivityEdges : 0; // 0x340 (1)
	char bShowGeometryIndex : 0; // 0x341 (1)
	char bShowGeometryTransform : 0; // 0x342 (1)
	char bShowBoundingBox : 0; // 0x343 (1)
	char bShowFaces : 0; // 0x344 (1)
	char bShowFaceIndices : 0; // 0x345 (1)
	char bShowFaceNormals : 0; // 0x346 (1)
	char bShowSingleFace : 0; // 0x347 (1)
	int32_t SingleFaceIndex; // 0x348 (4)
	char bShowVertices : 0; // 0x34C (1)
	char bShowVertexIndices : 0; // 0x34D (1)
	char bShowVertexNormals : 0; // 0x34E (1)
	char bUseActiveVisualization : 0; // 0x34F (1)
	float PointThickness; // 0x350 (4)
	float LineThickness; // 0x354 (4)
	char bTextShadow : 0; // 0x358 (1)
	float TextScale; // 0x35C (4)
	float NormalScale; // 0x360 (4)
	float AxisScale; // 0x364 (4)
	float ArrowScale; // 0x368 (4)
	struct Unknown RigidBodyIdColor; // 0x36C (4)
	float RigidBodyTransformScale; // 0x370 (4)
	struct Unknown RigidBodyCollisionColor; // 0x374 (4)
	struct Unknown RigidBodyInertiaColor; // 0x378 (4)
	struct Unknown RigidBodyVelocityColor; // 0x37C (4)
	struct Unknown RigidBodyForceColor; // 0x380 (4)
	struct Unknown RigidBodyInfoColor; // 0x384 (4)
	struct Unknown TransformIndexColor; // 0x388 (4)
	float TransformScale; // 0x38C (4)
	struct Unknown LevelColor; // 0x390 (4)
	struct Unknown ParentColor; // 0x394 (4)
	float ConnectivityEdgeThickness; // 0x398 (4)
	struct Unknown GeometryIndexColor; // 0x39C (4)
	float GeometryTransformScale; // 0x3A0 (4)
	struct Unknown BoundingBoxColor; // 0x3A4 (4)
	struct Unknown FaceColor; // 0x3A8 (4)
	struct Unknown FaceIndexColor; // 0x3AC (4)
	struct Unknown FaceNormalColor; // 0x3B0 (4)
	struct Unknown SingleFaceColor; // 0x3B4 (4)
	struct Unknown VertexColor; // 0x3B8 (4)
	struct Unknown VertexIndexColor; // 0x3BC (4)
	struct Unknown VertexNormalColor; // 0x3C0 (4)
	struct Unknown SpriteComponent; // 0x3C8 (8)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent {

public:

	struct Unknown GeometryCollectionDebugDrawActor; // 0xB0 (8)
	struct Unknown GeometryCollectionRenderLevelSetActor; // 0xB8 (8)
};

// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public Object {

public:

	struct TArray<Unknown> Materials; // 0x30 (16)
	enum class Unknow CollisionType; // 0x40 (1)
	enum class Unknow ImplicitType; // 0x41 (1)
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
	struct TArray<Unknown> SizeSpecificData; // 0x70 (16)
	char EnableRemovePiecesOnFracture : 0; // 0x80 (1)
	struct TArray<Unknown> RemoveOnFractureMaterials; // 0x88 (16)
	struct Unknown PersistentGuid; // 0x98 (16)
	struct Unknown StateGuid; // 0xA8 (16)
	int32_t BoneSelectedMaterialIndex; // 0xB8 (4)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public UActor {

public:

	struct Unknown TargetVolumeTexture; // 0x310 (8)
	struct Unknown RayMarchMaterial; // 0x318 (8)
	float SurfaceTolerance; // 0x320 (4)
	float Isovalue; // 0x324 (4)
	char Enabled : 0; // 0x328 (1)
	char RenderVolumeBoundingBox : 0; // 0x329 (1)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
class USkeletalMeshSimulationComponent : public UActorComponent {

public:

	struct Unknown PhysicalMaterial; // 0xB8 (8)
	struct Unknown ChaosSolverActor; // 0xC0 (8)
	struct Unknown OverridePhysicsAsset; // 0xC8 (8)
	char bSimulating : 0; // 0xD0 (1)
	char bNotifyCollisions : 0; // 0xD1 (1)
	enum class Unknow ObjectType; // 0xD2 (1)
	float Density; // 0xD4 (4)
	float MinMass; // 0xD8 (4)
	float MaxMass; // 0xDC (4)
	enum class Unknow CollisionType; // 0xE0 (1)
	float ImplicitShapeParticlesPerUnitArea; // 0xE4 (4)
	int32_t ImplicitShapeMinNumParticles; // 0xE8 (4)
	int32_t ImplicitShapeMaxNumParticles; // 0xEC (4)
	int32_t MinLevelSetResolution; // 0xF0 (4)
	int32_t MaxLevelSetResolution; // 0xF4 (4)
	int32_t CollisionGroup; // 0xF8 (4)
	enum class Unknow InitialVelocityType; // 0xFC (1)
	struct Unknown InitialLinearVelocity; // 0x100 (12)
	struct Unknown InitialAngularVelocity; // 0x10C (12)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118 (16)

	void ReceivePhysicsCollision(struct Unknown& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
class UStaticMeshSimulationComponent : public UActorComponent {

public:

	char Simulating : 0; // 0xB8 (1)
	char bNotifyCollisions : 0; // 0xB9 (1)
	enum class Unknow ObjectType; // 0xBA (1)
	float Mass; // 0xBC (4)
	enum class Unknow CollisionType; // 0xC0 (1)
	enum class Unknow ImplicitType; // 0xC1 (1)
	int32_t MinLevelSetResolution; // 0xC4 (4)
	int32_t MaxLevelSetResolution; // 0xC8 (4)
	enum class Unknow InitialVelocityType; // 0xCC (1)
	struct Unknown InitialLinearVelocity; // 0xD0 (12)
	struct Unknown InitialAngularVelocity; // 0xDC (12)
	float DamageThreshold; // 0xE8 (4)
	struct Unknown PhysicalMaterial; // 0xF0 (8)
	struct Unknown ChaosSolverActor; // 0xF8 (8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100 (16)
	struct TArray<Unknown> SimulatedComponents; // 0x120 (16)

	void ReceivePhysicsCollision(struct Unknown& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x47EC7F0>
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters {
	enum class Unknow CacheMode; // 0x0 (1)
	struct Unknown TargetCache; // 0x8 (8)
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
	struct Unknown Location; // 0x0 (12)
	struct Unknown Normal; // 0xC (12)
	struct Unknown Velocity1; // 0x18 (12)
	struct Unknown Velocity2; // 0x24 (12)
	float Mass1; // 0x30 (4)
	float Mass2; // 0x34 (4)
	struct Unknown Impulse; // 0x38 (12)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Velocity; // 0xC (12)
	float Mass; // 0x18 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData {
	struct Unknown Location; // 0x0 (12)
	struct Unknown Velocity; // 0xC (12)
	struct Unknown AngularVelocity; // 0x18 (12)
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
	enum class Unknow SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0 (4)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinImpulse; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class Unknow SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0 (4)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinAngularSpeed; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class Unknow SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0 (4)
	struct Unknown Solver; // 0x8 (8)
	struct Unknown GeometryCollection; // 0x10 (8)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0 (4)
	enum class Unknow CollisionType; // 0x4 (1)
	enum class Unknow ImplicitType; // 0x5 (1)
	int32_t MinLevelSetResolution; // 0x8 (4)
	int32_t MaxLevelSetResolution; // 0xC (4)
	int32_t MinClusterLevelSetResolution; // 0x10 (4)
	int32_t MaxClusterLevelSetResolution; // 0x14 (4)
	int32_t CollisionObjectReductionPercentage; // 0x18 (4)
	float CollisionParticlesFraction; // 0x1C (4)
	int32_t MaximumCollisionParticles; // 0x20 (4)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
inline void UChaosDestructionListener::SortTrailingEvents(struct TArray<Unknown>& TrailingEvents, enum class Unknow SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	struct SortTrailingEvents_Params {
		struct TArray<Unknown>& TrailingEvents;
		enum class Unknow SortMethod;
	}; SortTrailingEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TrailingEvents = Params.TrailingEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
inline void UChaosDestructionListener::SortCollisionEvents(struct TArray<Unknown>& CollisionEvents, enum class Unknow SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	struct SortCollisionEvents_Params {
		struct TArray<Unknown>& CollisionEvents;
		enum class Unknow SortMethod;
	}; SortCollisionEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionEvents = Params.CollisionEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
inline void UChaosDestructionListener::SortBreakingEvents(struct TArray<Unknown>& BreakingEvents, enum class Unknow SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	struct SortBreakingEvents_Params {
		struct TArray<Unknown>& BreakingEvents;
		enum class Unknow SortMethod;
	}; SortBreakingEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BreakingEvents = Params.BreakingEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
inline void UChaosDestructionListener::SetTrailingEventRequestSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	struct SetTrailingEventRequestSettings_Params {
		struct Unknown& InSettings;
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
inline void UChaosDestructionListener::SetCollisionEventRequestSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	struct SetCollisionEventRequestSettings_Params {
		struct Unknown& InSettings;
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
inline void UChaosDestructionListener::SetBreakingEventRequestSettings(struct Unknown& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	struct SetBreakingEventRequestSettings_Params {
		struct Unknown& InSettings;
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
inline void UChaosDestructionListener::RemoveGeometryCollectionActor(struct Unknown GeometryCollectionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	struct RemoveGeometryCollectionActor_Params {
		struct Unknown GeometryCollectionActor;
	}; RemoveGeometryCollectionActor_Params Params;

	Params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
inline void UChaosDestructionListener::RemoveChaosSolverActor(struct Unknown ChaosSolverActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	struct RemoveChaosSolverActor_Params {
		struct Unknown ChaosSolverActor;
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
inline void UChaosDestructionListener::AddGeometryCollectionActor(struct Unknown GeometryCollectionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	struct AddGeometryCollectionActor_Params {
		struct Unknown GeometryCollectionActor;
	}; AddGeometryCollectionActor_Params Params;

	Params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
inline void UChaosDestructionListener::AddChaosSolverActor(struct Unknown ChaosSolverActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	struct AddChaosSolverActor_Params {
		struct Unknown ChaosSolverActor;
	}; AddChaosSolverActor_Params Params;

	Params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
inline char AGeometryCollectionActor::RaycastSingle(struct Unknown Start, struct Unknown End, struct Unknown& OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	struct RaycastSingle_Params {
		struct Unknown Start;
		struct Unknown End;
		struct Unknown& OutHit;
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
inline void UGeometryCollectionComponent::ReceivePhysicsCollision(struct Unknown& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct Unknown& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
inline void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct Unknown FracturedComponent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	struct NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params {
		struct Unknown FracturedComponent;
	}; NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Params;

	Params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
inline void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct Unknown FracturedComponent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	struct NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params {
		struct Unknown FracturedComponent;
	}; NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Params;

	Params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
inline void UGeometryCollectionComponent::ApplyPhysicsField(char Enabled, enum class Unknow Target, struct Unknown MetaData, struct Unknown Field) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	struct ApplyPhysicsField_Params {
		char Enabled;
		enum class Unknow Target;
		struct Unknown MetaData;
		struct Unknown Field;
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
inline void UGeometryCollectionComponent::ApplyKinematicField(float Radius, struct Unknown Position) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	struct ApplyKinematicField_Params {
		float Radius;
		struct Unknown Position;
	}; ApplyKinematicField_Params Params;

	Params.Radius = Radius;
	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
inline void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(struct Unknown& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct Unknown& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
inline void UStaticMeshSimulationComponent::ReceivePhysicsCollision(struct Unknown& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct Unknown& CollisionInfo;
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

