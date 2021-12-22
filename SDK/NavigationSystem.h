// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	ERuntimeGenerationType = 0,
	ERuntimeGenerationType = 1,
	ERuntimeGenerationType = 2,
	ERuntimeGenerationType = 3,
	ERuntimeGenerationType = 4
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8 {
	ENavCostDisplay = 0,
	ENavCostDisplay = 1,
	ENavCostDisplay = 2,
	ENavCostDisplay = 3
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8 {
	ENavSystemOverridePolicy = 0,
	ENavSystemOverridePolicy = 1,
	ENavSystemOverridePolicy = 2,
	ENavSystemOverridePolicy = 3
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	ERecastPartitioning = 0,
	ERecastPartitioning = 1,
	ERecastPartitioning = 2,
	ERecastPartitioning = 3
};

// Class NavigationSystem.NavigationData
struct ANavigationData : UActor {
	struct Unknown RenderingComp; //  0x318 Size(8)
	struct Unknown NavDataConfig; //  0x320 Size(78)
	char bEnableDrawing; //  0x398 Size(1)
	char bForceRebuildOnLoad; //  0x398 Size(1)
	char bAutoDestroyWhenNoNavigation; //  0x398 Size(1)
	char bCanBeMainNavData; //  0x398 Size(1)
	char bCanSpawnOnRebuild; //  0x398 Size(1)
	char bRebuildAtRuntime; //  0x398 Size(1)
	enum class Unknow RuntimeGeneration; //  0x39c Size(1)
	float ObservedPathsTickInterval; //  0x3a0 Size(4)
	uint32_t DataVersion; //  0x3a4 Size(4)
	struct TArray<Unknown> SupportedAreas; //  0x488 Size(10)
};

// Class NavigationSystem.NavArea
struct UNavArea : UNavAreaBase {
	float DefaultCost; //  0x30 Size(4)
	float FixedAreaEnteringCost; //  0x34 Size(4)
	struct Unknown DrawColor; //  0x38 Size(4)
	struct Unknown SupportedAgents; //  0x3c Size(4)
	char bSupportsAgent0; //  0x40 Size(1)
	char bSupportsAgent1; //  0x40 Size(1)
	char bSupportsAgent2; //  0x40 Size(1)
	char bSupportsAgent3; //  0x40 Size(1)
	char bSupportsAgent4; //  0x40 Size(1)
	char bSupportsAgent5; //  0x40 Size(1)
	char bSupportsAgent6; //  0x40 Size(1)
	char bSupportsAgent7; //  0x40 Size(1)
	char bSupportsAgent8; //  0x41 Size(1)
	char bSupportsAgent9; //  0x41 Size(1)
	char bSupportsAgent10; //  0x41 Size(1)
	char bSupportsAgent11; //  0x41 Size(1)
	char bSupportsAgent12; //  0x41 Size(1)
	char bSupportsAgent13; //  0x41 Size(1)
	char bSupportsAgent14; //  0x41 Size(1)
	char bSupportsAgent15; //  0x41 Size(1)
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct Unknown* Agent0Area; //  0x48 Size(8)
	struct Unknown* Agent1Area; //  0x50 Size(8)
	struct Unknown* Agent2Area; //  0x58 Size(8)
	struct Unknown* Agent3Area; //  0x60 Size(8)
	struct Unknown* Agent4Area; //  0x68 Size(8)
	struct Unknown* Agent5Area; //  0x70 Size(8)
	struct Unknown* Agent6Area; //  0x78 Size(8)
	struct Unknown* Agent7Area; //  0x80 Size(8)
	struct Unknown* Agent8Area; //  0x88 Size(8)
	struct Unknown* Agent9Area; //  0x90 Size(8)
	struct Unknown* Agent10Area; //  0x98 Size(8)
	struct Unknown* Agent11Area; //  0xa0 Size(8)
	struct Unknown* Agent12Area; //  0xa8 Size(8)
	struct Unknown* Agent13Area; //  0xb0 Size(8)
	struct Unknown* Agent14Area; //  0xb8 Size(8)
	struct Unknown* Agent15Area; //  0xc0 Size(8)
};

// Class NavigationSystem.NavCollision
struct UNavCollision : UNavCollisionBase {
	struct TArray<Unknown> CylinderCollision; //  0x80 Size(10)
	struct TArray<Unknown> BoxCollision; //  0x90 Size(10)
	struct Unknown* AreaClass; //  0xa0 Size(8)
	char bGatherConvexGeometry; //  0xa8 Size(1)
	char bCreateOnClient; //  0xa8 Size(1)
};

// Class NavigationSystem.NavigationGraphNodeComponent
struct UNavigationGraphNodeComponent : USceneComponent {
	struct Unknown Node; //  0x238 Size(18)
	struct Unknown NextNodeComponent; //  0x250 Size(8)
	struct Unknown PrevNodeComponent; //  0x258 Size(8)
};

// Class NavigationSystem.NavigationInvokerComponent
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; //  0xb0 Size(4)
	float TileRemovalRadius; //  0xb4 Size(4)
};

// Class NavigationSystem.NavigationPath
struct UNavigationPath : Object {
	struct FMulticastInlineDelegate PathUpdatedNotifier; //  0x28 Size(10)
	struct TArray<Unknown> PathPoints; //  0x38 Size(10)
	char RecalculateOnInvalidation; //  0x48 Size(1)

	char IsValid(); // Function NavigationSystem.NavigationPath.IsValid(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <Game+0x3f1bd40>
};

// Class NavigationSystem.NavigationQueryFilter
struct UNavigationQueryFilter : Object {
	struct TArray<Unknown> Areas; //  0x28 Size(10)
	struct Unknown IncludeFlags; //  0x38 Size(4)
	struct Unknown ExcludeFlags; //  0x3c Size(4)
};

// Class NavigationSystem.NavigationSystemV1
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct Unknown MainNavData; //  0x28 Size(8)
	struct Unknown AbstractNavData; //  0x30 Size(8)
	struct FName DefaultAgentName; //  0x38 Size(8)
	struct TSoftClassPtr<UObject> CrowdManagerClass; //  0x40 Size(28)
	char bAutoCreateNavigationData; //  0x68 Size(1)
	char bSpawnNavDataInNavBoundsLevel; //  0x68 Size(1)
	char bAllowClientSideNavoundsLe; //  0x68 Size(1)
	char bShouldDiscardSubLevelNavData; //  0x68 Size(1)
	char bTickWhilePaused; //  0x68 Size(1)
	char bSupportRebuilding; //  0x68 Size(1)
	char bInitialBuildingLocked; //  0x68 Size(1)
	char bSkipAgentHeightCheckWhenPickingNavData; //  0x69 Size(1)
	enum class Unknow DataGatheringMode; //  0x6c Size(1)
	char bGenerateNavigationOnlyAroundNavigationInvokers; //  0x70 Size(1)
	float ActiveTilesUpdateInterval; //  0x74 Size(4)
	struct TArray<Unknown> SupportedAgents; //  0x78 Size(10)
	struct Unknown SupportedAgentsMask; //  0x88 Size(4)
	struct TArray<Unknown> NavDataSet; //  0x90 Size(10)
	struct TArray<Unknown> NavDataRegistrationQueue; //  0xa0 Size(10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; //  0xc0 Size(10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinis; //  0xd0 Size(10)
	enum class Unknow OperationMode; //  0x1bc Size(1)
	float DirtyAreasUpdateFreq; //  0x514 Size(4)

	void UnregisterNavigationInvoker(struct Unknown Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker(Final|Native|Public|BlueprintCallable) // <Game+0x3f1cb90>
};

// Class NavigationSystem.NavigationSystemModuleConfig
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic; //  0x50 Size(1)
	char bCreateOnClient; //  0x50 Size(1)
	char bAutoSpawnMissingNav; //  0x50 Size(1)
	char bSpawnNavDataInNavBoundsLevel; //  0x50 Size(1)
};

// Class NavigationSystem.NavigationTestingActor
struct ANavigationTestingActor : UActor {
	struct Unknown CapsuleComponent; //  0x320 Size(8)
	struct Unknown InvokerComponent; //  0x328 Size(8)
	char bActAsNavigationInv; //  0x330 Size(1)
	struct Unknown NavAgentProps; //  0x338 Size(30)
	struct Unknown QueryingExtent; //  0x368 Size(c)
	struct Unknown MyNavData; //  0x378 Size(8)
	struct Unknown ProjectedLocation; //  0x380 Size(c)
	char bProjectedLocationValid; //  0x38c Size(1)
	char bSearchStart; //  0x38c Size(1)
	float CostLimitFactor; //  0x390 Size(4)
	float MinimumCostLimit; //  0x394 Size(4)
	char bBacktracking; //  0x398 Size(1)
	char bUseHierarchicalPathfinding; //  0x398 Size(1)
	char bGatherDetailedInfo; //  0x398 Size(1)
	char bDrawDistanceToWall; //  0x398 Size(1)
	char bShowNodePool; //  0x398 Size(1)
	char bShowBestPath; //  0x398 Size(1)
	char bShowDiffWithPreviousStep; //  0x398 Size(1)
	char bShouldBeVisibleInGame; //  0x398 Size(1)
	char Cost; //  0x39c Size(1)
	struct Unknown TextCanvasOffset; //  0x3a0 Size(8)
	char bPathExist; //  0x3a8 Size(1)
	char bPathIsPartial; //  0x3a8 Size(1)
	char bPathSearchOutOfNodes; //  0x3a8 Size(1)
	float PathfindingTime; //  0x3ac Size(4)
	float PathCost; //  0x3b0 Size(4)
	int32_t PathfindingSteps; //  0x3b4 Size(4)
	struct Unknown OtherActor; //  0x3b8 Size(8)
	struct Unknown* FilterClass; //  0x3c0 Size(8)
	int32_t ShowStepIndex; //  0x3c8 Size(4)
	float OffsetFromCornersDistance; //  0x3cc Size(4)
};

// Class NavigationSystem.NavLinkComponent
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<Unknown> LINKS; //  0x4c0 Size(10)
};

// Class NavigationSystem.NavRelevantComponent
struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot; //  0xd4 Size(1)
	struct Unknown CachedNavParent; //  0xd8 Size(8)

	void SetNavigationRelevancy(char bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy(Final|Native|Public|BlueprintCallable) // <Game+0x3f1f230>
};

// Class NavigationSystem.NavLinkCustomComponent
struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; //  0xe8 Size(4)
	struct Unknown* EnabledAreaClass; //  0xf0 Size(8)
	struct Unknown* DisabledAreaClass; //  0xf8 Size(8)
	struct Unknown SupportedAgents; //  0x100 Size(4)
	struct Unknown LinkRelativeStart; //  0x104 Size(c)
	struct Unknown LinkRelativeEnd; //  0x110 Size(c)
	char Link; //  0x11c Size(1)
	char bLinkEnabled; //  0x120 Size(1)
	char bNotifyWhenEnabled; //  0x120 Size(1)
	char bNotifyWhenDisabled; //  0x120 Size(1)
	char bCreateBoxObstacle; //  0x120 Size(1)
	struct Unknown ObstacleOffset; //  0x124 Size(c)
	struct Unknown ObstacleExtent; //  0x130 Size(c)
	struct Unknown* ObstacleAreaClass; //  0x140 Size(8)
	float BroadcastRadius; //  0x148 Size(4)
	float BroadcastInterval; //  0x14c Size(4)
	char BroadcastChannel; //  0x150 Size(1)
};

// Class NavigationSystem.NavMeshBoundsVolume
struct ANavMeshBoundsVolume : AVolume {
	struct Unknown SupportedAgents; //  0x348 Size(4)
};

// Class NavigationSystem.NavModifierComponent
struct UNavModifierComponent : UNavRelevantComponent {
	struct Unknown* AreaClass; //  0xe0 Size(8)
	struct Unknown FailsafeExtent; //  0xe8 Size(c)
	char bIncludeAgentHeight; //  0xf4 Size(1)

	void SetAreaClass(struct Unknown* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass(Final|Native|Public|BlueprintCallable) // <Game+0x3f1f1b0>
};

// Class NavigationSystem.NavModifierVolume
struct ANavModifierVolume : AVolume {
	struct Unknown* AreaClass; //  0x350 Size(8)

	void SetAreaClass(struct Unknown* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass(Final|Native|Public|BlueprintCallable) // <Game+0x3f1f130>
};

// Class NavigationSystem.NavSystemConfigOverride
struct ANavSystemConfigOverride : UActor {
	struct Unknown NavigationSystemConfig; //  0x310 Size(8)
	enum class Unknow OverridePolicy; //  0x318 Size(1)
	char bLoadOnClient; //  0x319 Size(1)
};

// Class NavigationSystem.RecastNavMesh
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges; //  0x4f0 Size(1)
	char bDrawPolyEdges; //  0x4f0 Size(1)
	char bDrawFilledPolys; //  0x4f0 Size(1)
	char bDrawNavMeshEdges; //  0x4f0 Size(1)
	char bDrawTileBounds; //  0x4f0 Size(1)
	char bDrawPathCollidingGeometry; //  0x4f0 Size(1)
	char bDrawTileLabels; //  0x4f0 Size(1)
	char bDrawPolygonLabels; //  0x4f0 Size(1)
	char bDrawDefaultPolygonCost; //  0x4f1 Size(1)
	char bDrawLabelsOnPathNodes; //  0x4f1 Size(1)
	char bDrawNavLinks; //  0x4f1 Size(1)
	char bDrawFailedNavLinks; //  0x4f1 Size(1)
	char bDrawClusters; //  0x4f1 Size(1)
	char bDrawOctree; //  0x4f1 Size(1)
	char bDrawOctreeDetails; //  0x4f1 Size(1)
	char bDrawMarkedForbiddenPolys; //  0x4f1 Size(1)
	char bDistinctlyDrawTilesBeingBuilt; //  0x4f2 Size(1)
	char bDrawNavMesh; //  0x4f2 Size(1)
	float DrawOffset; //  0x4f4 Size(4)
	char bFixedTilePoolSize; //  0x4f8 Size(1)
	int32_t TilePoolSize; //  0x4fc Size(4)
	float TileSizeUU; //  0x500 Size(4)
	float CellSize; //  0x504 Size(4)
	float CellHeight; //  0x508 Size(4)
	float AgentRadius; //  0x50c Size(4)
	float AgentHeight; //  0x510 Size(4)
	float AgentMaxHeight; //  0x514 Size(4)
	float AgentMaxSlope; //  0x518 Size(4)
	float AgentMaxStepHeight; //  0x51c Size(4)
	float MinRegionArea; //  0x520 Size(4)
	float MergeRegionSize; //  0x524 Size(4)
	float MaxSimplificationError; //  0x528 Size(4)
	int32_t MaxSimultaneousTileGenerationJobsCount; //  0x52c Size(4)
	int32_t TileNumberHardLimit; //  0x530 Size(4)
	int32_t PolyRefTileBits; //  0x534 Size(4)
	int32_t PolyRefNavPolyBits; //  0x538 Size(4)
	int32_t PolyRefSaltBits; //  0x53c Size(4)
	struct Unknown NavMeshOriginOffset; //  0x540 Size(c)
	float DefaultDrawDistance; //  0x54c Size(4)
	float DefaultMaxSearchNodes; //  0x550 Size(4)
	float DefaultMaxHierarchicalSearchNodes; //  0x554 Size(4)
	char RegionPartitioning; //  0x558 Size(1)
	char LayerPartitioning; //  0x559 Size(1)
	int32_t RegionChunkSplits; //  0x55c Size(4)
	int32_t LayerChunkSplits; //  0x560 Size(4)
	char bSortNavigationAreasByCost; //  0x564 Size(1)
	char bPerformVoxelFiltering; //  0x564 Size(1)
	char bMarkLowHeightAreas; //  0x564 Size(1)
	char bFilterLowSpanSequences; //  0x564 Size(1)
	char bFilterLowSpanFromTileCache; //  0x564 Size(1)
	char bDoFullyAsyncNavDataGathering; //  0x564 Size(1)
	char bUseBetterOffsetsFromCorners; //  0x564 Size(1)
	char bStoreEmptyTileLayers; //  0x564 Size(1)
	char bUseVirtualFilters; //  0x565 Size(1)
	char bAllowNavLinkAsPathEnd; //  0x565 Size(1)
	char bUseVoxelCache; //  0x565 Size(1)
	float TileSetUpdateInterv; //  0x568 Size(4)
	float HeuristicScale; //  0x56c Size(4)
	float VerticalDeviationFromGroundCompensation; //  0x570 Size(4)

	char K2_ReplaceAreaInTileBounds(struct Unknown Bounds, struct Unknown* OldArea, struct Unknown* NewArea, char ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds(Final|Native|Public|HasDefaults|BlueprintCallable) // <Game+0x3f1efa0>
};

