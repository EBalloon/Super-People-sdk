// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4,
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3,
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3,
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3,
};

// Class NavigationSystem.NavigationData
class ANavigationData : public UActor {

public:

	struct UPrimitiveComponent RenderingComp; // 0x320 (8)
	struct FNavDataConfig NavDataConfig; // 0x328 (120)
	char bEnableDrawing : 0; // 0x3A0 (1)
	char bForceRebuildOnLoad : 0; // 0x3A0 (1)
	char bAutoDestroyWhenNoNavigation : 0; // 0x3A0 (1)
	char bCanBeMainNavData : 0; // 0x3A0 (1)
	char bCanSpawnOnRebuild : 0; // 0x3A0 (1)
	char bRebuildAtRuntime : 0; // 0x3A0 (1)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x3A4 (1)
	float ObservedPathsTickInterval; // 0x3A8 (4)
	uint32_t DataVersion; // 0x3AC (4)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x490 (16)
};

// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase {

public:

	float DefaultCost; // 0x30 (4)
	float FixedAreaEnteringCost; // 0x34 (4)
	struct FColor DrawColor; // 0x38 (4)
	struct FNavAgentSelector SupportedAgents; // 0x3C (4)
	char bSupportsAgent0 : 0; // 0x40 (1)
	char bSupportsAgent1 : 0; // 0x40 (1)
	char bSupportsAgent2 : 0; // 0x40 (1)
	char bSupportsAgent3 : 0; // 0x40 (1)
	char bSupportsAgent4 : 0; // 0x40 (1)
	char bSupportsAgent5 : 0; // 0x40 (1)
	char bSupportsAgent6 : 0; // 0x40 (1)
	char bSupportsAgent7 : 0; // 0x40 (1)
	char bSupportsAgent8 : 0; // 0x41 (1)
	char bSupportsAgent9 : 0; // 0x41 (1)
	char bSupportsAgent10 : 0; // 0x41 (1)
	char bSupportsAgent11 : 0; // 0x41 (1)
	char bSupportsAgent12 : 0; // 0x41 (1)
	char bSupportsAgent13 : 0; // 0x41 (1)
	char bSupportsAgent14 : 0; // 0x41 (1)
	char bSupportsAgent15 : 0; // 0x41 (1)
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta {

public:

	struct UClass* Agent0Area; // 0x48 (8)
	struct UClass* Agent1Area; // 0x50 (8)
	struct UClass* Agent2Area; // 0x58 (8)
	struct UClass* Agent3Area; // 0x60 (8)
	struct UClass* Agent4Area; // 0x68 (8)
	struct UClass* Agent5Area; // 0x70 (8)
	struct UClass* Agent6Area; // 0x78 (8)
	struct UClass* Agent7Area; // 0x80 (8)
	struct UClass* Agent8Area; // 0x88 (8)
	struct UClass* Agent9Area; // 0x90 (8)
	struct UClass* Agent10Area; // 0x98 (8)
	struct UClass* Agent11Area; // 0xA0 (8)
	struct UClass* Agent12Area; // 0xA8 (8)
	struct UClass* Agent13Area; // 0xB0 (8)
	struct UClass* Agent14Area; // 0xB8 (8)
	struct UClass* Agent15Area; // 0xC0 (8)
};

// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase {

public:

	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80 (16)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90 (16)
	struct UClass* AreaClass; // 0xA0 (8)
	char bGatherConvexGeometry : 0; // 0xA8 (1)
	char bCreateOnClient : 0; // 0xA8 (1)
};

// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent {

public:

	struct FNavGraphNode Node; // 0x230 (24)
	struct UNavigationGraphNodeComponent NextNodeComponent; // 0x248 (8)
	struct UNavigationGraphNodeComponent PrevNodeComponent; // 0x250 (8)
};

// Class NavigationSystem.NavigationInvokerComponent
class UNavigationInvokerComponent : public UActorComponent {

public:

	float TileGenerationRadius; // 0xB0 (4)
	float TileRemovalRadius; // 0xB4 (4)
};

// Class NavigationSystem.NavigationPath
class UNavigationPath : public Object {

public:

	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28 (16)
	struct TArray<struct FVector> PathPoints; // 0x38 (16)
	char RecalculateOnInvalidation; // 0x48 (1)

	char IsValid(); // Function NavigationSystem.NavigationPath.IsValid(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4530>
	char IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EE9E20>
	char IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4500>
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3E10>
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3BC0>
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3AC0>
	void EnableRecalculationOnInvalidation(char DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F36A0>
	void EnableDebugDrawing(char bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F35C0>
};

// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public Object {

public:

	struct TArray<struct FNavigationFilterArea> Areas; // 0x28 (16)
	struct FNavigationFilterFlags IncludeFlags; // 0x38 (4)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3C (4)
};

// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase {

public:

	struct ANavigationData MainNavData; // 0x28 (8)
	struct ANavigationData AbstractNavData; // 0x30 (8)
	struct FName DefaultAgentName; // 0x38 (8)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x40 (40)
	char bAutoCreateNavigationData : 0; // 0x68 (1)
	char bSpawnNavDataInNavBoundsLevel : 0; // 0x68 (1)
	char bAllowClientSideNavigation : 0; // 0x68 (1)
	char bShouldDiscardSubLevelNavData : 0; // 0x68 (1)
	char bTickWhilePaused : 0; // 0x68 (1)
	char bSupportRebuilding : 0; // 0x68 (1)
	char bInitialBuildingLocked : 0; // 0x68 (1)
	char bSkipAgentHeightCheckWhenPickingNavData : 0; // 0x69 (1)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x6C (1)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 0; // 0x70 (1)
	float ActiveTilesUpdateInterval; // 0x74 (4)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x78 (16)
	struct FNavAgentSelector SupportedAgentsMask; // 0x88 (4)
	struct TArray<struct ANavigationData> NavDataSet; // 0x90 (16)
	struct TArray<struct ANavigationData> NavDataRegistrationQueue; // 0xA0 (16)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xC0 (16)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xD0 (16)
	enum class FNavigationSystemRunMode OperationMode; // 0x1BC (1)
	float DirtyAreasUpdateFreq; // 0x514 (4)

	void UnregisterNavigationInvoker(struct UActor Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F5380>
	void SimpleMoveToLocation(struct AController Controller, struct FVector& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F52C0>
	void SimpleMoveToActor(struct AController Controller, struct UActor Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x4577390>
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F5240>
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F51C0>
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F51A0>
	void RegisterNavigationInvoker(struct UActor Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F50A0>
	struct FVector ProjectPointToNavigation(struct Object WorldContextObject, struct FVector& Point, struct ANavigationData NavData, struct UClass* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4ED0>
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4E50>
	char NavigationRaycast(struct Object WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UClass* FilterClass, struct AController Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4C40>
	char K2_ReplaceAreaInOctreeData(struct Object Object, struct UClass* OldArea, struct UClass* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4B40>
	char K2_ProjectPointToNavigation(struct Object WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData NavData, struct UClass* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4960>
	char K2_GetRandomReachablePointInRadius(struct Object WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4760>
	char K2_GetRandomPointInNavigableRadius(struct Object WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4560>
	char K2_GetRandomLocationInNavigableRadius(struct Object WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4560>
	char IsNavigationBeingBuiltOrLocked(struct Object WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4480>
	char IsNavigationBeingBuilt(struct Object WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4400>
	struct FVector GetRandomReachablePointInRadius(struct Object WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4230>
	struct FVector GetRandomPointInNavigableRadius(struct Object WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F4060>
	char GetPathLength(struct Object WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3E40>
	char GetPathCost(struct Object WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData NavData, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3BF0>
	struct UNavigationSystemV1 GetNavigationSystem(struct Object WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3B40>
	struct UNavigationPath FindPathToLocationSynchronously(struct Object WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct UActor PathfindingContext, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3910>
	struct UNavigationPath FindPathToActorSynchronously(struct Object WorldContextObject, struct FVector& PathStart, struct UActor GoalActor, float TetherDistance, struct UActor PathfindingContext, struct UClass* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F3720>
};

// Class NavigationSystem.NavigationSystemModuleConfig
class UNavigationSystemModuleConfig : public UNavigationSystemConfig {

public:

	char bStrictlyStatic : 0; // 0x50 (1)
	char bCreateOnClient : 0; // 0x50 (1)
	char bAutoSpawnMissingNavData : 0; // 0x50 (1)
	char bSpawnNavDataInNavBoundsLevel : 0; // 0x50 (1)
};

// Class NavigationSystem.NavigationTestingActor
class ANavigationTestingActor : public UActor {

public:

	struct UCapsuleComponent CapsuleComponent; // 0x328 (8)
	struct UNavigationInvokerComponent InvokerComponent; // 0x330 (8)
	char bActAsNavigationInvoker : 0; // 0x338 (1)
	struct FNavAgentProperties NavAgentProps; // 0x340 (48)
	struct FVector QueryingExtent; // 0x370 (12)
	struct ANavigationData MyNavData; // 0x380 (8)
	struct FVector ProjectedLocation; // 0x388 (12)
	char bProjectedLocationValid : 0; // 0x394 (1)
	char bSearchStart : 0; // 0x394 (1)
	float CostLimitFactor; // 0x398 (4)
	float MinimumCostLimit; // 0x39C (4)
	char bBacktracking : 0; // 0x3A0 (1)
	char bUseHierarchicalPathfinding : 0; // 0x3A0 (1)
	char bGatherDetailedInfo : 0; // 0x3A0 (1)
	char bDrawDistanceToWall : 0; // 0x3A0 (1)
	char bShowNodePool : 0; // 0x3A0 (1)
	char bShowBestPath : 0; // 0x3A0 (1)
	char bShowDiffWithPreviousStep : 0; // 0x3A0 (1)
	char bShouldBeVisibleInGame : 0; // 0x3A0 (1)
	char CostDisplayMode; // 0x3A4 (1)
	struct FVector2D TextCanvasOffset; // 0x3A8 (8)
	char bPathExist : 0; // 0x3B0 (1)
	char bPathIsPartial : 0; // 0x3B0 (1)
	char bPathSearchOutOfNodes : 0; // 0x3B0 (1)
	float PathfindingTime; // 0x3B4 (4)
	float PathCost; // 0x3B8 (4)
	int32_t PathfindingSteps; // 0x3BC (4)
	struct ANavigationTestingActor OtherActor; // 0x3C0 (8)
	struct UClass* FilterClass; // 0x3C8 (8)
	int32_t ShowStepIndex; // 0x3D0 (4)
	float OffsetFromCornersDistance; // 0x3D4 (4)
};

// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent {

public:

	struct TArray<struct FNavigationLink> LINKS; // 0x4B8 (16)
};

// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent {

public:

	char bAttachToOwnersRoot : 0; // 0xD4 (1)
	struct Object CachedNavParent; // 0xD8 (8)

	void SetNavigationRelevancy(char bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F7A40>
};

// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent {

public:

	uint32_t NavLinkUserId; // 0xE8 (4)
	struct UClass* EnabledAreaClass; // 0xF0 (8)
	struct UClass* DisabledAreaClass; // 0xF8 (8)
	struct FNavAgentSelector SupportedAgents; // 0x100 (4)
	struct FVector LinkRelativeStart; // 0x104 (12)
	struct FVector LinkRelativeEnd; // 0x110 (12)
	char LinkDirection; // 0x11C (1)
	char bLinkEnabled : 0; // 0x120 (1)
	char bNotifyWhenEnabled : 0; // 0x120 (1)
	char bNotifyWhenDisabled : 0; // 0x120 (1)
	char bCreateBoxObstacle : 0; // 0x120 (1)
	struct FVector ObstacleOffset; // 0x124 (12)
	struct FVector ObstacleExtent; // 0x130 (12)
	struct UClass* ObstacleAreaClass; // 0x140 (8)
	float BroadcastRadius; // 0x148 (4)
	float BroadcastInterval; // 0x14C (4)
	char BroadcastChannel; // 0x150 (1)
};

// Class NavigationSystem.NavMeshBoundsVolume
class ANavMeshBoundsVolume : public AVolume {

public:

	struct FNavAgentSelector SupportedAgents; // 0x350 (4)
};

// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent {

public:

	struct UClass* AreaClass; // 0xE0 (8)
	struct FVector FailsafeExtent; // 0xE8 (12)
	char bIncludeAgentHeight : 0; // 0xF4 (1)

	void SetAreaClass(struct UClass* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F79C0>
};

// Class NavigationSystem.NavModifierVolume
class ANavModifierVolume : public AVolume {

public:

	struct UClass* AreaClass; // 0x358 (8)

	void SetAreaClass(struct UClass* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F7940>
};

// Class NavigationSystem.NavSystemConfigOverride
class ANavSystemConfigOverride : public UActor {

public:

	struct UNavigationSystemConfig NavigationSystemConfig; // 0x318 (8)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x320 (1)
	char bLoadOnClient : 0; // 0x321 (1)
};

// Class NavigationSystem.RecastNavMesh
class ARecastNavMesh : public ANavigationData {

public:

	char bDrawTriangleEdges : 0; // 0x4F8 (1)
	char bDrawPolyEdges : 0; // 0x4F8 (1)
	char bDrawFilledPolys : 0; // 0x4F8 (1)
	char bDrawNavMeshEdges : 0; // 0x4F8 (1)
	char bDrawTileBounds : 0; // 0x4F8 (1)
	char bDrawPathCollidingGeometry : 0; // 0x4F8 (1)
	char bDrawTileLabels : 0; // 0x4F8 (1)
	char bDrawPolygonLabels : 0; // 0x4F8 (1)
	char bDrawDefaultPolygonCost : 0; // 0x4F9 (1)
	char bDrawLabelsOnPathNodes : 0; // 0x4F9 (1)
	char bDrawNavLinks : 0; // 0x4F9 (1)
	char bDrawFailedNavLinks : 0; // 0x4F9 (1)
	char bDrawClusters : 0; // 0x4F9 (1)
	char bDrawOctree : 0; // 0x4F9 (1)
	char bDrawOctreeDetails : 0; // 0x4F9 (1)
	char bDrawMarkedForbiddenPolys : 0; // 0x4F9 (1)
	char bDistinctlyDrawTilesBeingBuilt : 0; // 0x4FA (1)
	char bDrawNavMesh : 0; // 0x4FA (1)
	float DrawOffset; // 0x4FC (4)
	char bFixedTilePoolSize : 0; // 0x500 (1)
	int32_t TilePoolSize; // 0x504 (4)
	float TileSizeUU; // 0x508 (4)
	float CellSize; // 0x50C (4)
	float CellHeight; // 0x510 (4)
	float AgentRadius; // 0x514 (4)
	float AgentHeight; // 0x518 (4)
	float AgentMaxHeight; // 0x51C (4)
	float AgentMaxSlope; // 0x520 (4)
	float AgentMaxStepHeight; // 0x524 (4)
	float MinRegionArea; // 0x528 (4)
	float MergeRegionSize; // 0x52C (4)
	float MaxSimplificationError; // 0x530 (4)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x534 (4)
	int32_t TileNumberHardLimit; // 0x538 (4)
	int32_t PolyRefTileBits; // 0x53C (4)
	int32_t PolyRefNavPolyBits; // 0x540 (4)
	int32_t PolyRefSaltBits; // 0x544 (4)
	struct FVector NavMeshOriginOffset; // 0x548 (12)
	float DefaultDrawDistance; // 0x554 (4)
	float DefaultMaxSearchNodes; // 0x558 (4)
	float DefaultMaxHierarchicalSearchNodes; // 0x55C (4)
	char RegionPartitioning; // 0x560 (1)
	char LayerPartitioning; // 0x561 (1)
	int32_t RegionChunkSplits; // 0x564 (4)
	int32_t LayerChunkSplits; // 0x568 (4)
	char bSortNavigationAreasByCost : 0; // 0x56C (1)
	char bPerformVoxelFiltering : 0; // 0x56C (1)
	char bMarkLowHeightAreas : 0; // 0x56C (1)
	char bFilterLowSpanSequences : 0; // 0x56C (1)
	char bFilterLowSpanFromTileCache : 0; // 0x56C (1)
	char bDoFullyAsyncNavDataGathering : 0; // 0x56C (1)
	char bUseBetterOffsetsFromCorners : 0; // 0x56C (1)
	char bStoreEmptyTileLayers : 0; // 0x56C (1)
	char bUseVirtualFilters : 0; // 0x56D (1)
	char bAllowNavLinkAsPathEnd : 0; // 0x56D (1)
	char bUseVoxelCache : 0; // 0x56D (1)
	float TileSetUpdateInterval; // 0x570 (4)
	float HeuristicScale; // 0x574 (4)
	float VerticalDeviationFromGroundCompensation; // 0x578 (4)

	char K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UClass* OldArea, struct UClass* NewArea, char ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x46F77B0>
};

// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox {
	struct FVector Offset; // 0x0 (12)
	struct FVector Extent; // 0xC (12)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder {
	struct FVector Offset; // 0x0 (12)
	float Radius; // 0xC (4)
	float Height; // 0x10 (4)
};

// ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData {
	struct FString AreaClassName; // 0x0 (16)
	int32_t AreaID; // 0x10 (4)
	struct UClass* AreaClass; // 0x18 (8)
};

// ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode {
	struct Object Owner; // 0x0 (8)
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
struct FNavigationFilterFlags {
	char bNavFlag0 : 0; // 0x0 (1)
	char bNavFlag1 : 0; // 0x0 (1)
	char bNavFlag2 : 0; // 0x0 (1)
	char bNavFlag3 : 0; // 0x0 (1)
	char bNavFlag4 : 0; // 0x0 (1)
	char bNavFlag5 : 0; // 0x0 (1)
	char bNavFlag6 : 0; // 0x0 (1)
	char bNavFlag7 : 0; // 0x0 (1)
	char bNavFlag8 : 0; // 0x1 (1)
	char bNavFlag9 : 0; // 0x1 (1)
	char bNavFlag10 : 0; // 0x1 (1)
	char bNavFlag11 : 0; // 0x1 (1)
	char bNavFlag12 : 0; // 0x1 (1)
	char bNavFlag13 : 0; // 0x1 (1)
	char bNavFlag14 : 0; // 0x1 (1)
	char bNavFlag15 : 0; // 0x1 (1)
};

// ScriptStruct NavigationSystem.NavigationFilterArea
struct FNavigationFilterArea {
	struct UClass* AreaClass; // 0x0 (8)
	float TravelCostOverride; // 0x8 (4)
	float EnteringCostOverride; // 0xC (4)
	char bIsExcluded : 0; // 0x10 (1)
	char bOverrideTravelCost : 0; // 0x10 (1)
	char bOverrideEnteringCost : 0; // 0x10 (1)
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x58 (4)
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
struct FRecastNavMeshGenerationProperties {
	int32_t TilePoolSize; // 0x0 (4)
	float TileSizeUU; // 0x4 (4)
	float CellSize; // 0x8 (4)
	float CellHeight; // 0xC (4)
	float AgentRadius; // 0x10 (4)
	float AgentHeight; // 0x14 (4)
	float AgentMaxSlope; // 0x18 (4)
	float AgentMaxStepHeight; // 0x1C (4)
	float MinRegionArea; // 0x20 (4)
	float MergeRegionSize; // 0x24 (4)
	float MaxSimplificationError; // 0x28 (4)
	int32_t TileNumberHardLimit; // 0x2C (4)
	char RegionPartitioning; // 0x30 (1)
	char LayerPartitioning; // 0x31 (1)
	int32_t RegionChunkSplits; // 0x34 (4)
	int32_t LayerChunkSplits; // 0x38 (4)
	char bSortNavigationAreasByCost : 0; // 0x3C (1)
	char bPerformVoxelFiltering : 0; // 0x3C (1)
	char bMarkLowHeightAreas : 0; // 0x3C (1)
	char bFilterLowSpanSequences : 0; // 0x3C (1)
	char bFilterLowSpanFromTileCache : 0; // 0x3C (1)
	char bFixedTilePoolSize : 0; // 0x3C (1)
};

// Function NavigationSystem.NavigationPath.IsValid
inline char UNavigationPath::IsValid() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	struct IsValid_Params {
		
		char ReturnValue;

	}; IsValid_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationPath.IsStringPulled
inline char UNavigationPath::IsStringPulled() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	struct IsStringPulled_Params {
		
		char ReturnValue;

	}; IsStringPulled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationPath.IsPartial
inline char UNavigationPath::IsPartial() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	struct IsPartial_Params {
		
		char ReturnValue;

	}; IsPartial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationPath.GetPathLength
inline float UNavigationPath::GetPathLength() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	struct GetPathLength_Params {
		
		float ReturnValue;

	}; GetPathLength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationPath.GetPathCost
inline float UNavigationPath::GetPathCost() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	struct GetPathCost_Params {
		
		float ReturnValue;

	}; GetPathCost_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationPath.GetDebugString
inline struct FString UNavigationPath::GetDebugString() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	struct GetDebugString_Params {
		
		struct FString ReturnValue;

	}; GetDebugString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
inline void UNavigationPath::EnableRecalculationOnInvalidation(char DoRecalculation) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	struct EnableRecalculationOnInvalidation_Params {
		char DoRecalculation;
	}; EnableRecalculationOnInvalidation_Params Params;

	Params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationPath.EnableDebugDrawing
inline void UNavigationPath::EnableDebugDrawing(char bShouldDrawDebugData, struct FLinearColor PathColor) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	struct EnableDebugDrawing_Params {
		char bShouldDrawDebugData;
		struct FLinearColor PathColor;
	}; EnableDebugDrawing_Params Params;

	Params.bShouldDrawDebugData = bShouldDrawDebugData;
	Params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
inline void UNavigationSystemV1::UnregisterNavigationInvoker(struct UActor Invoker) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	struct UnregisterNavigationInvoker_Params {
		struct UActor Invoker;
	}; UnregisterNavigationInvoker_Params Params;

	Params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
inline void UNavigationSystemV1::SimpleMoveToLocation(struct AController Controller, struct FVector& Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	struct SimpleMoveToLocation_Params {
		struct AController Controller;
		struct FVector& Goal;
	}; SimpleMoveToLocation_Params Params;

	Params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Goal = Params.Goal;

}

// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
inline void UNavigationSystemV1::SimpleMoveToActor(struct AController Controller, struct UActor Goal) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	struct SimpleMoveToActor_Params {
		struct AController Controller;
		struct UActor Goal;
	}; SimpleMoveToActor_Params Params;

	Params.Controller = Controller;
	Params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
inline void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	struct SetMaxSimultaneousTileGenerationJobsCount_Params {
		int32_t MaxNumberOfJobs;
	}; SetMaxSimultaneousTileGenerationJobsCount_Params Params;

	Params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
inline void UNavigationSystemV1::SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	struct SetGeometryGatheringMode_Params {
		enum class ENavDataGatheringModeConfig NewMode;
	}; SetGeometryGatheringMode_Params Params;

	Params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
inline void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount() {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	struct ResetMaxSimultaneousTileGenerationJobsCount_Params {
		
	}; ResetMaxSimultaneousTileGenerationJobsCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
inline void UNavigationSystemV1::RegisterNavigationInvoker(struct UActor Invoker, float TileGenerationRadius, float TileRemovalRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	struct RegisterNavigationInvoker_Params {
		struct UActor Invoker;
		float TileGenerationRadius;
		float TileRemovalRadius;
	}; RegisterNavigationInvoker_Params Params;

	Params.Invoker = Invoker;
	Params.TileGenerationRadius = TileGenerationRadius;
	Params.TileRemovalRadius = TileRemovalRadius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
inline struct FVector UNavigationSystemV1::ProjectPointToNavigation(struct Object WorldContextObject, struct FVector& Point, struct ANavigationData NavData, struct UClass* FilterClass, struct FVector QueryExtent) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	struct ProjectPointToNavigation_Params {
		struct Object WorldContextObject;
		struct FVector& Point;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		struct FVector QueryExtent;
		struct FVector ReturnValue;

	}; ProjectPointToNavigation_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;
	Params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Point = Params.Point;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
inline void UNavigationSystemV1::OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume NavVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	struct OnNavigationBoundsUpdated_Params {
		struct ANavMeshBoundsVolume NavVolume;
	}; OnNavigationBoundsUpdated_Params Params;

	Params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
inline char UNavigationSystemV1::NavigationRaycast(struct Object WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UClass* FilterClass, struct AController Querier) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	struct NavigationRaycast_Params {
		struct Object WorldContextObject;
		struct FVector& RayStart;
		struct FVector& RayEnd;
		struct FVector& HitLocation;
		struct UClass* FilterClass;
		struct AController Querier;
		char ReturnValue;

	}; NavigationRaycast_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.FilterClass = FilterClass;
	Params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RayStart = Params.RayStart;
	RayEnd = Params.RayEnd;
	HitLocation = Params.HitLocation;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
inline char UNavigationSystemV1::K2_ReplaceAreaInOctreeData(struct Object Object, struct UClass* OldArea, struct UClass* NewArea) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	struct K2_ReplaceAreaInOctreeData_Params {
		struct Object Object;
		struct UClass* OldArea;
		struct UClass* NewArea;
		char ReturnValue;

	}; K2_ReplaceAreaInOctreeData_Params Params;

	Params.Object = Object;
	Params.OldArea = OldArea;
	Params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
inline char UNavigationSystemV1::K2_ProjectPointToNavigation(struct Object WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData NavData, struct UClass* FilterClass, struct FVector QueryExtent) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	struct K2_ProjectPointToNavigation_Params {
		struct Object WorldContextObject;
		struct FVector& Point;
		struct FVector& ProjectedLocation;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		struct FVector QueryExtent;
		char ReturnValue;

	}; K2_ProjectPointToNavigation_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;
	Params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Point = Params.Point;
	ProjectedLocation = Params.ProjectedLocation;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
inline char UNavigationSystemV1::K2_GetRandomReachablePointInRadius(struct Object WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	struct K2_GetRandomReachablePointInRadius_Params {
		struct Object WorldContextObject;
		struct FVector& Origin;
		struct FVector& RandomLocation;
		float Radius;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		char ReturnValue;

	}; K2_GetRandomReachablePointInRadius_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Radius = Radius;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Origin = Params.Origin;
	RandomLocation = Params.RandomLocation;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
inline char UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(struct Object WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	struct K2_GetRandomPointInNavigableRadius_Params {
		struct Object WorldContextObject;
		struct FVector& Origin;
		struct FVector& RandomLocation;
		float Radius;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		char ReturnValue;

	}; K2_GetRandomPointInNavigableRadius_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Radius = Radius;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Origin = Params.Origin;
	RandomLocation = Params.RandomLocation;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
inline char UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(struct Object WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	struct K2_GetRandomLocationInNavigableRadius_Params {
		struct Object WorldContextObject;
		struct FVector& Origin;
		struct FVector& RandomLocation;
		float Radius;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		char ReturnValue;

	}; K2_GetRandomLocationInNavigableRadius_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Radius = Radius;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Origin = Params.Origin;
	RandomLocation = Params.RandomLocation;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
inline char UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(struct Object WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	struct IsNavigationBeingBuiltOrLocked_Params {
		struct Object WorldContextObject;
		char ReturnValue;

	}; IsNavigationBeingBuiltOrLocked_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
inline char UNavigationSystemV1::IsNavigationBeingBuilt(struct Object WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	struct IsNavigationBeingBuilt_Params {
		struct Object WorldContextObject;
		char ReturnValue;

	}; IsNavigationBeingBuilt_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
inline struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(struct Object WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	struct GetRandomReachablePointInRadius_Params {
		struct Object WorldContextObject;
		struct FVector& Origin;
		float Radius;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		struct FVector ReturnValue;

	}; GetRandomReachablePointInRadius_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Radius = Radius;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Origin = Params.Origin;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
inline struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(struct Object WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	struct GetRandomPointInNavigableRadius_Params {
		struct Object WorldContextObject;
		struct FVector& Origin;
		float Radius;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		struct FVector ReturnValue;

	}; GetRandomPointInNavigableRadius_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Radius = Radius;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Origin = Params.Origin;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.GetPathLength
inline char UNavigationSystemV1::GetPathLength(struct Object WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	struct GetPathLength_Params {
		struct Object WorldContextObject;
		struct FVector& PathStart;
		struct FVector& PathEnd;
		float& PathLength;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		char ReturnValue;

	}; GetPathLength_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PathStart = Params.PathStart;
	PathEnd = Params.PathEnd;
	PathLength = Params.PathLength;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.GetPathCost
inline char UNavigationSystemV1::GetPathCost(struct Object WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData NavData, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	struct GetPathCost_Params {
		struct Object WorldContextObject;
		struct FVector& PathStart;
		struct FVector& PathEnd;
		float& PathCost;
		struct ANavigationData NavData;
		struct UClass* FilterClass;
		char ReturnValue;

	}; GetPathCost_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.NavData = NavData;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PathStart = Params.PathStart;
	PathEnd = Params.PathEnd;
	PathCost = Params.PathCost;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
inline struct UNavigationSystemV1 UNavigationSystemV1::GetNavigationSystem(struct Object WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	struct GetNavigationSystem_Params {
		struct Object WorldContextObject;
		struct UNavigationSystemV1 ReturnValue;

	}; GetNavigationSystem_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
inline struct UNavigationPath UNavigationSystemV1::FindPathToLocationSynchronously(struct Object WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct UActor PathfindingContext, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	struct FindPathToLocationSynchronously_Params {
		struct Object WorldContextObject;
		struct FVector& PathStart;
		struct FVector& PathEnd;
		struct UActor PathfindingContext;
		struct UClass* FilterClass;
		struct UNavigationPath ReturnValue;

	}; FindPathToLocationSynchronously_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PathfindingContext = PathfindingContext;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PathStart = Params.PathStart;
	PathEnd = Params.PathEnd;


	return params.ReturnValue;
}

// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
inline struct UNavigationPath UNavigationSystemV1::FindPathToActorSynchronously(struct Object WorldContextObject, struct FVector& PathStart, struct UActor GoalActor, float TetherDistance, struct UActor PathfindingContext, struct UClass* FilterClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	struct FindPathToActorSynchronously_Params {
		struct Object WorldContextObject;
		struct FVector& PathStart;
		struct UActor GoalActor;
		float TetherDistance;
		struct UActor PathfindingContext;
		struct UClass* FilterClass;
		struct UNavigationPath ReturnValue;

	}; FindPathToActorSynchronously_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.GoalActor = GoalActor;
	Params.TetherDistance = TetherDistance;
	Params.PathfindingContext = PathfindingContext;
	Params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PathStart = Params.PathStart;


	return params.ReturnValue;
}

// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
inline void UNavRelevantComponent::SetNavigationRelevancy(char bRelevant) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	struct SetNavigationRelevancy_Params {
		char bRelevant;
	}; SetNavigationRelevancy_Params Params;

	Params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavModifierComponent.SetAreaClass
inline void UNavModifierComponent::SetAreaClass(struct UClass* NewAreaClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	struct SetAreaClass_Params {
		struct UClass* NewAreaClass;
	}; SetAreaClass_Params Params;

	Params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.NavModifierVolume.SetAreaClass
inline void ANavModifierVolume::SetAreaClass(struct UClass* NewAreaClass) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	struct SetAreaClass_Params {
		struct UClass* NewAreaClass;
	}; SetAreaClass_Params Params;

	Params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
inline char ARecastNavMesh::K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UClass* OldArea, struct UClass* NewArea, char ReplaceLinks) {
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	struct K2_ReplaceAreaInTileBounds_Params {
		struct FBox Bounds;
		struct UClass* OldArea;
		struct UClass* NewArea;
		char ReplaceLinks;
		char ReturnValue;

	}; K2_ReplaceAreaInTileBounds_Params Params;

	Params.Bounds = Bounds;
	Params.OldArea = OldArea;
	Params.NewArea = NewArea;
	Params.ReplaceLinks = ReplaceLinks;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

