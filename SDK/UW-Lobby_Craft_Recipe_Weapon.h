// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C
class UUW-Lobby_Craft_Recipe_Weapon_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248 (8)
	struct UHorizontalBox HorizontalBox_Rarity; // 0x250 (8)
	struct UHorizontalBox HorizontalBox_Rarity_NotOwn; // 0x258 (8)
	struct UImage Image_310; // 0x260 (8)
	struct UImage Image_Weapon_6Grade_bg; // 0x268 (8)
	struct UImage Img_Icon; // 0x270 (8)
	struct URetainerBox RetainerBox_2; // 0x278 (8)
	struct UTextBlock T_CurrentCount; // 0x280 (8)
	struct UTextBlock T_Level; // 0x288 (8)
	struct UTextBlock T_MaxCount; // 0x290 (8)
	struct UWidgetSwitcher WidgetSwitcher_Rarity; // 0x298 (8)
	int32_t ItemWeaponID; // 0x2A0 (4)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x2A8 (2856)
	struct FInventoryItemInfo WeaponItemInfo; // 0xDD0 (152)
	int32_t CurrentCount; // 0xE68 (4)

	void SetOwnInfo(); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnInfo(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetNotOwnRarityVisibility(int32_t Rarity); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetNotOwnRarityVisibility(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetOwnCount(); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnCount(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void SetWeaponInfo(struct FItemWeapon& ItemWeaponInfo, int32_t ItemWeaponID); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetWeaponInfo(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnLoaded_F85F803F469568E218532398152F6C76(struct Object Loaded); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnLoaded_F85F803F469568E218532398152F6C76(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void AsyncLoadImg(struct TSoftObjectPtr<Object> Object); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.AsyncLoadImg(BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <Game_BE.exe+0x2B80160>
	void ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon(int32_t EntryPoint); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon(Final|UbergraphFunction|HasDefaults) // <Game_BE.exe+0x2B80160>
};

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnInfo
inline void UUW-Lobby_Craft_Recipe_Weapon_C::SetOwnInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnInfo");

	struct SetOwnInfo_Params {
		
	}; SetOwnInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetNotOwnRarityVisibility
inline void UUW-Lobby_Craft_Recipe_Weapon_C::SetNotOwnRarityVisibility(int32_t Rarity) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetNotOwnRarityVisibility");

	struct SetNotOwnRarityVisibility_Params {
		int32_t Rarity;
	}; SetNotOwnRarityVisibility_Params Params;

	Params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnCount
inline void UUW-Lobby_Craft_Recipe_Weapon_C::SetOwnCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnCount");

	struct SetOwnCount_Params {
		
	}; SetOwnCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetWeaponInfo
inline void UUW-Lobby_Craft_Recipe_Weapon_C::SetWeaponInfo(struct FItemWeapon& ItemWeaponInfo, int32_t ItemWeaponID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct FItemWeapon& ItemWeaponInfo;
		int32_t ItemWeaponID;
	}; SetWeaponInfo_Params Params;

	Params.ItemWeaponID = ItemWeaponID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemWeaponInfo = Params.ItemWeaponInfo;

}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnLoaded_F85F803F469568E218532398152F6C76
inline void UUW-Lobby_Craft_Recipe_Weapon_C::OnLoaded_F85F803F469568E218532398152F6C76(struct Object Loaded) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnLoaded_F85F803F469568E218532398152F6C76");

	struct OnLoaded_F85F803F469568E218532398152F6C76_Params {
		struct Object Loaded;
	}; OnLoaded_F85F803F469568E218532398152F6C76_Params Params;

	Params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.AsyncLoadImg
inline void UUW-Lobby_Craft_Recipe_Weapon_C::AsyncLoadImg(struct TSoftObjectPtr<Object> Object) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.AsyncLoadImg");

	struct AsyncLoadImg_Params {
		struct TSoftObjectPtr<Object> Object;
	}; AsyncLoadImg_Params Params;

	Params.Object = Object;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnMouseEnter
inline void UUW-Lobby_Craft_Recipe_Weapon_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon
inline void UUW-Lobby_Craft_Recipe_Weapon_C::ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon");

	struct ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

