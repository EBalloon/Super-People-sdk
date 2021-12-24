// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t {
	ERuntimeGenerationType = 0,
	ERuntimeGenerationType = 1,
	ERuntimeGenerationType = 2,
	ERuntimeGenerationType = 3,
	ERuntimeGenerationType = 4,
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t {
	ENavCostDisplay = 0,
	ENavCostDisplay = 1,
	ENavCostDisplay = 2,
	ENavCostDisplay = 3,
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t {
	ENavSystemOverridePolicy = 0,
	ENavSystemOverridePolicy = 1,
	ENavSystemOverridePolicy = 2,
	ENavSystemOverridePolicy = 3,
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t {
	ERecastPartitioning = 0,
	ERecastPartitioning = 1,
	ERecastPartitioning = 2,
	ERecastPartitioning = 3,
};

// Class NavigationSystem.NavigationData
class ANavigationData : public UActor {

public:

	struct Unknown RenderingComp; // 0x318 (8)
	struct Unknown NavDataConfig; // 0x320 (120)
	char bEnableDrawing : 0; // 0x398 (1)
	char bForceRebuildOnLoad : 0; // 0x398 (1)
	char bAutoDestroyWhenNoNavigation : 0; // 0x398 (1)
	char bCanBeMainNavData : 0; // 0x398 (1)
	char bCanSpawnOnRebuild : 0; // 0x398 (1)
	char bRebuildAtRuntime : 0; // 0x398 (1)
	enum class Unknow RuntimeGeneration; // 0x39C (1)
	float ObservedPathsTickInterval; // 0x3A0 (4)
	uint32_t DataVersion; // 0x3A4 (4)
	struct TArray<Unknown> SupportedAreas; // 0x488 (16)
};

// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase {

public:

	float DefaultCost; // 0x30 (4)
	float FixedAreaEnteringCost; // 0x34 (4)
	struct Unknown DrawColor; // 0x38 (4)
	struct Unknown SupportedAgents; // 0x3C (4)
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

	struct Unknown* Agent0Area; // 0x48 (8)
	struct Unknown* Agent1Area; // 0x50 (8)
	struct Unknown* Agent2Area; // 0x58 (8)
	struct Unknown* Agent3Area; // 0x60 (8)
	struct Unknown* Agent4Area; // 0x68 (8)
	struct Unknown* Agent5Area; // 0x70 (8)
	struct Unknown* Agent6Area; // 0x78 (8)
	struct Unknown* Agent7Area; // 0x80 (8)
	struct Unknown* Agent8Area; // 0x88 (8)
	struct Unknown* Agent9Area; // 0x90 (8)
	struct Unknown* Agent10Area; // 0x98 (8)
	struct Unknown* Agent11Area; // 0xA0 (8)
	struct Unknown* Agent12Area; // 0xA8 (8)
	struct Unknown* Agent13Area; // 0xB0 (8)
	struct Unknown* Agent14Area; // 0xB8 (8)
	struct Unknown* Agent15Area; // 0xC0 (8)
};

// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase {

public:

	struct TArray<Unknown> CylinderCollision; // 0x80 (16)
	struct TArray<Unknown> BoxCollision; // 0x90 (16)
	struct Unknown* AreaClass; // 0xA0 (8)
	char bGatherConvexGeometry : 0; // 0xA8 (1)
	char bCreateOnClient : 0; // 0xA8 (1)
};

// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent {

public:

	struct Unknown Node; // 0x238 (24)
	struct Unknown NextNodeComponent; // 0x250 (8)
	struct Unknown PrevNodeComponent; // 0x258 (8)
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
	struct TArray<Unknown> PathPoints; // 0x38 (16)
	char RecalculateOnInvalidation; // 0x48 (1)

	char IsValid(); // Function NavigationSystem.NavigationPath.IsValid(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CFA0>
	char IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x1EC8E70>
	char IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CF70>
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C880>
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C630>
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C530>
	void EnableRecalculationOnInvalidation(char DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C110>
	void EnableDebugDrawing(char bShouldDrawDebugData, struct Unknown PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C030>
};

// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public Object {

public:

	struct TArray<Unknown> Areas; // 0x28 (16)
	struct Unknown IncludeFlags; // 0x38 (4)
	struct Unknown ExcludeFlags; // 0x3C (4)
};

// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase {

public:

	struct Unknown MainNavData; // 0x28 (8)
	struct Unknown AbstractNavData; // 0x30 (8)
	struct FName DefaultAgentName; // 0x38 (8)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x40 (40)
	char bAutoCreateNavigationData : 0; // 0x68 (1)
	char bSpawnNavDataInNavBoundsLevel : 0; // 0x68 (1)
	char bAllowClientSideNavoundsLe : 0; // 0x68 (1)
	char bShouldDiscardSubLevelNavData : 0; // 0x68 (1)
	char bTickWhilePaused : 0; // 0x68 (1)
	char bSupportRebuilding : 0; // 0x68 (1)
	char bInitialBuildingLocked : 0; // 0x68 (1)
	char  : 0; // 0x69 (1)
	enum class Unknow DataGatheringMode; // 0x6C (1)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 0; // 0x70 (1)
	float ActiveTilesUpdateInterval; // 0x74 (4)
	struct TArray<Unknown> SupportedAgents; // 0x78 (16)
	struct Unknown SupportedAgentsMask; // 0x88 (4)
	struct TArray<Unknown> NavDataSet; // 0x90 (16)
	struct TArray<Unknown> NavDataRegistrationQueue; // 0xA0 (16)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xC0 (16)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xD0 (16)
	enum class Unknow OperationMode; // 0x1BC (1)
	float DirtyAreasUpdateFreq; // 0x514 (4)

	void UnregisterNavigationInvoker(struct Unknown Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1DDF0>
	void SimpleMoveToLocation(struct Unknown Controller, struct Unknown& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1DD30>
	void SimpleMoveToActor(struct Unknown Controller, struct Unknown Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor(Final|Native|Static|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3DA0240>
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1DCB0>
	void SetGeometryGatheringMode(enum class Unknow NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1DC30>
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1DC10>
	void RegisterNavigationInvoker(struct Unknown Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1DB10>
	struct Unknown ProjectPointToNavigation(struct Unknown WorldContextObject, struct Unknown& Point, struct Unknown NavData, struct Unknown* FilterClass, struct Unknown QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1D940>
	void OnNavigationBoundsUpdated(struct Unknown NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1D8C0>
	char NavigationRaycast(struct Unknown WorldContextObject, struct Unknown& RayStart, struct Unknown& RayEnd, struct Unknown& HitLocation, struct Unknown* FilterClass, struct Unknown Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1D6B0>
	char K2_ReplaceAreaInOctreeData(struct Unknown Object, struct Unknown* OldArea, struct Unknown* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1D5B0>
	char K2_ProjectPointToNavigation(struct Unknown WorldContextObject, struct Unknown& Point, struct Unknown& ProjectedLocation, struct Unknown NavData, struct Unknown* FilterClass, struct Unknown QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1D3D0>
	char K2_GetRandomReachablePointInRadius(struct Unknown WorldContextObject, struct Unknown& Origin, struct Unknown& RandomLocation, float Radius, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1D1D0>
	char K2_GetRandomPointInNavigableRadius(struct Unknown WorldContextObject, struct Unknown& Origin, struct Unknown& RandomLocation, float Radius, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CFD0>
	char K2_GetRandomLocationInNavigableRadius(struct Unknown WorldContextObject, struct Unknown& Origin, struct Unknown& RandomLocation, float Radius, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CFD0>
	char IsNavigationBeingBuiltOrLocked(struct Unknown WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CEF0>
	char IsNavigationBeingBuilt(struct Unknown WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CE70>
	struct Unknown GetRandomReachablePointInRadius(struct Unknown WorldContextObject, struct Unknown& Origin, float Radius, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CCA0>
	struct Unknown GetRandomPointInNavystemMon(struct Unknown WorldContextObject, struct Unknown& Origin, float Radius, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavystemMon(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1CAD0>
	char GetPathLength(struct Unknown WorldContextObject, struct Unknown& PathStart, struct Unknown& PathEnd, float& PathLength, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C8B0>
	char GetPathCost(struct Unknown WorldContextObject, struct Unknown& PathStart, struct Unknown& PathEnd, float& PathCost, struct Unknown NavData, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C660>
	struct Unknown GetNavigationSystem(struct Unknown WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C5B0>
	struct Unknown FindPathToLocationSynchronously(struct Unknown WorldContextObject, struct Unknown& PathStart, struct Unknown& PathEnd, struct Unknown PathfindingContext, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C380>
	struct Unknown FindPathToActorSynchronously(struct Unknown WorldContextObject, struct Unknown& PathStart, struct Unknown GoalActor, float TetherDistance, struct Unknown PathfindingContext, struct Unknown* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F1C190>
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

	struct Unknown CapsuleComponent; // 0x320 (8)
	struct Unknown InvokerComponent; // 0x328 (8)
	char bActAsNavigationInvtor : 0; // 0x330 (1)
	struct Unknown NavAgentProps; // 0x338 (48)
	struct Unknown QueryingExtent; // 0x368 (12)
	struct Unknown MyNavData; // 0x378 (8)
	struct Unknown ProjectedLocation; // 0x380 (12)
	char bProjectedLocationValid : 0; // 0x38C (1)
	char bSearchStart : 0; // 0x38C (1)
	float CostLimitFactor; // 0x390 (4)
	float MinimumCostLimit; // 0x394 (4)
	char bBacktracking : 0; // 0x398 (1)
	char bUseHierarchicalPathfinding : 0; // 0x398 (1)
	char bGatherDetailedInfo : 0; // 0x398 (1)
	char bDrawDistanceToWall : 0; // 0x398 (1)
	char bShowNodePool : 0; // 0x398 (1)
	char bShowBestPath : 0; // 0x398 (1)
	char bShowDiffWithPreviousStep : 0; // 0x398 (1)
	char bShouldBeVisibleInGame : 0; // 0x398 (1)
	char CostDisplayMode; // 0x39C (1)
	struct Unknown TextCanvasOffset; // 0x3A0 (8)
	char bPathExist : 0; // 0x3A8 (1)
	char bPathIsPartial : 0; // 0x3A8 (1)
	char bPathSearchOutOfNodes : 0; // 0x3A8 (1)
	float PathfindingTime; // 0x3AC (4)
	float PathCost; // 0x3B0 (4)
	int32_t PathfindingSteps; // 0x3B4 (4)
	struct Unknown OtherActor; // 0x3B8 (8)
	struct Unknown* FilterClass; // 0x3C0 (8)
	int32_t ShowStepIndex; // 0x3C8 (4)
	float OffsetFromCornersDistance; // 0x3CC (4)
};

// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent {

public:

	struct TArray<Unknown> LINKS; // 0x4C0 (16)
};

// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent {

public:

	char bAttachToOwnersRoot : 0; // 0xD4 (1)
	struct Unknown CachedNavParent; // 0xD8 (8)

	void SetNavigationRelevancy(char bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F20490>
};

// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent {

public:

	uint32_t NavLinkUserId; // 0xE8 (4)
	struct Unknown* EnabledAreaClass; // 0xF0 (8)
	struct Unknown* DisabledAreaClass; // 0xF8 (8)
	struct Unknown SupportedAgents; // 0x100 (4)
	struct Unknown LinkRelativeStart; // 0x104 (12)
	struct Unknown LinkRelativeEnd; // 0x110 (12)
	char LinkDirection; // 0x11C (1)
	char bLinkEnabled : 0; // 0x120 (1)
	char bNotifyWhenEnabled : 0; // 0x120 (1)
	char bNotifyWhenDisabled : 0; // 0x120 (1)
	char bCreateBoxObstacle : 0; // 0x120 (1)
	struct Unknown ObstacleOffset; // 0x124 (12)
	struct Unknown ObstacleExtent; // 0x130 (12)
	struct Unknown* ObstacleAreaClass; // 0x140 (8)
	float BroadcastRadius; // 0x148 (4)
	float BroadcastInterval; // 0x14C (4)
	char BroadcastChannel; // 0x150 (1)
};

// Class NavigationSystem.NavMeshBoundsVolume
class ANavMeshBoundsVolume : public AVolume {

public:

	struct Unknown SupportedAgents; // 0x348 (4)
};

// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent {

public:

	struct Unknown* AreaClass; // 0xE0 (8)
	struct Unknown FailsafeExtent; // 0xE8 (12)
	char bIncludeAgentHeight : 0; // 0xF4 (1)

	void SetAreaClass(struct Unknown* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F20410>
};

// Class NavigationSystem.NavModifierVolume
class ANavModifierVolume : public AVolume {

public:

	struct Unknown* AreaClass; // 0x350 (8)

	void SetAreaClass(struct Unknown* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F20390>
};

// Class NavigationSystem.NavSystemConfigOverride
class ANavSystemConfigOverride : public UActor {

public:

	struct Unknown NavigationSystemConfig; // 0x310 (8)
	enum class Unknow OverridePolicy; // 0x318 (1)
	char bLoadOnClient : 0; // 0x319 (1)
};

// Class NavigationSystem.RecastNavMesh
class ARecastNavMesh : public ANavigationData {

public:

	char bDrawTriangleEdges : 0; // 0x4F0 (1)
	char bDrawPolyEdges : 0; // 0x4F0 (1)
	char bDrawFilledPolys : 0; // 0x4F0 (1)
	char bDrawNavMeshEdges : 0; // 0x4F0 (1)
	char bDrawTileBounds : 0; // 0x4F0 (1)
	char bDrawPathCollidingGeometry : 0; // 0x4F0 (1)
	char bDrawTileLabels : 0; // 0x4F0 (1)
	char bDrawPolygonLabels : 0; // 0x4F0 (1)
	char bDrawDefaultPolygonCost : 0; // 0x4F1 (1)
	char bDrawLabelsOnPathNodes : 0; // 0x4F1 (1)
	char bDrawNavLinks : 0; // 0x4F1 (1)
	char bDrawFailedNavLinks : 0; // 0x4F1 (1)
	char bDrawClusters : 0; // 0x4F1 (1)
	char bDrawOctree : 0; // 0x4F1 (1)
	char bDrawOctreeDetails : 0; // 0x4F1 (1)
	char bDrawMarkedForbiddenPolys : 0; // 0x4F1 (1)
	char bDistinctlyDrawTilesBeingBuilt : 0; // 0x4F2 (1)
	char bDrawNavMesh : 0; // 0x4F2 (1)
	float DrawOffset; // 0x4F4 (4)
	char bFixedTilePoolSize : 0; // 0x4F8 (1)
	int32_t TilePoolSize; // 0x4FC (4)
	float TileSizeUU; // 0x500 (4)
	float CellSize; // 0x504 (4)
	float CellHeight; // 0x508 (4)
	float AgentRadius; // 0x50C (4)
	float AgentHeight; // 0x510 (4)
	float AgentMaxHeight; // 0x514 (4)
	float AgentMaxSlope; // 0x518 (4)
	float AgentMaxStepHeight; // 0x51C (4)
	float MinRegionArea; // 0x520 (4)
	float MergeRegionSize; // 0x524 (4)
	float MaxSimplificationError; // 0x528 (4)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x52C (4)
	int32_t TileNumberHardLimit; // 0x530 (4)
	int32_t PolyRefTileBits; // 0x534 (4)
	int32_t PolyRefNavPolyBits; // 0x538 (4)
	int32_t PolyRefSaltBits; // 0x53C (4)
	struct Unknown NavMeshOriginOffset; // 0x540 (12)
	float DefaultDrawDistance; // 0x54C (4)
	float DefaultMaxSearchNodes; // 0x550 (4)
	float DefaultMaxHierarchicalSearchNodes; // 0x554 (4)
	char RegionPartitioning; // 0x558 (1)
	char LayerPartitioning; // 0x559 (1)
	int32_t RegionChunkSplits; // 0x55C (4)
	int32_t LayerChunkSplits; // 0x560 (4)
	char bSortNavigationAreasByCost : 0; // 0x564 (1)
	char bPerformVoxelFiltering : 0; // 0x564 (1)
	char bMarkLowHeightAreas : 0; // 0x564 (1)
	char bFilterLowSpanSequences : 0; // 0x564 (1)
	char bFilterLowSpanFromTileCache : 0; // 0x564 (1)
	char bDoFullyAsyncNavDataGathering : 0; // 0x564 (1)
	char bUseBetterOffsetsFromCorners : 0; // 0x564 (1)
	char bStoreEmptyTileLayers : 0; // 0x564 (1)
	char bUseVirtualFilters : 0; // 0x565 (1)
	char bAllowNavLinkAsPathEnd : 0; // 0x565 (1)
	char bUseVoxelCache : 0; // 0x565 (1)
	float TileSetUpdateIntervti; // 0x568 (4)
	float HeuristicScale; // 0x56C (4)
	float VerticalDeviationFromGroundCompensation; // 0x570 (4)

	char K2_ReplaceAreaInTileBounds(struct Unknown Bounds, struct Unknown* OldArea, struct Unknown* NewArea, char ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds(Final|Native|Public|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x3F20200>
};

// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox {
	struct Unknown Offset; // 0x0 (12)
	struct Unknown Extent; // 0xC (12)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder {
	struct Unknown Offset; // 0x0 (12)
	float Radius; // 0xC (4)
	float Height; // 0x10 (4)
};

// ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData {
	struct FString AreaClassName; // 0x0 (16)
	int32_t AreaID; // 0x10 (4)
	struct Unknown* AreaClass; // 0x18 (8)
};

// ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode {
	struct Unknown Owner; // 0x0 (8)
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
	struct Unknown* AreaClass; // 0x0 (8)
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

