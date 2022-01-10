// WidgetBlueprintGeneratedClass UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C
class UUW-Lobby_ArmoryMain_C : public UUserWidget {

public:

	struct Unknown ShowAnim; // 0x248 (8)
	struct Unknown UW-Lobby_Armory_Recipe; // 0x250 (8)
	struct Unknown WidgetSwitcher_53; // 0x258 (8)
	int32_t Gold; // 0x260 (4)
	struct TArray<Unknown> WeaponList; // 0x268 (16)
	struct TArray<Unknown> MaterialList; // 0x278 (16)
	struct TArray<Unknown> ItemWeaponIDList; // 0x288 (16)
	struct TArray<Unknown> LastItemWeaponIDList; // 0x298 (16)
	struct TArray<Unknown> NewWeaponList; // 0x2A8 (16)
	struct TArray<Unknown> MaterialIDList; // 0x2B8 (16)
	struct TArray<Unknown> LastMaterialIDList; // 0x2C8 (16)
	struct TArray<Unknown> NewMaterialList; // 0x2D8 (16)
	struct TArray<Unknown> NewCraftIDList; // 0x2E8 (16)
	struct Unknown CraftWeaponInfo; // 0x2F8 (192)
	struct FString MainTabName; // 0x3B8 (16)
	struct FString ArmoryTabName; // 0x3C8 (16)
	char bNeedCheckWeaponList : 0; // 0x3D8 (1)
	char bNeedCheckMaterialList : 0; // 0x3D9 (1)

	void NotifyNewItemToCoh(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.NotifyNewItemToCoh(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void RemoveNewCraftingList(struct FName ID); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.RemoveNewCraftingList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateNewCraftingSlots(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewCraftingSlots(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateNewMaterialList(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewMaterialList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void UpdateNewWeaponList(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewWeaponList(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void CreateCraftWeaponPerkPopup(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CreateCraftWeaponPerkPopup(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void EndCraft(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.EndCraft(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void StartCraft(struct Unknown& CraftWeapon); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.StartCraft(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void GetOwnWeaponCount(int32_t BaseWeaponID, int32_t& Count); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnWeaponCount(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void GetOwnItemCount(int32_t ItemId, int32_t& Count); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnItemCount(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void CheckOwnWeapon(int32_t BaseWeaponID, char& IsOwn); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnWeapon(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void CheckOwnItems(struct TArray<Unknown>& ItemId, char& AllOwn, int32_t& OwnCount); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnItems(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <Game_BE.exe+0x2B812B0>
	void OnChangedMaterialList(struct TArray<Unknown>& MaterialList); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMaterialList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedWeaponList(struct TArray<Unknown>& WeaponList); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedWeaponList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedGold(int32_t Gold); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedGold(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedArmoryTab(struct FString TabName); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedArmoryTab(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
	void OnChangedMainTab(struct FString TabName); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMainTab(Public|BlueprintCallable|BlueprintEvent) // <Game_BE.exe+0x2B812B0>
};

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.NotifyNewItemToCoh
inline void UUW-Lobby_ArmoryMain_C::NotifyNewItemToCoh() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.NotifyNewItemToCoh");

	struct NotifyNewItemToCoh_Params {
		
	}; NotifyNewItemToCoh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.RemoveNewCraftingList
inline void UUW-Lobby_ArmoryMain_C::RemoveNewCraftingList(struct FName ID) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.RemoveNewCraftingList");

	struct RemoveNewCraftingList_Params {
		struct FName ID;
	}; RemoveNewCraftingList_Params Params;

	Params.ID = ID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewCraftingSlots
inline void UUW-Lobby_ArmoryMain_C::UpdateNewCraftingSlots() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewCraftingSlots");

	struct UpdateNewCraftingSlots_Params {
		
	}; UpdateNewCraftingSlots_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewMaterialList
inline void UUW-Lobby_ArmoryMain_C::UpdateNewMaterialList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewMaterialList");

	struct UpdateNewMaterialList_Params {
		
	}; UpdateNewMaterialList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewWeaponList
inline void UUW-Lobby_ArmoryMain_C::UpdateNewWeaponList() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewWeaponList");

	struct UpdateNewWeaponList_Params {
		
	}; UpdateNewWeaponList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CreateCraftWeaponPerkPopup
inline void UUW-Lobby_ArmoryMain_C::CreateCraftWeaponPerkPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CreateCraftWeaponPerkPopup");

	struct CreateCraftWeaponPerkPopup_Params {
		
	}; CreateCraftWeaponPerkPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.EndCraft
inline void UUW-Lobby_ArmoryMain_C::EndCraft() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.EndCraft");

	struct EndCraft_Params {
		
	}; EndCraft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.StartCraft
inline void UUW-Lobby_ArmoryMain_C::StartCraft(struct Unknown& CraftWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.StartCraft");

	struct StartCraft_Params {
		struct Unknown& CraftWeapon;
	}; StartCraft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CraftWeapon = Params.CraftWeapon;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnWeaponCount
inline void UUW-Lobby_ArmoryMain_C::GetOwnWeaponCount(int32_t BaseWeaponID, int32_t& Count) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnWeaponCount");

	struct GetOwnWeaponCount_Params {
		int32_t BaseWeaponID;
		int32_t& Count;
	}; GetOwnWeaponCount_Params Params;

	Params.BaseWeaponID = BaseWeaponID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Count = Params.Count;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnItemCount
inline void UUW-Lobby_ArmoryMain_C::GetOwnItemCount(int32_t ItemId, int32_t& Count) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnItemCount");

	struct GetOwnItemCount_Params {
		int32_t ItemId;
		int32_t& Count;
	}; GetOwnItemCount_Params Params;

	Params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Count = Params.Count;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnWeapon
inline void UUW-Lobby_ArmoryMain_C::CheckOwnWeapon(int32_t BaseWeaponID, char& IsOwn) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnWeapon");

	struct CheckOwnWeapon_Params {
		int32_t BaseWeaponID;
		char& IsOwn;
	}; CheckOwnWeapon_Params Params;

	Params.BaseWeaponID = BaseWeaponID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsOwn = Params.IsOwn;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnItems
inline void UUW-Lobby_ArmoryMain_C::CheckOwnItems(struct TArray<Unknown>& ItemId, char& AllOwn, int32_t& OwnCount) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnItems");

	struct CheckOwnItems_Params {
		struct TArray<Unknown>& ItemId;
		char& AllOwn;
		int32_t& OwnCount;
	}; CheckOwnItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemId = Params.ItemId;
	AllOwn = Params.AllOwn;
	OwnCount = Params.OwnCount;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMaterialList
inline void UUW-Lobby_ArmoryMain_C::OnChangedMaterialList(struct TArray<Unknown>& MaterialList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMaterialList");

	struct OnChangedMaterialList_Params {
		struct TArray<Unknown>& MaterialList;
	}; OnChangedMaterialList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MaterialList = Params.MaterialList;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedWeaponList
inline void UUW-Lobby_ArmoryMain_C::OnChangedWeaponList(struct TArray<Unknown>& WeaponList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedWeaponList");

	struct OnChangedWeaponList_Params {
		struct TArray<Unknown>& WeaponList;
	}; OnChangedWeaponList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	WeaponList = Params.WeaponList;

}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedGold
inline void UUW-Lobby_ArmoryMain_C::OnChangedGold(int32_t Gold) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedGold");

	struct OnChangedGold_Params {
		int32_t Gold;
	}; OnChangedGold_Params Params;

	Params.Gold = Gold;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedArmoryTab
inline void UUW-Lobby_ArmoryMain_C::OnChangedArmoryTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedArmoryTab");

	struct OnChangedArmoryTab_Params {
		struct FString TabName;
	}; OnChangedArmoryTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMainTab
inline void UUW-Lobby_ArmoryMain_C::OnChangedMainTab(struct FString TabName) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMainTab");

	struct OnChangedMainTab_Params {
		struct FString TabName;
	}; OnChangedMainTab_Params Params;

	Params.TabName = TabName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

