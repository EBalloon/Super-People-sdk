// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8 {
	SkipProp = 0,
	EPrefabVariantRuleType_MAX = 1
};

// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8 {
	EPTUITheme = 0,
	EPTUITheme = 1,
	EPTUITheme = 2
};

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8 {
	EPrefabVisualizerType = 0,
	EPrefabVisualizerType = 1,
	EPrefabVisualizerType = 2
};

// Class PrefabAsset.PrefabToolActor
struct APrefabToolActor : UActor {
	Unknown PrefabComponent; //  0x310 Size(8)

	void SetPrefab(Unknown NewPrefab, char bForceRevertEvenDisconnected); // Function PrefabAsset.PrefabToolActor.SetPrefab(Final|Native|Public|BlueprintCallable) // <Game+0x124ca70>
};

// Class PrefabAsset.PrefabAsset
struct UPrefabAsset : Object {
	Unknown AssetReferences; //  0x28 Size(50)
	Unknown GeneratedBlueprintAssetReference; //  0x78 Size(18)
	Unknown SimplifiedMeshAssetReference; //  0x90 Size(18)
	Unknown PrefabId; //  0xa8 Size(10)
	struct FString PrefabContent; //  0xb8 Size(10)
	struct FString PrefabHash; //  0xc8 Size(10)
	int32_t NumActors; //  0xd8 Size(4)
	Unknown PrefabPivot; //  0xdc Size(c)

	void SetSimplifiedMeshAssetReference(Unknown& InAssetReference); // Function PrefabAsset.PrefabAsset.SetSimplifiedMeshAssetReference(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <Game+0x124cb40>
};

// Class PrefabAsset.PrefabVariantAsset
struct UPrefabVariantAsset : UPrefabAsset {
	Unknown Parent; //  0xe8 Size(8)
};

// Class PrefabAsset.PrefabToolComponent
struct UPrefabToolComponent : UPrimitiveComponent {
	char bConnected; //  0x4b8 Size(1)
	char bLockSelection; //  0x4b8 Size(1)
	Unknown Prefab; //  0x4c0 Size(8)
	Unknown GeneratedBlueprint; //  0x4c8 Size(8)
	Unknown SimplifiedMesh; //  0x4d0 Size(8)
	Unknown PrefabInstancesMap; //  0x4d8 Size(50)
	Unknown VariantRulesOverwrite; //  0x528 Size(10)
	char bTransient; //  0x538 Size(1)
	Unknown ParentClass; //  0x540 Size(8)
};

// Class PrefabAsset.PrefabToolSettings
struct UPrefabToolSettings : Object {
	char bInitialPivotToWorldOrigin; //  0x28 Size(1)
	char bReplaceActorsWithCreatedPrefab; //  0x29 Size(1)
	char bAutoIncludeAttachedActorsWhenCreateNewPrefab; //  0x2a Size(1)
	char bNestedPrefabSupport; //  0x2b Size(1)
	char bRestorePrefabActorCollapseStatusAfterPIE; //  0x2c Size(1)
	char bCollapseAllPrefabActorsAfterMapOpened; //  0x2d Size(1)
	char bMoveActorsInWorldAfterSetPrefabPivot; //  0x2e Size(1)
	char bDuplicateNoRevertWithOffset; //  0x2f Size(1)
	struct FString NewPrefabNamePattern; //  0x30 Size(10)
	Unknown UITheme; //  0x40 Size(4)
	char bUpdateAllPrefabActorsWhenOpenMap; //  0x44 Size(1)
	char bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; //  0x45 Size(1)
	char bUpdateAllPrefabActorsWhenApply; //  0x46 Size(1)
	char bApplyToNestedPrefab; //  0x47 Size(1)
	char bEnableApplyFromDisconnectedPrefabActor; //  0x48 Size(1)
	char bAutoAddRemoveVariantActorPrefix; //  0x49 Size(1)
	struct FString VariantActorPrefix; //  0x50 Size(10)
	char bEnablePrefabComponentVisualizer; //  0x60 Size(1)
	Unknown PrefabComponentVisualizerType; //  0x61 Size(1)
	char bDisplayPrefabComponentVisualizerEvenNotSelected; //  0x62 Size(1)
	Unknown PrefabViewVisualizerColor; //  0x64 Size(4)
	Unknown TargetActorColor; //  0x68 Size(4)
	Unknown UnLockedConnectedColor; //  0x6c Size(4)
	Unknown LockedConnectedColor; //  0x70 Size(4)
	Unknown UnLockedDisConnectedColor; //  0x74 Size(4)
	Unknown LockedDisConnectedColor; //  0x78 Size(4)
	Unknown UnLockedNoPrefabAssignedColor; //  0x7c Size(4)
	Unknown LockedNoPrefabAssignedColor; //  0x80 Size(4)
	Unknown PrefabMaterialPath; //  0x88 Size(18)
	char bShadedPrefabViewVisualizer; //  0xc8 Size(1)
	char bLockPrefabSelectionByDefault; //  0xc9 Size(1)
	char bDisableLockPrefabSelectionFeature; //  0xca Size(1)
	char bSupportGroupWhenPasting; //  0xcb Size(1)
	char bForceApplyPerInstanceVertexColor; //  0xcc Size(1)
	char bHideChildActorsInPIEIfHiddenInEditor; //  0xcd Size(1)
	char bCanToggleChildActorVisibilityInPIE; //  0xce Size(1)
	char bIgnoreLayersInPrefab; //  0xd0 Size(1)
	Unknown ChangeComponentActor; //  0xd8 Size(10)
	Unknown DefaultActorClass; //  0xe8 Size(8)
	char bEnabledAutoThumbnail; //  0xf0 Size(1)
	char bAutoOpenBlueprintEditor; //  0xf1 Size(1)
	Unknown InteriorActorClass; //  0xf8 Size(8)
	Unknown ExteriorActorClass; //  0x100 Size(8)
	Unknown InteriorShowActorClass; //  0x108 Size(8)
	Unknown HouseActorClass; //  0x110 Size(8)
	char bSupportGenerateBlueprint; //  0x118 Size(1)
	char bHarvestComponentsWhenGeneratingBlueprint; //  0x119 Size(1)
	char bUseActorNameAsVariableNameWhenGeneratingBlueprint; //  0x11a Size(1)
	char bForceMobilityToMov; //  0x11b Size(1)
	Unknown IgnoreActorClassesWhenGeneratingBlueprint; //  0x120 Size(10)
	Unknown IgnoreActorTagsWhenGeneratingBlueprint; //  0x130 Size(10)
	char bFlashPrefabWindowForTargetPrefabActor; //  0x140 Size(1)
	char bEnablePrefabTextEditor; //  0x141 Size(1)
	char bDeb; //  0x142 Size(1)
	char bDisableThumbnailRender; //  0x143 Size(1)
	char bShowPrefabInstanceTagInPrefabToolWindow; //  0x144 Size(1)
};

