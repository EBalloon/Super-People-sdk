// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8 {
	EChaosBreakingSortMethod = 0,
	EChaosBreakingSortMethod = 1,
	EChaosBreakingSortMethod = 2,
	EChaosBreakingSortMethod = 3,
	EChaosBreakingSortMethod = 4,
	EChaosBreakingSortMethod = 5
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8 {
	EChaosCollisionSortMethod = 0,
	EChaosCollisionSortMethod = 1,
	EChaosCollisionSortMethod = 2,
	EChaosCollisionSortMethod = 3,
	EChaosCollisionSortMethod = 4,
	EChaosCollisionSortMethod = 5,
	EChaosCollisionSortMethod = 6
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8 {
	EChaosTrailingSortMethod = 0,
	EChaosTrailingSortMethod = 1,
	EChaosTrailingSortMethod = 2,
	EChaosTrailingSortMethod = 3,
	EChaosTrailingSortMethod = 4,
	EChaosTrailingSortMethod = 5
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8 {
	EGeometryCollectionDebugDrawActorHideGeometry = 0,
	EGeometryCollectionDebugDrawActorHideGeometry = 1,
	EGeometryCollectionDebugDrawActorHideGeometry = 2,
	EGeometryCollectionDebugDrawActorHideGeometry = 3,
	EGeometryCollectionDebugDrawActorHideGeometry = 4,
	EGeometryCollectionDebugDrawActorHideGeometry = 5
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8 {
	ECollectionGroupEnum = 0,
	ECollectionGroupEnum = 1
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8 {
	ECollectionAttributeEnum = 0,
	ECollectionAttributeEnum = 1,
	ECollectionAttributeEnum = 2,
	ECollectionAttributeEnum = 3
};

// Class GeometryCollectionEngine.ChaosDestructionListener
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled; //  0x238 Size(1)
	char bIsBreakingEventListeningEnabled; //  0x238 Size(1)
	char bIsTrailingEventListeningEnabled; //  0x238 Size(1)
	Unknown CollisionEventRequestSettings; //  0x23c Size(18)
	Unknown BreakingEventRequestSettings; //  0x254 Size(18)
	Unknown TrailingEventRequestSettings; //  0x26c Size(18)
	Unknown ChaosSolverActors; //  0x288 Size(50)
	Unknown GeometryCollectionActors; //  0x2d8 Size(50)
	struct FMulticastInlineDelegate OnCollisionEvents; //  0x328 Size(10)
	struct FMulticastInlineDelegate OnBreakingEvents; //  0x338 Size(10)
	struct FMulticastInlineDelegate OnTrailingEvents; //  0x348 Size(10)

	void SortTrailingEvents(Unknown& TrailingEvents, Unknown SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <Game+0x4023530>
};

// Class GeometryCollectionEngine.GeometryCollectionActor
struct AGeometryCollectionActor : UActor {
	Unknown GeometryCollectionComponent; //  0x310 Size(8)
	Unknown GeometryCollectionDebugDrawComponent; //  0x318 Size(8)

	char RaycastSingle(Unknown Start, Unknown End, Unknown& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <Game+0x4022d10>
};

// Class GeometryCollectionEngine.GeometryCollectionCache
struct UGeometryCollectionCache : Object {
	Unknown RecordedData; //  0x28 Size(10)
	Unknown SupportedCollection; //  0x38 Size(8)
	Unknown CompatibleCollectionState; //  0x40 Size(10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
struct UGeometryCollectionComponent : UMeshComponent {
	Unknown ChaosSolverActor; //  0x4f0 Size(8)
	Unknown RestCollection; //  0x5d8 Size(8)
	Unknown InitializationFields; //  0x5e0 Size(10)
	char Simulating; //  0x5f0 Size(1)
	Unknown ObjectType; //  0x5f8 Size(1)
	char Enab; //  0x5f9 Size(1)
	int32_t ClusterGroupIndex; //  0x5fc Size(4)
	int32_t MaxClusterLevel; //  0x600 Size(4)
	Unknown DamageThreshold; //  0x608 Size(10)
	Unknown ClusterConnectionType; //  0x618 Size(1)
	int32_t CollisionGroup; //  0x61c Size(4)
	float CollisionSampleFraction; //  0x620 Size(4)
	float LinearEtherDrag; //  0x624 Size(4)
	float AngularEtherDrag; //  0x628 Size(4)
	Unknown PhysicalMaterial; //  0x630 Size(8)
	Unknown InitialVelocityType; //  0x638 Size(1)
	Unknown InitialLinearVelocity; //  0x63c Size(c)
	Unknown InitialAngularVelocity; //  0x648 Size(c)
	Unknown CacheParameters; //  0x658 Size(50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; //  0x6a8 Size(10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; //  0x6b8 Size(10)
	struct FMulticastInlineDelegate OnChaosBreakEvent; //  0x6e0 Size(10)
	float DesiredCacheTime; //  0x6f0 Size(4)
	char CachePlayback; //  0x6f4 Size(1)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; //  0x6f8 Size(10)
	char bNotifyBreaks; //  0x708 Size(1)
	char bNotifyCollisions; //  0x709 Size(1)
	Unknown DummyBodySetup; //  0x968 Size(8)

	void SetNotifyBreaks(char bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks(Final|Native|Public|BlueprintCallable) // <Game+0x4023170>
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
struct AGeometryCollectionDebugDrawActor : UActor {
	Unknown WarningMessage; //  0x310 Size(1)
	Unknown SelectedRigidBody; //  0x318 Size(18)
	char bDeb; //  0x330 Size(1)
	char bDebctedRigidBody; //  0x331 Size(1)
	char bDeb; //  0x332 Size(1)
	Unknown HideGeometry; //  0x333 Size(1)
	char bShowRigidBodyId; //  0x334 Size(1)
	char bShowRigidBodyCollision; //  0x335 Size(1)
	char bCollisionAtOrigin; //  0x336 Size(1)
	char bShowRigidBodyTransform; //  0x337 Size(1)
	char bShowRigidBodyInertia; //  0x338 Size(1)
	char bShowRigidBodyVelocity; //  0x339 Size(1)
	char bShowRigidBodyForce; //  0x33a Size(1)
	char bShowRigidBodyInfos; //  0x33b Size(1)
	char bShowTransformIndex; //  0x33c Size(1)
	char bShowTransform; //  0x33d Size(1)
	char bShowParent; //  0x33e Size(1)
	char bShowLevel; //  0x33f Size(1)
	char bShowConnectivityEdges; //  0x340 Size(1)
	char bShowGeometryIndex; //  0x341 Size(1)
	char bShowGeometryTransform; //  0x342 Size(1)
	char bShowBoundingBox; //  0x343 Size(1)
	char bShowFaces; //  0x344 Size(1)
	char bShowFaceIndices; //  0x345 Size(1)
	char bShowFaceNormals; //  0x346 Size(1)
	char bShowSingleFace; //  0x347 Size(1)
	int32_t SingleFaceIndex; //  0x348 Size(4)
	char bShowVertices; //  0x34c Size(1)
	char bShowVertexIndices; //  0x34d Size(1)
	char bShowVertexNormals; //  0x34e Size(1)
	char bUseActiveVisualization; //  0x34f Size(1)
	float PointThickness; //  0x350 Size(4)
	float LineThickness; //  0x354 Size(4)
	char bTextShadow; //  0x358 Size(1)
	float TextScale; //  0x35c Size(4)
	float NormalScale; //  0x360 Size(4)
	float AxisScale; //  0x364 Size(4)
	float ArrowScale; //  0x368 Size(4)
	Unknown RigidBodyIdColor; //  0x36c Size(4)
	float RigidBodyTransformScale; //  0x370 Size(4)
	Unknown RigidBodyCollisionColor; //  0x374 Size(4)
	Unknown RigidBodyInertiaColor; //  0x378 Size(4)
	Unknown RigidBodyVelocityColor; //  0x37c Size(4)
	Unknown RigidBodyForceColor; //  0x380 Size(4)
	Unknown RigidBodyInfoColor; //  0x384 Size(4)
	Unknown TransformIndexColor; //  0x388 Size(4)
	float TransformScale; //  0x38c Size(4)
	Unknown LevelColor; //  0x390 Size(4)
	Unknown ParentColor; //  0x394 Size(4)
	float ConnectivityEdgeThickness; //  0x398 Size(4)
	Unknown GeometryIndexColor; //  0x39c Size(4)
	float GeometryTransformScale; //  0x3a0 Size(4)
	Unknown BoundingBoxColor; //  0x3a4 Size(4)
	Unknown FaceColor; //  0x3a8 Size(4)
	Unknown FaceIndexColor; //  0x3ac Size(4)
	Unknown FaceNormalColor; //  0x3b0 Size(4)
	Unknown SingleFaceColor; //  0x3b4 Size(4)
	Unknown VertexColor; //  0x3b8 Size(4)
	Unknown VertexIndexColor; //  0x3bc Size(4)
	Unknown VertexNormalColor; //  0x3c0 Size(4)
	Unknown SpriteComponent; //  0x3c8 Size(8)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	Unknown GeometryCollectionDebugDrawActor; //  0xb0 Size(8)
	Unknown GeometryCollectionRenderLevelSetActor; //  0xb8 Size(8)
};

// Class GeometryCollectionEngine.GeometryCollection
struct UGeometryCollection : Object {
	Unknown Materials; //  0x30 Size(10)
	Unknown CollisionType; //  0x40 Size(1)
	Unknown ImplicitType; //  0x41 Size(1)
	int32_t MinLevelSetResolution; //  0x44 Size(4)
	int32_t MaxLevelSetResolution; //  0x48 Size(4)
	int32_t MinClusterLevelSetResolutio; //  0x4c Size(4)
	int32_t MaxClusterLevelSetResolutio; //  0x50 Size(4)
	float CollisionObjectReductionPercentage; //  0x54 Size(4)
	char bMassAsDensity; //  0x58 Size(1)
	float Mass; //  0x5c Size(4)
	float MinimumMassClamp; //  0x60 Size(4)
	float CollisionParticlesFraction; //  0x64 Size(4)
	int32_t MaximumCollisionParticles; //  0x68 Size(4)
	Unknown SizeSpecificData; //  0x70 Size(10)
	char Enab; //  0x80 Size(1)
	Unknown RemoveOnFractureMaterials; //  0x88 Size(10)
	Unknown PersistentGuid; //  0x98 Size(10)
	Unknown StateGuid; //  0xa8 Size(10)
	int32_t BoneSelectedMaterialIndex; //  0xb8 Size(4)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
struct AGeometryCollectionRenderLevelSetActor : UActor {
	Unknown TargetVolumeTexture; //  0x310 Size(8)
	Unknown RayMarchMaterial; //  0x318 Size(8)
	float SurfaceTolerance; //  0x320 Size(4)
	float Isovalue; //  0x324 Size(4)
	char Enab; //  0x328 Size(1)
	char RenderVolumeBoundingBox; //  0x329 Size(1)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationCompo
struct USkeletalMeshSimulationCompot : UActorComponent {
	Unknown PhysicalMaterial; //  0xb8 Size(8)
	Unknown ChaosSolverActor; //  0xc0 Size(8)
	Unknown OverridePhysicsAsset; //  0xc8 Size(8)
	char bSimulating; //  0xd0 Size(1)
	char bNotifyCollisions; //  0xd1 Size(1)
	Unknown ObjectType; //  0xd2 Size(1)
	float Density; //  0xd4 Size(4)
	float MinMass; //  0xd8 Size(4)
	float MaxMass; //  0xdc Size(4)
	Unknown CollisionType; //  0xe0 Size(1)
	float ImplicitShapeParticlesPerUnitArea; //  0xe4 Size(4)
	int32_t ImplicitShapeMinNumParticles; //  0xe8 Size(4)
	int32_t ImplicitShapeMaxNumParticles; //  0xec Size(4)
	int32_t MinLevelSetResolution; //  0xf0 Size(4)
	int32_t MaxLevelSetResolution; //  0xf4 Size(4)
	int32_t CollisionGroup; //  0xf8 Size(4)
	Unknown InitialVelocityType; //  0xfc Size(1)
	Unknown InitialLinearVelocity; //  0x100 Size(c)
	Unknown InitialAngularVelocity; //  0x10c Size(c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; //  0x118 Size(10)

	void ReceivePhysicsCollision(Unknown& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationCompot.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <Game+0x23a73f0>
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
struct UStaticMeshSimulationComponent : UActorComponent {
	char Simulating; //  0xb8 Size(1)
	char bNotifyCollisions; //  0xb9 Size(1)
	Unknown ObjectType; //  0xba Size(1)
	float Mass; //  0xbc Size(4)
	Unknown CollisionType; //  0xc0 Size(1)
	Unknown ImplicitType; //  0xc1 Size(1)
	int32_t MinLevelSetResolution; //  0xc4 Size(4)
	int32_t MaxLevelSetResolution; //  0xc8 Size(4)
	Unknown InitialVelocityType; //  0xcc Size(1)
	Unknown InitialLinearVelocity; //  0xd0 Size(c)
	Unknown InitialAngularVelocity; //  0xdc Size(c)
	float DamageThreshold; //  0xe8 Size(4)
	Unknown PhysicalMaterial; //  0xf0 Size(8)
	Unknown ChaosSolverActor; //  0xf8 Size(8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; //  0x100 Size(10)
	Unknown SimulatedComponents; //  0x120 Size(10)

	void ReceivePhysicsCollision(Unknown& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <Game+0x23a73f0>
};

