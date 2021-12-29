// WidgetBlueprintGeneratedClass UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C
class UUW-Inventory_ItemSlotHover_WeaponSlot_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Image_350; // 0x250 (8)
	struct Unknown Image_585; // 0x258 (8)
	struct Unknown Image_Grade_Color_Line; // 0x260 (8)
	struct Unknown TextBlock_445; // 0x268 (8)

	void SetBuffInfo(struct FText BuffName, struct FText Desc, struct Unknown Icon, int32_t Rarity); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.SetBuffInfo(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1(struct Unknown Loaded); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void AsyncLoadIconTexture(struct Unknown IconTexture); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.AsyncLoadIconTexture(BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
	void ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot(int32_t EntryPoint); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6E050>
};

// Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.SetBuffInfo
inline void UUW-Inventory_ItemSlotHover_WeaponSlot_C::SetBuffInfo(struct FText BuffName, struct FText Desc, struct Unknown Icon, int32_t Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.SetBuffInfo");

	struct SetBuffInfo_Params {
		struct FText BuffName;
		struct FText Desc;
		struct Unknown Icon;
		int32_t Rarity;
	}; SetBuffInfo_Params Params;

	Params.BuffName = BuffName;
	Params.Desc = Desc;
	Params.Icon = Icon;
	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1
inline void UUW-Inventory_ItemSlotHover_WeaponSlot_C::OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1(struct Unknown Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1");

	struct OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1_Params {
		struct Unknown Loaded;
	}; OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.AsyncLoadIconTexture
inline void UUW-Inventory_ItemSlotHover_WeaponSlot_C::AsyncLoadIconTexture(struct Unknown IconTexture) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.AsyncLoadIconTexture");

	struct AsyncLoadIconTexture_Params {
		struct Unknown IconTexture;
	}; AsyncLoadIconTexture_Params Params;

	Params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot
inline void UUW-Inventory_ItemSlotHover_WeaponSlot_C::ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot");

	struct ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

