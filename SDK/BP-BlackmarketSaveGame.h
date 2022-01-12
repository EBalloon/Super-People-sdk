// BlueprintGeneratedClass BP-BlackmarketSaveGame.BP-BlackmarketSaveGame_C
class UBP-BlackmarketSaveGame_C : public USaveGame {

public:

	char bHideWorkInProgress : 0; // 0x28 (1)
	enum class EBlackmarketTabType MainTab; // 0x29 (1)
	enum class EWeaponType WeaponSubTab; // 0x2A (1)
	enum class EWeaponAttachmentType AttachmentSubTab; // 0x2B (1)
	enum class EWearableItemType WearableSubTab; // 0x2C (1)
	enum class EWearableItemType CustomSubTab; // 0x2D (1)
	enum class EWearableItemType GearSubTab; // 0x2E (1)
};

