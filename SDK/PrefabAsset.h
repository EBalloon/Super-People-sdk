// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8 {
	SkipProp = 0
	EPrefabVariantRuleType_MAX = 1
};

// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8 {
	EPTUITheme = 0
	EPTUITheme = 1
	EPTUITheme = 2
};

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8 {
	EPrefabVisualizerType = 0
	EPrefabVisualizerType = 1
	EPrefabVisualizerType = 2
};

// Class PrefabAsset.PrefabToolActor
struct APrefabToolActor : UActor {
	struct Unknown PrefabComponent; // 0x310 (8)

	void SetPrefab(struct Unknown NewPrefab, char bForceRevertEvenDisconnected); // Function PrefabAsset.PrefabToolActor.SetPrefab(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CFD0>
	void SetMobility(char InMobility); // Function PrefabAsset.PrefabToolActor.SetMobility(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CF50>
	char IsConnected(); // Function PrefabAsset.PrefabToolActor.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CF20>
	struct FString GetPrefabAssetName(); // Function PrefabAsset.PrefabToolActor.GetPrefabAssetName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CC80>
	struct Unknown GetPrefab(); // Function PrefabAsset.PrefabToolActor.GetPrefab(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CC50>
	void DestroyPrefabActor(char bDestroyAttachedChildren); // Function PrefabAsset.PrefabToolActor.DestroyPrefabActor(Final|Native|Public|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CBC0>
};

// Class PrefabAsset.PrefabAsset
struct UPrefabAsset : Object {
	struct TMap<Unknown, Unknown>Unknown AssetReferences; // 0x28 (80)
	struct Unknown GeneratedBlueprintAssetReference; // 0x78 (24)
	struct Unknown SimplifiedMeshAssetReference; // 0x90 (24)
	struct Unknown PrefabId; // 0xA8 (16)
	struct FString PrefabContent; // 0xB8 (16)
	struct FString PrefabHash; // 0xC8 (16)
	int32_t NumActors; // 0xD8 (4)
	struct Unknown PrefabPivot; // 0xDC (12)

	void SetSimplifiedMeshAssetReference(struct Unknown& InAssetReference); // Function PrefabAsset.PrefabAsset.SetSimplifiedMeshAssetReference(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124D0A0>
	struct FString GetPrefabHash(); // Function PrefabAsset.PrefabAsset.GetPrefabHash(Native|Public|BlueprintCallable|BlueprintPure|Const) // <BravoHotelClient-Win64-Shipping.protected.exe+0x124CD00>
};

// Class PrefabAsset.PrefabVariantAsset
struct UPrefabVariantAsset : UPrefabAsset {
	struct Unknown Parent; // 0xE8 (8)
};

// Class PrefabAsset.PrefabToolComponent
struct UPrefabToolComponent : UPrimitiveComponent {
	char bConnected : 0; // 0x4B8 (1)
	char bLockSelection : 0; // 0x4B8 (1)
	struct Unknown Prefab; // 0x4C0 (8)
	struct Unknown GeneratedBlueprint; // 0x4C8 (8)
	struct Unknown SimplifiedMesh; // 0x4D0 (8)
	struct TMap<Unknown, Unknown>Unknown PrefabInstancesMap; // 0x4D8 (80)
	struct TArray<Unknown> VariantRulesOverwrite; // 0x528 (16)
	char bTransient : 0; // 0x538 (1)
	struct Unknown* ParentClass; // 0x540 (8)
};

// Class PrefabAsset.PrefabToolSettings
struct UPrefabToolSettings : Object {
	char bInitialPivotToWorldOrigin : 0; // 0x28 (1)
	char b : 0; // 0x29 (1)
	char bAutoIncludeAttachedActorsWhenCreateNewPrefab : 0; // 0x2A (1)
	char bNestedPrefabSupport : 0; // 0x2B (1)
	char b : 0; // 0x2C (1)
	char bCollapseAllPrefabActorsAfterMapOpened : 0; // 0x2D (1)
	char bMoveActorsInWorldAfterSetPrefabPivot : 0; // 0x2E (1)
	char bDuplicateNoRevertWithOffset : 0; // 0x2F (1)
	struct FString NewPrefabNamePattern; // 0x30 (16)
	enum class Unknow UITheme; // 0x40 (4)
	char bUpdateAllPrefabActorsWhenOpenMap : 0; // 0x44 (1)
	char bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap : 0; // 0x45 (1)
	char bUpdateAllPrefabActorsWhenApply : 0; // 0x46 (1)
	char bApplyToNestedPrefab : 0; // 0x47 (1)
	char bEnableApplyFromDisconnectedPrefabActor : 0; // 0x48 (1)
	char bAutoAddRemoveVariantActorPrefix : 0; // 0x49 (1)
	struct FString VariantActorPrefix; // 0x50 (16)
	char bEnablePrefabComponentVisualizer : 0; // 0x60 (1)
	enum class Unknow PrefabComponentVisualizerType; // 0x61 (1)
	char bDisplayPrefabComponentVisualizerEvenNotSelected : 0; // 0x62 (1)
	struct Unknown PrefabViewVisualizerColor; // 0x64 (4)
	struct Unknown TargetActorColor; // 0x68 (4)
	struct Unknown UnLockedConnectedColor; // 0x6C (4)
	struct Unknown LockedConnectedColor; // 0x70 (4)
	struct Unknown UnLockedDisConnectedColor; // 0x74 (4)
	struct Unknown LockedDisConnectedColor; // 0x78 (4)
	struct Unknown UnLockedNoPrefabAssignedColor; // 0x7C (4)
	struct Unknown LockedNoPrefabAssignedColor; // 0x80 (4)
	struct Unknown PrefabMaterialPath; // 0x88 (24)
	char bShadedPrefabViewVisualizer : 0; // 0xC8 (1)
	char bLockPrefabSelectionByDefault : 0; // 0xC9 (1)
	char bDisableLockPrefabSelection : 0; // 0xCA (1)
	char bSupportGroupWhenPasting : 0; // 0xCB (1)
	char bForceApplyPerInstanceVertexColor : 0; // 0xCC (1)
	char bHideChildActorsInPIEIfHiddenInEditor : 0; // 0xCD (1)
	char bCanToggleChildActorVisibilityInPIE : 0; // 0xCE (1)
	char bIgnoreLayersInPrefab : 0; // 0xD0 (1)
	struct TArray<Unknown> ChangeComponentActor; // 0xD8 (16)
	struct Unknown* DefaultActorClass; // 0xE8 (8)
	char bEnabledAutoThumbnail : 0; // 0xF0 (1)
	char bAutoOpenBlueprintEditor : 0; // 0xF1 (1)
	struct Unknown* InteriorActorClass; // 0xF8 (8)
	struct Unknown* ExteriorActorClass; // 0x100 (8)
	struct Unknown* InteriorShowActorClass; // 0x108 (8)
	struct Unknown* HouseActorClass; // 0x110 (8)
	char bSupportGenerateBlueprint : 0; // 0x118 (1)
	char bHarvestComponentsWhenGeneratingBlueprint : 0; // 0x119 (1)
	char bUseActorNameAsVariableNameWhenGeneratingBlueprint : 0; // 0x11A (1)
	char bForceMobilityToMov : 0; // 0x11B (1)
	struct TArray<Unknown> IgnoreActorClassesWhenGeneratingBlueprint; // 0x120 (16)
	struct TArray<Unknown> IgnoreActorTagsWhenGeneratingBlueprint; // 0x130 (16)
	char bFlashPrefabWindowForTargetPrefabActor : 0; // 0x140 (1)
	char bEnablePrefabTextEditor : 0; // 0x141 (1)
	char bDebugMode : 0; // 0x142 (1)
	char bDisableThumbnailRender : 0; // 0x143 (1)
	char bShowPrefabInstanceTagInPrefabToolWindow : 0; // 0x144 (1)
};

