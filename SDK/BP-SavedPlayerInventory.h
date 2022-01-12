// BlueprintGeneratedClass BP-SavedPlayerInventory.BP-SavedPlayerInventory_C
class UBP-SavedPlayerInventory_C : public USaveGame {

public:

	struct TArray<struct FBP-SavedInventoryItemStructure> WearableItemList; // 0x28 (16)
	struct TArray<struct FBP-SavedInventoryItemStructure> CustomItemList; // 0x38 (16)
	struct TArray<struct FBP-SavedInventoryItemStructure> WeaponItemList; // 0x48 (16)
	struct TArray<struct FBP-SavedInventoryItemStructure> InBackpackItemList; // 0x58 (16)
	struct FRepCharacterAppearanceInfo AppearanceInfo; // 0x68 (20)
};

