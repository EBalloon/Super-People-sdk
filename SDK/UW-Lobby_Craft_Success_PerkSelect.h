// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C
class UUW-Lobby_Craft_Success_PerkSelect_C : public UUserWidget {

public:

	struct Unknown UberGraphFrame; // 0x248 (8)
	struct Unknown Anim_Show; // 0x250 (8)
	struct Unknown Border; // 0x258 (8)
	struct Unknown Border_51; // 0x260 (8)
	struct Unknown btn_All_OK; // 0x268 (8)
	struct Unknown btn_Close; // 0x270 (8)
	struct Unknown HorizontalBox_CloseButton; // 0x278 (8)
	struct Unknown Image_2; // 0x280 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Close; // 0x288 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Close_2; // 0x290 (8)
	struct Unknown UW-Lobby_Craft_Success_Perk_Close_3; // 0x298 (8)
	struct Unknown UW-Lobby_WeaponInfo; // 0x2A0 (8)
	struct Unknown UW-Lobby_WeaponInfo_OptionList; // 0x2A8 (8)
	struct Unknown WidgetSwitcher_90; // 0x2B0 (8)
	struct TArray<Unknown> OpenedOptionList; // 0x2B8 (16)

	void OnClosePerkPopup(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OnClosePerkPopup(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetBlockInput(char bBlock); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetBlockInput(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void StartOpen(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.StartOpen(Public|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CheckAllOpened(char& AllOpened); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CheckAllOpened(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void OpenAllPerk(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OpenAllPerk(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void CreateOpenedPerkPopup(struct TArray<Unknown>& OptionList); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CreateOpenedPerkPopup(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void EndOpen(struct Unknown ItemOption); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.EndOpen(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void AddPerkList(struct Unknown& ItemOption); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.AddPerkList(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetButtonList(struct TArray<Unknown>& OptionIDList); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetButtonList(Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetWeaponInfo(struct Unknown CraftWeapon); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetWeaponInfo(Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void Construct(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void SetEventCreateOpenedPerkPopup(struct TArray<Unknown>& OptionList); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetEventCreateOpenedPerkPopup(HasOutParms|BlueprintCallable|BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(BlueprintEvent) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
	void ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect(Final|UbergraphFunction|HasDefaults) // <BravoHotelClient-Win64-Shipping.protected.exe+0x2B6DD70>
};

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OnClosePerkPopup
inline void UUW-Lobby_Craft_Success_PerkSelect_C::OnClosePerkPopup() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OnClosePerkPopup");

	struct OnClosePerkPopup_Params {
		
	}; OnClosePerkPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetBlockInput
inline void UUW-Lobby_Craft_Success_PerkSelect_C::SetBlockInput(char bBlock) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetBlockInput");

	struct SetBlockInput_Params {
		char bBlock;
	}; SetBlockInput_Params Params;

	Params.bBlock = bBlock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.StartOpen
inline void UUW-Lobby_Craft_Success_PerkSelect_C::StartOpen() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.StartOpen");

	struct StartOpen_Params {
		
	}; StartOpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CheckAllOpened
inline void UUW-Lobby_Craft_Success_PerkSelect_C::CheckAllOpened(char& AllOpened) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CheckAllOpened");

	struct CheckAllOpened_Params {
		char& AllOpened;
	}; CheckAllOpened_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AllOpened = Params.AllOpened;

}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OpenAllPerk
inline void UUW-Lobby_Craft_Success_PerkSelect_C::OpenAllPerk() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OpenAllPerk");

	struct OpenAllPerk_Params {
		
	}; OpenAllPerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CreateOpenedPerkPopup
inline void UUW-Lobby_Craft_Success_PerkSelect_C::CreateOpenedPerkPopup(struct TArray<Unknown>& OptionList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CreateOpenedPerkPopup");

	struct CreateOpenedPerkPopup_Params {
		struct TArray<Unknown>& OptionList;
	}; CreateOpenedPerkPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OptionList = Params.OptionList;

}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.EndOpen
inline void UUW-Lobby_Craft_Success_PerkSelect_C::EndOpen(struct Unknown ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.EndOpen");

	struct EndOpen_Params {
		struct Unknown ItemOption;
	}; EndOpen_Params Params;

	Params.ItemOption = ItemOption;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.AddPerkList
inline void UUW-Lobby_Craft_Success_PerkSelect_C::AddPerkList(struct Unknown& ItemOption) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.AddPerkList");

	struct AddPerkList_Params {
		struct Unknown& ItemOption;
	}; AddPerkList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ItemOption = Params.ItemOption;

}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetButtonList
inline void UUW-Lobby_Craft_Success_PerkSelect_C::SetButtonList(struct TArray<Unknown>& OptionIDList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetButtonList");

	struct SetButtonList_Params {
		struct TArray<Unknown>& OptionIDList;
	}; SetButtonList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OptionIDList = Params.OptionIDList;

}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetWeaponInfo
inline void UUW-Lobby_Craft_Success_PerkSelect_C::SetWeaponInfo(struct Unknown CraftWeapon) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetWeaponInfo");

	struct SetWeaponInfo_Params {
		struct Unknown CraftWeapon;
	}; SetWeaponInfo_Params Params;

	Params.CraftWeapon = CraftWeapon;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.Construct
inline void UUW-Lobby_Craft_Success_PerkSelect_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_PerkSelect_C::BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_PerkSelect_C::BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetEventCreateOpenedPerkPopup
inline void UUW-Lobby_Craft_Success_PerkSelect_C::SetEventCreateOpenedPerkPopup(struct TArray<Unknown>& OptionList) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetEventCreateOpenedPerkPopup");

	struct SetEventCreateOpenedPerkPopup_Params {
		struct TArray<Unknown>& OptionList;
	}; SetEventCreateOpenedPerkPopup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OptionList = Params.OptionList;

}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_PerkSelect_C::BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
inline void UUW-Lobby_Craft_Success_PerkSelect_C::BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params {
		
	}; BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect
inline void UUW-Lobby_Craft_Success_PerkSelect_C::ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect");

	struct ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

